// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FullBodyIK
// Functions: 3

// CanCrossProduct @ 14df7bdb0

bool __cdecl FBIKUtil::CanCrossProduct(TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  if ((((__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
       (uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8),
       __real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
      (uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10),
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) &&
     (((dVar3 = (param_2->field0_0x0)._s_0.X,
       __real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ||
       (uVar2 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8),
       __real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
      (uVar2 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10),
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))))) {
    dVar4 = (param_1->field0_0x0)._s_0.Z;
    dVar5 = (param_1->field0_0x0)._s_0.Y;
    dVar6 = (param_2->field0_0x0)._s_0.Y;
    dVar7 = (param_2->field0_0x0)._s_0.Z;
    dVar9 = __real_3ff0000000000000 / SQRT(dVar3 * dVar3 + dVar6 * dVar6 + dVar7 * dVar7);
    dVar8 = __real_3ff0000000000000 / SQRT(dVar1 * dVar1 + dVar5 * dVar5 + dVar4 * dVar4);
    return __real_322bcc77 <
           (float)((uint)((float)((uint)(float)(dVar5 * dVar8 * dVar6 * dVar9 +
                                                dVar1 * dVar8 * dVar3 * dVar9 +
                                               dVar4 * dVar8 * dVar7 * dVar9) &
                                 __xmm_7fffffff7fffffff7fffffff7fffffff) - __real_3f800000) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff);
  }
  return false;
}

// GetBoneChain @ 14df7f380

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __cdecl
FBIKUtil::GetBoneChain
          (URigHierarchy *param_1,FRigElementKey *param_2,FRigElementKey *param_3,
          TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  FRigElementKey *pFVar10;
  FRigElementKey local_38;
  FRigElementKey local_28;
  FRigElementKey local_18;
  
  piVar1 = &param_4->ArrayMax;
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&param_4->AllocatorInstance,0,piVar1);
  }
  uVar2._0_1_ = param_3->Type;
  uVar2._1_3_ = *(undefined3 *)&param_3->field_0x1;
  uVar2._4_4_ = (param_3->Name).ComparisonIndex;
  local_38.Name.Number = (param_3->Name).Number;
  local_38._0_4_ = SUB84(uVar2,0);
  local_38.Name.ComparisonIndex.Value = uVar2._4_4_;
  while( true ) {
    bVar7 = ::FName::IsWithinBounds(local_38.Name.ComparisonIndex);
    if ((((!bVar7) ||
         (FVar6.Number = local_38.Name.Number,
         FVar6.ComparisonIndex.Value = local_38.Name.ComparisonIndex.Value, FVar6 == (FName)0x0)) ||
        (local_38.Type == None)) || ((FVar6 == param_2->Name && (local_38.Type == param_2->Type))))
    break;
    pFVar10 = (FRigElementKey *)(param_4->AllocatorInstance).Data;
    if ((pFVar10 <= &local_38) && (&local_38 < pFVar10 + *piVar1)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
    }
    iVar9 = param_4->ArrayNum;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,&param_4->AllocatorInstance,piVar1);
    }
    pFVar4 = (param_4->AllocatorInstance).Data;
    param_4->ArrayNum = iVar9 + 1;
    memmove(pFVar4 + 0xc,pFVar4,(longlong)iVar9 * 0xc);
    pFVar4 = (param_4->AllocatorInstance).Data;
    *(ulonglong *)pFVar4 = CONCAT44(local_38.Name.ComparisonIndex.Value,local_38._0_4_);
    *(uint *)(pFVar4 + 8) = local_38.Name.Number;
    local_28.Name.ComparisonIndex.Value = local_38.Name.ComparisonIndex.Value;
    local_28.Type = local_38.Type;
    local_28._1_3_ = local_38._1_3_;
    local_28.Name.Number = local_38.Name.Number;
    pFVar10 = URigHierarchy::GetFirstParent(param_1,&local_18,&local_28);
    uVar3._0_1_ = pFVar10->Type;
    uVar3._1_3_ = *(undefined3 *)&pFVar10->field_0x1;
    uVar3._4_4_ = (pFVar10->Name).ComparisonIndex;
    local_38._0_4_ = SUB84(uVar3,0);
    local_38.Name.Number = (pFVar10->Name).Number;
    local_38.Name.ComparisonIndex.Value = uVar3._4_4_;
  }
  bVar7 = ::FName::IsWithinBounds(local_38.Name.ComparisonIndex);
  if ((bVar7) &&
     ((CONCAT44(local_38.Name.Number,local_38.Name.ComparisonIndex.Value) != 0 &&
      (local_38.Type != None)))) {
    TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::Insert(param_4,&local_38,0);
  }
  return 0 < param_4->ArrayNum;
}

// GetScaledRotationAxis @ 14df7fd50

TVector<double> * __cdecl
FBIKUtil::GetScaledRotationAxis(TVector<double> *__return_storage_ptr__,TQuat<double> *param_1)

{
  undefined1 auVar1 [12];
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dStack_60;
  
  dVar19 = param_1->W;
  uVar9 = SUB84(dVar19,0);
  uVar10 = (undefined4)((ulonglong)dVar19 >> 0x20);
  dVar14 = __real_bff0000000000000;
  if (__real_bff0000000000000 <= dVar19) {
    if (__real_3ff0000000000000 <= dVar19) {
      uVar9 = SUB84(__real_3ff0000000000000,0);
      uVar10 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    }
    dVar14 = (double)CONCAT44(uVar10,uVar9);
  }
  dVar14 = acos(dVar14);
  dVar13 = param_1->X;
  dVar3 = param_1->Y;
  dVar4 = param_1->Z;
  dVar11 = dVar4 * dVar4 + dVar13 * dVar13;
  dVar12 = dVar3 * dVar3 + 0.0;
  dVar19 = dVar12 + dVar11;
  dVar11 = dVar11 + dVar12;
  uVar5 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= dVar19);
  uVar7 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= dVar11);
  auVar18._8_4_ = SUB84(dVar11,0);
  auVar18._0_8_ = dVar19;
  auVar18._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar18 = sqrtpd(in_XMM3,auVar18);
  uVar6 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= dVar19);
  uVar8 = -(ulonglong)(GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= dVar11);
  auVar20 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar18);
  auVar21._0_8_ = uVar5 & (ulonglong)(auVar20._0_8_ * dVar13);
  uVar2 = uVar7 & (ulonglong)(auVar20._8_8_ * dVar3);
  auVar21._8_4_ = (undefined4)uVar2;
  auVar21._12_4_ = (undefined4)(uVar2 >> 0x20);
  auVar15._0_4_ = ~(uint)uVar5 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[0],0);
  auVar15._4_4_ =
       ~(uint)(uVar5 >> 0x20) &
       (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[0] >> 0x20);
  auVar15._8_4_ = ~(uint)uVar7 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[1],0);
  auVar15._12_4_ =
       ~(uint)(uVar7 >> 0x20) &
       (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[1] >> 0x20);
  auVar21 = auVar21 | auVar15;
  auVar18 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar18);
  auVar16._0_4_ = ~(uint)uVar6 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[2],0);
  auVar16._4_4_ =
       ~(uint)(uVar6 >> 0x20) &
       (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[2] >> 0x20);
  auVar16._8_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[3],0);
  auVar16._12_4_ =
       ~(uint)(uVar8 >> 0x20) &
       (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[3] >> 0x20);
  dVar19 = auVar21._0_8_;
  auVar20._0_8_ = uVar6 & (ulonglong)(auVar18._0_8_ * dVar4);
  uVar8 = uVar8 & (ulonglong)(auVar18._8_8_ * 0.0);
  auVar20._8_4_ = (undefined4)uVar8;
  auVar20._12_4_ = (undefined4)(uVar8 >> 0x20);
  dVar11 = SUB168(auVar16 | auVar20,0);
  auVar1._4_8_ = SUB168(auVar16 | auVar20,8);
  auVar1._0_4_ = auVar21._4_4_;
  auVar17._0_8_ = auVar1._0_8_ << 0x20;
  auVar17._8_4_ = auVar21._8_4_;
  auVar17._12_4_ = auVar21._12_4_;
  dStack_60 = auVar21._8_8_;
  dVar13 = auVar17._8_8_ * auVar17._8_8_ + dVar19 * dVar19 + dVar11 * dVar11;
  if (__real_3e45798ee0000000 < dVar13) {
    dVar13 = __real_3ff0000000000000 / SQRT(dVar13);
    dVar19 = dVar19 * dVar13;
    dStack_60 = dStack_60 * dVar13;
    dVar11 = dVar11 * dVar13;
  }
  dVar14 = (double)(float)(dVar14 + dVar14);
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar14 * dVar19;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar14 * dStack_60;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar14 * dVar11;
  return __return_storage_ptr__;
}

