// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationWarpingRuntime
// Functions: 1

// FDebugData @ 14a71bae0

FDebugData * __thiscall
UE::Anim::FootPlacement::FDebugData::FDebugData(FDebugData *this,FDebugData *param_1)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<UE::Anim::FootPlacement::FDebugData::FLegInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  double dVar6;
  
  dVar6 = (param_1->OutputPelvisLocationWS).field0_0x0._s_0.Y;
  pTVar1 = &this->OutputFootLocationsWS;
  piVar2 = &(this->OutputFootLocationsWS).ArrayMax;
  (this->OutputPelvisLocationWS).field0_0x0._s_0.X =
       (param_1->OutputPelvisLocationWS).field0_0x0._s_0.X;
  (this->OutputPelvisLocationWS).field0_0x0._s_0.Y = dVar6;
  (this->OutputPelvisLocationWS).field0_0x0._s_0.Z =
       (param_1->OutputPelvisLocationWS).field0_0x0._s_0.Z;
  dVar6 = (param_1->InputPelvisLocationWS).field0_0x0._s_0.Y;
  (this->InputPelvisLocationWS).field0_0x0._s_0.X =
       (param_1->InputPelvisLocationWS).field0_0x0._s_0.X;
  (this->InputPelvisLocationWS).field0_0x0._s_0.Y = dVar6;
  (this->InputPelvisLocationWS).field0_0x0._s_0.Z =
       (param_1->InputPelvisLocationWS).field0_0x0._s_0.Z;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->OutputFootLocationsWS).ArrayNum;
  pFVar5 = (param_1->OutputFootLocationsWS).AllocatorInstance.Data;
  (this->OutputFootLocationsWS).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4 * 0x18);
  }
  pTVar1 = &this->InputFootLocationsWS;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->InputFootLocationsWS).ArrayMax;
  iVar4 = (param_1->InputFootLocationsWS).ArrayNum;
  pFVar5 = (param_1->InputFootLocationsWS).AllocatorInstance.Data;
  (this->InputFootLocationsWS).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4 * 0x18);
  }
  pTVar3 = &this->LegsInfo;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->LegsInfo).ArrayMax;
  iVar4 = (param_1->LegsInfo).ArrayNum;
  pFVar5 = (param_1->LegsInfo).AllocatorInstance.Data;
  (this->LegsInfo).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 4);
  }
  return this;
}

