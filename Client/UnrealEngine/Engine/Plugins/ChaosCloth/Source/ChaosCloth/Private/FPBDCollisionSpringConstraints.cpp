// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 4

// FPBDCollisionSpringConstraints @ 14db93bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPBDCollisionSpringConstraints * __thiscall
Chaos::Softs::FPBDCollisionSpringConstraints::FPBDCollisionSpringConstraints
          (FPBDCollisionSpringConstraints *this,int param_1,int param_2,FTriangleMesh *param_3,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_4,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_5,TMap<FString,TArrayView<int_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<int_const_,int>,0>_>
                   *param_6,FCollectionPropertyConstFacade *param_7)

{
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_00;
  longlong lVar1;
  TVector<float,2> TVar2;
  TVector<float,2> TVar3;
  ForAnyElementType FVar4;
  uint uVar5;
  int *piVar6;
  FString *pFVar7;
  TTuple<FString,TArrayView<int_const_,int>_> *pTVar8;
  TSet<Chaos::TVector<int,2>,DefaultKeyFuncs<Chaos::TVector<int,2>,0>,FDefaultSetAllocator> *pTVar9;
  int iVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStackY_288 [32];
  bool local_1f8;
  undefined8 local_1f0;
  FString local_1e8;
  int local_1d8;
  int local_1d4;
  float local_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  FTriangleMesh *local_1c0;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_1b8;
  TArrayView<int_const_,int> local_1b0;
  TArrayView<float_const_,int> local_1a0;
  TArrayView<float_const_,int> local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  TSet<Chaos::TVector<int,2>,DefaultKeyFuncs<Chaos::TVector<int,2>,0>,FDefaultSetAllocator>
  local_128;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_288;
  this_00 = &param_7->KeyNameIndices;
  local_1b8 = param_4;
  local_1d8 = param_2;
  local_1d4 = param_1;
  local_1c0 = param_3;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,SelfCollisionProximityStiffnessName);
  fVar19 = __real_3f800000;
  fVar14 = __real_3f800000;
  if ((piVar6 != (int *)0x0) && (*piVar6 != -1)) {
    fVar14 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_7,*piVar6,&param_7->LowValueArray);
  }
  pTVar13 = &param_7->LowValueArray;
  local_1f0._0_4_ = 0.0;
  local_1f0._4_4_ = 0.0;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,SelfCollisionKinematicColliderFrictionName);
  if ((piVar6 != (int *)0x0) && (iVar10 = *piVar6, iVar10 != -1)) {
    fVar15 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_7,iVar10,&param_7->HighValueArray);
    local_1f0._0_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (param_7,iVar10,pTVar13);
    local_1f0._4_4_ = fVar15;
  }
  local_1d0 = (float)local_1f0;
  if (fVar19 <= (float)local_1f0) {
    local_1d0 = fVar19;
  }
  fStack_1cc = local_1f0._4_4_;
  if (fVar19 <= local_1f0._4_4_) {
    fStack_1cc = fVar19;
  }
  if (local_1d0 <= 0.0) {
    local_1d0 = 0.0;
  }
  if (fStack_1cc <= 0.0) {
    fStack_1cc = 0.0;
  }
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,SelfCollisionKinematicColliderStiffnessName);
  fVar15 = fVar19;
  if ((piVar6 != (int *)0x0) && (*piVar6 != -1)) {
    fVar15 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_7,*piVar6,pTVar13);
  }
  if (fVar19 <= fVar15) {
    fVar15 = fVar19;
  }
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,SelfCollisionKinematicColliderThicknessName);
  if ((piVar6 == (int *)0x0) || (*piVar6 == -1)) {
    fVar16 = 0.0;
  }
  else {
    fVar16 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_7,*piVar6,pTVar13);
  }
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,SelfCollideAgainstKinematicCollidersOnlyName);
  if ((piVar6 == (int *)0x0) || (*piVar6 == -1)) {
    local_1f8 = false;
  }
  else {
    local_1f8 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                          (param_7,*piVar6,pTVar13);
  }
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,SelfCollisionFrictionName);
  if ((piVar6 == (int *)0x0) || (*piVar6 == -1)) {
    fVar17 = 0.0;
  }
  else {
    fVar17 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_7,*piVar6,pTVar13);
  }
  if (fVar19 <= fVar17) {
    fVar17 = fVar19;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,SelfCollisionStiffnessName);
  fVar18 = __real_3f000000;
  if ((piVar6 != (int *)0x0) && (*piVar6 != -1)) {
    fVar18 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_7,*piVar6,pTVar13);
  }
  if (fVar19 <= fVar18) {
    fVar18 = fVar19;
  }
  local_1f0._0_4_ = 1.0;
  local_1f0._4_4_ = 1.0;
  if (fVar18 <= 0.0) {
    fVar18 = 0.0;
  }
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,SelfCollisionThicknessName);
  if ((piVar6 != (int *)0x0) && (iVar10 = *piVar6, iVar10 != -1)) {
    fVar19 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_7,iVar10,&param_7->HighValueArray);
    local_1f0._0_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (param_7,iVar10,pTVar13);
    local_1f0._4_4_ = fVar19;
  }
  local_1c8 = (float)local_1f0;
  if ((float)local_1f0 <= 0.0) {
    local_1c8 = 0.0;
  }
  fStack_1c4 = local_1f0._4_4_;
  if (local_1f0._4_4_ <= 0.0) {
    fStack_1c4 = 0.0;
  }
  pFVar7 = ::FName::ToString(&SelfCollisionLayersName,&local_150);
  pFVar7 = ::FString::FString(&local_1e8,pFVar7);
  local_1f0 = param_7;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (param_7,&local_180,&SelfCollisionLayersName,(<lambda_1> *)&local_1f0,pFVar7,(int *)0x0)
  ;
  pTVar8 = TSet<TTuple<FString,TArrayView<int_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<int_const_,int>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,TArrayView<int_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<int_const_,int>,0>,FDefaultSetAllocator>
                   *)param_6,&local_180);
  iVar10 = 0;
  if (pTVar8 == (TTuple<FString,TArrayView<int_const_,int>_> *)0x0) {
    local_1b0.DataPtr = (int *)0x0;
    local_1b0._8_8_ = (ulonglong)(uint)local_1b0._12_4_ << 0x20;
  }
  else {
    local_1b0.DataPtr = *(int **)&pTVar8->field_0x10;
    local_1b0._8_8_ = *(undefined8 *)&pTVar8->field_0x18;
  }
  pFVar7 = ::FName::ToString(&SelfCollisionThicknessName,&local_160);
  pFVar7 = ::FString::FString(&local_140,pFVar7);
  local_1f0 = param_7;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (param_7,&local_1e8,&SelfCollisionThicknessName,(<lambda_1> *)&local_1f0,pFVar7,
             (int *)0x0);
  FVar4.Data = local_1e8.Data.AllocatorInstance.Data;
  pwVar12 = L"";
  if (local_1e8.Data.ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    iVar10 = local_1e8.Data.ArrayNum + -1;
    pwVar11 = (wchar_t *)local_1e8.Data.AllocatorInstance.Data;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,pwVar11);
  iVar10 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                       *)param_5,uVar5,&local_1e8);
  if ((iVar10 == -1) || (lVar1 = *(longlong *)param_5 + (longlong)iVar10 * 0x28, lVar1 == 0)) {
    local_1a0.DataPtr = (float *)0x0;
    local_1a0._8_8_ = (ulonglong)(uint)local_1a0._12_4_ << 0x20;
  }
  else {
    local_1a0.DataPtr = *(float **)(lVar1 + 0x10);
    local_1a0._8_8_ = *(longlong *)(lVar1 + 0x18);
  }
  pFVar7 = ::FName::ToString(&SelfCollisionKinematicColliderFrictionName,&local_170);
  pFVar7 = ::FString::FString(&local_140,pFVar7);
  local_1f0 = param_7;
  FCollectionPropertyConstFacade::
  SafeGet<_Chaos::Softs::FCollectionPropertyConstFacade::GetStringValue_::__l2::<lambda_1>,FString>
            (param_7,&local_1e8,&SelfCollisionKinematicColliderFrictionName,(<lambda_1> *)&local_1f0
             ,pFVar7,(int *)0x0);
  if (local_1e8.Data.ArrayNum == 0) {
    local_1e8.Data.ArrayNum = 0;
  }
  else {
    local_1e8.Data.ArrayNum = local_1e8.Data.ArrayNum + -1;
    pwVar12 = (wchar_t *)local_1e8.Data.AllocatorInstance.Data;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(local_1e8.Data.ArrayNum,pwVar12);
  iVar10 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                       *)param_5,uVar5,&local_1e8);
  if ((iVar10 == -1) || (lVar1 = *(longlong *)param_5 + (longlong)iVar10 * 0x28, lVar1 == 0)) {
    local_190.DataPtr = (float *)0x0;
    local_190._8_8_ = (ulonglong)(uint)local_190._12_4_ << 0x20;
  }
  else {
    local_190.DataPtr = *(float **)(lVar1 + 0x10);
    local_190._8_8_ = *(longlong *)(lVar1 + 0x18);
  }
  pTVar9 = GenerateDisabledCollisionElements(&local_128,local_1c0,param_7);
  TVar2._4_4_ = fStack_1cc;
  TVar2._0_4_ = local_1d0;
  TVar3._4_4_ = fStack_1c4;
  TVar3._0_4_ = local_1c8;
  FPBDCollisionSpringConstraintsBase::FPBDCollisionSpringConstraintsBase
            ((FPBDCollisionSpringConstraintsBase *)this,local_1d4,local_1d8,local_1c0,local_1b8,
             pTVar9,&local_190,&local_1a0,&local_1b0,TVar3,fVar18,fVar17,local_1f8,fVar16,fVar15,
             TVar2,fVar14);
  local_128.HashSize = 0;
  if (local_128.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_128.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<Chaos::TVector<int,2>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<Chaos::TVector<int,2>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_128.Elements);
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  this->_padding_ = (longlong)&___7FPBDCollisionSpringConstraints_Softs_Chaos__6B_;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,SelfCollisionThicknessName);
  if (piVar6 == (int *)0x0) {
    iVar10 = -1;
  }
  else {
    iVar10 = *piVar6;
  }
  (this->SelfCollisionThicknessIndex).Index = iVar10;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,SelfCollisionStiffnessName);
  if (piVar6 == (int *)0x0) {
    iVar10 = -1;
  }
  else {
    iVar10 = *piVar6;
  }
  (this->SelfCollisionStiffnessIndex).Index = iVar10;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,SelfCollisionFrictionName);
  if (piVar6 == (int *)0x0) {
    iVar10 = -1;
  }
  else {
    iVar10 = *piVar6;
  }
  (this->SelfCollisionFrictionIndex).Index = iVar10;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,SelfCollisionProximityStiffnessName);
  if (piVar6 == (int *)0x0) {
    iVar10 = -1;
  }
  else {
    iVar10 = *piVar6;
  }
  (this->SelfCollisionProximityStiffnessIndex).Index = iVar10;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,SelfCollisionLayersName);
  if (piVar6 == (int *)0x0) {
    iVar10 = -1;
  }
  else {
    iVar10 = *piVar6;
  }
  (this->SelfCollisionLayersIndex).Index = iVar10;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,SelfCollideAgainstKinematicCollidersOnlyName);
  if (piVar6 == (int *)0x0) {
    iVar10 = -1;
  }
  else {
    iVar10 = *piVar6;
  }
  (this->SelfCollideAgainstKinematicCollidersOnlyIndex).Index = iVar10;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,SelfCollisionKinematicColliderThicknessName);
  if (piVar6 == (int *)0x0) {
    iVar10 = -1;
  }
  else {
    iVar10 = *piVar6;
  }
  (this->SelfCollisionKinematicColliderThicknessIndex).Index = iVar10;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,SelfCollisionKinematicColliderStiffnessName);
  if (piVar6 == (int *)0x0) {
    iVar10 = -1;
  }
  else {
    iVar10 = *piVar6;
  }
  (this->SelfCollisionKinematicColliderStiffnessIndex).Index = iVar10;
  piVar6 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)this_00,SelfCollisionKinematicColliderFrictionName);
  if (piVar6 == (int *)0x0) {
    (this->SelfCollisionKinematicColliderFrictionIndex).Index = -1;
  }
  else {
    (this->SelfCollisionKinematicColliderFrictionIndex).Index = *piVar6;
  }
  return this;
}

// ~FPBDCollisionSpringConstraints @ 14db9fd20

void __thiscall
Chaos::Softs::FPBDCollisionSpringConstraints::~FPBDCollisionSpringConstraints
          (FPBDCollisionSpringConstraints *this)

{
  this->_padding_ = (longlong)&___7FPBDCollisionSpringConstraints_Softs_Chaos__6B_;
  FPBDCollisionSpringConstraintsBase::~FPBDCollisionSpringConstraintsBase
            ((FPBDCollisionSpringConstraintsBase *)this);
  return;
}

// GenerateDisabledCollisionElements @ 14dbf45c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSet<Chaos::TVector<int,2>,DefaultKeyFuncs<Chaos::TVector<int,2>,0>,FDefaultSetAllocator> * __cdecl
Chaos::Softs::FPBDCollisionSpringConstraints::GenerateDisabledCollisionElements
          (TSet<Chaos::TVector<int,2>,DefaultKeyFuncs<Chaos::TVector<int,2>,0>,FDefaultSetAllocator>
           *__return_storage_ptr__,FTriangleMesh *param_1,FCollectionPropertyConstFacade *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  TBitArray<FDefaultBitArrayAllocator> *pTVar6;
  undefined8 uVar7;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar8;
  longlong *plVar9;
  undefined4 uVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  TMap<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
  *pTVar16;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar17;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar18;
  TSet<Chaos::TVector<int,2>,DefaultKeyFuncs<Chaos::TVector<int,2>,0>,FDefaultSetAllocator> *pTVar19
  ;
  longlong lVar20;
  byte bVar21;
  int iVar22;
  undefined1 *puVar23;
  uint *puVar24;
  ulonglong uVar25;
  ForElementType<FSetElementId> FVar26;
  ForElementType<FSetElementId> FVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint *puVar31;
  uint uVar32;
  bool bVar33;
  undefined1 auStackY_468 [32];
  undefined1 local_437;
  undefined1 local_436;
  undefined1 local_435;
  undefined1 local_434 [4];
  uint local_430;
  TSet<Chaos::TVector<int,2>,DefaultKeyFuncs<Chaos::TVector<int,2>,0>,FDefaultSetAllocator>
  *local_428;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_420;
  undefined8 uStack_418;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  int local_3f8;
  undefined4 uStack_3f4;
  int local_3f0;
  int local_3ec;
  uint local_3e8;
  uint local_3e4;
  uint local_3e0;
  uint local_3dc;
  FTriangleMesh *local_3d8;
  uint local_3d0;
  int local_3cc;
  int local_3c8;
  uint uStack_3c4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_3c0;
  undefined4 local_3b8;
  uint uStack_3b4;
  int iStack_3b0;
  undefined4 uStack_3ac;
  TBitArray<FDefaultBitArrayAllocator> *local_3a8;
  uint local_3a0;
  uint uStack_39c;
  int *local_398;
  uint local_390;
  uint uStack_38c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_388;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_368;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_348;
  int local_328;
  int local_324;
  int local_320;
  int local_31c;
  int local_318;
  int local_314;
  int local_310;
  int local_30c;
  undefined4 local_308;
  undefined4 local_304;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_300;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2f8;
  undefined8 uStack_2d8;
  undefined1 local_2d0 [12];
  uint uStack_2c4;
  TBitArray<FDefaultBitArrayAllocator> *local_2c0;
  undefined8 uStack_2b8;
  longlong local_2b0;
  undefined8 uStack_2a8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_2a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_298;
  undefined8 uStack_278;
  longlong *local_270;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_268;
  undefined8 uStack_248;
  longlong *local_240;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_238;
  undefined8 uStack_218;
  FSparseArrayAllocationInfo local_210;
  FSparseArrayAllocationInfo local_200;
  TRangedForIterator local_1f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1c0;
  undefined4 local_184;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_180;
  undefined4 local_144;
  undefined1 local_138 [32];
  uint *local_118;
  uint local_110;
  undefined4 local_10c;
  undefined4 local_108;
  int local_104;
  ForElementType<FSetElementId> local_100;
  int local_f0 [2];
  undefined1 local_e8 [32];
  undefined8 local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  undefined1 local_b0 [8];
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_60;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_468;
  bVar33 = -1 < CpuChannel->Enabled;
  local_428 = __return_storage_ptr__;
  local_3d8 = param_1;
  if (bVar33) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_static_class_TSet<Chaos::TVector<int,2>,DefaultKeyFuncs<Chaos::TVector<int,2>,0>,FDefaultSetAllocator>___cdecl_Chaos::Softs::FPBDCollisionSpringConstraints::GenerateDisabledCollisionElements(Chaos::FTriangleMesh_const&___ptr64,Chaos::Softs::FCollectionPropertyConstFacade_const&___ptr64)'
                ::__l2::__CpuProfilerEventSpecId200,
               "FPBDCollisionSpringConstraints_GenerateDisabledCollisionElements",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDCollisionSpringConstraints.h"
               ,200);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_static_class_TSet<Chaos::TVector<int,2>,DefaultKeyFuncs<Chaos::TVector<int,2>,0>,FDefaultSetAllocator>___cdecl_Chaos::Softs::FPBDCollisionSpringConstraints::GenerateDisabledCollisionElements(Chaos::FTriangleMesh_const&___ptr64,Chaos::Softs::FCollectionPropertyConstFacade_const&___ptr64)'
               ::__l2::__CpuProfilerEventSpecId200);
  }
  piVar15 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                      ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        *)&param_2->KeyNameIndices,SelfCollisionDisableNeighborDistanceName);
  if ((piVar15 == (int *)0x0) || (*piVar15 == -1)) {
    iVar12 = 5;
  }
  else {
    iVar12 = FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                       (param_2,*piVar15,&param_2->LowValueArray);
  }
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  piVar15 = (int *)&(__return_storage_ptr__->Elements).field_0x8;
  *piVar15 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0xc = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  local_3f0 = iVar12;
  local_398 = piVar15;
  FTriangleMesh::GetVertexRange(param_1);
  local_430 = local_3d0;
  uVar30 = local_3d0;
  if ((int)local_3d0 <= local_3cc) {
    do {
      local_e8._0_8_ = 0;
      local_e8._8_8_ = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_bc = 0x80;
      local_b8 = 0xffffffff;
      local_b4 = 0;
      local_a8 = (ForElementType<FSetElementId>)0x0;
      local_a0 = 0;
      local_98._0_8_ = (FScriptContainerElement *)0x0;
      local_98._8_8_ = 0;
      local_78 = 0;
      local_70 = 0;
      local_6c = 0x80;
      local_68 = 0xffffffff;
      local_64 = 0;
      local_60.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_50 = 0;
      local_138._0_8_ = (FScriptContainerElement *)0x0;
      local_138._8_8_ = 0;
      local_118 = (uint *)0x0;
      local_110 = 0;
      local_10c = 0x80;
      local_108 = 0xffffffff;
      local_104 = 0;
      local_100.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_f0[0] = 0;
      local_430 = uVar30;
      pTVar16 = FTriangleMesh::GetPointToNeighborsMap(param_1);
      pTVar17 = TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                ::FindChecked((TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                               *)pTVar16,uVar30);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_138,pTVar17);
      local_368.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
      local_368._padding_._0_4_ = 0;
      local_368._padding_._4_4_ = 1;
      local_368.UnvisitedBitMask = 0xffffffff;
      local_368.CurrentBitIndex = 0;
      local_368.BaseBitIndex = 0;
      if (local_110 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_368);
      }
      uStack_418 = CONCAT44(local_368._padding_._4_4_,(undefined4)local_368._padding_);
      local_420 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_138;
      uStack_408 = CONCAT44(local_368.CurrentBitIndex,local_368.UnvisitedBitMask);
      uStack_400 = CONCAT44(local_368._28_4_,local_368.BaseBitIndex);
      local_3f8 = local_138._8_4_ - local_104;
      pTStack_410 = local_368.Array;
      uStack_2a8._4_4_ = uStack_3f4;
      uStack_2a8._0_4_ = local_3f8;
      local_2c0 = local_368.Array;
      local_2d0._0_8_ = local_420;
      unique0x10001e6e = uStack_418;
      uStack_2b8 = uStack_408;
      local_2b0 = uStack_400;
      pTVar18 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          (&local_1c0,(TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10),
                           local_110);
      local_420 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_138;
      uStack_418 = pTVar18->_padding_;
      pTStack_410 = pTVar18->Array;
      uStack_408._0_4_ = pTVar18->UnvisitedBitMask;
      uStack_408._4_4_ = pTVar18->CurrentBitIndex;
      uStack_400 = *(longlong *)&pTVar18->BaseBitIndex;
      local_3f8 = local_138._8_4_ - local_104;
      local_1f0._44_4_ = uStack_3f4;
      local_1f0.InitialNum = local_3f8;
      local_1f0._padding_ = (longlong)local_420;
      local_1f0._padding_ = uStack_418;
      local_1f0._padding_ = (longlong)pTStack_410;
      local_1f0._padding_ = uStack_408;
      local_1f0._padding_ = uStack_400;
      bVar11 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=((TRangedForIterator *)local_2d0,&local_1f0);
      if (bVar11) {
        do {
          local_3e8 = *(uint *)(*(longlong *)local_2d0._0_8_ + (longlong)uStack_2b8._4_4_ * 0xc);
          if ((local_3e8 == uVar30) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SubElement != Element",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMesh.h"
                                  ,0x7e,L""), bVar11)) {
            pcVar5 = (code *)swi(3);
            pTVar19 = (TSet<Chaos::TVector<int,2>,DefaultKeyFuncs<Chaos::TVector<int,2>,0>,FDefaultSetAllocator>
                       *)(*pcVar5)();
            return pTVar19;
          }
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_e8,&local_324,
                     (bool *)&local_3e8);
          uStack_2b8 = CONCAT44(uStack_2b8._4_4_,(uint)uStack_2b8 & ~uStack_2c4);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_2d0 + 8));
          bVar11 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   ::TRangedForIterator::operator!=((TRangedForIterator *)local_2d0,&local_1f0);
        } while (bVar11);
      }
      local_3ec = 1;
      if (1 < iVar12) {
        do {
          uVar30 = local_110;
          pTStack_410 = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
          local_3c8 = 0;
          uStack_3c4 = 1;
          uStack_3b4 = 0;
          iStack_3b0 = 0;
          if (local_110 != 0) {
            puVar24 = (uint *)(local_138 + 0x10);
            if (local_118 != (uint *)0x0) {
              puVar24 = local_118;
            }
            uVar28 = *puVar24;
            iStack_3b0 = 0;
            local_3c8 = 0;
            while (uVar28 == 0) {
              iStack_3b0 = iStack_3b0 + 0x20;
              lVar20 = (longlong)local_3c8;
              local_3c8 = local_3c8 + 1;
              if ((int)(((int)(local_110 - 1) >> 0x1f & 0x1fU) + (local_110 - 1)) >> 5 < local_3c8)
              {
                uStack_3b4 = local_110;
                goto LAB_14dbf4a50;
              }
              uVar28 = (puVar24 + 1)[lVar20];
            }
            uStack_3c4 = -uVar28 & uVar28;
            uVar25 = (ulonglong)uStack_3c4 * 2 + 1;
            lVar20 = 0x3f;
            if (uVar25 != 0) {
              for (; uVar25 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            local_320 = (int)lVar20;
            uStack_3b4 = local_320 + -1 + iStack_3b0;
            if ((int)local_110 < (int)uStack_3b4) {
              uStack_3b4 = local_110;
            }
          }
LAB_14dbf4a50:
          local_3b8 = 0xffffffff;
          uStack_418 = CONCAT44(uStack_3c4,local_3c8);
          local_420 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_138;
          uStack_408._4_4_ = uStack_3b4;
          uStack_408._0_4_ = 0xffffffff;
          uStack_400._4_4_ = uStack_3ac;
          uStack_400._0_4_ = iStack_3b0;
          local_388.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
          bVar21 = (byte)local_110 & 0x1f;
          local_3f8 = local_138._8_4_ - local_104;
          local_388._padding_._0_4_ = (int)local_110 >> 5;
          local_388._padding_._4_4_ = 1 << bVar21;
          local_388.UnvisitedBitMask = -1 << bVar21;
          local_388.BaseBitIndex = local_110 & 0xffffffe0;
          local_388.CurrentBitIndex = local_110;
          uStack_2d8 = CONCAT44(uStack_3f4,local_3f8);
          pTStack_3c0 = pTStack_410;
          local_300 = local_420;
          TStack_2f8._padding_ = uStack_418;
          TStack_2f8.Array = pTStack_410;
          TStack_2f8._16_8_ = uStack_408;
          TStack_2f8._24_8_ = uStack_400;
          if (((int)local_110 < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar11)) {
            pcVar5 = (code *)swi(3);
            pTVar19 = (TSet<Chaos::TVector<int,2>,DefaultKeyFuncs<Chaos::TVector<int,2>,0>,FDefaultSetAllocator>
                       *)(*pcVar5)();
            return pTVar19;
          }
          if (uVar30 != local_110) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_388);
          }
          uStack_418 = CONCAT44(local_388._padding_._4_4_,(int)local_388._padding_);
          uStack_408._4_4_ = local_388.CurrentBitIndex;
          uStack_408._0_4_ = local_388.UnvisitedBitMask;
          uStack_400._4_4_ = local_388._28_4_;
          uStack_400._0_4_ = local_388.BaseBitIndex;
          pTStack_410 = local_388.Array;
          local_3a8 = local_388.Array;
          local_3e0 = local_388.CurrentBitIndex;
          while( true ) {
            pTVar17 = local_300;
            uVar30 = local_3e0;
            uVar28 = 0;
            if (*(int *)&(local_300->Elements).field_0x8 - *(int *)&(local_300->Elements).field_0x34
                != (int)uStack_2d8) {
              local_437 = 0;
              `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_437);
            }
            uVar29 = 0;
            if (((TStack_2f8.CurrentBitIndex == uVar30) && (TStack_2f8.Array == local_3a8)) &&
               (pTVar17 == (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_138))
            break;
            iVar12 = *(int *)(*(longlong *)&pTVar17->Elements +
                             (longlong)TStack_2f8.CurrentBitIndex * 0xc);
            pTVar16 = FTriangleMesh::GetPointToNeighborsMap(param_1);
            pTVar17 = TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                      ::FindChecked((TMapBase<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>_>
                                     *)pTVar16,iVar12);
            uVar30 = *(uint *)&(pTVar17->Elements).field_0x28;
            uVar13 = 1;
            puVar1 = &(pTVar17->Elements).field_0x10;
            uStack_408._4_4_ = uVar29;
            uStack_400._0_4_ = uVar29;
            if (uVar30 != 0) {
              puVar24 = *(uint **)&(pTVar17->Elements).field_0x20;
              puVar31 = (uint *)puVar1;
              if (puVar24 != (uint *)0x0) {
                puVar31 = puVar24;
              }
              uVar32 = *puVar31;
              uStack_400._0_4_ = uVar28;
              uVar29 = uVar28;
              while (uVar32 == 0) {
                lVar20 = (longlong)(int)uVar29;
                uStack_400._0_4_ = (uint)uStack_400 + 0x20;
                uVar29 = uVar29 + 1;
                uStack_408._4_4_ = uVar30;
                if ((int)(((int)(uVar30 - 1) >> 0x1f & 0x1fU) + (uVar30 - 1)) >> 5 < (int)uVar29)
                goto LAB_14dbf4c2e;
                uVar32 = puVar31[lVar20 + 1];
              }
              uVar13 = -uVar32 & uVar32;
              uVar25 = (ulonglong)uVar13 * 2 + 1;
              lVar20 = 0x3f;
              if (uVar25 != 0) {
                for (; uVar25 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              local_31c = (int)lVar20;
              uStack_408._4_4_ = ((uint)uStack_400 - 1) + local_31c;
              if ((int)uVar30 < (int)uStack_408._4_4_) {
                uStack_408._4_4_ = uVar30;
              }
            }
LAB_14dbf4c2e:
            uVar28 = *(uint *)&(pTVar17->Elements).field_0x28;
            uVar32 = uVar28 & 0xffffffe0;
            local_3f8 = *(int *)&(pTVar17->Elements).field_0x8 -
                        *(int *)&(pTVar17->Elements).field_0x34;
            uStack_418 = CONCAT44(uVar13,uVar29);
            uStack_408._0_4_ = 0xffffffff;
            uStack_400._4_4_ = local_144;
            TStack_298._padding_ = uStack_418;
            iVar12 = (int)uVar28 >> 5;
            uStack_278 = CONCAT44(uStack_3f4,local_3f8);
            TStack_298.UnvisitedBitMask = 0xffffffff;
            TStack_298.CurrentBitIndex = uStack_408._4_4_;
            TStack_298.BaseBitIndex = (uint)uStack_400;
            TStack_298._28_4_ = local_144;
            local_420 = pTVar17;
            pTStack_410 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
            local_2a0 = pTVar17;
            TStack_298.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
            if ((((int)uVar28 < 0) || ((int)uVar30 < (int)uVar28)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x7af,L""), bVar11)) {
              pcVar5 = (code *)swi(3);
              pTVar19 = (TSet<Chaos::TVector<int,2>,DefaultKeyFuncs<Chaos::TVector<int,2>,0>,FDefaultSetAllocator>
                         *)(*pcVar5)();
              return pTVar19;
            }
            uVar29 = local_430;
            uVar30 = *(uint *)&(pTVar17->Elements).field_0x28;
            if (uVar28 != uVar30) {
              puVar3 = *(undefined1 **)&(pTVar17->Elements).field_0x20;
              puVar23 = puVar1;
              if (puVar3 != (undefined1 *)0x0) {
                puVar23 = puVar3;
              }
              uVar28 = -1 << ((byte)uVar28 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar12 * 4);
              while (uVar28 == 0) {
                lVar20 = (longlong)iVar12;
                uVar32 = uVar32 + 0x20;
                iVar12 = iVar12 + 1;
                uVar28 = uVar30;
                if ((int)(((int)(uVar30 - 1) >> 0x1f & 0x1fU) + (uVar30 - 1)) >> 5 < iVar12)
                goto LAB_14dbf4d51;
                uVar28 = *(uint *)(puVar23 + lVar20 * 4 + 4);
              }
              uVar25 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
              lVar20 = 0x3f;
              if (uVar25 != 0) {
                for (; uVar25 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              local_318 = (int)lVar20;
              uVar28 = local_318 + -1 + uVar32;
              if ((int)uVar30 < (int)uVar28) {
                uVar28 = uVar30;
              }
            }
LAB_14dbf4d51:
            while( true ) {
              pTVar8 = local_2a0;
              if (*(int *)&(local_2a0->Elements).field_0x8 -
                  *(int *)&(local_2a0->Elements).field_0x34 != (int)uStack_278) {
                local_436 = 0;
                `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_436);
              }
              if (((TStack_298.CurrentBitIndex == uVar28) &&
                  (TStack_298.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
                 (pTVar8 == pTVar17)) break;
              local_3e4 = *(uint *)(*(longlong *)&pTVar8->Elements +
                                   (longlong)TStack_298.CurrentBitIndex * 0xc);
              if (local_e8._8_4_ != local_b4) {
                FVar26 = (ForElementType<FSetElementId>)local_b0;
                if (local_a8 != (ForElementType<FSetElementId>)0x0) {
                  FVar26 = local_a8;
                }
                for (iVar12 = *(int *)((longlong)FVar26 + (ulonglong)(local_a0 - 1U & local_3e4) * 4
                                      ); iVar12 != -1;
                    iVar12 = *(int *)(local_e8._0_8_ + 4 + (longlong)iVar12 * 0xc)) {
                  if (*(uint *)(local_e8._0_8_ + (longlong)iVar12 * 0xc) == local_3e4)
                  goto LAB_14dbf4e12;
                }
              }
              if (local_3e4 != uVar29) {
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                          ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,
                           &local_314,(bool *)&local_3e4);
              }
LAB_14dbf4e12:
              TStack_298.UnvisitedBitMask =
                   TStack_298.UnvisitedBitMask & ~TStack_298._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_298);
            }
            TStack_2f8.UnvisitedBitMask = TStack_2f8.UnvisitedBitMask & ~TStack_2f8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2f8);
            param_1 = local_3d8;
          }
          UE::Core::Private::
          CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                    (&local_100,local_f0,&local_60,local_50);
          uVar10 = local_98._8_4_;
          lVar20 = (longlong)(int)local_98._8_4_;
          TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Empty((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_138,local_98._8_4_);
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,uVar10,(ForAnyElementType *)local_138,(int *)(local_138 + 8),
                     (int *)(local_138 + 0xc));
          local_108 = local_68;
          local_104 = local_64;
          TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10),
                     (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10));
          if (uVar10 != 0) {
            memcpy((void *)local_138._0_8_,(void *)local_98._0_8_,lVar20 * 0xc);
          }
          if (local_98._8_4_ != local_64) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98);
            bVar11 = (longlong)local_98._8_8_ < 0;
            local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
            if (bVar11) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
            }
            local_68 = 0xffffffff;
            local_64 = 0;
            local_70 = 0;
          }
          uVar13 = local_110;
          uVar32 = 1;
          TStack_268.CurrentBitIndex = uVar29;
          uVar30 = uVar29;
          if (local_110 != 0) {
            puVar24 = (uint *)(local_138 + 0x10);
            if (local_118 != (uint *)0x0) {
              puVar24 = local_118;
            }
            uVar2 = *puVar24;
            uVar30 = uVar28;
            uVar29 = uVar28;
            while (uVar2 == 0) {
              lVar20 = (longlong)(int)uVar29;
              uVar30 = uVar30 + 0x20;
              uVar29 = uVar29 + 1;
              TStack_268.CurrentBitIndex = local_110;
              if ((int)(((int)(local_110 - 1) >> 0x1f & 0x1fU) + (local_110 - 1)) >> 5 < (int)uVar29
                 ) goto LAB_14dbf5000;
              uVar2 = (puVar24 + 1)[lVar20];
            }
            uVar32 = -uVar2 & uVar2;
            uVar25 = (ulonglong)uVar32 * 2 + 1;
            lVar20 = 0x3f;
            if (uVar25 != 0) {
              for (; uVar25 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            local_310 = (int)lVar20;
            TStack_268.CurrentBitIndex = local_310 + -1 + uVar30;
            if ((int)local_110 < TStack_268.CurrentBitIndex) {
              TStack_268.CurrentBitIndex = local_110;
            }
          }
LAB_14dbf5000:
          local_420 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_138;
          pTStack_410 = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
          local_3f8 = local_138._8_4_ - local_104;
          uVar28 = local_110 & 0xffffffe0;
          uStack_418 = CONCAT44(uVar32,uVar29);
          uStack_408 = CONCAT44(TStack_268.CurrentBitIndex,0xffffffff);
          uStack_400 = CONCAT44(local_184,uVar30);
          TStack_268._padding_ = uStack_418;
          iVar12 = (int)local_110 >> 5;
          uStack_248 = CONCAT44(uStack_3f4,local_3f8);
          bVar21 = (byte)local_110;
          TStack_268.UnvisitedBitMask = 0xffffffff;
          TStack_268._24_8_ = uStack_400;
          local_270 = (longlong *)local_420;
          TStack_268.Array = pTStack_410;
          if (((int)local_110 < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar11)) {
            pcVar5 = (code *)swi(3);
            pTVar19 = (TSet<Chaos::TVector<int,2>,DefaultKeyFuncs<Chaos::TVector<int,2>,0>,FDefaultSetAllocator>
                       *)(*pcVar5)();
            return pTVar19;
          }
          uVar30 = local_430;
          if (uVar13 != local_110) {
            puVar24 = (uint *)(local_138 + 0x10);
            if (local_118 != (uint *)0x0) {
              puVar24 = local_118;
            }
            uVar29 = -1 << (bVar21 & 0x1f) & puVar24[iVar12];
            while (uVar29 == 0) {
              lVar20 = (longlong)iVar12;
              uVar28 = uVar28 + 0x20;
              iVar12 = iVar12 + 1;
              uVar13 = local_110;
              if ((int)(((int)(local_110 - 1) >> 0x1f & 0x1fU) + (local_110 - 1)) >> 5 < iVar12)
              goto LAB_14dbf5140;
              uVar29 = (puVar24 + 1)[lVar20];
            }
            uVar25 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
            lVar20 = 0x3f;
            if (uVar25 != 0) {
              for (; uVar25 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            local_328 = (int)lVar20;
            uVar13 = (uVar28 - 1) + local_328;
            if ((int)local_110 < (int)uVar13) {
              uVar13 = local_110;
            }
          }
LAB_14dbf5140:
          while( true ) {
            plVar9 = local_270;
            if ((int)local_270[1] - *(int *)((longlong)local_270 + 0x34) != (int)uStack_248) {
              local_435 = 0;
              `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_435);
            }
            if (((TStack_268.CurrentBitIndex == uVar13) &&
                (TStack_268.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10))) &&
               (plVar9 == (longlong *)local_138)) break;
            local_3dc = *(uint *)(*plVar9 + (longlong)TStack_268.CurrentBitIndex * 0xc);
            if (local_e8._8_4_ != local_b4) {
              FVar26 = (ForElementType<FSetElementId>)local_b0;
              if (local_a8 != (ForElementType<FSetElementId>)0x0) {
                FVar26 = local_a8;
              }
              for (iVar12 = *(int *)((longlong)FVar26 + (ulonglong)(local_a0 - 1U & local_3dc) * 4);
                  iVar12 != -1; iVar12 = *(int *)(local_e8._0_8_ + 4 + (longlong)iVar12 * 0xc)) {
                if (*(uint *)(local_e8._0_8_ + (longlong)iVar12 * 0xc) == local_3dc)
                goto LAB_14dbf5237;
              }
            }
            if ((local_3dc == uVar30) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("SubElement != Element",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TriangleMesh.h"
                                    ,0x94,L""), bVar11)) {
              pcVar5 = (code *)swi(3);
              pTVar19 = (TSet<Chaos::TVector<int,2>,DefaultKeyFuncs<Chaos::TVector<int,2>,0>,FDefaultSetAllocator>
                         *)(*pcVar5)();
              return pTVar19;
            }
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_e8,&local_30c,
                       (bool *)&local_3dc);
LAB_14dbf5237:
            TStack_268.UnvisitedBitMask = TStack_268.UnvisitedBitMask & ~TStack_268._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_268);
          }
          local_3ec = local_3ec + 1;
          piVar15 = local_398;
          __return_storage_ptr__ = local_428;
          param_1 = local_3d8;
        } while (local_3ec < local_3f0);
      }
      local_f0[0] = 0;
      if (local_100.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_138);
      local_50 = 0;
      if (local_60.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_60.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      local_348.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
      local_348._padding_._0_4_ = 0;
      local_348._padding_._4_4_ = 1;
      local_348.UnvisitedBitMask = 0xffffffff;
      local_348.CurrentBitIndex = 0;
      local_348.BaseBitIndex = 0;
      if (local_c0 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_348);
      }
      uStack_418 = CONCAT44(local_348._padding_._4_4_,(undefined4)local_348._padding_);
      local_420 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_e8;
      uStack_408._4_4_ = local_348.CurrentBitIndex;
      uStack_408._0_4_ = local_348.UnvisitedBitMask;
      uStack_400._4_4_ = local_348._28_4_;
      uStack_400._0_4_ = local_348.BaseBitIndex;
      local_3f8 = local_e8._8_4_ - local_b4;
      pTStack_410 = local_348.Array;
      uStack_218 = CONCAT44(uStack_3f4,local_3f8);
      TStack_238.Array = local_348.Array;
      local_240 = (longlong *)local_420;
      TStack_238._padding_ = uStack_418;
      TStack_238._16_8_ = uStack_408;
      TStack_238._24_8_ = uStack_400;
      pTVar18 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          (&local_180,(TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),
                           local_c0);
      uStack_418 = pTVar18->_padding_;
      pTVar6 = pTVar18->Array;
      uVar7._0_4_ = pTVar18->UnvisitedBitMask;
      uVar7._4_4_ = pTVar18->CurrentBitIndex;
      uStack_400 = *(longlong *)&pTVar18->BaseBitIndex;
      pTStack_410 = pTVar6;
      uStack_408 = uVar7;
      while( true ) {
        plVar9 = local_240;
        if ((int)local_240[1] - *(int *)((longlong)local_240 + 0x34) != (int)uStack_218) {
          local_434[0] = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_434);
        }
        uVar30 = local_430;
        if (((TStack_238.CurrentBitIndex == uVar7._4_4_) && (TStack_238.Array == pTVar6)) &&
           (plVar9 == (longlong *)local_e8)) break;
        uVar28 = *(uint *)(*plVar9 + (longlong)TStack_238.CurrentBitIndex * 0xc);
        if ((local_430 == uVar28) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index != Element",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDCollisionSpringConstraints.h"
                                ,0xd2,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          pTVar19 = (TSet<Chaos::TVector<int,2>,DefaultKeyFuncs<Chaos::TVector<int,2>,0>,FDefaultSetAllocator>
                     *)(*pcVar5)();
          return pTVar19;
        }
        iVar12 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
        local_3a0 = uVar30;
        uStack_39c = uVar28;
        if (iVar12 == 0) {
          iVar14 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10,4,1,(ForAnyElementType *)__return_storage_ptr__,piVar15,
                              (int *)&(__return_storage_ptr__->Elements).field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)
                     &(__return_storage_ptr__->Elements).field_0x10,false);
        }
        else {
          iVar14 = *(int *)&(__return_storage_ptr__->Elements).field_0x30;
          lVar20 = *(longlong *)&__return_storage_ptr__->Elements;
          iVar22 = *(int *)(lVar20 + 4 + (longlong)iVar14 * 0x10);
          iVar12 = iVar12 + -1;
          *(int *)&(__return_storage_ptr__->Elements).field_0x30 = iVar22;
          *(int *)&(__return_storage_ptr__->Elements).field_0x34 = iVar12;
          if (iVar12 != 0) {
            *(undefined4 *)(lVar20 + (longlong)iVar22 * 0x10) = 0xffffffff;
          }
        }
        TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)__return_storage_ptr__,&local_200,iVar14);
        __return_storage_ptr__ = local_428;
        if (local_200.Pointer != (ulonglong *)0x0) {
          *(ulonglong *)local_200.Pointer = CONCAT44(uStack_39c,local_3a0);
          *(undefined4 *)((longlong)local_200.Pointer + 8) = 0xffffffff;
        }
        uVar25 = *(ulonglong *)local_200.Pointer;
        uVar30 = (uint)uVar25;
        iVar14 = (int)(uVar25 >> 0x20);
        iVar12 = *(int *)&(local_428->Elements).field_0x34;
        uVar29 = ((uint)(uVar25 >> 2) & 0x3fffffff) + 0x9e3779b9 + iVar14 + uVar30 * 0x40 ^ uVar30;
        if ((*piVar15 - iVar12 != 1) && (*piVar15 != iVar12)) {
          FVar26 = (local_428->Hash).SecondaryData;
          FVar27 = (ForElementType<FSetElementId>)&local_428->Hash;
          if (FVar26 != (ForElementType<FSetElementId>)0x0) {
            FVar27 = FVar26;
          }
          iVar12 = *(int *)((longlong)FVar27 + (ulonglong)(local_428->HashSize - 1U & uVar29) * 4);
          if (iVar12 != -1) {
            lVar20 = *(longlong *)&local_428->Elements;
            do {
              uVar4 = *(undefined8 *)(lVar20 + (longlong)iVar12 * 0x10);
              if (((uint)uVar4 == uVar30) && ((int)((ulonglong)uVar4 >> 0x20) == iVar14)) {
                if (iVar12 != -1) {
                  *(ulonglong *)(lVar20 + (longlong)iVar12 * 0x10) = uVar25;
                  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::RemoveAtUninitialized
                            ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)local_428,local_200.Index,1);
                  piVar15 = local_398;
                  __return_storage_ptr__ = local_428;
                  goto LAB_14dbf561f;
                }
                piVar15 = (int *)&(local_428->Elements).field_0x8;
                break;
              }
              iVar12 = *(int *)(lVar20 + 8 + (longlong)iVar12 * 0x10);
            } while (iVar12 != -1);
          }
        }
        uVar30 = *piVar15 - *(int *)&(local_428->Elements).field_0x34;
        if (uVar30 < 4) {
          iVar12 = 1;
        }
        else {
          uVar25 = (ulonglong)((uVar30 >> 1) + 7) * 2 + 1;
          lVar20 = 0x3f;
          if (uVar25 != 0) {
            for (; uVar25 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          local_308 = (undefined4)lVar20;
          iVar12 = 1 << ((byte)lVar20 & 0x1f);
        }
        if (((int)uVar30 < 1) || (iVar12 <= local_428->HashSize)) {
          uVar29 = local_428->HashSize - 1U & uVar29;
          *(uint *)((longlong)local_200.Pointer + 0xc) = uVar29;
          FVar26 = (local_428->Hash).SecondaryData;
          FVar27 = (ForElementType<FSetElementId>)&local_428->Hash;
          if (FVar26 != (ForElementType<FSetElementId>)0x0) {
            FVar27 = FVar26;
          }
          uVar25 = (longlong)local_428->HashSize - 1U & (longlong)(int)uVar29;
          *(undefined4 *)((longlong)local_200.Pointer + 8) =
               *(undefined4 *)((longlong)FVar27 + uVar25 * 4);
          *(int *)((longlong)FVar27 + uVar25 * 4) = local_200.Index;
        }
        else {
          local_428->HashSize = iVar12;
          TSet<Chaos::TVector<int,2>,DefaultKeyFuncs<Chaos::TVector<int,2>,0>,FDefaultSetAllocator>
          ::Rehash(local_428);
        }
LAB_14dbf561f:
        iVar12 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
        uStack_38c = local_430;
        local_390 = uVar28;
        if (iVar12 == 0) {
          iVar14 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10,4,1,(ForAnyElementType *)__return_storage_ptr__,piVar15,
                              (int *)&(__return_storage_ptr__->Elements).field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)
                     &(__return_storage_ptr__->Elements).field_0x10,false);
        }
        else {
          iVar14 = *(int *)&(__return_storage_ptr__->Elements).field_0x30;
          lVar20 = *(longlong *)&__return_storage_ptr__->Elements;
          iVar22 = *(int *)(lVar20 + 4 + (longlong)iVar14 * 0x10);
          iVar12 = iVar12 + -1;
          *(int *)&(__return_storage_ptr__->Elements).field_0x30 = iVar22;
          *(int *)&(__return_storage_ptr__->Elements).field_0x34 = iVar12;
          if (iVar12 != 0) {
            *(undefined4 *)(lVar20 + (longlong)iVar22 * 0x10) = 0xffffffff;
          }
        }
        TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)__return_storage_ptr__,&local_210,iVar14);
        if (local_210.Pointer != (ulonglong *)0x0) {
          *(ulonglong *)local_210.Pointer = CONCAT44(uStack_38c,local_390);
          *(undefined4 *)((longlong)local_210.Pointer + 8) = 0xffffffff;
        }
        uVar25 = *(ulonglong *)local_210.Pointer;
        uVar30 = (uint)uVar25;
        iVar22 = (int)(uVar25 >> 0x20);
        iVar12 = *(int *)&(__return_storage_ptr__->Elements).field_0x8;
        iVar14 = *(int *)&(__return_storage_ptr__->Elements).field_0x34;
        uVar28 = ((uint)(uVar25 >> 2) & 0x3fffffff) + 0x9e3779b9 + iVar22 + uVar30 * 0x40 ^ uVar30;
        if ((iVar12 - iVar14 != 1) && (iVar12 != iVar14)) {
          FVar26 = (__return_storage_ptr__->Hash).SecondaryData;
          FVar27 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
          if (FVar26 != (ForElementType<FSetElementId>)0x0) {
            FVar27 = FVar26;
          }
          iVar12 = *(int *)((longlong)FVar27 +
                           (ulonglong)(__return_storage_ptr__->HashSize - 1U & uVar28) * 4);
          if (iVar12 != -1) {
            do {
              uVar4 = *(undefined8 *)
                       (*(longlong *)&__return_storage_ptr__->Elements + (longlong)iVar12 * 0x10);
              if (((uint)uVar4 == uVar30) && ((int)((ulonglong)uVar4 >> 0x20) == iVar22)) {
                __return_storage_ptr__ = local_428;
                if (iVar12 != -1) {
                  *(ulonglong *)(*(longlong *)&local_428->Elements + (longlong)iVar12 * 0x10) =
                       *(ulonglong *)local_210.Pointer;
                  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::RemoveAtUninitialized
                            ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)local_428,local_210.Index,1);
                  __return_storage_ptr__ = local_428;
                  goto LAB_14dbf5813;
                }
                break;
              }
              iVar12 = *(int *)(*(longlong *)&__return_storage_ptr__->Elements + 8 +
                               (longlong)iVar12 * 0x10);
            } while (iVar12 != -1);
          }
        }
        uVar30 = *(int *)&(__return_storage_ptr__->Elements).field_0x8 -
                 *(int *)&(__return_storage_ptr__->Elements).field_0x34;
        if (uVar30 < 4) {
          iVar12 = 1;
        }
        else {
          uVar25 = (ulonglong)((uVar30 >> 1) + 7) * 2 + 1;
          lVar20 = 0x3f;
          if (uVar25 != 0) {
            for (; uVar25 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          local_304 = (undefined4)lVar20;
          iVar12 = 1 << ((byte)lVar20 & 0x1f);
        }
        if (((int)uVar30 < 1) || (iVar12 <= __return_storage_ptr__->HashSize)) {
          uVar28 = __return_storage_ptr__->HashSize - 1U & uVar28;
          *(uint *)((longlong)local_210.Pointer + 0xc) = uVar28;
          FVar26 = (__return_storage_ptr__->Hash).SecondaryData;
          FVar27 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
          if (FVar26 != (ForElementType<FSetElementId>)0x0) {
            FVar27 = FVar26;
          }
          uVar25 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar28;
          *(undefined4 *)((longlong)local_210.Pointer + 8) =
               *(undefined4 *)((longlong)FVar27 + uVar25 * 4);
          *(int *)((longlong)FVar27 + uVar25 * 4) = local_210.Index;
        }
        else {
          __return_storage_ptr__->HashSize = iVar12;
          TSet<Chaos::TVector<int,2>,DefaultKeyFuncs<Chaos::TVector<int,2>,0>,FDefaultSetAllocator>
          ::Rehash(__return_storage_ptr__);
        }
LAB_14dbf5813:
        TStack_238.UnvisitedBitMask = TStack_238.UnvisitedBitMask & ~TStack_238._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_238);
        piVar15 = (int *)&(__return_storage_ptr__->Elements).field_0x8;
      }
      local_a0 = 0;
      if (local_a8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_e8);
      local_430 = local_430 + 1;
      param_1 = local_3d8;
      iVar12 = local_3f0;
      uVar30 = local_430;
    } while ((int)local_430 <= local_3cc);
  }
  if (bVar33) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// SetProperties @ 14dc15e90

void __thiscall
Chaos::Softs::FPBDCollisionSpringConstraints::SetProperties
          (FPBDCollisionSpringConstraints *this,FCollectionPropertyConstFacade *param_1,
          TMap<FString,TArrayView<float_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>_>
          *param_2,TMap<FString,TArrayView<int_const_,int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArrayView<int_const_,int>,0>_>
                   *param_3)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  ECollectionPropertyFlags EVar4;
  bool bVar5;
  FString *pFVar6;
  TTuple<FString,TArrayView<float_const_,int>_> *pTVar7;
  FPBDFlatWeightMap *pFVar8;
  TTuple<FString,TArrayView<int_const_,int>_> *pTVar9;
  TArrayView<unsigned_char_const_,int> *pTVar10;
  float fVar11;
  float fVar12;
  float local_res8;
  float local_resc;
  undefined8 local_128;
  float local_120;
  float fStack_11c;
  TVector<float,2> local_118;
  TVector<float,2> local_110;
  TVector<float,2> local_108;
  TArrayView<float_const_,int> local_100;
  TArrayView<int_const_,int> local_f0;
  TArrayView<float_const_,int> local_e0;
  FPBDFlatWeightMap local_d0;
  FPBDFlatWeightMap local_a0 [2];
  
  fVar3 = __real_3f800000;
  iVar1 = (this->SelfCollisionThicknessIndex).Index;
  if (iVar1 != -1) {
    pTVar10 = &param_1->FlagsArray;
    EVar4 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,iVar1,pTVar10);
    if (((EVar4 & Animatable) != None) &&
       (EVar4 = FCollectionPropertyConstFacade::
                GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                          (param_1,(this->SelfCollisionThicknessIndex).Index,pTVar10),
       (char)EVar4 < '\0')) {
      if (((this->SelfCollisionThicknessIndex).Index == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("SelfCollisionThicknessIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDCollisionSpringConstraints.h"
                             ,0xda,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar1 = (this->SelfCollisionThicknessIndex).Index;
      fVar11 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                         (param_1,iVar1,&param_1->HighValueArray);
      fVar12 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                         (param_1,iVar1,&param_1->LowValueArray);
      _local_120 = CONCAT44(fVar11,fVar12);
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      local_res8 = fVar12;
      local_resc = fVar11;
      if (((this->SelfCollisionThicknessIndex).Index == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("SelfCollisionThicknessIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDCollisionSpringConstraints.h"
                             ,0xda,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      EVar4 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->SelfCollisionThicknessIndex).Index,pTVar10);
      if ((EVar4 & StringDirty) == None) {
        *(float *)&this->_padding_ = fVar12;
        *(float *)((longlong)&this->_padding_ + 4) = fVar11 - fVar12;
      }
      else {
        if (((this->SelfCollisionThicknessIndex).Index == -1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("SelfCollisionThicknessIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDCollisionSpringConstraints.h"
                               ,0xda,
                               L"The default value getter that sets the property index must be called once prior to calling this function."
                              ), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar6 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                           (param_1,(this->SelfCollisionThicknessIndex).Index,
                            &param_1->StringValueArray);
        iVar1 = *(int *)((longlong)&this->_padding_ + 4);
        local_118._0_4_ = 0;
        local_118._4_4_ = 0x3f800000;
        pTVar7 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                         *)param_2,pFVar6);
        if (pTVar7 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
          local_100.DataPtr = (float *)0x0;
          local_100._8_8_ = (ulonglong)(uint)local_100._12_4_ << 0x20;
        }
        else {
          local_100.DataPtr = *(float **)&pTVar7->field_0x10;
          local_100._8_8_ = *(undefined8 *)&pTVar7->field_0x18;
        }
        pFVar8 = FPBDFlatWeightMap::FPBDFlatWeightMap
                           (&local_d0,(TVector<float,2> *)&local_res8,&local_100,iVar1,&local_118);
        FPBDFlatWeightMap::operator=((FPBDFlatWeightMap *)&this->_padding_,pFVar8);
        if (local_d0.MapValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.MapValues.AllocatorInstance.Data);
        }
      }
    }
  }
  pTVar10 = &param_1->FlagsArray;
  iVar1 = (this->SelfCollisionStiffnessIndex).Index;
  if (((iVar1 != -1) &&
      (EVar4 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,pTVar10), (EVar4 & Animatable) != None)) &&
     (EVar4 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->SelfCollisionStiffnessIndex).Index,pTVar10),
     (char)EVar4 < '\0')) {
    if (((this->SelfCollisionStiffnessIndex).Index == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("SelfCollisionStiffnessIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDCollisionSpringConstraints.h"
                           ,0xdb,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar11 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,(this->SelfCollisionStiffnessIndex).Index,&param_1->LowValueArray);
    if (fVar3 <= fVar11) {
      fVar11 = fVar3;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    *(float *)&this->_padding_ = fVar11;
  }
  iVar1 = (this->SelfCollisionFrictionIndex).Index;
  if (((iVar1 != -1) &&
      (EVar4 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,pTVar10), (EVar4 & Animatable) != None)) &&
     (EVar4 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->SelfCollisionFrictionIndex).Index,pTVar10),
     (char)EVar4 < '\0')) {
    if (((this->SelfCollisionFrictionIndex).Index == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("SelfCollisionFrictionIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDCollisionSpringConstraints.h"
                           ,0xdc,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar11 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,(this->SelfCollisionFrictionIndex).Index,&param_1->LowValueArray);
    if (fVar3 <= fVar11) {
      fVar11 = fVar3;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    *(float *)((longlong)&this->_padding_ + 4) = fVar11;
  }
  iVar1 = (this->SelfCollisionProximityStiffnessIndex).Index;
  if (((iVar1 != -1) &&
      (EVar4 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,pTVar10), (EVar4 & Animatable) != None)) &&
     (EVar4 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->SelfCollisionProximityStiffnessIndex).Index,pTVar10),
     (char)EVar4 < '\0')) {
    if (((this->SelfCollisionProximityStiffnessIndex).Index == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("SelfCollisionProximityStiffnessIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDCollisionSpringConstraints.h"
                           ,0xde,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar11 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,(this->SelfCollisionProximityStiffnessIndex).Index,
                        &param_1->LowValueArray);
    *(float *)&this->_padding_ = fVar11;
  }
  iVar1 = (this->SelfCollisionLayersIndex).Index;
  if (((iVar1 != -1) &&
      (EVar4 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,pTVar10), (EVar4 & Animatable) != None)) &&
     (EVar4 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->SelfCollisionLayersIndex).Index,pTVar10), (char)EVar4 < '\0'
     )) {
    if (((this->SelfCollisionLayersIndex).Index == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("SelfCollisionLayersIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDCollisionSpringConstraints.h"
                           ,0xe0,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EVar4 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->SelfCollisionLayersIndex).Index,pTVar10);
    if ((EVar4 & StringDirty) != None) {
      if (((this->SelfCollisionLayersIndex).Index == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("SelfCollisionLayersIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDCollisionSpringConstraints.h"
                             ,0xe0,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar6 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                         (param_1,(this->SelfCollisionLayersIndex).Index,&param_1->StringValueArray)
      ;
      pTVar9 = TSet<TTuple<FString,TArrayView<int_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<int_const_,int>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FString,TArrayView<int_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<int_const_,int>,0>,FDefaultSetAllocator>
                       *)param_3,pFVar6);
      if (pTVar9 == (TTuple<FString,TArrayView<int_const_,int>_> *)0x0) {
        local_f0.DataPtr = (int *)0x0;
        local_f0._8_8_ = (ulonglong)(uint)local_f0._12_4_ << 0x20;
      }
      else {
        local_f0.DataPtr = *(int **)&pTVar9->field_0x10;
        local_f0._8_8_ = *(undefined8 *)&pTVar9->field_0x18;
      }
      FPBDCollisionSpringConstraintsBase::UpdateCollisionLayers
                ((FPBDCollisionSpringConstraintsBase *)this,&local_f0);
    }
  }
  iVar1 = (this->SelfCollideAgainstKinematicCollidersOnlyIndex).Index;
  if (((iVar1 != -1) &&
      (EVar4 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,pTVar10), (EVar4 & Animatable) != None)) &&
     (EVar4 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->SelfCollideAgainstKinematicCollidersOnlyIndex).Index,pTVar10
                        ), (char)EVar4 < '\0')) {
    if (((this->SelfCollideAgainstKinematicCollidersOnlyIndex).Index == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("SelfCollideAgainstKinematicCollidersOnlyIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDCollisionSpringConstraints.h"
                           ,0xe1,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar5 = FCollectionPropertyConstFacade::GetValue<bool,UE::Math::TVector<float>_>
                      (param_1,(this->SelfCollideAgainstKinematicCollidersOnlyIndex).Index,
                       &param_1->LowValueArray);
    *(bool *)&this->_padding_ = bVar5;
  }
  iVar1 = (this->SelfCollisionKinematicColliderThicknessIndex).Index;
  if (((iVar1 != -1) &&
      (EVar4 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,pTVar10), (EVar4 & Animatable) != None)) &&
     (EVar4 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->SelfCollisionKinematicColliderThicknessIndex).Index,pTVar10)
     , (char)EVar4 < '\0')) {
    if (((this->SelfCollisionKinematicColliderThicknessIndex).Index == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("SelfCollisionKinematicColliderThicknessIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDCollisionSpringConstraints.h"
                           ,0xe2,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar11 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,(this->SelfCollisionKinematicColliderThicknessIndex).Index,
                        &param_1->LowValueArray);
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    *(float *)((longlong)&this->_padding_ + 4) = fVar11;
  }
  iVar1 = (this->SelfCollisionKinematicColliderStiffnessIndex).Index;
  if (((iVar1 != -1) &&
      (EVar4 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,pTVar10), (EVar4 & Animatable) != None)) &&
     (EVar4 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->SelfCollisionKinematicColliderStiffnessIndex).Index,pTVar10)
     , (char)EVar4 < '\0')) {
    if (((this->SelfCollisionKinematicColliderStiffnessIndex).Index == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("SelfCollisionKinematicColliderStiffnessIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDCollisionSpringConstraints.h"
                           ,0xe3,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar11 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,(this->SelfCollisionKinematicColliderStiffnessIndex).Index,
                        &param_1->LowValueArray);
    if (fVar3 <= fVar11) {
      fVar11 = fVar3;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    *(float *)&this->_padding_ = fVar11;
  }
  iVar1 = (this->SelfCollisionKinematicColliderFrictionIndex).Index;
  if (((iVar1 != -1) &&
      (EVar4 = FCollectionPropertyConstFacade::
               GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                         (param_1,iVar1,pTVar10), (EVar4 & Animatable) != None)) &&
     (EVar4 = FCollectionPropertyConstFacade::
              GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                        (param_1,(this->SelfCollisionKinematicColliderFrictionIndex).Index,pTVar10),
     (char)EVar4 < '\0')) {
    if (((this->SelfCollisionKinematicColliderFrictionIndex).Index == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("SelfCollisionKinematicColliderFrictionIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDCollisionSpringConstraints.h"
                           ,0xe4,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar1 = (this->SelfCollisionKinematicColliderFrictionIndex).Index;
    fVar11 = FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                       (param_1,iVar1,&param_1->HighValueArray);
    local_128._0_4_ =
         FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                   (param_1,iVar1,&param_1->LowValueArray);
    local_128._4_4_ = fVar11;
    local_110 = local_128;
    if (fVar3 <= (float)local_128) {
      local_128._0_4_ = fVar3;
    }
    if (fVar3 <= fVar11) {
      local_128._4_4_ = fVar3;
    }
    if ((float)local_128 <= 0.0) {
      local_128._0_4_ = 0.0;
    }
    if (local_128._4_4_ <= 0.0) {
      local_128._4_4_ = 0.0;
    }
    if (((this->SelfCollisionKinematicColliderFrictionIndex).Index == -1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("SelfCollisionKinematicColliderFrictionIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDCollisionSpringConstraints.h"
                           ,0xe4,
                           L"The default value getter that sets the property index must be called once prior to calling this function."
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    EVar4 = FCollectionPropertyConstFacade::
            GetValue<enum_Chaos::Softs::ECollectionPropertyFlags,unsigned_char>
                      (param_1,(this->SelfCollisionKinematicColliderFrictionIndex).Index,pTVar10);
    if ((EVar4 & StringDirty) == None) {
      *(float *)&this->_padding_ = (float)local_128;
      *(float *)((longlong)&this->_padding_ + 4) = local_128._4_4_ - (float)local_128;
    }
    else {
      if (((this->SelfCollisionKinematicColliderFrictionIndex).Index == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("SelfCollisionKinematicColliderFrictionIndex != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDCollisionSpringConstraints.h"
                             ,0xe4,
                             L"The default value getter that sets the property index must be called once prior to calling this function."
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar6 = FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                         (param_1,(this->SelfCollisionKinematicColliderFrictionIndex).Index,
                          &param_1->StringValueArray);
      iVar1 = *(int *)((longlong)&this->_padding_ + 4);
      local_108._0_4_ = 0;
      local_108._4_4_ = 0x3f800000;
      pTVar7 = TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FString,TArrayView<float_const_,int>_>,TDefaultMapHashableKeyFuncs<FString,TArrayView<float_const_,int>,0>,FDefaultSetAllocator>
                       *)param_2,pFVar6);
      if (pTVar7 == (TTuple<FString,TArrayView<float_const_,int>_> *)0x0) {
        local_e0.DataPtr = (float *)0x0;
        local_e0._8_8_ = (ulonglong)(uint)local_e0._12_4_ << 0x20;
      }
      else {
        local_e0.DataPtr = *(float **)&pTVar7->field_0x10;
        local_e0._8_8_ = *(undefined8 *)&pTVar7->field_0x18;
      }
      pFVar8 = FPBDFlatWeightMap::FPBDFlatWeightMap
                         (local_a0,(TVector<float,2> *)&local_128,&local_e0,iVar1,&local_108);
      FPBDFlatWeightMap::operator=((FPBDFlatWeightMap *)&this->_padding_,pFVar8);
      if (local_a0[0].MapValues.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0[0].MapValues.AllocatorInstance.Data);
      }
    }
  }
  return;
}

