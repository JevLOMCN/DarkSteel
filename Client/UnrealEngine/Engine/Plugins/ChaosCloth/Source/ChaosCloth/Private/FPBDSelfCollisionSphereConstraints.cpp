// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 1

// FPBDSelfCollisionSphereConstraints @ 14db95050

FPBDSelfCollisionSphereConstraints * __thiscall
Chaos::Softs::FPBDSelfCollisionSphereConstraints::FPBDSelfCollisionSphereConstraints
          (FPBDSelfCollisionSphereConstraints *this,int param_1,int param_2,
          TMap<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>_>
          *param_3,FCollectionPropertyConstFacade *param_4)

{
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  ForAnyElementType FVar1;
  FCollectionPropertyConstFacade *this_01;
  uint uVar2;
  int iVar3;
  int *piVar4;
  FString *pFVar5;
  longlong lVar6;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar7;
  float fVar8;
  float fVar9;
  FString local_78;
  FString local_68;
  FString local_58 [4];
  
  this_01 = param_4;
  this_00 = &param_4->KeyNameIndices;
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,SelfCollisionSphereStiffnessName);
  fVar9 = __real_3f000000;
  fVar8 = __real_3f000000;
  if ((piVar4 != (int *)0x0) && (*piVar4 != -1)) {
    fVar8 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                      (this_01,*piVar4,&this_01->LowValueArray);
  }
  if (__real_3f800000 <= fVar8) {
    fVar8 = __real_3f800000;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,SelfCollisionSphereRadiusName);
  if ((piVar4 != (int *)0x0) && (*piVar4 != -1)) {
    fVar9 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                      (this_01,*piVar4,&this_01->LowValueArray);
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  pFVar5 = ::FName::ToString(&SelfCollisionSphereSetNameName,&local_68);
  pFVar5 = ::FString::FString(local_58,pFVar5);
  pTVar7 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
  param_4 = this_01;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_01,&local_78,&SelfCollisionSphereSetNameName,(<lambda_1> *)&param_4,pFVar5,
             (int *)0x0);
  iVar3 = local_78.Data.ArrayNum + -1;
  FVar1.Data = local_78.Data.AllocatorInstance.Data;
  if (local_78.Data.ArrayNum == 0) {
    iVar3 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar1.Data);
  iVar3 = TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*>,TDefaultMapHashableKeyFuncs<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_const_*,0>,FDefaultSetAllocator>
                      *)param_3,uVar2,&local_78);
  if ((iVar3 != -1) && (lVar6 = (longlong)iVar3 * 0x20 + *(longlong *)param_3, lVar6 != 0)) {
    pTVar7 = *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)(lVar6 + 0x10);
  }
  FPBDSelfCollisionSphereConstraintsBase::FPBDSelfCollisionSphereConstraintsBase
            ((FPBDSelfCollisionSphereConstraintsBase *)this,param_1,param_2,pTVar7,
             (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)0x0,fVar9,fVar8);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  this->_padding_ = (longlong)&___7FPBDSelfCollisionSphereConstraints_Softs_Chaos__6B_;
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,SelfCollisionSphereRadiusName);
  if (piVar4 == (int *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = *piVar4;
  }
  (this->SelfCollisionSphereRadiusIndex).Index = iVar3;
  piVar4 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,SelfCollisionSphereStiffnessName);
  if (piVar4 == (int *)0x0) {
    (this->SelfCollisionSphereStiffnessIndex).Index = -1;
  }
  else {
    (this->SelfCollisionSphereStiffnessIndex).Index = *piVar4;
  }
  return this;
}

