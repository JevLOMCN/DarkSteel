// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 3

// FPBDLongRangeConstraints @ 14db94920

FPBDLongRangeConstraints * __thiscall
Chaos::Softs::FPBDLongRangeConstraints::FPBDLongRangeConstraints
          (FPBDLongRangeConstraints *this,FSolverParticles *param_1,int param_2,int param_3,
          TArray<TArrayView<TTuple<int,int,float>_const_,int>,TSizedDefaultAllocator<32>_> *param_4,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_5,FCollectionPropertyConstFacade *param_6,float param_7)

{
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  longlong lVar1;
  ForAnyElementType FVar2;
  float fVar3;
  FCollectionPropertyConstFacade *this_01;
  ForAnyElementType FVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  float fVar10;
  float fVar11;
  TVector<float,2> local_c8;
  TVector<float,2> local_c0;
  FString local_b8;
  TArrayView<float_const_,int> local_a8;
  TArrayView<float_const_,int> local_98;
  FString local_88;
  FString local_78;
  FString local_68 [3];
  
  this_01 = param_6;
  fVar3 = __real_3f800000;
  this_00 = &param_6->KeyNameIndices;
  piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,TetherScaleName);
  if ((piVar7 == (int *)0x0) || (iVar6 = *piVar7, iVar6 == -1)) {
    local_c8 = (TVector<float,2>)0x3f8000003f800000;
  }
  else {
    fVar10 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_01,iVar6,&this_01->HighValueArray);
    fVar11 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_01,iVar6,&this_01->LowValueArray);
    param_6 = (FCollectionPropertyConstFacade *)CONCAT44(fVar10,fVar11);
    local_c8 = (TVector<float,2>)param_6;
  }
  param_6 = (FCollectionPropertyConstFacade *)0x3f8000003f800000;
  piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,TetherStiffnessName);
  if ((piVar7 != (int *)0x0) && (iVar6 = *piVar7, iVar6 != -1)) {
    fVar10 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_01,iVar6,&this_01->HighValueArray);
    fVar11 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_01,iVar6,&this_01->LowValueArray);
    param_6 = (FCollectionPropertyConstFacade *)CONCAT44(fVar10,fVar11);
  }
  local_c0 = (TVector<float,2>)param_6;
  pFVar8 = ::FName::ToString(&TetherScaleName,&local_78);
  pFVar8 = ::FString::FString(local_68,pFVar8);
  param_6 = this_01;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_01,&local_b8,&TetherScaleName,(<lambda_1> *)&param_6,pFVar8,(int *)0x0);
  FVar4.Data = local_b8.Data.AllocatorInstance.Data;
  pwVar9 = L"";
  iVar6 = local_b8.Data.ArrayNum + -1;
  FVar2.Data = local_b8.Data.AllocatorInstance.Data;
  if (local_b8.Data.ArrayNum == 0) {
    iVar6 = 0;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar2.Data);
  iVar6 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)param_5,uVar5,&local_b8);
  if ((iVar6 == -1) || (lVar1 = *(longlong *)param_5 + (longlong)iVar6 * 0x28, lVar1 == 0)) {
    local_a8.DataPtr = (float *)0x0;
    local_a8._8_8_ = (ulonglong)(uint)local_a8._12_4_ << 0x20;
  }
  else {
    local_a8.DataPtr = *(float **)(lVar1 + 0x10);
    local_a8._8_8_ = *(longlong *)(lVar1 + 0x18);
  }
  pFVar8 = ::FName::ToString(&TetherStiffnessName,&local_88);
  pFVar8 = ::FString::FString(local_68,pFVar8);
  param_6 = this_01;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_01,&local_b8,&TetherStiffnessName,(<lambda_1> *)&param_6,pFVar8,(int *)0x0);
  if (local_b8.Data.ArrayNum == 0) {
    local_b8.Data.ArrayNum = 0;
  }
  else {
    local_b8.Data.ArrayNum = local_b8.Data.ArrayNum + -1;
    pwVar9 = (wchar_t *)local_b8.Data.AllocatorInstance.Data;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(local_b8.Data.ArrayNum,pwVar9);
  iVar6 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)param_5,uVar5,&local_b8);
  if ((iVar6 == -1) || (lVar1 = *(longlong *)param_5 + (longlong)iVar6 * 0x28, lVar1 == 0)) {
    local_98.DataPtr = (float *)0x0;
    local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
  }
  else {
    local_98.DataPtr = *(float **)(lVar1 + 0x10);
    local_98._8_8_ = *(longlong *)(lVar1 + 0x18);
  }
  FPBDLongRangeConstraintsBase::FPBDLongRangeConstraintsBase
            ((FPBDLongRangeConstraintsBase *)this,param_1,param_2,param_3,param_4,&local_98,
             &local_a8,&local_c0,&local_c8,fVar3,param_7);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  this->_padding_ = (longlong)&___7FPBDLongRangeConstraints_Softs_Chaos__6B_;
  piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,TetherStiffnessName);
  if (piVar7 == (int *)0x0) {
    iVar6 = -1;
  }
  else {
    iVar6 = *piVar7;
  }
  (this->TetherStiffnessIndex).Index = iVar6;
  piVar7 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,TetherScaleName);
  if (piVar7 != (int *)0x0) {
    (this->TetherScaleIndex).Index = *piVar7;
    return this;
  }
  (this->TetherScaleIndex).Index = -1;
  return this;
}

// FPBDLongRangeConstraints @ 14db94cc0

FPBDLongRangeConstraints * __thiscall
Chaos::Softs::FPBDLongRangeConstraints::FPBDLongRangeConstraints
          (FPBDLongRangeConstraints *this,FSolverParticlesRange *param_1,
          TArray<TArrayView<TTuple<int,int,float>_const_,int>,TSizedDefaultAllocator<32>_> *param_2,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_3,FCollectionPropertyConstFacade *param_4,float param_5)

{
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  longlong lVar1;
  float fVar2;
  FCollectionPropertyConstFacade *this_01;
  ForAnyElementType FVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  FString *pFVar7;
  int iVar8;
  ForAnyElementType FVar9;
  wchar_t *pwVar10;
  float fVar11;
  float fVar12;
  TVector<float,2> local_res20;
  TVector<float,2> local_d8;
  FString local_d0;
  TArrayView<float_const_,int> local_c0;
  TArrayView<float_const_,int> local_b0;
  FString local_a0;
  FString local_90;
  FString local_80 [4];
  
  this_01 = param_4;
  fVar2 = __real_3f800000;
  this_00 = &param_4->KeyNameIndices;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,TetherScaleName);
  if ((piVar6 == (int *)0x0) || (iVar5 = *piVar6, iVar5 == -1)) {
    local_res20 = (TVector<float,2>)0x3f8000003f800000;
  }
  else {
    fVar11 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_01,iVar5,&this_01->HighValueArray);
    fVar12 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_01,iVar5,&this_01->LowValueArray);
    param_4 = (FCollectionPropertyConstFacade *)CONCAT44(fVar11,fVar12);
    local_res20 = (TVector<float,2>)param_4;
  }
  param_4 = (FCollectionPropertyConstFacade *)0x3f8000003f800000;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,TetherStiffnessName);
  if ((piVar6 != (int *)0x0) && (iVar5 = *piVar6, iVar5 != -1)) {
    fVar11 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_01,iVar5,&this_01->HighValueArray);
    fVar12 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (this_01,iVar5,&this_01->LowValueArray);
    param_4 = (FCollectionPropertyConstFacade *)CONCAT44(fVar11,fVar12);
  }
  local_d8 = (TVector<float,2>)param_4;
  pFVar7 = ::FName::ToString(&TetherScaleName,&local_90);
  pFVar7 = ::FString::FString(local_80,pFVar7);
  param_4 = this_01;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_01,&local_d0,&TetherScaleName,(<lambda_1> *)&param_4,pFVar7,(int *)0x0);
  FVar3.Data = local_d0.Data.AllocatorInstance.Data;
  pwVar10 = L"";
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_d0.Data.ArrayNum != 0) {
    FVar9.Data = local_d0.Data.AllocatorInstance.Data;
  }
  iVar8 = 0;
  iVar5 = local_d0.Data.ArrayNum + -1;
  if (local_d0.Data.ArrayNum == 0) {
    iVar5 = iVar8;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar9.Data);
  iVar5 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)param_3,uVar4,&local_d0);
  if ((iVar5 == -1) || (lVar1 = *(longlong *)param_3 + (longlong)iVar5 * 0x28, lVar1 == 0)) {
    local_c0.DataPtr = (float *)0x0;
    local_c0._8_8_ = (ulonglong)(uint)local_c0._12_4_ << 0x20;
  }
  else {
    local_c0.DataPtr = *(float **)(lVar1 + 0x10);
    local_c0._8_8_ = *(longlong *)(lVar1 + 0x18);
  }
  pFVar7 = ::FName::ToString(&TetherStiffnessName,&local_a0);
  pFVar7 = ::FString::FString(local_80,pFVar7);
  param_4 = this_01;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (this_01,&local_d0,&TetherStiffnessName,(<lambda_1> *)&param_4,pFVar7,(int *)0x0);
  if (local_d0.Data.ArrayNum != 0) {
    iVar8 = local_d0.Data.ArrayNum + -1;
    pwVar10 = (wchar_t *)local_d0.Data.AllocatorInstance.Data;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar10);
  iVar5 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)param_3,uVar4,&local_d0);
  if ((iVar5 == -1) || (lVar1 = *(longlong *)param_3 + (longlong)iVar5 * 0x28, lVar1 == 0)) {
    local_b0.DataPtr = (float *)0x0;
    local_b0._8_8_ = (ulonglong)(uint)local_b0._12_4_ << 0x20;
  }
  else {
    local_b0.DataPtr = *(float **)(lVar1 + 0x10);
    local_b0._8_8_ = *(longlong *)(lVar1 + 0x18);
  }
  FPBDLongRangeConstraintsBase::FPBDLongRangeConstraintsBase
            ((FPBDLongRangeConstraintsBase *)this,param_1,param_2,&local_b0,&local_c0,&local_d8,
             &local_res20,fVar2,param_5);
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  this->_padding_ = (longlong)&___7FPBDLongRangeConstraints_Softs_Chaos__6B_;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,TetherStiffnessName);
  if (piVar6 == (int *)0x0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *piVar6;
  }
  (this->TetherStiffnessIndex).Index = iVar5;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,TetherScaleName);
  if (piVar6 == (int *)0x0) {
    (this->TetherScaleIndex).Index = -1;
    return this;
  }
  (this->TetherScaleIndex).Index = *piVar6;
  return this;
}

// ~FPBDLongRangeConstraints @ 14db9fd80

void __thiscall
Chaos::Softs::FPBDLongRangeConstraints::~FPBDLongRangeConstraints(FPBDLongRangeConstraints *this)

{
  this->_padding_ = (longlong)&___7FPBDLongRangeConstraintsBase_Softs_Chaos__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

