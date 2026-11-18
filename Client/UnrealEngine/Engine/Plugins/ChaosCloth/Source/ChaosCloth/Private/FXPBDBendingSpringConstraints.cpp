// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 3

// FXPBDBendingSpringConstraints @ 14db9bde0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FXPBDBendingSpringConstraints * __thiscall
Chaos::Softs::FXPBDBendingSpringConstraints::FXPBDBendingSpringConstraints
          (FXPBDBendingSpringConstraints *this,FSolverParticles *param_1,int param_2,int param_3,
          TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *param_4,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_5,FCollectionPropertyConstFacade *param_6)

{
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  longlong *this_01;
  longlong lVar1;
  code *pcVar2;
  FCollectionPropertyConstFacade *pFVar3;
  float fVar4;
  TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
  *this_02;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  FString *pFVar9;
  FXPBDBendingSpringConstraints *pFVar10;
  int iVar11;
  ForAnyElementType FVar12;
  wchar_t *pwVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  FString local_110;
  FString local_100;
  FCollectionPropertyConstFacade *local_f0;
  FCollectionPropertyConstFacade *local_e8;
  TVector<float,2> local_e0;
  TArrayView<float_const_,int> local_d8;
  TArrayView<float_const_,int> local_c8;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78 [4];
  
  pFVar3 = param_6;
  this_00 = &param_6->KeyNameIndices;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDBendingSpringDampingName);
  if ((piVar8 == (int *)0x0) || (iVar7 = *piVar8, iVar7 == -1)) {
    fVar15 = 0.0;
    fVar14 = 0.0;
  }
  else {
    fVar14 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar3,iVar7,&pFVar3->HighValueArray);
    fVar15 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar3,iVar7,&pFVar3->LowValueArray);
    param_6 = (FCollectionPropertyConstFacade *)CONCAT44(fVar14,fVar15);
  }
  fVar4 = __real_4e6e6b28;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDBendingSpringStiffnessName);
  if ((piVar8 == (int *)0x0) || (iVar7 = *piVar8, iVar7 == -1)) {
    local_e0 = (TVector<float,2>)0x4e6e6b284e6e6b28;
  }
  else {
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar3,iVar7,&pFVar3->HighValueArray);
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar3,iVar7,&pFVar3->LowValueArray);
    local_e0._4_4_ = fVar16;
    local_e0._0_4_ = fVar17;
  }
  pFVar9 = ::FName::ToString(&XPBDBendingSpringDampingName,&local_98);
  pFVar9 = ::FString::FString(&local_88,pFVar9);
  local_f0 = pFVar3;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (pFVar3,&local_100,&XPBDBendingSpringDampingName,(<lambda_1> *)&local_f0,pFVar9,
             (int *)0x0);
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_100.Data.ArrayNum != 0) {
    FVar12.Data = local_100.Data.AllocatorInstance.Data;
  }
  iVar11 = 0;
  iVar7 = local_100.Data.ArrayNum + -1;
  if (local_100.Data.ArrayNum == 0) {
    iVar7 = iVar11;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar12.Data);
  this_02 = param_5;
  iVar7 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)param_5,uVar6,&local_100);
  if ((iVar7 == -1) || (lVar1 = *(longlong *)this_02 + (longlong)iVar7 * 0x28, lVar1 == 0)) {
    local_c8.DataPtr = (float *)0x0;
    local_c8._8_8_ = (ulonglong)(uint)local_c8._12_4_ << 0x20;
  }
  else {
    local_c8.DataPtr = *(float **)(lVar1 + 0x10);
    local_c8._8_8_ = *(longlong *)(lVar1 + 0x18);
  }
  pFVar9 = ::FName::ToString(&XPBDBendingSpringStiffnessName,&local_a8);
  pFVar9 = ::FString::FString(local_78,pFVar9);
  local_e8 = pFVar3;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (pFVar3,&local_110,&XPBDBendingSpringStiffnessName,(<lambda_1> *)&local_e8,pFVar9,
             (int *)0x0);
  if (local_110.Data.ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    iVar11 = local_110.Data.ArrayNum + -1;
    pwVar13 = (wchar_t *)local_110.Data.AllocatorInstance.Data;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar13);
  iVar7 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)this_02,uVar6,&local_110);
  if ((iVar7 == -1) || (lVar1 = *(longlong *)this_02 + (longlong)iVar7 * 0x28, lVar1 == 0)) {
    local_d8.DataPtr = (float *)0x0;
    local_d8._8_8_ = (ulonglong)(uint)local_d8._12_4_ << 0x20;
  }
  else {
    local_d8.DataPtr = *(float **)(lVar1 + 0x10);
    local_d8._8_8_ = *(longlong *)(lVar1 + 0x18);
  }
  FPBDSpringConstraintsBase::FPBDSpringConstraintsBase<2>
            ((FPBDSpringConstraintsBase *)this,param_1,param_2,param_3,param_4,&local_d8,&local_e0,
             true,fVar4);
  this->_padding_ = (longlong)&___7FXPBDSpringConstraints_Softs_Chaos__6B_;
  local_b8.DataPtr = (TVector<int,2> *)this->_padding_;
  local_b8.ArrayNum = (int)this->_padding_;
  if (local_b8.ArrayNum < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar10 = (FXPBDBendingSpringConstraints *)(*pcVar2)();
      return pFVar10;
    }
  }
  if (__real_447a0000 <= fVar15) {
    fVar15 = __real_447a0000;
  }
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  if (__real_447a0000 <= fVar14) {
    fVar14 = __real_447a0000;
  }
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  param_5 = (TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
             *)CONCAT44(fVar14,fVar15);
  FPBDWeightMap::FPBDWeightMap<2>
            ((FPBDWeightMap *)&this->_padding_,(TVector<float,2> *)&param_5,&local_c8,&local_b8,
             param_2,param_3,0x10,(void *)0x0);
  this->_padding_ = 0;
  this_01 = &this->_padding_;
  this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  piVar8 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *this_01 = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
            ((TArray<float,TSizedDefaultAllocator<32>_> *)&this->_padding_,(int)this->_padding_,
             Default);
  iVar7 = *piVar8;
  *(undefined4 *)&this->_padding_ = 0;
  if (iVar7 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this_01,0,piVar8);
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
            ((TArray<float,TSizedDefaultAllocator<32>_> *)this_01,(int)this->_padding_,Default);
  FXPBDSpringConstraints::InitColor<Chaos::Softs::FSolverParticles>
            ((FXPBDSpringConstraints *)this,param_1);
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  this->_padding_ = (longlong)&___7FXPBDBendingSpringConstraints_Softs_Chaos__6B_;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDBendingSpringStiffnessName);
  if (piVar8 == (int *)0x0) {
    iVar7 = -1;
  }
  else {
    iVar7 = *piVar8;
  }
  (this->XPBDBendingSpringStiffnessIndex).Index = iVar7;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDBendingSpringDampingName);
  if (piVar8 != (int *)0x0) {
    (this->XPBDBendingSpringDampingIndex).Index = *piVar8;
    return this;
  }
  (this->XPBDBendingSpringDampingIndex).Index = -1;
  return this;
}

// FXPBDBendingSpringConstraints @ 14db9c2d0

FXPBDBendingSpringConstraints * __thiscall
Chaos::Softs::FXPBDBendingSpringConstraints::FXPBDBendingSpringConstraints
          (FXPBDBendingSpringConstraints *this,FSolverParticlesRange *param_1,
          TArray<Chaos::TVector<int,2>,TSizedDefaultAllocator<32>_> *param_2,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_3,FCollectionPropertyConstFacade *param_4)

{
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  longlong lVar1;
  code *pcVar2;
  FCollectionPropertyConstFacade *pFVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  FString *pFVar9;
  FXPBDBendingSpringConstraints *pFVar10;
  int iVar11;
  ForAnyElementType FVar12;
  wchar_t *pwVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  FString local_130;
  FString local_120;
  FCollectionPropertyConstFacade *local_110;
  FCollectionPropertyConstFacade *local_108;
  TVector<float,2> local_100;
  TVector<float,2> local_f8;
  TArrayView<float_const_,int> local_f0;
  TArrayView<float_const_,int> local_e0;
  TArrayView<Chaos::TVector<int,2>_const_,int> local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90 [5];
  
  pFVar3 = param_4;
  this_00 = &param_4->KeyNameIndices;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDBendingSpringDampingName);
  if ((piVar8 == (int *)0x0) || (iVar7 = *piVar8, iVar7 == -1)) {
    fVar15 = 0.0;
    fVar14 = 0.0;
  }
  else {
    fVar14 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar3,iVar7,&pFVar3->HighValueArray);
    fVar15 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar3,iVar7,&pFVar3->LowValueArray);
  }
  fVar4 = __real_4e6e6b28;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDBendingSpringStiffnessName);
  if ((piVar8 == (int *)0x0) || (iVar7 = *piVar8, iVar7 == -1)) {
    local_100 = (TVector<float,2>)0x4e6e6b284e6e6b28;
  }
  else {
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar3,iVar7,&pFVar3->HighValueArray);
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar3,iVar7,&pFVar3->LowValueArray);
    local_100._4_4_ = fVar16;
    local_100._0_4_ = fVar17;
  }
  pFVar9 = ::FName::ToString(&XPBDBendingSpringDampingName,&local_b0);
  pFVar9 = ::FString::FString(&local_a0,pFVar9);
  local_110 = pFVar3;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (pFVar3,&local_130,&XPBDBendingSpringDampingName,(<lambda_1> *)&local_110,pFVar9,
             (int *)0x0);
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_130.Data.ArrayNum != 0) {
    FVar12.Data = local_130.Data.AllocatorInstance.Data;
  }
  iVar11 = 0;
  iVar7 = local_130.Data.ArrayNum + -1;
  if (local_130.Data.ArrayNum == 0) {
    iVar7 = iVar11;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar12.Data);
  iVar7 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)param_3,uVar6,&local_130);
  if ((iVar7 == -1) || (lVar1 = *(longlong *)param_3 + (longlong)iVar7 * 0x28, lVar1 == 0)) {
    local_e0.DataPtr = (float *)0x0;
    local_e0._8_8_ = (ulonglong)(uint)local_e0._12_4_ << 0x20;
  }
  else {
    local_e0.DataPtr = *(float **)(lVar1 + 0x10);
    local_e0._8_8_ = *(longlong *)(lVar1 + 0x18);
  }
  pFVar9 = ::FName::ToString(&XPBDBendingSpringStiffnessName,&local_c0);
  pFVar9 = ::FString::FString(local_90,pFVar9);
  local_108 = pFVar3;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (pFVar3,&local_120,&XPBDBendingSpringStiffnessName,(<lambda_1> *)&local_108,pFVar9,
             (int *)0x0);
  if (local_120.Data.ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    iVar11 = local_120.Data.ArrayNum + -1;
    pwVar13 = (wchar_t *)local_120.Data.AllocatorInstance.Data;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar13);
  iVar7 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)param_3,uVar6,&local_120);
  if ((iVar7 == -1) || (lVar1 = *(longlong *)param_3 + (longlong)iVar7 * 0x28, lVar1 == 0)) {
    local_f0.DataPtr = (float *)0x0;
    local_f0._8_8_ = (ulonglong)(uint)local_f0._12_4_ << 0x20;
  }
  else {
    local_f0.DataPtr = *(float **)(lVar1 + 0x10);
    local_f0._8_8_ = *(longlong *)(lVar1 + 0x18);
  }
  FPBDSpringConstraintsBase::FPBDSpringConstraintsBase<2>
            ((FPBDSpringConstraintsBase *)this,param_1,param_2,&local_f0,&local_100,true,fVar4);
  iVar7 = *(int *)((longlong)&this->_padding_ + 4);
  lVar1 = this->_padding_;
  this->_padding_ = (longlong)&___7FXPBDSpringConstraints_Softs_Chaos__6B_;
  local_d0.DataPtr = (TVector<int,2> *)this->_padding_;
  local_d0.ArrayNum = (int)this->_padding_;
  if (local_d0.ArrayNum < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar10 = (FXPBDBendingSpringConstraints *)(*pcVar2)();
      return pFVar10;
    }
  }
  param_4._0_4_ = fVar15;
  if (__real_447a0000 <= fVar15) {
    param_4._0_4_ = __real_447a0000;
  }
  if (param_4._0_4_ <= 0.0) {
    param_4._0_4_ = 0.0;
  }
  param_4._4_4_ = fVar14;
  if (__real_447a0000 <= fVar14) {
    param_4._4_4_ = __real_447a0000;
  }
  if (param_4._4_4_ <= 0.0) {
    param_4._4_4_ = 0.0;
  }
  local_f8._4_4_ = param_4._4_4_;
  local_f8._0_4_ = param_4._0_4_;
  FPBDWeightMap::FPBDWeightMap<2>
            ((FPBDWeightMap *)&this->_padding_,&local_f8,&local_e0,&local_d0,(int)lVar1,iVar7,0x10,
             (void *)0x0);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  param_4._0_4_ = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init
            ((TArray<float,TSizedDefaultAllocator<32>_> *)&this->_padding_,(float *)&param_4,
             (int)this->_padding_);
  FXPBDSpringConstraints::InitColor<Chaos::Softs::FSolverParticlesRange>
            ((FXPBDSpringConstraints *)this,param_1);
  if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data.AllocatorInstance.Data);
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  this->_padding_ = (longlong)&___7FXPBDBendingSpringConstraints_Softs_Chaos__6B_;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDBendingSpringStiffnessName);
  if (piVar8 == (int *)0x0) {
    iVar7 = -1;
  }
  else {
    iVar7 = *piVar8;
  }
  (this->XPBDBendingSpringStiffnessIndex).Index = iVar7;
  piVar8 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,XPBDBendingSpringDampingName);
  if (piVar8 != (int *)0x0) {
    (this->XPBDBendingSpringDampingIndex).Index = *piVar8;
    return this;
  }
  (this->XPBDBendingSpringDampingIndex).Index = -1;
  return this;
}

// ~FXPBDBendingSpringConstraints @ 14dba0490

void __thiscall
Chaos::Softs::FXPBDBendingSpringConstraints::~FXPBDBendingSpringConstraints
          (FXPBDBendingSpringConstraints *this)

{
  this->_padding_ = (longlong)&___7FXPBDSpringConstraints_Softs_Chaos__6B_;
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
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FPBDSpringConstraintsBase_Softs_Chaos__6B_;
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

