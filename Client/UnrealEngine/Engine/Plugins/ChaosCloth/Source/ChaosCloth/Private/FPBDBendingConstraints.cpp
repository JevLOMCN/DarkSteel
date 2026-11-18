// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 5

// FPBDBendingConstraints @ 14db92a70

FPBDBendingConstraints * __thiscall
Chaos::Softs::FPBDBendingConstraints::FPBDBendingConstraints
          (FPBDBendingConstraints *this,FSolverParticles *param_1,int param_2,int param_3,
          TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *param_4,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_5,FCollectionPropertyConstFacade *param_6,bool param_7)

{
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  longlong lVar1;
  FCollectionPropertyConstFacade *pFVar2;
  float fVar3;
  FSolverParticles *pFVar4;
  TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
  *this_01;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  FString *pFVar11;
  ForAnyElementType FVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar15;
  float fVar16;
  undefined8 local_res8;
  FSolverParticles *local_res10;
  int local_res18;
  int local_res20;
  TArrayView<float_const_,int> local_118;
  FString local_108;
  TArrayView<float_const_,int> local_f8;
  TVector<float,2> local_e8;
  TVector<float,2> local_e0;
  TVector<float,2> local_d8;
  TArrayView<float_const_,int> *local_d0;
  TArrayView<float_const_,int> local_c8;
  undefined1 local_b8 [128];
  
  pFVar2 = param_6;
  this_00 = &param_6->KeyNameIndices;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,RestAngleTypeName);
  if ((piVar10 == (int *)0x0) || (*piVar10 == -1)) {
    param_6._0_4_ = 0;
  }
  else {
    iVar7 = FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                      (pFVar2,*piVar10,&pFVar2->LowValueArray);
    param_6._0_4_ = iVar7;
  }
  pTVar15 = &pFVar2->LowValueArray;
  local_e8 = GetRestAngleValueFromCollection(this,(FCollectionPropertyConstFacade *)local_b8);
  fVar3 = __real_3f800000;
  local_res8 = (TVector<float,2>)0x3f8000003f800000;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,BucklingStiffnessName);
  if ((piVar10 != (int *)0x0) && (iVar7 = *piVar10, iVar7 != -1)) {
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar7,&pFVar2->HighValueArray);
    local_res8._0_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (pFVar2,iVar7,pTVar15);
    local_res8._4_4_ = fVar16;
  }
  local_e0 = local_res8;
  local_res8 = (TVector<float,2>)0x0;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,BucklingRatioName);
  if ((piVar10 != (int *)0x0) && (iVar7 = *piVar10, iVar7 != -1)) {
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar7,&pFVar2->HighValueArray);
    local_res8._0_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (pFVar2,iVar7,pTVar15);
    local_res8._4_4_ = fVar16;
  }
  local_d8 = local_res8;
  local_res8 = (TVector<float,2>)0x3f8000003f800000;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,BendingElementStiffnessName);
  if ((piVar10 != (int *)0x0) && (iVar7 = *piVar10, iVar7 != -1)) {
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar7,&pFVar2->HighValueArray);
    local_res8._0_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (pFVar2,iVar7,pTVar15);
    local_res8._4_4_ = fVar16;
  }
  this_01 = param_5;
  local_d0 = GetRestAngleMapFromCollection
                       (this,(TArrayView<float_const_,int> *)(local_b8 + 0x38),param_5,pFVar2);
  pFVar11 = ::FName::ToString(&BucklingStiffnessName,(FString *)(local_b8 + 0x28));
  pFVar11 = ::FString::FString((FString *)&local_f8,pFVar11);
  param_5 = (TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
             *)pFVar2;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (pFVar2,&local_108,&BucklingStiffnessName,(<lambda_1> *)&param_5,pFVar11,(int *)0x0);
  pwVar14 = L"";
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_108.Data.ArrayNum != 0) {
    FVar12.Data = local_108.Data.AllocatorInstance.Data;
  }
  iVar7 = local_108.Data.ArrayNum + -1;
  if (local_108.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar12.Data);
  iVar7 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)this_01,uVar8,&local_108);
  if ((iVar7 == -1) || (lVar1 = *(longlong *)this_01 + (longlong)iVar7 * 0x28, lVar1 == 0)) {
    local_c8.DataPtr = (float *)0x0;
    local_c8._8_8_ = (ulonglong)(uint)local_c8._12_4_ << 0x20;
  }
  else {
    local_c8.DataPtr = *(float **)(lVar1 + 0x10);
    local_c8._8_8_ = *(longlong *)(lVar1 + 0x18);
  }
  pFVar11 = ::FName::ToString(&BucklingRatioName,(FString *)(local_b8 + 0x18));
  pFVar11 = ::FString::FString((FString *)&local_f8,pFVar11);
  param_5 = (TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
             *)pFVar2;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (pFVar2,(FString *)&local_118,&BucklingRatioName,(<lambda_1> *)&param_5,pFVar11,
             (int *)0x0);
  pfVar5 = local_118.DataPtr;
  if (local_118.ArrayNum == 0) {
    pwVar13 = L"";
    iVar7 = 0;
  }
  else {
    iVar7 = local_118.ArrayNum + -1;
    pwVar13 = (wchar_t *)local_118.DataPtr;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar13);
  iVar7 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)this_01,uVar8,(FString *)&local_118);
  if ((iVar7 == -1) || (lVar1 = *(longlong *)this_01 + (longlong)iVar7 * 0x28, lVar1 == 0)) {
    local_f8.DataPtr = (float *)0x0;
    local_f8._8_8_ = (ulonglong)(uint)local_f8._12_4_ << 0x20;
  }
  else {
    local_f8.DataPtr = *(float **)(lVar1 + 0x10);
    local_f8._8_8_ = *(longlong *)(lVar1 + 0x18);
  }
  pFVar11 = ::FName::ToString(&BendingElementStiffnessName,(FString *)(local_b8 + 8));
  pFVar11 = ::FString::FString((FString *)(local_b8 + 0x48),pFVar11);
  param_5 = (TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
             *)pFVar2;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (pFVar2,(FString *)&local_118,&BendingElementStiffnessName,(<lambda_1> *)&param_5,
             pFVar11,(int *)0x0);
  pfVar6 = local_118.DataPtr;
  if (local_118.ArrayNum == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = local_118.ArrayNum + -1;
    pwVar14 = (wchar_t *)local_118.DataPtr;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar14);
  iVar7 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)this_01,uVar8,(FString *)&local_118);
  pFVar4 = local_res10;
  if ((iVar7 == -1) || (lVar1 = *(longlong *)this_01 + (longlong)iVar7 * 0x28, lVar1 == 0)) {
    local_118.DataPtr = (float *)0x0;
    local_118._8_8_ = (ulonglong)(uint)local_118._12_4_ << 0x20;
  }
  else {
    local_118.DataPtr = *(float **)(lVar1 + 0x10);
    local_118._8_8_ = *(longlong *)(lVar1 + 0x18);
  }
  FPBDBendingConstraintsBase::FPBDBendingConstraintsBase
            ((FPBDBendingConstraintsBase *)this,local_res10,local_res18,local_res20,param_4,
             &local_118,&local_f8,&local_c8,local_d0,(TVector<float,2> *)&local_res8,&local_d8,
             &local_e0,(TVector<float,2> *)local_e8,(ERestAngleConstructionType)(int)param_6,param_7
             ,fVar3);
  if (pfVar6 != (float *)0x0) {
    FMemory::Free(pfVar6);
  }
  if ((FName *)local_b8._8_8_ != (FName *)0x0) {
    FMemory::Free((void *)local_b8._8_8_);
  }
  if (pfVar5 != (float *)0x0) {
    FMemory::Free(pfVar5);
  }
  if ((TVector<float> *)local_b8._24_8_ != (TVector<float> *)0x0) {
    FMemory::Free((void *)local_b8._24_8_);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if ((TVector<float> *)local_b8._40_8_ != (TVector<float> *)0x0) {
    FMemory::Free((void *)local_b8._40_8_);
  }
  this->_padding_ = (longlong)&___7FPBDBendingConstraints_Softs_Chaos__6B_;
  (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  (this->ConstraintsPerColorStartIndex).ArrayMax = 0;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,BendingElementStiffnessName);
  iVar7 = -1;
  if (piVar10 == (int *)0x0) {
    iVar9 = -1;
  }
  else {
    iVar9 = *piVar10;
  }
  (this->BendingElementStiffnessIndex).Index = iVar9;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,BucklingRatioName);
  if (piVar10 == (int *)0x0) {
    iVar9 = -1;
  }
  else {
    iVar9 = *piVar10;
  }
  (this->BucklingRatioIndex).Index = iVar9;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,BucklingStiffnessName);
  if (piVar10 == (int *)0x0) {
    iVar9 = -1;
  }
  else {
    iVar9 = *piVar10;
  }
  (this->BucklingStiffnessIndex).Index = iVar9;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,FlatnessRatioName);
  if (piVar10 == (int *)0x0) {
    iVar9 = -1;
  }
  else {
    iVar9 = *piVar10;
  }
  (this->FlatnessRatioIndex).Index = iVar9;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,RestAngleName);
  if (piVar10 == (int *)0x0) {
    iVar9 = -1;
  }
  else {
    iVar9 = *piVar10;
  }
  (this->RestAngleIndex).Index = iVar9;
  piVar10 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)this_00,RestAngleTypeName);
  if (piVar10 != (int *)0x0) {
    iVar7 = *piVar10;
  }
  (this->RestAngleTypeIndex).Index = iVar7;
  InitColor<Chaos::Softs::FSolverParticles>(this,pFVar4);
  return this;
}

// FPBDBendingConstraints @ 14db93060

FPBDBendingConstraints * __thiscall
Chaos::Softs::FPBDBendingConstraints::FPBDBendingConstraints
          (FPBDBendingConstraints *this,FSolverParticlesRange *param_1,
          TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *param_2,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_3,FCollectionPropertyConstFacade *param_4,bool param_5)

{
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  longlong lVar1;
  FCollectionPropertyConstFacade *pFVar2;
  float fVar3;
  FSolverParticlesRange *pFVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  FString *pFVar10;
  int iVar11;
  float *pfVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar15;
  float fVar16;
  undefined8 local_res8;
  FSolverParticlesRange *local_res10;
  TArray<Chaos::TVector<int,4>,TSizedDefaultAllocator<32>_> *local_res18;
  TVector<float,2> local_res20;
  TArrayView<float_const_,int> local_118;
  TArrayView<float_const_,int> local_108;
  TVector<float,2> local_f8;
  TVector<float,2> local_f0;
  TVector<float,2> local_e8;
  TArrayView<float_const_,int> *local_e0;
  TArrayView<float_const_,int> local_d8;
  undefined1 local_c8 [136];
  
  pFVar2 = param_4;
  this_00 = &param_4->KeyNameIndices;
  local_res10 = param_1;
  local_res18 = param_2;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,RestAngleTypeName);
  if ((piVar9 == (int *)0x0) || (*piVar9 == -1)) {
    param_4._0_1_ = Use3DRestAngles;
  }
  else {
    iVar7 = FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                      (param_4,*piVar9,&param_4->LowValueArray);
    param_4._0_1_ = (ERestAngleConstructionType)iVar7;
  }
  pTVar15 = &pFVar2->LowValueArray;
  local_res20 = GetRestAngleValueFromCollection(this,(FCollectionPropertyConstFacade *)local_c8);
  fVar3 = __real_3f800000;
  local_res8 = (TVector<float,2>)0x3f8000003f800000;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,BucklingStiffnessName);
  if ((piVar9 != (int *)0x0) && (iVar7 = *piVar9, iVar7 != -1)) {
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar7,&pFVar2->HighValueArray);
    local_res8._0_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (pFVar2,iVar7,pTVar15);
    local_res8._4_4_ = fVar16;
  }
  local_f8 = local_res8;
  local_res8 = (TVector<float,2>)0x0;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,BucklingRatioName);
  if ((piVar9 != (int *)0x0) && (iVar7 = *piVar9, iVar7 != -1)) {
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar7,&pFVar2->HighValueArray);
    local_res8._0_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (pFVar2,iVar7,pTVar15);
    local_res8._4_4_ = fVar16;
  }
  local_f0 = local_res8;
  local_res8 = (TVector<float,2>)0x3f8000003f800000;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,BendingElementStiffnessName);
  if ((piVar9 != (int *)0x0) && (iVar7 = *piVar9, iVar7 != -1)) {
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (pFVar2,iVar7,&pFVar2->HighValueArray);
    local_res8._0_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (pFVar2,iVar7,pTVar15);
    local_res8._4_4_ = fVar16;
  }
  local_e8 = local_res8;
  local_e0 = GetRestAngleMapFromCollection
                       (this,(TArrayView<float_const_,int> *)(local_c8 + 0x38),param_3,pFVar2);
  pFVar10 = ::FName::ToString(&BucklingStiffnessName,(FString *)(local_c8 + 0x28));
  pFVar10 = ::FString::FString((FString *)&local_108,pFVar10);
  local_res8 = (TVector<float,2>)pFVar2;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (pFVar2,(FString *)&local_118,&BucklingStiffnessName,(<lambda_1> *)&local_res8,pFVar10,
             (int *)0x0);
  pfVar5 = local_118.DataPtr;
  pwVar14 = L"";
  iVar7 = local_118.ArrayNum;
  pfVar12 = (float *)L"";
  if (iVar7 != 0) {
    pfVar12 = local_118.DataPtr;
  }
  iVar11 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar11 = 0;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,(wchar_t *)pfVar12);
  iVar7 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)param_3,uVar8,(FString *)&local_118);
  if ((iVar7 == -1) || (lVar1 = *(longlong *)param_3 + (longlong)iVar7 * 0x28, lVar1 == 0)) {
    local_d8.DataPtr = (float *)0x0;
    local_d8._8_8_ = (ulonglong)(uint)local_d8._12_4_ << 0x20;
  }
  else {
    local_d8.DataPtr = *(float **)(lVar1 + 0x10);
    local_d8._8_8_ = *(longlong *)(lVar1 + 0x18);
  }
  pFVar10 = ::FName::ToString(&BucklingRatioName,(FString *)(local_c8 + 0x18));
  pFVar10 = ::FString::FString((FString *)&local_108,pFVar10);
  local_res8 = (TVector<float,2>)pFVar2;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (pFVar2,(FString *)&local_118,&BucklingRatioName,(<lambda_1> *)&local_res8,pFVar10,
             (int *)0x0);
  pfVar12 = local_118.DataPtr;
  if (local_118.ArrayNum == 0) {
    pwVar13 = L"";
    iVar7 = 0;
  }
  else {
    iVar7 = local_118.ArrayNum + -1;
    pwVar13 = (wchar_t *)local_118.DataPtr;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar13);
  iVar7 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)param_3,uVar8,(FString *)&local_118);
  if ((iVar7 == -1) || (lVar1 = *(longlong *)param_3 + (longlong)iVar7 * 0x28, lVar1 == 0)) {
    local_108.DataPtr = (float *)0x0;
    local_108._8_8_ = (ulonglong)(uint)local_108._12_4_ << 0x20;
  }
  else {
    local_108.DataPtr = *(float **)(lVar1 + 0x10);
    local_108._8_8_ = *(longlong *)(lVar1 + 0x18);
  }
  pFVar10 = ::FName::ToString(&BendingElementStiffnessName,(FString *)(local_c8 + 8));
  pFVar10 = ::FString::FString((FString *)(local_c8 + 0x48),pFVar10);
  local_res8 = (TVector<float,2>)pFVar2;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (pFVar2,(FString *)&local_118,&BendingElementStiffnessName,(<lambda_1> *)&local_res8,
             pFVar10,(int *)0x0);
  pfVar6 = local_118.DataPtr;
  if (local_118.ArrayNum == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = local_118.ArrayNum + -1;
    pwVar14 = (wchar_t *)local_118.DataPtr;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar14);
  iVar7 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                      *)param_3,uVar8,(FString *)&local_118);
  pFVar4 = local_res10;
  if ((iVar7 == -1) || (lVar1 = *(longlong *)param_3 + (longlong)iVar7 * 0x28, lVar1 == 0)) {
    local_118.DataPtr = (float *)0x0;
    local_118._8_8_ = (ulonglong)(uint)local_118._12_4_ << 0x20;
  }
  else {
    local_118.DataPtr = *(float **)(lVar1 + 0x10);
    local_118._8_8_ = *(longlong *)(lVar1 + 0x18);
  }
  FPBDBendingConstraintsBase::FPBDBendingConstraintsBase
            ((FPBDBendingConstraintsBase *)this,local_res10,local_res18,&local_118,&local_108,
             &local_d8,local_e0,&local_e8,&local_f0,&local_f8,(TVector<float,2> *)local_res20,
             (ERestAngleConstructionType)param_4,param_5,fVar3);
  if (pfVar6 != (float *)0x0) {
    FMemory::Free(pfVar6);
  }
  if ((FName *)local_c8._8_8_ != (FName *)0x0) {
    FMemory::Free((void *)local_c8._8_8_);
  }
  if (pfVar12 != (float *)0x0) {
    FMemory::Free(pfVar12);
  }
  if ((TVector<float> *)local_c8._24_8_ != (TVector<float> *)0x0) {
    FMemory::Free((void *)local_c8._24_8_);
  }
  if (pfVar5 != (float *)0x0) {
    FMemory::Free(pfVar5);
  }
  if ((TVector<float> *)local_c8._40_8_ != (TVector<float> *)0x0) {
    FMemory::Free((void *)local_c8._40_8_);
  }
  this->_padding_ = (longlong)&___7FPBDBendingConstraints_Softs_Chaos__6B_;
  (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConstraintsPerColorStartIndex).ArrayNum = 0;
  (this->ConstraintsPerColorStartIndex).ArrayMax = 0;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,BendingElementStiffnessName);
  iVar7 = -1;
  if (piVar9 == (int *)0x0) {
    iVar11 = -1;
  }
  else {
    iVar11 = *piVar9;
  }
  (this->BendingElementStiffnessIndex).Index = iVar11;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,BucklingRatioName);
  if (piVar9 == (int *)0x0) {
    iVar11 = -1;
  }
  else {
    iVar11 = *piVar9;
  }
  (this->BucklingRatioIndex).Index = iVar11;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,BucklingStiffnessName);
  if (piVar9 == (int *)0x0) {
    iVar11 = -1;
  }
  else {
    iVar11 = *piVar9;
  }
  (this->BucklingStiffnessIndex).Index = iVar11;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,FlatnessRatioName);
  if (piVar9 == (int *)0x0) {
    iVar11 = -1;
  }
  else {
    iVar11 = *piVar9;
  }
  (this->FlatnessRatioIndex).Index = iVar11;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,RestAngleName);
  if (piVar9 == (int *)0x0) {
    iVar11 = -1;
  }
  else {
    iVar11 = *piVar9;
  }
  (this->RestAngleIndex).Index = iVar11;
  piVar9 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,RestAngleTypeName);
  if (piVar9 != (int *)0x0) {
    iVar7 = *piVar9;
  }
  (this->RestAngleTypeIndex).Index = iVar7;
  InitColor<Chaos::Softs::FSolverParticlesRange>(this,pFVar4);
  return this;
}

// ~FPBDBendingConstraints @ 14db9fcd0

void __thiscall
Chaos::Softs::FPBDBendingConstraints::~FPBDBendingConstraints(FPBDBendingConstraints *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FPBDBendingConstraints_Softs_Chaos__6B_;
  pFVar1 = (this->ConstraintsPerColorStartIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPBDBendingConstraintsBase::~FPBDBendingConstraintsBase((FPBDBendingConstraintsBase *)this);
  return;
}

// GetRestAngleMapFromCollection @ 14dbff9a0

TArrayView<float_const_,int> * __thiscall
Chaos::Softs::FPBDBendingConstraints::GetRestAngleMapFromCollection
          (FPBDBendingConstraints *this,TArrayView<float_const_,int> *__return_storage_ptr__,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_1,FCollectionPropertyConstFacade *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ForAnyElementType FVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  FString *pFVar7;
  uint uVar8;
  FName *pFVar9;
  FCollectionPropertyConstFacade *local_res20;
  FString local_38;
  FString local_28;
  FString local_18;
  
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&param_2->KeyNameIndices,RestAngleTypeName);
  uVar8 = 0;
  uVar4 = uVar8;
  if ((piVar6 != (int *)0x0) && (*piVar6 != -1)) {
    uVar4 = FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                      (param_2,*piVar6,&param_2->LowValueArray);
  }
  if ((char)uVar4 == '\0') {
LAB_14dbffaf3:
    __return_storage_ptr__->DataPtr = (float *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    if ((uVar4 & 0xff) == 1) {
      pFVar7 = ::FName::ToString(&FlatnessRatioName,&local_28);
      pFVar7 = ::FString::FString(&local_18,pFVar7);
      pFVar9 = &FlatnessRatioName;
    }
    else {
      if ((uVar4 & 0xff) != 2) goto LAB_14dbffaf3;
      pFVar7 = ::FName::ToString(&RestAngleName,&local_28);
      pFVar7 = ::FString::FString(&local_18,pFVar7);
      pFVar9 = &RestAngleName;
    }
    local_res20 = param_2;
    FCollectionPropertyConstFacade::
    SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
              (param_2,&local_38,pFVar9,(<lambda_1> *)&local_res20,pFVar7,(int *)0x0);
    uVar4 = local_38.Data.ArrayNum - 1;
    FVar3.Data = local_38.Data.AllocatorInstance.Data;
    if (local_38.Data.ArrayNum == 0) {
      uVar4 = uVar8;
      FVar3.Data = (FScriptContainerElement *)L"";
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar4,(wchar_t *)FVar3.Data);
    iVar5 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                        *)param_1,uVar4,&local_38);
    if ((iVar5 == -1) || (lVar1 = *(longlong *)param_1 + (longlong)iVar5 * 0x28, lVar1 == 0)) {
      __return_storage_ptr__->DataPtr = (float *)0x0;
      __return_storage_ptr__->ArrayNum = 0;
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + 0x18);
      __return_storage_ptr__->DataPtr = *(float **)(lVar1 + 0x10);
      *(undefined8 *)&__return_storage_ptr__->ArrayNum = uVar2;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetRestAngleValueFromCollection @ 14dbffca0

TVector<float,2> __thiscall
Chaos::Softs::FPBDBendingConstraints::GetRestAngleValueFromCollection
          (FPBDBendingConstraints *this,FCollectionPropertyConstFacade *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  FCollectionPropertyConstFacade *in_R8;
  float fVar4;
  float fVar5;
  undefined8 local_res18;
  
  piVar3 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&in_R8->KeyNameIndices,RestAngleTypeName);
  if ((piVar3 == (int *)0x0) || (*piVar3 == -1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                      (in_R8,*piVar3,&in_R8->LowValueArray);
  }
  if ((char)uVar2 == '\0') {
LAB_14dbffdbd:
    param_1->_padding_ = 0;
  }
  else {
    if ((uVar2 & 0xff) == 1) {
      local_res18 = 0;
      piVar3 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
               Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                     *)&in_R8->KeyNameIndices,FlatnessRatioName);
      if ((piVar3 != (int *)0x0) && (iVar1 = *piVar3, iVar1 != -1)) {
        fVar4 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (in_R8,iVar1,&in_R8->HighValueArray);
        fVar5 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (in_R8,iVar1,&in_R8->LowValueArray);
        local_res18 = CONCAT44(fVar4,fVar5);
        param_1->_padding_ = local_res18;
        return (TVector<float,2>)param_1;
      }
    }
    else {
      if ((uVar2 & 0xff) != 2) goto LAB_14dbffdbd;
      local_res18 = 0;
      piVar3 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
               Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                     *)&in_R8->KeyNameIndices,RestAngleName);
      if ((piVar3 != (int *)0x0) && (iVar1 = *piVar3, iVar1 != -1)) {
        fVar4 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (in_R8,iVar1,&in_R8->HighValueArray);
        fVar5 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                          (in_R8,iVar1,&in_R8->LowValueArray);
        local_res18 = CONCAT44(fVar4,fVar5);
      }
    }
    param_1->_padding_ = local_res18;
  }
  return (TVector<float,2>)param_1;
}

