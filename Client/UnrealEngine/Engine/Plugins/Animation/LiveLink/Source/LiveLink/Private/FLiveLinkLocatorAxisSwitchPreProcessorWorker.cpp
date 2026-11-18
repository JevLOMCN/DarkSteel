// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 2

// GetRole @ 14d0535c0

TSubclassOf<ULiveLinkRole> __thiscall
ULiveLinkLocatorAxisSwitchPreProcessor::FLiveLinkLocatorAxisSwitchPreProcessorWorker::GetRole
          (FLiveLinkLocatorAxisSwitchPreProcessorWorker *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_ULiveLinkLocatorRole_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<ULiveLinkRole>)in_RDX.field0_0x0;
}

// PreProcessFrame @ 14d06cdc0

bool __thiscall
ULiveLinkLocatorAxisSwitchPreProcessor::FLiveLinkLocatorAxisSwitchPreProcessorWorker::
PreProcessFrame(FLiveLinkLocatorAxisSwitchPreProcessorWorker *this,
               FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FLiveLinkLocatorFrameData *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res18 [16];
  TRotator<double> local_58;
  TVector<double>_u_0 local_38;
  
  pFVar3 = FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::Cast<FLiveLinkLocatorFrameData>(param_1)
  ;
  iVar2 = (pFVar3->Locators).ArrayNum;
  pFVar4 = (pFVar3->Locators).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((pFVar3->Locators).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar4 == pFVar1) break;
    local_58.Pitch = *(double *)&this->field_0x28;
    local_58.Yaw = *(double *)&this->field_0x30;
    local_58.Roll = *(double *)&this->field_0x38;
    local_38._s_0.X = (double)*(undefined8 *)&this->field_0x10;
    local_38._s_0.Y = (double)*(undefined8 *)&this->field_0x18;
    local_38._s_0.Z = (double)*(undefined8 *)&this->field_0x20;
    LiveLinkLocationSwitchPreprocessor::SwitchTranslation
              ((TVector<double> *)pFVar4,this->field_0x8,this->field_0x9,this->field_0xa,
               (bool)this->field_0xb,(TVector<double> *)&local_38._s_0,(bool)this->field_0xc,
               &local_58);
    pFVar4 = pFVar4 + 0x18;
  }
  return true;
}

