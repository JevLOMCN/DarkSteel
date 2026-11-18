// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// FDS_ISKM_BoidState_Escape_Fly_Landing @ 14b8641c0

FDS_ISKM_BoidState_Escape_Fly_Landing * __thiscall
FDS_ISKM_BoidState_Escape_Fly_Landing::FDS_ISKM_BoidState_Escape_Fly_Landing
          (FDS_ISKM_BoidState_Escape_Fly_Landing *this,FName *param_1)

{
  FDS_ISKM_BoidState_Escape_Fly::FDS_ISKM_BoidState_Escape_Fly
            ((FDS_ISKM_BoidState_Escape_Fly *)this,param_1);
  this->_padding_ = (longlong)&___7FDS_ISKM_BoidState_Escape_Fly_Landing__6B_;
  (this->FlyToStandAnim).ComparisonIndex = 0;
  (this->FlyToStandAnim).Number = 0;
  this->FlyToStandAnimTime = 0.0;
  (this->MaxHeightPos).field0_0x0._s_0.X = 0.0;
  (this->MaxHeightPos).field0_0x0._s_0.Y = 0.0;
  (this->MaxHeightPos).field0_0x0._s_0.Z = 0.0;
  (this->Route).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Route).ArrayNum = 0;
  (this->Route).ArrayMax = 0;
  return this;
}

// ~FDS_ISKM_BoidState_Escape_Fly_Landing @ 14b8658b0

void __thiscall
FDS_ISKM_BoidState_Escape_Fly_Landing::~FDS_ISKM_BoidState_Escape_Fly_Landing
          (FDS_ISKM_BoidState_Escape_Fly_Landing *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Route).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// OnCheckTransition @ 14b886a20

bool __thiscall
FDS_ISKM_BoidState_Escape_Fly_Landing::OnCheckTransition
          (FDS_ISKM_BoidState_Escape_Fly_Landing *this,FName param_1,FName param_2,FName param_3,
          float param_4,FDS_ISKM_BoidsFSM_ExecutionContext *param_5)

{
  FName *pFVar1;
  FName *pFVar2;
  char cVar3;
  
  pFVar2 = (FName *)this->_padding_;
  pFVar1 = pFVar2 + (int)this->_padding_;
  for (; pFVar2 != pFVar1; pFVar2 = pFVar2 + 1) {
    if (*pFVar2 == param_3) {
      return false;
    }
  }
  if (FDS_ISKM_BoidState::sName_Idle == param_3) {
    cVar3 = (char)this->_padding_;
  }
  else if (FDS_ISKM_BoidState::sName_Return == param_3) {
    cVar3 = *(char *)((longlong)&this->_padding_ + 1);
  }
  else {
    if (FDS_ISKM_BoidState::sName_Escape != param_3) {
      return false;
    }
    cVar3 = *(char *)((longlong)&this->_padding_ + 2) == '\0';
  }
  if ((cVar3 != '\0') && (FDS_ISKM_BoidState::sName_Idle == param_3)) {
    return (bool)(char)this->_padding_;
  }
  return false;
}

// OnPostEnterState @ 14b88ddd0

void __thiscall
FDS_ISKM_BoidState_Escape_Fly_Landing::OnPostEnterState
          (FDS_ISKM_BoidState_Escape_Fly_Landing *this,FName param_1,
          FDS_ISKM_BoidsFSM_ExecutionContext *param_2)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TVector<double> *pTVar3;
  double dVar4;
  undefined1 auVar5 [16];
  FWN_ISKM_BoidInfo *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  bool bVar26;
  int iVar27;
  longlong lVar28;
  float fVar29;
  float fVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined8 uVar34;
  double dVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  
  uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar14 = __real_3e45798ee0000000;
  dVar31 = __real_3ff0000000000000;
  if (param_2 == (FDS_ISKM_BoidsFSM_ExecutionContext *)0x0) {
    return;
  }
  dVar4 = (param_2->DestPos).field0_0x0._s_0.Z;
  pFVar6 = param_2->BoidInfo;
  auVar5 = *(undefined1 (*) [16])(pFVar6->Transform).Translation.XY.m128d_f64;
  dVar20 = (pFVar6->Transform).Translation.ZW.m128d_f64[0];
  dVar11 = auVar5._8_8_;
  dVar21 = (param_2->DestPos).field0_0x0._s_0.X;
  dVar22 = (param_2->DestPos).field0_0x0._s_0.Y;
  dVar10 = auVar5._0_8_;
  dVar32 = dVar21 - dVar10;
  dVar12 = dVar22 - dVar11;
  dVar35 = dVar12 * dVar12 + dVar32 * dVar32;
  if (dVar35 == __real_3ff0000000000000) {
    uVar15 = dVar4 - dVar20;
    uVar16 = dVar32;
    uVar17 = dVar12;
    if (dVar4 - dVar20 == 0.0) goto LAB_14b88df42;
  }
  else {
    uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (dVar35 < __real_3e45798ee0000000) goto LAB_14b88df42;
    dVar32 = dVar32 * (__real_3ff0000000000000 / SQRT(dVar35));
    dVar12 = dVar12 * (__real_3ff0000000000000 / SQRT(dVar35));
  }
  uVar15 = 0.0;
  uVar16 = dVar32;
  uVar17 = dVar12;
LAB_14b88df42:
  fVar29 = tanf(*(float *)((longlong)&this->_padding_ + 4) * __real_3c8efa35);
  dVar32 = (double)fVar29;
  dVar12 = dVar32 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X + (double)uVar16;
  dVar35 = dVar32 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y + (double)uVar17;
  dVar33 = dVar32 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z + (double)uVar15;
  dVar32 = dVar35 * dVar35 + dVar12 * dVar12 + dVar33 * dVar33;
  uVar34 = dVar33;
  uVar18 = dVar35;
  uVar19 = dVar12;
  if ((dVar32 != dVar31) && (uVar34 = uVar25, uVar18 = uVar24, uVar19 = uVar23, dVar14 <= dVar32)) {
    dVar31 = dVar31 / SQRT(dVar32);
    uVar34 = dVar33 * dVar31;
    uVar18 = dVar35 * dVar31;
    uVar19 = dVar12 * dVar31;
  }
  dVar31 = (double)*(float *)&this->_padding_;
  dVar14 = (double)uVar19 * dVar31 + (pFVar6->Transform).Translation.XY.m128d_f64[0];
  dVar35 = (double)uVar34 * dVar31 + (pFVar6->Transform).Translation.ZW.m128d_f64[0];
  pTVar2 = &this->Route;
  piVar1 = &(this->Route).ArrayMax;
  dVar31 = (double)uVar18 * dVar31 + dVar11;
  (this->Route).ArrayNum = 0;
  if ((this->Route).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  iVar27 = (this->Route).ArrayNum;
  if (iVar27 == *piVar1) {
    iVar27 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  lVar28 = (longlong)iVar27;
  (this->Route).ArrayNum = iVar27 + 1;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  *(double *)(pFVar7 + lVar28 * 0x18) = dVar21 + (double)uVar16;
  *(double *)(pFVar7 + lVar28 * 0x18 + 8) = dVar22 + (double)uVar17;
  *(double *)(pFVar7 + lVar28 * 0x18 + 0x10) = (double)uVar15 + dVar4;
  iVar27 = (this->Route).ArrayNum;
  if (iVar27 == *piVar1) {
    iVar27 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Route).ArrayNum = iVar27 + 1;
  pFVar8 = (pTVar2->AllocatorInstance).Data;
  pFVar7 = pFVar8 + (longlong)iVar27 * 0x18;
  *(double *)pFVar7 = dVar21;
  *(double *)(pFVar7 + 8) = dVar22;
  *(double *)(pFVar8 + (longlong)iVar27 * 0x18 + 0x10) = dVar4;
  iVar27 = (this->Route).ArrayNum;
  if (iVar27 == *piVar1) {
    iVar27 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Route).ArrayNum = iVar27 + 1;
  uVar36 = SUB84(dVar31,0);
  uVar37 = (undefined4)((ulonglong)dVar31 >> 0x20);
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  auVar5._8_4_ = uVar36;
  auVar5._0_8_ = dVar14;
  auVar5._12_4_ = uVar37;
  *(undefined1 (*) [16])(pFVar7 + (longlong)iVar27 * 0x18) = auVar5;
  *(double *)(pFVar7 + (longlong)iVar27 * 0x18 + 0x10) = dVar35;
  iVar27 = (this->Route).ArrayNum;
  if (iVar27 == *piVar1) {
    iVar27 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Route).ArrayNum = iVar27 + 1;
  pFVar8 = (pTVar2->AllocatorInstance).Data;
  pFVar7 = pFVar8 + (longlong)iVar27 * 0x18;
  *(double *)pFVar7 = dVar10;
  *(double *)(pFVar7 + 8) = dVar11;
  *(double *)(pFVar8 + (longlong)iVar27 * 0x18 + 0x10) = dVar20;
  iVar27 = (this->Route).ArrayNum;
  if (iVar27 == *piVar1) {
    iVar27 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&pTVar2->AllocatorInstance,piVar1);
  }
  lVar28 = (longlong)iVar27;
  (this->Route).ArrayNum = iVar27 + 1;
  pTVar3 = &this->MaxHeightPos;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  *(double *)(pFVar7 + lVar28 * 0x18) = dVar10 - (double)uVar16;
  *(double *)(pFVar7 + lVar28 * 0x18 + 8) = dVar11 - (double)uVar17;
  *(double *)(pFVar7 + lVar28 * 0x18 + 0x10) = dVar20 - (double)uVar15;
  if (dVar4 <= dVar20) {
    auVar13._8_4_ = uVar36;
    auVar13._0_8_ = dVar14;
    auVar13._12_4_ = uVar37;
    *(undefined1 (*) [16])&pTVar3->field0_0x0 = auVar13;
    (this->MaxHeightPos).field0_0x0._s_0.Z = dVar35;
  }
  else {
    dVar14 = (param_2->DestPos).field0_0x0._s_0.Y;
    dVar4 = dVar4 + __real_4049000000000000;
    dVar31 = (double)uVar17 * __real_4049000000000000;
    (pTVar3->field0_0x0)._s_0.X =
         (param_2->DestPos).field0_0x0._s_0.X - (double)uVar16 * __real_4049000000000000;
    (this->MaxHeightPos).field0_0x0._s_0.Y = dVar14 - dVar31;
    (this->MaxHeightPos).field0_0x0._s_0.Z = dVar4;
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar7 <= pTVar3) && (pTVar3 < pFVar7 + (longlong)*piVar1 * 0x18)) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar26)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar27 = (this->Route).ArrayNum;
    if (iVar27 == *piVar1) {
      iVar27 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&pTVar2->AllocatorInstance,piVar1);
    }
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    (this->Route).ArrayNum = iVar27 + 1;
    memmove(pFVar7 + 0x48,pFVar7 + 0x30,(longlong)(iVar27 + -2) * 0x18);
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    dVar31 = (this->MaxHeightPos).field0_0x0._s_0.Y;
    *(double *)(pFVar7 + 0x30) = (pTVar3->field0_0x0)._s_0.X;
    *(double *)(pFVar7 + 0x38) = dVar31;
    *(double *)(pFVar7 + 0x40) = (this->MaxHeightPos).field0_0x0._s_0.Z;
  }
  if (((param_2->BoidsNavSystem).Object == (FWN_BoidsNavSystem *)0x0) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar26)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FWN_BoidsNavSystem::SetRoute((param_2->BoidsNavSystem).Object,pTVar2);
  param_2->BoidInfo->_AnimSpeed = 1.0;
  fVar29 = *(float *)&this->_padding_;
  param_2->MaxSpeed = fVar29;
  param_2->Acceleration = *(float *)((longlong)&this->_padding_ + 4);
  fVar30 = *(float *)&this->_padding_;
  if (fVar29 <= *(float *)&this->_padding_) {
    fVar30 = fVar29;
  }
  param_2->MoveDist = 0.0;
  param_2->Speed = fVar30;
  return;
}

// OnPostLeaveState @ 14b88e7e0

void __thiscall
FDS_ISKM_BoidState_Escape_Fly_Landing::OnPostLeaveState
          (FDS_ISKM_BoidState_Escape_Fly_Landing *this,FName param_1,
          FDS_ISKM_BoidsFSM_ExecutionContext *param_2)

{
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  param_2->bIsFlying = false;
  (this->Route).ArrayNum = 0;
  if ((this->Route).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->Route).AllocatorInstance,0,&(this->Route).ArrayMax);
  }
  param_2->MoveDist = 0.0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x41200000;
  *(undefined4 *)&this->_padding_ = 0x3e99999a;
  *(undefined4 *)&this->_padding_ = 0x43c80000;
  return;
}

// OnPostUpdateState @ 14b88f620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
FDS_ISKM_BoidState_Escape_Fly_Landing::OnPostUpdateState
          (FDS_ISKM_BoidState_Escape_Fly_Landing *this,float param_1,
          FDS_ISKM_BoidsFSM_ExecutionContext *param_2)

{
  int iVar1;
  FWN_ISKM_BoidInfo *this_00;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWN_AsyncCollision *this_01;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  void *pvVar13;
  bool bVar14;
  FName FVar15;
  FWN_BoidsNavSystem *pFVar16;
  TQuat<double> *pTVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  TArray<FHitResult,TSizedDefaultAllocator<32>_> *pTVar22;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  undefined8 uVar28;
  double dVar29;
  undefined8 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStack_2c8 [32];
  TVector<double>_u_0 local_298;
  double local_280;
  double dStack_278;
  double local_270;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_268;
  double local_260;
  double local_258;
  double dStack_250;
  double local_248;
  TVector<double>_u_0 local_240;
  TSharedPtr<FDS_ISKM_BoidsTargetInfo,1> local_228;
  TRotator<double> local_218;
  double local_200;
  double local_1f8;
  TQuat<double> local_1b8;
  double local_198;
  double dStack_190;
  double local_188;
  double local_170;
  TQuat<double> local_168;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  if (param_2 == (FDS_ISKM_BoidsFSM_ExecutionContext *)0x0) {
    return;
  }
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  if ((char)this->_padding_ == '\x01') {
    return;
  }
  this_00 = param_2->BoidInfo;
  if (this_00 == (FWN_ISKM_BoidInfo *)0x0) {
    return;
  }
  FDS_ISKM_BoidsFSM_ExecutionContext::GetMainPlayerInfo(param_2,&local_228);
  pvVar13 = ThreadLocalStoragePointer;
  if (local_228.Object == (FDS_ISKM_BoidsTargetInfo *)0x0) goto LAB_14b8902c0;
  local_148.Rotation.ZW.m128d_f64[0] = (param_2->ExpectedTransform).Rotation.ZW.m128d_f64[0];
  local_148.Rotation.ZW.m128d_f64[1] = (param_2->ExpectedTransform).Rotation.ZW.m128d_f64[1];
  local_280 = (param_2->ExpectedTransform).Translation.XY.m128d_f64[0];
  dStack_278 = (param_2->ExpectedTransform).Translation.XY.m128d_f64[1];
  local_148.Rotation.XY.m128d_f64[0] = (param_2->ExpectedTransform).Rotation.XY.m128d_f64[0];
  local_148.Rotation.XY.m128d_f64[1] = (param_2->ExpectedTransform).Rotation.XY.m128d_f64[1];
  local_270 = (param_2->ExpectedTransform).Translation.ZW.m128d_f64[0];
  local_148.Translation.ZW.m128d_f64[1] = (param_2->ExpectedTransform).Translation.ZW.m128d_f64[1];
  local_148.Scale3D.ZW.m128d_f64[0] = (param_2->ExpectedTransform).Scale3D.ZW.m128d_f64[0];
  local_148.Scale3D.ZW.m128d_f64[1] = (param_2->ExpectedTransform).Scale3D.ZW.m128d_f64[1];
  local_148.Scale3D.XY.m128d_f64[0] = (param_2->ExpectedTransform).Scale3D.XY.m128d_f64[0];
  local_148.Scale3D.XY.m128d_f64[1] = (param_2->ExpectedTransform).Scale3D.XY.m128d_f64[1];
  (this_00->Transform).Rotation.XY.m128d_f64[0] = local_148.Rotation.XY.m128d_f64[0];
  (this_00->Transform).Rotation.XY.m128d_f64[1] = local_148.Rotation.XY.m128d_f64[1];
  uVar18 = (ulonglong)_tls_index;
  (this_00->Transform).Rotation.ZW.m128d_f64[0] = local_148.Rotation.ZW.m128d_f64[0];
  (this_00->Transform).Rotation.ZW.m128d_f64[1] = local_148.Rotation.ZW.m128d_f64[1];
  lVar21 = *(longlong *)((longlong)pvVar13 + uVar18 * 8);
  (this_00->Transform).Translation.XY.m128d_f64[0] = local_280;
  (this_00->Transform).Translation.XY.m128d_f64[1] = dStack_278;
  uVar19 = *(uint *)(lVar21 + 0x9b48);
  (this_00->Transform).Translation.ZW.m128d_f64[0] = local_270;
  (this_00->Transform).Translation.ZW.m128d_f64[1] = local_148.Translation.ZW.m128d_f64[1];
  (this_00->Transform).Scale3D.XY.m128d_f64[0] = local_148.Scale3D.XY.m128d_f64[0];
  (this_00->Transform).Scale3D.XY.m128d_f64[1] = local_148.Scale3D.XY.m128d_f64[1];
  (this_00->Transform).Scale3D.ZW.m128d_f64[0] = local_148.Scale3D.ZW.m128d_f64[0];
  (this_00->Transform).Scale3D.ZW.m128d_f64[1] = local_148.Scale3D.ZW.m128d_f64[1];
  local_148.Translation.XY.m128d_f64[0] = local_280;
  local_148.Translation.XY.m128d_f64[1] = dStack_278;
  local_148.Translation.ZW.m128d_f64[0] = local_270;
  if ((uVar19 & 1) == 0) {
    *(uint *)(lVar21 + 0x9b48) = uVar19 | 1;
    __tlregdtor(`FDS_ISKM_BoidState_Escape_Fly_Landing::OnPostUpdateState'::__l2::
                _dynamic_atexit_destructor_for__hitResults__);
  }
  fVar26 = __real_3f800000;
  dVar27 = __real_3ff0000000000000;
  if (param_2->bIsFlying == false) {
    param_2->bIsFlying = true;
    goto LAB_14b8902c0;
  }
  if (*(char *)((longlong)&this->_padding_ + 4) == '\0') {
    local_268 = &this->Route;
    uVar19 = (this->Route).ArrayNum - 4;
    if (-1 < (int)uVar19) {
      lVar21 = (longlong)(int)uVar19 << 4;
      do {
        uVar20 = 0;
        if ((int)uVar19 < (param_2->AsyncCollision_FlyLanding).ArrayNum) {
          uVar20 = ~uVar19 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pvVar13 = ThreadLocalStoragePointer;
        pFVar2 = (param_2->AsyncCollision_FlyLanding).AllocatorInstance.Data;
        pTVar3 = *(TReferenceControllerBase<1> **)(pFVar2 + lVar21 + 8);
        this_01 = *(FWN_AsyncCollision **)(pFVar2 + lVar21);
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (this_01 == (FWN_AsyncCollision *)0x0) {
LAB_14b88fce8:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
          goto LAB_14b8902c0;
        }
        lVar4 = *(longlong *)((longlong)pvVar13 + uVar18 * 8);
        pTVar22 = (TArray<FHitResult,TSizedDefaultAllocator<32>_> *)(lVar4 + 0x9af0);
        bVar14 = FWN_AsyncCollision::GetHitResults(this_01,pTVar22,true);
        dVar29 = dStack_278;
        dVar7 = local_280;
        dVar6 = __real_3e45798ee0000000;
        if ((bVar14) && (0 < *(int *)(lVar4 + 0x9af8))) {
          iVar1 = (this->Route).ArrayNum;
          if (uVar19 == iVar1 - 4U) {
            fVar24 = *(float *)((longlong)&this->_padding_ + 4) + __real_41200000;
            fVar26 = *(float *)&this->_padding_;
            if (__real_42b40000 < fVar24) {
              fVar26 = fVar26 - __real_41200000;
            }
            if (__real_42b40000 <= fVar24) {
              fVar24 = __real_42b40000;
            }
            *(float *)&this->_padding_ = fVar26;
            *(float *)((longlong)&this->_padding_ + 4) = fVar24;
            uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_198 = (param_2->DestPos).field0_0x0._s_0.X;
            dStack_190 = (param_2->DestPos).field0_0x0._s_0.Y;
            local_188 = (param_2->DestPos).field0_0x0._s_0.Z;
            uVar9 = local_198 - local_280;
            uVar10 = dStack_190 - dStack_278;
            dVar27 = (double)uVar10 * (double)uVar10 + (double)uVar9 * (double)uVar9;
            if (dVar27 == __real_3ff0000000000000) {
              uVar30 = local_188 - local_270;
              if (local_188 - local_270 != 0.0) {
LAB_14b88fa3d:
                uVar30 = 0.0;
              }
            }
            else {
              if (dVar6 <= dVar27) {
                local_200 = __real_3ff0000000000000 / SQRT(dVar27);
                uVar9 = (double)uVar9 * local_200;
                uVar10 = (double)uVar10 * local_200;
                goto LAB_14b88fa3d;
              }
              local_170 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
              uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
              uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
              uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            }
            fVar24 = tanf(fVar24 * __real_3c8efa35);
            dVar27 = (double)fVar24;
            uVar9 = dVar27 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X + (double)uVar9;
            dStack_250 = dVar27 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y +
                         (double)uVar10;
            local_248 = dVar27 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z +
                        (double)uVar30;
            dVar27 = dStack_250 * dStack_250 + (double)uVar9 * (double)uVar9 + local_248 * local_248
            ;
            if (dVar27 != __real_3ff0000000000000) {
              if (dVar6 <= dVar27) {
                local_1f8 = __real_3ff0000000000000 / SQRT(dVar27);
                dStack_250 = local_1f8 * dStack_250;
                local_248 = local_1f8 * local_248;
                uVar9 = (double)uVar9 * local_1f8;
              }
              else {
                local_248 = (double)uVar28;
                local_258 = (double)uVar11;
                dStack_250 = (double)uVar12;
                uVar9 = uVar11;
              }
            }
            dVar27 = (double)fVar26;
            uVar20 = iVar1 - 3;
            uVar19 = 0;
            if ((int)uVar20 < iVar1) {
              uVar19 = ~uVar20 >> 0x1f;
            }
            dVar8 = dVar27 * dStack_250;
            dVar6 = dVar27 * local_248 + local_270;
            if ((uVar19 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar21 = (longlong)(int)uVar20;
            pFVar2 = (this->Route).AllocatorInstance.Data;
            *(double *)(pFVar2 + lVar21 * 0x18) = dVar27 * (double)uVar9 + dVar7;
            *(double *)(pFVar2 + lVar21 * 0x18 + 8) = dVar8 + dVar29;
            *(double *)(pFVar2 + lVar21 * 0x18 + 0x10) = dVar6;
            *(bool *)&this->_padding_ = *(float *)&this->_padding_ <= 0.0;
            pTVar23 = &this->Route;
          }
          else {
            pTVar23 = local_268;
            if (uVar19 == iVar1 - 5U) {
              pTVar23 = &this->Route;
              uVar10 = *(undefined8 *)((pTVar22->AllocatorInstance).Data + 0x28);
              if (((this->Route).ArrayNum < 3) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar18 = (ulonglong)_tls_index;
              *(undefined8 *)((pTVar23->AllocatorInstance).Data + 0x30) = uVar10;
              lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar18 * 8);
              if ((*(int *)(lVar21 + 0x9af8) < 1) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar10 = *(undefined8 *)(*(longlong *)(lVar21 + 0x9af0) + 0x30);
              if (((this->Route).ArrayNum < 3) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              *(undefined8 *)((pTVar23->AllocatorInstance).Data + 0x38) = uVar10;
            }
          }
          pFVar16 = TSharedPtr<FWN_BoidsNavSystem,1>::operator->(&param_2->BoidsNavSystem);
          FWN_BoidsNavSystem::SetRoute(pFVar16,pTVar23);
          goto LAB_14b88fce8;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        lVar21 = lVar21 + -0x10;
        uVar19 = uVar19 - 1;
        if ((int)uVar19 < 0) break;
        uVar18 = (ulonglong)_tls_index;
      } while( true );
    }
    dVar7 = __real_3e45798ee0000000;
    uVar33 = SUB84(local_280,0);
    uVar34 = (undefined4)((ulonglong)local_280 >> 0x20);
    uVar35 = SUB84(dStack_278,0);
    uVar36 = (undefined4)((ulonglong)dStack_278 >> 0x20);
    uVar31 = SUB84(local_270,0);
    uVar32 = (undefined4)((ulonglong)local_270 >> 0x20);
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
    local_298._s_0.X = (this->MaxHeightPos).field0_0x0._s_0.X - local_280;
    local_298._s_0.Y = (this->MaxHeightPos).field0_0x0._s_0.Y - dStack_278;
    local_298._s_0.Z = (this->MaxHeightPos).field0_0x0._s_0.Z - local_270;
    dVar6 = local_298._s_0.Y * local_298._s_0.Y + local_298._s_0.X * local_298._s_0.X;
    if (dVar6 == dVar27) {
      if (local_298._s_0.Z != 0.0) {
LAB_14b88fdbe:
        local_298._s_0.Z = 0.0;
      }
    }
    else {
      if (dVar7 <= dVar6) {
        dVar27 = dVar27 / SQRT(dVar6);
        local_298._s_0.Y = dVar27 * local_298._s_0.Y;
        local_298._s_0.X = dVar27 * local_298._s_0.X;
        goto LAB_14b88fdbe;
      }
      local_298._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_298._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_298._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    FDS_ISKM_BoidState::WN_Boid_RotateToDir
              (&local_148,(TVector<double> *)&local_298._s_0,(TRotator<double> *)0x0,
               (TQuat<double> *)0x0);
    (param_2->ExpectedTransform).Rotation.XY.m128d_f64[0] = local_148.Rotation.XY.m128d_f64[0];
    (param_2->ExpectedTransform).Rotation.XY.m128d_f64[1] = local_148.Rotation.XY.m128d_f64[1];
    (param_2->ExpectedTransform).Rotation.ZW.m128d_f64[0] = local_148.Rotation.ZW.m128d_f64[0];
    (param_2->ExpectedTransform).Rotation.ZW.m128d_f64[1] = local_148.Rotation.ZW.m128d_f64[1];
    (param_2->ExpectedTransform).Translation.XY.m128d_f64[0] = local_148.Translation.XY.m128d_f64[0]
    ;
    (param_2->ExpectedTransform).Translation.XY.m128d_f64[1] = local_148.Translation.XY.m128d_f64[1]
    ;
    (param_2->ExpectedTransform).Translation.ZW.m128d_f64[0] = local_148.Translation.ZW.m128d_f64[0]
    ;
    (param_2->ExpectedTransform).Translation.ZW.m128d_f64[1] = local_148.Translation.ZW.m128d_f64[1]
    ;
    (param_2->ExpectedTransform).Scale3D.XY.m128d_f64[0] = local_148.Scale3D.XY.m128d_f64[0];
    (param_2->ExpectedTransform).Scale3D.XY.m128d_f64[1] = local_148.Scale3D.XY.m128d_f64[1];
    (param_2->ExpectedTransform).Scale3D.ZW.m128d_f64[0] = local_148.Scale3D.ZW.m128d_f64[0];
    (param_2->ExpectedTransform).Scale3D.ZW.m128d_f64[1] = local_148.Scale3D.ZW.m128d_f64[1];
    FWN_ISKM_BoidInfo::PlayAnimation(this_00,*(FName *)((longlong)&this->_padding_ + 4),0.0,fVar26);
  }
  else {
    uVar31 = SUB84(local_270,0);
    uVar32 = (undefined4)((ulonglong)local_270 >> 0x20);
    uVar35 = SUB84(dStack_278,0);
    uVar36 = (undefined4)((ulonglong)dStack_278 >> 0x20);
    uVar33 = SUB84(local_280,0);
    uVar34 = (undefined4)((ulonglong)local_280 >> 0x20);
  }
  FVar15 = *(FName *)((longlong)&this->_padding_ + 4);
  dVar27 = (double)CONCAT44(uVar32,uVar31);
  if (FVar15 == (FName)this->_padding_) {
    fVar24 = param_1 * this_00->_AnimSpeed + this_00->_AnimTime;
    if (*(float *)&this->_padding_ <= fVar24 && fVar24 != *(float *)&this->_padding_) {
      fVar24 = *(float *)&this->_padding_;
      FVar15 = (FName)this->_padding_;
      *(FName *)((longlong)&this->_padding_ + 4) = FVar15;
      *(undefined4 *)((longlong)&this->_padding_ + 4) =
           *(undefined4 *)((longlong)&this->_padding_ + 4);
      dVar27 = (double)fVar24 * local_148.Scale3D.ZW.m128d_f64[0];
      FWN_ISKM_BoidInfo::PlayAnimation(this_00,FVar15,0.0,fVar26);
      FVar15 = *(FName *)((longlong)&this->_padding_ + 4);
      dVar27 = (double)CONCAT44(uVar32,uVar31) + dVar27;
      goto LAB_14b88fed4;
    }
    dVar27 = (double)CONCAT44(uVar32,uVar31);
    if (*(float *)&this->_padding_ <= param_1 + this_00->_AnimTime) goto LAB_14b88fed4;
  }
  else {
LAB_14b88fed4:
    fVar26 = __real_3f800000;
    dVar29 = (this->MaxHeightPos).field0_0x0._s_0.X - (double)CONCAT44(uVar34,uVar33);
    local_240._s_0.Z = (param_2->DestPos).field0_0x0._s_0.Z;
    dVar7 = (this->MaxHeightPos).field0_0x0._s_0.Y - (double)CONCAT44(uVar36,uVar35);
    local_240._s_0.X = (param_2->DestPos).field0_0x0._s_0.X;
    local_240._s_0.Y = (param_2->DestPos).field0_0x0._s_0.Y;
    uVar10 = (this->MaxHeightPos).field0_0x0._s_0.Z - dVar27;
    dVar6 = dVar7 * dVar7 + dVar29 * dVar29;
    if (dVar6 == __real_3ff0000000000000) {
      uVar9 = dVar29;
      uVar11 = dVar7;
      if ((double)uVar10 != 0.0) {
LAB_14b88ff8c:
        uVar9 = dVar29;
        uVar11 = dVar7;
        uVar10 = 0.0;
      }
    }
    else {
      uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (__real_3e45798ee0000000 <= dVar6) {
        dVar29 = dVar29 * (__real_3ff0000000000000 / SQRT(dVar6));
        dVar7 = dVar7 * (__real_3ff0000000000000 / SQRT(dVar6));
        goto LAB_14b88ff8c;
      }
    }
    dVar29 = local_240._s_0.X - (double)CONCAT44(uVar34,uVar33);
    dVar7 = local_240._s_0.Y - (double)CONCAT44(uVar36,uVar35);
    dVar6 = dVar7 * dVar7 + dVar29 * dVar29;
    if (dVar6 == __real_3ff0000000000000) {
      uVar28 = local_240._s_0.Z - dVar27;
      uVar30 = dVar29;
      uVar12 = dVar7;
      if (local_240._s_0.Z - dVar27 != 0.0) {
LAB_14b890006:
        uVar28 = 0.0;
        uVar30 = dVar29;
        uVar12 = dVar7;
      }
    }
    else {
      uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      if (__real_3e45798ee0000000 <= dVar6) {
        dVar29 = dVar29 * (__real_3ff0000000000000 / SQRT(dVar6));
        dVar7 = dVar7 * (__real_3ff0000000000000 / SQRT(dVar6));
        goto LAB_14b890006;
      }
    }
    if (FVar15 != this->FlyToStandAnim) {
      fVar24 = param_1 * param_2->Acceleration;
      if (0.0 < (double)uVar12 * (double)uVar11 + (double)uVar30 * (double)uVar9 +
                (double)uVar28 * (double)uVar10) {
        fVar24 = fVar24 + param_2->Speed;
        if (param_2->MaxSpeed <= fVar24) {
          fVar24 = param_2->MaxSpeed;
        }
        param_2->Speed = fVar24;
        fVar24 = fVar24 / *(float *)&this->_padding_;
      }
      else {
        fVar24 = param_2->Speed - fVar24;
        if (fVar24 <= *(float *)&this->_padding_) {
          fVar24 = *(float *)&this->_padding_;
        }
        fVar25 = param_2->MaxSpeed;
        if (fVar24 <= param_2->MaxSpeed) {
          fVar25 = fVar24;
        }
        param_2->Speed = fVar25;
        fVar24 = (fVar24 - *(float *)&this->_padding_) / *(float *)&this->_padding_ + fVar26;
      }
      this_00->_AnimSpeed = fVar24;
      fVar24 = param_1 * param_2->Speed + param_2->MoveDist;
      param_2->MoveDist = fVar24;
      pFVar16 = TSharedPtr<FWN_BoidsNavSystem,1>::operator->(&param_2->BoidsNavSystem);
      local_260 = (double)fVar24;
      FWN_BoidsNavSystem::GetTransformInRoute
                (pFVar16,&local_260,&local_148,(TVector<double> *)&local_240._s_0,false);
    }
    fVar24 = param_2->MoveDist;
    pFVar16 = TSharedPtr<FWN_BoidsNavSystem,1>::operator->(&param_2->BoidsNavSystem);
    dVar27 = FWN_BoidsNavSystem::GetTotalDist(pFVar16);
    if ((dVar27 < (double)fVar24) &&
       (*(FName *)((longlong)&this->_padding_ + 4) != this->FlyToStandAnim)) {
      local_1b8.X = local_148.Rotation.XY.m128d_f64[0];
      local_1b8.Y = local_148.Rotation.XY.m128d_f64[1];
      local_1b8.Z = local_148.Rotation.ZW.m128d_f64[0];
      local_1b8.W = local_148.Rotation.ZW.m128d_f64[1];
      UE::Math::TQuat<double>::Rotator(&local_1b8,&local_218);
      local_218.Pitch = 0.0;
      local_218.Roll = 0.0;
      pTVar17 = UE::Math::TRotator<double>::Quaternion(&local_218,&local_168);
      FVar15 = this->FlyToStandAnim;
      local_148.Rotation.ZW.m128d_f64[0] = pTVar17->Z;
      local_148.Rotation.ZW.m128d_f64[1] = pTVar17->W;
      local_148.Rotation.XY.m128d_f64[0] = pTVar17->X;
      local_148.Rotation.XY.m128d_f64[1] = pTVar17->Y;
      fVar24 = this->FlyToStandAnimTime;
      *(FName *)((longlong)&this->_padding_ + 4) = FVar15;
      local_148.Translation.XY.m128d_f64[0] = local_240._s_0.X;
      local_148.Translation.XY.m128d_f64[1] = local_240._s_0.Y;
      local_148.Translation.ZW.m128d_f64[0] = local_240._s_0.Z;
      local_148.Translation.ZW.m128d_f64[1] = 0.0;
      *(float *)((longlong)&this->_padding_ + 4) = fVar24;
      FWN_ISKM_BoidInfo::PlayAnimation(this_00,FVar15,0.0,fVar26);
    }
    if ((*(FName *)((longlong)&this->_padding_ + 4) == this->FlyToStandAnim) &&
       (fVar26 = param_1 * this_00->_AnimSpeed + this_00->_AnimTime,
       this->FlyToStandAnimTime <= fVar26 && fVar26 != this->FlyToStandAnimTime)) {
      *(undefined1 *)&this->_padding_ = 1;
    }
    (param_2->ExpectedTransform).Rotation.XY.m128d_f64[0] = local_148.Rotation.XY.m128d_f64[0];
    (param_2->ExpectedTransform).Rotation.XY.m128d_f64[1] = local_148.Rotation.XY.m128d_f64[1];
    (param_2->ExpectedTransform).Rotation.ZW.m128d_f64[0] = local_148.Rotation.ZW.m128d_f64[0];
    (param_2->ExpectedTransform).Rotation.ZW.m128d_f64[1] = local_148.Rotation.ZW.m128d_f64[1];
    (param_2->ExpectedTransform).Translation.XY.m128d_f64[0] = local_148.Translation.XY.m128d_f64[0]
    ;
    (param_2->ExpectedTransform).Translation.XY.m128d_f64[1] = local_148.Translation.XY.m128d_f64[1]
    ;
    (param_2->ExpectedTransform).Translation.ZW.m128d_f64[0] = local_148.Translation.ZW.m128d_f64[0]
    ;
    (param_2->ExpectedTransform).Translation.ZW.m128d_f64[1] = local_148.Translation.ZW.m128d_f64[1]
    ;
    (param_2->ExpectedTransform).Scale3D.XY.m128d_f64[0] = local_148.Scale3D.XY.m128d_f64[0];
    (param_2->ExpectedTransform).Scale3D.XY.m128d_f64[1] = local_148.Scale3D.XY.m128d_f64[1];
    (param_2->ExpectedTransform).Scale3D.ZW.m128d_f64[0] = local_148.Scale3D.ZW.m128d_f64[0];
    (param_2->ExpectedTransform).Scale3D.ZW.m128d_f64[1] = local_148.Scale3D.ZW.m128d_f64[1];
  }
  param_2->LastDeltaSeconds = param_1;
LAB_14b8902c0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_228.SharedReferenceCount.ReferenceController);
  return;
}

// OnPreEnterState @ 14b891550

void __thiscall
FDS_ISKM_BoidState_Escape_Fly_Landing::OnPreEnterState
          (FDS_ISKM_BoidState_Escape_Fly_Landing *this,FName param_1,
          FDS_ISKM_BoidsFSM_ExecutionContext *param_2)

{
  *(longlong *)((longlong)&this->_padding_ + 4) = this->_padding_;
  *(int *)((longlong)&this->_padding_ + 4) = (int)this->_padding_;
  return;
}

// SetFlyAnimation @ 14b898940

void __thiscall
FDS_ISKM_BoidState_Escape_Fly_Landing::SetFlyAnimation
          (FDS_ISKM_BoidState_Escape_Fly_Landing *this,UWN_ISKM_Profile *param_1,FName *param_2,
          FName *param_3,FName *param_4)

{
  code *pcVar1;
  bool bVar2;
  FWN_ISKM_AnimationInfo *pFVar3;
  
  FDS_ISKM_BoidState_Escape_Fly::SetFlyAnimation
            ((FDS_ISKM_BoidState_Escape_Fly *)this,param_1,param_2,param_3);
  pFVar3 = UWN_ISKM_Profile::FindAnimationInfo(param_1,*param_4);
  if (pFVar3 == (FWN_ISKM_AnimationInfo *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5120548898934357775>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\AIBoids\\State\\DS_ISKM_BoidState_Escape_Fly_Landing.cpp"
                       ,0xf1,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this->FlyToStandAnim = *param_4;
    this->FlyToStandAnimTime = pFVar3->TotalTime;
  }
  return;
}

// SetInitialProperty @ 14b898cc0

void __thiscall
FDS_ISKM_BoidState_Escape_Fly_Landing::SetInitialProperty
          (FDS_ISKM_BoidState_Escape_Fly_Landing *this,FDS_Boids_InitialProperty *param_1)

{
  *(float *)&this->_padding_ = param_1->ComebackDist;
  *(float *)&this->_padding_ = param_1->ChaseApproachRange;
  *(float *)((longlong)&this->_padding_ + 4) = param_1->ChaseRange;
  *(float *)((longlong)&this->_padding_ + 4) = param_1->RunAwayRange;
  *(float *)&this->_padding_ = param_1->RunAwayMinRange;
  *(float *)((longlong)&this->_padding_ + 4) = param_1->RunAwayMaxRange;
  *(float *)&this->_padding_ = param_1->RunAwayExceptAngle;
  *(float *)((longlong)&this->_padding_ + 4) = param_1->ProwlMinRange;
  *(float *)&this->_padding_ = param_1->ProwlMaxRange;
  *(float *)&this->_padding_ = param_1->RunAwayMaxSpeed;
  *(float *)((longlong)&this->_padding_ + 4) = param_1->RunAwayAcceleration;
  return;
}

