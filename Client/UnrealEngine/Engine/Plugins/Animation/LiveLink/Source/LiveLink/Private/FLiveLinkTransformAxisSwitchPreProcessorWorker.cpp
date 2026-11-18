// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 2

// GetRole @ 14d053640

TSubclassOf<ULiveLinkRole> __thiscall
ULiveLinkTransformAxisSwitchPreProcessor::FLiveLinkTransformAxisSwitchPreProcessorWorker::GetRole
          (FLiveLinkTransformAxisSwitchPreProcessorWorker *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_ULiveLinkTransformRole_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<ULiveLinkRole>)in_RDX.field0_0x0;
}

// PreProcessFrame @ 14d06ceb0

bool __thiscall
ULiveLinkTransformAxisSwitchPreProcessor::FLiveLinkTransformAxisSwitchPreProcessorWorker::
PreProcessFrame(FLiveLinkTransformAxisSwitchPreProcessorWorker *this,
               FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_1)

{
  FLiveLinkTransformFrameData *pFVar1;
  TRotator<double> local_48;
  TVector<double>_u_0 local_28;
  
  pFVar1 = FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::Cast<FLiveLinkTransformFrameData>
                     (param_1);
  local_48.Pitch = (this->OffsetOrientation).Pitch;
  local_48.Yaw = (this->OffsetOrientation).Yaw;
  local_48.Roll = (this->OffsetOrientation).Roll;
  local_28._s_0.X = (this->OffsetPosition).field0_0x0._s_0.X;
  local_28._s_0.Y = (this->OffsetPosition).field0_0x0._s_0.Y;
  local_28._s_0.Z = (this->OffsetPosition).field0_0x0._s_0.Z;
  LiveLinkAxisSwitchPreProcessor::SwitchTransform
            (&pFVar1->Transform,this->FrontAxis,this->RightAxis,this->UpAxis,
             this->bUseOffsetPosition,(TVector<double> *)&local_28._s_0,this->bUseOffsetOrientation,
             &local_48);
  return true;
}

