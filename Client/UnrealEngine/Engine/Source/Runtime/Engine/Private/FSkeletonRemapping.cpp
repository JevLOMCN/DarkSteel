// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// GetSourceSkeletonBoneIndex @ 147404e70

int __thiscall FSkeletonRemapping::GetSourceSkeletonBoneIndex(FSkeletonRemapping *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  if ((-1 < param_1) && (param_1 < (this->TargetToSourceBoneIndexes).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->TargetToSourceBoneIndexes).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
    }
    return *(int *)((this->TargetToSourceBoneIndexes).AllocatorInstance.Data + (longlong)param_1 * 4
                   );
  }
  return -1;
}

// IsValid @ 147408110

bool __thiscall FSkeletonRemapping::IsValid(FSkeletonRemapping *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->TargetSkeleton).WeakPtr);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// RetargetAdditiveRotationToTargetSkeleton @ 14740f910

TQuat<double> * __thiscall
FSkeletonRemapping::RetargetAdditiveRotationToTargetSkeleton
          (FSkeletonRemapping *this,TQuat<double> *__return_storage_ptr__,int param_1,
          TQuat<double> *param_2)

{
  undefined1 auVar1 [16];
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  bool bVar25;
  uint uVar26;
  TQuat<double> *pTVar27;
  longlong lVar28;
  double dStack_b0;
  
  uVar26 = 0;
  if (param_1 < (this->RetargetingTable).ArrayNum) {
    uVar26 = (uint)~param_1 >> 0x1f;
  }
  if (uVar26 == 0) {
    bVar25 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar25) {
      pcVar3 = (code *)swi(3);
      pTVar27 = (TQuat<double> *)(*pcVar3)();
      return pTVar27;
    }
  }
  dVar10 = param_2->Z;
  dVar11 = param_2->W;
  dVar21 = param_2->X;
  dVar22 = param_2->Y;
  pFVar2 = (this->RetargetingTable).AllocatorInstance.Data;
  lVar28 = (longlong)param_1 * 0x40;
  auVar1 = *(undefined1 (*) [16])(pFVar2 + lVar28);
  dVar23 = *(double *)(pFVar2 + lVar28 + 0x10);
  dVar24 = *(double *)(pFVar2 + lVar28 + 0x10 + 8);
  dVar6 = auVar1._0_8_;
  dVar7 = auVar1._8_8_;
  auVar8._8_4_ = auVar1._0_4_;
  auVar8._0_8_ = dVar6;
  auVar8._12_4_ = auVar1._4_4_;
  dVar13 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  dVar19 = dVar23 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar20 = dVar24 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar15 = *(double *)(pFVar2 + lVar28) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar16 = *(double *)(pFVar2 + lVar28 + 8) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar17 = dVar6 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar24 * dVar21 +
           dVar7 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar23 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar18 = dVar6 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar24 * dVar22 +
           dVar7 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           dVar23 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dStack_b0 = auVar8._8_8_;
  dVar14 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  dVar6 = dVar6 * dVar22 * dVar14 + dVar24 * dVar10 + dVar7 * dVar21 * dVar13 +
          dVar23 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar7 = dStack_b0 * dVar21 * dVar5 + dVar24 * dVar11 + dVar7 * dVar22 * dVar4 +
          dVar23 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  auVar1._8_4_ = SUB84(dVar6,0);
  auVar1._0_8_ = dVar6;
  auVar1._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  dStack_b0 = auVar1._8_8_;
  dVar10 = dVar17 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar7 * dVar15 +
           dVar18 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar6 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar11 = dVar17 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar7 * dVar16 +
           dVar18 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           dStack_b0 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar9._8_4_ = SUB84(dVar11,0);
  auVar9._0_8_ = dVar10;
  auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  __return_storage_ptr__->X = dVar10;
  __return_storage_ptr__->Y = (double)auVar9._8_8_;
  dVar13 = dVar17 * dVar16 * dVar14 + dVar7 * dVar19 + dVar18 * dVar15 * dVar13 +
           dVar6 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar14 = dVar17 * dVar15 * dVar5 + dVar7 * dVar20 + dVar18 * dVar16 * dVar4 +
           dStack_b0 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  auVar12._8_4_ = SUB84(dVar14,0);
  auVar12._0_8_ = dVar13;
  auVar12._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  __return_storage_ptr__->Z = dVar13;
  __return_storage_ptr__->W = (double)auVar12._8_8_;
  return __return_storage_ptr__;
}

// RetargetBoneRotationToTargetSkeleton @ 14740fbc0

TQuat<double> * __thiscall
FSkeletonRemapping::RetargetBoneRotationToTargetSkeleton
          (FSkeletonRemapping *this,TQuat<double> *__return_storage_ptr__,int param_1,
          TQuat<double> *param_2)

{
  undefined1 auVar1 [16];
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  bool bVar21;
  uint uVar22;
  TQuat<double> *pTVar23;
  longlong lVar24;
  double dStack_50;
  
  uVar22 = 0;
  if (param_1 < (this->RetargetingTable).ArrayNum) {
    uVar22 = (uint)~param_1 >> 0x1f;
  }
  if (uVar22 == 0) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar21) {
      pcVar3 = (code *)swi(3);
      pTVar23 = (TQuat<double> *)(*pcVar3)();
      return pTVar23;
    }
  }
  dVar8 = param_2->Z;
  dVar9 = param_2->W;
  dVar13 = param_2->X;
  dVar14 = param_2->Y;
  pFVar2 = (this->RetargetingTable).AllocatorInstance.Data;
  lVar24 = (longlong)param_1 * 0x40;
  auVar1 = *(undefined1 (*) [16])(pFVar2 + lVar24);
  dVar15 = *(double *)(pFVar2 + lVar24 + 0x10);
  dVar16 = *(double *)(pFVar2 + lVar24 + 0x10 + 8);
  dVar4 = auVar1._0_8_;
  auVar6._8_4_ = auVar1._0_4_;
  auVar6._0_8_ = dVar4;
  auVar6._12_4_ = auVar1._4_4_;
  dVar5 = auVar1._8_8_;
  dVar17 = *(double *)(pFVar2 + lVar24 + 0x20);
  dVar18 = *(double *)(pFVar2 + lVar24 + 0x20 + 8);
  dVar11 = dVar4 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar16 * dVar13 +
           dVar5 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar15 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar12 = dVar4 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar16 * dVar14 +
           dVar5 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           dVar15 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dStack_50 = auVar6._8_8_;
  dVar19 = *(double *)(pFVar2 + lVar24 + 0x30);
  dVar20 = *(double *)(pFVar2 + lVar24 + 0x30 + 8);
  dVar4 = dVar4 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          dVar16 * dVar8 +
          dVar5 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          dVar15 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar5 = dStack_50 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar16 * dVar9 +
          dVar5 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar15 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  auVar1._8_4_ = SUB84(dVar4,0);
  auVar1._0_8_ = dVar4;
  auVar1._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  dStack_50 = auVar1._8_8_;
  dVar8 = dVar11 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          dVar5 * dVar17 +
          dVar12 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          dVar4 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar9 = dVar11 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar5 * dVar18 +
          dVar12 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dStack_50 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar4 = dVar11 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          dVar5 * dVar19 +
          dVar12 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          dVar4 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar5 = dVar11 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar5 * dVar20 +
          dVar12 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dStack_50 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  auVar7._8_4_ = SUB84(dVar9,0);
  auVar7._0_8_ = dVar8;
  auVar7._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  __return_storage_ptr__->X = dVar8;
  __return_storage_ptr__->Y = (double)auVar7._8_8_;
  auVar10._8_4_ = SUB84(dVar5,0);
  auVar10._0_8_ = dVar4;
  auVar10._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  __return_storage_ptr__->Z = dVar4;
  __return_storage_ptr__->W = (double)auVar10._8_8_;
  return __return_storage_ptr__;
}

// RetargetBoneTransformToTargetSkeleton @ 147410920

TTransform<double> * __thiscall
FSkeletonRemapping::RetargetBoneTransformToTargetSkeleton
          (FSkeletonRemapping *this,TTransform<double> *__return_storage_ptr__,int param_1,
          TTransform<double> *param_2)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  TTransform<double> *pTVar10;
  TQuat<double> *pTVar11;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_88;
  TQuat<double> local_68;
  TQuat<double> local_48 [2];
  
  dVar4 = (param_2->Scale3D).XY.m128d_f64[0];
  dVar5 = (param_2->Scale3D).XY.m128d_f64[1];
  dVar3 = (param_2->Scale3D).ZW.m128d_f64[0];
  dVar6 = (param_2->Translation).XY.m128d_f64[0];
  dVar7 = (param_2->Translation).XY.m128d_f64[1];
  dVar1 = (param_2->Translation).ZW.m128d_f64[0];
  uVar9 = 0;
  if (param_1 < (this->RetargetingTable).ArrayNum) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      pTVar10 = (TTransform<double> *)(*pcVar2)();
      return pTVar10;
    }
  }
  local_88._s_0.X = dVar6;
  local_88._s_0.Y = dVar7;
  local_88._s_0.Z = dVar1;
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)
             ((this->RetargetingTable).AllocatorInstance.Data + (longlong)param_1 * 0x40),
             (TVector<double> *)&local_a8._s_0,(TVector<double> *)&local_88._s_0);
  local_68.X = (param_2->Rotation).XY.m128d_f64[0];
  local_68.Y = (param_2->Rotation).XY.m128d_f64[1];
  local_68.Z = (param_2->Rotation).ZW.m128d_f64[0];
  local_68.W = (param_2->Rotation).ZW.m128d_f64[1];
  pTVar11 = RetargetBoneRotationToTargetSkeleton(this,local_48,param_1,&local_68);
  dVar1 = pTVar11->Z;
  dVar6 = pTVar11->W;
  dVar7 = pTVar11->Y;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = pTVar11->X;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar7;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar6;
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_a8._s_0.X;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_a8._s_0.Y;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_a8._s_0.Z;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar4;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar5;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar3;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
  return __return_storage_ptr__;
}

// RetargetBoneTranslationToTargetSkeleton @ 147410a90

TVector<double> * __thiscall
FSkeletonRemapping::RetargetBoneTranslationToTargetSkeleton
          (FSkeletonRemapping *this,TVector<double> *__return_storage_ptr__,int param_1,
          TVector<double> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<double> *pTVar4;
  TVector<double>_u_0 local_28;
  
  uVar3 = 0;
  if (param_1 < (this->RetargetingTable).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  local_28._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)
             ((this->RetargetingTable).AllocatorInstance.Data + (longlong)param_1 * 0x40),
             __return_storage_ptr__,(TVector<double> *)&local_28._s_0);
  return __return_storage_ptr__;
}

// GetTargetSkeletonBoneIndex @ 1475630c0

int __thiscall FSkeletonRemapping::GetTargetSkeletonBoneIndex(FSkeletonRemapping *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  if ((-1 < param_1) && (param_1 < (this->SourceToTargetBoneIndexes).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->SourceToTargetBoneIndexes).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
    }
    return *(int *)((this->SourceToTargetBoneIndexes).AllocatorInstance.Data + (longlong)param_1 * 4
                   );
  }
  return -1;
}

// FSkeletonRemapping @ 1475a5790

FSkeletonRemapping * __thiscall
FSkeletonRemapping::FSkeletonRemapping
          (FSkeletonRemapping *this,USkeleton *param_1,USkeleton *param_2)

{
  USkeleton *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USkeleton *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->SourceSkeleton).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USkeleton *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (USkeleton *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->TargetSkeleton).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (USkeleton *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&(this->TargetSkeleton).WeakPtr,(FObjectPtr)&local_res8);
  (this->SourceToTargetBoneIndexes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceToTargetBoneIndexes).ArrayNum = 0;
  (this->SourceToTargetBoneIndexes).ArrayMax = 0;
  (this->TargetToSourceBoneIndexes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetToSourceBoneIndexes).ArrayNum = 0;
  (this->TargetToSourceBoneIndexes).ArrayMax = 0;
  (this->RetargetingTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RetargetingTable).ArrayNum = 0;
  (this->RetargetingTable).ArrayMax = 0;
  GenerateMapping(this);
  return this;
}

// ComposeWith @ 1475baa90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FSkeletonRemapping::ComposeWith(FSkeletonRemapping *this,FSkeletonRemapping *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 auVar2 [16];
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  longlong lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  bool bVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  ulonglong uVar33;
  uint uVar34;
  TArray<TTuple<UE::Math::TQuat<double>,UE::Math::TQuat<double>_>,TSizedDefaultAllocator<32>_>
  *pTVar35;
  ulonglong uVar36;
  FScriptContainerElement *pFVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  longlong local_res20;
  TArray<TTuple<UE::Math::TQuat<double>,UE::Math::TQuat<double>_>,TSizedDefaultAllocator<32>_>
  local_208;
  TArray<int,TSizedDefaultAllocator<32>_> local_1f8;
  longlong local_1e8;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  
  bVar28 = TWeakObjectPtr<USkeleton_const_,FWeakObjectPtr>::UEOpEquals<USkeleton_const_,bool>
                     (&param_1->SourceSkeleton,&this->TargetSkeleton);
  if ((!bVar28) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("OtherSkeletonRemapping.SourceSkeleton == TargetSkeleton",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkeletonRemapping.cpp"
                          ,199,L""), bVar28)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar3 = (this->SourceToTargetBoneIndexes).ArrayNum;
  uVar33 = 0;
  (this->TargetSkeleton).WeakPtr = (param_1->TargetSkeleton).WeakPtr;
  iVar31 = (param_1->TargetToSourceBoneIndexes).ArrayNum;
  local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f8.ArrayNum = 0;
  local_1f8.ArrayMax = 0;
  local_208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.ArrayNum = 0;
  local_208.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_1f8,iVar31,Default);
  TArray<TTuple<UE::Math::TQuat<double>,UE::Math::TQuat<double>_>,TSizedDefaultAllocator<32>_>::
  SetNumUninitialized(&local_208,iVar31,Default);
  local_1e8 = (longlong)iVar31;
  if (0 < iVar31) {
    local_res20 = 0;
    uVar36 = uVar33;
    do {
      uVar32 = (uint)uVar33;
      uVar34 = ~uVar32 >> 0x1f;
      uVar29 = 0;
      if ((int)uVar32 < (param_1->TargetToSourceBoneIndexes).ArrayNum) {
        uVar29 = uVar34;
      }
      if ((uVar29 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar29 = *(uint *)((param_1->TargetToSourceBoneIndexes).AllocatorInstance.Data + uVar36 * 4);
      if (uVar29 == 0xffffffff) {
        iVar31 = -1;
      }
      else {
        uVar30 = 0;
        if ((int)uVar29 < (this->TargetToSourceBoneIndexes).ArrayNum) {
          uVar30 = ~uVar29 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar31 = *(int *)((this->TargetToSourceBoneIndexes).AllocatorInstance.Data +
                         (longlong)(int)uVar29 * 4);
      }
      if (iVar31 == -1) {
        uVar29 = 0;
        if ((int)uVar32 < local_1f8.ArrayNum) {
          uVar29 = uVar34;
        }
        if ((uVar29 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined4 *)(local_1f8.AllocatorInstance.Data + uVar36 * 4) = 0xffffffff;
        dVar7 = UE::Math::TQuat<double>::Identity.W;
        dVar9 = UE::Math::TQuat<double>::Identity.Z;
        dVar6 = UE::Math::TQuat<double>::Identity.Y;
        dVar13 = UE::Math::TQuat<double>::Identity.X;
        local_128 = UE::Math::TQuat<double>::Identity.X;
        dStack_120 = UE::Math::TQuat<double>::Identity.Y;
        local_118 = UE::Math::TQuat<double>::Identity.Z;
        dStack_110 = UE::Math::TQuat<double>::Identity.W;
        uVar29 = 0;
        if ((int)uVar32 < local_208.ArrayNum) {
          uVar29 = uVar34;
        }
        local_108 = UE::Math::TQuat<double>::Identity.X;
        dStack_100 = UE::Math::TQuat<double>::Identity.Y;
        local_f8 = UE::Math::TQuat<double>::Identity.Z;
        dStack_f0 = UE::Math::TQuat<double>::Identity.W;
        if ((uVar29 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(double *)(local_208.AllocatorInstance.Data + local_res20) = dVar13;
        *(double *)(local_208.AllocatorInstance.Data + local_res20 + 8) = dVar6;
        *(double *)(local_208.AllocatorInstance.Data + local_res20 + 0x10) = dVar9;
        *(double *)(local_208.AllocatorInstance.Data + local_res20 + 0x10 + 8) = dVar7;
        *(double *)(local_208.AllocatorInstance.Data + local_res20 + 0x20) = dVar13;
        *(double *)(local_208.AllocatorInstance.Data + local_res20 + 0x20 + 8) = dVar6;
        *(double *)(local_208.AllocatorInstance.Data + local_res20 + 0x30) = dVar9;
        *(double *)(local_208.AllocatorInstance.Data + local_res20 + 0x30 + 8) = dVar7;
      }
      else {
        uVar30 = 0;
        if ((int)uVar29 < (this->RetargetingTable).ArrayNum) {
          uVar30 = ~uVar29 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar37 = (this->RetargetingTable).AllocatorInstance.Data + (longlong)(int)uVar29 * 0x40;
        uVar29 = 0;
        if ((int)uVar32 < (param_1->RetargetingTable).ArrayNum) {
          uVar29 = uVar34;
        }
        if ((uVar29 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        dVar6 = *(double *)(pFVar37 + 0x10);
        dVar9 = *(double *)(pFVar37 + 0x18);
        dVar7 = *(double *)pFVar37;
        dVar14 = *(double *)(pFVar37 + 8);
        pFVar4 = (param_1->RetargetingTable).AllocatorInstance.Data;
        dVar15 = *(double *)(pFVar4 + local_res20);
        dVar16 = *(double *)(pFVar4 + local_res20 + 8);
        dVar17 = *(double *)(pFVar4 + local_res20 + 0x10);
        dVar18 = *(double *)(pFVar4 + local_res20 + 0x10 + 8);
        dVar19 = *(double *)(pFVar4 + local_res20 + 0x20);
        dVar20 = *(double *)(pFVar4 + local_res20 + 0x20 + 8);
        dVar21 = *(double *)(pFVar4 + local_res20 + 0x30);
        dVar22 = *(double *)(pFVar4 + local_res20 + 0x30 + 8);
        auVar2 = *(undefined1 (*) [16])(pFVar37 + 0x20);
        dVar12 = dVar15 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                 dVar18 * dVar6 +
                 dVar16 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                 dVar17 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar13 = dVar15 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                 dVar18 * dVar9 +
                 dVar16 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                 dVar17 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        uVar42 = SUB84(dVar13,0);
        uVar43 = (undefined4)((ulonglong)dVar13 >> 0x20);
        dVar23 = *(double *)(pFVar37 + 0x30);
        dVar24 = *(double *)(pFVar37 + 0x38);
        dVar8 = dVar15 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                dVar18 * dVar7 +
                dVar16 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                dVar17 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar13 = dVar15 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 dVar18 * dVar14 +
                 dVar16 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 dVar17 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        uVar38 = SUB84(dVar13,0);
        uVar39 = (undefined4)((ulonglong)dVar13 >> 0x20);
        local_1a8._8_4_ = uVar38;
        local_1a8._0_8_ = dVar8;
        local_1a8._12_4_ = uVar39;
        dVar9 = auVar2._0_8_;
        local_1b8._8_4_ = auVar2._0_4_;
        local_1b8._0_8_ = dVar9;
        local_1b8._12_4_ = auVar2._4_4_;
        dVar7 = auVar2._8_8_;
        dVar13 = dVar9 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
        dVar6 = dVar9 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
        local_1c8._8_4_ = SUB84(dVar6,0);
        local_1c8._0_8_ = dVar13;
        local_1c8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        local_1d8._8_4_ = uVar38;
        local_1d8._0_8_ = dVar8;
        local_1d8._12_4_ = uVar39;
        dVar13 = dVar13 + dVar24 * dVar19 +
                 dVar7 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 dVar23 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar6 = (double)local_1c8._8_8_ + dVar24 * dVar20 +
                dVar7 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                dVar23 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        uVar38 = SUB84(dVar6,0);
        uVar39 = (undefined4)((ulonglong)dVar6 >> 0x20);
        local_198._8_4_ = uVar42;
        local_198._0_8_ = dVar12;
        local_198._12_4_ = uVar43;
        local_188._8_4_ = uVar38;
        local_188._0_8_ = dVar13;
        local_188._12_4_ = uVar39;
        uVar29 = 0;
        if ((int)uVar32 < local_1f8.ArrayNum) {
          uVar29 = uVar34;
        }
        dVar6 = dVar9 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                dVar24 * dVar21 +
                dVar7 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                dVar23 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar9 = (double)local_1b8._8_8_ * dVar19 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] + dVar24 * dVar22 +
                dVar7 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                dVar23 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        uVar40 = SUB84(dVar9,0);
        uVar41 = (undefined4)((ulonglong)dVar9 >> 0x20);
        local_178._8_4_ = uVar40;
        local_178._0_8_ = dVar6;
        local_178._12_4_ = uVar41;
        if ((uVar29 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar26 = local_1d8._0_8_;
        uVar27 = local_1d8._8_8_;
        local_168 = local_1d8._0_8_;
        uStack_160 = local_1d8._8_8_;
        local_158._8_4_ = uVar42;
        local_158._0_8_ = dVar12;
        local_158._12_4_ = uVar43;
        *(int *)(local_1f8.AllocatorInstance.Data + uVar36 * 4) = iVar31;
        local_148._8_4_ = uVar38;
        local_148._0_8_ = dVar13;
        local_148._12_4_ = uVar39;
        local_138._8_4_ = uVar40;
        local_138._0_8_ = dVar6;
        local_138._12_4_ = uVar41;
        uVar29 = 0;
        if ((int)uVar32 < local_208.ArrayNum) {
          uVar29 = uVar34;
        }
        if ((uVar29 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined8 *)(local_208.AllocatorInstance.Data + local_res20) = uVar26;
        *(undefined8 *)(local_208.AllocatorInstance.Data + local_res20 + 8) = uVar27;
        auVar11._8_4_ = uVar42;
        auVar11._0_8_ = dVar12;
        auVar11._12_4_ = uVar43;
        *(undefined1 (*) [16])(local_208.AllocatorInstance.Data + local_res20 + 0x10) = auVar11;
        auVar10._8_4_ = uVar38;
        auVar10._0_8_ = dVar13;
        auVar10._12_4_ = uVar39;
        *(undefined1 (*) [16])(local_208.AllocatorInstance.Data + local_res20 + 0x20) = auVar10;
        auVar2._8_4_ = uVar40;
        auVar2._0_8_ = dVar6;
        auVar2._12_4_ = uVar41;
        *(undefined1 (*) [16])(local_208.AllocatorInstance.Data + local_res20 + 0x30) = auVar2;
      }
      local_res20 = local_res20 + 0x40;
      uVar33 = (ulonglong)(uVar32 + 1);
      uVar36 = uVar36 + 1;
    } while ((longlong)uVar36 < local_1e8);
  }
  lVar25 = local_1e8;
  uVar33 = 0;
  pTVar35 = &this->RetargetingTable;
  pTVar1 = &this->TargetToSourceBoneIndexes;
  if (pTVar1 != &local_1f8) {
    pFVar37 = (pTVar1->AllocatorInstance).Data;
    if (pFVar37 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar37);
    }
    (pTVar1->AllocatorInstance).Data = local_1f8.AllocatorInstance.Data;
    (this->TargetToSourceBoneIndexes).ArrayNum = local_1f8.ArrayNum;
    (this->TargetToSourceBoneIndexes).ArrayMax = local_1f8.ArrayMax;
    local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1f8.ArrayNum = 0;
    local_1f8.ArrayMax = 0;
  }
  if (pTVar35 != &local_208) {
    pFVar37 = (pTVar35->AllocatorInstance).Data;
    if (pFVar37 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar37);
    }
    (pTVar35->AllocatorInstance).Data = local_208.AllocatorInstance.Data;
    (this->RetargetingTable).ArrayNum = local_208.ArrayNum;
    (this->RetargetingTable).ArrayMax = local_208.ArrayMax;
    local_208.ArrayNum = 0;
    local_208.ArrayMax = 0;
    local_208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  memset((this->SourceToTargetBoneIndexes).AllocatorInstance.Data,0xff,(ulonglong)(uint)(iVar3 * 4))
  ;
  uVar36 = uVar33;
  if (0 < lVar25) {
    do {
      uVar32 = (uint)uVar33;
      uVar29 = 0;
      if ((int)uVar32 < (this->TargetToSourceBoneIndexes).ArrayNum) {
        uVar29 = ~uVar32 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar29 = *(uint *)((this->TargetToSourceBoneIndexes).AllocatorInstance.Data + uVar36 * 4);
      if (uVar29 != 0xffffffff) {
        uVar34 = 0;
        if ((int)uVar29 < (this->SourceToTargetBoneIndexes).ArrayNum) {
          uVar34 = ~uVar29 >> 0x1f;
        }
        if ((uVar34 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(uint *)((this->SourceToTargetBoneIndexes).AllocatorInstance.Data +
                 (longlong)(int)uVar29 * 4) = uVar32;
      }
      uVar33 = (ulonglong)(uVar32 + 1);
      uVar36 = uVar36 + 1;
    } while ((longlong)uVar36 < lVar25);
  }
  if (local_208.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.AllocatorInstance.Data);
  }
  if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.AllocatorInstance.Data);
  }
  return;
}

// GenerateMapping @ 1475cbdf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FSkeletonRemapping::GenerateMapping(FSkeletonRemapping *this)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  undefined1 auVar38 [12];
  undefined8 uVar39;
  bool bVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  UObject *pUVar44;
  UObject *pUVar45;
  TTuple<FName,int> *pTVar46;
  TTransform<double> *pTVar47;
  undefined4 *puVar48;
  uint uVar49;
  uint uVar50;
  longlong lVar51;
  ulonglong uVar52;
  uint uVar53;
  ulonglong uVar54;
  ulonglong uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  undefined1 local_2d8 [16];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_2c8;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_2b8;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_2a8;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_298;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  longlong local_268;
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  undefined1 local_218 [16];
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  double local_128;
  double dStack_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  
  bVar40 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if ((bVar40) && (bVar40 = FWeakObjectPtr::IsValid(&(this->TargetSkeleton).WeakPtr), bVar40)) {
    pUVar44 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    pUVar45 = FWeakObjectPtr::Get(&(this->TargetSkeleton).WeakPtr);
    iVar2 = *(int *)&pUVar44[2].field_0x20;
    lVar51 = (longlong)iVar2;
    iVar3 = *(int *)&pUVar45[2].field_0x20;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->SourceToTargetBoneIndexes,iVar2,Default);
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->TargetToSourceBoneIndexes,iVar3,Default);
    TArray<TTuple<UE::Math::TQuat<double>,UE::Math::TQuat<double>_>,TSizedDefaultAllocator<32>_>::
    SetNumUninitialized(&this->RetargetingTable,iVar3,Default);
    uVar54 = 0;
    uVar55 = uVar54;
    uVar52 = uVar54;
    if (0 < iVar2) {
      do {
        uVar49 = (uint)uVar54;
        uVar50 = 0;
        if ((int)uVar49 < *(int *)&pUVar44[2].field_0x20) {
          uVar50 = ~uVar49 >> 0x1f;
        }
        if ((uVar50 == 0) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar40)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar56 = 0xffffffff;
        FVar4 = *(FName *)(uVar52 + *(longlong *)&pUVar44[2].field_0x18);
        if (FVar4 != (FName)0x0) {
          pTVar46 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                            *)&pUVar45[5].field_0x10,FVar4);
          puVar48 = (undefined4 *)&pTVar46->field_0x8;
          if (pTVar46 == (TTuple<FName,int> *)0x0) {
            puVar48 = (undefined4 *)0x0;
          }
          if (puVar48 != (undefined4 *)0x0) {
            uVar56 = *puVar48;
          }
        }
        uVar50 = 0;
        if ((int)uVar49 < (this->SourceToTargetBoneIndexes).ArrayNum) {
          uVar50 = ~uVar49 >> 0x1f;
        }
        if ((uVar50 == 0) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar40)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar54 = (ulonglong)(uVar49 + 1);
        *(undefined4 *)((this->SourceToTargetBoneIndexes).AllocatorInstance.Data + uVar55 * 4) =
             uVar56;
        uVar55 = uVar55 + 1;
        uVar52 = uVar52 + 0xc;
      } while ((longlong)uVar55 < lVar51);
    }
    auVar38 = *(undefined1 (*) [12])(pUVar44 + 3);
    if ((*(int *)&pUVar44[3].field_0x8 < 0) &&
       (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar40)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar56 = local_2d8._12_4_;
    local_2d8._0_12_ = auVar38;
    auVar20 = local_2d8;
    local_2d8._0_8_ = auVar38._0_8_;
    local_2d8._8_8_ = auVar20._8_8_;
    local_2a8.DataPtr = (TTransform<double> *)local_2d8._0_8_;
    local_2a8._8_8_ = local_2d8._8_8_;
    local_2d8._0_12_ = *(undefined1 (*) [12])(pUVar45 + 3);
    if ((*(int *)&pUVar45[3].field_0x8 < 0) &&
       (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar40)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_2d8 = CONCAT412(uVar56,local_2d8._0_12_);
    auVar20 = local_2d8;
    local_2d8._8_8_ = auVar20._8_8_;
    local_298.DataPtr = (TTransform<double> *)local_2d8._0_8_;
    local_298._8_8_ = local_2d8._8_8_;
    if (((this->SourceToTargetBoneIndexes).ArrayNum < 1) &&
       (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar40)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(undefined4 *)(this->SourceToTargetBoneIndexes).AllocatorInstance.Data = 0;
    memset((this->TargetToSourceBoneIndexes).AllocatorInstance.Data,0xff,
           (ulonglong)(uint)(iVar3 * 4));
    uVar52 = 0;
    uVar55 = uVar52;
    if (0 < lVar51) {
      do {
        uVar49 = (uint)uVar52;
        uVar50 = 0;
        if ((int)uVar49 < (this->SourceToTargetBoneIndexes).ArrayNum) {
          uVar50 = ~uVar49 >> 0x1f;
        }
        if ((uVar50 == 0) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar40)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar50 = *(uint *)((this->SourceToTargetBoneIndexes).AllocatorInstance.Data + uVar55 * 4);
        if (uVar50 != 0xffffffff) {
          uVar53 = 0;
          if ((int)uVar50 < (this->TargetToSourceBoneIndexes).ArrayNum) {
            uVar53 = ~uVar50 >> 0x1f;
          }
          if ((uVar53 == 0) &&
             (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar40)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(uint *)((this->TargetToSourceBoneIndexes).AllocatorInstance.Data +
                   (longlong)(int)uVar50 * 4) = uVar49;
        }
        uVar52 = (ulonglong)(uVar49 + 1);
        uVar55 = uVar55 + 1;
      } while ((longlong)uVar55 < lVar51);
    }
    local_2b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.ArrayNum = 0;
    local_2b8.ArrayMax = 0;
    local_2c8.ArrayNum = 0;
    local_2c8.ArrayMax = 0;
    FAnimationRuntime::FillUpComponentSpaceTransforms
              ((FReferenceSkeleton *)&pUVar44[1].field_0x20,&local_2a8,&local_2b8);
    FAnimationRuntime::FillUpComponentSpaceTransforms
              ((FReferenceSkeleton *)&pUVar45[1].field_0x20,&local_298,&local_2c8);
    pTVar47 = TArrayView<UE::Math::TTransform<double>_const_,int>::operator[](&local_2a8,0);
    dVar16 = (pTVar47->Rotation).XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar17 = (pTVar47->Rotation).XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar18 = (pTVar47->Rotation).ZW.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar19 = (pTVar47->Rotation).ZW.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    pTVar47 = TArrayView<UE::Math::TTransform<double>_const_,int>::operator[](&local_298,0);
    dVar12 = UE::Math::TQuat<double>::Identity.W;
    dVar11 = UE::Math::TQuat<double>::Identity.Z;
    dVar10 = UE::Math::TQuat<double>::Identity.Y;
    dVar9 = UE::Math::TQuat<double>::Identity.X;
    dVar58 = (pTVar47->Rotation).ZW.m128d_f64[0];
    dVar60 = (pTVar47->Rotation).ZW.m128d_f64[1];
    dVar28 = (pTVar47->Rotation).XY.m128d_f64[0];
    dVar8 = (pTVar47->Rotation).XY.m128d_f64[1];
    local_208 = UE::Math::TQuat<double>::Identity.X;
    dStack_200 = UE::Math::TQuat<double>::Identity.Y;
    local_1f8 = UE::Math::TQuat<double>::Identity.Z;
    dStack_1f0 = UE::Math::TQuat<double>::Identity.W;
    dVar22 = dVar16 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             dVar19 * dVar58 +
             dVar17 * dVar28 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             dVar18 * dVar60 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar23 = dVar16 * dVar28 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             dVar19 * dVar60 +
             dVar17 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             dVar18 * dVar58 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    uVar56 = SUB84(dVar23,0);
    uVar57 = (undefined4)((ulonglong)dVar23 >> 0x20);
    local_138._8_4_ = uVar56;
    local_138._0_8_ = dVar22;
    local_138._12_4_ = uVar57;
    local_1d8._8_4_ = uVar56;
    local_1d8._0_8_ = dVar22;
    local_1d8._12_4_ = uVar57;
    dVar23 = dVar16 * dVar60 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             dVar19 * dVar28 +
             dVar17 * dVar58 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar18 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar16 = dVar16 * dVar58 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             dVar19 * dVar8 +
             dVar17 * dVar60 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             dVar18 * dVar28 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    uVar62 = SUB84(dVar16,0);
    uVar63 = (undefined4)((ulonglong)dVar16 >> 0x20);
    local_148._8_4_ = uVar62;
    local_148._0_8_ = dVar23;
    local_148._12_4_ = uVar63;
    local_1e8._8_4_ = uVar62;
    local_1e8._0_8_ = dVar23;
    local_1e8._12_4_ = uVar63;
    if (((this->RetargetingTable).ArrayNum < 1) &&
       (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar40)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = (this->RetargetingTable).AllocatorInstance.Data;
    uVar50 = 1;
    *(double *)pFVar5 = dVar9;
    *(double *)(pFVar5 + 8) = dVar10;
    *(double *)(pFVar5 + 0x10) = dVar11;
    *(double *)(pFVar5 + 0x18) = dVar12;
    auVar25._8_4_ = uVar62;
    auVar25._0_8_ = dVar23;
    auVar25._12_4_ = uVar63;
    *(undefined1 (*) [16])(pFVar5 + 0x20) = auVar25;
    auVar20._8_4_ = uVar56;
    auVar20._0_8_ = dVar22;
    auVar20._12_4_ = uVar57;
    *(undefined1 (*) [16])(pFVar5 + 0x30) = auVar20;
    local_268 = (longlong)iVar3;
    if (1 < local_268) {
      local_res10 = 1;
      local_res18 = 0x40;
      local_res8 = 0x60;
      do {
        uVar53 = ~uVar50 >> 0x1f;
        uVar49 = 0;
        if ((int)uVar50 < (this->TargetToSourceBoneIndexes).ArrayNum) {
          uVar49 = uVar53;
        }
        if ((uVar49 == 0) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar40)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        dVar19 = UE::Math::TQuat<double>::Identity.W;
        dVar18 = UE::Math::TQuat<double>::Identity.Z;
        dVar17 = UE::Math::TQuat<double>::Identity.Y;
        dVar16 = UE::Math::TQuat<double>::Identity.X;
        uVar49 = *(uint *)((this->TargetToSourceBoneIndexes).AllocatorInstance.Data +
                          local_res10 * 4);
        if (uVar49 == 0xffffffff) {
          local_188 = UE::Math::TQuat<double>::Identity.X;
          dStack_180 = UE::Math::TQuat<double>::Identity.Y;
          local_178 = UE::Math::TQuat<double>::Identity.Z;
          dStack_170 = UE::Math::TQuat<double>::Identity.W;
          uVar49 = 0;
          if ((int)uVar50 < (this->RetargetingTable).ArrayNum) {
            uVar49 = uVar53;
          }
          local_168 = UE::Math::TQuat<double>::Identity.X;
          dStack_160 = UE::Math::TQuat<double>::Identity.Y;
          local_158 = UE::Math::TQuat<double>::Identity.Z;
          dStack_150 = UE::Math::TQuat<double>::Identity.W;
          if ((uVar49 == 0) &&
             (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar40)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = (this->RetargetingTable).AllocatorInstance.Data;
          *(double *)(pFVar5 + local_res18) = dVar16;
          *(double *)(pFVar5 + local_res18 + 8) = dVar17;
          *(double *)(pFVar5 + local_res18 + 0x10) = dVar18;
          *(double *)(pFVar5 + local_res18 + 0x10 + 8) = dVar19;
          *(double *)(pFVar5 + local_res18 + 0x20) = dVar16;
          *(double *)(pFVar5 + local_res18 + 0x20 + 8) = dVar17;
          *(double *)(pFVar5 + local_res18 + 0x30) = dVar18;
          *(double *)(pFVar5 + local_res18 + 0x30 + 8) = dVar19;
        }
        else {
          uVar41 = FReferenceSkeleton::GetParentIndexInternal
                             ((FReferenceSkeleton *)&pUVar44[1].field_0x20,uVar49,
                              (TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_> *)
                              &pUVar44[2].field_0x18);
          uVar42 = FReferenceSkeleton::GetParentIndexInternal
                             ((FReferenceSkeleton *)&pUVar45[1].field_0x20,uVar50,
                              (TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_> *)
                              &pUVar45[2].field_0x18);
          if ((uVar41 == 0xffffffff) &&
             (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SourceParentIndex != INDEX_NONE",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkeletonRemapping.cpp"
                                  ,0xb0,L""), bVar40)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((uVar42 == 0xffffffff) &&
             (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TargetParentIndex != INDEX_NONE",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkeletonRemapping.cpp"
                                  ,0xb1,L""), bVar40)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar43 = 0;
          if ((int)uVar41 < local_2b8.ArrayNum) {
            uVar43 = ~uVar41 >> 0x1f;
          }
          if ((uVar43 == 0) &&
             (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar40)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = local_2b8.AllocatorInstance.Data + (longlong)(int)uVar41 * 0x60;
          dVar16 = *(double *)pFVar5;
          dVar17 = *(double *)(pFVar5 + 8);
          local_278 = *(undefined1 (*) [16])pFVar5;
          pFVar5 = local_2b8.AllocatorInstance.Data + (longlong)(int)uVar41 * 0x60 + 0x10;
          dVar18 = *(double *)pFVar5;
          dVar19 = *(double *)(pFVar5 + 8);
          local_288 = *(undefined1 (*) [16])pFVar5;
          uVar41 = 0;
          if ((int)uVar42 < local_2c8.ArrayNum) {
            uVar41 = ~uVar42 >> 0x1f;
          }
          if ((uVar41 == 0) &&
             (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar40)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          dVar58 = *(double *)(local_2c8.AllocatorInstance.Data + (longlong)(int)uVar42 * 0x60);
          dVar60 = *(double *)(local_2c8.AllocatorInstance.Data + (longlong)(int)uVar42 * 0x60 + 8);
          dVar23 = *(double *)
                    (local_2c8.AllocatorInstance.Data + (longlong)(int)uVar42 * 0x60 + 0x10);
          dVar22 = *(double *)
                    (local_2c8.AllocatorInstance.Data + (longlong)(int)uVar42 * 0x60 + 0x10 + 8);
          uVar41 = 0;
          if ((int)uVar49 < local_2a8.ArrayNum) {
            uVar41 = ~uVar49 >> 0x1f;
          }
          local_238 = dVar23;
          dStack_230 = dVar22;
          local_228 = dVar58;
          dStack_220 = dVar60;
          if ((uVar41 == 0) &&
             (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar40)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_248._0_8_ = local_2a8.DataPtr[(int)uVar49].Rotation.XY.m128d_f64[0];
          local_248._8_8_ = local_2a8.DataPtr[(int)uVar49].Rotation.XY.m128d_f64[1];
          local_258._0_8_ = local_2a8.DataPtr[(int)uVar49].Rotation.ZW.m128d_f64[0];
          local_258._8_8_ = local_2a8.DataPtr[(int)uVar49].Rotation.ZW.m128d_f64[1];
          uVar49 = 0;
          if ((int)uVar50 < local_298.ArrayNum) {
            uVar49 = uVar53;
          }
          if ((uVar49 == 0) &&
             (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar40)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          dVar59 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar23 = dVar23 * dVar59;
          dVar9 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          dVar22 = dVar22 * dVar9;
          pdVar1 = (double *)((longlong)((local_298.DataPtr)->Rotation).ZW.m128d_f64 + local_res8);
          dVar36 = *pdVar1;
          dVar37 = pdVar1[1];
          dVar11 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar58 = dVar58 * dVar11;
          dVar12 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          dVar60 = dVar60 * dVar12;
          dVar33 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
          dVar34 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
          dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
          dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
          dVar29 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
          dVar30 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
          dVar31 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          dVar32 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          dVar27 = dVar58 * dVar19 * dVar8 + dVar16 * dVar22 + dVar18 * dVar60 * dVar33 +
                   dVar23 * dVar17 * dVar31;
          dVar28 = dVar58 * dVar18 * dVar10 + dVar17 * dVar22 + dVar19 * dVar60 * dVar34 +
                   dVar23 * dVar16 * dVar32;
          local_218._8_4_ = SUB84(dVar28,0);
          local_218._0_8_ = dVar27;
          local_218._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
          dVar28 = (double)local_288._0_8_ * dVar22;
          dVar22 = (double)local_288._8_8_ * dVar22;
          dVar13 = (double)local_288._0_8_ * dVar59;
          dVar14 = (double)local_288._8_8_ * dVar9;
          dVar24 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
          dVar26 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
          local_288._8_4_ = SUB84(dVar14,0);
          local_288._0_8_ = dVar13;
          local_288._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
          dVar17 = dVar58 * dVar17 * dVar29 + dVar28 + (double)local_278._0_8_ * dVar60 * dVar24;
          dVar16 = dVar58 * dVar16 * dVar30 + dVar22 + (double)local_278._8_8_ * dVar60 * dVar26;
          uVar39 = local_218._8_8_;
          auVar21._8_4_ = SUB84(dVar16,0);
          auVar21._0_8_ = dVar17;
          auVar21._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
          local_2d8._8_8_ = auVar21._8_8_;
          dVar58 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          dVar60 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          dStack_120 = (double)local_218._8_8_;
          dVar17 = dVar17 + dVar23 * dVar19 * dVar58;
          dVar16 = (double)local_2d8._8_8_ + dVar23 * dVar18 * dVar60;
          uVar56 = SUB84(dVar16,0);
          uVar57 = (undefined4)((ulonglong)dVar16 >> 0x20);
          local_248._0_8_ = (double)local_248._0_8_ * dVar11;
          local_248._8_8_ = (double)local_248._8_8_ * dVar12;
          dVar11 = (double)local_278._0_8_ * dVar11;
          dVar12 = (double)local_278._8_8_ * dVar12;
          auVar7._8_4_ = uVar56;
          auVar7._0_8_ = dVar17;
          auVar7._12_4_ = uVar57;
          local_118._8_4_ = uVar56;
          local_118._0_8_ = dVar17;
          local_118._12_4_ = uVar57;
          local_258._0_8_ = (double)local_258._0_8_ * dVar59;
          dVar9 = (double)local_258._8_8_ * dVar9;
          local_258._8_4_ = SUB84(dVar9,0);
          local_258._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          local_278._8_4_ = SUB84(dVar12,0);
          local_278._0_8_ = dVar11;
          local_278._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
          dVar59 = (double)local_248._0_8_ * dVar14 * dVar8 + dVar9 * dVar11 +
                   (double)local_248._8_8_ * dVar13 * dVar33 +
                   (double)local_258._0_8_ * dVar12 * dVar31;
          dVar61 = (double)local_248._0_8_ * dVar13 * dVar10 + dVar9 * dVar12 +
                   (double)local_248._8_8_ * (double)local_288._8_8_ * dVar34 +
                   (double)local_258._0_8_ * dVar11 * dVar32;
          dVar19 = (double)local_248._0_8_ * dVar12 * dVar29 + dVar9 * dVar13 +
                   (double)local_248._8_8_ * dVar11 * dVar24 +
                   (double)local_258._0_8_ * dVar14 * dVar58;
          dVar22 = (double)local_248._0_8_ * dVar11 * dVar30 + dVar9 * (double)local_288._8_8_ +
                   (double)local_248._8_8_ * (double)local_278._8_8_ * dVar26 +
                   (double)local_258._0_8_ * dVar13 * dVar60;
          dVar16 = dVar59 * dStack_230 * dVar8 + local_228 * dVar22 + local_238 * dVar61 * dVar33 +
                   dVar19 * dStack_220 * dVar31;
          dVar18 = dVar59 * local_238 * dVar10 + dStack_220 * dVar22 + dStack_230 * dVar61 * dVar34
                   + dVar19 * local_228 * dVar32;
          pdVar1 = (double *)((longlong)((local_298.DataPtr)->Rotation).XY.m128d_f64 + local_res8);
          dVar28 = *pdVar1;
          dVar9 = pdVar1[1];
          dVar23 = dVar59 * dStack_220 * dVar29 + local_238 * dVar22 + local_228 * dVar61 * dVar24 +
                   dVar19 * dStack_230 * dVar58;
          dVar19 = dVar59 * local_228 * dVar30 + dStack_230 * dVar22 + dStack_220 * dVar61 * dVar26
                   + dVar19 * local_238 * dVar60;
          dVar8 = dVar16 * dVar37 * dVar8;
          dVar10 = dVar16 * dVar36 * dVar10;
          local_248._8_4_ = SUB84(dVar10,0);
          local_248._0_8_ = dVar8;
          local_248._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          uVar49 = 0;
          if ((int)uVar50 < (this->RetargetingTable).ArrayNum) {
            uVar49 = uVar53;
          }
          local_2d8._8_8_ = auVar7._8_8_;
          dStack_1b0 = (double)local_2d8._8_8_;
          dVar22 = dVar16 * dVar9 * dVar29 + dVar19 * dVar36 + dVar18 * dVar28 * dVar24 +
                   dVar23 * dVar37 * dVar58;
          dVar16 = dVar16 * dVar28 * dVar30 + dVar19 * dVar37 + dVar18 * dVar9 * dVar26 +
                   dVar23 * dVar36 * dVar60;
          uVar56 = SUB84(dVar16,0);
          uVar57 = (undefined4)((ulonglong)dVar16 >> 0x20);
          local_f8._8_4_ = uVar56;
          local_f8._0_8_ = dVar22;
          local_f8._12_4_ = uVar57;
          local_198._8_4_ = uVar56;
          local_198._0_8_ = dVar22;
          local_198._12_4_ = uVar57;
          dStack_1c0 = (double)local_218._8_8_;
          dVar16 = dVar8 + dVar19 * dVar28 + dVar18 * dVar36 * dVar33 + dVar23 * dVar9 * dVar31;
          dVar18 = (double)local_248._8_8_ + dVar19 * dVar9 + dVar18 * dVar37 * dVar34 +
                   dVar23 * dVar28 * dVar32;
          uVar62 = SUB84(dVar18,0);
          uVar63 = (undefined4)((ulonglong)dVar18 >> 0x20);
          local_108._8_4_ = uVar62;
          local_108._0_8_ = dVar16;
          local_108._12_4_ = uVar63;
          local_1a8._8_4_ = uVar62;
          local_1a8._0_8_ = dVar16;
          local_1a8._12_4_ = uVar63;
          local_1c8 = dVar27;
          local_1b8 = dVar17;
          local_128 = dVar27;
          if ((uVar49 == 0) &&
             (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar40)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar5 = (this->RetargetingTable).AllocatorInstance.Data;
          *(double *)(pFVar5 + local_res18) = dVar27;
          *(undefined8 *)(pFVar5 + local_res18 + 8) = uVar39;
          *(double *)(pFVar5 + local_res18 + 0x10) = dVar17;
          *(undefined8 *)(pFVar5 + local_res18 + 0x10 + 8) = local_2d8._8_8_;
          auVar35._8_4_ = uVar62;
          auVar35._0_8_ = dVar16;
          auVar35._12_4_ = uVar63;
          *(undefined1 (*) [16])(pFVar5 + local_res18 + 0x20) = auVar35;
          auVar15._8_4_ = uVar56;
          auVar15._0_8_ = dVar22;
          auVar15._12_4_ = uVar57;
          *(undefined1 (*) [16])(pFVar5 + local_res18 + 0x30) = auVar15;
        }
        local_res18 = local_res18 + 0x40;
        local_res8 = local_res8 + 0x60;
        local_res10 = local_res10 + 1;
        uVar50 = uVar50 + 1;
      } while (local_res10 < local_268);
    }
    if (local_2c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.AllocatorInstance.Data);
    }
    if (local_2b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.AllocatorInstance.Data);
    }
  }
  return;
}

// GetSourceToTargetCurveMapping @ 1475de230

TArray<unsigned_short,TSizedDefaultAllocator<32>_> * __thiscall
FSkeletonRemapping::GetSourceToTargetCurveMapping(FSkeletonRemapping *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FSkeletonRemapping::GetSourceToTargetCurveMapping'::__l2::
             _dynamic_atexit_destructor_for__Dummy__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Dummy;
}

// RegenerateMapping @ 1475ed920

void __thiscall FSkeletonRemapping::RegenerateMapping(FSkeletonRemapping *this)

{
  (this->SourceToTargetBoneIndexes).ArrayNum = 0;
  if ((this->SourceToTargetBoneIndexes).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SourceToTargetBoneIndexes).AllocatorInstance,0,
               &(this->SourceToTargetBoneIndexes).ArrayMax);
  }
  (this->TargetToSourceBoneIndexes).ArrayNum = 0;
  if ((this->TargetToSourceBoneIndexes).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->TargetToSourceBoneIndexes).AllocatorInstance,0,
               &(this->TargetToSourceBoneIndexes).ArrayMax);
  }
  (this->RetargetingTable).ArrayNum = 0;
  if ((this->RetargetingTable).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,0,&(this->RetargetingTable).AllocatorInstance,0,
               &(this->RetargetingTable).ArrayMax);
  }
  GenerateMapping(this);
  return;
}

