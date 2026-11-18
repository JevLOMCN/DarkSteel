// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 25

// operator() @ 14374a830

float __thiscall
`Chaos::FConvexBuilder::SortFaceVerticesCCW'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  float *pfVar3;
  double *pdVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float local_38;
  
  plVar1 = *(longlong **)((longlong)this + 0x10);
  lVar8 = (longlong)param_1;
  uVar7 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    fVar9 = (float)(*pcVar5)();
    return fVar9;
  }
  lVar2 = *plVar1;
  pfVar3 = *(float **)this;
  fVar9 = *(float *)(lVar2 + 4 + lVar8 * 0xc) - pfVar3[1];
  local_38 = *(float *)(lVar2 + lVar8 * 0xc) - *pfVar3;
  uVar11 = *(float *)(lVar2 + 8 + lVar8 * 0xc) - pfVar3[2];
  fVar10 = local_38 * local_38 + fVar9 * fVar9 + (float)uVar11 * (float)uVar11;
  if (fVar10 != __real_3f800000) {
    if (__real_322bcc77 <= fVar10) {
      fVar10 = __real_3f800000 / SQRT(fVar10);
      fVar9 = fVar10 * fVar9;
      local_38 = fVar10 * local_38;
      uVar11 = fVar10 * (float)uVar11;
    }
    else {
      fVar9 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
      local_38 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      uVar11 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    }
  }
  pdVar4 = *(double **)((longlong)this + 8);
  fVar10 = (float)pdVar4[5] * fVar9 + (float)pdVar4[4] * local_38 + (float)pdVar4[6] * (float)uVar11
  ;
  if ((float)pdVar4[1] * fVar9 + (float)*pdVar4 * local_38 + (float)pdVar4[2] * (float)uVar11 < 0.0)
  {
    fVar10 = __real_bf800000 - fVar10;
  }
  else {
    fVar10 = fVar10 + __real_3f800000;
  }
  return fVar10;
}

// BuildPlaneVertexIndices @ 143755f40

void __cdecl
Chaos::FConvexBuilder::BuildPlaneVertexIndices
          (TArray<Chaos::TCorePlane<float,3>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_3,
          float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  uint uVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  uint local_98 [24];
  
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::Reset
            (param_3,param_1->ArrayNum);
  uVar9 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  uVar15 = 0;
  if (0 < param_1->ArrayNum) {
    do {
      iVar12 = param_2->ArrayNum;
      local_98[0] = 0;
      lVar16 = (longlong)(int)uVar15;
      if (0 < iVar12) {
        uVar18 = ~uVar15 >> 0x1f;
        do {
          uVar17 = local_98[0];
          uVar11 = 0;
          if ((int)local_98[0] < iVar12) {
            uVar11 = ~local_98[0] >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar14 = (param_2->AllocatorInstance).Data;
          lVar13 = (longlong)(int)uVar17;
          uVar17 = 0;
          if ((int)uVar15 < param_1->ArrayNum) {
            uVar17 = uVar18;
          }
          if ((uVar17 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar7 = (param_1->AllocatorInstance).Data;
          fVar1 = *(float *)(pFVar14 + lVar13 * 0xc + 8);
          fVar2 = *(float *)(pFVar14 + lVar13 * 0xc + 4);
          fVar3 = *(float *)(pFVar14 + lVar13 * 0xc);
          fVar4 = *(float *)(pFVar7 + lVar16 * 0x18 + 8);
          fVar5 = *(float *)(pFVar7 + lVar16 * 0x18 + 4);
          fVar6 = *(float *)(pFVar7 + lVar16 * 0x18);
          uVar17 = 0;
          if ((int)uVar15 < param_1->ArrayNum) {
            uVar17 = uVar18;
          }
          if ((uVar17 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar14 = (param_1->AllocatorInstance).Data;
          if ((float)((uint)((fVar2 - fVar5) * *(float *)(pFVar14 + lVar16 * 0x18 + 0x10) +
                             (fVar3 - fVar6) * *(float *)(pFVar14 + lVar16 * 0x18 + 0xc) +
                            (fVar1 - fVar4) * *(float *)(pFVar14 + lVar16 * 0x18 + 0x14)) & uVar9) <
              param_4) {
            uVar17 = 0;
            if ((int)uVar15 < param_3->ArrayNum) {
              uVar17 = uVar18;
            }
            if ((uVar17 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar14 = (param_3->AllocatorInstance).Data + lVar16 * 0x10;
            if (((*(FScriptContainerElement **)&pFVar14->field_0x0 <=
                  (FScriptContainerElement *)local_98) &&
                ((FScriptContainerElement *)local_98 <
                 *(FScriptContainerElement **)&pFVar14->field_0x0 +
                 (longlong)*(int *)(pFVar14 + 0xc) * 4)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar12 = *(int *)&pFVar14[8].field_0x0;
            if (iVar12 == *(int *)(pFVar14 + 0xc)) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,(ForAnyElementType *)pFVar14,(int *)(pFVar14 + 0xc));
            }
            *(int *)&pFVar14[8].field_0x0 = iVar12 + 1;
            *(uint *)(*(FScriptContainerElement **)&pFVar14->field_0x0 + (longlong)iVar12 * 4) =
                 local_98[0];
          }
          iVar12 = param_2->ArrayNum;
          local_98[0] = local_98[0] + 1;
        } while ((int)local_98[0] < iVar12);
      }
      uVar17 = ~uVar15 >> 0x1f;
      uVar18 = 0;
      if ((int)uVar15 < param_3->ArrayNum) {
        uVar18 = uVar17;
      }
      if ((uVar18 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar14 = (param_3->AllocatorInstance).Data;
      uVar18 = 0;
      if ((int)uVar15 < param_1->ArrayNum) {
        uVar18 = uVar17;
      }
      if ((uVar18 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FinalizeFaces((TCorePlane<float,3> *)((param_1->AllocatorInstance).Data + lVar16 * 0x18),
                    (TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar14 + lVar16 * 0x10),param_2);
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < param_1->ArrayNum);
  }
  RemoveInvalidFaces(param_1,param_3);
  return;
}

// FinalizeFaces @ 14376f550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Chaos::FConvexBuilder::FinalizeFaces
          (TCorePlane<float,3> *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  TMatrix<double> *pTVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  float fVar13;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  longlong local_1b0;
  undefined1 local_1a8 [4];
  float fStack_1a4;
  float local_1a0;
  FIdentityFunctor local_198;
  undefined4 **local_190;
  TVector<double>_u_0 local_188;
  undefined4 *local_170;
  undefined1 *local_168;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_160;
  TMatrix<double> local_158;
  undefined1 local_d8 [16];
  double local_c8;
  double dStack_c0;
  undefined1 local_b8 [16];
  double local_a8;
  double dStack_a0;
  undefined1 local_98 [16];
  double local_88;
  double dStack_80;
  undefined1 local_78 [16];
  double local_68;
  double dStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  iVar11 = param_2->ArrayNum;
  uVar9 = 0;
  local_1a8 = (undefined1  [4])0x0;
  fStack_1a4 = 0.0;
  local_1a0 = 0.0;
  if (0 < iVar11) {
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < iVar11) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if (uVar6 == 0) {
        local_1b0 = (longlong)iVar11;
        local_1b8 = (longlong)(int)uVar9;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      uVar6 = *(uint *)((param_2->AllocatorInstance).Data + lVar10);
      lVar12 = (longlong)(int)uVar6;
      uVar7 = 0;
      if ((int)uVar6 < param_3->ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (local_1b8 = lVar12, local_1b0 = (longlong)param_3->ArrayNum,
         bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_3->AllocatorInstance).Data;
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 4;
      iVar11 = param_2->ArrayNum;
      local_1a8 = (undefined1  [4])((float)local_1a8 + *(float *)(pFVar1 + lVar12 * 0xc));
      fStack_1a4 = fStack_1a4 + *(float *)(pFVar1 + lVar12 * 0xc + 4);
      local_1a0 = local_1a0 + *(float *)(pFVar1 + lVar12 * 0xc + 8);
    } while ((int)uVar9 < iVar11);
  }
  fVar13 = __real_3f800000 / (float)iVar11;
  fStack_1a4 = fStack_1a4 * fVar13;
  local_1a8 = (undefined1  [4])((float)local_1a8 * fVar13);
  local_188._s_0.X = (double)*(float *)&param_1->MNormal;
  local_1a0 = local_1a0 * fVar13;
  local_188._s_0.Z = (double)*(float *)&(param_1->MNormal).field_0x8;
  local_188._s_0.Y = (double)*(float *)&(param_1->MNormal).field_0x4;
  pTVar8 = UE::Math::TRotationMatrix<double>::MakeFromZ
                     (&local_158,(TVector<double> *)&local_188._s_0);
  local_170 = (undefined4 *)local_1a8;
  local_190 = &local_170;
  dVar3 = (double)(float)pTVar8->M[0][1];
  dVar4 = (double)(float)pTVar8->M[1][1];
  local_c8 = (double)(float)pTVar8->M[0][2];
  dStack_c0 = (double)(float)pTVar8->M[0][3];
  local_a8 = (double)(float)pTVar8->M[1][2];
  dStack_a0 = (double)(float)pTVar8->M[1][3];
  local_d8._8_4_ = SUB84(dVar3,0);
  local_d8._0_8_ = (double)(float)pTVar8->M[0][0];
  local_d8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  dVar3 = (double)(float)pTVar8->M[2][1];
  local_88 = (double)(float)pTVar8->M[2][2];
  dStack_80 = (double)(float)pTVar8->M[2][3];
  local_b8._8_4_ = SUB84(dVar4,0);
  local_b8._0_8_ = (double)(float)pTVar8->M[1][0];
  local_b8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  dVar4 = (double)(float)pTVar8->M[3][1];
  local_68 = (double)(float)pTVar8->M[3][2];
  dStack_60 = (double)(float)pTVar8->M[3][3];
  local_98._8_4_ = SUB84(dVar3,0);
  local_98._0_8_ = (double)(float)pTVar8->M[2][0];
  local_98._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_78._8_4_ = SUB84(dVar4,0);
  local_78._0_8_ = (double)(float)pTVar8->M[3][0];
  local_78._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  local_168 = local_d8;
  local_160 = param_3;
  AlgoImpl::
  IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_Chaos::FConvexBuilder::SortFaceVerticesCCW_::__l2::<lambda_2>_>_>
            ((int *)(param_2->AllocatorInstance).Data,iVar11,local_198,(<lambda_2> *)&local_190);
  RemoveInsideFaceVertices(param_1,param_2,param_3,(TVector<float,3> *)local_1a8);
  return;
}

// MergeColinearEdges @ 143798fb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
Chaos::FConvexBuilder::MergeColinearEdges
          (TArray<Chaos::TCorePlane<float,3>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_3,float param_4)

{
  uint *puVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  int iVar24;
  longlong lVar25;
  longlong lVar26;
  float fVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  uint local_168;
  uint local_164;
  undefined1 local_160 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_158;
  longlong local_148;
  uint local_140;
  longlong local_138;
  FScriptContainerElement *local_130;
  undefined8 local_128;
  float local_120;
  undefined8 local_11c;
  float local_114;
  uint local_110;
  longlong local_108;
  float local_100;
  float fStack_fc;
  float local_f8;
  float local_f4;
  float fStack_f0;
  float local_ec;
  FScriptContainerElement *local_e8;
  
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOutPlanes.Num() == InOutFaceVertexIndices.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CollisionConvexMesh.h"
                         ,0x24a,L""), bVar9)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 0;
  local_158.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_158,param_3->ArrayNum,Default);
  iVar13 = local_158.ArrayNum;
  pFVar22 = local_158.AllocatorInstance.Data + (longlong)local_158.ArrayNum * 4;
  FVar17.Data = local_158.AllocatorInstance.Data;
  while( true ) {
    if (local_158.ArrayNum != iVar13) {
      local_160[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_160);
    }
    fVar7 = __real_3f800000;
    fVar6 = __real_322bcc77;
    dVar5 = __real_3ff0000000000000;
    if (FVar17.Data == pFVar22) break;
    *(undefined4 *)FVar17.Data = 0xffffffff;
    FVar17.Data = FVar17.Data + 4;
  }
  iVar13 = param_2->ArrayNum;
  local_168 = 0;
  if (0 < iVar13) {
    uVar29 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                      UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
    local_138 = 0;
    uVar28 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    do {
      lVar26 = local_138;
      uVar23 = 0;
      if ((int)local_168 < iVar13) {
        uVar23 = ~local_168 >> 0x1f;
      }
      if (uVar23 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar29 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                          UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
        uVar28 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      }
      pFVar22 = (param_2->AllocatorInstance).Data;
      iVar13 = *(int *)(pFVar22 + lVar26 + 8);
      local_130 = pFVar22;
      if (2 < iVar13) {
        uVar15 = iVar13 - 2;
        uVar23 = 0;
        if ((int)uVar15 < iVar13) {
          uVar23 = ~uVar15 >> 0x1f;
        }
        if (uVar23 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar29 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                            UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
          uVar28 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
          uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        }
        uVar16 = *(int *)(pFVar22 + lVar26 + 8) - 1;
        uVar23 = *(uint *)(*(longlong *)(pFVar22 + lVar26) + (longlong)(int)uVar15 * 4);
        uVar15 = 0;
        if ((int)uVar16 < *(int *)(pFVar22 + lVar26 + 8)) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        if (uVar15 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar29 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                            UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
          uVar28 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
          uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
        }
        uVar15 = 0;
        iVar13 = *(int *)(pFVar22 + lVar26 + 8);
        if (0 < iVar13) {
          local_148 = 0;
          uVar16 = *(uint *)(*(longlong *)(pFVar22 + lVar26) + (longlong)(int)uVar16 * 4);
          do {
            lVar25 = local_148;
            uVar10 = 0;
            if ((int)uVar15 < iVar13) {
              uVar10 = ~uVar15 >> 0x1f;
            }
            if (uVar10 == 0) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar9) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              uVar29 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                                UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
              uVar28 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
              uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            }
            uVar19 = ~uVar16 >> 0x1f;
            uVar10 = *(uint *)(lVar25 + *(longlong *)(pFVar22 + lVar26));
            lVar26 = (longlong)(int)uVar10;
            uVar11 = 0;
            if ((int)uVar16 < param_3->ArrayNum) {
              uVar11 = uVar19;
            }
            if (uVar11 == 0) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar9) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              uVar29 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                                UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
              uVar28 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
              uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            }
            lVar25 = (longlong)(int)uVar16;
            pFVar22 = (param_3->AllocatorInstance).Data;
            uVar11 = 0;
            if ((int)uVar23 < param_3->ArrayNum) {
              uVar11 = ~uVar23 >> 0x1f;
            }
            if (uVar11 == 0) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar9) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              uVar29 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                                UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
              uVar28 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
              uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            }
            lVar12 = (longlong)(int)uVar23;
            pFVar18 = (param_3->AllocatorInstance).Data;
            fVar33 = *(float *)(pFVar22 + lVar25 * 0xc + 4) - *(float *)(pFVar18 + lVar12 * 0xc + 4)
            ;
            fVar30 = *(float *)(pFVar22 + lVar25 * 0xc) - *(float *)(pFVar18 + lVar12 * 0xc);
            local_f8 = *(float *)(pFVar22 + lVar25 * 0xc + 8) -
                       *(float *)(pFVar18 + lVar12 * 0xc + 8);
            fVar27 = fVar30 * fVar30 + fVar33 * fVar33 + local_f8 * local_f8;
            if (fVar27 == fVar7) {
              fVar31 = fVar30;
              uVar8 = CONCAT44(fVar33,fVar30);
              local_120 = local_f8;
            }
            else {
              fVar31 = (float)uVar28;
              uVar8 = uVar29;
              local_120 = (float)uVar14;
              if (fVar6 <= fVar27) {
                fVar27 = fVar7 / SQRT(fVar27);
                local_128 = CONCAT44(fVar33 * fVar27,(undefined4)local_128);
                fVar31 = fVar27 * fVar30;
                uVar8 = local_128;
                local_120 = local_f8 * fVar27;
              }
            }
            local_128 = uVar8;
            _local_100 = CONCAT44(fVar33,fVar30);
            uVar23 = 0;
            if ((int)uVar10 < param_3->ArrayNum) {
              uVar23 = ~uVar10 >> 0x1f;
            }
            dVar3 = (double)local_128._4_4_;
            dVar4 = (double)local_120;
            if (uVar23 == 0) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar9) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              uVar29 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                                UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
              uVar28 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
              uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            }
            pFVar22 = (param_3->AllocatorInstance).Data;
            uVar23 = 0;
            if ((int)uVar16 < param_3->ArrayNum) {
              uVar23 = uVar19;
            }
            if (uVar23 == 0) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar9) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              uVar29 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                                UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
              uVar28 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
              uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            }
            pFVar18 = (param_3->AllocatorInstance).Data;
            fVar33 = *(float *)(pFVar22 + lVar26 * 0xc + 4) - *(float *)(pFVar18 + lVar25 * 0xc + 4)
            ;
            fVar30 = *(float *)(pFVar22 + lVar26 * 0xc) - *(float *)(pFVar18 + lVar25 * 0xc);
            local_ec = *(float *)(pFVar22 + lVar26 * 0xc + 8) -
                       *(float *)(pFVar18 + lVar25 * 0xc + 8);
            fVar27 = fVar30 * fVar30 + fVar33 * fVar33 + local_ec * local_ec;
            if (fVar27 == fVar7) {
              fVar32 = fVar30;
              uVar8 = CONCAT44(fVar33,fVar30);
              local_114 = local_ec;
            }
            else {
              fVar32 = (float)uVar28;
              uVar8 = uVar29;
              local_114 = (float)uVar14;
              if (fVar6 <= fVar27) {
                fVar27 = fVar7 / SQRT(fVar27);
                local_11c = CONCAT44(fVar33 * fVar27,(undefined4)local_11c);
                fVar32 = fVar27 * fVar30;
                uVar8 = local_11c;
                local_114 = local_ec * fVar27;
              }
            }
            local_11c = uVar8;
            _local_f4 = CONCAT44(fVar33,fVar30);
            if ((double)fVar32 * (double)fVar31 + (double)local_11c._4_4_ * dVar3 +
                (double)local_114 * dVar4 < dVar5 - (double)param_4) {
              uVar23 = 0;
              if ((int)uVar16 < local_158.ArrayNum) {
                uVar23 = uVar19;
              }
              if ((uVar23 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              *(uint *)(local_158.AllocatorInstance.Data + lVar25 * 4) = uVar16;
              uVar29 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                                UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
              uVar28 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
              uVar14 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
            }
            uVar15 = uVar15 + 1;
            local_148 = local_148 + 4;
            iVar13 = *(int *)(local_130 + local_138 + 8);
            lVar26 = local_138;
            pFVar22 = local_130;
            uVar23 = uVar16;
            uVar16 = uVar10;
          } while ((int)uVar15 < iVar13);
        }
      }
      iVar13 = param_2->ArrayNum;
      local_168 = local_168 + 1;
      local_138 = lVar26 + 0x10;
    } while ((int)local_168 < iVar13);
  }
  uVar23 = 0;
  local_168 = 0;
  local_164 = 0;
  if (0 < param_3->ArrayNum) {
    do {
      uVar15 = local_164;
      uVar16 = 0;
      if ((int)local_164 < local_158.ArrayNum) {
        uVar16 = ~local_164 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         uVar23 = local_168, bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)(local_158.AllocatorInstance.Data + (longlong)(int)uVar15 * 4) == -1) {
        uVar15 = param_2->ArrayNum - 1;
        local_140 = uVar15;
        if (-1 < (int)uVar15) {
          lVar26 = (longlong)(int)uVar15;
          local_148 = lVar26 * 0x18;
          pFVar22 = (FScriptContainerElement *)(lVar26 << 4);
          do {
            uVar23 = ~uVar15;
            local_138 = CONCAT44(local_138._4_4_,uVar23);
            uVar16 = uVar23 >> 0x1f;
            uVar10 = 0;
            if ((int)uVar15 < param_2->ArrayNum) {
              uVar10 = uVar16;
            }
            local_140 = uVar15;
            local_130 = pFVar22;
            local_110 = uVar16;
            local_108 = lVar26;
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar18 = (param_2->AllocatorInstance).Data;
            local_e8 = pFVar18;
            if (((*(uint **)(pFVar22 + (longlong)pFVar18) <= &local_164) &&
                (&local_164 <
                 *(uint **)(pFVar22 + (longlong)pFVar18) +
                 *(int *)(pFVar22 + 0xc + (longlong)pFVar18))) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar13 = *(int *)(pFVar22 + 8 + (longlong)pFVar18);
            if (iVar13 != 0) {
              puVar1 = *(uint **)(pFVar22 + (longlong)pFVar18);
              iVar24 = 0;
              lVar26 = 0;
              bVar9 = *puVar1 != local_164;
              iVar20 = 0;
              do {
                iVar21 = iVar20;
                do {
                  lVar26 = lVar26 + 1;
                  iVar21 = iVar21 + 1;
                  if (iVar13 <= lVar26) break;
                } while (bVar9 == (puVar1[lVar26] != local_164));
                if (bVar9 != false) {
                  if (iVar24 != iVar20) {
                    memmove(puVar1 + iVar24,puVar1 + iVar20,(longlong)(iVar21 - iVar20) << 2);
                  }
                  iVar24 = iVar24 + (iVar21 - iVar20);
                }
                bVar9 = (bool)(bVar9 ^ 1);
                iVar20 = iVar21;
              } while (lVar26 < iVar13);
              *(int *)(local_130 + 8 + (longlong)local_e8) = iVar24;
              pFVar22 = local_130;
              lVar26 = local_108;
              uVar15 = local_140;
              uVar23 = (uint)local_138;
              uVar16 = local_110;
            }
            uVar10 = 0;
            if ((int)uVar15 < param_2->ArrayNum) {
              uVar10 = uVar16;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (*(int *)(pFVar22 + 8 + (longlong)(param_2->AllocatorInstance).Data) < 3) {
              uVar10 = 0;
              if ((int)uVar15 < param_2->ArrayNum) {
                uVar10 = uVar16;
              }
              if ((uVar10 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar18 = (param_2->AllocatorInstance).Data + (longlong)pFVar22;
              if (*(void **)pFVar18 != (void *)0x0) {
                FMemory::Free(*(void **)pFVar18);
              }
              iVar13 = param_2->ArrayNum + uVar23;
              if (iVar13 != 0) {
                memmove(pFVar18,pFVar18 + 0x10,(longlong)iVar13 << 4);
              }
              param_2->ArrayNum = param_2->ArrayNum + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&param_2->AllocatorInstance,param_2->ArrayNum,&param_2->ArrayMax);
              uVar10 = 0;
              if ((int)uVar15 < param_1->ArrayNum) {
                uVar10 = uVar16;
              }
              if ((uVar10 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar18 = (param_1->AllocatorInstance).Data + local_148;
              iVar13 = param_1->ArrayNum + uVar23;
              if (iVar13 != 0) {
                memmove(pFVar18,pFVar18 + 0x18,(longlong)iVar13 * 0x18);
              }
              param_1->ArrayNum = param_1->ArrayNum + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,4,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
            }
            local_148 = local_148 + -0x18;
            uVar15 = uVar15 - 1;
            lVar26 = lVar26 + -1;
            pFVar22 = pFVar22 + -0x10;
            uVar23 = local_168;
            local_140 = uVar15;
            local_130 = pFVar22;
            local_108 = lVar26;
          } while (-1 < (int)uVar15);
        }
        local_168 = uVar23 + 1;
        uVar23 = local_168;
      }
      else {
        lVar26 = (longlong)(int)local_164;
        iVar13 = local_164 - uVar23;
        uVar15 = 0;
        if ((int)local_164 < local_158.ArrayNum) {
          uVar15 = ~local_164 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , uVar23 = local_168, bVar9)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(int *)(local_158.AllocatorInstance.Data + lVar26 * 4) = iVar13;
      }
      local_164 = local_164 + 1;
    } while ((int)local_164 < param_3->ArrayNum);
    if (0 < (int)uVar23) {
      uVar23 = param_3->ArrayNum - 1;
      if (-1 < (int)uVar23) {
        lVar25 = (longlong)(int)uVar23 * 0xc;
        lVar26 = (longlong)(int)uVar23 * 4;
        do {
          uVar15 = ~uVar23 >> 0x1f;
          uVar16 = 0;
          if ((int)uVar23 < local_158.ArrayNum) {
            uVar16 = uVar15;
          }
          if ((uVar16 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (*(int *)(local_158.AllocatorInstance.Data + lVar26) == -1) {
            uVar16 = 0;
            if ((int)uVar23 < param_3->ArrayNum) {
              uVar16 = uVar15;
            }
            if ((uVar16 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar22 = (param_3->AllocatorInstance).Data + lVar25;
            iVar13 = param_3->ArrayNum + ~uVar23;
            if (iVar13 != 0) {
              memmove(pFVar22,pFVar22 + 0xc,(longlong)iVar13 * 0xc);
            }
            param_3->ArrayNum = param_3->ArrayNum + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,&param_3->AllocatorInstance,param_3->ArrayNum,&param_3->ArrayMax);
          }
          lVar25 = lVar25 + -0xc;
          lVar26 = lVar26 + -4;
          uVar23 = uVar23 - 1;
        } while (-1 < (int)uVar23);
      }
      iVar13 = param_2->ArrayNum;
      uVar23 = 0;
      if (0 < iVar13) {
        lVar26 = 0;
        do {
          uVar15 = 0;
          if ((int)uVar23 < iVar13) {
            uVar15 = ~uVar23 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar22 = (param_2->AllocatorInstance).Data;
          uVar15 = *(int *)(pFVar22 + lVar26 + 8) - 1;
          if (-1 < (int)uVar15) {
            lVar25 = (longlong)(int)uVar15 * 4;
            do {
              uVar16 = 0;
              if ((int)uVar15 < *(int *)(pFVar22 + lVar26 + 8)) {
                uVar16 = ~uVar15 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              uVar16 = *(uint *)(*(longlong *)(pFVar22 + lVar26) + lVar25);
              uVar10 = 0;
              if ((int)uVar16 < local_158.ArrayNum) {
                uVar10 = ~uVar16 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              uVar28 = *(undefined4 *)(local_158.AllocatorInstance.Data + (longlong)(int)uVar16 * 4)
              ;
              uVar16 = 0;
              if ((int)uVar15 < *(int *)(pFVar22 + lVar26 + 8)) {
                uVar16 = ~uVar15 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              *(undefined4 *)(*(longlong *)(pFVar22 + lVar26) + lVar25) = uVar28;
              lVar25 = lVar25 + -4;
              uVar15 = uVar15 - 1;
            } while (-1 < (int)uVar15);
          }
          iVar13 = param_2->ArrayNum;
          uVar23 = uVar23 + 1;
          lVar26 = lVar26 + 0x10;
        } while ((int)uVar23 < iVar13);
      }
    }
  }
  if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.AllocatorInstance.Data);
  }
  return;
}

// MergeFaces @ 143799f30

void __cdecl
Chaos::FConvexBuilder::MergeFaces
          (TArray<Chaos::TCorePlane<float,3>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_3,float param_4)

{
  FScriptContainerElement *pFVar1;
  uint *puVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  longlong lVar7;
  float fVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *this;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  uint *puVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  undefined1 local_d8;
  undefined1 local_d7 [3];
  uint local_d4;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  uint local_b0;
  uint local_ac;
  TArray<int,TSizedDefaultAllocator<32>_> *local_a8;
  FScriptContainerElement *local_a0;
  longlong local_98;
  undefined8 local_90;
  float local_88;
  undefined8 local_80;
  float local_78;
  
  fVar8 = __real_3f7ff972;
  uVar13 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  iVar11 = param_1->ArrayNum;
  if (0 < iVar11) {
    local_b8 = 0;
    local_c0 = 0;
    local_98 = 0;
    uVar20 = 0;
    do {
      lVar18 = local_98;
      lVar17 = local_b8;
      uVar12 = 0;
      if ((int)uVar20 < iVar11) {
        uVar12 = ~uVar20 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_a0 = (param_1->AllocatorInstance).Data;
      uVar12 = 0;
      if ((int)uVar20 < param_2->ArrayNum) {
        uVar12 = ~uVar20 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar20 = uVar20 + 1;
      iVar11 = param_1->ArrayNum;
      local_a8 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                 ((param_2->AllocatorInstance).Data + lVar18);
      lVar14 = local_c0 + 1;
      local_d0 = lVar14;
      local_c0 = lVar14;
      local_ac = uVar20;
      if ((int)uVar20 < iVar11) {
        lVar19 = lVar17 + 0x18;
        lVar7 = lVar18;
        do {
          lVar21 = lVar7 + 0x10;
          local_b0 = ~uVar20;
          local_d4 = local_b0 >> 0x1f;
          uVar12 = 0;
          if ((int)uVar20 < iVar11) {
            uVar12 = local_d4;
          }
          local_d0 = lVar14;
          local_c8 = lVar19;
          if ((uVar12 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar3 = (param_1->AllocatorInstance).Data;
          uVar12 = 0;
          if ((int)uVar20 < param_2->ArrayNum) {
            uVar12 = local_d4;
          }
          if ((uVar12 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar4 = (param_2->AllocatorInstance).Data;
          if (fVar8 < *(float *)(pFVar3 + lVar19 + 0x10) * *(float *)(local_a0 + lVar17 + 0x10) +
                      *(float *)(pFVar3 + lVar19 + 0xc) * *(float *)(local_a0 + lVar17 + 0xc) +
                      *(float *)(pFVar3 + lVar19 + 0x14) * *(float *)(local_a0 + lVar17 + 0x14)) {
            pFVar15 = (local_a8->AllocatorInstance).Data;
            iVar11 = local_a8->ArrayNum;
            pFVar1 = pFVar15 + (longlong)iVar11 * 4;
            while( true ) {
              if (local_a8->ArrayNum != iVar11) {
                local_d8 = 0;
                `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (&local_d8);
              }
              if (pFVar15 == pFVar1) {
                puVar16 = *(uint **)(pFVar4 + lVar21);
                iVar11 = *(int *)(pFVar4 + lVar7 + 0x18);
                puVar2 = puVar16 + iVar11;
                goto LAB_14379a280;
              }
              uVar12 = *(uint *)pFVar15;
              uVar10 = 0;
              if ((int)uVar12 < param_3->ArrayNum) {
                uVar10 = ~uVar12 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar5 = (param_3->AllocatorInstance).Data;
              local_90 = *(undefined8 *)(pFVar5 + (longlong)(int)uVar12 * 0xc);
              local_88 = *(float *)(pFVar5 + (longlong)(int)uVar12 * 0xc + 8);
              lVar14 = local_d0;
              lVar17 = local_b8;
              lVar19 = local_c8;
              if (param_4 < (float)((uint)((*(float *)(pFVar3 + local_c8 + 4) -
                                           (float)((ulonglong)local_90 >> 0x20)) *
                                           *(float *)(pFVar3 + local_c8 + 0x10) +
                                           (*(float *)(pFVar3 + local_c8) - (float)local_90) *
                                           *(float *)(pFVar3 + local_c8 + 0xc) +
                                          (*(float *)(pFVar3 + local_c8 + 8) - local_88) *
                                          *(float *)(pFVar3 + local_c8 + 0x14)) & uVar13)) break;
              pFVar15 = pFVar15 + 4;
            }
          }
LAB_14379a50a:
          iVar11 = param_1->ArrayNum;
          lVar14 = lVar14 + 1;
          lVar19 = lVar19 + 0x18;
          uVar20 = uVar20 + 1;
          lVar18 = local_98;
          lVar7 = lVar21;
          local_d0 = lVar14;
          local_c8 = lVar19;
        } while ((int)uVar20 < iVar11);
      }
      local_b8 = lVar17 + 0x18;
      local_98 = lVar18 + 0x10;
      uVar20 = local_ac;
    } while ((int)local_ac < iVar11);
  }
  uVar13 = 0;
  if (0 < iVar11) {
    do {
      uVar20 = 0;
      if ((int)uVar13 < param_2->ArrayNum) {
        uVar20 = ~uVar13 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar3 = (param_2->AllocatorInstance).Data;
      uVar20 = 0;
      if ((int)uVar13 < param_1->ArrayNum) {
        uVar20 = ~uVar13 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FinalizeFaces((TCorePlane<float,3> *)
                    ((param_1->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x18),
                    (TArray<int,TSizedDefaultAllocator<32>_> *)
                    (pFVar3 + (longlong)(int)uVar13 * 0x10),param_3);
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < param_1->ArrayNum);
  }
  RemoveInvalidFaces(param_1,param_2);
  return;
LAB_14379a280:
  if (*(int *)(pFVar4 + lVar7 + 0x18) != iVar11) {
    local_d7[0] = 0;
    `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()(local_d7);
  }
  this = local_a8;
  if (puVar16 == puVar2) {
    iVar11 = *(int *)(pFVar4 + lVar7 + 0x18);
    uVar12 = 0;
    if (0 < iVar11) {
      do {
        uVar10 = 0;
        if ((int)uVar12 < iVar11) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                  (this,(int *)(*(longlong *)(pFVar4 + lVar21) + (longlong)(int)uVar12 * 4));
        iVar11 = *(int *)(pFVar4 + lVar7 + 0x18);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < iVar11);
    }
    lVar17 = local_d0;
    uVar12 = local_d4;
    uVar10 = 0;
    if ((int)uVar20 < param_1->ArrayNum) {
      uVar10 = local_d4;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar18 = local_c8;
    iVar11 = local_b0 + param_1->ArrayNum;
    pFVar3 = (param_1->AllocatorInstance).Data;
    if (1 < iVar11) {
      iVar11 = 1;
    }
    if (iVar11 != 0) {
      memmove(pFVar3 + local_c8,pFVar3 + (longlong)(param_1->ArrayNum - iVar11) * 0x18,
              (longlong)iVar11 * 0x18);
    }
    param_1->ArrayNum = param_1->ArrayNum + -1;
    uVar10 = 0;
    if ((int)uVar20 < param_2->ArrayNum) {
      uVar10 = uVar12;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
              (param_2,uVar20);
    uVar20 = uVar20 - 1;
    lVar14 = lVar17 + -1;
    lVar17 = local_b8;
    lVar19 = lVar18 + -0x18;
    lVar21 = lVar7;
  }
  else {
    uVar12 = *puVar16;
    uVar10 = 0;
    if ((int)uVar12 < param_3->ArrayNum) {
      uVar10 = ~uVar12 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar3 = (param_3->AllocatorInstance).Data;
    local_80 = *(undefined8 *)(pFVar3 + (longlong)(int)uVar12 * 0xc);
    local_78 = *(float *)(pFVar3 + (longlong)(int)uVar12 * 0xc + 8);
    lVar14 = local_d0;
    lVar17 = local_b8;
    lVar19 = local_c8;
    if ((float)((uint)((*(float *)(local_a0 + local_b8 + 4) - (float)((ulonglong)local_80 >> 0x20))
                       * *(float *)(local_a0 + local_b8 + 0x10) +
                       (*(float *)(local_a0 + local_b8) - (float)local_80) *
                       *(float *)(local_a0 + local_b8 + 0xc) +
                      (*(float *)(local_a0 + local_b8 + 8) - local_78) *
                      *(float *)(local_a0 + local_b8 + 0x14)) & uVar13) <= param_4)
    goto code_r0x00014379a368;
  }
  goto LAB_14379a50a;
code_r0x00014379a368:
  puVar16 = puVar16 + 1;
  goto LAB_14379a280;
}

// RemoveInsideFaceVertices @ 1437a52d0

void __cdecl
Chaos::FConvexBuilder::RemoveInsideFaceVertices
          (TCorePlane<float,3> *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_3,
          TVector<float,3> *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 local_res10 [8];
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_res18;
  uint local_c8;
  ForAnyElementType local_b0;
  undefined8 local_a8;
  uint local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  uint local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  uint local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  iVar10 = param_2->ArrayNum;
  if (2 < iVar10) {
    uVar13 = 0;
    lVar18 = 0;
    local_c8 = 0;
    fVar22 = __real_ff7fffff;
    local_res18 = param_3;
    do {
      uVar6 = 0;
      if ((int)uVar13 < iVar10) {
        uVar6 = ~uVar13 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar6 = *(uint *)((param_2->AllocatorInstance).Data + lVar18);
      lVar16 = (longlong)(int)uVar6;
      uVar7 = 0;
      if ((int)uVar6 < param_3->ArrayNum) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar19 = (param_3->AllocatorInstance).Data;
      iVar10 = param_2->ArrayNum;
      fVar20 = *(float *)(pFVar19 + lVar16 * 0xc + 4) - *(float *)&param_4->field_0x4;
      fVar21 = *(float *)(pFVar19 + lVar16 * 0xc + 8) - *(float *)&param_4->field_0x8;
      fVar20 = (*(float *)(pFVar19 + lVar16 * 0xc) - *(float *)param_4) *
               (*(float *)(pFVar19 + lVar16 * 0xc) - *(float *)param_4) + fVar20 * fVar20 +
               fVar21 * fVar21;
      uVar6 = uVar13;
      if (fVar20 <= fVar22) {
        uVar6 = local_c8;
        fVar20 = fVar22;
      }
      fVar22 = fVar20;
      uVar13 = uVar13 + 1;
      lVar18 = lVar18 + 4;
      local_c8 = uVar6;
    } while ((int)uVar13 < iVar10);
    uVar13 = 0;
    if ((int)uVar6 < iVar10) {
      uVar13 = ~uVar6 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar13 = *(uint *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar6 * 4);
    lVar18 = (longlong)(int)uVar13;
    uVar12 = (int)(uVar6 + 1) % iVar10;
    uVar7 = 0;
    if ((int)uVar12 < param_2->ArrayNum) {
      uVar7 = ~uVar12 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar7 = *(uint *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar12 * 4);
    lVar16 = (longlong)(int)uVar7;
    local_b0.Data = (FScriptContainerElement *)0x0;
    local_a8 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    local_80 = uVar13;
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,&local_b0,(int *)((longlong)&local_a8 + 4));
    local_a8 = CONCAT44(local_a8._4_4_,iVar8 + 1);
    *(ulonglong *)(local_b0.Data + (longlong)iVar8 * 0x10) = CONCAT44(uStack_7c,local_80);
    *(ulonglong *)(local_b0.Data + (longlong)iVar8 * 0x10 + 8) = CONCAT44(uStack_74,uStack_78);
    uVar12 = 0;
    if ((int)uVar7 < param_3->ArrayNum) {
      uVar12 = ~uVar7 >> 0x1f;
    }
    local_a0 = uVar7;
    if ((uVar12 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar19 = (param_3->AllocatorInstance).Data;
    uVar7 = 0;
    if ((int)uVar13 < param_3->ArrayNum) {
      uVar7 = ~uVar13 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (param_3->AllocatorInstance).Data;
    fStack_94 = *(float *)(pFVar19 + lVar16 * 0xc + 8) - *(float *)(pFVar3 + lVar18 * 0xc + 8);
    fStack_98 = *(float *)(pFVar19 + lVar16 * 0xc + 4) - *(float *)(pFVar3 + lVar18 * 0xc + 4);
    fStack_9c = *(float *)(pFVar19 + lVar16 * 0xc) - *(float *)(pFVar3 + lVar18 * 0xc);
    if (((local_b0.Data <= (FScriptContainerElement *)&local_a0) &&
        ((FScriptContainerElement *)&local_a0 < local_b0.Data + (longlong)(int)local_a8._4_4_ * 0x10
        )) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (uint)local_a8;
    if ((uint)local_a8 == local_a8._4_4_) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&local_b0,(int *)((longlong)&local_a8 + 4));
    }
    iVar17 = 2;
    *(ulonglong *)(local_b0.Data + (longlong)iVar8 * 0x10) = CONCAT44(fStack_9c,local_a0);
    *(ulonglong *)(local_b0.Data + (longlong)iVar8 * 0x10 + 8) = CONCAT44(fStack_94,fStack_98);
    local_a8._0_4_ = iVar8 + 1;
    if (1 < iVar10) {
      do {
        uVar12 = (int)(uVar6 + iVar17) % iVar10;
        uVar7 = 0;
        if ((int)((uint)local_a8 - 1) < (int)(uint)local_a8) {
          uVar7 = ~((uint)local_a8 - 1) >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar15.Data = local_b0.Data;
        lVar16 = (longlong)(int)(uint)local_a8;
        uVar7 = *(uint *)(local_b0.Data + lVar16 * 0x10 + -0x10);
        lVar18 = (longlong)(int)uVar7;
        uVar9 = 0;
        if ((int)uVar12 < param_2->ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar12 = *(uint *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar12 * 4);
        lVar14 = (longlong)(int)uVar12;
        uVar9 = 0;
        if ((int)uVar12 < param_3->ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar19 = (local_res18->AllocatorInstance).Data;
        uVar9 = 0;
        if ((int)uVar7 < local_res18->ArrayNum) {
          uVar9 = ~uVar7 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (local_res18->AllocatorInstance).Data;
        fVar22 = *(float *)(pFVar19 + lVar14 * 0xc + 8) - *(float *)(pFVar3 + lVar18 * 0xc + 8);
        fVar20 = *(float *)(pFVar19 + lVar14 * 0xc + 4) - *(float *)(pFVar3 + lVar18 * 0xc + 4);
        fVar21 = *(float *)(pFVar19 + lVar14 * 0xc) - *(float *)(pFVar3 + lVar18 * 0xc);
        if ((*(float *)(FVar15.Data + lVar16 * 0x10 + -4) * fVar21 -
            *(float *)(FVar15.Data + lVar16 * 0x10 + -0xc) * fVar22) *
            *(float *)&(param_1->MNormal).field_0x4 +
            (*(float *)(FVar15.Data + lVar16 * 0x10 + -8) * fVar22 -
            *(float *)(FVar15.Data + lVar16 * 0x10 + -4) * fVar20) * *(float *)&param_1->MNormal +
            (*(float *)(FVar15.Data + lVar16 * 0x10 + -0xc) * fVar20 -
            *(float *)(FVar15.Data + lVar16 * 0x10 + -8) * fVar21) *
            *(float *)&(param_1->MNormal).field_0x8 < 0.0) {
          if (((int)(uint)local_a8 < 1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar8 = ((uint)local_a8 - ((uint)local_a8 - 1)) + -1;
          if (iVar8 != 0) {
            memmove(local_b0.Data + (longlong)(int)((uint)local_a8 - 1) * 0x10,
                    local_b0.Data + (longlong)(int)((uint)local_a8 - 1) * 0x10 + 0x10,
                    (longlong)iVar8 << 4);
          }
          local_a8._0_4_ = (uint)local_a8 - 1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,&local_b0,(uint)local_a8,(int *)((longlong)&local_a8 + 4));
        }
        else {
          if (uVar12 != uVar13) {
            local_90 = uVar12;
            fStack_8c = fVar21;
            fStack_88 = fVar20;
            fStack_84 = fVar22;
            if (((local_b0.Data <= (FScriptContainerElement *)&local_90) &&
                ((FScriptContainerElement *)&local_90 <
                 local_b0.Data + (longlong)(int)local_a8._4_4_ * 0x10)) &&
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
            if ((uint)local_a8 == local_a8._4_4_) {
              local_a8._0_4_ =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,&local_b0,(int *)((longlong)&local_a8 + 4));
            }
            lVar18 = (longlong)(int)(uint)local_a8;
            local_a8._0_4_ = (uint)local_a8 + 1;
            *(ulonglong *)(local_b0.Data + lVar18 * 0x10) = CONCAT44(fStack_8c,local_90);
            *(ulonglong *)(local_b0.Data + lVar18 * 0x10 + 8) = CONCAT44(fStack_84,fStack_88);
          }
          iVar17 = iVar17 + 1;
        }
        param_3 = local_res18;
      } while (iVar17 <= iVar10);
    }
    piVar1 = &param_2->ArrayMax;
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_2->AllocatorInstance,0,piVar1);
    }
    uVar13 = (uint)local_a8;
    uVar11 = (ulonglong)(int)(uint)local_a8;
    if (2 < (int)(uint)local_a8) {
      pFVar19 = local_b0.Data + uVar11 * 0x10;
      FVar15.Data = local_b0.Data;
      while( true ) {
        if ((uint)uVar11 != uVar13) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<`Chaos::FConvexBuilder::RemoveInsideFaceVertices'::__l2::FPointSegment,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (FVar15.Data == pFVar19) break;
        pFVar3 = (param_2->AllocatorInstance).Data;
        if (((pFVar3 <= FVar15.Data) && (FVar15.Data < pFVar3 + (longlong)*piVar1 * 4)) &&
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
        iVar10 = param_2->ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&param_2->AllocatorInstance,piVar1);
        }
        param_2->ArrayNum = iVar10 + 1;
        uVar2 = *(undefined4 *)FVar15.Data;
        FVar15.Data = FVar15.Data + 0x10;
        *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar10 * 4) = uVar2;
        uVar11 = (ulonglong)(uint)local_a8;
      }
    }
    if (local_b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data);
    }
  }
  return;
}

// RemoveInvalidFaces @ 1437a5b70

void __cdecl
Chaos::FConvexBuilder::RemoveInvalidFaces
          (TArray<Chaos::TCorePlane<float,3>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  uVar6 = 0;
  if (0 < param_1->ArrayNum) {
    lVar7 = 0;
    do {
      uVar8 = ~uVar6 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar6 < param_2->ArrayNum) {
        uVar4 = uVar8;
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
      if (*(int *)((param_2->AllocatorInstance).Data + lVar7 + 8) < 3) {
        uVar4 = 0;
        if ((int)uVar6 < param_2->ArrayNum) {
          uVar4 = uVar8;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
        RemoveAtSwapImpl(param_2,uVar6);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&param_2->AllocatorInstance,param_2->ArrayNum,&param_2->ArrayMax);
        uVar4 = 0;
        if ((int)uVar6 < param_1->ArrayNum) {
          uVar4 = uVar8;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (param_1->AllocatorInstance).Data;
        iVar5 = ~uVar6 + param_1->ArrayNum;
        if (1 < iVar5) {
          iVar5 = 1;
        }
        if (iVar5 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar6 * 0x18,
                  pFVar1 + (longlong)(param_1->ArrayNum - iVar5) * 0x18,(longlong)iVar5 * 0x18);
        }
        param_1->ArrayNum = param_1->ArrayNum + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,&param_1->AllocatorInstance,param_1->ArrayNum,&param_1->ArrayMax);
      }
      else {
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x10;
      }
    } while ((int)uVar6 < param_1->ArrayNum);
  }
  return;
}

// Simplify @ 1437b0da0

void __cdecl
Chaos::FConvexBuilder::Simplify
          (TArray<Chaos::TCorePlane<float,3>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_3,
          TAABB<float,3> *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  code *pcVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  ForAnyElementType FVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  float fVar25;
  float fVar26;
  bool local_108 [4];
  uint local_104;
  ForAnyElementType local_100;
  int local_f8;
  int local_f4;
  uint local_f0;
  longlong local_e8;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_e0;
  TArray<bool,TSizedDefaultAllocator<32>_> local_d0;
  int local_c0;
  FScriptContainerElement *local_b8;
  longlong local_b0;
  ulonglong local_a8;
  
  iVar14 = param_3->ArrayNum;
  lVar16 = (longlong)iVar14;
  pFVar17 = (param_3->AllocatorInstance).Data;
  uVar20 = iVar14 - VerticesThreshold;
  local_100.Data = (FScriptContainerElement *)0x0;
  local_f8 = iVar14;
  if (iVar14 == 0) {
    local_f4 = 0;
  }
  else {
    local_b0 = lVar16;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar14,0,&local_100,iVar14,&local_f4);
    memcpy(local_100.Data,pFVar17,lVar16 * 0xc);
  }
  local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.ArrayNum = 0;
  local_d0.ArrayMax = 0;
  local_108[0] = false;
  local_b0 = lVar16;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init(&local_d0,local_108,iVar14);
  fVar11 = __real_7f7fffff;
  fVar10 = __real_3f000000;
  if (0 < (int)uVar20) {
    iVar14 = iVar14 + -1;
    local_a8 = (ulonglong)uVar20;
    local_c0 = iVar14;
    do {
      uVar20 = 0xffffffff;
      uVar22 = 0;
      local_104 = 0xffffffff;
      local_f0 = 0xffffffff;
      local_b8 = (FScriptContainerElement *)0x0;
      if (0 < iVar14) {
        local_e8 = 0;
        fVar26 = fVar11;
        do {
          pFVar17 = local_b8;
          uVar15 = 0;
          if ((int)uVar22 < local_d0.ArrayNum) {
            uVar15 = ~uVar22 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar24 = local_e8;
          if ((pFVar17[local_d0.AllocatorInstance.Data] == (FScriptContainerElement)0x0) &&
             (pFVar18 = pFVar17 + 1, lVar9 = local_e8, uVar15 = uVar22, (longlong)pFVar18 < lVar16))
          {
            do {
              uVar15 = uVar15 + 1;
              uVar20 = 0;
              if ((int)uVar15 < local_d0.ArrayNum) {
                uVar20 = ~uVar15 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , lVar24 = local_e8, bVar13)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              if (pFVar18[local_d0.AllocatorInstance.Data] == (FScriptContainerElement)0x0) {
                uVar20 = 0;
                if ((int)uVar22 < local_f8) {
                  uVar20 = ~uVar22 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                FVar12.Data = local_100.Data;
                uVar20 = 0;
                if ((int)uVar15 < local_f8) {
                  uVar20 = ~uVar15 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                fVar25 = (*(float *)(FVar12.Data + local_e8) -
                         *(float *)(local_100.Data + lVar9 + 0xc)) *
                         (*(float *)(FVar12.Data + local_e8) -
                         *(float *)(local_100.Data + lVar9 + 0xc)) +
                         (*(float *)(FVar12.Data + local_e8 + 4) -
                         *(float *)(local_100.Data + lVar9 + 0x10)) *
                         (*(float *)(FVar12.Data + local_e8 + 4) -
                         *(float *)(local_100.Data + lVar9 + 0x10)) +
                         (*(float *)(FVar12.Data + local_e8 + 8) -
                         *(float *)(local_100.Data + lVar9 + 0x14)) *
                         (*(float *)(FVar12.Data + local_e8 + 8) -
                         *(float *)(local_100.Data + lVar9 + 0x14));
                lVar24 = local_e8;
                pFVar17 = local_b8;
                if (fVar25 < fVar26) {
                  fVar26 = fVar25;
                  local_104 = uVar22;
                  local_f0 = uVar15;
                }
              }
              pFVar18 = pFVar18 + 1;
              lVar16 = local_b0;
              lVar9 = lVar9 + 0xc;
              uVar20 = local_104;
            } while ((longlong)pFVar18 < local_b0);
          }
          local_b8 = pFVar17 + 1;
          local_e8 = lVar24 + 0xc;
          uVar22 = uVar22 + 1;
        } while ((int)uVar22 < local_c0);
        iVar14 = local_c0;
        if (uVar20 != 0xffffffff) {
          uVar15 = ~uVar20 >> 0x1f;
          uVar22 = 0;
          if ((int)uVar20 < local_f8) {
            uVar22 = uVar15;
          }
          if ((uVar22 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar16 = (longlong)(int)local_f0;
          lVar24 = (longlong)(int)uVar20;
          local_b8 = local_100.Data;
          uVar22 = ~local_f0;
          uVar20 = 0;
          if ((int)local_f0 < local_f8) {
            uVar20 = uVar22 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FVar12.Data = local_100.Data;
          uVar20 = 0;
          if ((int)local_104 < local_f8) {
            uVar20 = uVar15;
          }
          if ((uVar20 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          fVar26 = *(float *)(FVar12.Data + lVar16 * 0xc + 8);
          fVar25 = *(float *)(FVar12.Data + lVar16 * 0xc + 4);
          fVar1 = *(float *)(local_100.Data + lVar24 * 0xc + 8);
          fVar2 = *(float *)(local_100.Data + lVar24 * 0xc + 4);
          fVar3 = *(float *)(FVar12.Data + lVar16 * 0xc);
          fVar4 = *(float *)(local_100.Data + lVar24 * 0xc);
          fVar5 = *(float *)(local_b8 + lVar24 * 0xc + 8);
          fVar6 = *(float *)(local_b8 + lVar24 * 0xc + 4);
          fVar7 = *(float *)(local_b8 + lVar24 * 0xc);
          uVar20 = 0;
          if ((int)local_104 < local_f8) {
            uVar20 = uVar15;
          }
          if ((uVar20 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          *(float *)(local_100.Data + lVar24 * 0xc) = (fVar3 - fVar4) * fVar10 + fVar7;
          *(float *)(local_100.Data + lVar24 * 0xc + 4) = (fVar25 - fVar2) * fVar10 + fVar6;
          *(float *)(local_100.Data + lVar24 * 0xc + 8) = (fVar26 - fVar1) * fVar10 + fVar5;
          uVar20 = 0;
          if ((int)local_f0 < local_d0.ArrayNum) {
            uVar20 = uVar22 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          local_d0.AllocatorInstance.Data[lVar16] = (FScriptContainerElement)0x1;
          iVar14 = local_c0;
        }
      }
      local_a8 = local_a8 - 1;
      lVar16 = local_b0;
    } while (local_a8 != 0);
    local_a8 = 0;
  }
  uVar19 = 0;
  local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.ArrayNum = 0;
  local_e0.ArrayMax = 0;
  uVar21 = uVar19;
  uVar23 = uVar19;
  if (0 < local_f8) {
    do {
      uVar22 = (uint)uVar21;
      uVar20 = 0;
      if ((int)uVar22 < local_d0.ArrayNum) {
        uVar20 = ~uVar22 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (local_d0.AllocatorInstance.Data[uVar19] == (FScriptContainerElement)0x0) {
        uVar20 = 0;
        if ((int)uVar22 < local_f8) {
          uVar20 = ~uVar22 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar17 = local_100.Data + uVar23;
        if (((local_e0.AllocatorInstance.Data <= pFVar17) &&
            (pFVar17 < local_e0.AllocatorInstance.Data + (longlong)local_e0.ArrayMax * 0xc)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (local_e0.ArrayNum == local_e0.ArrayMax) {
          local_e0.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,&local_e0.AllocatorInstance,&local_e0.ArrayMax);
        }
        lVar16 = (longlong)local_e0.ArrayNum;
        local_e0.ArrayNum = local_e0.ArrayNum + 1;
        *(undefined8 *)(local_e0.AllocatorInstance.Data + lVar16 * 0xc) = *(undefined8 *)pFVar17;
        *(undefined4 *)(local_e0.AllocatorInstance.Data + lVar16 * 0xc + 8) =
             *(undefined4 *)(pFVar17 + 8);
      }
      uVar19 = uVar19 + 1;
      uVar21 = (ulonglong)(uVar22 + 1);
      uVar23 = uVar23 + 0xc;
    } while ((int)(uVar22 + 1) < local_f8);
  }
  Build(&local_e0,param_1,param_2,param_3,param_4,Default);
  if ((param_3->ArrayNum < 4) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InOutVertices.Num() > 3",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CollisionConvexMesh.h"
                          ,0x1b7,L""), bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.AllocatorInstance.Data);
  }
  if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.AllocatorInstance.Data);
  }
  if (local_100.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data);
  }
  return;
}

// operator() @ 14388ef90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`Chaos::FConvexBuilder::Build'::__l2::<lambda_1>::operator()
          (void *this,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_2,
          TVector<float,3> *param_3,float param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  int iVar9;
  undefined4 uVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  
  iVar9 = param_1->ArrayNum;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNum(param_2,iVar9 * 2,Default);
  uVar15 = 0;
  if (0 < iVar9) {
    lVar16 = 0;
    lVar18 = (longlong)iVar9;
    do {
      uVar17 = ~uVar15 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar15 < param_1->ArrayNum) {
        uVar14 = uVar17;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar11 = (param_1->AllocatorInstance).Data;
      uVar8 = *(undefined8 *)(pFVar11 + lVar16);
      uVar10 = *(undefined4 *)(pFVar11 + lVar16 + 8);
      uVar14 = 0;
      if ((int)uVar15 < param_2->ArrayNum) {
        uVar14 = uVar17;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar11 = (param_2->AllocatorInstance).Data;
      *(undefined8 *)(pFVar11 + lVar16) = uVar8;
      *(undefined4 *)(pFVar11 + lVar16 + 8) = uVar10;
      uVar14 = 0;
      if ((int)uVar15 < param_1->ArrayNum) {
        uVar14 = uVar17;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar11 = (param_1->AllocatorInstance).Data;
      fVar2 = *(float *)&param_3->field_0x8;
      fVar3 = *(float *)&param_3->field_0x4;
      fVar4 = *(float *)(pFVar11 + lVar16 + 8);
      fVar5 = *(float *)param_3;
      fVar6 = *(float *)(pFVar11 + lVar16 + 4);
      fVar7 = *(float *)(pFVar11 + lVar16);
      uVar14 = 0;
      if ((int)(uVar15 + iVar9) < param_2->ArrayNum) {
        uVar14 = ~(uVar15 + iVar9) >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar15 = uVar15 + 1;
      lVar1 = lVar16 + (longlong)iVar9 * 0xc;
      pFVar11 = (param_2->AllocatorInstance).Data;
      lVar16 = lVar16 + 0xc;
      *(float *)(pFVar11 + lVar1) = param_4 * fVar5 + fVar7;
      *(float *)(pFVar11 + lVar1 + 4) = param_4 * fVar3 + fVar6;
      *(float *)(pFVar11 + lVar1 + 8) = param_4 * fVar2 + fVar4;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  return;
}

// operator() @ 1438909c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`Chaos::FConvexBuilder::Build'::__l67::<lambda_3>::operator()
          (void *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,TVector<float> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType *pFVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  uint *puVar16;
  longlong lVar17;
  uint *puVar18;
  uint uVar19;
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  uint local_res20 [2];
  uint local_98;
  undefined1 local_94 [20];
  float local_80;
  uint *local_78;
  uint *local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float fStack_54;
  
  pFVar3 = *(ForAnyElementType **)((longlong)this + 0x18);
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  iVar8 = *(int *)&pFVar3[1].Data;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,pFVar3,piVar1);
  }
  *(int *)&pFVar3[1].Data = iVar8 + 1;
  puVar16 = (uint *)0x0;
  this_00 = (TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar3->Data + (longlong)iVar8 * 0x10);
  (this_00->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this_00->ArrayNum = 0;
  this_00->ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(this_00,param_1->ArrayNum,Default);
  uVar15 = param_1->ArrayNum;
  local_94._4_8_ = SEXT48((int)uVar15);
  if (0 < (int)uVar15) {
    lVar17 = local_94._4_8_ * 4;
    puVar18 = puVar16;
    puVar11 = puVar16;
    do {
      uVar15 = uVar15 - 1;
      lVar17 = lVar17 + -4;
      uVar19 = (uint)puVar11;
      uVar9 = 0;
      if ((int)uVar19 < param_1->ArrayNum) {
        uVar9 = ~uVar19 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      plVar4 = *(longlong **)((longlong)this + 8);
      local_98 = *(uint *)((param_1->AllocatorInstance).Data + (longlong)puVar18 * 4);
      lVar14 = (longlong)(int)local_98;
      if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
        plVar13 = plVar4 + 7;
        if ((longlong *)plVar4[8] != (longlong *)0x0) {
          plVar13 = (longlong *)plVar4[8];
        }
        uVar9 = *(uint *)((longlong)plVar13 + (ulonglong)((int)plVar4[9] - 1U & local_98) * 4);
        if (uVar9 != 0xffffffff) {
          do {
            puVar11 = (uint *)((longlong)(int)uVar9 * 0x10 + *plVar4);
            if (*puVar11 == local_98) {
              puVar12 = puVar11 + 1;
              if (puVar11 == (uint *)0x0) {
                puVar12 = puVar16;
              }
              if (puVar12 != (uint *)0x0) {
                uVar9 = *puVar12;
                goto LAB_143890c5d;
              }
              break;
            }
            uVar9 = puVar11[2];
          } while (uVar9 != 0xffffffff);
        }
      }
      plVar4 = (longlong *)**(longlong **)this;
      uVar9 = 0;
      if ((int)local_98 < (int)plVar4[1]) {
        uVar9 = ~local_98 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar2 = (FScriptContainerElement *)(*plVar4 + lVar14 * 0xc);
      pFVar3 = *(ForAnyElementType **)((longlong)this + 0x20);
      local_res20[0] = *(uint *)&pFVar3[1].Data;
      if (((pFVar3->Data <= pFVar2) &&
          (pFVar2 < pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0xc)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar8 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar8 + 1;
      pFVar5 = pFVar3->Data;
      *(undefined8 *)(pFVar5 + (longlong)iVar8 * 0xc) = *(undefined8 *)pFVar2;
      *(undefined4 *)(pFVar5 + (longlong)iVar8 * 0xc + 8) = *(undefined4 *)(pFVar2 + 8);
      local_78 = &local_98;
      local_70 = local_res20;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>
                (*(TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                   **)((longlong)this + 8),(TPairInitializer<int_const_&,int_const_&> *)local_94,
                 (bool *)&local_78);
      uVar9 = local_res20[0];
LAB_143890c5d:
      uVar10 = 0;
      if ((int)uVar15 < this_00->ArrayNum) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar11 = (uint *)(ulonglong)(uVar19 + 1);
      puVar18 = (uint *)((longlong)puVar18 + 1);
      *(uint *)((this_00->AllocatorInstance).Data + lVar17) = uVar9;
    } while ((longlong)puVar18 < (longlong)local_94._4_8_);
  }
  local_80 = (param_2->field0_0x0)._s_0.Z;
  local_94._12_8_ = *(undefined8 *)&param_2->field0_0x0;
  plVar4 = *(longlong **)((longlong)this + 0x20);
  if ((this_00->ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar15 = *(uint *)(this_00->AllocatorInstance).Data;
  uVar9 = 0;
  if ((int)uVar15 < (int)plVar4[1]) {
    uVar9 = ~uVar15 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar17 = *plVar4;
  local_68 = *(undefined8 *)(lVar17 + (longlong)(int)uVar15 * 0xc);
  uStack_60 = *(undefined4 *)(lVar17 + 8 + (longlong)(int)uVar15 * 0xc);
  pFVar3 = *(ForAnyElementType **)((longlong)this + 0x10);
  fStack_54 = local_80;
  uStack_5c = (undefined4)local_94._12_8_;
  uStack_58 = SUB84(local_94._12_8_,4);
  if (((pFVar3->Data <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 <
       pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x18)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar8 = *(int *)&pFVar3[1].Data;
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x418,pFVar3,piVar1);
  }
  *(int *)&pFVar3[1].Data = iVar8 + 1;
  pFVar5 = pFVar3->Data;
  pFVar2 = pFVar5 + (longlong)iVar8 * 0x18;
  *(undefined8 *)pFVar2 = local_68;
  *(ulonglong *)(pFVar2 + 8) = CONCAT44(uStack_5c,uStack_60);
  *(ulonglong *)(pFVar5 + (longlong)iVar8 * 0x18 + 0x10) = CONCAT44(fStack_54,uStack_58);
  return;
}

// AddVertex @ 14389bd10

bool __cdecl
Chaos::FConvexBuilder::AddVertex
          (FMemPool *param_1,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_2,
          FHalfEdge *param_3,Params *param_4)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  undefined1 local_68 [8];
  TArray<Chaos::FConvexBuilder::FConvexFace_*,TSizedDefaultAllocator<32>_> local_60;
  TArray<Chaos::FConvexBuilder::FHalfEdge_*,TSizedDefaultAllocator<32>_> local_50;
  TArray<Chaos::FConvexBuilder::FConvexFace_*,TSizedDefaultAllocator<32>_> local_40;
  
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.ArrayNum = 0;
  local_60.ArrayMax = 0;
  BuildHorizon(param_2,param_3,&local_50,&local_60,param_4);
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  bVar7 = BuildFaces(param_1,param_2,param_3,&local_50,&local_60,&local_40);
  if (bVar7) {
    iVar6 = local_60.ArrayNum;
    uVar10 = (ulonglong)local_60.ArrayNum;
    pFVar3 = local_60.AllocatorInstance.Data + uVar10 * 8;
    FVar13.Data = local_60.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar10 != iVar6) {
        local_68[0] = 0;
        `TCheckedPointerIterator<Chaos::FConvexBuilder::FConvexFace_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_68);
      }
      if (FVar13.Data == pFVar3) break;
      plVar4 = *(longlong **)FVar13.Data;
      lVar11 = *plVar4;
      do {
        lVar11 = *(longlong *)(lVar11 + 0x10);
        pFVar12 = (param_1->HalfEdgesFreeIndices).AllocatorInstance.Data;
        pFVar1 = (FScriptContainerElement *)(lVar11 + 0x28);
        if ((pFVar12 <= pFVar1) &&
           (pFVar1 < pFVar12 + (longlong)(param_1->HalfEdgesFreeIndices).ArrayMax * 4)) {
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
        iVar9 = (param_1->HalfEdgesFreeIndices).ArrayNum;
        if (iVar9 == (param_1->HalfEdgesFreeIndices).ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)param_1,
                             &(param_1->HalfEdgesFreeIndices).ArrayMax);
        }
        (param_1->HalfEdgesFreeIndices).ArrayNum = iVar9 + 1;
        *(undefined4 *)
         ((param_1->HalfEdgesFreeIndices).AllocatorInstance.Data + (longlong)iVar9 * 4) =
             *(undefined4 *)pFVar1;
      } while (lVar11 != *plVar4);
      if (plVar4[5] != 0) {
        *(longlong *)(plVar4[5] + 0x30) = plVar4[6];
      }
      if (plVar4[6] != 0) {
        *(longlong *)(plVar4[6] + 0x28) = plVar4[5];
      }
      pFVar1 = (param_1->FacesFreeIndices).AllocatorInstance.Data;
      pFVar12 = (FScriptContainerElement *)(plVar4 + 7);
      if ((pFVar1 <= pFVar12) &&
         (pFVar12 < pFVar1 + (longlong)(param_1->FacesFreeIndices).ArrayMax * 4)) {
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
      iVar9 = (param_1->FacesFreeIndices).ArrayNum;
      piVar2 = &(param_1->FacesFreeIndices).ArrayMax;
      if (iVar9 == *piVar2) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(param_1->FacesFreeIndices).AllocatorInstance,piVar2);
      }
      (param_1->FacesFreeIndices).ArrayNum = iVar9 + 1;
      FVar13.Data = FVar13.Data + 8;
      *(undefined4 *)((param_1->FacesFreeIndices).AllocatorInstance.Data + (longlong)iVar9 * 4) =
           *(undefined4 *)pFVar12;
      uVar10 = local_60._8_8_ & 0xffffffff;
    }
    bVar7 = true;
  }
  else {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1014331345280697639>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CollisionConvexMesh.h"
                       ,0x527,
                       "BuildFaces(Pool, InVertices, ConflictV, HorizonEdges, FacesToDelete, NewFaces)"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    bVar7 = false;
  }
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.AllocatorInstance.Data);
  }
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  return bVar7;
}

// Build @ 14389ed80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014389eec4) */
/* WARNING: Removing unreachable block (ram,0x00014389eef3) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
Chaos::FConvexBuilder::Build
          (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<Chaos::TCorePlane<float,3>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_4,
          TAABB<float,3> *param_5,EBuildMethod param_6)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar6;
  ForAnyElementType _Src;
  TArray<Chaos::TCorePlane<float,3>,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong *plVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar12;
  uint *puVar13;
  byte bVar14;
  FStaticBasicLogRecord *pFVar15;
  uint *puVar16;
  ulonglong uVar17;
  ForElementType<FSetElementId> FVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  uint *puVar25;
  uint uVar26;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar27;
  uint uVar28;
  FScriptContainerElement *pFVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auStackY_498 [32];
  uint local_448;
  undefined1 local_444;
  undefined1 local_443;
  undefined1 local_442;
  undefined1 local_441;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_440;
  ForAnyElementType local_438;
  int local_430 [2];
  undefined1 local_428 [4];
  uint local_424;
  undefined1 local_420 [8];
  float local_418;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_410;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> local_408;
  Params local_3f8 [2];
  uint local_3f0 [2];
  uint local_3e8 [2];
  uint local_3e0 [2];
  FScriptContainerElement *local_3d8;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> local_3d0;
  TArray<Chaos::TCorePlane<float,3>,TSizedDefaultAllocator<32>_> *local_3c0;
  undefined8 local_3b8;
  float fStack_3b0;
  float fStack_3ac;
  float local_3a8;
  float fStack_3a4;
  undefined8 local_3a0;
  float local_398;
  undefined8 local_394;
  float local_38c;
  undefined8 local_388;
  float local_380;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> **local_378;
  undefined1 local_370 [8];
  TPairInitializer<int_const_&,int_const_&> local_368;
  undefined4 *local_358;
  longlong *local_350;
  uint uStack_348;
  uint uStack_344;
  TBitArray<FDefaultBitArrayAllocator> *local_340;
  undefined4 uStack_338;
  uint uStack_334;
  uint local_330;
  undefined4 uStack_32c;
  int iStack_328;
  undefined4 uStack_324;
  longlong *local_320;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_318;
  undefined8 uStack_2f8;
  TConvexHull3<float> local_2e8;
  uint *local_278;
  uint *local_270;
  uint *local_268;
  uint *local_260;
  uint *local_258;
  uint *local_250;
  code *local_248;
  undefined1 *local_240;
  code *local_238;
  undefined4 **local_230;
  code *local_228;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> ***local_220;
  code *local_218;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> ***local_210;
  code *local_208;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> ***local_200;
  code *local_1f8;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> ***local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c4;
  undefined4 local_1bc;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> **local_1b8;
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_1b0;
  TArray<Chaos::TCorePlane<float,3>,TSizedDefaultAllocator<32>_> *local_1a8;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_1a0;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_198;
  TAABB<float,3> *local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_178 [2];
  undefined4 local_14c;
  undefined1 local_148 [32];
  uint *local_128;
  uint local_120;
  undefined4 local_11c;
  undefined4 local_118;
  int local_114;
  undefined1 local_110 [8];
  ForElementType<FSetElementId> local_108;
  int local_100;
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_f8;
  void *local_b8;
  undefined4 local_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_498;
  local_3d8 = (FScriptContainerElement *)&param_2->ArrayMax;
  param_2->ArrayNum = 0;
  local_410 = param_4;
  local_3c0 = param_2;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,&param_2->AllocatorInstance,0,(int *)local_3d8);
  }
  param_4->ArrayNum = 0;
  lVar23 = 0xc;
  if (param_4->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
  }
  uVar3 = __real_ff7fffff;
  *(undefined4 *)&param_5->MMin = 0x7f7fffff;
  *(undefined4 *)&(param_5->MMin).field_0x4 = 0x7f7fffff;
  *(undefined4 *)&(param_5->MMin).field_0x8 = 0x7f7fffff;
  *(ulonglong *)&param_5->MMax = CONCAT44(uVar3,uVar3);
  *(undefined4 *)&(param_5->MMax).field_0x8 = uVar3;
  fVar30 = __real_3f800000;
  if (param_1->ArrayNum == 0) {
    return;
  }
  local_3d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3d0.ArrayNum = 0;
  local_3d0.ArrayMax = 0;
  local_420 = (undefined1  [8])0x0;
  local_418 = 0.0;
  local_440 = param_1;
  if (param_1->ArrayNum == 3) {
    pFVar29 = (param_1->AllocatorInstance).Data;
    local_3d0.ArrayNum = 0;
    local_3d0.ArrayMax = 0;
    local_3d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar19 = (param_1->AllocatorInstance).Data;
    fVar32 = (*(float *)(pFVar29 + 0x18) - *(float *)pFVar19) *
             (*(float *)(pFVar29 + 0x14) - *(float *)(pFVar19 + 8)) -
             (*(float *)(pFVar29 + 0x20) - *(float *)(pFVar19 + 8)) *
             (*(float *)(pFVar29 + 0xc) - *(float *)pFVar19);
    fVar33 = (*(float *)(pFVar29 + 0x20) - *(float *)(pFVar19 + 8)) *
             (*(float *)(pFVar29 + 0x10) - *(float *)(pFVar19 + 4)) -
             (*(float *)(pFVar29 + 0x1c) - *(float *)(pFVar19 + 4)) *
             (*(float *)(pFVar29 + 0x14) - *(float *)(pFVar19 + 8));
    fVar34 = (*(float *)(pFVar29 + 0x1c) - *(float *)(pFVar19 + 4)) *
             (*(float *)(pFVar29 + 0xc) - *(float *)pFVar19) -
             (*(float *)(pFVar29 + 0x18) - *(float *)pFVar19) *
             (*(float *)(pFVar29 + 0x10) - *(float *)(pFVar19 + 4));
    fVar31 = fVar32 * fVar32 + fVar33 * fVar33 + fVar34 * fVar34;
    local_418 = __real_3f800000 / SQRT(fVar31);
    local_420._4_4_ = local_418 * fVar32;
    local_420._0_4_ = local_418 * fVar33;
    local_418 = local_418 * fVar34;
    if ((double)SQRT(fVar31) <= __real_3f1a36e2eb1c432d) {
      local_444 = 0;
      bVar9 = `Chaos::FConvexBuilder::Build'::__l9::<lambda_2>::operator()(&local_444);
      if (!bVar9) goto LAB_1438a0234;
    }
    `Chaos::FConvexBuilder::Build'::__l2::<lambda_1>::operator()
              (&local_443,param_1,&local_3d0,(TVector<float,3> *)local_420,__real_3dcccccd);
    local_440 = &local_3d0;
    if (5 < (byte)LogChaos._0_1_) {
      pFVar15 = &::LOG_Static;
LAB_14389f07b:
      local_440 = &local_3d0;
      UE::Logging::Private::BasicLog<6>(pFVar15,(FLogCategoryBase *)&LogChaos);
    }
  }
  else {
    bVar9 = IsPlanarShape(param_1,(TVector<float,3> *)local_420);
    if (bVar9) {
      `Chaos::FConvexBuilder::Build'::__l2::<lambda_1>::operator()
                (&local_443,param_1,&local_3d0,(TVector<float,3> *)local_420,__real_3dcccccd);
      local_440 = &local_3d0;
      if (5 < (byte)LogChaos._0_1_) {
        pFVar15 = &::LOG_Static;
        goto LAB_14389f07b;
      }
    }
  }
  pTVar27 = local_440;
  uVar26 = local_440->ArrayNum;
  lVar21 = (longlong)(int)uVar26;
  local_424 = uVar26;
  if (((int)uVar26 < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar6 = local_440;
  pFVar29 = (pTVar27->AllocatorInstance).Data;
  if ((local_440->ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar19 = (pTVar6->AllocatorInstance).Data;
  local_1dc = *(undefined8 *)pFVar29;
  local_1e8 = *(undefined8 *)pFVar19;
  local_1e0 = *(undefined4 *)(pFVar19 + 8);
  local_1d4 = *(undefined4 *)(pFVar29 + 8);
  uVar22 = 0;
  *(undefined8 *)&param_5->MMin = local_1e8;
  *(undefined8 *)&param_5->MMax = local_1dc;
  *(undefined4 *)&(param_5->MMin).field_0x8 = local_1e0;
  *(undefined4 *)&(param_5->MMax).field_0x8 = local_1d4;
  uVar17 = uVar22;
  if (0 < (int)uVar26) {
    do {
      pTVar27 = local_440;
      uVar24 = (uint)uVar17;
      uVar26 = 0;
      if ((int)uVar24 < local_440->ArrayNum) {
        uVar26 = ~uVar24 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar29 = (pTVar27->AllocatorInstance).Data;
      fVar31 = *(float *)(pFVar29 + uVar22);
      if (*(float *)&param_5->MMin <= *(float *)(pFVar29 + uVar22)) {
        fVar31 = *(float *)&param_5->MMin;
      }
      fVar32 = *(float *)&(param_5->MMin).field_0x4;
      fVar33 = *(float *)(pFVar29 + uVar22 + 4);
      if (fVar32 <= *(float *)(pFVar29 + uVar22 + 4)) {
        fVar33 = fVar32;
      }
      fVar32 = *(float *)&(param_5->MMin).field_0x8;
      fVar34 = *(float *)(pFVar29 + uVar22 + 8);
      if (fVar32 <= *(float *)(pFVar29 + uVar22 + 8)) {
        fVar34 = fVar32;
      }
      *(float *)&param_5->MMin = fVar31;
      *(float *)&(param_5->MMin).field_0x4 = fVar33;
      *(float *)&(param_5->MMin).field_0x8 = fVar34;
      fVar31 = *(float *)&param_5->MMax;
      if (*(float *)&param_5->MMax <= *(float *)(pFVar29 + uVar22)) {
        fVar31 = *(float *)(pFVar29 + uVar22);
      }
      fVar32 = *(float *)&(param_5->MMax).field_0x8;
      if (fVar32 <= *(float *)(pFVar29 + uVar22 + 8)) {
        fVar32 = *(float *)(pFVar29 + uVar22 + 8);
      }
      fVar33 = *(float *)&(param_5->MMax).field_0x4;
      fVar34 = *(float *)(pFVar29 + uVar22 + 4);
      if (*(float *)(pFVar29 + uVar22 + 4) <= fVar33) {
        fVar34 = fVar33;
      }
      uVar22 = uVar22 + 0xc;
      *(float *)&param_5->MMax = fVar31;
      *(float *)&(param_5->MMax).field_0x4 = fVar34;
      *(float *)&(param_5->MMax).field_0x8 = fVar32;
      lVar21 = lVar21 + -1;
      uVar17 = (ulonglong)(uVar24 + 1);
      uVar26 = local_424;
    } while (lVar21 != 0);
  }
  pTVar27 = local_410;
  if (3 < (int)uVar26) {
    if (param_6 == Default) {
      if (bUseGeometryTConvexHull3 == false) {
LAB_14389f4a3:
        local_408.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_408.ArrayNum = 0;
        local_408.ArrayMax = 0;
        local_3f8[0].HorizonEpsilon = SuggestEpsilon(local_440);
        BuildConvexHull(local_440,&local_408,local_3f8);
        uVar17 = local_408._8_8_ & 0xffffffff;
        if (local_408.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(uVar17);
        }
        if ((int)*(uint *)local_3d8 < local_408.ArrayNum) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,4,local_408.ArrayNum,&local_3c0->AllocatorInstance,local_3c0->ArrayNum,
                     (int *)local_3d8);
          uVar17 = local_408._8_8_ & 0xffffffff;
        }
        uVar26 = 1;
        local_424 = (uint)uVar17;
        uVar22 = (ulonglong)(int)local_424;
        local_148._0_8_ = 0;
        local_148._8_8_ = 0;
        local_128 = (uint *)0x0;
        pFVar29 = local_408.AllocatorInstance.Data + 8;
        local_120 = 0;
        local_3d8 = local_408.AllocatorInstance.Data + uVar22 * 0xc;
        local_11c = 0x80;
        local_118 = 0xffffffff;
        local_114 = 0;
        local_108 = (ForElementType<FSetElementId>)0x0;
        local_100 = 0;
        local_448 = 0;
        while( true ) {
          pFVar19 = local_3d8;
          uVar24 = 0;
          if ((int)uVar17 != (int)uVar22) {
            local_442 = 0;
            `TCheckedPointerIterator<Chaos::TVector<int,3>,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_442);
          }
          pTVar27 = local_410;
          pTVar6 = local_440;
          pFVar1 = pFVar29 + -8;
          if (pFVar1 == pFVar19) break;
          uVar20 = *(uint *)pFVar1;
          if ((int)uVar20 < local_440->ArrayNum) {
            uVar24 = ~uVar20 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar27 = local_440;
          pFVar19 = (pTVar6->AllocatorInstance).Data;
          uVar24 = *(uint *)(pFVar29 + -4);
          local_3a0 = *(undefined8 *)(pFVar19 + (longlong)(int)uVar20 * 0xc);
          fVar31 = *(float *)(pFVar19 + (longlong)(int)uVar20 * 0xc + 8);
          uVar20 = 0;
          if ((int)uVar24 < local_440->ArrayNum) {
            uVar20 = ~uVar24 >> 0x1f;
          }
          local_398 = fVar31;
          if ((uVar20 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar6 = local_440;
          pFVar19 = (pTVar27->AllocatorInstance).Data;
          uVar20 = *(uint *)pFVar29;
          local_394 = *(undefined8 *)(pFVar19 + (longlong)(int)uVar24 * 0xc);
          local_38c = *(float *)(pFVar19 + (longlong)(int)uVar24 * 0xc + 8);
          uVar24 = 0;
          if ((int)uVar20 < local_440->ArrayNum) {
            uVar24 = ~uVar20 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar7 = local_3c0;
          pFVar19 = (pTVar6->AllocatorInstance).Data;
          local_388 = *(undefined8 *)(pFVar19 + (longlong)(int)uVar20 * 0xc);
          local_380 = *(float *)(pFVar19 + (longlong)(int)uVar20 * 0xc + 8);
          fVar32 = (float)local_388 - (float)local_3a0;
          fVar33 = (float)((ulonglong)local_388 >> 0x20) - local_3a0._4_4_;
          pFVar19 = (local_3c0->AllocatorInstance).Data;
          fStack_3ac = (local_394._4_4_ - local_3a0._4_4_) * (local_380 - fVar31) -
                       (local_38c - fVar31) * fVar33;
          fVar33 = fVar33 * ((float)local_394 - (float)local_3a0) -
                   (local_394._4_4_ - local_3a0._4_4_) * fVar32;
          local_3a8 = (local_38c - fVar31) * fVar32 -
                      (local_380 - fVar31) * ((float)local_394 - (float)local_3a0);
          local_3b8 = local_3a0;
          fStack_3a4 = fVar30 / SQRT(local_3a8 * local_3a8 + fStack_3ac * fStack_3ac +
                                     fVar33 * fVar33);
          fStack_3ac = fStack_3a4 * fStack_3ac;
          local_3a8 = fStack_3a4 * local_3a8;
          fStack_3a4 = fStack_3a4 * fVar33;
          fStack_3b0 = fVar31;
          if (((pFVar19 <= (FScriptContainerElement *)&local_3b8) &&
              ((FScriptContainerElement *)&local_3b8 <
               pFVar19 + (longlong)local_3c0->ArrayMax * 0x18)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar11 = pTVar7->ArrayNum;
          if (iVar11 == pTVar7->ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x418,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
          }
          pTVar7->ArrayNum = iVar11 + 1;
          pFVar4 = (pTVar7->AllocatorInstance).Data;
          puVar25 = (uint *)0x0;
          pFVar19 = pFVar4 + (longlong)iVar11 * 0x18;
          *(undefined8 *)pFVar19 = local_3b8;
          *(ulonglong *)(pFVar19 + 8) = CONCAT44(fStack_3ac,fStack_3b0);
          *(ulonglong *)(pFVar4 + (longlong)iVar11 * 0x18 + 0x10) = CONCAT44(fStack_3a4,local_3a8);
          local_438.Data = (FScriptContainerElement *)0x0;
          local_430[0] = 0;
          local_430[1] = 0;
          iVar11 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (4,4,3,&local_438,local_430,local_430 + 1);
          *(undefined8 *)(local_438.Data + (longlong)iVar11 * 4) = 0;
          *(undefined4 *)(local_438.Data + (longlong)iVar11 * 4 + 8) = 0;
          local_3f0[0] = *(uint *)pFVar1;
          if (local_148._8_4_ != local_114) {
            FVar18 = (ForElementType<FSetElementId>)local_110;
            if (local_108 != (ForElementType<FSetElementId>)0x0) {
              FVar18 = local_108;
            }
            uVar24 = *(uint *)((longlong)FVar18 + (ulonglong)(local_100 - 1U & local_3f0[0]) * 4);
            while (uVar24 != 0xffffffff) {
              puVar16 = (uint *)((longlong)(int)uVar24 * 0x10 + local_148._0_8_);
              if (*puVar16 == local_3f0[0]) {
                puVar13 = puVar16 + 1;
                if (puVar16 == (uint *)0x0) {
                  puVar13 = puVar25;
                }
                if (puVar13 != (uint *)0x0) {
                  uVar24 = *puVar13;
                  goto LAB_14389f937;
                }
                break;
              }
              uVar24 = puVar16[2];
            }
          }
          local_278 = local_3f0;
          local_270 = &local_448;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)local_148,(TPairInitializer<int_const_&,int_const_&> *)local_370,
                     (bool *)&local_278);
          uVar24 = local_448;
          local_448 = local_448 + 1;
LAB_14389f937:
          if ((local_430[0] < 1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(uint *)local_438.Data = uVar24;
          local_3e8[0] = *(uint *)(pFVar29 + -4);
          if (local_148._8_4_ != local_114) {
            FVar18 = (ForElementType<FSetElementId>)local_110;
            if (local_108 != (ForElementType<FSetElementId>)0x0) {
              FVar18 = local_108;
            }
            uVar24 = *(uint *)((longlong)FVar18 + (ulonglong)(local_100 - 1U & local_3e8[0]) * 4);
            while (uVar24 != 0xffffffff) {
              puVar16 = (uint *)((longlong)(int)uVar24 * 0x10 + local_148._0_8_);
              if (*puVar16 == local_3e8[0]) {
                puVar13 = puVar16 + 1;
                if (puVar16 == (uint *)0x0) {
                  puVar13 = puVar25;
                }
                if (puVar13 != (uint *)0x0) {
                  uVar24 = *puVar13;
                  goto LAB_14389fa17;
                }
                break;
              }
              uVar24 = puVar16[2];
            }
          }
          local_268 = local_3e8;
          local_260 = &local_448;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)local_148,(TPairInitializer<int_const_&,int_const_&> *)(local_370 + 4),
                     (bool *)&local_268);
          uVar24 = local_448;
          local_448 = local_448 + 1;
LAB_14389fa17:
          if ((local_430[0] < 2) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(uint *)(local_438.Data + 4) = uVar24;
          local_3e0[0] = *(uint *)pFVar29;
          if (local_148._8_4_ != local_114) {
            FVar18 = (ForElementType<FSetElementId>)local_110;
            if (local_108 != (ForElementType<FSetElementId>)0x0) {
              FVar18 = local_108;
            }
            uVar24 = *(uint *)((longlong)FVar18 + (ulonglong)(local_100 - 1U & local_3e0[0]) * 4);
            while (uVar24 != 0xffffffff) {
              puVar16 = (uint *)((longlong)(int)uVar24 * 0x10 + local_148._0_8_);
              if (*puVar16 == local_3e0[0]) {
                puVar13 = puVar16 + 1;
                if (puVar16 == (uint *)0x0) {
                  puVar13 = puVar25;
                }
                if (puVar13 != (uint *)0x0) {
                  uVar24 = *puVar13;
                  goto LAB_14389faf7;
                }
                break;
              }
              uVar24 = puVar16[2];
            }
          }
          local_258 = local_3e0;
          local_250 = &local_448;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)local_148,&local_368,(bool *)&local_258);
          uVar24 = local_448;
          local_448 = local_448 + 1;
LAB_14389faf7:
          if ((local_430[0] < 3) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(uint *)(local_438.Data + 8) = uVar24;
          pFVar19 = (param_3->AllocatorInstance).Data;
          if (((pFVar19 <= (FScriptContainerElement *)&local_438) &&
              ((FScriptContainerElement *)&local_438 < pFVar19 + (longlong)param_3->ArrayMax * 0x10)
              ) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar11 = param_3->ArrayNum;
          if (iVar11 == param_3->ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          _Src.Data = local_438.Data;
          pFVar19 = (param_3->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
          param_3->ArrayNum = iVar11 + 1;
          *(FScriptContainerElement **)&pFVar19->field_0x0 = (FScriptContainerElement *)0x0;
          lVar23 = (longlong)local_430[0];
          *(int *)&pFVar19[8].field_0x0 = local_430[0];
          if (local_430[0] == 0) {
            *(int *)(pFVar19 + 0xc) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_430[0],0,(ForAnyElementType *)pFVar19,local_430[0],
                       (int *)(pFVar19 + 0xc));
            memcpy(*(FScriptContainerElement **)&pFVar19->field_0x0,_Src.Data,lVar23 << 2);
          }
          if (local_438.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_438.Data);
          }
          uVar17 = local_408._8_8_ & 0xffffffff;
          pFVar29 = pFVar29 + 0xc;
          uVar22 = (ulonglong)local_424;
        }
        TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNum
                  (local_410,local_148._8_4_ - local_114,Default);
        uVar20 = local_120;
        uStack_334 = uVar24;
        local_330 = uVar24;
        if (local_120 != 0) {
          puVar25 = (uint *)(local_148 + 0x10);
          if (local_128 != (uint *)0x0) {
            puVar25 = local_128;
          }
          uVar28 = *puVar25;
          while (uVar28 == 0) {
            lVar23 = (longlong)(int)uVar24;
            local_330 = local_330 + 0x20;
            uVar24 = uVar24 + 1;
            uStack_334 = local_120;
            if ((int)((local_120 - 1) + ((int)(local_120 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar24)
            goto LAB_14389fd41;
            uVar28 = puVar25[lVar23 + 1];
          }
          uVar26 = -uVar28 & uVar28;
          uVar17 = (ulonglong)uVar26 * 2 + 1;
          lVar23 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar23 == 0; lVar23 = lVar23 + -1) {
            }
          }
          uStack_334 = (local_330 - 1) + (int)lVar23;
          local_368.Key._4_4_ = (int)lVar23;
          if ((int)local_120 < (int)uStack_334) {
            uStack_334 = local_120;
          }
        }
LAB_14389fd41:
        local_350 = (longlong *)local_148;
        uStack_32c = local_14c;
        uVar28 = local_120 & 0xffffffe0;
        local_340 = (TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10);
        uStack_338 = 0xffffffff;
        uStack_348 = uVar24;
        uStack_344 = uVar26;
        iStack_328 = local_148._8_4_ - local_114;
        local_320 = (longlong *)local_148;
        TStack_318._padding_ = CONCAT44(uVar26,uVar24);
        iVar11 = (int)local_120 >> 5;
        bVar14 = (byte)local_120;
        TStack_318.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10);
        TStack_318.UnvisitedBitMask = 0xffffffff;
        TStack_318.CurrentBitIndex = uStack_334;
        TStack_318.BaseBitIndex = local_330;
        TStack_318._28_4_ = local_14c;
        uStack_2f8 = CONCAT44(uStack_324,local_148._8_4_ - local_114);
        if (((int)local_120 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (uVar20 != local_120) {
          puVar25 = (uint *)(local_148 + 0x10);
          if (local_128 != (uint *)0x0) {
            puVar25 = local_128;
          }
          uVar26 = -1 << (bVar14 & 0x1f) & puVar25[iVar11];
          while (uVar26 == 0) {
            lVar23 = (longlong)iVar11;
            uVar28 = uVar28 + 0x20;
            iVar11 = iVar11 + 1;
            uVar20 = local_120;
            if ((int)((local_120 - 1) + ((int)(local_120 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
            goto LAB_14389fe70;
            uVar26 = puVar25[lVar23 + 1];
          }
          uVar17 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
          lVar23 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar23 == 0; lVar23 = lVar23 + -1) {
            }
          }
          local_368.Value._0_4_ = (int)lVar23;
          uVar20 = (int)local_368.Value + -1 + uVar28;
          if ((int)local_120 < (int)uVar20) {
            uVar20 = local_120;
          }
        }
LAB_14389fe70:
        while( true ) {
          plVar8 = local_320;
          if ((int)local_320[1] - *(int *)((longlong)local_320 + 0x34) != (int)uStack_2f8) {
            local_441 = 0;
            `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_441);
          }
          pTVar6 = local_440;
          lVar23 = (longlong)TStack_318.CurrentBitIndex;
          if (((TStack_318.CurrentBitIndex == uVar20) &&
              (TStack_318.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10))) &&
             (plVar8 == (longlong *)local_148)) break;
          lVar21 = *plVar8;
          uVar26 = *(uint *)(lVar21 + lVar23 * 0x10);
          uVar24 = 0;
          if ((int)uVar26 < local_440->ArrayNum) {
            uVar24 = ~uVar26 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar29 = (pTVar6->AllocatorInstance).Data;
          uVar24 = *(uint *)(lVar21 + 4 + lVar23 * 0x10);
          uVar2 = *(undefined8 *)(pFVar29 + (longlong)(int)uVar26 * 0xc);
          uVar3 = *(undefined4 *)(pFVar29 + (longlong)(int)uVar26 * 0xc + 8);
          uVar26 = 0;
          if ((int)uVar24 < pTVar27->ArrayNum) {
            uVar26 = ~uVar24 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar29 = (pTVar27->AllocatorInstance).Data;
          *(undefined8 *)(pFVar29 + (longlong)(int)uVar24 * 0xc) = uVar2;
          *(undefined4 *)(pFVar29 + (longlong)(int)uVar24 * 0xc + 8) = uVar3;
          TStack_318.UnvisitedBitMask = TStack_318.UnvisitedBitMask & ~TStack_318._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_318);
        }
        local_100 = 0;
        if (local_108 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_108);
        }
        TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_148);
        if (local_408.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_408.AllocatorInstance.Data);
        }
        goto LAB_1438a0211;
      }
      if (bUseSimplifierForTConvexHull3 == false) goto LAB_14389f269;
LAB_14389ffee:
      bVar9 = true;
    }
    else {
      if (param_6 != ConvexHull3) {
        if (param_6 == ConvexHull3Simplified) goto LAB_14389ffee;
        goto LAB_14389f4a3;
      }
LAB_14389f269:
      bVar9 = false;
    }
    local_2e8.Line.Origin.field0_0x0._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_2e8.Line.Origin.field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z
    ;
    local_2e8.Line.Direction.field0_0x0._0_8_ =
         UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_;
    local_2e8.SimplificationSettings.DegenerateEdgeTolerance = 0.0;
    local_2e8.SimplificationSettings.MaxHullVertices = -1;
    local_2e8.SimplificationSettings.SkipAtHullDistanceAbsolute = -3.4028235e+38;
    local_2e8.SimplificationSettings.SkipAtHullDistanceAsFraction = -3.4028235e+38;
    local_2e8.Progress = (FProgressCancel *)0x0;
    local_2e8.Line.Direction.field0_0x0._s_0.Z =
         UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z;
    local_2e8.NumHullPoints = 0;
    local_2e8.Hull.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2e8.Hull.ArrayNum = 0;
    local_2e8.Hull.ArrayMax = 0;
    local_2e8.HullNeighbors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2e8.HullNeighbors.ArrayNum = 0;
    local_2e8.HullNeighbors.ArrayMax = 0;
    local_2e8.bSaveTriangleNeighbors = true;
    if (bVar9) {
      local_2e8.SimplificationSettings.DegenerateEdgeTolerance = 1e-08;
    }
    pTVar12 = TArrayView<Chaos::TVector<float,3>_const_,int>::
              TArrayView<Chaos::TVector<float,3>_const_,int><TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_const_&,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_>
                        (local_178,local_440);
    local_188 = *(undefined4 *)&pTVar12->DataPtr;
    uStack_184 = *(undefined4 *)((longlong)&pTVar12->DataPtr + 4);
    iStack_180 = pTVar12->ArrayNum;
    uStack_17c = *(undefined4 *)&pTVar12->field_0xc;
    local_240 = local_428;
    local_248 = UE::Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::TConvexHull3<float>::Solve<Chaos::TVector<float,3>_>'::__l2::<lambda_2>,bool,int>
                ::Call;
    local_358 = &local_188;
    local_230 = &local_358;
    local_238 = UE::Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::TConvexHull3<float>::Solve<Chaos::TVector<float,3>_>'::__l2::<lambda_1>,UE::Math::TVector<float>,int>
                ::Call;
    bVar10 = UE::Geometry::TConvexHull3<float>::Solve
                       (&local_2e8,iStack_180,
                        (TFunctionRef<UE::Math::TVector<float>___cdecl(int)> *)&local_238,
                        (TFunctionRef<bool___cdecl(int)> *)&local_248);
    pTVar27 = local_410;
    if (bVar10) {
      local_1b8 = &local_440;
      local_1b0 = &local_f8;
      local_378 = &local_440;
      local_1a8 = local_3c0;
      local_f8._0_8_ = 0;
      local_f8._8_8_ = 0;
      local_f8._32_8_ = 0;
      local_f8._40_4_ = 0;
      local_f8._44_4_ = 0x80;
      local_f8._48_4_ = 0xffffffff;
      local_f8._52_4_ = 0;
      local_b8 = (void *)0x0;
      local_b0 = 0;
      local_198 = local_410;
      local_190 = param_5;
      local_1a0 = param_3;
      if (bVar9) {
        local_228 = UE::Core::Private::Function::
                    TFunctionRefCaller<`Chaos::FConvexBuilder::Build'::__l67::<lambda_4>,UE::Math::TVector<float>,int>
                    ::Call;
        local_210 = &local_1b8;
        local_218 = UE::Core::Private::Function::
                    TFunctionRefCaller<`Chaos::FConvexBuilder::Build'::__l67::<lambda_3>,void,TArray<int,TSizedDefaultAllocator<32>_>_&,UE::Math::TVector<float>_>
                    ::Call;
        local_220 = &local_378;
        UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces
                  (&local_2e8,
                   (TFunctionRef<void___cdecl(TArray<int,TSizedDefaultAllocator<32>_>_&,UE::Math::TVector<float>)>
                    *)&local_218,(TFunctionRef<UE::Math::TVector<float>___cdecl(int)> *)&local_228,
                   fVar30,fVar30);
      }
      else {
        local_208 = UE::Core::Private::Function::
                    TFunctionRefCaller<`Chaos::FConvexBuilder::Build'::__l67::<lambda_4>,UE::Math::TVector<float>,int>
                    ::Call;
        local_1f0 = &local_1b8;
        local_1f8 = UE::Core::Private::Function::
                    TFunctionRefCaller<`Chaos::FConvexBuilder::Build'::__l67::<lambda_3>,void,TArray<int,TSizedDefaultAllocator<32>_>_&,UE::Math::TVector<float>_>
                    ::Call;
        local_200 = &local_378;
        UE::Geometry::TConvexHull3<float>::GetFaces
                  (&local_2e8,
                   (TFunctionRef<void___cdecl(TArray<int,TSizedDefaultAllocator<32>_>_&,UE::Math::TVector<float>)>
                    *)&local_1f8,(TFunctionRef<UE::Math::TVector<float>___cdecl(int)> *)&local_208);
      }
      if ((pTVar27->ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar29 = (pTVar27->AllocatorInstance).Data;
      if ((pTVar27->ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar19 = (pTVar27->AllocatorInstance).Data;
      uVar26 = 1;
      local_1c4 = *(undefined8 *)pFVar29;
      local_1d0 = *(undefined8 *)pFVar19;
      local_1c8 = *(undefined4 *)(pFVar19 + 8);
      local_1bc = *(undefined4 *)(pFVar29 + 8);
      *(undefined8 *)&param_5->MMin = local_1d0;
      *(undefined8 *)&param_5->MMax = local_1c4;
      *(undefined4 *)&(param_5->MMin).field_0x8 = local_1c8;
      *(undefined4 *)&(param_5->MMax).field_0x8 = local_1bc;
      iVar11 = pTVar27->ArrayNum;
      if (1 < iVar11) {
        do {
          uVar24 = 0;
          if ((int)uVar26 < iVar11) {
            uVar24 = ~uVar26 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar29 = (pTVar27->AllocatorInstance).Data;
          uVar26 = uVar26 + 1;
          fVar30 = *(float *)(pFVar29 + lVar23);
          if (*(float *)&param_5->MMin <= *(float *)(pFVar29 + lVar23)) {
            fVar30 = *(float *)&param_5->MMin;
          }
          fVar31 = *(float *)&(param_5->MMin).field_0x4;
          fVar32 = *(float *)(pFVar29 + lVar23 + 4);
          if (fVar31 <= *(float *)(pFVar29 + lVar23 + 4)) {
            fVar32 = fVar31;
          }
          fVar31 = *(float *)&(param_5->MMin).field_0x8;
          fVar33 = *(float *)(pFVar29 + lVar23 + 8);
          if (fVar31 <= *(float *)(pFVar29 + lVar23 + 8)) {
            fVar33 = fVar31;
          }
          *(float *)&param_5->MMin = fVar30;
          *(float *)&(param_5->MMin).field_0x4 = fVar32;
          *(float *)&(param_5->MMin).field_0x8 = fVar33;
          fVar30 = *(float *)&(param_5->MMax).field_0x8;
          if (fVar30 <= *(float *)(pFVar29 + lVar23 + 8)) {
            fVar30 = *(float *)(pFVar29 + lVar23 + 8);
          }
          fVar31 = *(float *)(pFVar29 + lVar23);
          if (*(float *)(pFVar29 + lVar23) <= *(float *)&param_5->MMax) {
            fVar31 = *(float *)&param_5->MMax;
          }
          fVar32 = *(float *)&(param_5->MMax).field_0x4;
          fVar33 = *(float *)(pFVar29 + lVar23 + 4);
          if (*(float *)(pFVar29 + lVar23 + 4) <= fVar32) {
            fVar33 = fVar32;
          }
          lVar23 = lVar23 + 0xc;
          *(float *)&param_5->MMax = fVar31;
          *(float *)&(param_5->MMax).field_0x4 = fVar33;
          *(float *)&(param_5->MMax).field_0x8 = fVar30;
          iVar11 = pTVar27->ArrayNum;
        } while ((int)uVar26 < iVar11);
      }
      local_b0 = 0;
      if (local_b8 != (void *)0x0) {
        FMemory::Free(local_b8);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_f8);
    }
    if (local_2e8.HullNeighbors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.HullNeighbors.AllocatorInstance.Data);
    }
    if (local_2e8.Hull.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.Hull.AllocatorInstance.Data);
    }
  }
LAB_1438a0211:
  if ((2 < (byte)LogChaos._0_1_) && (pTVar27->ArrayNum == 0)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
  }
LAB_1438a0234:
  if (local_3d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d0.AllocatorInstance.Data);
  }
  return;
}

// BuildConvexHull @ 1438a02b0

/* WARNING: Type propagation algorithm not settling */

void __cdecl
Chaos::FConvexBuilder::BuildConvexHull
          (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> *param_2,Params *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  ForAnyElementType FVar6;
  float fVar7;
  FHalfEdge *pFVar8;
  FHalfEdge *pFVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  FConvexFace *pFVar13;
  FConvexFace *pFVar14;
  undefined8 *puVar15;
  FHalfEdge *pFVar16;
  uint uVar17;
  longlong lVar18;
  int iVar19;
  bool bVar20;
  float fVar21;
  int local_f8;
  int iStack_f4;
  int local_f0;
  FMemPool local_e8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_static_void___cdecl_Chaos::FConvexBuilder::BuildConvexHull(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>&___ptr64,Chaos::FConvexBuilder::Params_const&___ptr64)'
                ::__l2::__CpuProfilerEventSpecId273,"Chaos::BuildConvexHull",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CollisionConvexMesh.h"
               ,0x111);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_static_void___cdecl_Chaos::FConvexBuilder::BuildConvexHull(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_const&___ptr64,TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_>&___ptr64,Chaos::FConvexBuilder::Params_const&___ptr64)'
               ::__l2::__CpuProfilerEventSpecId273);
  }
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  local_e8.HalfEdgesFreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.HalfEdgesFreeIndices.ArrayNum = 0;
  local_e8.HalfEdgesFreeIndices.ArrayMax = 0;
  local_e8.HalfEdges.Chunks.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.HalfEdges.Chunks.Array.ArrayMax = 0;
  local_e8.HalfEdges.NumElements = 0;
  local_e8.HalfEdges.Chunks.Array.ArrayNum = 0;
  local_e8.FacesFreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.FacesFreeIndices.ArrayNum = 0;
  local_e8.FacesFreeIndices.ArrayMax = 0;
  local_e8.Faces.Chunks.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Faces.Chunks.Array.ArrayMax = 0;
  local_e8.Faces.NumElements = 0;
  local_e8.Faces.Chunks.Array.ArrayNum = 0;
  pFVar13 = BuildInitialHull(&local_e8,param_1);
  FVar6.Data = local_e8.Faces.Chunks.Array.AllocatorInstance.Data;
  iVar12 = local_e8.Faces.Chunks.Array.ArrayNum;
  if (pFVar13 != (FConvexFace *)0x0) {
    if (local_e8.FacesFreeIndices.ArrayNum == 0) {
      uVar3 = *(undefined8 *)&(pFVar13->Plane).MX;
      uVar4 = *(undefined8 *)&(pFVar13->Plane).MX.field_0x8;
      local_78 = *(undefined8 *)&(pFVar13->Plane).MNormal.field_0x4;
      iStack_60 = local_e8.Faces.NumElements;
      uStack_90 = 0;
      local_88 = uVar3;
      uStack_80 = uVar4;
      puVar15 = operator_new<Chaos::FConvexBuilder::FConvexFace,16384,TSizedDefaultAllocator<32>_>
                          (0x40,&local_e8.Faces);
      if (puVar15 != (undefined8 *)0x0) {
        *puVar15 = local_98;
        puVar15[1] = uStack_90;
        puVar15[2] = uVar3;
        puVar15[3] = uVar4;
        puVar15[4] = local_78;
        puVar15[5] = uStack_70;
        puVar15[6] = local_68;
        puVar15[7] = CONCAT44(uStack_5c,iStack_60);
      }
      pFVar14 = TChunkedArray<Chaos::FConvexBuilder::FConvexFace,16384,TSizedDefaultAllocator<32>_>
                ::operator[](&local_e8.Faces,local_e8.Faces.NumElements + -1);
    }
    else {
      if (local_e8.FacesFreeIndices.ArrayNum < 1) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      uVar17 = local_e8.FacesFreeIndices.ArrayNum - 1;
      iVar12 = *(int *)(local_e8.FacesFreeIndices.AllocatorInstance.Data + (longlong)(int)uVar17 * 4
                       );
      iVar19 = local_e8.FacesFreeIndices.ArrayNum;
      if (~uVar17 + local_e8.FacesFreeIndices.ArrayNum != 0) {
        memmove(local_e8.FacesFreeIndices.AllocatorInstance.Data + (longlong)(int)uVar17 * 4,
                local_e8.FacesFreeIndices.AllocatorInstance.Data + (longlong)(int)uVar17 * 4 + 4,
                (longlong)(int)(~uVar17 + local_e8.FacesFreeIndices.ArrayNum) << 2);
        iVar19 = local_e8.FacesFreeIndices.ArrayNum;
      }
      local_e8.FacesFreeIndices.ArrayNum = iVar19 + -1;
      pFVar14 = TChunkedArray<Chaos::FConvexBuilder::FConvexFace,16384,TSizedDefaultAllocator<32>_>
                ::operator[](&local_e8.Faces,iVar12);
      pFVar14->ConflictList = (FHalfEdge *)0x0;
      uVar3 = *(undefined8 *)&(pFVar13->Plane).MX.field_0x8;
      *(undefined8 *)&(pFVar14->Plane).MX = *(undefined8 *)&(pFVar13->Plane).MX;
      *(undefined8 *)&(pFVar14->Plane).MX.field_0x8 = uVar3;
      *(undefined8 *)&(pFVar14->Plane).MNormal.field_0x4 =
           *(undefined8 *)&(pFVar13->Plane).MNormal.field_0x4;
      if ((pFVar14->PoolIdx != iVar12) &&
         (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1014331345280696553>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CollisionConvexMesh.h"
                              ,0xe9,"FreeFace->PoolIdx == Idx"), bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar14->Next = pFVar13;
    pFVar14->Prev = (FConvexFace *)0x0;
    pFVar13->Prev = pFVar14;
    pFVar16 = FindConflictVertex(param_1,pFVar14->Next);
    fVar7 = __real_ff7fffff;
    if (pFVar16 == (FHalfEdge *)0x0) {
LAB_1438a0651:
      for (pFVar13 = pFVar14->Next; FVar6.Data = local_e8.Faces.Chunks.Array.AllocatorInstance.Data,
          iVar12 = local_e8.Faces.Chunks.Array.ArrayNum, pFVar13 != (FConvexFace *)0x0;
          pFVar13 = pFVar13->Next) {
        pFVar16 = pFVar13->FirstEdge->Next;
        iStack_f4 = pFVar16->Vertex;
        local_f0 = pFVar16->Next->Vertex;
        local_f8 = pFVar13->FirstEdge->Vertex;
        pFVar1 = (param_2->AllocatorInstance).Data;
        if (((pFVar1 <= (FScriptContainerElement *)&local_f8) &&
            ((FScriptContainerElement *)&local_f8 < pFVar1 + (longlong)param_2->ArrayMax * 0xc)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar12 = param_2->ArrayNum;
        if (iVar12 == param_2->ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar12 + 1;
        pFVar1 = (param_2->AllocatorInstance).Data;
        *(ulonglong *)(pFVar1 + (longlong)iVar12 * 0xc) = CONCAT44(iStack_f4,local_f8);
        *(int *)(pFVar1 + (longlong)iVar12 * 0xc + 8) = local_f0;
      }
    }
    else {
      while (bVar10 = AddVertex(&local_e8,param_1,pFVar16,param_3),
            FVar6.Data = local_e8.Faces.Chunks.Array.AllocatorInstance.Data,
            iVar12 = local_e8.Faces.Chunks.Array.ArrayNum, bVar10) {
        pFVar13 = pFVar14->Next;
        while( true ) {
          if (pFVar13 == (FConvexFace *)0x0) goto LAB_1438a0651;
          pFVar8 = pFVar13->ConflictList;
          pFVar9 = (FHalfEdge *)0x0;
          fVar21 = fVar7;
          while (fVar5 = fVar21, pFVar16 = pFVar9, pFVar9 = pFVar8, pFVar9 != (FHalfEdge *)0x0) {
            uVar17 = pFVar9->Vertex;
            lVar18 = (longlong)(int)uVar17;
            uVar11 = 0;
            if ((int)uVar17 < param_1->ArrayNum) {
              uVar11 = ~uVar17 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar1 = (param_1->AllocatorInstance).Data;
            fVar21 = *(float *)(pFVar1 + lVar18 * 0xc + 4) *
                     *(float *)&(pFVar13->Plane).MNormal.field_0x4 +
                     *(float *)&(pFVar13->Plane).MNormal * *(float *)(pFVar1 + lVar18 * 0xc) +
                     *(float *)(pFVar1 + lVar18 * 0xc + 8) *
                     *(float *)&(pFVar13->Plane).MNormal.field_0x8;
            pFVar8 = pFVar9->Next;
            if (fVar21 <= fVar5) {
              pFVar9 = pFVar16;
              fVar21 = fVar5;
            }
          }
          if (pFVar16 != (FHalfEdge *)0x0) break;
          if ((pFVar13->ConflictList != (FHalfEdge *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CurFace->ConflictList == nullptr || MaxV",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CollisionConvexMesh.h"
                                  ,0x453,L""), bVar10)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar13 = pFVar13->Next;
        }
        if (pFVar16->Prev != (FHalfEdge *)0x0) {
          pFVar16->Prev->Next = pFVar16->Next;
        }
        if (pFVar16->Next != (FHalfEdge *)0x0) {
          pFVar16->Next->Prev = pFVar16->Prev;
        }
        if (pFVar16 == pFVar13->ConflictList) {
          pFVar13->ConflictList = pFVar16->Next;
        }
        pFVar16->Face = pFVar13;
      }
    }
  }
  for (; iVar12 != 0; iVar12 = iVar12 + -1) {
    ::operator_delete(*(void **)FVar6.Data,0x4000);
    FVar6.Data = FVar6.Data + 8;
  }
  local_e8.Faces.Chunks.Array.ArrayNum = 0;
  if (local_e8.Faces.Chunks.Array.ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&local_e8.Faces,0,&local_e8.Faces.Chunks.Array.ArrayMax);
  }
  if (local_e8.Faces.Chunks.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Faces.Chunks.Array.AllocatorInstance.Data);
  }
  FVar6.Data = local_e8.HalfEdges.Chunks.Array.AllocatorInstance.Data;
  iVar12 = local_e8.HalfEdges.Chunks.Array.ArrayNum;
  if (local_e8.FacesFreeIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.FacesFreeIndices.AllocatorInstance.Data);
    FVar6.Data = local_e8.HalfEdges.Chunks.Array.AllocatorInstance.Data;
    iVar12 = local_e8.HalfEdges.Chunks.Array.ArrayNum;
  }
  for (; iVar12 != 0; iVar12 = iVar12 + -1) {
    ::operator_delete(*(void **)FVar6.Data,0x3ff0);
    FVar6.Data = FVar6.Data + 8;
  }
  local_e8.HalfEdges.Chunks.Array.ArrayNum = 0;
  if (local_e8.HalfEdges.Chunks.Array.ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&local_e8.HalfEdges,0,
               &local_e8.HalfEdges.Chunks.Array.ArrayMax);
  }
  if (local_e8.HalfEdges.Chunks.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.HalfEdges.Chunks.Array.AllocatorInstance.Data);
  }
  if (local_e8.HalfEdgesFreeIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.HalfEdgesFreeIndices.AllocatorInstance.Data);
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// BuildFaces @ 1438a08d0

bool __cdecl
Chaos::FConvexBuilder::BuildFaces
          (FMemPool *param_1,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_2,
          FHalfEdge *param_3,
          TArray<Chaos::FConvexBuilder::FHalfEdge_*,TSizedDefaultAllocator<32>_> *param_4,
          TArray<Chaos::FConvexBuilder::FConvexFace_*,TSizedDefaultAllocator<32>_> *param_5,
          TArray<Chaos::FConvexBuilder::FConvexFace_*,TSizedDefaultAllocator<32>_> *param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  FConvexFace *pFVar6;
  FConvexFace *pFVar7;
  FConvexFace *pFVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  FHalfEdge *pFVar14;
  undefined8 *puVar15;
  uint uVar16;
  FHalfEdge *pFVar17;
  FScriptContainerElement *pFVar18;
  TChunkedArray<Chaos::FConvexBuilder::FHalfEdge,16384,TSizedDefaultAllocator<32>_> *this;
  int *piVar19;
  undefined1 local_108 [4];
  uint local_104;
  FConvexFace *local_100;
  FHalfEdge *local_f8;
  FHalfEdge *local_f0;
  FHalfEdge *local_e8;
  longlong local_e0;
  int local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  int iStack_80;
  undefined4 uStack_7c;
  int local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  int iStack_50;
  undefined4 uStack_4c;
  
  iVar13 = param_4->ArrayNum;
  if (2 < iVar13) {
    if (param_6->ArrayMax < iVar13) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar13,&param_6->AllocatorInstance,param_6->ArrayNum,&param_6->ArrayMax);
    }
    iVar13 = param_4->ArrayNum;
    local_e8 = (FHalfEdge *)0x0;
    local_104 = 0;
    if (0 < iVar13) {
      local_e0 = 0;
      while( true ) {
        lVar5 = local_e0;
        uVar12 = 0;
        if ((int)local_104 < iVar13) {
          uVar12 = ~local_104 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        piVar3 = *(int **)((param_4->AllocatorInstance).Data + lVar5);
        iVar13 = (param_1->HalfEdgesFreeIndices).ArrayNum;
        iVar1 = *piVar3;
        if (iVar13 == 0) {
          iStack_b0 = (param_1->HalfEdges).NumElements;
          local_d8 = iVar1;
          puVar15 = operator_new<Chaos::FConvexBuilder::FHalfEdge,16384,TSizedDefaultAllocator<32>_>
                              (0x30,&param_1->HalfEdges);
          if (puVar15 != (undefined8 *)0x0) {
            *puVar15 = CONCAT44(uStack_d4,local_d8);
            puVar15[1] = uStack_d0;
            puVar15[2] = local_c8;
            puVar15[3] = uStack_c0;
            puVar15[4] = local_b8;
            puVar15[5] = CONCAT44(uStack_ac,iStack_b0);
          }
          local_f8 = TChunkedArray<Chaos::FConvexBuilder::FHalfEdge,16384,TSizedDefaultAllocator<32>_>
                     ::operator[](&param_1->HalfEdges,(param_1->HalfEdges).NumElements + -1);
        }
        else {
          if ((iVar13 < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            uVar11 = (*pcVar9)();
            return (bool)uVar11;
          }
          iVar13 = (param_1->HalfEdgesFreeIndices).ArrayNum;
          iVar2 = *(int *)((param_1->HalfEdgesFreeIndices).AllocatorInstance.Data +
                          (longlong)iVar13 * 4 + -4);
          (param_1->HalfEdgesFreeIndices).ArrayNum = iVar13 + -1;
          local_f8 = TChunkedArray<Chaos::FConvexBuilder::FHalfEdge,16384,TSizedDefaultAllocator<32>_>
                     ::operator[](&param_1->HalfEdges,iVar2);
          local_f8->Vertex = iVar1;
          if ((local_f8->PoolIdx != iVar2) &&
             (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<1014331345280696536>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CollisionConvexMesh.h"
                                  ,0xd8,"FreeHalfEdge->PoolIdx == Idx"), bVar10)) {
            pcVar9 = (code *)swi(3);
            uVar11 = (*pcVar9)();
            return (bool)uVar11;
          }
        }
        piVar19 = &(param_1->HalfEdges).NumElements;
        this = &param_1->HalfEdges;
        pFVar17 = *(FHalfEdge **)(piVar3 + 6);
        local_f8->Twin = pFVar17;
        pFVar17->Twin = local_f8;
        iVar13 = **(int **)(piVar3 + 4);
        iVar1 = (param_1->HalfEdgesFreeIndices).ArrayNum;
        if (iVar1 == 0) {
          iStack_80 = *piVar19;
          local_a8 = iVar13;
          puVar15 = operator_new<Chaos::FConvexBuilder::FHalfEdge,16384,TSizedDefaultAllocator<32>_>
                              (0x30,this);
          if (puVar15 != (undefined8 *)0x0) {
            *puVar15 = CONCAT44(uStack_a4,local_a8);
            puVar15[1] = uStack_a0;
            puVar15[2] = local_98;
            puVar15[3] = uStack_90;
            puVar15[4] = local_88;
            puVar15[5] = CONCAT44(uStack_7c,iStack_80);
          }
          local_f0 = TChunkedArray<Chaos::FConvexBuilder::FHalfEdge,16384,TSizedDefaultAllocator<32>_>
                     ::operator[](this,(param_1->HalfEdges).NumElements + -1);
        }
        else {
          if ((iVar1 < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            uVar11 = (*pcVar9)();
            return (bool)uVar11;
          }
          iVar1 = (param_1->HalfEdgesFreeIndices).ArrayNum;
          iVar2 = *(int *)((param_1->HalfEdgesFreeIndices).AllocatorInstance.Data +
                          (longlong)iVar1 * 4 + -4);
          (param_1->HalfEdgesFreeIndices).ArrayNum = iVar1 + -1;
          local_f0 = TChunkedArray<Chaos::FConvexBuilder::FHalfEdge,16384,TSizedDefaultAllocator<32>_>
                     ::operator[](this,iVar2);
          local_f0->Vertex = iVar13;
          if ((local_f0->PoolIdx != iVar2) &&
             (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<1014331345280696536>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CollisionConvexMesh.h"
                                  ,0xd8,"FreeHalfEdge->PoolIdx == Idx"), bVar10)) {
            pcVar9 = (code *)swi(3);
            uVar11 = (*pcVar9)();
            return (bool)uVar11;
          }
        }
        local_104 = local_104 + 1;
        uVar16 = (int)local_104 % param_4->ArrayNum;
        uVar12 = 0;
        if ((int)uVar16 < param_4->ArrayNum) {
          uVar12 = ~uVar16 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        pFVar17 = local_f0;
        if (local_f0->Vertex !=
            **(int **)((param_4->AllocatorInstance).Data + (longlong)(int)uVar16 * 8)) break;
        iVar13 = param_3->Vertex;
        iVar1 = (param_1->HalfEdgesFreeIndices).ArrayNum;
        if (iVar1 == 0) {
          iStack_50 = *piVar19;
          local_78 = iVar13;
          puVar15 = operator_new<Chaos::FConvexBuilder::FHalfEdge,16384,TSizedDefaultAllocator<32>_>
                              (0x30,this);
          if (puVar15 != (undefined8 *)0x0) {
            *puVar15 = CONCAT44(uStack_74,local_78);
            puVar15[1] = uStack_70;
            puVar15[2] = local_68;
            puVar15[3] = uStack_60;
            puVar15[4] = local_58;
            puVar15[5] = CONCAT44(uStack_4c,iStack_50);
          }
          pFVar14 = TChunkedArray<Chaos::FConvexBuilder::FHalfEdge,16384,TSizedDefaultAllocator<32>_>
                    ::operator[](this,(param_1->HalfEdges).NumElements + -1);
        }
        else {
          if ((iVar1 < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            uVar11 = (*pcVar9)();
            return (bool)uVar11;
          }
          iVar1 = (param_1->HalfEdgesFreeIndices).ArrayNum;
          iVar2 = *(int *)((param_1->HalfEdgesFreeIndices).AllocatorInstance.Data +
                          (longlong)iVar1 * 4 + -4);
          (param_1->HalfEdgesFreeIndices).ArrayNum = iVar1 + -1;
          pFVar14 = TChunkedArray<Chaos::FConvexBuilder::FHalfEdge,16384,TSizedDefaultAllocator<32>_>
                    ::operator[](this,iVar2);
          pFVar14->Vertex = iVar13;
          pFVar17 = local_f0;
          if ((pFVar14->PoolIdx != iVar2) &&
             (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<1014331345280696536>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CollisionConvexMesh.h"
                                  ,0xd8,"FreeHalfEdge->PoolIdx == Idx"), pFVar17 = local_f0, bVar10)
             ) {
            pcVar9 = (code *)swi(3);
            uVar11 = (*pcVar9)();
            return (bool)uVar11;
          }
        }
        pFVar14->Twin = local_e8;
        if (local_e8 != (FHalfEdge *)0x0) {
          local_e8->Twin = pFVar14;
        }
        local_e8 = pFVar17;
        local_100 = CreateFace(param_1,param_2,local_f8,pFVar17,pFVar14);
        iVar13 = param_6->ArrayNum;
        if (iVar13 < 1) {
          local_100->Prev = (FConvexFace *)0x0;
        }
        else {
          uVar16 = iVar13 - 1;
          uVar12 = 0;
          if ((int)uVar16 < iVar13) {
            uVar12 = ~uVar16 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            uVar11 = (*pcVar9)();
            return (bool)uVar11;
          }
          pFVar6 = local_100;
          local_100->Prev =
               *(FConvexFace **)((param_6->AllocatorInstance).Data + (longlong)(int)uVar16 * 8);
          uVar16 = param_6->ArrayNum - 1;
          uVar12 = 0;
          if ((int)uVar16 < param_6->ArrayNum) {
            uVar12 = ~uVar16 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            uVar11 = (*pcVar9)();
            return (bool)uVar11;
          }
          *(FConvexFace **)
           (*(longlong *)((param_6->AllocatorInstance).Data + (longlong)(int)uVar16 * 8) + 0x30) =
               pFVar6;
          pFVar17 = local_f0;
        }
        pFVar4 = (param_6->AllocatorInstance).Data;
        piVar3 = &param_6->ArrayMax;
        if (((pFVar4 <= (FScriptContainerElement *)&local_100) &&
            ((FScriptContainerElement *)&local_100 < pFVar4 + (longlong)*piVar3 * 8)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          uVar11 = (*pcVar9)();
          return (bool)uVar11;
        }
        iVar13 = param_6->ArrayNum;
        if (iVar13 == *piVar3) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_6->AllocatorInstance,piVar3);
        }
        param_6->ArrayNum = iVar13 + 1;
        local_e0 = local_e0 + 8;
        *(FConvexFace **)((param_6->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_100;
        iVar13 = param_4->ArrayNum;
        if (iVar13 <= (int)local_104) {
          if ((param_6->ArrayNum < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            uVar11 = (*pcVar9)();
            return (bool)uVar11;
          }
          *(FHalfEdge **)
           (*(longlong *)(**(longlong **)(param_6->AllocatorInstance).Data + 8) + 0x18) = pFVar17;
          if ((param_6->ArrayNum < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            uVar11 = (*pcVar9)();
            return (bool)uVar11;
          }
          pFVar17->Twin = *(FHalfEdge **)(**(longlong **)(param_6->AllocatorInstance).Data + 8);
          uVar16 = param_6->ArrayNum - 1;
          uVar12 = 0;
          if ((int)uVar16 < param_6->ArrayNum) {
            uVar12 = ~uVar16 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            uVar11 = (*pcVar9)();
            return (bool)uVar11;
          }
          *(undefined8 *)
           (*(longlong *)((param_6->AllocatorInstance).Data + (longlong)(int)uVar16 * 8) + 0x30) = 0
          ;
          pFVar18 = (param_5->AllocatorInstance).Data;
          iVar13 = param_5->ArrayNum;
          pFVar4 = pFVar18 + (longlong)iVar13 * 8;
          while( true ) {
            if (param_5->ArrayNum != iVar13) {
              local_108[0] = 0;
              `TCheckedPointerIterator<Chaos::FConvexBuilder::FConvexFace_*_const,int,0>::
              operator!='::__l2::<lambda_1>::operator()(local_108);
            }
            if (pFVar18 == pFVar4) break;
            iVar1 = param_6->ArrayNum;
            lVar5 = *(longlong *)pFVar18;
            if ((iVar1 < 1) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar9 = (code *)swi(3);
              uVar11 = (*pcVar9)();
              return (bool)uVar11;
            }
            StealConflictList(param_1,param_2,*(FHalfEdge **)(lVar5 + 8),
                              (FConvexFace **)(param_6->AllocatorInstance).Data,iVar1);
            pFVar18 = pFVar18 + 8;
          }
          pFVar6 = param_3->Face;
          if ((param_6->ArrayNum < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            uVar11 = (*pcVar9)();
            return (bool)uVar11;
          }
          uVar16 = param_6->ArrayNum - 1;
          pFVar7 = *(FConvexFace **)(param_6->AllocatorInstance).Data;
          uVar12 = 0;
          if ((int)uVar16 < param_6->ArrayNum) {
            uVar12 = ~uVar16 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            uVar11 = (*pcVar9)();
            return (bool)uVar11;
          }
          pFVar8 = *(FConvexFace **)((param_6->AllocatorInstance).Data + (longlong)(int)uVar16 * 8);
          if (pFVar6->Next != (FConvexFace *)0x0) {
            pFVar6->Next->Prev = pFVar8;
          }
          pFVar8->Next = pFVar6->Next;
          pFVar6->Next = pFVar7;
          pFVar7->Prev = pFVar6;
          return true;
        }
      }
    }
  }
  return false;
}

// BuildHorizon @ 1438a1200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Chaos::FConvexBuilder::BuildHorizon
          (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_1,FHalfEdge *param_2,
          TArray<Chaos::FConvexBuilder::FHalfEdge_*,TSizedDefaultAllocator<32>_> *param_3,
          TArray<Chaos::FConvexBuilder::FConvexFace_*,TSizedDefaultAllocator<32>_> *param_4,
          Params *param_5)

{
  FConvexFace **ppFVar1;
  FConvexFace *pFVar2;
  float fVar3;
  FConvexFace *pFVar4;
  longlong lVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  ForElementType<FSetElementId> FVar16;
  uint uVar17;
  FHalfEdge **ppFVar18;
  undefined1 auStackY_168 [32];
  ForAnyElementType local_118;
  int local_110;
  int local_10c;
  int *local_108;
  int *local_100;
  undefined8 local_f8;
  float local_f0;
  undefined1 local_e8 [12];
  float local_dc;
  undefined1 local_d8 [32];
  void *local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  int local_a4;
  undefined1 local_a0 [8];
  ForElementType<FSetElementId> local_98;
  int local_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_168;
  uVar13 = param_2->Vertex;
  fVar3 = param_5->HorizonEpsilon;
  uVar17 = 0;
  if ((int)uVar13 < param_1->ArrayNum) {
    uVar17 = ~uVar13 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar14 = (param_1->AllocatorInstance).Data;
  ppFVar1 = &param_2->Face;
  local_f8 = *(undefined8 *)(pFVar14 + (longlong)(int)uVar13 * 0xc);
  local_f0 = *(float *)(pFVar14 + (longlong)(int)uVar13 * 0xc + 8);
  local_d8._0_8_ = (FScriptContainerElement *)0x0;
  local_d8._8_8_ = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = (ForElementType<FSetElementId>)0x0;
  local_90 = 0;
  local_118.Data = (FScriptContainerElement *)0x0;
  local_110 = 0;
  local_10c = 0;
  if ((*ppFVar1 == (FConvexFace *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ConflictV->Face",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CollisionConvexMesh.h"
                          ,0x476,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  ppFVar18 = &(*ppFVar1)->FirstEdge->Prev;
  if (((local_118.Data <= ppFVar18) && (ppFVar18 < local_118.Data + (longlong)local_10c * 8)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (local_110 == local_10c) {
    local_110 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_118,&local_10c);
  }
  iVar12 = local_110 + 1;
  *(FHalfEdge **)(local_118.Data + (longlong)local_110 * 8) = *ppFVar18;
  ppFVar18 = &(*ppFVar1)->FirstEdge->Next;
  local_110 = iVar12;
  if (((local_118.Data <= ppFVar18) && (ppFVar18 < local_118.Data + (longlong)local_10c * 8)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (local_110 == local_10c) {
    local_110 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_118,&local_10c);
  }
  iVar12 = local_110 + 1;
  *(FHalfEdge **)(local_118.Data + (longlong)local_110 * 8) = *ppFVar18;
  pFVar4 = *ppFVar1;
  local_110 = iVar12;
  if (((local_118.Data <= pFVar4) &&
      (pFVar4 < (FConvexFace *)(local_118.Data + (longlong)local_10c * 8))) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (local_110 == local_10c) {
    local_110 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_118,&local_10c);
  }
  iVar12 = local_110 + 1;
  *(FHalfEdge **)(local_118.Data + (longlong)local_110 * 8) = pFVar4->FirstEdge;
  pFVar14 = (param_4->AllocatorInstance).Data;
  local_110 = iVar12;
  if (((pFVar14 <= ppFVar1) && (ppFVar1 < pFVar14 + (longlong)param_4->ArrayMax * 8)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar12 = param_4->ArrayNum;
  if (iVar12 == param_4->ArrayMax) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&param_4->AllocatorInstance,&param_4->ArrayMax);
  }
  fVar9 = local_f0;
  param_4->ArrayNum = iVar12 + 1;
  *(FConvexFace **)((param_4->AllocatorInstance).Data + (longlong)iVar12 * 8) = *ppFVar1;
  bVar10 = local_110 == 0;
  if (!bVar10) {
    fVar8 = local_f8._4_4_;
    fVar7 = (float)local_f8;
    do {
      if ((bVar10 || local_110 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar15 = local_110 + -1;
      piVar11 = *(int **)(local_118.Data + (longlong)iVar15 * 8);
      iVar12 = (local_110 - iVar15) + -1;
      if (iVar12 != 0) {
        memmove(local_118.Data + (longlong)iVar15 * 8,local_118.Data + (longlong)iVar15 * 8 + 8,
                (longlong)iVar12 << 3);
      }
      local_110 = local_110 + -1;
      local_108 = piVar11;
      TSet<Chaos::FConvexBuilder::FConvexFace_*,DefaultKeyFuncs<Chaos::FConvexBuilder::FConvexFace_*,0>,FDefaultSetAllocator>
      ::Emplace<Chaos::FConvexBuilder::FConvexFace_*_const_&>
                ((TSet<Chaos::FConvexBuilder::FConvexFace_*,DefaultKeyFuncs<Chaos::FConvexBuilder::FConvexFace_*,0>,FDefaultSetAllocator>
                  *)local_d8,(FConvexFace **)local_e8,(bool *)(piVar11 + 8));
      lVar5 = *(longlong *)(local_108 + 6);
      local_100 = *(int **)(lVar5 + 0x20);
      uVar13 = ((uint)((ulonglong)local_100 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_100 >> 4)) *
               -0x7a143595;
      uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
      if (local_d8._8_4_ != local_a4) {
        FVar16 = (ForElementType<FSetElementId>)local_a0;
        if (local_98 != (ForElementType<FSetElementId>)0x0) {
          FVar16 = local_98;
        }
        for (iVar12 = *(int *)((longlong)FVar16 +
                              (ulonglong)(local_90 - 1U & (uVar13 >> 0x10 ^ uVar13)) * 4);
            iVar12 != -1; iVar12 = *(int *)(local_d8._0_8_ + (longlong)iVar12 * 0x10 + 8)) {
          if (*(int **)(local_d8._0_8_ + (longlong)iVar12 * 0x10) == local_100) goto LAB_1438a1a2b;
        }
      }
      local_e8._4_8_ = *(undefined8 *)(local_100 + 4);
      local_f8 = *(undefined8 *)(local_100 + 7);
      local_dc = (float)local_100[6];
      if ((fVar7 - (float)local_e8._4_8_) * (float)local_f8 +
          (fVar8 - (float)((ulonglong)local_e8._4_8_ >> 0x20)) *
          (float)((ulonglong)local_f8 >> 0x20) + (float)local_100[9] * (fVar9 - local_dc) <= fVar3)
      {
        iVar12 = param_3->ArrayNum;
        if (iVar12 == 0) {
LAB_1438a1993:
          pFVar14 = (param_3->AllocatorInstance).Data;
          if (((pFVar14 <= (FScriptContainerElement *)&local_108) &&
              ((FScriptContainerElement *)&local_108 < pFVar14 + (longlong)param_3->ArrayMax * 8))
             && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar12 = param_3->ArrayNum;
          if (iVar12 == param_3->ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          param_3->ArrayNum = iVar12 + 1;
          pFVar14 = (param_3->AllocatorInstance).Data;
          piVar11 = local_108;
          goto LAB_1438a1a27;
        }
        uVar17 = iVar12 - 1;
        uVar13 = 0;
        if ((int)uVar17 < iVar12) {
          uVar13 = ~uVar17 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*local_108 ==
            **(int **)(*(longlong *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar17 * 8)
                      + 0x10)) goto LAB_1438a1993;
      }
      else {
        pFVar4 = (FConvexFace *)(lVar5 + 8);
        if (((local_118.Data <= pFVar4) &&
            (pFVar4 < (FConvexFace *)(local_118.Data + (longlong)local_10c * 8))) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (local_110 == local_10c) {
          local_110 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_118,&local_10c);
        }
        iVar12 = local_110 + 1;
        pFVar2 = (FConvexFace *)(lVar5 + 0x10);
        *(FHalfEdge **)(local_118.Data + (longlong)local_110 * 8) = pFVar4->FirstEdge;
        local_110 = iVar12;
        if (((local_118.Data <= pFVar2) &&
            (pFVar2 < (FConvexFace *)(local_118.Data + (longlong)local_10c * 8))) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (local_110 == local_10c) {
          local_110 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_118,&local_10c);
        }
        iVar12 = local_110 + 1;
        *(FHalfEdge **)(local_118.Data + (longlong)local_110 * 8) = pFVar2->FirstEdge;
        pFVar14 = (param_4->AllocatorInstance).Data;
        local_110 = iVar12;
        if (((pFVar14 <= (FScriptContainerElement *)&local_100) &&
            ((FScriptContainerElement *)&local_100 < pFVar14 + (longlong)param_4->ArrayMax * 8)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar12 = param_4->ArrayNum;
        if (iVar12 == param_4->ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_4->AllocatorInstance,&param_4->ArrayMax);
        }
        param_4->ArrayNum = iVar12 + 1;
        pFVar14 = (param_4->AllocatorInstance).Data;
        piVar11 = local_100;
LAB_1438a1a27:
        *(int **)(pFVar14 + (longlong)iVar12 * 8) = piVar11;
      }
LAB_1438a1a2b:
      bVar10 = local_110 == 0;
    } while (!bVar10);
  }
  if ((FConvexFace *)local_118.Data != (FConvexFace *)0x0) {
    FMemory::Free(local_118.Data);
  }
  local_90 = 0;
  if (local_98 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98);
  }
  iVar12 = SUB84(local_d8._8_8_,4);
  local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
  if (iVar12 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
  }
  local_a4 = 0;
  local_b0 = 0;
  local_a8 = 0xffffffff;
  if (0x80 < local_ac) {
    local_ac = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._0_8_);
  }
  return;
}

// BuildIndices @ 1438a1b40

void __cdecl
Chaos::FConvexBuilder::BuildIndices
          (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,EBuildMethod param_3)

{
  int *piVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  TArrayView<Chaos::TVector<float,3>_const_,int> *pTVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  ForElementType<int> FVar15;
  FScriptContainerElement *pFVar16;
  ForElementType<int> FVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_158 [8];
  undefined8 local_150;
  undefined4 local_148 [2];
  undefined1 local_140 [8];
  TArray<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
  local_138;
  TArray<Chaos::TVector<int,3>,TSizedDefaultAllocator<32>_> local_128;
  Params local_118;
  uint local_114;
  undefined4 *local_110;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *local_108;
  TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *local_100;
  TConvexHull3<float> local_f8;
  code *local_88;
  undefined1 *local_80;
  code *local_78;
  undefined4 **local_70;
  code *local_68;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> **local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TArrayView<Chaos::TVector<float,3>_const_,int> local_48;
  
  if (param_3 == Default) {
    if (!bUseGeometryTConvexHull3) {
LAB_1438a2035:
      local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_128.ArrayNum = 0;
      local_128.ArrayMax = 0;
      local_118.HorizonEpsilon = SuggestEpsilon(param_1);
      BuildConvexHull(param_1,&local_128,&local_118);
      uVar20 = local_128.ArrayNum * 3;
      if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
      }
      piVar1 = &param_2->ArrayMax;
      iVar9 = local_128.ArrayNum;
      if (param_2->ArrayMax < (int)uVar20) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar20,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
        iVar9 = local_128.ArrayNum;
      }
      pFVar19 = local_128.AllocatorInstance.Data + (longlong)iVar9 * 0xc;
      FVar14.Data = local_128.AllocatorInstance.Data;
      iVar11 = iVar9;
      while( true ) {
        if (iVar11 != iVar9) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<Chaos::TVector<int,3>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (FVar14.Data == pFVar19) {
          if (local_128.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free(local_128.AllocatorInstance.Data);
          return;
        }
        local_148[0] = *(undefined4 *)(FVar14.Data + 8);
        pFVar3 = (param_2->AllocatorInstance).Data;
        local_150 = *(undefined8 *)FVar14.Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_150) &&
            ((FScriptContainerElement *)&local_150 < pFVar3 + (longlong)*piVar1 * 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar11 = param_2->ArrayNum;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&param_2->AllocatorInstance,piVar1);
          param_2->ArrayNum = iVar11;
        }
        param_2->ArrayNum = iVar11 + 1;
        *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar11 * 4) =
             (undefined4)local_150;
        pFVar3 = (param_2->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)((longlong)&local_150 + 4U)) &&
            ((FScriptContainerElement *)((longlong)&local_150 + 4U) < pFVar3 + (longlong)*piVar1 * 4
            )) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar8)) break;
        iVar11 = param_2->ArrayNum;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&param_2->AllocatorInstance,piVar1);
          param_2->ArrayNum = iVar11;
        }
        param_2->ArrayNum = iVar11 + 1;
        *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_150._4_4_;
        pFVar3 = (param_2->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)local_148) &&
            ((FScriptContainerElement *)local_148 < pFVar3 + (longlong)*piVar1 * 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar11 = param_2->ArrayNum;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&param_2->AllocatorInstance,piVar1);
          param_2->ArrayNum = iVar11;
        }
        FVar14.Data = FVar14.Data + 0xc;
        param_2->ArrayNum = iVar11 + 1;
        *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_148[0];
        iVar11 = local_128.ArrayNum;
      }
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (1 < param_3 - ConvexHull3) goto LAB_1438a2035;
  local_f8.Line.Origin.field0_0x0._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_f8.Line.Origin.field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_f8.Line.Direction.field0_0x0._0_8_ = UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_;
  local_f8.bSaveTriangleNeighbors = false;
  local_f8.SimplificationSettings.DegenerateEdgeTolerance = 0.0;
  local_f8.SimplificationSettings.MaxHullVertices = -1;
  local_f8.SimplificationSettings.SkipAtHullDistanceAbsolute = -3.4028235e+38;
  local_f8.SimplificationSettings.SkipAtHullDistanceAsFraction = -3.4028235e+38;
  local_f8.Progress = (FProgressCancel *)0x0;
  local_f8.Line.Direction.field0_0x0._s_0.Z =
       UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z;
  local_f8.NumHullPoints = 0;
  local_f8.Hull.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Hull.ArrayNum = 0;
  local_f8.Hull.ArrayMax = 0;
  local_f8.HullNeighbors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.HullNeighbors.ArrayNum = 0;
  local_f8.HullNeighbors.ArrayMax = 0;
  if (param_3 == Default) {
    if ((!bUseGeometryTConvexHull3) || (!bUseSimplifierForTConvexHull3)) {
LAB_1438a22db:
      bVar8 = false;
      goto LAB_1438a1c0e;
    }
  }
  else if (param_3 != ConvexHull3Simplified) goto LAB_1438a22db;
  bVar8 = true;
  local_f8.SimplificationSettings.DegenerateEdgeTolerance = 1e-08;
  local_f8.bSaveTriangleNeighbors = true;
LAB_1438a1c0e:
  pTVar12 = TArrayView<Chaos::TVector<float,3>_const_,int>::
            TArrayView<Chaos::TVector<float,3>_const_,int><TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_const_&,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>_>
                      (&local_48,param_1);
  local_58 = *(undefined4 *)&pTVar12->DataPtr;
  uStack_54 = *(undefined4 *)((longlong)&pTVar12->DataPtr + 4);
  iStack_50 = pTVar12->ArrayNum;
  uStack_4c = *(undefined4 *)&pTVar12->field_0xc;
  local_80 = local_140;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TConvexHull3<float>::Solve<Chaos::TVector<float,3>_>'::__l2::<lambda_2>,bool,int>
             ::Call;
  local_110 = &local_58;
  local_70 = &local_110;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TConvexHull3<float>::Solve<Chaos::TVector<float,3>_>'::__l2::<lambda_1>,UE::Math::TVector<float>,int>
             ::Call;
  bVar7 = UE::Geometry::TConvexHull3<float>::Solve
                    (&local_f8,iStack_50,
                     (TFunctionRef<UE::Math::TVector<float>___cdecl(int)> *)&local_78,
                     (TFunctionRef<bool___cdecl(int)> *)&local_88);
  if (bVar7) {
    if (bVar8) {
      local_60 = &local_108;
      local_68 = UE::Core::Private::Function::
                 TFunctionRefCaller<`Chaos::FConvexBuilder::BuildIndices'::__l14::<lambda_1>,UE::Math::TVector<float>,int>
                 ::Call;
      local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138.ArrayNum = 0;
      local_138.ArrayMax = 0;
      local_108 = param_1;
      UE::Geometry::TConvexHull3<float>::GetSimplifiedFaces
                (&local_f8,&local_138,
                 (TFunctionRef<UE::Math::TVector<float>___cdecl(int)> *)&local_68,__real_3f800000,
                 __real_3f800000,(TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)0x0
                );
      uVar13 = (ulonglong)local_138.ArrayNum;
      local_114 = local_138.ArrayNum;
      pFVar19 = local_138.AllocatorInstance.Data + 0x28;
      local_100 = (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
                  (local_138.AllocatorInstance.Data + uVar13 * 0x30);
      while( true ) {
        pTVar6 = local_100;
        if (local_138.ArrayNum != (int)uVar13) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
            (pFVar19 + -0x28) == pTVar6) break;
        uVar20 = param_2->ArrayNum + (*(int *)pFVar19 + -2) * 3;
        if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
        }
        piVar1 = &param_2->ArrayMax;
        if (param_2->ArrayMax < (int)uVar20) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar20,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
        }
        iVar9 = *(int *)pFVar19;
        if (2 < iVar9) {
          uVar20 = 2;
          lVar18 = 4;
          do {
            if ((iVar9 < 1) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar17 = (ForElementType<int>)(param_2->AllocatorInstance).Data;
            FVar15 = (ForElementType<int>)((longlong)pFVar19 + -0x28);
            if (*(ForElementType<int> *)(pFVar19 + -8) != (ForElementType<int>)0x0) {
              FVar15 = *(ForElementType<int> *)(pFVar19 + -8);
            }
            if ((((ulonglong)FVar17 <= (ulonglong)FVar15) &&
                ((ulonglong)FVar15 < (ulonglong)((longlong)FVar17 + (longlong)*piVar1 * 4))) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar9 = param_2->ArrayNum;
            if (iVar9 == *piVar1) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&param_2->AllocatorInstance,piVar1);
            }
            param_2->ArrayNum = iVar9 + 1;
            *(int *)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 4) = *(int *)FVar15;
            uVar10 = 0;
            if ((int)uVar20 < *(int *)pFVar19) {
              uVar10 = ~uVar20 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar3 = (param_2->AllocatorInstance).Data;
            FVar17 = (ForElementType<int>)((longlong)pFVar19 + -0x28);
            if (*(ForElementType<int> *)(pFVar19 + -8) != (ForElementType<int>)0x0) {
              FVar17 = *(ForElementType<int> *)(pFVar19 + -8);
            }
            pFVar16 = (FScriptContainerElement *)((longlong)FVar17 + lVar18 + 4);
            if (((pFVar3 <= pFVar16) && (pFVar16 < pFVar3 + (longlong)*piVar1 * 4)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar9 = param_2->ArrayNum;
            if (iVar9 == *piVar1) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&param_2->AllocatorInstance,piVar1);
            }
            param_2->ArrayNum = iVar9 + 1;
            *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 4) =
                 *(undefined4 *)pFVar16;
            uVar10 = 0;
            if ((int)(uVar20 - 1) < *(int *)pFVar19) {
              uVar10 = ~(uVar20 - 1) >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar3 = (param_2->AllocatorInstance).Data;
            FVar17 = (ForElementType<int>)((longlong)pFVar19 + -0x28);
            if (*(ForElementType<int> *)(pFVar19 + -8) != (ForElementType<int>)0x0) {
              FVar17 = *(ForElementType<int> *)(pFVar19 + -8);
            }
            pFVar16 = (FScriptContainerElement *)((longlong)FVar17 + lVar18);
            if (((pFVar3 <= pFVar16) && (pFVar16 < pFVar3 + (longlong)*piVar1 * 4)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar9 = param_2->ArrayNum;
            if (iVar9 == *piVar1) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&param_2->AllocatorInstance,piVar1);
            }
            param_2->ArrayNum = iVar9 + 1;
            uVar20 = uVar20 + 1;
            *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 4) =
                 *(undefined4 *)pFVar16;
            iVar9 = *(int *)pFVar19;
            lVar18 = lVar18 + 4;
          } while ((int)uVar20 < iVar9);
        }
        pFVar19 = pFVar19 + 0x30;
        uVar13 = (ulonglong)local_114;
      }
      DestructItems<TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>,int>
                ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
                 local_138.AllocatorInstance.Data,local_138.ArrayNum);
      if ((TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
          local_138.AllocatorInstance.Data !=
          (TArray<int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
        FMemory::Free(local_138.AllocatorInstance.Data);
      }
    }
    else {
      uVar20 = local_f8.Hull.ArrayNum * 3;
      if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
      }
      piVar1 = &param_2->ArrayMax;
      iVar9 = local_f8.Hull.ArrayNum;
      if (param_2->ArrayMax < (int)uVar20) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar20,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
        iVar9 = local_f8.Hull.ArrayNum;
      }
      pFVar19 = local_f8.Hull.AllocatorInstance.Data + 4;
      pFVar3 = local_f8.Hull.AllocatorInstance.Data + (longlong)iVar9 * 0xc;
      iVar11 = iVar9;
      while( true ) {
        if (iVar11 != iVar9) {
          local_158[0] = 0;
          `TCheckedPointerIterator<UE::Geometry::FIndex3i_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_158);
        }
        pFVar16 = pFVar19 + -4;
        if (pFVar16 == pFVar3) break;
        pFVar4 = (param_2->AllocatorInstance).Data;
        if (((pFVar4 <= pFVar16) && (pFVar16 < pFVar4 + (longlong)*piVar1 * 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar11 = param_2->ArrayNum;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&param_2->AllocatorInstance,piVar1);
          param_2->ArrayNum = iVar11;
        }
        param_2->ArrayNum = iVar11 + 1;
        pFVar4 = pFVar19 + 4;
        *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar11 * 4) =
             *(undefined4 *)pFVar16;
        pFVar16 = (param_2->AllocatorInstance).Data;
        if (((pFVar16 <= pFVar4) && (pFVar4 < pFVar16 + (longlong)*piVar1 * 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar11 = param_2->ArrayNum;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&param_2->AllocatorInstance,piVar1);
          param_2->ArrayNum = iVar11;
        }
        param_2->ArrayNum = iVar11 + 1;
        *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar11 * 4) =
             *(undefined4 *)pFVar4;
        pFVar16 = (param_2->AllocatorInstance).Data;
        if (((pFVar16 <= pFVar19) && (pFVar19 < pFVar16 + (longlong)*piVar1 * 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar11 = param_2->ArrayNum;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&param_2->AllocatorInstance,piVar1);
          param_2->ArrayNum = iVar11;
        }
        param_2->ArrayNum = iVar11 + 1;
        uVar2 = *(undefined4 *)pFVar19;
        pFVar19 = pFVar19 + 0xc;
        *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar11 * 4) = uVar2;
        iVar11 = local_f8.Hull.ArrayNum;
      }
    }
  }
  if (local_f8.HullNeighbors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.HullNeighbors.AllocatorInstance.Data);
  }
  if (local_f8.Hull.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Hull.AllocatorInstance.Data);
  }
  return;
}

// BuildInitialHull @ 1438a2570

/* WARNING: Type propagation algorithm not settling */

FConvexFace * __cdecl
Chaos::FConvexBuilder::BuildInitialHull
          (FMemPool *param_1,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_2)

{
  FHalfEdge **ppFVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  uint *puVar8;
  code *pcVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  FHalfEdge *pFVar14;
  FHalfEdge **ppFVar15;
  FConvexFace *pFVar16;
  FHalfEdge *pFVar17;
  undefined8 *puVar18;
  FHalfEdge *pFVar19;
  FHalfEdge *pFVar20;
  FHalfEdge *pFVar21;
  FHalfEdge *pFVar22;
  FConvexFace *pFVar23;
  FHalfEdge *pFVar24;
  FConvexFace *pFVar25;
  uint uVar26;
  longlong lVar27;
  longlong lVar28;
  int iVar29;
  longlong lVar30;
  longlong lVar31;
  uint *puVar32;
  uint uVar33;
  int *piVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  float fVar45;
  FHalfEdge *local_res10;
  FHalfEdge *local_res18;
  FHalfEdge *local_138;
  FConvexFace *local_118 [5];
  uint local_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  int iStack_c8;
  undefined4 uStack_c4;
  
  fVar35 = __real_7f7fffff;
  fVar40 = __real_ff7fffff;
  iVar29 = param_2->ArrayNum;
  local_138 = (FHalfEdge *)(longlong)iVar29;
  if (iVar29 < 4) {
    return (FConvexFace *)0x0;
  }
  pFVar21 = (FHalfEdge *)0x0;
  local_res18 = (FHalfEdge *)0x0;
  local_res10 = (FHalfEdge *)0x0;
  pFVar14 = FMemPool::AllocHalfEdge(param_1,-1);
  pFVar14->Next = (FHalfEdge *)0x0;
  uVar33 = 0;
  pFVar14->Prev = (FHalfEdge *)0x0;
  ppFVar15 = &pFVar14->Next;
  if (iVar29 < 1) {
    local_res10 = (FHalfEdge *)0x0;
  }
  else {
    local_118[0] = (FConvexFace *)0x0;
    do {
      iVar29 = (param_1->HalfEdgesFreeIndices).ArrayNum;
      if (iVar29 == 0) {
        iStack_c8 = (param_1->HalfEdges).NumElements;
        local_f0 = uVar33;
        puVar18 = operator_new<Chaos::FConvexBuilder::FHalfEdge,16384,TSizedDefaultAllocator<32>_>
                            (0x30,&param_1->HalfEdges);
        if (puVar18 != (undefined8 *)0x0) {
          *puVar18 = CONCAT44(uStack_ec,local_f0);
          puVar18[1] = uStack_e8;
          puVar18[2] = local_e0;
          puVar18[3] = uStack_d8;
          puVar18[4] = local_d0;
          puVar18[5] = CONCAT44(uStack_c4,iStack_c8);
        }
        pFVar17 = TChunkedArray<Chaos::FConvexBuilder::FHalfEdge,16384,TSizedDefaultAllocator<32>_>
                  ::operator[](&param_1->HalfEdges,(param_1->HalfEdges).NumElements + -1);
      }
      else {
        if ((iVar29 < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          pFVar16 = (FConvexFace *)(*pcVar9)();
          return pFVar16;
        }
        iVar29 = (param_1->HalfEdgesFreeIndices).ArrayNum;
        iVar5 = *(int *)((param_1->HalfEdgesFreeIndices).AllocatorInstance.Data +
                        (longlong)iVar29 * 4 + -4);
        (param_1->HalfEdgesFreeIndices).ArrayNum = iVar29 + -1;
        pFVar17 = TChunkedArray<Chaos::FConvexBuilder::FHalfEdge,16384,TSizedDefaultAllocator<32>_>
                  ::operator[](&param_1->HalfEdges,iVar5);
        pFVar17->Vertex = uVar33;
        pFVar21 = local_res18;
        if ((pFVar17->PoolIdx != iVar5) &&
           (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<1014331345280696536>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CollisionConvexMesh.h"
                                ,0xd8,"FreeHalfEdge->PoolIdx == Idx"), bVar11)) {
          pcVar9 = (code *)swi(3);
          pFVar16 = (FConvexFace *)(*pcVar9)();
          return pFVar16;
        }
      }
      pFVar14->Next = pFVar17;
      pFVar17->Prev = pFVar14;
      pFVar17->Next = (FHalfEdge *)0x0;
      uVar26 = 0;
      if ((int)uVar33 < param_2->ArrayNum) {
        uVar26 = ~uVar33 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        pFVar16 = (FConvexFace *)(*pcVar9)();
        return pFVar16;
      }
      fVar41 = *(float *)((param_2->AllocatorInstance).Data + (longlong)local_118[0]);
      if (fVar41 < fVar35) {
        pFVar21 = pFVar17;
        fVar35 = fVar41;
        local_res18 = pFVar17;
      }
      if (fVar40 < fVar41) {
        fVar40 = fVar41;
        local_res10 = pFVar17;
      }
      local_118[0] = (FConvexFace *)((longlong)local_118[0] + 0xc);
      uVar33 = uVar33 + 1;
      local_138 = (FHalfEdge *)((longlong)local_138 + -1);
      pFVar14 = pFVar17;
    } while (local_138 != (FHalfEdge *)0x0);
    if ((pFVar21 != (FHalfEdge *)0x0) && (pFVar14 = local_res10, local_res10 != (FHalfEdge *)0x0))
    goto LAB_1438a27f2;
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("A && B",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CollisionConvexMesh.h"
                      ,0x3bc,L"");
  pFVar14 = local_res10;
  if (bVar11) {
    pcVar9 = (code *)swi(3);
    pFVar16 = (FConvexFace *)(*pcVar9)();
    return pFVar16;
  }
LAB_1438a27f2:
  if (pFVar21 != pFVar14) {
    uVar33 = pFVar21->Vertex;
    lVar30 = (longlong)(int)uVar33;
    uVar26 = 0;
    if ((int)uVar33 < param_2->ArrayNum) {
      uVar26 = ~uVar33 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      pFVar16 = (FConvexFace *)(*pcVar9)();
      return pFVar16;
    }
    uVar33 = pFVar14->Vertex;
    lVar31 = (longlong)(int)uVar33;
    pFVar6 = (param_2->AllocatorInstance).Data;
    uVar26 = 0;
    if ((int)uVar33 < param_2->ArrayNum) {
      uVar26 = ~uVar33 >> 0x1f;
    }
    if ((uVar26 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      pFVar16 = (FConvexFace *)(*pcVar9)();
      return pFVar16;
    }
    fVar40 = __real_38d1b717;
    pFVar7 = (param_2->AllocatorInstance).Data;
    if (__real_38d1b717 <=
        (*(float *)(pFVar6 + lVar30 * 0xc) - *(float *)(pFVar7 + lVar31 * 0xc)) *
        (*(float *)(pFVar6 + lVar30 * 0xc) - *(float *)(pFVar7 + lVar31 * 0xc)) +
        (*(float *)(pFVar6 + lVar30 * 0xc + 4) - *(float *)(pFVar7 + lVar31 * 0xc + 4)) *
        (*(float *)(pFVar6 + lVar30 * 0xc + 4) - *(float *)(pFVar7 + lVar31 * 0xc + 4)) +
        (*(float *)(pFVar6 + lVar30 * 0xc + 8) - *(float *)(pFVar7 + lVar31 * 0xc + 8)) *
        (*(float *)(pFVar6 + lVar30 * 0xc + 8) - *(float *)(pFVar7 + lVar31 * 0xc + 8))) {
      pFVar21->Prev->Next = pFVar21->Next;
      if (pFVar21->Next != (FHalfEdge *)0x0) {
        pFVar21->Next->Prev = pFVar21->Prev;
      }
      pFVar14->Prev->Next = pFVar14->Next;
      if (pFVar14->Next != (FHalfEdge *)0x0) {
        pFVar14->Next->Prev = pFVar14->Prev;
      }
      uVar33 = pFVar14->Vertex;
      lVar30 = (longlong)(int)uVar33;
      uVar26 = 0;
      if ((int)uVar33 < param_2->ArrayNum) {
        uVar26 = ~uVar33 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        pFVar16 = (FConvexFace *)(*pcVar9)();
        return pFVar16;
      }
      uVar33 = pFVar21->Vertex;
      lVar31 = (longlong)(int)uVar33;
      pFVar6 = (param_2->AllocatorInstance).Data;
      uVar26 = 0;
      if ((int)uVar33 < param_2->ArrayNum) {
        uVar26 = ~uVar33 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        pFVar16 = (FConvexFace *)(*pcVar9)();
        return pFVar16;
      }
      pFVar7 = (param_2->AllocatorInstance).Data;
      local_res10 = (FHalfEdge *)0x0;
      fVar41 = *(float *)(pFVar6 + lVar30 * 0xc + 8) - *(float *)(pFVar7 + lVar31 * 0xc + 8);
      pFVar17 = *ppFVar15;
      fVar42 = *(float *)(pFVar6 + lVar30 * 0xc + 4) - *(float *)(pFVar7 + lVar31 * 0xc + 4);
      fVar45 = *(float *)(pFVar6 + lVar30 * 0xc) - *(float *)(pFVar7 + lVar31 * 0xc);
      fVar35 = fVar40;
      if (pFVar17 != (FHalfEdge *)0x0) {
        do {
          uVar33 = pFVar17->Vertex;
          lVar30 = (longlong)(int)uVar33;
          uVar26 = 0;
          if ((int)uVar33 < param_2->ArrayNum) {
            uVar26 = ~uVar33 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            pFVar16 = (FConvexFace *)(*pcVar9)();
            return pFVar16;
          }
          pFVar6 = (param_2->AllocatorInstance).Data;
          uVar33 = pFVar21->Vertex;
          lVar31 = (longlong)(int)uVar33;
          uVar26 = 0;
          if ((int)uVar33 < param_2->ArrayNum) {
            uVar26 = ~uVar33 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            pFVar16 = (FConvexFace *)(*pcVar9)();
            return pFVar16;
          }
          pFVar7 = (param_2->AllocatorInstance).Data;
          ppFVar1 = &pFVar17->Next;
          fVar36 = (*(float *)(pFVar6 + lVar30 * 0xc + 8) - *(float *)(pFVar7 + lVar31 * 0xc + 8)) *
                   fVar42 - (*(float *)(pFVar6 + lVar30 * 0xc + 4) -
                            *(float *)(pFVar7 + lVar31 * 0xc + 4)) * fVar41;
          fVar37 = (*(float *)(pFVar6 + lVar30 * 0xc) - *(float *)(pFVar7 + lVar31 * 0xc)) * fVar41
                   - (*(float *)(pFVar6 + lVar30 * 0xc + 8) - *(float *)(pFVar7 + lVar31 * 0xc + 8))
                     * fVar45;
          fVar38 = (*(float *)(pFVar6 + lVar30 * 0xc + 4) - *(float *)(pFVar7 + lVar31 * 0xc + 4)) *
                   fVar45 - (*(float *)(pFVar6 + lVar30 * 0xc) - *(float *)(pFVar7 + lVar31 * 0xc))
                            * fVar42;
          fVar36 = fVar37 * fVar37 + fVar36 * fVar36 + fVar38 * fVar38;
          pFVar19 = pFVar17;
          if (fVar36 <= fVar35) {
            pFVar19 = local_res10;
            fVar36 = fVar35;
          }
          pFVar17 = *ppFVar1;
          fVar35 = fVar36;
          local_res10 = pFVar19;
        } while (*ppFVar1 != (FHalfEdge *)0x0);
        if (pFVar19 != (FHalfEdge *)0x0) {
          pFVar19->Prev->Next = pFVar19->Next;
          if (pFVar19->Next != (FHalfEdge *)0x0) {
            pFVar19->Next->Prev = pFVar19->Prev;
          }
          uVar33 = pFVar19->Vertex;
          lVar30 = (longlong)(int)uVar33;
          uVar26 = 0;
          if ((int)uVar33 < param_2->ArrayNum) {
            uVar26 = ~uVar33 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            pFVar16 = (FConvexFace *)(*pcVar9)();
            return pFVar16;
          }
          uVar33 = pFVar21->Vertex;
          lVar31 = (longlong)(int)uVar33;
          pFVar6 = (param_2->AllocatorInstance).Data;
          uVar26 = 0;
          if ((int)uVar33 < param_2->ArrayNum) {
            uVar26 = ~uVar33 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            pFVar16 = (FConvexFace *)(*pcVar9)();
            return pFVar16;
          }
          uVar33 = __xmm_80000000800000008000000080000000;
          pFVar7 = (param_2->AllocatorInstance).Data;
          fVar37 = (*(float *)(pFVar6 + lVar30 * 0xc) - *(float *)(pFVar7 + lVar31 * 0xc)) * fVar41
                   - (*(float *)(pFVar6 + lVar30 * 0xc + 8) - *(float *)(pFVar7 + lVar31 * 0xc + 8))
                     * fVar45;
          fVar36 = (*(float *)(pFVar6 + lVar30 * 0xc + 8) - *(float *)(pFVar7 + lVar31 * 0xc + 8)) *
                   fVar42 - (*(float *)(pFVar6 + lVar30 * 0xc + 4) -
                            *(float *)(pFVar7 + lVar31 * 0xc + 4)) * fVar41;
          fVar41 = (*(float *)(pFVar6 + lVar30 * 0xc + 4) - *(float *)(pFVar7 + lVar31 * 0xc + 4)) *
                   fVar45 - (*(float *)(pFVar6 + lVar30 * 0xc) - *(float *)(pFVar7 + lVar31 * 0xc))
                            * fVar42;
          fVar35 = fVar37 * fVar37 + fVar36 * fVar36 + fVar41 * fVar41;
          uVar39 = fVar41;
          uVar43 = fVar36;
          uVar44 = fVar37;
          if ((fVar35 != __real_3f800000) &&
             (uVar39 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
             uVar43 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
             uVar44 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
             __real_322bcc77 <= fVar35)) {
            fVar35 = __real_3f800000 / SQRT(fVar35);
            uVar39 = fVar35 * fVar41;
            uVar43 = fVar35 * fVar36;
            uVar44 = fVar35 * fVar37;
          }
          pFVar22 = (FHalfEdge *)0x0;
          local_138 = (FHalfEdge *)0x0;
          pFVar17 = *ppFVar15;
          fVar35 = fVar40;
          fVar41 = fVar40;
          if (pFVar17 != (FHalfEdge *)0x0) {
            do {
              uVar26 = pFVar17->Vertex;
              lVar30 = (longlong)(int)uVar26;
              uVar13 = 0;
              if ((int)uVar26 < param_2->ArrayNum) {
                uVar13 = ~uVar26 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar9 = (code *)swi(3);
                pFVar16 = (FConvexFace *)(*pcVar9)();
                return pFVar16;
              }
              uVar26 = pFVar21->Vertex;
              lVar31 = (longlong)(int)uVar26;
              pFVar6 = (param_2->AllocatorInstance).Data;
              uVar13 = 0;
              if ((int)uVar26 < param_2->ArrayNum) {
                uVar13 = ~uVar26 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar9 = (code *)swi(3);
                pFVar16 = (FConvexFace *)(*pcVar9)();
                return pFVar16;
              }
              pFVar7 = (param_2->AllocatorInstance).Data;
              ppFVar1 = &pFVar17->Next;
              fVar45 = (*(float *)(pFVar6 + lVar30 * 0xc + 4) -
                       *(float *)(pFVar7 + lVar31 * 0xc + 4)) * (float)uVar44 +
                       (*(float *)(pFVar6 + lVar30 * 0xc) - *(float *)(pFVar7 + lVar31 * 0xc)) *
                       (float)uVar43 +
                       (*(float *)(pFVar6 + lVar30 * 0xc + 8) -
                       *(float *)(pFVar7 + lVar31 * 0xc + 8)) * (float)uVar39;
              pFVar24 = pFVar17;
              fVar42 = fVar45;
              if (fVar45 <= fVar35) {
                pFVar24 = local_138;
                fVar42 = fVar35;
              }
              pFVar20 = pFVar17;
              fVar36 = (float)((uint)fVar45 ^ uVar33);
              if ((float)((uint)fVar45 ^ uVar33) <= fVar41) {
                pFVar20 = pFVar22;
                fVar36 = fVar41;
              }
              pFVar17 = *ppFVar1;
              pFVar22 = pFVar20;
              fVar35 = fVar42;
              fVar41 = fVar36;
              local_138 = pFVar24;
            } while (*ppFVar1 != (FHalfEdge *)0x0);
            if ((fVar36 != fVar40) || (fVar42 != fVar40)) {
              if (fVar36 < fVar42) {
                pFVar20 = pFVar24;
              }
              if ((pFVar20 == (FHalfEdge *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("D",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CollisionConvexMesh.h"
                                      ,0x406,L""), bVar11)) {
                pcVar9 = (code *)swi(3);
                pFVar16 = (FConvexFace *)(*pcVar9)();
                return pFVar16;
              }
              pFVar20->Prev->Next = pFVar20->Next;
              if (pFVar20->Next != (FHalfEdge *)0x0) {
                pFVar20->Next->Prev = pFVar20->Prev;
              }
              pFVar17 = pFVar21;
              if (fVar36 >= fVar42) {
                pFVar17 = pFVar14;
                pFVar14 = pFVar21;
              }
              pFVar16 = CreateFace(param_1,param_2,pFVar14,pFVar17,pFVar19);
              local_118[1] = pFVar16;
              pFVar21 = FMemPool::AllocHalfEdge(param_1,pFVar14->Vertex);
              pFVar22 = FMemPool::AllocHalfEdge(param_1,pFVar17->Vertex);
              pFVar23 = CreateFace(param_1,param_2,pFVar22,pFVar21,pFVar20);
              local_118[2] = pFVar23;
              pFVar21 = FMemPool::AllocHalfEdge(param_1,pFVar20->Vertex);
              pFVar22 = FMemPool::AllocHalfEdge(param_1,pFVar19->Vertex);
              pFVar24 = FMemPool::AllocHalfEdge(param_1,pFVar14->Vertex);
              pFVar25 = CreateFace(param_1,param_2,pFVar24,pFVar22,pFVar21);
              local_118[3] = pFVar25;
              pFVar21 = FMemPool::AllocHalfEdge(param_1,pFVar20->Vertex);
              pFVar22 = FMemPool::AllocHalfEdge(param_1,pFVar17->Vertex);
              pFVar24 = FMemPool::AllocHalfEdge(param_1,pFVar19->Vertex);
              local_118[4] = CreateFace(param_1,param_2,pFVar24,pFVar22,pFVar21);
              pFVar21 = pFVar23->FirstEdge;
              pFVar14->Twin = pFVar21;
              pFVar21->Twin = pFVar14;
              pFVar21 = local_118[4]->FirstEdge;
              pFVar17->Twin = pFVar21;
              pFVar21->Twin = pFVar17;
              pFVar21 = pFVar25->FirstEdge;
              pFVar19->Twin = pFVar21;
              pFVar21->Twin = pFVar19;
              pFVar21 = pFVar25->FirstEdge->Prev;
              pFVar14 = pFVar23->FirstEdge->Next;
              pFVar14->Twin = pFVar21;
              pFVar21->Twin = pFVar14;
              pFVar21 = local_118[4]->FirstEdge->Next;
              pFVar14 = pFVar23->FirstEdge->Prev;
              pFVar14->Twin = pFVar21;
              pFVar21->Twin = pFVar14;
              pFVar21 = local_118[4]->FirstEdge->Prev;
              pFVar14 = pFVar25->FirstEdge->Next;
              pFVar14->Twin = pFVar21;
              pFVar21->Twin = pFVar14;
              pFVar16->Prev = (FConvexFace *)0x0;
              pFVar16->Next = pFVar23;
              pFVar23->Prev = pFVar16;
              pFVar23->Next = pFVar25;
              pFVar25->Prev = pFVar23;
              pFVar25->Next = local_118[4];
              local_118[4]->Prev = pFVar25;
              local_118[4]->Next = (FConvexFace *)0x0;
              dVar10 = __real_3f1a36e2eb1c432d;
              pFVar21 = *ppFVar15;
              pFVar16 = local_118[1];
              do {
                if (pFVar21 == (FHalfEdge *)0x0) {
                  return pFVar16;
                }
                uVar33 = pFVar21->Vertex;
                lVar30 = (longlong)(int)uVar33;
                uVar26 = 0;
                if ((int)uVar33 < param_2->ArrayNum) {
                  uVar26 = ~uVar33 >> 0x1f;
                }
                local_118[1] = pFVar16;
                if ((uVar26 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar9 = (code *)swi(3);
                  pFVar16 = (FConvexFace *)(*pcVar9)();
                  return pFVar16;
                }
                pFVar23 = local_118[2];
                uVar3 = *(undefined8 *)&(pFVar16->Plane).MX;
                pFVar6 = (param_2->AllocatorInstance).Data;
                uVar4 = *(undefined8 *)&(pFVar16->Plane).MNormal;
                fVar41 = (*(float *)(pFVar6 + lVar30 * 0xc + 4) - (float)((ulonglong)uVar3 >> 0x20))
                         * (float)((ulonglong)uVar4 >> 0x20) +
                         (*(float *)(pFVar6 + lVar30 * 0xc) - (float)uVar3) * (float)uVar4 +
                         (*(float *)(pFVar6 + lVar30 * 0xc + 8) -
                         *(float *)&(pFVar16->Plane).MX.field_0x8) *
                         *(float *)&(pFVar16->Plane).MNormal.field_0x8;
                fVar35 = fVar40;
                if (fVar40 < fVar41) {
                  fVar35 = fVar41;
                }
                uVar33 = pFVar21->Vertex;
                lVar30 = (longlong)(int)uVar33;
                lVar31 = (ulonglong)(fVar40 < fVar41) - 1;
                iVar29 = (fVar40 < fVar41) - 1;
                uVar26 = 0;
                if ((int)uVar33 < param_2->ArrayNum) {
                  uVar26 = ~uVar33 >> 0x1f;
                }
                if ((uVar26 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar9 = (code *)swi(3);
                  pFVar16 = (FConvexFace *)(*pcVar9)();
                  return pFVar16;
                }
                pFVar16 = local_118[3];
                uVar3 = *(undefined8 *)&(pFVar23->Plane).MX;
                pFVar6 = (param_2->AllocatorInstance).Data;
                uVar4 = *(undefined8 *)&(pFVar23->Plane).MNormal;
                fVar41 = (*(float *)(pFVar6 + lVar30 * 0xc + 4) - (float)((ulonglong)uVar3 >> 0x20))
                         * (float)((ulonglong)uVar4 >> 0x20) +
                         (*(float *)(pFVar6 + lVar30 * 0xc) - (float)uVar3) * (float)uVar4 +
                         (*(float *)(pFVar6 + lVar30 * 0xc + 8) -
                         *(float *)&(pFVar23->Plane).MX.field_0x8) *
                         *(float *)&(pFVar23->Plane).MNormal.field_0x8;
                if (fVar35 < fVar41) {
                  iVar29 = 1;
                  lVar31 = 1;
                }
                uVar33 = pFVar21->Vertex;
                lVar30 = (longlong)(int)uVar33;
                if (fVar35 <= fVar41) {
                  fVar35 = fVar41;
                }
                uVar26 = 0;
                if ((int)uVar33 < param_2->ArrayNum) {
                  uVar26 = ~uVar33 >> 0x1f;
                }
                if ((uVar26 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar9 = (code *)swi(3);
                  pFVar16 = (FConvexFace *)(*pcVar9)();
                  return pFVar16;
                }
                pFVar23 = local_118[4];
                uVar3 = *(undefined8 *)&(pFVar16->Plane).MX;
                pFVar6 = (param_2->AllocatorInstance).Data;
                uVar4 = *(undefined8 *)&(pFVar16->Plane).MNormal;
                fVar41 = (*(float *)(pFVar6 + lVar30 * 0xc + 4) - (float)((ulonglong)uVar3 >> 0x20))
                         * (float)((ulonglong)uVar4 >> 0x20) +
                         (*(float *)(pFVar6 + lVar30 * 0xc) - (float)uVar3) * (float)uVar4 +
                         (*(float *)(pFVar6 + lVar30 * 0xc + 8) -
                         *(float *)&(pFVar16->Plane).MX.field_0x8) *
                         *(float *)&(pFVar16->Plane).MNormal.field_0x8;
                if (fVar35 < fVar41) {
                  iVar29 = 2;
                  lVar31 = 2;
                }
                uVar33 = pFVar21->Vertex;
                lVar30 = (longlong)(int)uVar33;
                if (fVar35 <= fVar41) {
                  fVar35 = fVar41;
                }
                uVar26 = 0;
                if ((int)uVar33 < param_2->ArrayNum) {
                  uVar26 = ~uVar33 >> 0x1f;
                }
                if ((uVar26 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar9 = (code *)swi(3);
                  pFVar16 = (FConvexFace *)(*pcVar9)();
                  return pFVar16;
                }
                uVar3 = *(undefined8 *)&(pFVar23->Plane).MX;
                pFVar6 = (param_2->AllocatorInstance).Data;
                uVar4 = *(undefined8 *)&(pFVar23->Plane).MNormal;
                if ((*(float *)(pFVar6 + lVar30 * 0xc + 4) - (float)((ulonglong)uVar3 >> 0x20)) *
                    (float)((ulonglong)uVar4 >> 0x20) +
                    (*(float *)(pFVar6 + lVar30 * 0xc) - (float)uVar3) * (float)uVar4 +
                    (*(float *)(pFVar6 + lVar30 * 0xc + 8) -
                    *(float *)&(pFVar23->Plane).MX.field_0x8) *
                    *(float *)&(pFVar23->Plane).MNormal.field_0x8 <= fVar35) {
                  bVar11 = iVar29 == -1;
                  if (lVar31 != -1) goto LAB_1438a343d;
                }
                else {
                  lVar31 = 3;
                  bVar11 = false;
LAB_1438a343d:
                  puVar32 = (uint *)local_118[lVar31 + 1]->FirstEdge;
                  do {
                    uVar33 = pFVar21->Vertex;
                    lVar30 = (longlong)(int)uVar33;
                    puVar8 = *(uint **)(puVar32 + 2);
                    uVar26 = 0;
                    if ((int)uVar33 < param_2->ArrayNum) {
                      uVar26 = ~uVar33 >> 0x1f;
                    }
                    if ((uVar26 == 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar9 = (code *)swi(3);
                      pFVar16 = (FConvexFace *)(*pcVar9)();
                      return pFVar16;
                    }
                    pFVar6 = (param_2->AllocatorInstance).Data;
                    uVar33 = *puVar8;
                    lVar27 = (longlong)(int)uVar33;
                    uVar26 = 0;
                    if ((int)uVar33 < param_2->ArrayNum) {
                      uVar26 = ~uVar33 >> 0x1f;
                    }
                    if ((uVar26 == 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar9 = (code *)swi(3);
                      pFVar16 = (FConvexFace *)(*pcVar9)();
                      return pFVar16;
                    }
                    pFVar7 = (param_2->AllocatorInstance).Data;
                    uVar33 = *puVar32;
                    lVar28 = (longlong)(int)uVar33;
                    fVar35 = *(float *)(pFVar6 + lVar30 * 0xc + 8);
                    fVar41 = *(float *)(pFVar6 + lVar30 * 0xc + 4);
                    fVar42 = *(float *)(pFVar7 + lVar27 * 0xc + 8);
                    fVar45 = *(float *)(pFVar7 + lVar27 * 0xc + 4);
                    fVar36 = *(float *)(pFVar6 + lVar30 * 0xc);
                    fVar37 = *(float *)(pFVar7 + lVar27 * 0xc);
                    uVar26 = 0;
                    if ((int)uVar33 < param_2->ArrayNum) {
                      uVar26 = ~uVar33 >> 0x1f;
                    }
                    if ((uVar26 == 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar9 = (code *)swi(3);
                      pFVar16 = (FConvexFace *)(*pcVar9)();
                      return pFVar16;
                    }
                    pFVar6 = (param_2->AllocatorInstance).Data;
                    uVar33 = *puVar8;
                    lVar30 = (longlong)(int)uVar33;
                    uVar26 = 0;
                    if ((int)uVar33 < param_2->ArrayNum) {
                      uVar26 = ~uVar33 >> 0x1f;
                    }
                    if ((uVar26 == 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar9 = (code *)swi(3);
                      pFVar16 = (FConvexFace *)(*pcVar9)();
                      return pFVar16;
                    }
                    pFVar7 = (param_2->AllocatorInstance).Data;
                    fVar38 = (fVar35 - fVar42) *
                             (*(float *)(pFVar6 + lVar28 * 0xc + 4) -
                             *(float *)(pFVar7 + lVar30 * 0xc + 4)) -
                             (fVar41 - fVar45) *
                             (*(float *)(pFVar6 + lVar28 * 0xc + 8) -
                             *(float *)(pFVar7 + lVar30 * 0xc + 8));
                    fVar35 = (fVar36 - fVar37) *
                             (*(float *)(pFVar6 + lVar28 * 0xc + 8) -
                             *(float *)(pFVar7 + lVar30 * 0xc + 8)) -
                             (fVar35 - fVar42) *
                             (*(float *)(pFVar6 + lVar28 * 0xc) - *(float *)(pFVar7 + lVar30 * 0xc))
                    ;
                    fVar41 = (fVar41 - fVar45) *
                             (*(float *)(pFVar6 + lVar28 * 0xc) - *(float *)(pFVar7 + lVar30 * 0xc))
                             - (fVar36 - fVar37) *
                               (*(float *)(pFVar6 + lVar28 * 0xc + 4) -
                               *(float *)(pFVar7 + lVar30 * 0xc + 4));
                    if ((double)(fVar35 * fVar35 + fVar38 * fVar38 + fVar41 * fVar41) < dVar10) {
                      pFVar14 = pFVar21->Next;
                      goto LAB_1438a36a8;
                    }
                    puVar32 = *(uint **)(puVar32 + 4);
                  } while ((FHalfEdge *)puVar32 != local_118[lVar31 + 1]->FirstEdge);
                }
                pFVar14 = pFVar21->Next;
                if (bVar11) {
LAB_1438a36a8:
                  pFVar6 = (param_1->HalfEdgesFreeIndices).AllocatorInstance.Data;
                  piVar34 = &pFVar21->PoolIdx;
                  if (((pFVar6 <= piVar34) &&
                      (piVar34 < pFVar6 + (longlong)(param_1->HalfEdgesFreeIndices).ArrayMax * 4))
                     && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar11)) {
                    pcVar9 = (code *)swi(3);
                    pFVar16 = (FConvexFace *)(*pcVar9)();
                    return pFVar16;
                  }
                  iVar29 = (param_1->HalfEdgesFreeIndices).ArrayNum;
                  piVar2 = &(param_1->HalfEdgesFreeIndices).ArrayMax;
                  if (iVar29 == *piVar2) {
                    iVar29 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,(ForAnyElementType *)param_1,piVar2);
                  }
                  (param_1->HalfEdgesFreeIndices).ArrayNum = iVar29 + 1;
                  *(int *)((param_1->HalfEdgesFreeIndices).AllocatorInstance.Data +
                          (longlong)iVar29 * 4) = *piVar34;
                  pFVar21 = pFVar14;
                  pFVar16 = local_118[1];
                }
                else {
                  pFVar16 = local_118[lVar31 + 1];
                  if (pFVar16->ConflictList != (FHalfEdge *)0x0) {
                    pFVar16->ConflictList->Prev = pFVar21;
                  }
                  pFVar21->Next = pFVar16->ConflictList;
                  pFVar16->ConflictList = pFVar21;
                  pFVar21->Prev = (FHalfEdge *)0x0;
                  pFVar21 = pFVar14;
                  pFVar16 = local_118[1];
                }
              } while( true );
            }
          }
        }
      }
    }
  }
  return (FConvexFace *)0x0;
}

// CreateFace @ 1438ab830

FConvexFace * __cdecl
Chaos::FConvexBuilder::CreateFace
          (FMemPool *param_1,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_2,
          FHalfEdge *param_3,FHalfEdge *param_4,FHalfEdge *param_5)

{
  undefined8 uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  FConvexFace *pFVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 local_98 [96];
  
  param_3->Prev = param_5;
  param_3->Next = param_4;
  param_4->Prev = param_3;
  param_4->Next = param_5;
  uVar2 = param_5->Vertex;
  lVar10 = (longlong)(int)uVar2;
  param_5->Prev = param_4;
  param_5->Next = param_3;
  uVar9 = 0;
  if ((int)uVar2 < param_2->ArrayNum) {
    uVar9 = ~uVar2 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FConvexFace *)(*pcVar6)();
      return pFVar8;
    }
  }
  pFVar3 = (param_2->AllocatorInstance).Data;
  uVar2 = param_4->Vertex;
  lVar11 = (longlong)(int)uVar2;
  uVar9 = 0;
  if ((int)uVar2 < param_2->ArrayNum) {
    uVar9 = ~uVar2 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FConvexFace *)(*pcVar6)();
      return pFVar8;
    }
  }
  pFVar4 = (param_2->AllocatorInstance).Data;
  uVar2 = param_3->Vertex;
  lVar12 = (longlong)(int)uVar2;
  uVar9 = 0;
  if ((int)uVar2 < param_2->ArrayNum) {
    uVar9 = ~uVar2 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FConvexFace *)(*pcVar6)();
      return pFVar8;
    }
  }
  pFVar5 = (param_2->AllocatorInstance).Data;
  fVar16 = (*(float *)(pFVar4 + lVar11 * 0xc + 4) - *(float *)(pFVar5 + lVar12 * 0xc + 4)) *
           (*(float *)(pFVar3 + lVar10 * 0xc + 8) - *(float *)(pFVar5 + lVar12 * 0xc + 8)) -
           (*(float *)(pFVar4 + lVar11 * 0xc + 8) - *(float *)(pFVar5 + lVar12 * 0xc + 8)) *
           (*(float *)(pFVar3 + lVar10 * 0xc + 4) - *(float *)(pFVar5 + lVar12 * 0xc + 4));
  fVar15 = (*(float *)(pFVar4 + lVar11 * 0xc) - *(float *)(pFVar5 + lVar12 * 0xc)) *
           (*(float *)(pFVar3 + lVar10 * 0xc + 4) - *(float *)(pFVar5 + lVar12 * 0xc + 4)) -
           (*(float *)(pFVar4 + lVar11 * 0xc + 4) - *(float *)(pFVar5 + lVar12 * 0xc + 4)) *
           (*(float *)(pFVar3 + lVar10 * 0xc) - *(float *)(pFVar5 + lVar12 * 0xc));
  fVar14 = (*(float *)(pFVar4 + lVar11 * 0xc + 8) - *(float *)(pFVar5 + lVar12 * 0xc + 8)) *
           (*(float *)(pFVar3 + lVar10 * 0xc) - *(float *)(pFVar5 + lVar12 * 0xc)) -
           (*(float *)(pFVar4 + lVar11 * 0xc) - *(float *)(pFVar5 + lVar12 * 0xc)) *
           (*(float *)(pFVar3 + lVar10 * 0xc + 8) - *(float *)(pFVar5 + lVar12 * 0xc + 8));
  fVar13 = SQRT(fVar14 * fVar14 + fVar16 * fVar16 + fVar15 * fVar15);
  if (fVar13 <= 0.0) {
    pFVar8 = param_3->Twin->Face;
    uVar1 = *(undefined8 *)&(pFVar8->Plane).MNormal;
    fVar16 = (float)uVar1;
    fVar14 = (float)((ulonglong)uVar1 >> 0x20);
    fVar13 = *(float *)&(pFVar8->Plane).MNormal.field_0x8;
  }
  else {
    fVar13 = __real_3f800000 / fVar13;
    fVar16 = fVar13 * fVar16;
    fVar14 = fVar13 * fVar14;
    fVar13 = fVar13 * fVar15;
  }
  uVar2 = param_3->Vertex;
  uVar9 = 0;
  if ((int)uVar2 < param_2->ArrayNum) {
    uVar9 = ~uVar2 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FConvexFace *)(*pcVar6)();
      return pFVar8;
    }
  }
  pFVar3 = (param_2->AllocatorInstance).Data;
  local_98._16_4_ = fVar14;
  local_98._12_4_ = fVar16;
  local_98._0_8_ = *(undefined8 *)(pFVar3 + (longlong)(int)uVar2 * 0xc);
  local_98._8_4_ = *(undefined4 *)(pFVar3 + (longlong)(int)uVar2 * 0xc + 8);
  local_98._20_4_ = fVar13;
  pFVar8 = FMemPool::AllocConvexFace(param_1,(TCorePlane<float,3> *)local_98);
  pFVar8->FirstEdge = param_3;
  param_3->Face = pFVar8;
  param_4->Face = pFVar8;
  param_5->Face = pFVar8;
  return pFVar8;
}

// FindConflictVertex @ 1438b24e0

FHalfEdge * __cdecl
Chaos::FConvexBuilder::FindConflictVertex
          (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_1,FConvexFace *param_2
          )

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FHalfEdge *pFVar4;
  float fVar5;
  float fVar6;
  FHalfEdge *pFVar7;
  bool bVar8;
  uint uVar9;
  FHalfEdge *pFVar10;
  longlong lVar11;
  float fVar12;
  
  fVar6 = __real_ff7fffff;
  while( true ) {
    if (param_2 == (FConvexFace *)0x0) {
      return (FHalfEdge *)0x0;
    }
    pFVar7 = param_2->ConflictList;
    pFVar10 = (FHalfEdge *)0x0;
    fVar12 = fVar6;
    while (fVar5 = fVar12, pFVar4 = pFVar10, pFVar10 = pFVar7, pFVar10 != (FHalfEdge *)0x0) {
      uVar1 = pFVar10->Vertex;
      lVar11 = (longlong)(int)uVar1;
      uVar9 = 0;
      if ((int)uVar1 < param_1->ArrayNum) {
        uVar9 = ~uVar1 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        pFVar10 = (FHalfEdge *)(*pcVar3)();
        return pFVar10;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      fVar12 = *(float *)(pFVar2 + lVar11 * 0xc + 4) * *(float *)&(param_2->Plane).MNormal.field_0x4
               + *(float *)&(param_2->Plane).MNormal * *(float *)(pFVar2 + lVar11 * 0xc) +
               *(float *)(pFVar2 + lVar11 * 0xc + 8) * *(float *)&(param_2->Plane).MNormal.field_0x8
      ;
      pFVar7 = pFVar10->Next;
      if (fVar12 <= fVar5) {
        pFVar10 = pFVar4;
        fVar12 = fVar5;
      }
    }
    if (pFVar4 != (FHalfEdge *)0x0) {
      if (pFVar4->Prev != (FHalfEdge *)0x0) {
        pFVar4->Prev->Next = pFVar4->Next;
      }
      if (pFVar4->Next != (FHalfEdge *)0x0) {
        pFVar4->Next->Prev = pFVar4->Prev;
      }
      if (pFVar4 == param_2->ConflictList) {
        param_2->ConflictList = pFVar4->Next;
      }
      pFVar4->Face = param_2;
      return pFVar4;
    }
    if ((param_2->ConflictList != (FHalfEdge *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurFace->ConflictList == nullptr || MaxV",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\CollisionConvexMesh.h"
                           ,0x453,L""), bVar8)) break;
    param_2 = param_2->Next;
  }
  pcVar3 = (code *)swi(3);
  pFVar10 = (FHalfEdge *)(*pcVar3)();
  return pFVar10;
}

// IsPlanarShape @ 1438c3680

bool __cdecl
Chaos::FConvexBuilder::IsPlanarShape
          (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_1,
          TVector<float,3> *param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  uint uVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float local_98;
  float fStack_94;
  float local_88;
  float fStack_84;
  float local_78;
  float fStack_74;
  
  iVar4 = param_1->ArrayNum;
  if (iVar4 < 4) {
LAB_1438c3954:
    bVar9 = false;
  }
  else {
    pFVar6 = (param_1->AllocatorInstance).Data;
    uVar2 = *(undefined8 *)(pFVar6 + 0x18);
    fVar15 = *(float *)(pFVar6 + 0x20);
    fVar5 = *(float *)(pFVar6 + 0x14);
    uVar3 = *(undefined8 *)(pFVar6 + 0xc);
    if ((param_1->ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    fStack_84 = (float)((ulonglong)uVar2 >> 0x20);
    pFVar6 = (param_1->AllocatorInstance).Data;
    local_88 = (float)uVar2;
    local_98 = (float)uVar3;
    fStack_94 = (float)((ulonglong)uVar3 >> 0x20);
    uVar2 = *(undefined8 *)pFVar6;
    fVar18 = (float)uVar2;
    fVar1 = *(float *)(pFVar6 + 8);
    fStack_74 = (float)((ulonglong)uVar2 >> 0x20);
    fVar17 = (local_88 - fVar18) * (fVar5 - fVar1) - (fVar15 - fVar1) * (local_98 - fVar18);
    local_78 = (fVar15 - fVar1) * (fStack_94 - fStack_74) -
               (fStack_84 - fStack_74) * (fVar5 - fVar1);
    uVar16 = (fStack_84 - fStack_74) * (local_98 - fVar18) -
             (local_88 - fVar18) * (fStack_94 - fStack_74);
    fVar15 = fVar17 * fVar17 + local_78 * local_78 + (float)uVar16 * (float)uVar16;
    if (fVar15 != __real_3f800000) {
      if (__real_322bcc77 <= fVar15) {
        fVar15 = __real_3f800000 / SQRT(fVar15);
        local_78 = local_78 * fVar15;
        fVar17 = fVar17 * fVar15;
        uVar16 = (float)uVar16 * fVar15;
      }
      else {
        fVar17 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
        local_78 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        uVar16 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      }
    }
    *(float *)param_2 = local_78;
    *(float *)&param_2->field_0x4 = fVar17;
    *(undefined4 *)&param_2->field_0x8 = uVar16;
    uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar15 = __real_38d1b717;
    uVar12 = 3;
    if (3 < (longlong)iVar4) {
      lVar13 = 3;
      lVar14 = 0x24;
      do {
        uVar11 = 0;
        if ((int)uVar12 < param_1->ArrayNum) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        pFVar6 = (param_1->AllocatorInstance).Data;
        if (fVar15 < (float)((uint)((fVar17 * *(float *)(pFVar6 + lVar14 + 4) +
                                     local_78 * *(float *)(pFVar6 + lVar14) +
                                    (float)uVar16 * *(float *)(pFVar6 + lVar14 + 8)) -
                                   (fVar18 * local_78 + fStack_74 * fVar17 + fVar1 * (float)uVar16))
                            & uVar8)) goto LAB_1438c3954;
        uVar12 = uVar12 + 1;
        lVar13 = lVar13 + 1;
        lVar14 = lVar14 + 0xc;
      } while (lVar13 < iVar4);
    }
    bVar9 = true;
  }
  return bVar9;
}

// StealConflictList @ 1438d6210

void __cdecl
Chaos::FConvexBuilder::StealConflictList
          (FMemPool *param_1,TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_2,
          FHalfEdge *param_3,FConvexFace **param_4,int param_5)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  FConvexFace *pFVar9;
  FScriptContainerElement *pFVar10;
  FHalfEdge *pFVar11;
  FScriptContainerElement *pFVar12;
  code *pcVar13;
  float fVar14;
  double dVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  FHalfEdge *pFVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  longlong lVar24;
  int iVar25;
  int *piVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  dVar15 = __real_3f1a36e2eb1c432d;
  fVar14 = __real_38d1b717;
  do {
    if (param_3 == (FHalfEdge *)0x0) {
      return;
    }
    iVar23 = 0;
    lVar19 = 0;
    iVar25 = -1;
    iVar18 = -1;
    lVar24 = -1;
    fVar29 = fVar14;
    if (0 < param_5) {
      do {
        uVar8 = param_3->Vertex;
        lVar21 = (longlong)(int)uVar8;
        pFVar9 = param_4[lVar19];
        uVar17 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar17 = ~uVar8 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        uVar6 = *(undefined8 *)&(pFVar9->Plane).MX;
        pFVar10 = (param_2->AllocatorInstance).Data;
        uVar7 = *(undefined8 *)&(pFVar9->Plane).MNormal;
        fVar27 = (*(float *)(pFVar10 + lVar21 * 0xc + 4) - (float)((ulonglong)uVar6 >> 0x20)) *
                 (float)((ulonglong)uVar7 >> 0x20) +
                 (*(float *)(pFVar10 + lVar21 * 0xc) - (float)uVar6) * (float)uVar7 +
                 (*(float *)(pFVar10 + lVar21 * 0xc + 8) - *(float *)&(pFVar9->Plane).MX.field_0x8)
                 * *(float *)&(pFVar9->Plane).MNormal.field_0x8;
        iVar18 = iVar23;
        lVar21 = lVar19;
        if (fVar27 <= fVar29) {
          iVar18 = iVar25;
          lVar21 = lVar24;
          fVar27 = fVar29;
        }
        lVar24 = lVar21;
        iVar23 = iVar23 + 1;
        lVar19 = lVar19 + 1;
        fVar29 = fVar27;
        iVar25 = iVar18;
      } while (iVar23 < param_5);
    }
    if (lVar24 != -1) {
      pFVar20 = param_4[lVar24]->FirstEdge;
      do {
        uVar8 = param_3->Vertex;
        lVar19 = (longlong)(int)uVar8;
        pFVar11 = pFVar20->Prev;
        uVar17 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar17 = ~uVar8 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        uVar8 = pFVar11->Vertex;
        lVar21 = (longlong)(int)uVar8;
        pFVar10 = (param_2->AllocatorInstance).Data;
        uVar17 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar17 = ~uVar8 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pFVar12 = (param_2->AllocatorInstance).Data;
        uVar8 = pFVar20->Vertex;
        lVar22 = (longlong)(int)uVar8;
        fVar29 = *(float *)(pFVar10 + lVar19 * 0xc + 8);
        fVar27 = *(float *)(pFVar10 + lVar19 * 0xc + 4);
        fVar2 = *(float *)(pFVar12 + lVar21 * 0xc + 8);
        fVar3 = *(float *)(pFVar12 + lVar21 * 0xc + 4);
        fVar4 = *(float *)(pFVar10 + lVar19 * 0xc);
        fVar5 = *(float *)(pFVar12 + lVar21 * 0xc);
        uVar17 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar17 = ~uVar8 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        uVar8 = pFVar11->Vertex;
        lVar19 = (longlong)(int)uVar8;
        pFVar10 = (param_2->AllocatorInstance).Data;
        uVar17 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar17 = ~uVar8 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pFVar12 = (param_2->AllocatorInstance).Data;
        fVar28 = (fVar4 - fVar5) *
                 (*(float *)(pFVar10 + lVar22 * 0xc + 8) - *(float *)(pFVar12 + lVar19 * 0xc + 8)) -
                 (fVar29 - fVar2) *
                 (*(float *)(pFVar10 + lVar22 * 0xc) - *(float *)(pFVar12 + lVar19 * 0xc));
        fVar29 = (fVar29 - fVar2) *
                 (*(float *)(pFVar10 + lVar22 * 0xc + 4) - *(float *)(pFVar12 + lVar19 * 0xc + 4)) -
                 (fVar27 - fVar3) *
                 (*(float *)(pFVar10 + lVar22 * 0xc + 8) - *(float *)(pFVar12 + lVar19 * 0xc + 8));
        fVar27 = (fVar27 - fVar3) *
                 (*(float *)(pFVar10 + lVar22 * 0xc) - *(float *)(pFVar12 + lVar19 * 0xc)) -
                 (fVar4 - fVar5) *
                 (*(float *)(pFVar10 + lVar22 * 0xc + 4) - *(float *)(pFVar12 + lVar19 * 0xc + 4));
        if ((double)(fVar29 * fVar29 + fVar28 * fVar28 + fVar27 * fVar27) < dVar15) {
          pFVar20 = param_3->Next;
          goto LAB_1438d65f6;
        }
        pFVar20 = pFVar20->Next;
      } while (pFVar20 != param_4[lVar24]->FirstEdge);
    }
    pFVar20 = param_3->Next;
    if (iVar18 == -1) {
LAB_1438d65f6:
      piVar26 = &param_3->PoolIdx;
      pFVar10 = (param_1->HalfEdgesFreeIndices).AllocatorInstance.Data;
      if (((pFVar10 <= piVar26) &&
          (piVar26 < pFVar10 + (longlong)(param_1->HalfEdgesFreeIndices).ArrayMax * 4)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      iVar18 = (param_1->HalfEdgesFreeIndices).ArrayNum;
      piVar1 = &(param_1->HalfEdgesFreeIndices).ArrayMax;
      if (iVar18 == *piVar1) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)param_1,piVar1);
      }
      (param_1->HalfEdgesFreeIndices).ArrayNum = iVar18 + 1;
      *(int *)((param_1->HalfEdgesFreeIndices).AllocatorInstance.Data + (longlong)iVar18 * 4) =
           *piVar26;
      param_3 = pFVar20;
    }
    else {
      pFVar9 = param_4[lVar24];
      if (pFVar9->ConflictList != (FHalfEdge *)0x0) {
        pFVar9->ConflictList->Prev = param_3;
      }
      param_3->Next = pFVar9->ConflictList;
      pFVar9->ConflictList = param_3;
      param_3->Prev = (FHalfEdge *)0x0;
      param_3 = pFVar20;
    }
  } while( true );
}

// SuggestEpsilon @ 1438d6e90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl
Chaos::FConvexBuilder::SuggestEpsilon
          (TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong lVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  if (ComputeHorizonEpsilonFromMeshExtends == 0) {
    return __real_3dcccccd;
  }
  iVar2 = param_1->ArrayNum;
  lVar8 = (longlong)iVar2;
  fVar11 = __real_34000000;
  if (1 < iVar2) {
    uVar9 = 0;
    fVar12 = __real_ff7fffff;
    fVar13 = __real_ff7fffff;
    fVar11 = __real_ff7fffff;
    if (0 < iVar2) {
      lVar10 = 0;
      fVar14 = __real_ff7fffff;
      fVar15 = __real_ff7fffff;
      fVar16 = __real_ff7fffff;
      do {
        uVar7 = 0;
        if ((int)uVar9 < param_1->ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          fVar11 = (float)(*pcVar4)();
          return fVar11;
        }
        pFVar3 = (param_1->AllocatorInstance).Data;
        uVar9 = uVar9 + 1;
        fVar12 = (float)(*(uint *)(pFVar3 + lVar10) & uVar5);
        if ((float)(*(uint *)(pFVar3 + lVar10) & uVar5) <= fVar14) {
          fVar12 = fVar14;
        }
        fVar13 = (float)(*(uint *)(pFVar3 + lVar10 + 4) & uVar5);
        if ((float)(*(uint *)(pFVar3 + lVar10 + 4) & uVar5) <= fVar15) {
          fVar13 = fVar15;
        }
        lVar1 = lVar10 + 8;
        lVar10 = lVar10 + 0xc;
        fVar11 = (float)(*(uint *)(pFVar3 + lVar1) & uVar5);
        if ((float)(*(uint *)(pFVar3 + lVar1) & uVar5) <= fVar16) {
          fVar11 = fVar16;
        }
        lVar8 = lVar8 + -1;
        fVar14 = fVar12;
        fVar15 = fVar13;
        fVar16 = fVar11;
      } while (lVar8 != 0);
    }
    fVar11 = (fVar12 + fVar13 + fVar11) * ___real_34c00000;
  }
  return fVar11;
}

// UseConvexHull3 @ 1438dc1d0

bool __cdecl Chaos::FConvexBuilder::UseConvexHull3(EBuildMethod param_1)

{
  if (param_1 == Default) {
    if (!bUseGeometryTConvexHull3) {
      return false;
    }
  }
  else if (1 < param_1 - ConvexHull3) {
    return false;
  }
  return true;
}

// UseConvexHull3Simplifier @ 1438dc1f0

bool __cdecl Chaos::FConvexBuilder::UseConvexHull3Simplifier(EBuildMethod param_1)

{
  if (param_1 == Default) {
    if ((!bUseGeometryTConvexHull3) || (!bUseSimplifierForTConvexHull3)) {
      return false;
    }
  }
  else if (param_1 != ConvexHull3Simplified) {
    return false;
  }
  return true;
}

// operator() @ 1504a3b70

bool __thiscall `Chaos::FConvexBuilder::Build'::__l9::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<211382291555942544>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<211382291555942544>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

