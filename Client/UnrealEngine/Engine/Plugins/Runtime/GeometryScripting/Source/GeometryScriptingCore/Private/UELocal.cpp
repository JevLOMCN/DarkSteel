// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 11

// operator() @ 14cdb8d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UELocal::ComputeCollisionFromMesh'::__l7::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  code *pcVar4;
  ulonglong uVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStackY_678 [32];
  TArrayView<int_const_,int> local_648;
  undefined1 local_638 [1272];
  ForAnyElementType local_140;
  undefined8 local_138;
  TBitArray<FDefaultBitArrayAllocator> local_130;
  undefined8 uStack_110;
  ForElementType<FSetElementId> local_100;
  int local_f8;
  ForAnyElementType local_f0;
  undefined8 local_e8;
  TBitArray<FDefaultBitArrayAllocator> local_e0;
  undefined8 uStack_c0;
  ForElementType<FSetElementId> local_b0;
  int local_a8;
  ForAnyElementType local_a0;
  undefined8 local_98;
  TBitArray<FDefaultBitArrayAllocator> local_90;
  undefined8 uStack_70;
  ForElementType<FSetElementId> local_60;
  int local_58;
  bool local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_678;
  lVar1 = *(longlong *)((longlong)this + 8);
  lVar9 = (longlong)param_1;
  uVar10 = (uint)~param_1 >> 0x1f;
  uVar8 = 0;
  if (param_1 < *(int *)(lVar1 + 0x10)) {
    uVar8 = uVar10;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar2 = *(undefined8 **)(*(longlong *)(lVar1 + 8) + lVar9 * 8);
  local_638._0_8_ = *(undefined8 *)this;
  UE::Geometry::FDynamicMesh3::FDynamicMesh3((FDynamicMesh3 *)(local_638 + 8));
  UE::Geometry::FMeshIndexMappings::FMeshIndexMappings((FMeshIndexMappings *)(local_638 + 0x238));
  local_130.NumBits = ___xmm_00000000ffffffff0000008000000000;
  local_130.MaxBits = _UNK_150631d94;
  uStack_110 = _UNK_150631d98;
  local_e0.NumBits = ___xmm_00000000ffffffff0000008000000000;
  local_e0.MaxBits = _UNK_150631d94;
  uStack_c0 = _UNK_150631d98;
  local_90.NumBits = ___xmm_00000000ffffffff0000008000000000;
  local_90.MaxBits = _UNK_150631d94;
  uStack_70 = _UNK_150631d98;
  local_140.Data = (FScriptContainerElement *)0x0;
  local_138 = 0;
  local_130.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_100 = (ForElementType<FSetElementId>)0x0;
  local_f8 = 0;
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8 = 0;
  local_e0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_b0 = (ForElementType<FSetElementId>)0x0;
  local_a8 = 0;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_98 = 0;
  local_90.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_60 = (ForElementType<FSetElementId>)0x0;
  local_58 = 0;
  local_50 = true;
  local_648.DataPtr = (int *)*puVar2;
  local_648.ArrayNum = *(int *)(puVar2 + 1);
  if (local_648.ArrayNum < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  UE::Geometry::FDynamicSubmesh3::Compute((FDynamicSubmesh3 *)local_638,&local_648,0,false);
  plVar3 = *(longlong **)((longlong)this + 0x10);
  uVar8 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar8 = uVar10;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  UE::Geometry::FDynamicMesh3::operator=
            ((FDynamicMesh3 *)(*plVar3 + lVar9 * 0x230),(FDynamicMesh3 *)(local_638 + 8));
  plVar3 = *(longlong **)((longlong)this + 0x10);
  uVar8 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar8 = uVar10;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar1 = *plVar3;
  plVar3 = *(longlong **)((longlong)this + 0x18);
  uVar8 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar8 = uVar10;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(longlong *)(*plVar3 + lVar9 * 8) = lVar1 + lVar9 * 0x230;
  local_58 = 0;
  if (local_60 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_60);
  }
  uVar5 = local_98 >> 0x20;
  local_98 = local_98 & 0xffffffff00000000;
  if ((int)uVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&local_a0,0,(int *)((longlong)&local_98 + 4));
  }
  iVar6 = local_90.MaxBits;
  uStack_70 = 0xffffffff;
  local_90._24_8_ = (ulonglong)(uint)local_90.MaxBits << 0x20;
  if (0x80 < (uint)iVar6) {
    local_90.NumBits = 0;
    local_90.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_90,0);
  }
  if (local_90.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_90.AllocatorInstance.SecondaryData);
  }
  if (local_a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data);
  }
  local_a8 = 0;
  if (local_b0 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_b0);
  }
  uVar5 = local_e8 >> 0x20;
  local_e8 = local_e8 & 0xffffffff00000000;
  if ((int)uVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&local_f0,0,(int *)((longlong)&local_e8 + 4));
  }
  iVar6 = local_e0.MaxBits;
  uStack_c0 = 0xffffffff;
  local_e0._24_8_ = (ulonglong)(uint)local_e0.MaxBits << 0x20;
  if (0x80 < (uint)iVar6) {
    local_e0.NumBits = 0;
    local_e0.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_e0,0);
  }
  if (local_e0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_e0.AllocatorInstance.SecondaryData);
  }
  if (local_f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data);
  }
  local_f8 = 0;
  if (local_100 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_100);
  }
  uVar5 = local_138 >> 0x20;
  local_138 = local_138 & 0xffffffff00000000;
  if ((int)uVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&local_140,0,(int *)((longlong)&local_138 + 4));
  }
  iVar6 = local_130.MaxBits;
  uStack_110 = 0xffffffff;
  local_130._24_8_ = (ulonglong)(uint)local_130.MaxBits << 0x20;
  if (0x80 < (uint)iVar6) {
    local_130.NumBits = 0;
    local_130.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_130,0);
  }
  if (local_130.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_130.AllocatorInstance.SecondaryData);
  }
  if (local_140.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.Data);
  }
  UE::Geometry::FMeshIndexMappings::~FMeshIndexMappings((FMeshIndexMappings *)(local_638 + 0x238));
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3((FDynamicMesh3 *)(local_638 + 8));
  return;
}

// operator() @ 14cdbc260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

double __thiscall
`UELocal::ApplyNegativeSpaceToleranceDirectionalScales'::__l12::<lambda_2>::operator()
          (void *this,FDynamicMesh3 *param_1,int param_2,TVector<double> *param_3)

{
  double *pdVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_138 [32];
  undefined1 local_118 [16];
  TVector<double>_u_0 local_108;
  TDistPoint3Triangle3<double> local_e8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_108._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_108._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  local_108._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::TriangleDistance
            (&local_e8,param_1,param_2,(TVector<double> *)&local_108._s_0);
  dVar3 = local_e8.ClosestTrianglePoint.field0_0x0._s_0.X - (param_3->field0_0x0)._s_0.X;
  dVar4 = local_e8.ClosestTrianglePoint.field0_0x0._s_0.Y - (param_3->field0_0x0)._s_0.Y;
  dVar5 = local_e8.ClosestTrianglePoint.field0_0x0._s_0.Z - (param_3->field0_0x0)._s_0.Z;
  dVar9 = dVar4 * dVar4 + dVar3 * dVar3 + dVar5 * dVar5;
  if (dVar9 <= __real_3e45798ee0000000) {
LAB_14cdbc388:
    uVar7 = SUB84(__real_3ff0000000000000,0);
    uVar8 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  }
  else {
    iVar2 = *(int *)((longlong)this + 8);
    pdVar6 = *(double **)this;
    pdVar1 = pdVar6 + (longlong)iVar2 * 5;
    dVar9 = __real_3ff0000000000000 / SQRT(dVar9);
    while( true ) {
      if (*(int *)((longlong)this + 8) != iVar2) {
        `TCheckedPointerIterator<FNegativeSpaceDirectionalToleranceScale_const_,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_118);
      }
      if (pdVar6 == pdVar1) goto LAB_14cdbc388;
      dVar10 = dVar4 * dVar9 * pdVar6[1] + dVar3 * dVar9 * *pdVar6 + dVar5 * dVar9 * pdVar6[2];
      if (pdVar6[3] <= dVar10 && dVar10 != pdVar6[3]) break;
      pdVar6 = pdVar6 + 5;
    }
    uVar7 = SUB84(pdVar6[4],0);
    uVar8 = (undefined4)((ulonglong)pdVar6[4] >> 0x20);
  }
  return (double)CONCAT44(uVar8,uVar7);
}

// AppendConvexElemToCompactDynamicMesh @ 14cdbf870

bool __cdecl
UELocal::AppendConvexElemToCompactDynamicMesh
          (FKConvexElem *param_1,FDynamicMesh3 *param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  int iVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 local_188 [4];
  FIndex3i_u_0 local_184;
  TVector<double>_u_0 local_178;
  undefined8 local_160;
  float local_158;
  undefined8 local_154;
  float local_14c;
  TVector2<float>_u_0 local_148;
  undefined2 local_140;
  undefined1 local_13e;
  undefined1 local_138 [16];
  double local_128;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  
  if ((param_1->IndexData).ArrayNum <= param_3 * 3) {
    return false;
  }
  pFVar16 = (param_1->VertexData).AllocatorInstance.Data;
  iVar2 = (param_1->VertexData).ArrayNum;
  pFVar1 = pFVar16 + (longlong)iVar2 * 0x18;
  iVar18 = (param_2->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_2->VertexRefCounts).RefCounts.CurBlockUsed;
  while( true ) {
    if ((param_1->VertexData).ArrayNum != iVar2) {
      local_188[0] = 0;
      `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_188);
    }
    if (pFVar16 == pFVar1) break;
    local_108 = *(undefined1 (*) [16])(param_1->Transform).Rotation.ZW.m128d_f64;
    local_118 = *(undefined1 (*) [16])(param_1->Transform).Rotation.XY.m128d_f64;
    local_140 = 0;
    local_d8 = (param_1->Transform).Scale3D.XY.m128d_f64[0];
    dStack_d0 = (param_1->Transform).Scale3D.XY.m128d_f64[1];
    local_13e = 0;
    local_c8 = (param_1->Transform).Scale3D.ZW.m128d_f64[0];
    dStack_c0 = (param_1->Transform).Scale3D.ZW.m128d_f64[1];
    dVar25 = local_118._8_8_;
    local_e8 = (param_1->Transform).Translation.ZW.m128d_f64[0];
    dStack_e0 = (param_1->Transform).Translation.ZW.m128d_f64[1];
    local_f8 = (param_1->Transform).Translation.XY.m128d_f64[0];
    dStack_f0 = (param_1->Transform).Translation.XY.m128d_f64[1];
    dVar10 = *(double *)pFVar16 * local_d8;
    dVar11 = *(double *)(pFVar16 + 8) * dStack_d0;
    uVar26 = (undefined4)((ulonglong)dVar11 >> 0x20);
    dVar8 = *(double *)(pFVar16 + 0x10) * local_c8;
    dVar9 = dStack_c0 * 0.0;
    auVar29._8_4_ = SUB84(dVar11,0);
    auVar29._0_8_ = dVar10;
    auVar29._12_4_ = uVar26;
    dVar6 = local_108._0_8_;
    auVar28._8_4_ = SUB84(dVar11,0);
    auVar28._0_8_ = dVar10;
    auVar28._12_4_ = uVar26;
    auVar19._8_4_ = SUB84(dVar9,0);
    auVar19._0_8_ = dVar8;
    auVar19._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    auVar19 = blendpd(auVar28,auVar19,2);
    dVar7 = local_108._8_8_;
    auVar28 = blendpd(local_118,local_108,2);
    auVar30._0_8_ = auVar29._8_8_ * local_118._0_8_ - dVar25 * dVar10;
    auVar30._8_8_ = dVar8 * dVar25 - dVar6 * dVar11;
    auVar20._0_8_ = auVar19._0_8_ * dVar6 - auVar28._0_8_ * dVar8;
    auVar20._8_8_ = auVar19._8_8_ * dVar7 - auVar28._8_8_ * dVar9;
    auVar19 = blendpd(auVar30,auVar20,2);
    dVar9 = auVar30._8_8_ + auVar30._8_8_;
    dVar5 = auVar20._0_8_ + auVar20._0_8_;
    uVar26 = (undefined4)((ulonglong)dVar5 >> 0x20);
    auVar31._0_8_ = auVar19._0_8_ + auVar19._0_8_;
    auVar31._8_8_ = auVar19._8_8_ + auVar19._8_8_;
    auVar23._8_4_ = SUB84(dVar5,0);
    auVar23._0_8_ = dVar9;
    auVar23._12_4_ = uVar26;
    auVar21._8_4_ = SUB84(dVar5,0);
    auVar21._0_8_ = dVar9;
    auVar21._12_4_ = uVar26;
    auVar19 = blendpd(auVar21,auVar31,2);
    auVar24._0_8_ = auVar23._8_8_ * local_118._0_8_ - dVar9 * dVar25;
    auVar24._8_8_ = auVar31._0_8_ * dVar25 - dVar5 * dVar6;
    auVar22._0_8_ = auVar19._0_8_ * dVar6 - auVar31._0_8_ * auVar28._0_8_;
    auVar22._8_8_ = auVar19._8_8_ * dVar7 - auVar31._8_8_ * auVar28._8_8_;
    dVar9 = dVar9 * dVar7 + dVar10 + auVar24._8_8_ + local_f8;
    dVar5 = dVar5 * dVar7 + dVar11 + auVar22._0_8_ + dStack_f0;
    uVar26 = SUB84(dVar5,0);
    uVar27 = (undefined4)((ulonglong)dVar5 >> 0x20);
    auVar19 = blendpd(auVar24,auVar22,2);
    local_138._8_4_ = uVar26;
    local_138._0_8_ = dVar9;
    local_138._12_4_ = uVar27;
    local_178._s_0.Z = auVar31._0_8_ * dVar7 + dVar8 + auVar19._0_8_ + local_e8;
    local_178._8_4_ = uVar26;
    local_178._0_8_ = dVar9;
    local_178._12_4_ = uVar27;
    local_158 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_14c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_148 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    local_160 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_154 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_128 = local_178._s_0.Z;
    UE::Geometry::FDynamicMesh3::AppendVertex(param_2,(FVertexInfo *)&local_178._s_0);
    pFVar16 = pFVar16 + 0x18;
  }
  if (2 < (param_1->IndexData).ArrayNum) {
    uVar15 = 2;
    lVar17 = 8;
    do {
      uVar14 = 0;
      if ((int)(uVar15 - 1) < (param_1->IndexData).ArrayNum) {
        uVar14 = ~(uVar15 - 1) >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        uVar13 = (*pcVar4)();
        return (bool)uVar13;
      }
      iVar2 = *(int *)((param_1->IndexData).AllocatorInstance.Data + lVar17 + -4);
      uVar14 = 0;
      if ((int)uVar15 < (param_1->IndexData).ArrayNum) {
        uVar14 = ~uVar15 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        uVar13 = (*pcVar4)();
        return (bool)uVar13;
      }
      iVar3 = *(int *)((param_1->IndexData).AllocatorInstance.Data + lVar17);
      uVar14 = 0;
      if ((int)(uVar15 - 2) < (param_1->IndexData).ArrayNum) {
        uVar14 = ~(uVar15 - 2) >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        uVar13 = (*pcVar4)();
        return (bool)uVar13;
      }
      local_184._s_0.A =
           *(int *)((param_1->IndexData).AllocatorInstance.Data + lVar17 + -8) + iVar18;
      local_184._s_0.B = iVar3 + iVar18;
      local_184._s_0.C = iVar2 + iVar18;
      UE::Geometry::FDynamicMesh3::AppendTriangle(param_2,(FIndex3i *)&local_184._s_0,0);
      uVar15 = uVar15 + 3;
      lVar17 = lVar17 + 0xc;
    } while ((int)uVar15 < (param_1->IndexData).ArrayNum);
  }
  return true;
}

// ApplyNegativeSpaceToleranceDirectionalScales @ 14cdc3800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UELocal::ApplyNegativeSpaceToleranceDirectionalScales
          (FNegativeSpaceSampleSettings *param_1,
          TArray<FNegativeSpaceDirectionalToleranceScale,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  longlong *plVar17;
  FScriptContainerElement *pFVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auStackY_138 [32];
  FIdentityFunctor local_f8 [8];
  ForAnyElementType local_f0;
  undefined8 local_e8;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong *plStack_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_138;
  iVar6 = param_2->ArrayNum;
  if (iVar6 != 0) {
    pFVar18 = (param_2->AllocatorInstance).Data;
    local_f0.Data = (FScriptContainerElement *)0x0;
    local_e8 = CONCAT44(local_e8._4_4_,iVar6);
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar6,0,&local_f0,iVar6,(int *)((longlong)&local_e8 + 4));
    memcpy(local_f0.Data,pFVar18,(longlong)iVar6 * 0x28);
    dVar16 = __real_3fb999999999999a;
    dVar15 = __real_3f91df46a2529d39;
    dVar14 = __real_3e45798ee2308c3a;
    dVar13 = __real_3e45798ee0000000;
    dVar12 = __real_3ff0000000000000;
    iVar6 = (int)local_e8;
    uVar25 = SUB84(__real_3ff0000000000000,0);
    uVar26 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    pFVar18 = local_f0.Data + 0x10;
    uVar27 = SUB84(__real_3e45798ee2308c3a,0);
    uVar10 = (ulonglong)__real_3e45798ee2308c3a >> 0x20;
    uVar28 = SUB84(__real_3fb999999999999a,0);
    uVar11 = (ulonglong)__real_3fb999999999999a >> 0x20;
    pFVar2 = local_f0.Data + (longlong)(int)local_e8 * 0x28;
    uVar23 = uVar25;
    uVar24 = uVar26;
    while( true ) {
      if ((int)local_e8 != iVar6) {
        `TCheckedPointerIterator<FNegativeSpaceDirectionalToleranceScale,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_f8);
      }
      pFVar1 = pFVar18 + -0x10;
      if (pFVar1 == pFVar2) break;
      dVar3 = *(double *)&pFVar1->field_0x0;
      dVar4 = *(double *)(pFVar18 + -8);
      dVar5 = *(double *)pFVar18;
      dVar7 = dVar3 * dVar3 + dVar4 * dVar4 + dVar5 * dVar5;
      if (dVar13 < dVar7) {
        dVar7 = dVar12 / SQRT(dVar7);
        *(double *)&pFVar1->field_0x0 = dVar3 * dVar7;
        *(double *)(pFVar18 + -8) = dVar4 * dVar7;
        *(double *)pFVar18 = dVar5 * dVar7;
      }
      dVar4 = cos(*(double *)(pFVar18 + 8) * dVar15);
      dVar3 = *(double *)(pFVar18 + 0x10);
      uVar19 = SUB84(dVar4,0);
      uVar20 = (int)((ulonglong)dVar4 >> 0x20);
      if (dVar4 <= dVar14) {
        uVar19 = uVar27;
        uVar20 = (int)uVar10;
      }
      uVar21 = SUB84(dVar3,0);
      uVar22 = (int)((ulonglong)dVar3 >> 0x20);
      if (dVar12 <= dVar3) {
        uVar21 = uVar25;
        uVar22 = uVar26;
      }
      *(ulonglong *)(pFVar18 + 8) = CONCAT44(uVar20,uVar19);
      if ((double)CONCAT44(uVar22,uVar21) <= dVar16) {
        uVar21 = uVar28;
        uVar22 = (int)uVar11;
      }
      *(ulonglong *)(pFVar18 + 0x10) = CONCAT44(uVar22,uVar21);
      if ((double)CONCAT44(uVar24,uVar23) <= (double)CONCAT44(uVar22,uVar21)) {
        uVar21 = uVar23;
        uVar22 = uVar24;
      }
      pFVar18 = pFVar18 + 0x28;
      uVar23 = uVar21;
      uVar24 = uVar22;
    }
    AlgoImpl::
    IntroSortInternal<FNegativeSpaceDirectionalToleranceScale,int,FIdentityFunctor,TDereferenceWrapper<FNegativeSpaceDirectionalToleranceScale,_UELocal::ApplyNegativeSpaceToleranceDirectionalScales_::__l2::<lambda_1>_>_>
              ((FNegativeSpaceDirectionalToleranceScale *)local_f0.Data,(int)local_e8,local_f8[0],
               (<lambda_1> *)local_f8);
    if ((double)CONCAT44(uVar24,uVar23) < dVar12) {
      param_1->MinCustomMarginScale = (double)CONCAT44(uVar24,uVar23);
      local_d8 = *(longlong *)&param_1->CustomRadiusMarginScale;
      uVar8 = *(undefined8 *)&(param_1->CustomRadiusMarginScale).field_0x8;
      local_c8 = *(longlong *)&(param_1->CustomRadiusMarginScale).field_0x10;
      uVar9 = *(undefined8 *)&(param_1->CustomRadiusMarginScale).field_0x18;
      local_b8 = *(undefined8 *)&(param_1->CustomRadiusMarginScale).field_0x20;
      plStack_b0 = *(longlong **)&(param_1->CustomRadiusMarginScale).field_0x28;
      *(code **)&param_1->CustomRadiusMarginScale =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UELocal::ApplyNegativeSpaceToleranceDirectionalScales'::__l12::<lambda_2>,double,UE::Geometry::FDynamicMesh3_const_&,int,UE::Math::TVector<double>_>
           ::Call;
      *(undefined8 *)&(param_1->CustomRadiusMarginScale).field_0x8 = uStack_d0;
      uStack_c0._0_4_ = SUB84(local_f0.Data,0);
      uStack_c0._4_4_ = (undefined4)((ulonglong)local_f0.Data >> 0x20);
      *(undefined4 *)&(param_1->CustomRadiusMarginScale).field_0x10 = 0x529c4690;
      *(undefined4 *)&(param_1->CustomRadiusMarginScale).field_0x14 = 1;
      *(undefined4 *)&(param_1->CustomRadiusMarginScale).field_0x18 = (undefined4)uStack_c0;
      *(undefined4 *)&(param_1->CustomRadiusMarginScale).field_0x1c = uStack_c0._4_4_;
      *(int *)&(param_1->CustomRadiusMarginScale).field_0x20 = (int)local_e8;
      *(undefined4 *)&(param_1->CustomRadiusMarginScale).field_0x24 = local_e8._4_4_;
      *(undefined4 *)&(param_1->CustomRadiusMarginScale).field_0x28 = 0;
      *(undefined4 *)&(param_1->CustomRadiusMarginScale).field_0x2c = 0;
      local_f0.Data = (FScriptContainerElement *)0x0;
      local_e8 = 0;
      uStack_c0 = uVar9;
      uStack_d0 = uVar8;
      if (local_d8 != 0) {
        plVar17 = &local_c8;
        if (plStack_b0 != (longlong *)0x0) {
          plVar17 = plStack_b0;
        }
        (**(code **)(*plVar17 + 0x10))();
      }
    }
    if ((FNegativeSpaceDirectionalToleranceScale *)local_f0.Data !=
        (FNegativeSpaceDirectionalToleranceScale *)0x0) {
      FMemory::Free(local_f0.Data);
    }
  }
  return;
}

// ComputeCollisionFromMesh @ 14cdcc680

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UELocal::ComputeCollisionFromMesh
          (FDynamicMesh3 *param_1,FKAggregateGeom *param_2,
          FGeometryScriptCollisionFromMeshOptions *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ForAnyElementType FVar16;
  longlong lVar17;
  <lambda_1> local_res8;
  TArray<UE::Geometry::FDynamicMesh3_const_*,TSizedDefaultAllocator<32>_> local_288;
  FMeshConnectedComponents local_278;
  ForAnyElementType local_260;
  undefined8 local_258;
  undefined1 local_248 [72];
  undefined8 uStack_200;
  bool local_1f8;
  double local_1f0;
  double dStack_1e8;
  undefined2 local_1e0;
  int local_1dc;
  ForAnyElementType local_1d8;
  undefined8 local_1d0;
  ForAnyElementType local_1c8;
  undefined8 local_1c0;
  FPhysicsDataCollection local_1b8;
  TArrayView<std::nullptr_t,int> local_98;
  code *local_88;
  FDynamicMesh3 **local_80;
  FDynamicMesh3 *local_78;
  FMeshConnectedComponents *local_70;
  ForAnyElementType *local_68;
  TArray<UE::Geometry::FDynamicMesh3_const_*,TSizedDefaultAllocator<32>_> *local_60;
  TFunction<bool___cdecl(int,int)> local_58;
  
  iVar13 = 0;
  local_1b8.BodySetup.WeakPtr.ObjectIndex = 0;
  local_1b8.BodySetup.WeakPtr.ObjectSerialNumber = 0;
  local_1b8.SourceComponent.WeakPtr.ObjectIndex = 0;
  local_1b8.SourceComponent.WeakPtr.ObjectSerialNumber = 0;
  local_1b8.SourceStaticMesh.WeakPtr.ObjectIndex = 0;
  local_1b8.SourceStaticMesh.WeakPtr.ObjectSerialNumber = 0;
  local_1b8.Geometry.Spheres.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.Geometry.Spheres.ArrayNum = 0;
  local_1b8.Geometry.Spheres.ArrayMax = 0;
  local_1b8.ExternalScale3D.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_1b8.ExternalScale3D.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_1b8.Geometry.Boxes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.ExternalScale3D.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_1b8.Geometry.Boxes.ArrayNum = 0;
  local_1b8.Geometry.Boxes.ArrayMax = 0;
  local_1b8.Geometry.Capsules.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.Geometry.Capsules.ArrayNum = 0;
  local_1b8.Geometry.Capsules.ArrayMax = 0;
  local_1b8.Geometry.Convexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.Geometry.Convexes.ArrayNum = 0;
  local_1b8.Geometry.Convexes.ArrayMax = 0;
  local_1b8.Geometry.LevelSets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.Geometry.LevelSets.ArrayNum = 0;
  local_1b8.Geometry.LevelSets.ArrayMax = 0;
  local_1b8.AggGeom.SphereElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.AggGeom.SphereElems.ArrayNum = 0;
  local_1b8.AggGeom.SphereElems.ArrayMax = 0;
  local_1b8.AggGeom.BoxElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.AggGeom.BoxElems.ArrayNum = 0;
  local_1b8.AggGeom.BoxElems.ArrayMax = 0;
  local_1b8.AggGeom.SphylElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.AggGeom.SphylElems.ArrayNum = 0;
  local_1b8.AggGeom.SphylElems.ArrayMax = 0;
  local_1b8.AggGeom.ConvexElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.AggGeom.ConvexElems.ArrayNum = 0;
  local_1b8.AggGeom.ConvexElems.ArrayMax = 0;
  local_1b8.AggGeom.TaperedCapsuleElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.AggGeom.TaperedCapsuleElems.ArrayNum = 0;
  local_1b8.AggGeom.TaperedCapsuleElems.ArrayMax = 0;
  local_1b8.AggGeom.LevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.AggGeom.LevelSetElems.ArrayNum = 0;
  local_1b8.AggGeom.LevelSetElems.ArrayMax = 0;
  local_1b8.AggGeom.SkinnedLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.AggGeom.SkinnedLevelSetElems.ArrayNum = 0;
  local_1b8.AggGeom.SkinnedLevelSetElems.ArrayMax = 0;
  local_1b8.AggGeom.MLLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.AggGeom.MLLevelSetElems.ArrayNum = 0;
  local_1b8.AggGeom.MLLevelSetElems.ArrayMax = 0;
  local_1b8.AggGeom.SkinnedTriangleMeshElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  local_1b8.AggGeom.SkinnedTriangleMeshElems.ArrayNum = 0;
  local_1b8.AggGeom.SkinnedTriangleMeshElems.ArrayMax = 0;
  local_1b8.AggGeom.RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  local_1b8.AggGeom.RenderInfoLock.State = (atomic<unsigned_char>)0x0;
  local_278.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_278.Components.Array.ArrayNum = 0;
  local_278.Components.Array.ArrayMax = 0;
  local_58._0_8_ = 0;
  local_58._40_8_ = 0;
  local_278.Mesh = param_1;
  UE::Geometry::FMeshConnectedComponents::FindConnectedTriangles(&local_278,&local_58);
  uVar9 = local_278.Components.Array._8_8_;
  iVar12 = local_278.Components.Array.ArrayNum;
  lVar17 = (longlong)local_278.Components.Array.ArrayNum;
  local_260.Data = (FScriptContainerElement *)0x0;
  local_258 = 0;
  local_288.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_288.ArrayNum = 0;
  local_288.ArrayMax = 0;
  if (local_278.Components.Array.ArrayNum == 1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_288.AllocatorInstance,&local_288.ArrayMax);
    local_288.ArrayNum = iVar12 + 1;
    *(FDynamicMesh3 **)(local_288.AllocatorInstance.Data + (longlong)iVar12 * 8) = param_1;
  }
  else {
    if (local_278.Components.Array.ArrayNum < 1) {
      if (local_278.Components.Array.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(local_278.Components.Array._8_8_ & 0xffffffff);
      }
    }
    else {
      iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x230,8,local_278.Components.Array.ArrayNum,&local_260,(int *)&local_258,
                          (int *)((longlong)&local_258 + 4));
      DefaultConstructItems<UE::Geometry::FDynamicMesh3,int>
                (local_260.Data + (longlong)iVar13 * 0x230,iVar12);
      iVar13 = local_288.ArrayNum;
    }
    if (iVar13 < iVar12) {
      iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,8,iVar12 - iVar13,&local_288.AllocatorInstance,&local_288.ArrayNum,
                          &local_288.ArrayMax);
      memset(local_288.AllocatorInstance.Data + (longlong)iVar14 * 8,0,
             (longlong)(iVar12 - iVar13) << 3);
    }
    else {
      if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar9 & 0xffffffff);
      }
      if (iVar12 < iVar13) {
        uVar15 = iVar13 - iVar12;
        if ((int)(uVar15 | iVar12) < 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             );
          if (bVar11) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar13 = local_288.ArrayNum;
        }
        if (uVar15 != 0) {
          iVar14 = (iVar13 - iVar12) - uVar15;
          if (iVar14 != 0) {
            memmove(local_288.AllocatorInstance.Data + lVar17 * 8,
                    local_288.AllocatorInstance.Data + lVar17 * 8 + (longlong)(int)uVar15 * 8,
                    (longlong)iVar14 << 3);
            iVar13 = local_288.ArrayNum;
          }
          local_288.ArrayNum = iVar13 - uVar15;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&local_288.AllocatorInstance,iVar13 - uVar15,&local_288.ArrayMax);
        }
      }
    }
    local_70 = &local_278;
    local_68 = &local_260;
    local_98.DataPtr = (void **)0x0;
    local_60 = &local_288;
    local_98.ArrayNum = 0;
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`UELocal::ComputeCollisionFromMesh'::__l7::<lambda_1>,void,int>::
               Call;
    local_80 = &local_78;
    local_78 = param_1;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",iVar12,1,(TFunctionRef<void___cdecl(int)> *)&local_88,local_res8,
               None,&local_98);
  }
  local_248[0] = true;
  local_248[1] = true;
  local_248[2] = true;
  local_248[3] = true;
  local_248._8_8_ = 0.0;
  local_248._24_8_ = __real_3ff0000000000000;
  local_248._40_8_ = __real_3ff0000000000000;
  local_1f0 = ___xmm_40240000000000004008000000000000;
  dStack_1e8 = _UNK_1529c4838;
  local_248[0x10] = true;
  local_248._20_4_ = 0x32;
  local_248[0x20] = false;
  local_248._48_4_ = 1;
  local_248[0x34] = true;
  local_248._56_4_ = 0.5;
  uStack_200 = _UNK_15076b668;
  local_248._64_8_ = ___xmm_3fb999999999999a0000000000000000;
  local_1f8 = false;
  local_1e0._0_1_ = true;
  local_1e0._1_1_ = false;
  local_1dc = 10;
  local_1d8.Data = (FScriptContainerElement *)0x0;
  local_1d0._0_4_ = 0;
  local_1d0._4_4_ = 0;
  local_1c8.Data = (FScriptContainerElement *)0x0;
  local_1c0._0_4_ = 0;
  local_1c0._4_4_ = 0;
  UE::Geometry::FMeshSimpleShapeApproximation::InitializeSourceMeshes
            ((FMeshSimpleShapeApproximation *)local_248,&local_288);
  uVar10 = local_248._0_4_;
  uVar5 = param_3->bAutoDetectSpheres;
  uVar6 = param_3->bAutoDetectBoxes;
  uVar7 = param_3->bAutoDetectCapsules;
  local_248[2] = uVar7;
  local_248[1] = uVar6;
  local_248[0] = uVar5;
  local_248._8_8_ = (undefined8)param_3->MinThickness;
  local_248[3] = SUB41(uVar10,3);
  switch(param_3->Method) {
  case AlignedBoxes:
    UE::Geometry::FMeshSimpleShapeApproximation::Generate_AlignedBoxes
              ((FMeshSimpleShapeApproximation *)local_248,&local_1b8.Geometry);
    break;
  case OrientedBoxes:
    UE::Geometry::FMeshSimpleShapeApproximation::Generate_OrientedBoxes
              ((FMeshSimpleShapeApproximation *)local_248,&local_1b8.Geometry,(FProgressCancel *)0x0
              );
    break;
  case MinimalSpheres:
    UE::Geometry::FMeshSimpleShapeApproximation::Generate_MinimalSpheres
              ((FMeshSimpleShapeApproximation *)local_248,&local_1b8.Geometry);
    break;
  case Capsules:
    UE::Geometry::FMeshSimpleShapeApproximation::Generate_Capsules
              ((FMeshSimpleShapeApproximation *)local_248,&local_1b8.Geometry);
    break;
  case ConvexHulls:
    local_248[0x10] = param_3->bSimplifyHulls;
    local_248._20_4_ = param_3->ConvexHullTargetFaceCount;
    if (param_3->MaxConvexHullsPerMesh < 2) {
      UE::Geometry::FMeshSimpleShapeApproximation::Generate_ConvexHulls
                ((FMeshSimpleShapeApproximation *)local_248,&local_1b8.Geometry,
                 (FProgressCancel *)0x0);
    }
    else {
      local_248._56_4_ = param_3->ConvexDecompositionSearchFactor;
      uVar1 = param_3->ConvexDecompositionErrorTolerance;
      uVar2 = param_3->ConvexDecompositionMinPartThickness;
      unique0x10000346 = SUB84((double)(float)uVar2,0);
      local_248._64_8_ = (double)(float)uVar1;
      unique0x1000034a = (int)((ulonglong)(double)(float)uVar2 >> 0x20);
      local_248._48_4_ = param_3->MaxConvexHullsPerMesh;
      UE::Geometry::FMeshSimpleShapeApproximation::Generate_ConvexHullDecompositions
                ((FMeshSimpleShapeApproximation *)local_248,&local_1b8.Geometry,
                 (FProgressCancel *)0x0);
    }
    break;
  case SweptHulls:
    local_248[0x10] = param_3->bSimplifyHulls;
    local_248._24_8_ = (undefined8)param_3->SweptHullSimplifyTolerance;
    UE::Geometry::FMeshSimpleShapeApproximation::Generate_ProjectedHulls
              ((FMeshSimpleShapeApproximation *)local_248,&local_1b8.Geometry,
               (uint)param_3->SweptHullAxis);
    break;
  case MinVolumeShapes:
    UE::Geometry::FMeshSimpleShapeApproximation::Generate_MinVolume
              ((FMeshSimpleShapeApproximation *)local_248,&local_1b8.Geometry);
    break;
  case LevelSets:
    UE::Geometry::FMeshSimpleShapeApproximation::Generate_LevelSets
              ((FMeshSimpleShapeApproximation *)local_248,&local_1b8.Geometry,(FProgressCancel *)0x0
              );
  }
  if ((param_3->bRemoveFullyContainedShapes != false) && (1 < local_278.Components.Array.ArrayNum))
  {
    UE::Geometry::FSimpleShapeSet3d::RemoveContainedGeometry(&local_1b8.Geometry);
  }
  iVar12 = param_3->MaxShapeCount;
  if ((0 < iVar12) && (iVar12 < local_278.Components.Array.ArrayNum)) {
    UE::Geometry::FSimpleShapeSet3d::FilterByVolume(&local_1b8.Geometry,iVar12);
  }
  FPhysicsDataCollection::CopyGeometryToAggregate(&local_1b8);
  FKAggregateGeom::FreeRenderInfo(param_2);
  FKAggregateGeom::CloneAgg(param_2,&local_1b8.AggGeom);
  if (local_1c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data);
  }
  if (local_1d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data);
  }
  if (local_288.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::FDynamicMesh3,int>((FDynamicMesh3 *)local_260.Data,(int)local_258);
  if ((FDynamicMesh3 *)local_260.Data != (FDynamicMesh3 *)0x0) {
    FMemory::Free(local_260.Data);
  }
  FVar16.Data = local_278.Components.Array.AllocatorInstance.Data;
  for (iVar12 = local_278.Components.Array.ArrayNum; iVar12 != 0; iVar12 = iVar12 + -1) {
    puVar3 = *(undefined8 **)FVar16.Data;
    if (puVar3 != (undefined8 *)0x0) {
      if ((void *)*puVar3 != (void *)0x0) {
        FMemory::Free((void *)*puVar3);
      }
      ::operator_delete(puVar3,0x10);
    }
    FVar16.Data = FVar16.Data + 8;
  }
  uVar8 = (ulonglong)local_278.Components.Array._8_8_ >> 0x20;
  local_278.Components.Array._8_8_ = local_278.Components.Array._8_8_ & 0xffffffff00000000;
  if ((int)uVar8 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&local_278.Components,0,
               &local_278.Components.Array.ArrayMax);
  }
  if (local_278.Components.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Components.Array.AllocatorInstance.Data);
  }
  DestructItems<FKSkinnedTriangleMeshElem,int>
            ((FKSkinnedTriangleMeshElem *)
             local_1b8.AggGeom.SkinnedTriangleMeshElems.AllocatorInstance.Data,
             local_1b8.AggGeom.SkinnedTriangleMeshElems.ArrayNum);
  if ((FKSkinnedTriangleMeshElem *)local_1b8.AggGeom.SkinnedTriangleMeshElems.AllocatorInstance.Data
      != (FKSkinnedTriangleMeshElem *)0x0) {
    FMemory::Free(local_1b8.AggGeom.SkinnedTriangleMeshElems.AllocatorInstance.Data);
  }
  DestructItems<FKMLLevelSetElem,int>
            ((FKMLLevelSetElem *)local_1b8.AggGeom.MLLevelSetElems.AllocatorInstance.Data,
             local_1b8.AggGeom.MLLevelSetElems.ArrayNum);
  if ((FKMLLevelSetElem *)local_1b8.AggGeom.MLLevelSetElems.AllocatorInstance.Data !=
      (FKMLLevelSetElem *)0x0) {
    FMemory::Free(local_1b8.AggGeom.MLLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKSkinnedLevelSetElem,int>
            ((FKSkinnedLevelSetElem *)local_1b8.AggGeom.SkinnedLevelSetElems.AllocatorInstance.Data,
             local_1b8.AggGeom.SkinnedLevelSetElems.ArrayNum);
  if ((FKSkinnedLevelSetElem *)local_1b8.AggGeom.SkinnedLevelSetElems.AllocatorInstance.Data !=
      (FKSkinnedLevelSetElem *)0x0) {
    FMemory::Free(local_1b8.AggGeom.SkinnedLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKLevelSetElem,int>
            ((FKLevelSetElem *)local_1b8.AggGeom.LevelSetElems.AllocatorInstance.Data,
             local_1b8.AggGeom.LevelSetElems.ArrayNum);
  if ((FKLevelSetElem *)local_1b8.AggGeom.LevelSetElems.AllocatorInstance.Data !=
      (FKLevelSetElem *)0x0) {
    FMemory::Free(local_1b8.AggGeom.LevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKTaperedCapsuleElem,int>
            ((FKTaperedCapsuleElem *)local_1b8.AggGeom.TaperedCapsuleElems.AllocatorInstance.Data,
             local_1b8.AggGeom.TaperedCapsuleElems.ArrayNum);
  if ((FKTaperedCapsuleElem *)local_1b8.AggGeom.TaperedCapsuleElems.AllocatorInstance.Data !=
      (FKTaperedCapsuleElem *)0x0) {
    FMemory::Free(local_1b8.AggGeom.TaperedCapsuleElems.AllocatorInstance.Data);
  }
  DestructItems<FKConvexElem,int>
            ((FKConvexElem *)local_1b8.AggGeom.ConvexElems.AllocatorInstance.Data,
             local_1b8.AggGeom.ConvexElems.ArrayNum);
  if ((FKConvexElem *)local_1b8.AggGeom.ConvexElems.AllocatorInstance.Data != (FKConvexElem *)0x0) {
    FMemory::Free(local_1b8.AggGeom.ConvexElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphylElem,int>
            ((FKSphylElem *)local_1b8.AggGeom.SphylElems.AllocatorInstance.Data,
             local_1b8.AggGeom.SphylElems.ArrayNum);
  if ((FKSphylElem *)local_1b8.AggGeom.SphylElems.AllocatorInstance.Data != (FKSphylElem *)0x0) {
    FMemory::Free(local_1b8.AggGeom.SphylElems.AllocatorInstance.Data);
  }
  DestructItems<FKBoxElem,int>
            ((FKBoxElem *)local_1b8.AggGeom.BoxElems.AllocatorInstance.Data,
             local_1b8.AggGeom.BoxElems.ArrayNum);
  if ((FKBoxElem *)local_1b8.AggGeom.BoxElems.AllocatorInstance.Data != (FKBoxElem *)0x0) {
    FMemory::Free(local_1b8.AggGeom.BoxElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphereElem,int>
            ((FKSphereElem *)local_1b8.AggGeom.SphereElems.AllocatorInstance.Data,
             local_1b8.AggGeom.SphereElems.ArrayNum);
  if ((FKSphereElem *)local_1b8.AggGeom.SphereElems.AllocatorInstance.Data != (FKSphereElem *)0x0) {
    FMemory::Free(local_1b8.AggGeom.SphereElems.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::FLevelSetShape3d,int>
            ((FLevelSetShape3d *)local_1b8.Geometry.LevelSets.AllocatorInstance.Data,
             local_1b8.Geometry.LevelSets.ArrayNum);
  if ((FLevelSetShape3d *)local_1b8.Geometry.LevelSets.AllocatorInstance.Data !=
      (FLevelSetShape3d *)0x0) {
    FMemory::Free(local_1b8.Geometry.LevelSets.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::FConvexShape3d,int>
            ((FConvexShape3d *)local_1b8.Geometry.Convexes.AllocatorInstance.Data,
             local_1b8.Geometry.Convexes.ArrayNum);
  if (local_1b8.Geometry.Convexes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Geometry.Convexes.AllocatorInstance.Data);
  }
  if (local_1b8.Geometry.Capsules.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Geometry.Capsules.AllocatorInstance.Data);
  }
  if (local_1b8.Geometry.Boxes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Geometry.Boxes.AllocatorInstance.Data);
  }
  if (local_1b8.Geometry.Spheres.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Geometry.Spheres.AllocatorInstance.Data);
  }
  return;
}

// ConvertNegativeSpaceOptions @ 14cdcea90

FNegativeSpaceSampleSettings * __cdecl
UELocal::ConvertNegativeSpaceOptions
          (FNegativeSpaceSampleSettings *__return_storage_ptr__,
          FComputeNegativeSpaceOptions *param_1)

{
  ENegativeSpaceSampleMethod EVar1;
  ESampleMethod EVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  UE::Geometry::FNegativeSpaceSampleSettings::FNegativeSpaceSampleSettings(__return_storage_ptr__);
  __return_storage_ptr__->TargetNumSamples = param_1->TargetNumSamples;
  __return_storage_ptr__->MinRadius = param_1->MinRadius;
  __return_storage_ptr__->ReduceRadiusMargin = param_1->NegativeSpaceTolerance;
  __return_storage_ptr__->MinSpacing = param_1->MinSampleSpacing;
  EVar1 = param_1->SampleMethod;
  if (EVar1 != Uniform) {
    if (EVar1 == VoxelSearch) {
      EVar2 = VoxelSearch;
      goto LAB_14cdceade;
    }
    if (EVar1 == NavigableVoxelSearch) {
      EVar2 = NavigableVoxelSearch;
      goto LAB_14cdceade;
    }
  }
  EVar2 = Uniform;
LAB_14cdceade:
  __return_storage_ptr__->SampleMethod = EVar2;
  __return_storage_ptr__->bRequireSearchSampleCoverage = param_1->bRequireSearchSampleCoverage;
  __return_storage_ptr__->bOnlyConnectedToHull = param_1->bOnlyConnectedToHull;
  __return_storage_ptr__->MaxVoxelsPerDim = param_1->MaxVoxelsPerDim;
  ApplyNegativeSpaceToleranceDirectionalScales
            (__return_storage_ptr__,&param_1->ToleranceDirectionalScales);
  dVar5 = __return_storage_ptr__->MinSpacing;
  iVar4 = __return_storage_ptr__->TargetNumSamples;
  if (__return_storage_ptr__->TargetNumSamples < 1) {
    iVar4 = 1;
  }
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  __return_storage_ptr__->TargetNumSamples = iVar4;
  iVar4 = 0x50a;
  if (__return_storage_ptr__->MaxVoxelsPerDim < 0x50a) {
    iVar4 = __return_storage_ptr__->MaxVoxelsPerDim;
  }
  __return_storage_ptr__->MinSpacing = dVar5;
  auVar6._0_8_ = __return_storage_ptr__->ReduceRadiusMargin;
  auVar6._8_8_ = __return_storage_ptr__->MinRadius;
  iVar3 = 4;
  if (4 < iVar4) {
    iVar3 = iVar4;
  }
  __return_storage_ptr__->MaxVoxelsPerDim = iVar3;
  auVar6 = maxpd(auVar6,ZEXT816(0));
  __return_storage_ptr__->ReduceRadiusMargin = (double)auVar6._0_8_;
  __return_storage_ptr__->MinRadius = (double)auVar6._8_8_;
  dVar5 = __return_storage_ptr__->MinCustomMarginScale;
  if (__real_3ff0000000000000 <= __return_storage_ptr__->MinCustomMarginScale) {
    dVar5 = __real_3ff0000000000000;
  }
  if (dVar5 <= __real_3fb999999999999a) {
    dVar5 = __real_3fb999999999999a;
  }
  __return_storage_ptr__->MinCustomMarginScale = dVar5;
  return __return_storage_ptr__;
}

// CopyMeshFromSkeletalMesh_RenderData @ 14cdd0ad0

bool __cdecl
UELocal::CopyMeshFromSkeletalMesh_RenderData
          (USkeletalMesh *param_1,FGeometryScriptCopyMeshFromAssetOptions param_2,int param_3,
          UDynamicMesh *param_4,UGeometryScriptDebug *param_5)

{
  FSkeletalMeshLODRenderData *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong *plVar6;
  FText *pFVar7;
  FReferenceSkeleton *pFVar8;
  bool bStackX_11;
  ConversionOptions local_278;
  FText local_258;
  FText local_248;
  FDynamicMesh3 local_238;
  
  plVar6 = (longlong *)(**(code **)(param_1->_padding_ + 0x398))();
  if (plVar6 == (longlong *)0x0) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_248,L"UGeometryScriptLibrary_MeshAssetFunctions",
                        L"CopyMeshFromSkeletalMesh_RenderDataNotAvailable",
                        L"CopyMeshFromSkeletalMesh: Renderdata is not available");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar7);
    local_258.TextData.Reference = local_248.TextData.Reference;
  }
  else {
    if (param_3 <= (int)plVar6[1] + -1) {
      uVar5 = 0;
      if (param_3 < (int)plVar6[1]) {
        uVar5 = (uint)~param_3 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = *(FSkeletalMeshLODRenderData **)(*plVar6 + (longlong)param_3 * 8);
      UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_238);
      bStackX_11 = param_2.bRequestTangents;
      local_278.bWantTangents = bStackX_11;
      local_278.BuildScale.field0_0x0._s_0.X =
           UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      local_278.BuildScale.field0_0x0._s_0.Y =
           UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      local_278.bWantNormals = true;
      local_278.BuildScale.field0_0x0._s_0.Z =
           UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      local_278.bWantUVs = true;
      local_278.bWantVertexColors = true;
      local_278.bWantMaterialIDs = true;
      local_278.bWantSkinWeights = true;
      pFVar8 = (FReferenceSkeleton *)(**(code **)(param_1->_padding_ + 800))(param_1);
      UE::Geometry::FSkeletalMeshLODRenderDataToDynamicMesh::Convert
                (pFVar1,pFVar8,&local_278,&local_238);
      UDynamicMesh::SetMesh(param_4,&local_238);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_238);
      return true;
    }
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_258,L"UGeometryScriptLibrary_MeshAssetFunctions",
                        L"CopyMeshFromSkeletalMesh_RenderDataLDONotAvailable",
                        L"CopyMeshFromSkeletalMesh: Renderdata for specified LOD is not available");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar7);
  }
  if (local_258.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_258.TextData.Reference + 0x10))();
  }
  return false;
}

// UpdateStaticMeshCollision @ 14cde9850

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UELocal::UpdateStaticMeshCollision
          (UStaticMesh *param_1,TFunctionRef<bool___cdecl(UStaticMesh_*,UBodySetup_*)> *param_2,
          bool param_3,bool param_4)

{
  int iVar1;
  TObjectPtr<UBodySetup>_u_0 TVar2;
  UStaticMesh *pUVar3;
  code *pcVar4;
  FUObjectItem *pFVar5;
  bool bVar6;
  char cVar7;
  UClass *pUVar8;
  FUObjectItem *pFVar9;
  UClass *pUVar10;
  UObjectBase *pUVar11;
  UActorComponent *this;
  TObjectPtr<UBodySetup>_u_0 local_res8;
  UStaticMesh *local_48;
  TIterator local_40;
  UClass *local_28;
  EObjectFlags local_20;
  EInternalObjectFlags local_1c;
  
  if (param_1 == (UStaticMesh *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4094154188815073442>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\CollisionFunctions.cpp"
                       ,0xa2,"StaticMeshAsset");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    TVar2 = (TObjectPtr<UBodySetup>_u_0)(param_1->BodySetup).field0_0x0.DebugPtr;
    local_res8 = TVar2;
    local_48 = param_1;
    cVar7 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_48,&local_res8);
    if (cVar7 != '\0') {
      if (TVar2.DebugPtr != (UBodySetup *)0x0) {
        (**(code **)((TVar2.DebugPtr)->_padding_ + 0x2b0))(TVar2.DebugPtr);
      }
      UStaticMesh::RecreateNavCollision(param_1);
      pUVar8 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
      local_40.Index = -1;
      local_40.Array = &GUObjectArray;
      local_40.CurrentObject = (FUObjectItem *)0x0;
      FUObjectArray::TIterator::Advance(&local_40);
      local_20 = RF_NoFlags;
      local_28 = pUVar8;
      local_1c = UE::GetAsyncLoadingInternalFlagsExclusion();
      local_1c = local_1c | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted);
      if ((pUVar8 == (UClass *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Class",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectIterator.h"
                             ,0x70,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)&(local_40.Array)->ObjObjectsCritical);
      do {
        pFVar5 = local_40.CurrentObject;
        if (local_40.CurrentObject == (FUObjectItem *)0x0) {
          pUVar11 = (UObjectBase *)0x0;
        }
        else {
          pUVar11 = ((local_40.CurrentObject)->field1_0x8).Object;
        }
        if (((local_20 & pUVar11->ObjectFlags) == RF_NoFlags) &&
           (pFVar9 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar11->InternalIndex),
           (local_1c &
           (EInternalObjectFlags)((ulonglong)(pFVar9->field0_0x0).FlagsAndRefCount >> 0x20)) ==
           Borrowed)) {
          pUVar10 = Z_Construct_UClass_UObject_NoRegister();
          if (pUVar8 == pUVar10) break;
          pUVar10 = (pUVar11->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
          iVar1 = (int)pUVar8->_padding_;
          if ((iVar1 <= (int)pUVar10->_padding_) &&
             ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar1 * 8) ==
              &pUVar8->_padding_)) break;
        }
        bVar6 = FUObjectArray::TIterator::Advance(&local_40);
        pUVar8 = local_28;
        pFVar5 = local_40.CurrentObject;
      } while (bVar6);
joined_r0x00014cde99f7:
      if (pFVar5 != (FUObjectItem *)0x0) {
        this = (UActorComponent *)(pFVar5->field1_0x8).Object;
        if (this == (UActorComponent *)0x0) {
LAB_14cde9a29:
          this = (UActorComponent *)0x0;
        }
        else {
          pUVar8 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
          iVar1 = (int)pUVar8->_padding_;
          if ((*(int *)(this->_padding_ + 0x38) < iVar1) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar8->_padding_)) goto LAB_14cde9a29;
        }
        pUVar3 = (UStaticMesh *)this[7].PrimaryComponentTick.Target;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar3 != (UStaticMesh *)0x0) goto LAB_14cde9a4f;
        }
        else if (pUVar3 != (UStaticMesh *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_14cde9a4f:
          if ((pUVar3 == param_1) && (this->bPhysicsStateCreated != '\0')) {
            UActorComponent::RecreatePhysicsState(this);
          }
        }
LAB_14cde9a70:
        do {
          do {
            bVar6 = FUObjectArray::TIterator::Advance(&local_40);
            pFVar5 = local_40.CurrentObject;
            if (!bVar6) goto joined_r0x00014cde99f7;
            if (local_40.CurrentObject == (FUObjectItem *)0x0) {
              pUVar11 = (UObjectBase *)0x0;
            }
            else {
              pUVar11 = ((local_40.CurrentObject)->field1_0x8).Object;
            }
          } while ((local_20 & pUVar11->ObjectFlags) != RF_NoFlags);
          pUVar8 = Z_Construct_UClass_UObject_NoRegister();
          if (local_28 != pUVar8) {
            pUVar8 = (pUVar11->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
            iVar1 = (int)local_28->_padding_;
            if (((int)pUVar8->_padding_ < iVar1) ||
               ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar1 * 8) !=
                &local_28->_padding_)) goto LAB_14cde9a70;
          }
          pFVar9 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar11->InternalIndex);
        } while ((local_1c &
                 (EInternalObjectFlags)((ulonglong)(pFVar9->field0_0x0).FlagsAndRefCount >> 0x20))
                 != Borrowed);
        goto joined_r0x00014cde99f7;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&(local_40.Array)->ObjObjectsCritical);
      UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)param_1);
    }
  }
  return;
}

// operator() @ 14ce49e80

void __thiscall `UELocal::ApplyUVTransform'::__l11::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  uint uVar2;
  int local_res10 [6];
  int local_18;
  undefined4 local_14;
  undefined4 local_10 [2];
  
  uVar2 = param_1 * 3;
  lVar1 = *(longlong *)(*(longlong *)this + 0x78);
  local_18 = *(int *)(*(longlong *)(lVar1 + (ulonglong)(uVar2 >> 9) * 8) +
                     (ulonglong)(uVar2 & 0x1ff) * 4);
  if (-1 < local_18) {
    local_14 = *(undefined4 *)
                (*(longlong *)(lVar1 + (ulonglong)(uVar2 + 1 >> 9) * 8) +
                (ulonglong)(uVar2 + 1 & 0x1ff) * 4);
    local_10[0] = *(undefined4 *)
                   (*(longlong *)(lVar1 + (ulonglong)(uVar2 + 2 >> 9) * 8) +
                   (ulonglong)(uVar2 + 2 & 0x1ff) * 4);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 8),
               local_res10,(bool *)&local_18);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 8),
               local_res10,(bool *)&local_14);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)((longlong)this + 8),
               local_res10,(bool *)local_10);
  }
  return;
}

// ApplyPolygroupModeToNewTriangles @ 14ce5b730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UELocal::ApplyPolygroupModeToNewTriangles
          (FDynamicMesh3 *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          FGeometryScriptMeshEditPolygroupOptions param_3)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  ForElementType<FSetElementId> FVar8;
  uint *puVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  int iStackX_1c;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [4];
  uint local_b4;
  uint local_b0;
  undefined1 local_ac [4];
  uint *local_a8;
  uint *local_a0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  if (param_3.GroupMode != PreserveExisting) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_d8;
    pFVar10 = (param_2->AllocatorInstance).Data;
    iVar4 = param_2->ArrayNum;
    pFVar1 = pFVar10 + (longlong)iVar4 * 4;
    if (param_3.GroupMode == SetConstant) {
      iStackX_1c = param_3.ConstantGroup;
      while( true ) {
        if (param_2->ArrayNum != iVar4) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_b8);
        }
        if (pFVar10 == pFVar1) break;
        if ((param_1->TriangleGroups).bIsSet != false) {
          *(int *)(*(longlong *)
                    ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                    (ulonglong)(*(uint *)pFVar10 >> 9) * 8) +
                  (ulonglong)(*(uint *)pFVar10 & 0x1ff) * 4) = iStackX_1c;
          iVar7 = iStackX_1c + 1;
          if (iStackX_1c + 1 < param_1->GroupIDCounter) {
            iVar7 = param_1->GroupIDCounter;
          }
          param_1->GroupIDCounter = iVar7;
        }
        pFVar10 = pFVar10 + 4;
      }
    }
    else {
      local_98.Elements._0_8_ = 0;
      local_98.Elements._8_8_ = 0;
      local_98.Elements._32_8_ = 0;
      uVar12 = 0;
      local_98.Elements._40_4_ = 0;
      local_98.Elements._52_4_ = 0;
      local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_98.HashSize = 0;
      local_98.Elements._44_4_ = 0x80;
      local_98.Elements._48_4_ = 0xffffffff;
      while( true ) {
        if (param_2->ArrayNum != iVar4) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_b8);
        }
        if (pFVar10 == pFVar1) break;
        cVar3 = (param_1->TriangleGroups).bIsSet;
        uVar5 = *(uint *)pFVar10;
        if ((bool)cVar3 == false) {
          local_b0 = 0xffffffff;
        }
        else {
          local_b0 = uVar12;
          if ((-1 < (int)uVar5) &&
             ((int)uVar5 <
              (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                   (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) {
            lVar2 = (ulonglong)(uVar5 >> 9) * 8;
            if ((ushort)(*(short *)(*(longlong *)
                                     ((param_1->TriangleRefCounts).RefCounts.Blocks.
                                      AllocatorInstance.Data + lVar2) +
                                   (ulonglong)(uVar5 & 0x1ff) * 2) - 1U) < 0xfffe) {
              local_b0 = *(uint *)(*(longlong *)
                                    ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.
                                     Data + lVar2) + (ulonglong)(uVar5 & 0x1ff) * 4);
            }
          }
        }
        if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
          FVar8 = (ForElementType<FSetElementId>)&local_98.Hash;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar8 = local_98.Hash.SecondaryData;
          }
          uVar11 = *(uint *)((longlong)FVar8 + (ulonglong)(local_98.HashSize - 1U & local_b0) * 4);
          while (uVar11 != 0xffffffff) {
            puVar9 = (uint *)((longlong)(int)uVar11 * 0x10 + local_98.Elements._0_8_);
            if (*puVar9 == local_b0) {
              puVar6 = puVar9 + 1;
              if (puVar9 == (uint *)0x0) {
                puVar6 = (uint *)0x0;
              }
              if (puVar6 != (uint *)0x0) {
                uVar11 = *puVar6;
                goto LAB_14ce5b93d;
              }
              break;
            }
            uVar11 = puVar9[2];
          }
        }
        local_b4 = param_1->GroupIDCounter;
        param_1->GroupIDCounter = local_b4 + 1;
        local_a8 = &local_b0;
        local_a0 = &local_b4;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,int_const_&>_>
                  (&local_98,(TPairInitializer<int_const_&,int_const_&> *)local_ac,
                   (bool *)(local_ac + 4));
        cVar3 = (param_1->TriangleGroups).bIsSet;
        uVar11 = local_b4;
LAB_14ce5b93d:
        if (cVar3 != '\0') {
          *(uint *)(*(longlong *)
                     ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 4) = uVar11;
          iVar7 = uVar11 + 1;
          if ((int)(uVar11 + 1) < param_1->GroupIDCounter) {
            iVar7 = param_1->GroupIDCounter;
          }
          param_1->GroupIDCounter = iVar7;
        }
        pFVar10 = pFVar10 + 4;
      }
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
    }
  }
  return;
}

// ApplyUVTransform @ 14ce5c610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UELocal::ApplyUVTransform
          (FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *param_2,
          FGeometryScriptMeshSelection *param_3,
          TFunctionRef<UE::Math::TVector2<float>___cdecl(UE::Math::TVector2<float>)> *param_4)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  code *pcVar2;
  TFunctionRef<UE::Math::TVector2<float>___cdecl(UE::Math::TVector2<float>)> *pTVar3;
  longlong *plVar4;
  bool bVar5;
  byte bVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_198 [32];
  undefined1 local_178 [8];
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 local_164;
  TFunctionRef<UE::Math::TVector2<float>___cdecl(UE::Math::TVector2<float>)> *local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 local_14c;
  longlong *local_148;
  uint uStack_140;
  uint uStack_13c;
  TBitArray<FDefaultBitArrayAllocator> *local_138;
  undefined4 uStack_130;
  uint uStack_12c;
  uint local_128;
  uint uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  int local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_d0;
  undefined1 *local_c8;
  code *local_c0;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> **local_b8;
  undefined1 local_a8 [32];
  TBitArray<FDefaultBitArrayAllocator> *local_88;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  void *local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
  local_58 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_160 = param_4;
  bVar5 = FGeometryScriptMeshSelection::IsEmpty(param_3);
  uVar17 = 0;
  if (!bVar5) {
    local_c8 = local_a8;
    local_a8._0_8_ = 0;
    local_b8 = &local_d0;
    local_a8._8_8_ = 0;
    local_88 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
    local_c0 = UE::Core::Private::Function::
               TFunctionRefCaller<`UELocal::ApplyUVTransform'::__l11::<lambda_1>,void,int>::Call;
    uVar14 = 0;
    local_80 = 0;
    local_7c = 0x80;
    local_78 = 0xffffffff;
    local_74 = 0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_d0 = param_2;
    FGeometryScriptMeshSelection::ProcessByTriangleID
              (param_3,param_1,(TFunctionRef<void___cdecl(int)> *)&local_c0,false);
    uVar16 = local_80;
    uStack_13c = 1;
    local_128 = 0;
    uStack_12c = local_128;
    if (local_80 != 0) {
      pTVar13 = pTVar1;
      if (local_88 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar13 = local_88;
      }
      uVar9 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
      uVar11 = uVar17;
      local_128 = 0;
      uVar14 = 0;
      while (uVar9 == 0) {
        iVar8 = (int)uVar17;
        local_128 = (int)uVar11 + 0x20;
        uVar11 = (ulonglong)local_128;
        uVar14 = iVar8 + 1;
        uVar17 = (ulonglong)uVar14;
        uStack_12c = local_80;
        if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
        goto LAB_14ce5c890;
        uVar9 = *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar8 * 4 + 4);
      }
      uStack_13c = -uVar9 & uVar9;
      uVar17 = (ulonglong)uStack_13c * 2 + 1;
      lVar7 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_118 = (int)lVar7;
      uStack_12c = local_118 + -1 + local_128;
      if ((int)local_80 < (int)uStack_12c) {
        uStack_12c = local_80;
      }
    }
LAB_14ce5c890:
    local_148 = (longlong *)local_a8;
    uVar9 = local_80 & 0xffffffe0;
    iStack_120 = local_a8._8_4_ - local_74;
    uStack_130 = 0xffffffff;
    TStack_f8.CurrentBitIndex = uStack_12c;
    TStack_f8.UnvisitedBitMask = 0xffffffff;
    TStack_f8._padding_ = CONCAT44(uStack_13c,uVar14);
    iVar8 = (int)local_80 >> 5;
    TStack_f8._28_4_ = uStack_12c;
    TStack_f8.BaseBitIndex = local_128;
    uStack_d8 = CONCAT44(uStack_11c,iStack_120);
    bVar6 = (byte)local_80;
    uStack_140 = uVar14;
    local_138 = pTVar1;
    uStack_124 = uStack_12c;
    local_100 = local_148;
    TStack_f8.Array = pTVar1;
    if (((int)local_80 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar3 = local_160;
    if (uVar16 != local_80) {
      pTVar13 = pTVar1;
      if (local_88 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar13 = local_88;
      }
      uVar14 = -1 << (bVar6 & 0x1f) &
               *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar8 * 4);
      while (uVar14 == 0) {
        lVar7 = (longlong)iVar8;
        uVar9 = uVar9 + 0x20;
        iVar8 = iVar8 + 1;
        uVar16 = local_80;
        if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
        goto LAB_14ce5c9a1;
        uVar14 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar7 * 4 + 4);
      }
      uVar17 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar16 = (int)lVar7 + -1 + uVar9;
      if ((int)local_80 < (int)uVar16) {
        uVar16 = local_80;
      }
    }
LAB_14ce5c9a1:
    while( true ) {
      plVar4 = local_100;
      if ((int)local_100[1] - *(int *)((longlong)local_100 + 0x34) != (int)uStack_d8) {
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_178);
      }
      if (((TStack_f8.CurrentBitIndex == uVar16) && (TStack_f8.Array == pTVar1)) &&
         (plVar4 == (longlong *)local_a8)) break;
      uVar14 = *(uint *)(*plVar4 + (longlong)TStack_f8.CurrentBitIndex * 0xc);
      uVar11 = (ulonglong)((uVar14 & 0x7fffffff) >> 8);
      uVar12 = (ulonglong)((uVar14 & 0x7fffffff) >> 8);
      uVar10 = (ulonglong)(uVar14 * 2 & 0x1ff);
      uVar17 = (ulonglong)(uVar14 * 2 + 1 & 0x1ff);
      local_158 = *(undefined4 *)
                   (*(longlong *)(*(longlong *)&param_2->field_0x48 + uVar11 * 8) + uVar10 * 4);
      uStack_154 = *(undefined4 *)
                    (*(longlong *)(*(longlong *)&param_2->field_0x48 + uVar12 * 8) + uVar17 * 4);
      local_108 = CONCAT44(uStack_154,local_158);
      (**(code **)pTVar3)(&local_150,*(undefined8 *)&pTVar3->field_0x8,&local_108);
      *(undefined4 *)(*(longlong *)(*(longlong *)&param_2->field_0x48 + uVar11 * 8) + uVar10 * 4) =
           local_150;
      TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
      *(undefined4 *)(*(longlong *)(*(longlong *)&param_2->field_0x48 + uVar12 * 8) + uVar17 * 4) =
           local_14c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
    }
    local_60 = 0;
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_a8);
    return;
  }
  uVar14 = *(int *)&param_2->field_0xc + *(int *)&param_2->field_0x8 * 0x200;
  if ((uVar14 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)&param_2->field_0x10 - 1U))) {
    uVar17 = 1;
    uVar16 = 1;
    if ((int)uVar14 < 2) goto joined_r0x00014ce5c6bd;
    do {
      uVar11 = (ulonglong)((uint)uVar17 & 0x1ff);
      lVar7 = (*(undefined8 **)&param_2->field_0x10)[uVar17 >> 9];
      if ((*(short *)(lVar7 + uVar11 * 2) != 0) && (*(short *)(lVar7 + uVar11 * 2) != -1)) break;
      uVar16 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar16;
    } while ((int)uVar16 < (int)uVar14);
  }
  uVar16 = (uint)uVar17;
joined_r0x00014ce5c6bd:
  do {
    if (uVar16 == uVar14) {
      return;
    }
    while( true ) {
      uVar16 = (uint)uVar17;
      uVar10 = (ulonglong)(uVar16 * 2 & 0x1ff);
      uVar15 = (ulonglong)((uVar16 & 0x7fffffff) >> 8);
      uVar11 = (ulonglong)(uVar16 * 2 + 1 & 0x1ff);
      uVar12 = (ulonglong)((uVar16 & 0x7fffffff) >> 8);
      local_170 = *(undefined4 *)
                   (*(longlong *)(*(longlong *)&param_2->field_0x48 + uVar15 * 8) + uVar10 * 4);
      uStack_16c = *(undefined4 *)
                    (*(longlong *)(*(longlong *)&param_2->field_0x48 + uVar12 * 8) + uVar11 * 4);
      local_110 = CONCAT44(uStack_16c,local_170);
      (**(code **)local_160)(&local_168,*(undefined8 *)&local_160->field_0x8,&local_110);
      uVar16 = uVar16 + 1;
      uVar17 = (ulonglong)uVar16;
      *(undefined4 *)(*(longlong *)(*(longlong *)&param_2->field_0x48 + uVar15 * 8) + uVar10 * 4) =
           local_168;
      *(undefined4 *)(*(longlong *)(*(longlong *)&param_2->field_0x48 + uVar12 * 8) + uVar11 * 4) =
           local_164;
      if ((int)uVar14 <= (int)uVar16) break;
      while( true ) {
        uVar11 = (ulonglong)((uint)uVar17 & 0x1ff);
        lVar7 = *(longlong *)(*(longlong *)&param_2->field_0x10 + (uVar17 >> 9) * 8);
        if ((*(short *)(lVar7 + uVar11 * 2) != 0) && (*(short *)(lVar7 + uVar11 * 2) != -1)) break;
        uVar16 = (uint)uVar17 + 1;
        uVar17 = (ulonglong)uVar16;
        if ((int)uVar14 <= (int)uVar16) goto joined_r0x00014ce5c6bd;
      }
    }
  } while( true );
}

