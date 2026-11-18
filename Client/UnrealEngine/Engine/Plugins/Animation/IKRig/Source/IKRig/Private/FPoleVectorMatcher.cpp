// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 6

// CalculateBestPoleAxisForChain @ 14df27a00

Type __thiscall
FPoleVectorMatcher::CalculateBestPoleAxisForChain
          (FPoleVectorMatcher *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  Type TVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  TVector<double>_u_0 local_68;
  double local_50;
  double dStack_48;
  double local_40;
  double local_38;
  double dStack_30;
  double local_28;
  
  if ((param_1->ArrayNum == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InBoneIndices.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\RetargetOps\\AlignPoleVectorOp.cpp"
                         ,0x68,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    TVar5 = (*pcVar3)();
    return TVar5;
  }
  if (param_1->ArrayNum == 1) {
    return Y;
  }
  if ((param_1->ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    TVar5 = (*pcVar3)();
    return TVar5;
  }
  uVar6 = *(uint *)(param_1->AllocatorInstance).Data;
  uVar7 = 0;
  if ((int)uVar6 < param_2->ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    TVar5 = (*pcVar3)();
    return TVar5;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  uVar7 = param_1->ArrayNum - 1;
  pFVar1 = pFVar2 + (longlong)(int)uVar6 * 0x60 + 0x20;
  local_50 = *(double *)pFVar1;
  dStack_48 = *(double *)(pFVar1 + 8);
  local_40 = *(double *)(pFVar2 + (longlong)(int)uVar6 * 0x60 + 0x30);
  uVar6 = 0;
  if ((int)uVar7 < param_1->ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    TVar5 = (*pcVar3)();
    return TVar5;
  }
  uVar6 = *(uint *)((param_1->AllocatorInstance).Data + (longlong)param_1->ArrayNum * 4 + -4);
  uVar7 = 0;
  if ((int)uVar6 < param_2->ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    TVar5 = (*pcVar3)();
    return TVar5;
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar1 = pFVar2 + (longlong)(int)uVar6 * 0x60 + 0x20;
  local_38 = *(double *)pFVar1;
  dStack_30 = *(double *)(pFVar1 + 8);
  local_28 = *(double *)(pFVar2 + (longlong)(int)uVar6 * 0x60 + 0x30);
  local_68._s_0.X = local_38 - local_50;
  local_68._s_0.Y = dStack_30 - dStack_48;
  local_68._s_0.Z = local_28 - local_40;
  dVar8 = local_68._s_0.Y * local_68._s_0.Y + local_68._s_0.X * local_68._s_0.X +
          local_68._s_0.Z * local_68._s_0.Z;
  if (dVar8 != __real_3ff0000000000000) {
    if (dVar8 < __real_3e45798ee0000000) {
      local_68._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_68._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_68._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      dVar8 = __real_3ff0000000000000 / SQRT(dVar8);
      local_68._s_0.X = local_68._s_0.X * dVar8;
      local_68._s_0.Y = local_68._s_0.Y * dVar8;
      local_68._s_0.Z = dVar8 * local_68._s_0.Z;
    }
  }
  if ((param_1->ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    TVar5 = (*pcVar3)();
    return TVar5;
  }
  uVar6 = *(uint *)(param_1->AllocatorInstance).Data;
  uVar7 = 0;
  if ((int)uVar6 < param_2->ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    TVar5 = (*pcVar3)();
    return TVar5;
  }
  TVar5 = GetMostDifferentAxis
                    ((TTransform<double> *)
                     ((param_2->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x60),
                     (TVector<double> *)&local_68._s_0);
  return TVar5;
}

// CalculatePoleVector @ 14df29070

TVector<double> * __cdecl
FPoleVectorMatcher::CalculatePoleVector
          (TVector<double> *__return_storage_ptr__,Type *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  uint uVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  TVector<double> *pTVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_60 [3];
  
  if ((param_2->ArrayNum == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!BoneIndices.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\RetargetOps\\AlignPoleVectorOp.cpp"
                         ,0x7e,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TVector<double> *)(*pcVar2)();
    return pTVar7;
  }
  GetChainAxisNormalized((TVector<double> *)&local_78._s_0,param_2,param_3);
  if ((param_2->ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TVector<double> *)(*pcVar2)();
    return pTVar7;
  }
  uVar1 = *(uint *)(param_2->AllocatorInstance).Data;
  uVar8 = 0;
  if ((int)uVar1 < param_3->ArrayNum) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TVector<double> *)(*pcVar2)();
    return pTVar7;
  }
  UE::Math::TTransform<double>::GetUnitAxis
            ((TTransform<double> *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar1 * 0x60)
             ,(TVector<double> *)&local_60[0]._s_0,*param_1);
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar10 = (double)local_60[0]._0_8_ * local_78._s_0.X + (double)local_60[0]._8_8_ * local_78._s_0.Y
           + local_78._s_0.Z * (double)local_60[0]._16_8_;
  dVar3 = (double)local_60[0]._0_8_ - dVar10 * local_78._s_0.X;
  dVar4 = (double)local_60[0]._8_8_ - dVar10 * local_78._s_0.Y;
  dVar10 = (double)local_60[0]._16_8_ - dVar10 * local_78._s_0.Z;
  dVar9 = dVar4 * dVar4 + dVar3 * dVar3 + dVar10 * dVar10;
  if (dVar9 != __real_3ff0000000000000) {
    if (dVar9 < __real_3e45798ee0000000) {
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar5;
      (__return_storage_ptr__->field0_0x0)._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      return __return_storage_ptr__;
    }
    dVar9 = __real_3ff0000000000000 / SQRT(dVar9);
    dVar3 = dVar3 * dVar9;
    dVar4 = dVar4 * dVar9;
    dVar10 = dVar10 * dVar9;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar10;
  return __return_storage_ptr__;
}

// GetChainAxisNormalized @ 14df35c00

TVector<double> * __cdecl
FPoleVectorMatcher::GetChainAxisNormalized
          (TVector<double> *__return_storage_ptr__,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  TVector<double> *pTVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  if (param_1->ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVector<double> *)(*pcVar3)();
      return pTVar8;
    }
  }
  uVar7 = *(uint *)(param_1->AllocatorInstance).Data;
  uVar9 = 0;
  if ((int)uVar7 < param_2->ArrayNum) {
    uVar9 = ~uVar7 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVector<double> *)(*pcVar3)();
      return pTVar8;
    }
  }
  pFVar2 = (param_2->AllocatorInstance).Data;
  uVar9 = param_1->ArrayNum - 1;
  pFVar1 = pFVar2 + (longlong)(int)uVar7 * 0x60 + 0x20;
  dVar12 = *(double *)pFVar1;
  dVar11 = *(double *)(pFVar1 + 8);
  dVar4 = *(double *)(pFVar2 + (longlong)(int)uVar7 * 0x60 + 0x30);
  uVar7 = 0;
  if ((int)uVar9 < param_1->ArrayNum) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVector<double> *)(*pcVar3)();
      return pTVar8;
    }
  }
  uVar7 = *(uint *)((param_1->AllocatorInstance).Data + (longlong)param_1->ArrayNum * 4 + -4);
  uVar9 = 0;
  if ((int)uVar7 < param_2->ArrayNum) {
    uVar9 = ~uVar7 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TVector<double> *)(*pcVar3)();
      return pTVar8;
    }
  }
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar1 = pFVar2 + (longlong)(int)uVar7 * 0x60 + 0x20;
  dVar12 = *(double *)pFVar1 - dVar12;
  dVar4 = *(double *)(pFVar2 + (longlong)(int)uVar7 * 0x60 + 0x30) - dVar4;
  dVar11 = *(double *)(pFVar1 + 8) - dVar11;
  dVar10 = dVar11 * dVar11 + dVar12 * dVar12 + dVar4 * dVar4;
  if (dVar10 == __real_3ff0000000000000) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar12;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar11;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar4;
  }
  else if (__real_3e45798ee0000000 <= dVar10) {
    dVar10 = __real_3ff0000000000000 / SQRT(dVar10);
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar12 * dVar10;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar11 * dVar10;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar10 * dVar4;
  }
  else {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar5;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  return __return_storage_ptr__;
}

// GetMostDifferentAxis @ 14df39ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

Type __cdecl
FPoleVectorMatcher::GetMostDifferentAxis(TTransform<double> *param_1,TVector<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  Type TVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [16];
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  uint uVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  Type TVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar18;
  undefined1 auVar17 [16];
  float fVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  double dVar36;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined4 uVar43;
  float fVar44;
  double dVar45;
  undefined1 auStackY_158 [32];
  undefined1 local_118 [8];
  ForAnyElementType local_110;
  uint local_108;
  int local_104 [11];
  undefined4 local_d8;
  undefined4 uStack_d4;
  Type local_d0;
  double local_c8;
  ulonglong local_c0;
  
  fVar19 = __real_40000000;
  local_c0 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_d8 = 1;
  uStack_d4 = 2;
  local_d0 = Z;
  local_110.Data = (FScriptContainerElement *)0x0;
  local_108 = 3;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,3,0,&local_110,3,local_104);
  uVar10 = local_108;
  auVar9 = ___xmm_00000000000000003ff0000000000000;
  uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  auVar6 = ___xmm_3ff00000000000000000000000000000;
  *(ulonglong *)local_110.Data = CONCAT44(uStack_d4,local_d8);
  *(Type *)(local_110.Data + 8) = local_d0;
  uVar11 = (ulonglong)(int)local_108;
  pFVar1 = local_110.Data + uVar11 * 4;
  FVar12.Data = local_110.Data;
  TVar2 = Y;
  while( true ) {
    TVar13 = TVar2;
    fVar44 = fVar19;
    if ((uint)uVar11 != uVar10) {
      `TCheckedPointerIterator<enum_EAxis::Type_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_118);
      uVar11 = (ulonglong)local_108;
    }
    if (FVar12.Data == pFVar1) break;
    auVar29 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
    auVar24 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
    TVar2 = *(Type *)FVar12.Data;
    dVar21 = auVar24._8_8_;
    dVar20 = auVar24._0_8_;
    dVar14 = auVar29._8_8_;
    dVar31 = auVar29._0_8_;
    if (TVar2 == X) {
      dVar45 = auVar9._8_8_;
      auVar26 = blendpd(auVar29,auVar24,2);
      auVar37._0_8_ = dVar45 * dVar31 - dVar14 * auVar9._0_8_;
      auVar37._8_8_ = dVar14 * 0.0 - dVar20 * dVar45;
      auVar15 = blendpd(auVar9,ZEXT816(0),2);
      auVar16._0_8_ = auVar15._0_8_ * dVar20 - auVar26._0_8_ * 0.0;
      auVar16._8_8_ = auVar15._8_8_ * dVar21 - auVar26._8_8_ * 0.0;
      auVar15 = blendpd(auVar37,auVar16,2);
      dVar3 = auVar37._8_8_ + auVar37._8_8_;
      dVar4 = auVar16._0_8_ + auVar16._0_8_;
      uVar43 = (undefined4)((ulonglong)dVar4 >> 0x20);
      auVar38._0_8_ = auVar15._0_8_ + auVar15._0_8_;
      auVar38._8_8_ = auVar15._8_8_ + auVar15._8_8_;
      auVar32._8_4_ = SUB84(dVar4,0);
      auVar32._0_8_ = dVar3;
      auVar32._12_4_ = uVar43;
      auVar22._8_4_ = SUB84(dVar4,0);
      auVar22._0_8_ = dVar3;
      auVar22._12_4_ = uVar43;
      dVar31 = auVar32._8_8_ * dVar31;
      dVar36 = auVar38._0_8_ * dVar14;
      dVar14 = dVar14 * dVar3;
      dVar18 = dVar20 * dVar4;
      auVar15 = blendpd(auVar22,auVar38,2);
      auVar29 = blendpd(auVar29,auVar24,2);
      dVar28 = auVar29._0_8_ * auVar38._0_8_;
      dVar30 = auVar29._8_8_ * auVar38._8_8_;
      local_c8 = auVar38._0_8_ * dVar21 + 0.0;
      dVar3 = dVar3 * dVar21 + auVar9._0_8_;
      dVar45 = dVar4 * dVar21 + dVar45;
    }
    else if (TVar2 == Y) {
      dVar45 = auVar6._8_8_;
      auVar26 = blendpd(auVar29,auVar24,2);
      auVar39._0_8_ = dVar45 * dVar31 - dVar14 * auVar6._0_8_;
      auVar39._8_8_ = dVar14 * 0.0 - dVar20 * dVar45;
      auVar15 = blendpd(auVar6,ZEXT816(0),2);
      auVar17._0_8_ = auVar15._0_8_ * dVar20 - auVar26._0_8_ * 0.0;
      auVar17._8_8_ = auVar15._8_8_ * dVar21 - auVar26._8_8_ * 0.0;
      auVar15 = blendpd(auVar39,auVar17,2);
      dVar3 = auVar39._8_8_ + auVar39._8_8_;
      dVar4 = auVar17._0_8_ + auVar17._0_8_;
      uVar43 = (undefined4)((ulonglong)dVar4 >> 0x20);
      auVar40._0_8_ = auVar15._0_8_ + auVar15._0_8_;
      auVar40._8_8_ = auVar15._8_8_ + auVar15._8_8_;
      auVar33._8_4_ = SUB84(dVar4,0);
      auVar33._0_8_ = dVar3;
      auVar33._12_4_ = uVar43;
      auVar23._8_4_ = SUB84(dVar4,0);
      auVar23._0_8_ = dVar3;
      auVar23._12_4_ = uVar43;
      dVar31 = auVar33._8_8_ * dVar31;
      dVar36 = auVar40._0_8_ * dVar14;
      dVar14 = dVar14 * dVar3;
      dVar18 = dVar20 * dVar4;
      auVar15 = blendpd(auVar23,auVar40,2);
      auVar29 = blendpd(auVar29,auVar24,2);
      dVar28 = auVar29._0_8_ * auVar40._0_8_;
      dVar30 = auVar29._8_8_ * auVar40._8_8_;
      local_c8 = auVar40._0_8_ * dVar21 + 0.0;
      dVar3 = dVar3 * dVar21 + auVar6._0_8_;
      dVar45 = dVar4 * dVar21 + dVar45;
    }
    else {
      auVar27 = blendpd(auVar29,auVar24,2);
      auVar41._0_8_ = dVar31 * 0.0 - dVar14 * 0.0;
      auVar41._8_8_ = __real_3ff0000000000000 * dVar14 - dVar20 * 0.0;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = __real_3ff0000000000000;
      auVar15 = blendpd(ZEXT816(0),auVar15,2);
      auVar26._0_8_ = auVar15._0_8_ * dVar20 - auVar27._0_8_ * __real_3ff0000000000000;
      auVar26._8_8_ = auVar15._8_8_ * dVar21 - auVar27._8_8_ * 0.0;
      auVar15 = blendpd(auVar41,auVar26,2);
      auVar42._0_8_ = auVar15._0_8_ + auVar15._0_8_;
      auVar42._8_8_ = auVar15._8_8_ + auVar15._8_8_;
      dVar3 = auVar41._8_8_ + auVar41._8_8_;
      dVar45 = auVar26._0_8_ + auVar26._0_8_;
      uVar43 = (undefined4)((ulonglong)dVar45 >> 0x20);
      auVar34._8_4_ = SUB84(dVar45,0);
      auVar34._0_8_ = dVar3;
      auVar34._12_4_ = uVar43;
      auVar27._8_4_ = SUB84(dVar45,0);
      auVar27._0_8_ = dVar3;
      auVar27._12_4_ = uVar43;
      dVar31 = auVar34._8_8_ * dVar31;
      dVar36 = auVar42._0_8_ * dVar14;
      auVar15 = blendpd(auVar27,auVar42,2);
      auVar29 = blendpd(auVar29,auVar24,2);
      dVar28 = auVar29._0_8_ * auVar42._0_8_;
      dVar30 = auVar29._8_8_ * auVar42._8_8_;
      dVar14 = dVar14 * dVar3;
      dVar18 = dVar20 * dVar45;
      local_c8 = auVar42._0_8_ * dVar21 + __real_3ff0000000000000;
      dVar3 = dVar3 * dVar21;
      dVar45 = dVar45 * dVar21;
    }
    FVar12.Data = FVar12.Data + 4;
    auVar35._0_8_ = dVar31 - dVar14;
    auVar35._8_8_ = dVar36 - dVar18;
    auVar24._0_8_ = auVar15._0_8_ * dVar20 - dVar28;
    auVar24._8_8_ = auVar15._8_8_ * dVar21 - dVar30;
    auVar29._8_4_ = SUB84(auVar35._8_8_,0);
    auVar29._0_8_ = auVar35._0_8_;
    auVar29._12_4_ = (int)((ulonglong)auVar35._8_8_ >> 0x20);
    auVar15 = blendpd(auVar35,auVar24,2);
    dVar3 = dVar3 + auVar29._8_8_;
    local_c8 = local_c8 + auVar15._0_8_;
    auVar5._4_8_ = auVar24._8_8_;
    auVar5._0_4_ = (int)((ulonglong)dVar3 >> 0x20);
    auVar25._0_8_ = auVar5._0_8_ << 0x20;
    auVar25._8_4_ = SUB84(dVar45 + auVar24._0_8_,0);
    auVar25._12_4_ = (int)((ulonglong)(dVar45 + auVar24._0_8_) >> 0x20);
    dVar21 = auVar25._8_8_ * (param_2->field0_0x0)._s_0.Y + dVar3 * (param_2->field0_0x0)._s_0.X +
             local_c8 * (param_2->field0_0x0)._s_0.Z;
    fVar19 = (float)(double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & uVar8,
                                     SUB84(dVar21,0) & uVar7);
    if (fVar44 <= fVar19) {
      fVar19 = fVar44;
      TVar2 = TVar13;
    }
  }
  if (local_110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data);
  }
  return TVar13;
}

// Initialize @ 14df44e10

bool __thiscall
FPoleVectorMatcher::Initialize
          (FPoleVectorMatcher *this,FRetargetPoleVectorSettings *param_1,FResolvedBoneChain *param_2
          ,FResolvedBoneChain *param_3,FRetargetSkeleton *param_4,FRetargetSkeleton *param_5)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FResolvedBoneChain *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  FRetargetSkeleton *this_00;
  bool bVar8;
  undefined1 uVar9;
  Type TVar10;
  uint uVar11;
  int iVar12;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar13;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  double dVar18;
  double dVar19;
  int local_78 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_70;
  TArray<int,TSizedDefaultAllocator<32>_> local_60;
  TVector<double>_u_0 local_50;
  TVector<double>_u_0 local_38;
  
  this->Settings = param_1;
  this->SourceBoneChain = param_2;
  this->TargetBoneChain = param_3;
  pTVar13 = FResolvedRetargetPoseSet::GetGlobalRetargetPose(&param_4->RetargetPoses);
  this_00 = param_5;
  pTVar14 = FResolvedRetargetPoseSet::GetGlobalRetargetPose(&param_5->RetargetPoses);
  TVar10 = CalculateBestPoleAxisForChain(this,&this->SourceBoneChain->BoneIndices,pTVar13);
  this->SourcePoleAxis = TVar10;
  TVar10 = CalculateBestPoleAxisForChain(this,&this->TargetBoneChain->BoneIndices,pTVar14);
  this->TargetPoleAxis = TVar10;
  CalculatePoleVector((TVector<double> *)&local_50._s_0,&this->SourcePoleAxis,
                      &this->SourceBoneChain->BoneIndices,pTVar13);
  CalculatePoleVector((TVector<double> *)&local_38._s_0,&this->TargetPoleAxis,
                      &this->TargetBoneChain->BoneIndices,pTVar14);
  dVar19 = local_50._s_0.Y * local_38._s_0.Y + local_38._s_0.X * local_50._s_0.X +
           local_50._s_0.Z * local_38._s_0.Z;
  dVar18 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar19) && (dVar18 = dVar19, __real_3ff0000000000000 <= dVar19)) {
    dVar18 = __real_3ff0000000000000;
  }
  dVar18 = acos(dVar18);
  pFVar5 = this->TargetBoneChain;
  local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.ArrayNum = 0;
  local_60.ArrayMax = 0;
  this->TargetToSourceAngularOffsetAtRefPose = (float)dVar18;
  if (((pFVar5->BoneIndices).ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  FRetargetSkeleton::GetChildrenIndicesRecursive
            (this_00,*(int *)(pFVar5->BoneIndices).AllocatorInstance.Data,&local_60);
  pFVar5 = this->TargetBoneChain;
  iVar4 = (pFVar5->BoneIndices).ArrayNum;
  uVar16 = iVar4 - 1;
  uVar11 = 0;
  if ((int)uVar16 < iVar4) {
    uVar11 = ~uVar16 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  iVar4 = *(int *)((pFVar5->BoneIndices).AllocatorInstance.Data +
                  (longlong)(pFVar5->BoneIndices).ArrayNum * 4 + -4);
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,1,0,&local_70.AllocatorInstance,1,&local_70.ArrayMax);
  *(int *)local_70.AllocatorInstance.Data = iVar4;
  pFVar5 = this->TargetBoneChain;
  iVar4 = (pFVar5->BoneIndices).ArrayNum;
  uVar16 = iVar4 - 1;
  uVar11 = 0;
  if ((int)uVar16 < iVar4) {
    uVar11 = ~uVar16 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  FRetargetSkeleton::GetChildrenIndicesRecursive
            (this_00,*(int *)((pFVar5->BoneIndices).AllocatorInstance.Data +
                             (longlong)(pFVar5->BoneIndices).ArrayNum * 4 + -4),&local_70);
  pTVar1 = &this->AllChildrenWithinChain;
  piVar2 = &(this->AllChildrenWithinChain).ArrayMax;
  (this->AllChildrenWithinChain).ArrayNum = 0;
  if ((this->AllChildrenWithinChain).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  iVar4 = local_60.ArrayNum;
  pFVar3 = local_60.AllocatorInstance.Data + (longlong)local_60.ArrayNum * 4;
  FVar17.Data = local_60.AllocatorInstance.Data;
  do {
    if (local_60.ArrayNum != iVar4) {
      param_4._0_1_ = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&param_4);
    }
    if (FVar17.Data == pFVar3) {
      if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.AllocatorInstance.Data);
      }
      if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.AllocatorInstance.Data);
      }
      return true;
    }
    local_78[0] = *(int *)FVar17.Data;
    for (FVar15.Data = local_70.AllocatorInstance.Data;
        FVar15.Data != local_70.AllocatorInstance.Data + (longlong)local_70.ArrayNum * 4;
        FVar15.Data = FVar15.Data + 4) {
      if (*(int *)FVar15.Data == local_78[0]) goto LAB_14df4517c;
    }
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar6 <= (FScriptContainerElement *)local_78) &&
        ((FScriptContainerElement *)local_78 < pFVar6 + (longlong)*piVar2 * 4)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    iVar12 = (this->AllChildrenWithinChain).ArrayNum;
    if (iVar12 == *piVar2) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->AllChildrenWithinChain).ArrayNum = iVar12 + 1;
    *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_78[0];
LAB_14df4517c:
    FVar17.Data = FVar17.Data + 4;
  } while( true );
}

// MatchPoleVector @ 14df49ea0

void __thiscall
FPoleVectorMatcher::MatchPoleVector
          (FPoleVectorMatcher *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1,
          FRetargetSkeleton *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  FRetargetPoleVectorSettings *pFVar1;
  FResolvedBoneChain *pFVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  bool bVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  ulonglong uVar18;
  double dVar19;
  double dVar20;
  bool bVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint uVar25;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  uint uVar26;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  undefined4 uVar39;
  undefined1 auVar38 [16];
  undefined4 uVar40;
  undefined4 uVar43;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined4 uVar45;
  double dVar44;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  TVector<double>_u_0 local_148;
  double local_128;
  double dStack_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_b0 [5];
  double dVar37;
  
  bVar4 = __real_3f1a36e2e0000000 < this->Settings->AlignAlpha;
  dVar37 = this->Settings->StaticAngularOffset;
  uVar25 = SUB84(dVar37,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar26 = (uint)((ulonglong)dVar37 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  bVar21 = (double)CONCAT44(uVar26,uVar25) != __real_3e45798ee2308c3a;
  bVar5 = __real_3e45798ee2308c3a <= (double)CONCAT44(uVar26,uVar25);
  if ((bVar4) || (bVar5 && bVar21)) {
    FRetargetSkeleton::GetLocalTransformsOfMultipleBones
              (param_2,&local_f8,&this->AllChildrenWithinChain,param_3);
    GetChainAxisNormalized
              ((TVector<double> *)&local_148._s_0,&this->TargetBoneChain->BoneIndices,param_3);
    uVar46 = SUB84(UE::Math::TQuat<double>::Identity.X,0);
    uVar47 = (undefined4)((ulonglong)UE::Math::TQuat<double>::Identity.X >> 0x20);
    uVar48 = SUB84(UE::Math::TQuat<double>::Identity.Y,0);
    uVar49 = (undefined4)((ulonglong)UE::Math::TQuat<double>::Identity.Y >> 0x20);
    uVar50 = SUB84(UE::Math::TQuat<double>::Identity.Z,0);
    uVar51 = (undefined4)((ulonglong)UE::Math::TQuat<double>::Identity.Z >> 0x20);
    uVar52 = SUB84(UE::Math::TQuat<double>::Identity.W,0);
    uVar53 = (undefined4)((ulonglong)UE::Math::TQuat<double>::Identity.W >> 0x20);
    uVar43 = uVar48;
    uVar45 = uVar49;
    uVar39 = uVar52;
    uVar40 = uVar53;
    dVar37 = UE::Math::TQuat<double>::Identity.Z;
    dVar27 = UE::Math::TQuat<double>::Identity.X;
    if (bVar4) {
      CalculatePoleVector((TVector<double> *)&local_b0[0]._s_0,&this->SourcePoleAxis,
                          &this->SourceBoneChain->BoneIndices,param_1);
      CalculatePoleVector((TVector<double> *)&local_c8._s_0,&this->TargetPoleAxis,
                          &this->TargetBoneChain->BoneIndices,param_3);
      dVar36 = __real_bff0000000000000;
      dVar44 = __real_3ff0000000000000;
      dVar37 = local_c8._s_0.Y * (double)local_b0[0]._8_8_ +
               local_c8._s_0.X * (double)local_b0[0]._0_8_ +
               local_c8._s_0.Z * (double)local_b0[0]._16_8_;
      dVar27 = __real_bff0000000000000;
      if ((__real_bff0000000000000 <= dVar37) &&
         (dVar27 = dVar37, __real_3ff0000000000000 <= dVar37)) {
        dVar27 = __real_3ff0000000000000;
      }
      acos(dVar27);
      pFVar1 = this->Settings;
      __libm_sse2_sincos_();
      uVar50 = SUB84(UE::Math::TQuat<double>::Identity.Z,0);
      uVar51 = (undefined4)((ulonglong)UE::Math::TQuat<double>::Identity.Z >> 0x20);
      uVar52 = SUB84(UE::Math::TQuat<double>::Identity.W,0);
      uVar53 = (undefined4)((ulonglong)UE::Math::TQuat<double>::Identity.W >> 0x20);
      uVar46 = SUB84(UE::Math::TQuat<double>::Identity.X,0);
      uVar47 = (undefined4)((ulonglong)UE::Math::TQuat<double>::Identity.X >> 0x20);
      uVar48 = SUB84(UE::Math::TQuat<double>::Identity.Y,0);
      uVar49 = (undefined4)((ulonglong)UE::Math::TQuat<double>::Identity.Y >> 0x20);
      auVar33._0_8_ = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      auVar33._8_4_ = extraout_XMM0_Dc;
      auVar33._12_4_ = extraout_XMM0_Dd;
      auVar41._8_8_ = auVar33._8_8_;
      local_e8 = auVar33._0_8_ * local_148._s_0.X;
      dStack_e0 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * local_148._s_0.Y;
      local_d8 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * local_148._s_0.Z;
      dVar37 = pFVar1->AlignAlpha;
      auVar41._0_8_ = local_e8 * UE::Math::TQuat<double>::Identity.X;
      if (0.0 <= (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) *
                 UE::Math::TQuat<double>::Identity.W +
                 local_d8 * UE::Math::TQuat<double>::Identity.Z +
                 dStack_e0 * UE::Math::TQuat<double>::Identity.Y + auVar41._0_8_) {
        dVar36 = dVar44;
      }
      dVar36 = (dVar44 - dVar37) * dVar36;
      dVar44 = dVar36 * UE::Math::TQuat<double>::Identity.X + local_e8 * dVar37;
      dVar9 = dVar36 * UE::Math::TQuat<double>::Identity.Y + dStack_e0 * dVar37;
      dVar34 = dVar36 * UE::Math::TQuat<double>::Identity.Z + dVar37 * local_d8;
      dVar35 = dVar36 * UE::Math::TQuat<double>::Identity.W +
               dVar37 * (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
      auVar28._8_4_ = SUB84(dVar35,0);
      auVar28._0_8_ = dVar34;
      auVar28._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
      dVar27 = dVar34 * dVar34 + dVar44 * dVar44;
      dVar36 = auVar28._8_8_ * dVar35 + dVar9 * dVar9;
      dVar37 = dVar36 + dVar27;
      dVar27 = dVar27 + dVar36;
      auVar7._8_4_ = SUB84(dVar27,0);
      auVar7._0_8_ = dVar37;
      auVar7._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
      auVar33 = sqrtpd(auVar41,auVar7);
      uVar23 = -(ulonglong)(__real_3e45798ee0000000 <= dVar37);
      uVar24 = -(ulonglong)(__real_3e45798ee0000000 <= dVar27);
      auVar41 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar33);
      uVar25 = (uint)(uVar23 >> 0x20);
      uVar26 = (uint)(uVar24 >> 0x20);
      auVar42._0_8_ = uVar23 & (ulonglong)(auVar41._0_8_ * dVar44);
      uVar18 = uVar24 & (ulonglong)(auVar41._8_8_ * dVar9);
      auVar42._8_4_ = (undefined4)uVar18;
      auVar42._12_4_ = (undefined4)(uVar18 >> 0x20);
      auVar29._0_4_ = ~(uint)uVar23 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
      auVar29._4_4_ =
           ~uVar25 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20)
      ;
      auVar29._8_4_ = ~(uint)uVar24 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar29._12_4_ =
           ~uVar26 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      auVar42 = auVar42 | auVar29;
      dVar27 = auVar42._0_8_;
      auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar33);
      auVar38._0_4_ = ~(uint)uVar23 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
      auVar38._4_4_ =
           ~uVar25 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20)
      ;
      auVar38._8_4_ = ~(uint)uVar24 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      auVar38._12_4_ =
           ~uVar26 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
      ;
      uVar43 = auVar42._8_4_;
      uVar45 = auVar42._12_4_;
      auVar30._0_8_ = (ulonglong)(auVar33._0_8_ * dVar34) & uVar23;
      uVar24 = (ulonglong)(auVar33._8_8_ * dVar35) & uVar24;
      auVar30._8_4_ = (undefined4)uVar24;
      auVar30._12_4_ = (undefined4)(uVar24 >> 0x20);
      auVar38 = auVar38 | auVar30;
      dVar37 = auVar38._0_8_;
      uVar39 = auVar38._8_4_;
      uVar40 = auVar38._12_4_;
    }
    dVar36 = (double)CONCAT44(uVar49,uVar48);
    dVar44 = (double)CONCAT44(uVar47,uVar46);
    local_118._8_4_ = uVar48;
    local_118._0_8_ = dVar44;
    local_118._12_4_ = uVar49;
    dVar9 = (double)CONCAT44(uVar51,uVar50);
    local_108._8_4_ = uVar52;
    local_108._0_8_ = dVar9;
    local_108._12_4_ = uVar53;
    if (bVar5 && bVar21) {
      __libm_sse2_sincos_();
      dVar44 = (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) * local_148._s_0.X;
      dVar36 = (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) * local_148._s_0.Y;
      dVar9 = (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) * local_148._s_0.Z;
      local_118._8_4_ = SUB84(dVar36,0);
      local_118._0_8_ = dVar44;
      local_118._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
      local_108._8_4_ = extraout_XMM0_Dc_00;
      local_108._0_8_ = dVar9;
      local_108._12_4_ = extraout_XMM0_Dd_00;
      uVar52 = extraout_XMM0_Dc_00;
      uVar53 = extraout_XMM0_Dd_00;
    }
    pFVar2 = this->TargetBoneChain;
    if (((pFVar2->BoneIndices).ArrayNum < 1) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar25 = *(uint *)(pFVar2->BoneIndices).AllocatorInstance.Data;
    uVar26 = 0;
    if ((int)uVar25 < param_3->ArrayNum) {
      uVar26 = ~uVar25 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar3 = (param_3->AllocatorInstance).Data;
    dVar13 = (double)CONCAT44(uVar40,uVar39);
    dVar10 = (double)CONCAT44(uVar45,uVar43);
    lVar22 = (longlong)(int)uVar25 * 0x60;
    dVar14 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
    dVar15 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
    auVar31._8_4_ = uVar43;
    auVar31._0_8_ = dVar10;
    auVar31._12_4_ = uVar45;
    dVar16 = dVar27 * (double)CONCAT44(uVar53,uVar52) *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar44 * dVar13 +
             dVar10 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar37 * dVar36 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar17 = dVar27 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             dVar36 * dVar13 +
             auVar31._8_8_ * (double)CONCAT44(uVar53,uVar52) *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             dVar37 * dVar44 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar19 = *(double *)(pFVar3 + lVar22 + 0x10);
    dVar20 = *(double *)(pFVar3 + lVar22 + 0x10 + 8);
    dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
    dVar12 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
    dVar34 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar35 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    local_128 = dVar27 * dVar36 * dVar14 + dVar13 * dVar9 + dVar10 * dVar44 * dVar11 +
                dVar37 * (double)CONCAT44(uVar53,uVar52) * dVar34;
    dVar44 = dVar27 * dVar44 * dVar15 + dVar13 * (double)CONCAT44(uVar53,uVar52) +
             dVar10 * dVar36 * dVar12 + dVar37 * dVar9 * dVar35;
    dVar27 = *(double *)(pFVar3 + lVar22);
    dVar36 = *(double *)(pFVar3 + lVar22 + 8);
    auVar32._8_4_ = SUB84(dVar17,0);
    auVar32._0_8_ = dVar17;
    auVar32._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    dVar37 = dVar16 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             dVar44 * dVar36 +
             auVar32._8_8_ * dVar20 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             dVar27 * local_128 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    auVar8._8_4_ = SUB84(dVar37,0);
    auVar8._0_8_ = dVar16 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
                   + dVar44 * dVar27 +
                   dVar17 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
                   + dVar36 * local_128 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    auVar8._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
    *(undefined1 (*) [16])(pFVar3 + lVar22) = auVar8;
    *(double *)(pFVar3 + lVar22 + 0x10) =
         dVar16 * dVar36 * dVar14 + dVar44 * dVar19 + dVar17 * dVar27 * dVar11 +
         dVar20 * local_128 * dVar34;
    *(double *)(pFVar3 + lVar22 + 0x10 + 8) =
         dVar16 * dVar27 * dVar15 + dVar44 * dVar20 + dVar17 * dVar36 * dVar12 +
         dVar19 * local_128 * dVar35;
    dStack_120 = local_128;
    FRetargetSkeleton::UpdateGlobalTransformsOfMultipleBones
              (param_2,&this->AllChildrenWithinChain,&local_f8,param_3);
    if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
  }
  return;
}

