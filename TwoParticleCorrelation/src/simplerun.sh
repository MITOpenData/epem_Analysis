DOCENTRAL=1
DOCOPYPLOTS=1

domix=0
overwrite=1
owbarrel=0

VERBOSE=1

listsample=(0 1) #0=data, 1=mc
listetaselection=(0) #from this list of values (0 0.3 0.5 1.0 2.0) 
listgen=(0) #0=no gen selection, 1=gen selection
listaxis=(0) #0=beam, 1=thrust, 2=wta, 3=thrust perp, 4 =wta perp 
listmultiplicitytype=(0)  #0=standard multiplicity, multiplicity in barrel
listtypeEnergyBarrelSel=(0) #0=no rejection, 1=rejecting high energy in barrel, 2=rejecting high energy our of barrel
listvalueEnergyBarrelSel=(0) #(1.0 0.8 0.6 0.4 0.2)
listthirdjet=(0) #from this list of values (0 0.05 0.1 0.3) 
listetaselectionEnergyBarrelSel=(0) #from this list of values (0 0.3 0.5 1.0 2.0) 

################################################################
#### dont change anything below this if you dont know what you are doing #### 
################################################################

# list of axis choices
listthrust=(0 1 0 1 0)
listtwta=(0 0 1 0 1)
listtperp=(0 0 0 1 1)

listetacuts=(0 0.3 0.5 1.0 2.0) 
activateetacut=(0 1 1 1 1) 

listthirdjetcut=(0 0.05 0.1 0.3) 
activatethirdjetcut=(0 1 1 1) 
listactivateajrej=(0 1 1 1) 
listajrejcut=(0 0.1 0.1 0.1) 


listetacutsEnergyBarrelSel=(0 0.3 0.5 1.0 2.0) 
listEnergyBarrelSel=(1.0 0.8 0.6 0.4 0.2) #5



#REGULAR ANALYSIS, CENTRAL VALUES
AINPUT=( "/data/cmcginn/StudyMultSamples/ALEPH/LEP1/20180423/LEP1Data1993_recons_aftercut-MERGED.root" "/data/cmcginn/StudyMultSamples/ALEPH/MC/20180423/alephMCRecoAfterCutPaths_1994.root" )
AINPUTMIX=( "/data/cmcginn/StudyMultSamples/ALEPH/LEP1/20180423/LEP1Data1993_recons_aftercut-MERGED_Mix.root" "/data/cmcginn/StudyMultSamples/ALEPH/MC/20180423/alephMCRecoAfterCutPaths_1994.root" )
AOUTPUT=( "LEP1Data1992" "LEP1MC1994_20180323" )

function float_to_string()
{
    if [[ $# -ne 1 ]]
    then
        echo -e "${ERRCOLOR}error:${NC} invalid argument number - float_to_string()"
        return 1
    fi
    part1=`echo $1 | awk -F "." '{print $1}'`
    part2=`echo $1 | awk -F "." '{print $2}'`
    rt_float_to_string=${part1:-0}p${part2:-0}
    echo $rt_float_to_string
}

function produce_postfix()
{
    if [[ $# -ne 16 ]]
    then
        echo -e "\033[1;31merror:${NC} invalid argument number - produce_postfix()"
        return 1
    fi

    echo thrust${1}_mix${2}_wta${3}_perp${4}_gen${5}_ajrej${6}_ajrejcut$(float_to_string ${7})_threejet${8}_threejetcut$(float_to_string ${9})_owbarrel${10}_anatyperegion${11}_etabarrelcut$(float_to_string ${12})_typeEnergyBarrelSel${13}_etabarrelcutforEselection$(float_to_string ${14})_maxrelenergyinsidebarrel$(float_to_string ${15})_typemultiplicity${16}
}




sleep .5 

if [ $DOCENTRAL -eq 1 ]; then       
  for isample in ${listsample[@]}
    do
    for iaxis in ${listaxis[@]}
      do
      thrust=${listthrust[$iaxis]}
      wta=${listtwta[$iaxis]}
      perp=${listtperp[$iaxis]}
      
      for gen in ${listgen[@]}
        do  
        if [ $isample -eq 0 -a $gen -eq 1  ]; then       
        continue
        fi

        for ietacut in ${listetaselection[@]}
          do 
          etabarrelcut=${listetacuts[$ietacut]}
          acivateetacut=${activateetacut[$ietacut]}
          
          if [ $acivateetacut -eq 1 ]; then netaselection=(2)
          else netaselection=(0)
          fi
    
          for anatyperegion in ${netaselection[@]}
            do 
            
            for ithird in ${listthirdjet[@]}
            do 
              threejetcut=${listthirdjetcut[$ithird]}
              threejet=${activatethirdjetcut[$ithird]}
              ajrejcut=${listajrejcut[$ithird]}
              ajrej=${listactivateajrej[$ithird]}
        
              echo "loop"
              INPUTDATA=${AINPUT[$isample]}
              INPUTDATAMIX=""
              if [ $domix -eq 1 ]; then      
               INPUTDATAMIX=${AINPUTMIX[$isample]}
              fi
              for typeEnergyBarrelSel in ${listtypeEnergyBarrelSel[@]}
              do 
                for typemultiplicity in ${listmultiplicitytype[@]}
                do 
                  for ietacutbarrel in ${listetaselectionEnergyBarrelSel[@]}
                  do 
                    etabarrelcutforEselection=${listetacutsEnergyBarrelSel[$ietacutbarrel]}
                    for ievaluebarrelcut in ${listvalueEnergyBarrelSel[@]}
                    do 
                      maxrelenergyinsidebarrel=${listEnergyBarrelSel[$ievaluebarrelcut]}
                      OUTPUT=${AOUTPUT[$isample]}                           
                      suffix=${OUTPUT}_$(produce_postfix ${thrust} ${domix} ${wta} ${perp} ${gen} ${ajrej} ${ajrejcut} ${threejet} ${threejetcut} ${owbarrel} ${anatyperegion} ${etabarrelcut} ${typeEnergyBarrelSel} ${etabarrelcutforEselection} ${maxrelenergyinsidebarrel} ${typemultiplicity})
                      sleep .5  
                      OUTPUTROOT=rootfiles/${suffix}.root
                      OUTPUTHISTO=rootfiles/2PC_${suffix}.root
                      FOLDERPLOTS=plots/plots_${suffix}
                      OUTPUTPLOTS=$FOLDERPLOTS/${suffix}
                      echo $OUTPUTROOT
                      rm $OUTPUTHISTO
                      rm -rf $FOLDERPLOTS
                      mkdir $FOLDERPLOTS 
                      root -l -q -b "ridge_check.C+(\"$INPUTDATA\",\"$OUTPUTROOT\",\"$INPUTDATAMIX\","$overwrite","$thrust","$wta","$perp","$gen","$VERBOSE","${ajrej}","${ajrejcut}","${threejet}","${threejetcut}","${owbarrel}","${anatyperegion}","${etabarrelcut}","${typeEnergyBarrelSel}","${etabarrelcutforEselection}","${maxrelenergyinsidebarrel}","${typemultiplicity}")"
                      root -l -q -b "TPCPlots.C+(\"$OUTPUTROOT\",\"$OUTPUTHISTO\",\"$OUTPUTPLOTS\")" 
                    done # with E cut selection in barrel
                  done # with eta barrel selection for E cut
                done # with type of multiplicity
              done # with type of energy selection
            done # with three jets
          done # with eta cut option
        done # with eta selection
      done #done with gen 
    done #done with iaxis
  done #done with samples
fi

multlow=( 0 20 30 35 0 5 10 15 20 25 )
multhigh=( 20 30 999 999 5 10 15 20 25 30)



if [ $DOCOPYPLOTS -eq 1 ]; then      

  cd plots/
  rm -rf summary
  mkdir summary 
  cd summary


  for etaindex in 0 1 2 
  do 
  
    for indexmult in 0 1 2 3 4 5 6 7 8 9 
    do
    folder=${multlow[$indexmult]}_${multhigh[$indexmult]}_$etaindex
    mkdir $folder
    cd $folder
    cp ../../plots*/*ASummary_0_${folder}* .
    rm *.png
    mkdir thrust
    cd thrust
    mv ../*thrust1*.pdf .
    cd ..
    mkdir wta
    cd wta
    mv ../*wta1*.pdf .
    cd ..
    mkdir beam
    cd beam
    mv ../*.pdf .
    cd ..
    cd ..
  done
  done  
  cd ..
  cd ..
fi 
