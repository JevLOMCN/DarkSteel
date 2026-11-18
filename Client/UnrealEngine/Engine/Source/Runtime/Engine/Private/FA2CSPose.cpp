// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// AllocateLocalPoses @ 1473e1aa0

void __thiscall
FA2CSPose::AllocateLocalPoses(FA2CSPose *this,FBoneContainer *param_1,FA2Pose *param_2)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  FScriptContainerElement aFStack_18 [16];
  
  bVar5 = FWeakObjectPtr::IsValid(&(param_1->Asset).WeakPtr);
  if ((((!bVar5) || (param_1->RefSkeleton == (FReferenceSkeleton *)0x0)) ||
      ((param_1->BoneIndicesArray).ArrayNum < 1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBoneContainer.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                         ,0xbdc,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this->BoneContainer = param_1;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)this,
             &param_2->Bones);
  uVar2 = (uint)this->_padding_;
  uVar7 = (ulonglong)uVar2;
  aFStack_18[0] = (FScriptContainerElement)0x0;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar7);
  }
  piVar1 = &(this->ComponentSpaceFlags).ArrayMax;
  (this->ComponentSpaceFlags).ArrayNum = 0;
  if (*piVar1 != uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar2,&(this->ComponentSpaceFlags).AllocatorInstance,0,piVar1);
  }
  if (0 < (int)uVar2) {
    do {
      pFVar3 = (this->ComponentSpaceFlags).AllocatorInstance.Data;
      if (((pFVar3 <= aFStack_18) && (aFStack_18 < pFVar3 + *piVar1)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (this->ComponentSpaceFlags).ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&(this->ComponentSpaceFlags).AllocatorInstance,piVar1);
      }
      (this->ComponentSpaceFlags).ArrayNum = iVar6 + 1;
      (this->ComponentSpaceFlags).AllocatorInstance.Data[iVar6] = aFStack_18[0];
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (((this->ComponentSpaceFlags).ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ComponentSpaceFlags.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                         ,0xbe3,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((this->ComponentSpaceFlags).ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(this->ComponentSpaceFlags).AllocatorInstance.Data = (FScriptContainerElement)0x1;
  return;
}

// AllocateLocalPoses @ 1473e1ab0

void __thiscall
FA2CSPose::AllocateLocalPoses
          (FA2CSPose *this,FBoneContainer *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  FScriptContainerElement local_18 [16];
  
  bVar5 = FWeakObjectPtr::IsValid(&(param_1->Asset).WeakPtr);
  if ((((!bVar5) || (param_1->RefSkeleton == (FReferenceSkeleton *)0x0)) ||
      ((param_1->BoneIndicesArray).ArrayNum < 1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBoneContainer.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                         ,0xbdc,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this->BoneContainer = param_1;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)this,param_2);
  uVar2 = (uint)this->_padding_;
  uVar7 = (ulonglong)uVar2;
  local_18[0] = (FScriptContainerElement)0x0;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar7);
  }
  piVar1 = &(this->ComponentSpaceFlags).ArrayMax;
  (this->ComponentSpaceFlags).ArrayNum = 0;
  if (*piVar1 != uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar2,&(this->ComponentSpaceFlags).AllocatorInstance,0,piVar1);
  }
  if (0 < (int)uVar2) {
    do {
      pFVar3 = (this->ComponentSpaceFlags).AllocatorInstance.Data;
      if (((pFVar3 <= local_18) && (local_18 < pFVar3 + *piVar1)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (this->ComponentSpaceFlags).ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&(this->ComponentSpaceFlags).AllocatorInstance,piVar1);
      }
      (this->ComponentSpaceFlags).ArrayNum = iVar6 + 1;
      (this->ComponentSpaceFlags).AllocatorInstance.Data[iVar6] = local_18[0];
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (((this->ComponentSpaceFlags).ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ComponentSpaceFlags.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                         ,0xbe3,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((this->ComponentSpaceFlags).ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(this->ComponentSpaceFlags).AllocatorInstance.Data = (FScriptContainerElement)0x1;
  return;
}

// CalculateComponentSpaceTransform @ 1473f1180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FA2CSPose::CalculateComponentSpaceTransform(FA2CSPose *this,int param_1)

{
  double *pdVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  bool bVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  TTransform<double> *local_110;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_148;
  lVar24 = (longlong)param_1;
  iVar2 = (this->ComponentSpaceFlags).ArrayNum;
  uVar23 = (uint)~param_1 >> 0x1f;
  uVar21 = 0;
  if (param_1 < iVar2) {
    uVar21 = uVar23;
  }
  if (uVar21 == 0) {
    local_128 = lVar24;
    local_120 = (longlong)iVar2;
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar20) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->ComponentSpaceFlags).AllocatorInstance.Data[lVar24] != (FScriptContainerElement)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("ComponentSpaceFlags[BoneIndex] == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                        ,0xc46,L"");
    if (bVar20) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar22 = FBoneContainer::GetParentBoneIndex(this->BoneContainer,param_1);
  lVar26 = (longlong)(int)uVar22;
  iVar2 = (this->ComponentSpaceFlags).ArrayNum;
  uVar21 = 0;
  if ((int)uVar22 < iVar2) {
    uVar21 = ~uVar22 >> 0x1f;
  }
  if (uVar21 == 0) {
    local_128 = lVar26;
    local_120 = (longlong)iVar2;
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar20) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->ComponentSpaceFlags).AllocatorInstance.Data[lVar26] == (FScriptContainerElement)0x0) {
    CalculateComponentSpaceTransform(this,uVar22);
  }
  iVar2 = (int)this->_padding_;
  uVar21 = 0;
  if (param_1 < iVar2) {
    uVar21 = uVar23;
  }
  if (uVar21 == 0) {
    local_128 = lVar24;
    local_120 = (longlong)iVar2;
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar20) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar2 = (int)this->_padding_;
  lVar25 = lVar24 * 0x60;
  local_110 = (TTransform<double> *)(this->_padding_ + lVar25);
  uVar21 = 0;
  if ((int)uVar22 < iVar2) {
    uVar21 = ~uVar22 >> 0x1f;
  }
  if (uVar21 == 0) {
    local_128 = lVar26;
    local_120 = (longlong)iVar2;
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar20) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_108.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_108.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_108.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_108.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  auVar33._8_8_ = GlobalVectorConstants::FloatZero.m128_u64[1];
  auVar33._0_8_ = auVar33._8_8_;
  local_108.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_108.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_108.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_108.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_108.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_108.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_108.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_108.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&local_108,local_110,(TTransform<double> *)(lVar26 * 0x60 + this->_padding_));
  dVar19 = local_108.Scale3D.ZW.m128d_f64[1];
  dVar18 = local_108.Scale3D.ZW.m128d_f64[0];
  dVar15 = local_108.Translation.ZW.m128d_f64[1];
  dVar14 = local_108.Translation.ZW.m128d_f64[0];
  dVar11 = local_108.Rotation.ZW.m128d_f64[1];
  dVar10 = local_108.Rotation.ZW.m128d_f64[0];
  dVar7 = local_108.Rotation.XY.m128d_f64[1];
  dVar6 = local_108.Rotation.XY.m128d_f64[0];
  iVar2 = (int)this->_padding_;
  local_120 = (longlong)iVar2;
  dVar12 = local_108.Translation.XY.m128d_f64[0];
  dVar13 = local_108.Translation.XY.m128d_f64[1];
  uVar21 = 0;
  if (param_1 < iVar2) {
    uVar21 = uVar23;
  }
  dVar16 = local_108.Scale3D.XY.m128d_f64[0];
  dVar17 = local_108.Scale3D.XY.m128d_f64[1];
  if (uVar21 == 0) {
    local_128 = lVar24;
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar20) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar26 = this->_padding_;
  *(double *)(lVar26 + lVar25) = dVar6;
  ((double *)(lVar26 + lVar25))[1] = dVar7;
  pdVar1 = (double *)(lVar26 + 0x10 + lVar25);
  *pdVar1 = dVar10;
  pdVar1[1] = dVar11;
  pdVar1 = (double *)(lVar26 + 0x20 + lVar25);
  *pdVar1 = dVar12;
  pdVar1[1] = dVar13;
  pdVar1 = (double *)(lVar26 + 0x30 + lVar25);
  *pdVar1 = dVar14;
  pdVar1[1] = dVar15;
  pdVar1 = (double *)(lVar26 + 0x40 + lVar25);
  *pdVar1 = dVar16;
  pdVar1[1] = dVar17;
  pdVar1 = (double *)(lVar26 + 0x50 + lVar25);
  *pdVar1 = dVar18;
  pdVar1[1] = dVar19;
  iVar2 = (int)this->_padding_;
  local_120 = (longlong)iVar2;
  uVar21 = 0;
  if (param_1 < iVar2) {
    uVar21 = uVar23;
  }
  if (uVar21 == 0) {
    local_128 = lVar24;
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar20) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar26 = this->_padding_;
  dVar10 = *(double *)(lVar26 + lVar25);
  dVar11 = ((double *)(lVar26 + lVar25))[1];
  pdVar1 = (double *)(lVar26 + 0x10 + lVar25);
  dVar12 = *pdVar1;
  dVar13 = pdVar1[1];
  dVar6 = dVar12 * dVar12 + dVar10 * dVar10;
  dVar7 = dVar13 * dVar13 + dVar11 * dVar11;
  auVar31._8_4_ = SUB84(dVar7,0);
  auVar31._0_8_ = dVar6;
  auVar31._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar32._0_8_ = auVar31._8_8_ + dVar6;
  auVar32._8_8_ = dVar6 + dVar7;
  auVar35 = sqrtpd(auVar33,auVar32);
  uVar27 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar32._0_8_);
  uVar29 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar32._8_8_);
  uVar28 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar32._0_8_);
  uVar30 = -(ulonglong)
            (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar32._8_8_);
  auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar35);
  auVar35 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar35);
  auVar34._0_8_ = uVar28 & (ulonglong)(auVar33._0_8_ * dVar10);
  uVar9 = uVar30 & (ulonglong)(auVar33._8_8_ * dVar11);
  auVar34._8_4_ = (undefined4)uVar9;
  auVar34._12_4_ = (undefined4)(uVar9 >> 0x20);
  auVar36._0_8_ = uVar27 & (ulonglong)(auVar35._0_8_ * dVar12);
  uVar9 = uVar29 & (ulonglong)(auVar35._8_8_ * dVar13);
  auVar36._8_4_ = (undefined4)uVar9;
  auVar36._12_4_ = (undefined4)(uVar9 >> 0x20);
  auVar8._4_4_ = ~(uint)(uVar28 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
  auVar8._0_4_ = ~(uint)uVar28 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
  auVar8._8_4_ = ~(uint)uVar30 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
  auVar8._12_4_ = ~(uint)(uVar30 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
  uVar21 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
  uVar22 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
  uVar4 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
  uVar5 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
  *(undefined1 (*) [16])(lVar26 + lVar25) = auVar34 | auVar8;
  auVar35._4_4_ = ~(uint)(uVar27 >> 0x20) & uVar22;
  auVar35._0_4_ = ~(uint)uVar27 & uVar21;
  auVar35._8_4_ = ~(uint)uVar29 & uVar4;
  auVar35._12_4_ = ~(uint)(uVar29 >> 0x20) & uVar5;
  *(undefined1 (*) [16])(lVar26 + 0x10 + lVar25) = auVar36 | auVar35;
  iVar2 = (this->ComponentSpaceFlags).ArrayNum;
  local_120 = (longlong)iVar2;
  uVar21 = 0;
  if (param_1 < iVar2) {
    uVar21 = uVar23;
  }
  if (uVar21 == 0) {
    local_128 = lVar24;
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar20) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (this->ComponentSpaceFlags).AllocatorInstance.Data[lVar24] = (FScriptContainerElement)0x1;
  return;
}

// ConvertBoneToLocalSpace @ 1473f2a90

void __thiscall FA2CSPose::ConvertBoneToLocalSpace(FA2CSPose *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  if (0 < param_1) {
    lVar7 = (longlong)param_1;
    uVar6 = (uint)~param_1 >> 0x1f;
    uVar4 = 0;
    if (param_1 < (this->ComponentSpaceFlags).ArrayNum) {
      uVar4 = uVar6;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((this->ComponentSpaceFlags).AllocatorInstance.Data[lVar7] == (FScriptContainerElement)0x1) {
      uVar5 = FBoneContainer::GetParentBoneIndex(this->BoneContainer,param_1);
      uVar4 = 0;
      if ((int)uVar5 < (this->ComponentSpaceFlags).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((this->ComponentSpaceFlags).AllocatorInstance.Data[(int)uVar5] !=
           (FScriptContainerElement)0x1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ComponentSpaceFlags[ParentIndex] == 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                             ,0xc19,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar4 = 0;
      if (param_1 < (int)this->_padding_) {
        uVar4 = uVar6;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = this->_padding_;
      uVar4 = 0;
      if ((int)uVar5 < (int)this->_padding_) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UE::Math::TTransform<double>::SetToRelativeTransform
                ((TTransform<double> *)(lVar7 * 0x60 + lVar1),
                 (TTransform<double> *)((longlong)(int)uVar5 * 0x60 + this->_padding_));
      uVar4 = 0;
      if (param_1 < (this->ComponentSpaceFlags).ArrayNum) {
        uVar4 = uVar6;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (this->ComponentSpaceFlags).AllocatorInstance.Data[lVar7] = (FScriptContainerElement)0x0;
    }
  }
  return;
}

// ConvertToLocalPoses @ 1473f3f60

void __thiscall FA2CSPose::ConvertToLocalPoses(FA2CSPose *this,FA2Pose *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&param_1->Bones,
             (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)this);
  uVar11 = (this->ComponentSpaceFlags).ArrayNum - 1;
  if (0 < (int)uVar11) {
    lVar12 = (longlong)(int)uVar11;
    lVar14 = lVar12 * 0x60;
    do {
      uVar9 = FBoneContainer::GetParentBoneIndex(this->BoneContainer,uVar11);
      uVar13 = ~uVar11 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar11 < (this->ComponentSpaceFlags).ArrayNum) {
        uVar10 = uVar13;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((this->ComponentSpaceFlags).AllocatorInstance.Data[lVar12] != (FScriptContainerElement)0x0
         ) {
        uVar10 = 0;
        if ((int)uVar11 < (param_1->Bones).ArrayNum) {
          uVar10 = uVar13;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (param_1->Bones).AllocatorInstance.Data;
        uVar10 = 0;
        if ((int)uVar9 < (param_1->Bones).ArrayNum) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UE::Math::TTransform<double>::SetToRelativeTransform
                  ((TTransform<double> *)(pFVar1 + lVar14),
                   (TTransform<double> *)
                   ((param_1->Bones).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x60));
        uVar10 = 0;
        if ((int)uVar11 < (param_1->Bones).ArrayNum) {
          uVar10 = uVar13;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (param_1->Bones).AllocatorInstance.Data;
        dVar4 = *(double *)(pFVar1 + lVar14);
        dVar5 = *(double *)(pFVar1 + lVar14 + 8);
        dVar6 = *(double *)(pFVar1 + lVar14 + 0x10);
        dVar7 = *(double *)(pFVar1 + lVar14 + 0x10 + 8);
        auVar23._0_8_ = dVar6 * dVar6 + dVar4 * dVar4;
        auVar23._8_8_ = dVar7 * dVar7 + dVar5 * dVar5;
        auVar19._8_4_ = SUB84(auVar23._8_8_,0);
        auVar19._0_8_ = auVar23._0_8_;
        auVar19._12_4_ = (int)((ulonglong)auVar23._8_8_ >> 0x20);
        auVar20._0_8_ = auVar19._8_8_ + auVar23._0_8_;
        auVar20._8_8_ = auVar23._0_8_ + auVar23._8_8_;
        auVar24 = sqrtpd(auVar23,auVar20);
        uVar15 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                  auVar20._0_8_);
        uVar17 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                  auVar20._8_8_);
        uVar16 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                  auVar20._0_8_);
        uVar18 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                  auVar20._8_8_);
        auVar21 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar24);
        auVar24 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar24);
        auVar22._0_8_ = uVar16 & (ulonglong)(auVar21._0_8_ * dVar4);
        uVar3 = uVar18 & (ulonglong)(auVar21._8_8_ * dVar5);
        auVar22._8_4_ = (undefined4)uVar3;
        auVar22._12_4_ = (undefined4)(uVar3 >> 0x20);
        auVar25._0_8_ = uVar15 & (ulonglong)(auVar24._0_8_ * dVar6);
        uVar3 = uVar17 & (ulonglong)(auVar24._8_8_ * dVar7);
        auVar25._8_4_ = (undefined4)uVar3;
        auVar25._12_4_ = (undefined4)(uVar3 >> 0x20);
        auVar24._4_4_ =
             ~(uint)(uVar16 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
        auVar24._0_4_ = ~(uint)uVar16 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
        auVar24._8_4_ = ~(uint)uVar18 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
        auVar24._12_4_ =
             ~(uint)(uVar18 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
        auVar21._4_4_ =
             ~(uint)(uVar15 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
        auVar21._0_4_ = ~(uint)uVar15 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
        auVar21._8_4_ = ~(uint)uVar17 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
        auVar21._12_4_ =
             ~(uint)(uVar17 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
        *(undefined1 (*) [16])(pFVar1 + lVar14) = auVar22 | auVar24;
        *(undefined1 (*) [16])(pFVar1 + lVar14 + 0x10) = auVar25 | auVar21;
      }
      uVar11 = uVar11 - 1;
      lVar12 = lVar12 + -1;
      lVar14 = lVar14 + -0x60;
    } while (0 < (int)uVar11);
  }
  return;
}

// GetComponentSpaceTransform @ 1474008c0

TTransform<double> * __thiscall
FA2CSPose::GetComponentSpaceTransform
          (FA2CSPose *this,TTransform<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  TTransform<double> *pTVar10;
  longlong lVar11;
  
  if ((param_1 < 0) || ((int)this->_padding_ <= param_1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Bones.IsValidIndex(BoneIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                       ,0xbf7,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TTransform<double> *)(*pcVar3)();
      return pTVar10;
    }
  }
  uVar9 = 0;
  if (param_1 < (this->ComponentSpaceFlags).ArrayNum) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TTransform<double> *)(*pcVar3)();
      return pTVar10;
    }
  }
  if ((this->ComponentSpaceFlags).AllocatorInstance.Data[param_1] == (FScriptContainerElement)0x0) {
    CalculateComponentSpaceTransform(this,param_1);
  }
  uVar9 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TTransform<double> *)(*pcVar3)();
      return pTVar10;
    }
  }
  lVar2 = this->_padding_;
  lVar11 = (longlong)param_1 * 0x60;
  dVar4 = ((double *)(lVar11 + lVar2))[1];
  pdVar1 = (double *)(lVar11 + 0x10 + lVar2);
  dVar5 = *pdVar1;
  dVar6 = pdVar1[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)(lVar11 + lVar2);
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar4;
  pdVar1 = (double *)(lVar11 + 0x20 + lVar2);
  dVar4 = *pdVar1;
  dVar7 = pdVar1[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar5;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar6;
  pdVar1 = (double *)(lVar11 + 0x30 + lVar2);
  dVar5 = *pdVar1;
  dVar6 = pdVar1[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar4;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar7;
  pdVar1 = (double *)(lVar11 + 0x40 + lVar2);
  dVar4 = *pdVar1;
  dVar7 = pdVar1[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar5;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar6;
  pdVar1 = (double *)(lVar11 + 0x50 + lVar2);
  dVar5 = *pdVar1;
  dVar6 = pdVar1[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar4;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar7;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar5;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar6;
  return __return_storage_ptr__;
}

// GetLocalSpaceTransform @ 1474027a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __thiscall
FA2CSPose::GetLocalSpaceTransform
          (FA2CSPose *this,TTransform<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TTransform<double> *pTVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  lVar9 = (longlong)param_1;
  if (((param_1 < 0) || ((int)this->_padding_ <= param_1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Bones.IsValidIndex(BoneIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                         ,0xc27,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TTransform<double> *)(*pcVar3)();
    return pTVar8;
  }
  iVar7 = (this->ComponentSpaceFlags).ArrayNum;
  uVar10 = (uint)~param_1 >> 0x1f;
  uVar6 = 0;
  if (param_1 < iVar7) {
    uVar6 = uVar10;
  }
  if ((uVar6 == 0) &&
     (local_a8 = lVar9, local_a0 = (longlong)iVar7,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar5
     )) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TTransform<double> *)(*pcVar3)();
    return pTVar8;
  }
  if (((this->ComponentSpaceFlags).AllocatorInstance.Data[lVar9] != (FScriptContainerElement)0x0) &&
     (iVar7 = FBoneContainer::GetParentBoneIndex(this->BoneContainer,param_1), iVar7 != -1)) {
    GetComponentSpaceTransform(this,&local_98,iVar7);
    iVar7 = (int)this->_padding_;
    uVar6 = 0;
    if (param_1 < iVar7) {
      uVar6 = uVar10;
    }
    if ((uVar6 == 0) &&
       (local_a8 = lVar9, local_a0 = (longlong)iVar7,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TTransform<double> *)(*pcVar3)();
      return pTVar8;
    }
    UE::Math::TTransform<double>::GetRelativeTransform
              ((TTransform<double> *)(lVar9 * 0x60 + this->_padding_),__return_storage_ptr__,
               &local_98);
    return __return_storage_ptr__;
  }
  iVar7 = (int)this->_padding_;
  local_a0 = (longlong)iVar7;
  uVar6 = 0;
  if (param_1 < iVar7) {
    uVar6 = uVar10;
  }
  if ((uVar6 == 0) &&
     (local_a8 = lVar9,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar5
     )) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TTransform<double> *)(*pcVar3)();
    return pTVar8;
  }
  lVar2 = this->_padding_;
  lVar9 = lVar9 * 0x60;
  dVar4 = ((double *)(lVar9 + lVar2))[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)(lVar9 + lVar2);
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar4;
  pdVar1 = (double *)(lVar9 + 0x10 + lVar2);
  dVar4 = pdVar1[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = *pdVar1;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar4;
  pdVar1 = (double *)(lVar9 + 0x20 + lVar2);
  dVar4 = pdVar1[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = *pdVar1;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar4;
  pdVar1 = (double *)(lVar9 + 0x30 + lVar2);
  dVar4 = pdVar1[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = *pdVar1;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar4;
  pdVar1 = (double *)(lVar9 + 0x40 + lVar2);
  dVar4 = pdVar1[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = *pdVar1;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar4;
  pdVar1 = (double *)(lVar9 + 0x50 + lVar2);
  dVar4 = pdVar1[1];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = *pdVar1;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar4;
  return __return_storage_ptr__;
}

// GetParentBoneIndex @ 1474031b0

int __thiscall FA2CSPose::GetParentBoneIndex(FA2CSPose *this,int param_1)

{
  int iVar1;
  
  iVar1 = FBoneContainer::GetParentBoneIndex(this->BoneContainer,param_1);
  return iVar1;
}

// IsValid @ 1474080c0

bool __thiscall FA2CSPose::IsValid(FA2CSPose *this)

{
  FBoneContainer *pFVar1;
  bool bVar2;
  
  pFVar1 = this->BoneContainer;
  if (pFVar1 != (FBoneContainer *)0x0) {
    bVar2 = FWeakObjectPtr::IsValid(&(pFVar1->Asset).WeakPtr);
    if (((bVar2) && (pFVar1->RefSkeleton != (FReferenceSkeleton *)0x0)) &&
       (0 < (pFVar1->BoneIndicesArray).ArrayNum)) {
      return true;
    }
  }
  return false;
}

// SetComponentSpaceTransform @ 147419100

void __thiscall
FA2CSPose::SetComponentSpaceTransform(FA2CSPose *this,int param_1,TTransform<double> *param_2)

{
  undefined4 *puVar1;
  double *pdVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  longlong lVar20;
  uint uVar21;
  
  if (((param_1 < 0) || ((int)this->_padding_ <= param_1)) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Bones.IsValidIndex(BoneIndex)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                          ,0xc04,L""), bVar19)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  dVar9 = (param_2->Rotation).ZW.m128d_f64[0];
  dVar10 = (param_2->Rotation).ZW.m128d_f64[1];
  dVar11 = (param_2->Translation).XY.m128d_f64[0];
  dVar12 = (param_2->Translation).XY.m128d_f64[1];
  uVar5 = *(undefined4 *)(param_2->Rotation).XY.m128d_f64;
  uVar6 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 4);
  uVar7 = *(undefined4 *)((param_2->Rotation).XY.m128d_f64 + 1);
  uVar8 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 0xc);
  dVar13 = (param_2->Translation).ZW.m128d_f64[0];
  dVar14 = (param_2->Translation).ZW.m128d_f64[1];
  dVar15 = (param_2->Scale3D).ZW.m128d_f64[0];
  dVar16 = (param_2->Scale3D).ZW.m128d_f64[1];
  dVar17 = (param_2->Scale3D).XY.m128d_f64[0];
  dVar18 = (param_2->Scale3D).XY.m128d_f64[1];
  uVar21 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar21 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = this->_padding_;
  lVar20 = (longlong)param_1 * 0x60;
  puVar1 = (undefined4 *)(lVar20 + lVar3);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  pdVar2 = (double *)(lVar20 + 0x10 + lVar3);
  *pdVar2 = dVar9;
  pdVar2[1] = dVar10;
  pdVar2 = (double *)(lVar20 + 0x20 + lVar3);
  *pdVar2 = dVar11;
  pdVar2[1] = dVar12;
  pdVar2 = (double *)(lVar20 + 0x30 + lVar3);
  *pdVar2 = dVar13;
  pdVar2[1] = dVar14;
  pdVar2 = (double *)(lVar20 + 0x40 + lVar3);
  *pdVar2 = dVar17;
  pdVar2[1] = dVar18;
  pdVar2 = (double *)(lVar20 + 0x50 + lVar3);
  *pdVar2 = dVar15;
  pdVar2[1] = dVar16;
  uVar21 = 0;
  if (param_1 < (this->ComponentSpaceFlags).ArrayNum) {
    uVar21 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (this->ComponentSpaceFlags).AllocatorInstance.Data[param_1] = (FScriptContainerElement)0x1;
  return;
}

// SetLocalSpaceTransform @ 147419360

void __thiscall
FA2CSPose::SetLocalSpaceTransform(FA2CSPose *this,int param_1,TTransform<double> *param_2)

{
  undefined4 *puVar1;
  double *pdVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  longlong lVar20;
  uint uVar21;
  
  if (((param_1 < 0) || ((int)this->_padding_ <= param_1)) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Bones.IsValidIndex(BoneIndex)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimationRuntime.cpp"
                          ,0xc3c,L""), bVar19)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  dVar9 = (param_2->Rotation).ZW.m128d_f64[0];
  dVar10 = (param_2->Rotation).ZW.m128d_f64[1];
  dVar11 = (param_2->Translation).XY.m128d_f64[0];
  dVar12 = (param_2->Translation).XY.m128d_f64[1];
  uVar5 = *(undefined4 *)(param_2->Rotation).XY.m128d_f64;
  uVar6 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 4);
  uVar7 = *(undefined4 *)((param_2->Rotation).XY.m128d_f64 + 1);
  uVar8 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 0xc);
  dVar13 = (param_2->Translation).ZW.m128d_f64[0];
  dVar14 = (param_2->Translation).ZW.m128d_f64[1];
  dVar15 = (param_2->Scale3D).ZW.m128d_f64[0];
  dVar16 = (param_2->Scale3D).ZW.m128d_f64[1];
  dVar17 = (param_2->Scale3D).XY.m128d_f64[0];
  dVar18 = (param_2->Scale3D).XY.m128d_f64[1];
  uVar21 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar21 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = this->_padding_;
  lVar20 = (longlong)param_1 * 0x60;
  puVar1 = (undefined4 *)(lVar20 + lVar3);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  pdVar2 = (double *)(lVar20 + 0x10 + lVar3);
  *pdVar2 = dVar9;
  pdVar2[1] = dVar10;
  pdVar2 = (double *)(lVar20 + 0x20 + lVar3);
  *pdVar2 = dVar11;
  pdVar2[1] = dVar12;
  pdVar2 = (double *)(lVar20 + 0x30 + lVar3);
  *pdVar2 = dVar13;
  pdVar2[1] = dVar14;
  pdVar2 = (double *)(lVar20 + 0x40 + lVar3);
  *pdVar2 = dVar17;
  pdVar2[1] = dVar18;
  pdVar2 = (double *)(lVar20 + 0x50 + lVar3);
  *pdVar2 = dVar15;
  pdVar2[1] = dVar16;
  uVar21 = 0;
  if (param_1 < (this->ComponentSpaceFlags).ArrayNum) {
    uVar21 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (this->ComponentSpaceFlags).AllocatorInstance.Data[param_1] = (FScriptContainerElement)0x0;
  return;
}

// StaticStruct @ 147423f80

UScriptStruct * __cdecl FA2CSPose::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FA2CSPose.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FA2CSPose.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FA2CSPose,(UObject *)pUVar1,L"A2CSPose");
  }
  return Z_Registration_Info_UScriptStruct_FA2CSPose.OuterSingleton;
}

