// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 2

// GetRole @ 14d053500

TSubclassOf<ULiveLinkRole> __thiscall
ULiveLinkAnimationAxisSwitchPreProcessor::FLiveLinkAnimationAxisSwitchPreProcessorWorker::GetRole
          (FLiveLinkAnimationAxisSwitchPreProcessorWorker *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_ULiveLinkAnimationRole_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<ULiveLinkRole>)in_RDX.field0_0x0;
}

// PreProcessFrame @ 14d06ccd0

bool __thiscall
ULiveLinkAnimationAxisSwitchPreProcessor::FLiveLinkAnimationAxisSwitchPreProcessorWorker::
PreProcessFrame(FLiveLinkAnimationAxisSwitchPreProcessorWorker *this,
               FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_1)

{
  int iVar1;
  FLiveLinkAnimationFrameData *pFVar2;
  TTransform<double> *pTVar3;
  TTransform<double> *pTVar4;
  undefined1 local_res18 [16];
  TRotator<double> local_58;
  TVector<double>_u_0 local_38;
  
  pFVar2 = FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::Cast<FLiveLinkAnimationFrameData>
                     (param_1);
  iVar1 = (pFVar2->Transforms).ArrayNum;
  pTVar4 = (TTransform<double> *)(pFVar2->Transforms).AllocatorInstance.Data;
  pTVar3 = pTVar4 + iVar1;
  while( true ) {
    if ((pFVar2->Transforms).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Math::TTransform<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pTVar4 == pTVar3) break;
    local_58.Pitch = *(double *)&this->field_0x28;
    local_58.Yaw = *(double *)&this->field_0x30;
    local_58.Roll = *(double *)&this->field_0x38;
    local_38._s_0.X = (double)*(undefined8 *)&this->field_0x10;
    local_38._s_0.Y = (double)*(undefined8 *)&this->field_0x18;
    local_38._s_0.Z = (double)*(undefined8 *)&this->field_0x20;
    LiveLinkAxisSwitchPreProcessor::SwitchTransform
              (pTVar4,this->field_0x8,this->field_0x9,this->field_0xa,(bool)this->field_0xb,
               (TVector<double> *)&local_38._s_0,(bool)this->field_0xc,&local_58);
    pTVar4 = pTVar4 + 1;
  }
  return true;
}

