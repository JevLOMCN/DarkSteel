// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 8

// operator() @ 14c94c3b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::FSkinBindingOp::CreateSkinWeights_DirectDistance'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  FTlsAutoCleanup *pFVar1;
  undefined1 *puVar2;
  double *pdVar3;
  TVector<double> *pTVar4;
  TVector<double> *pTVar5;
  longlong *plVar6;
  FBoneWeightsSettings *pFVar7;
  code *pcVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  FTlsAutoCleanup *pFVar17;
  longlong lVar18;
  TVector<double> *pTVar19;
  undefined2 uVar20;
  uint uVar21;
  ulonglong uVar22;
  float fVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  float fVar28;
  float fVar29;
  undefined1 auStackY_1b8 [32];
  undefined1 local_168;
  undefined1 local_167 [3];
  undefined2 local_164;
  undefined2 uStack_162;
  undefined4 uStack_160;
  undefined2 local_15c;
  undefined2 uStack_15a;
  float fStack_158;
  undefined2 local_154;
  undefined2 uStack_152;
  float fStack_150;
  void *local_148;
  ulonglong local_140;
  FTlsAutoCleanup *local_138;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_130;
  ulonglong local_128;
  TVector<double>_u_0 local_120;
  code *local_108;
  undefined1 *local_100;
  FTlsAutoCleanup local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  TArrayView<UE::AnimationCore::FBoneWeight_const_,int> local_e8;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_d8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  uVar22 = (ulonglong)(param_1 & 0x1ff);
  local_128 = (ulonglong)((uint)param_1 >> 9);
  lVar18 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x10) + local_128 * 8);
  pdVar3 = (double *)(lVar18 + uVar22 * 0x18);
  local_120._s_0.X = *pdVar3;
  local_120._s_0.Y = pdVar3[1];
  local_120._s_0.Z = *(double *)(lVar18 + 0x10 + uVar22 * 0x18);
  local_100 = local_167;
  local_108 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<UE::Geometry::`anonymous_namespace'::FCreateSkinWeights_Closest_WorkData>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  local_148 = this;
  local_140 = uVar22;
  pFVar17 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_108,&DAT_154d67008);
  fVar11 = __real_3f800000;
  pFVar1 = pFVar17 + 2;
  local_138 = pFVar17;
  if (*(int *)(*(longlong *)((longlong)this + 8) + 0xb8) < 2) {
    iVar16 = *(int *)&pFVar17[3].field_0x4;
    puVar2 = &pFVar17[3].field_0x4;
    uStack_160 = 0x3f800000;
    local_164 = 0;
    *(undefined4 *)(pFVar17 + 3) = 0;
    iVar14 = 1;
    if (iVar16 != 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,1,(ForAnyElementType *)pFVar1,0,(int *)puVar2);
      iVar14 = *(int *)puVar2;
    }
    if (((*(FScriptContainerElement **)pFVar1 <= (FScriptContainerElement *)&local_164) &&
        ((FScriptContainerElement *)&local_164 <
         *(FScriptContainerElement **)pFVar1 + (longlong)iVar14 * 8)) &&
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
    iVar16 = *(int *)(pFVar17 + 3);
    if (iVar16 == *(int *)puVar2) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,(ForAnyElementType *)pFVar1,(int *)puVar2);
    }
    *(int *)(pFVar17 + 3) = iVar16 + 1;
    *(ulonglong *)(*(FScriptContainerElement **)pFVar1 + (longlong)iVar16 * 8) =
         CONCAT44(uStack_160,CONCAT22(uStack_162,local_164));
  }
  else {
    uVar21 = *(uint *)(*(longlong *)((longlong)this + 8) + 0xa0);
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
    }
    iVar16 = *(int *)&pFVar17[3].field_0x4;
    *(undefined4 *)(pFVar17 + 3) = 0;
    if (iVar16 < (int)uVar21) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar21,(ForAnyElementType *)pFVar1,0,(int *)&pFVar17[3].field_0x4);
    }
  }
  fVar12 = __real_7f7fffff;
  fVar10 = __real_38d1b717;
  uVar21 = 0;
  lVar18 = *(longlong *)((longlong)this + 8);
  fVar29 = 0.0;
  if (0 < *(int *)(lVar18 + 0xa0)) {
    do {
      if (*(int *)(lVar18 + 0xb8) == 1) {
        plVar6 = *(longlong **)((longlong)this + 0x10);
        uVar15 = 0;
        if ((int)uVar21 < (int)plVar6[1]) {
          uVar15 = ~uVar21 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*(int *)(*plVar6 + 0x20 + (longlong)(int)uVar21 * 0x28) != 0) goto LAB_14c94c664;
      }
      else {
LAB_14c94c664:
        plVar6 = *(longlong **)((longlong)this + 0x10);
        uVar15 = 0;
        if ((int)uVar21 < (int)plVar6[1]) {
          uVar15 = ~uVar21 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar18 = *plVar6;
        iVar16 = *(int *)(lVar18 + 0x20 + (longlong)(int)uVar21 * 0x28);
        pTVar4 = (TVector<double> *)(lVar18 + (longlong)(int)uVar21 * 0x28);
        if (iVar16 == 0) {
          dVar9 = local_120._s_0.Y - (pTVar4->field0_0x0)._s_0.Y;
          dVar24 = local_120._s_0.Z - (pTVar4->field0_0x0)._s_0.Z;
          dVar27 = local_120._s_0.X - (pTVar4->field0_0x0)._s_0.X;
          auVar25._0_8_ = dVar24 * dVar24;
          auVar25._8_8_ = 0;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = dVar9 * dVar9 + dVar27 * dVar27 + auVar25._0_8_;
          auVar26 = sqrtpd(auVar25,auVar26);
          fVar28 = (float)auVar26._0_8_;
        }
        else {
          pTVar19 = *(TVector<double> **)&pTVar4[1].field0_0x0;
          pTVar5 = pTVar19 + iVar16;
          fVar28 = fVar12;
          while( true ) {
            if (*(int *)((longlong)&pTVar4[1].field0_0x0 + 8) != iVar16) {
              local_168 = 0;
              `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_168);
            }
            this = local_148;
            if (pTVar19 == pTVar5) break;
            fVar23 = UE::Geometry::DistanceToLineSegment
                               ((TVector<double> *)&local_120._s_0,pTVar4,pTVar19);
            if (fVar28 <= fVar23) {
              fVar23 = fVar28;
            }
            fVar28 = fVar23;
            pTVar19 = pTVar19 + 1;
          }
        }
        fVar28 = fVar28 / **(float **)((longlong)this + 0x18);
        if (fVar28 <= fVar10) {
          fVar28 = fVar10;
        }
        fVar28 = fVar11 / ((**(float **)((longlong)this + 0x20) * fVar28 +
                           (fVar11 - **(float **)((longlong)this + 0x20))) * fVar28);
        fVar28 = fVar28 * fVar28;
        uVar20 = (undefined2)uVar21;
        if (*(int *)(*(longlong *)((longlong)this + 8) + 0xb8) < 2) {
          if (fVar29 < fVar28) {
            local_154 = uVar20;
            fStack_150 = fVar28;
            if ((*(int *)(pFVar17 + 3) < 1) &&
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
            *(ulonglong *)*(FScriptContainerElement **)pFVar1 =
                 CONCAT44(fStack_150,CONCAT22(uStack_152,local_154));
            fVar29 = fVar28;
          }
        }
        else {
          local_15c = uVar20;
          fStack_158 = fVar28;
          if (((*(FScriptContainerElement **)pFVar1 <= (FScriptContainerElement *)&local_15c) &&
              ((FScriptContainerElement *)&local_15c <
               *(FScriptContainerElement **)pFVar1 + (longlong)*(int *)&pFVar17[3].field_0x4 * 8))
             && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar16 = *(int *)(pFVar17 + 3);
          if (iVar16 == *(int *)&pFVar17[3].field_0x4) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,(ForAnyElementType *)pFVar1,(int *)&pFVar17[3].field_0x4);
          }
          *(int *)(pFVar17 + 3) = iVar16 + 1;
          *(ulonglong *)(*(FScriptContainerElement **)pFVar1 + (longlong)iVar16 * 8) =
               CONCAT44(fStack_158,CONCAT22(uStack_15a,local_15c));
          fVar29 = fVar29 + fVar28;
        }
      }
      lVar18 = *(longlong *)((longlong)this + 8);
      uVar21 = uVar21 + 1;
      uVar22 = local_140;
    } while ((int)uVar21 < *(int *)(lVar18 + 0xa0));
  }
  pFVar1 = local_138;
  UE::Geometry::`anonymous_namespace'::FCreateSkinWeights_Closest_WorkData::
  NormalizeWeightsAndLimitCount(local_138,fVar29,*(int *)(*(longlong *)((longlong)this + 0x28) + 4))
  ;
  pFVar7 = *(FBoneWeightsSettings **)((longlong)this + 0x28);
  lVar18 = **(longlong **)((longlong)this + 0x30);
  local_f8 = pFVar1[4];
  iStack_f0 = *(int *)(pFVar1 + 5);
  if ((iStack_f0 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_130.Container = &local_d8;
  local_e8._12_4_ = uStack_ec;
  local_e8.ArrayNum = iStack_f0;
  local_e8.DataPtr = (FBoneWeight *)local_f8;
  local_d8.AllocatorInstance.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0xc;
  UE::AnimationCore::
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  ::
  SetBoneWeights<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
            (&local_130,&local_e8,pFVar7);
  UE::AnimationCore::FBoneWeights::operator=
            ((FBoneWeights *)
             (uVar22 * 0x40 + *(longlong *)(*(longlong *)(lVar18 + 0x20) + local_128 * 8)),
             (FBoneWeights *)&local_d8);
  if (local_d8.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    FMemory::Free((void *)local_d8.AllocatorInstance.SecondaryData);
  }
  return;
}

// operator() @ 14c94c9e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`UE::Geometry::FSkinBindingOp::CreateSkinWeights_GeodesicVoxel'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  double *pdVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  int *piVar6;
  longlong *plVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong *plVar26;
  int iVar27;
  FVector3i *pFVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  TFIFOQueue<UE::Geometry::FVector3i,256> local_208;
  int local_1e0;
  TArray<float,TSizedDefaultAllocator<32>_> local_1d8;
  undefined8 uStack_1c8;
  int local_1c0;
  int local_1b8;
  undefined8 local_1b0;
  int local_1a0;
  undefined8 local_198;
  int local_188;
  int iStack_184;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 local_158;
  TVector<double>_u_0 local_148;
  double local_130;
  double local_128;
  double local_120;
  undefined1 local_118;
  TVector<double>_u_0 local_110;
  double local_f8;
  double local_f0;
  double local_e8;
  
  local_1b0 = (longlong *)((longlong)this + 8);
  if ((*(int *)(*(longlong *)this + 0xb8) == 1) &&
     (bVar15 = UE::Geometry::FTransformHierarchyQuery::IsEndEffector
                         ((FTransformHierarchyQuery *)*local_1b0,param_1), bVar15)) {
    return;
  }
  uVar20 = 0;
  local_208.PushBlock = ___xmm_ffffffff00000000ffffffff00000000;
  local_208.PushIndex = _UNK_150b85a94;
  local_208.PopBlock = _UNK_150b85a98;
  local_208.PopIndex = _UNK_150b85a9c;
  local_208.FreeCount = 0;
  local_208.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.Blocks.ArrayNum = 0;
  local_208.Blocks.ArrayMax = 0;
  uVar2 = **(undefined4 **)((longlong)this + 0x18);
  piVar6 = *(int **)((longlong)this + 0x10);
  iVar17 = *piVar6;
  iVar27 = piVar6[1];
  uVar11 = *(undefined8 *)piVar6;
  iVar18 = piVar6[2];
  local_1d8.ArrayNum = 0;
  local_1d8.ArrayMax = 0;
  uStack_1c8 = 0;
  local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c0 = 0;
  if ((0x7ffffffe < (longlong)iVar17 * (longlong)iVar27 * (longlong)iVar18) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(int64)DimX * (int64)DimY * (int64)DimZ < 2147483647",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\DenseGrid3.h"
                          ,0x3f,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_1d8,iVar17 * iVar27 * iVar18,Default);
  uVar24 = uVar20;
  uStack_1c8 = uVar11;
  local_1c0 = iVar18;
  if (0 < local_1d8.ArrayNum) {
    do {
      uVar22 = (uint)uVar20;
      uVar23 = 0;
      if ((int)uVar22 < local_1d8.ArrayNum) {
        uVar23 = ~uVar22 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar20 = (ulonglong)(uVar22 + 1);
      *(undefined4 *)(local_1d8.AllocatorInstance.Data + uVar24) = uVar2;
      uVar24 = uVar24 + 4;
    } while ((int)(uVar22 + 1) < local_1d8.ArrayNum);
    local_1b0 = (longlong *)((longlong)this + 8);
  }
  plVar26 = local_1b0;
  plVar7 = (longlong *)*local_1b0;
  uVar23 = 0;
  if (param_1 < (int)plVar7[1]) {
    uVar23 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  UE::Geometry::FTransformHierarchyQuery::FBoneFan::GetBBox
            ((FBoneFan *)(*plVar7 + (longlong)param_1 * 0x28),(TBox<double> *)&local_110._s_0);
  fVar14 = __real_3f000000;
  fVar13 = __real_3f800000;
  lVar25 = *(longlong *)((longlong)this + 0x20);
  fVar35 = __real_3f800000 / *(float *)(lVar25 + 0x20);
  fVar30 = (float)local_110._s_0.X - *(float *)(lVar25 + 0x24);
  fVar32 = (float)local_110._s_0.Y - *(float *)(lVar25 + 0x28);
  fVar34 = (float)local_110._s_0.Z - *(float *)(lVar25 + 0x2c);
  iVar29 = (int)ROUND((fVar30 + fVar30) * fVar35 - __real_3f000000) >> 1;
  iVar18 = (int)ROUND((fVar32 + fVar32) * fVar35 - __real_3f000000) >> 1;
  iVar16 = (int)ROUND((fVar34 + fVar34) * fVar35 - __real_3f000000) >> 1;
  fVar30 = (float)local_f8 - *(float *)(lVar25 + 0x24);
  fVar32 = (float)local_f0 - *(float *)(lVar25 + 0x28);
  fVar34 = (float)local_e8 - *(float *)(lVar25 + 0x2c);
  fVar34 = (fVar34 + fVar34) * fVar35 - __real_3f000000;
  iVar27 = (int)ROUND((fVar30 + fVar30) * fVar35 - __real_3f000000) >> 1;
  iVar17 = (int)ROUND((fVar32 + fVar32) * fVar35 - __real_3f000000) >> 1;
  local_1e0 = iVar17;
  local_1b8 = iVar27;
  local_1a0 = iVar18;
  if (iVar29 <= iVar27) {
    do {
      iVar12 = iVar16;
      iVar21 = iVar18;
      if (iVar18 <= iVar17) {
        do {
          for (; iVar18 = local_1a0, iVar27 = local_1b8, local_1b8 = iVar27, local_1a0 = iVar18,
              iVar12 <= (int)ROUND(fVar34) >> 1; iVar12 = iVar12 + 1) {
            if (((((-1 < iVar29) && (-1 < iVar21)) && (-1 < iVar12)) &&
                ((bVar15 = iVar29 < (int)uStack_1c8, bVar15 &&
                 (uStack_1c8._4_4_ = (int)((ulonglong)uStack_1c8 >> 0x20),
                 bVar15 = iVar21 < uStack_1c8._4_4_, bVar15)))) && (iVar12 < local_1c0)) {
              lVar25 = *(longlong *)((longlong)this + 0x20);
              plVar26 = (longlong *)*plVar26;
              local_118 = 1;
              fVar30 = *(float *)(lVar25 + 0x20);
              fVar32 = (float)iVar29 * fVar30 + *(float *)(lVar25 + 0x24);
              fVar35 = (float)iVar21 * fVar30 + *(float *)(lVar25 + 0x28);
              local_148._s_0.X = (double)fVar32;
              fVar30 = (float)iVar12 * fVar30 + *(float *)(lVar25 + 0x2c);
              local_148._s_0.Y = (double)fVar35;
              local_148._s_0.Z = (double)fVar30;
              uVar23 = 0;
              if (param_1 < (int)plVar26[1]) {
                uVar23 = (uint)~param_1 >> 0x1f;
              }
              local_130 = (double)(fVar32 + *(float *)(lVar25 + 0x30) + *(float *)(lVar25 + 0x30));
              local_128 = (double)(*(float *)(lVar25 + 0x34) + fVar35 + *(float *)(lVar25 + 0x34));
              local_120 = (double)(*(float *)(lVar25 + 0x38) + fVar30 + *(float *)(lVar25 + 0x38));
              if ((uVar23 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              bVar15 = UE::Geometry::FTransformHierarchyQuery::FBoneFan::IntersectsBox
                                 ((FBoneFan *)(*plVar26 + (longlong)param_1 * 0x28),
                                  (TBox<double> *)&local_148._s_0);
              plVar26 = local_1b0;
              if (bVar15) {
                local_198 = CONCAT44(iVar21,iVar29);
                if (local_208.Blocks.ArrayNum == 0) {
                  iVar17 = UE::Core::Private::
                           ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x10,8,1,&local_208.Blocks.AllocatorInstance,
                                      &local_208.Blocks.ArrayNum,&local_208.Blocks.ArrayMax);
                  DefaultConstructItems<UE::Geometry::TFIFOQueue<UE::Geometry::FVector3i,256>::FBlock,int>
                            (local_208.Blocks.AllocatorInstance.Data + (longlong)iVar17 * 0x10,1);
                  if ((local_208.Blocks.ArrayNum < 1) &&
                     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar15)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  *local_208.Blocks.AllocatorInstance.Data = (FScriptContainerElement)0x0;
LAB_14c94cf2c:
                  iVar17 = -1;
                }
                else {
                  iVar17 = local_208.PushIndex;
                  if (local_208.PushIndex == 0xff) {
                    local_208.PushBlock =
                         UE::Geometry::TFIFOQueue<UE::Geometry::FVector3i,256>::AllocateNewPushBlock
                                   (&local_208);
                    local_208.PushIndex = 0;
                    goto LAB_14c94cf2c;
                  }
                }
                lVar25 = (longlong)local_208.PushBlock;
                local_208.PushIndex = iVar17 + 1;
                uVar23 = 0;
                if (local_208.PushBlock < local_208.Blocks.ArrayNum) {
                  uVar23 = (uint)~local_208.PushBlock >> 0x1f;
                }
                iVar17 = iVar17 + 1;
                if (uVar23 == 0) {
                  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar15) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  iVar17 = local_208.PushIndex;
                }
                lVar25 = *(longlong *)(local_208.Blocks.AllocatorInstance.Data + lVar25 * 0x10 + 8);
                *(undefined8 *)(lVar25 + (longlong)iVar17 * 0xc) = local_198;
                *(int *)(lVar25 + (longlong)iVar17 * 0xc + 8) = iVar12;
                uVar22 = (uStack_1c8._4_4_ * iVar12 + iVar21) * (int)uStack_1c8 + iVar29;
                uVar23 = 0;
                if ((int)uVar22 < local_1d8.ArrayNum) {
                  uVar23 = ~uVar22 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar15)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                *(undefined4 *)(local_1d8.AllocatorInstance.Data + (longlong)(int)uVar22 * 4) = 0;
                plVar26 = local_1b0;
              }
            }
            iVar17 = local_1e0;
          }
          iVar21 = iVar21 + 1;
          iVar12 = iVar16;
        } while (iVar21 <= iVar17);
      }
      iVar29 = iVar29 + 1;
    } while (iVar29 <= iVar27);
  }
  do {
    fVar30 = __real_38d1b717;
    if (local_208.PushBlock == local_208.PopBlock) {
      if (local_208.PushIndex == local_208.PopIndex) {
        uVar23 = 0;
        if (0 < **(int **)((longlong)this + 0x28)) {
          do {
            lVar25 = *(longlong *)
                      (*(longlong *)(*(longlong *)((longlong)this + 0x30) + 0x10) +
                      (ulonglong)(uVar23 >> 9) * 8);
            pdVar1 = (double *)(lVar25 + (ulonglong)(uVar23 & 0x1ff) * 0x18);
            dVar10 = *pdVar1;
            dVar9 = pdVar1[1];
            dVar5 = *(double *)(lVar25 + 0x10 + (ulonglong)(uVar23 & 0x1ff) * 0x18);
            lVar25 = *(longlong *)((longlong)this + 0x20);
            fVar32 = *(float *)(lVar25 + 0x20);
            fVar34 = (float)dVar10 - *(float *)(lVar25 + 0x24);
            fVar33 = fVar13 / fVar32;
            iVar18 = (int)ROUND((fVar34 + fVar34) * fVar33 - fVar14) >> 1;
            fVar31 = (float)dVar9 - *(float *)(lVar25 + 0x28);
            fVar34 = *(float *)(lVar25 + 0x24);
            fVar35 = *(float *)(lVar25 + 0x30);
            iVar27 = (int)ROUND((fVar31 + fVar31) * fVar33 - fVar14) >> 1;
            fVar31 = (float)dVar5 - *(float *)(lVar25 + 0x2c);
            iVar17 = (int)ROUND((fVar31 + fVar31) * fVar33 - fVar14) >> 1;
            fVar31 = *(float *)(lVar25 + 0x28);
            fVar33 = *(float *)(lVar25 + 0x2c);
            fVar3 = *(float *)(lVar25 + 0x34);
            fVar4 = *(float *)(lVar25 + 0x38);
            local_178 = dVar10;
            dStack_170 = dVar9;
            local_168 = dVar5;
            if ((((iVar18 < 0) || (iVar27 < 0)) || (iVar17 < 0)) ||
               ((((int)uStack_1c8 <= iVar18 || (uStack_1c8._4_4_ <= iVar27)) ||
                (local_1c0 <= iVar17)))) {
              bVar15 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_1710946672432905636>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\SkinningOps\\SkinBindingOp.cpp"
                                  ,0x25c,"BoneDistance.IsValidIndex(CellIndex)");
              if (bVar15) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            else {
              uVar19 = (iVar27 + iVar17 * uStack_1c8._4_4_) * (int)uStack_1c8 + iVar18;
              uVar22 = 0;
              if ((int)uVar19 < local_1d8.ArrayNum) {
                uVar22 = ~uVar19 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              dVar9 = dVar9 - (double)((float)iVar27 * fVar32 + fVar31 + fVar3);
              plVar7 = *(longlong **)((longlong)this + 0x40);
              dVar5 = dVar5 - (double)((float)iVar17 * fVar32 + fVar33 + fVar4);
              dVar10 = dVar10 - (double)((float)iVar18 * fVar32 + fVar34 + fVar35);
              fVar32 = (float)(SQRT(dVar9 * dVar9 + dVar10 * dVar10 + dVar5 * dVar5) +
                              (double)*(float *)(local_1d8.AllocatorInstance.Data +
                                                (longlong)(int)uVar19 * 4)) /
                       **(float **)((longlong)this + 0x18);
              if (fVar32 <= fVar30) {
                fVar32 = fVar30;
              }
              uVar19 = uVar23 * *(int *)(*(longlong *)this + 0xa0) + param_1;
              uVar22 = 0;
              if ((int)uVar19 < (int)plVar7[1]) {
                uVar22 = ~uVar19 >> 0x1f;
              }
              fVar32 = fVar13 / ((**(float **)((longlong)this + 0x38) * fVar32 +
                                 (fVar13 - **(float **)((longlong)this + 0x38))) * fVar32);
              if ((uVar22 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              *(float *)(*plVar7 + (longlong)(int)uVar19 * 4) = fVar32 * fVar32;
            }
            uVar23 = uVar23 + 1;
          } while ((int)uVar23 < **(int **)((longlong)this + 0x28));
        }
        if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.AllocatorInstance.Data);
        }
        DestructItems<UE::Geometry::TFIFOQueue<UE::Geometry::FVector3i,256>::FBlock,int>
                  ((FBlock *)local_208.Blocks.AllocatorInstance.Data,local_208.Blocks.ArrayNum);
        if ((FBlock *)local_208.Blocks.AllocatorInstance.Data == (FBlock *)0x0) {
          return;
        }
        FMemory::Free(local_208.Blocks.AllocatorInstance.Data);
        return;
      }
      if ((local_208.PushBlock == local_208.PopBlock) && (local_208.PushIndex == local_208.PopIndex)
         ) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("!IsEmpty()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\SkinningOps\\SkinBindingOp.cpp"
                            ,0x31,L"");
        if (bVar15) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
    }
    uVar23 = local_208.PopBlock;
    iVar17 = local_208.PopIndex;
    if (local_208.PopIndex == 0xff) {
      lVar25 = (longlong)local_208.PopBlock;
      uVar23 = 0;
      if (local_208.PopBlock < local_208.Blocks.ArrayNum) {
        uVar23 = (uint)~local_208.PopBlock >> 0x1f;
      }
      uVar22 = local_208.PopBlock;
      if (uVar23 == 0) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar15) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar22 = local_208.PopBlock;
      }
      uVar23 = *(uint *)(local_208.Blocks.AllocatorInstance.Data + lVar25 * 0x10 + 4);
      uVar19 = 0;
      if ((int)uVar22 < local_208.Blocks.ArrayNum) {
        uVar19 = ~uVar22 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar17 = -1;
      local_208.Blocks.AllocatorInstance.Data[(longlong)(int)uVar22 * 0x10].field_0x0 = 1;
      local_208.FreeCount = local_208.FreeCount + 1;
      local_208.PopIndex = 0;
      local_208.PopBlock = uVar23;
    }
    local_208.PopIndex = iVar17 + 1;
    uVar22 = 0;
    if ((int)uVar23 < local_208.Blocks.ArrayNum) {
      uVar22 = ~uVar23 >> 0x1f;
    }
    iVar17 = iVar17 + 1;
    if (uVar22 == 0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar15) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar17 = local_208.PopIndex;
    }
    local_198 = *(undefined8 *)
                 (*(longlong *)
                   (local_208.Blocks.AllocatorInstance.Data + (longlong)(int)uVar23 * 0x10 + 8) +
                 (longlong)iVar17 * 0xc);
    iVar17 = *(int *)(*(longlong *)
                       (local_208.Blocks.AllocatorInstance.Data + (longlong)(int)uVar23 * 0x10 + 8)
                      + (longlong)iVar17 * 0xc + 8);
    uVar22 = ((int)((ulonglong)local_198 >> 0x20) + uStack_1c8._4_4_ * iVar17) * (int)uStack_1c8 +
             (int)local_198;
    uVar23 = 0;
    if ((int)uVar22 < local_1d8.ArrayNum) {
      uVar23 = ~uVar22 >> 0x1f;
    }
    local_158 = local_198;
    if ((uVar23 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar28 = IndexUtil::GridOffsets26;
    fVar30 = *(float *)(local_1d8.AllocatorInstance.Data + (longlong)(int)uVar22 * 4);
    iVar27 = local_198._4_4_;
    local_1b8 = (int)local_198;
    do {
      local_1b0 = *(longlong **)&pFVar28->field0_0x0;
      iVar16 = (pFVar28->field0_0x0)._s_0.Z;
      iVar18 = iVar17 + iVar16;
      iVar21 = (int)((ulonglong)local_1b0 >> 0x20) + iVar27;
      local_1e0 = (int)local_1b0;
      iVar29 = local_1b8 + (int)local_1b0;
      if ((((-1 < iVar29) && (-1 < iVar21)) && (-1 < iVar18)) &&
         (((iVar29 < (int)uStack_1c8 && (iVar21 < uStack_1c8._4_4_)) && (iVar18 < local_1c0)))) {
        plVar7 = *(longlong **)((longlong)this + 0x20);
        uVar22 = (iVar18 * *(int *)((longlong)plVar7 + 0x14) + iVar21) * (int)plVar7[2] + iVar29;
        uVar23 = 0;
        if ((int)uVar22 < (int)plVar7[1]) {
          uVar23 = ~uVar22 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*(int *)(*plVar7 + (longlong)(int)uVar22 * 4) != 0) {
          fVar32 = *(float *)(*(longlong *)((longlong)this + 0x20) + 0x20);
          uVar22 = (iVar18 * uStack_1c8._4_4_ + iVar21) * (int)uStack_1c8 + iVar29;
          uVar23 = 0;
          if ((int)uVar22 < local_1d8.ArrayNum) {
            uVar23 = ~uVar22 >> 0x1f;
          }
          fVar34 = (float)iVar16 * fVar32;
          fVar32 = SQRT((float)local_1b0._4_4_ * fVar32 * (float)local_1b0._4_4_ * fVar32 +
                        (float)local_1e0 * fVar32 * (float)local_1e0 * fVar32 + fVar34 * fVar34) +
                   fVar30;
          if ((uVar23 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (fVar32 < *(float *)(local_1d8.AllocatorInstance.Data + (longlong)(int)uVar22 * 4)) {
            local_188 = iVar29;
            iStack_184 = iVar21;
            if (local_208.Blocks.ArrayNum == 0) {
              iVar16 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x10,8,1,&local_208.Blocks.AllocatorInstance,
                                  &local_208.Blocks.ArrayNum,&local_208.Blocks.ArrayMax);
              DefaultConstructItems<UE::Geometry::TFIFOQueue<UE::Geometry::FVector3i,256>::FBlock,int>
                        (local_208.Blocks.AllocatorInstance.Data + (longlong)iVar16 * 0x10,1);
              if ((local_208.Blocks.ArrayNum < 1) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              *local_208.Blocks.AllocatorInstance.Data = (FScriptContainerElement)0x0;
LAB_14c94d508:
              local_208.PushIndex = 0xffffffff;
            }
            else if (local_208.PushIndex == 0xff) {
              local_208.PushBlock =
                   UE::Geometry::TFIFOQueue<UE::Geometry::FVector3i,256>::AllocateNewPushBlock
                             (&local_208);
              goto LAB_14c94d508;
            }
            lVar25 = (longlong)local_208.PushBlock;
            local_208.PushIndex = local_208.PushIndex + 1;
            uVar23 = 0;
            if (local_208.PushBlock < local_208.Blocks.ArrayNum) {
              uVar23 = (uint)~local_208.PushBlock >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar25 = *(longlong *)(local_208.Blocks.AllocatorInstance.Data + lVar25 * 0x10 + 8);
            *(ulonglong *)(lVar25 + (longlong)local_208.PushIndex * 0xc) =
                 CONCAT44(iStack_184,local_188);
            *(int *)(lVar25 + (longlong)local_208.PushIndex * 0xc + 8) = iVar18;
            uVar22 = (iVar18 * uStack_1c8._4_4_ + iVar21) * (int)uStack_1c8 + iVar29;
            uVar23 = 0;
            if ((int)uVar22 < local_1d8.ArrayNum) {
              uVar23 = ~uVar22 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            *(float *)(local_1d8.AllocatorInstance.Data + (longlong)(int)uVar22 * 4) = fVar32;
          }
        }
      }
      pFVar28 = pFVar28 + 1;
    } while ((longlong)pFVar28 < 0x150aa30e8);
  } while( true );
}

// operator() @ 14c956140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Geometry::FSkinBindingOp::CreateSkinWeights_GeodesicVoxel'::__l2::<lambda_2>::operator()
          (void *this,int param_1)

{
  FTlsAutoCleanup *pFVar1;
  undefined1 *puVar2;
  float fVar3;
  longlong *plVar4;
  FBoneWeightsSettings *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FTlsAutoCleanup *pFVar10;
  longlong lVar11;
  uint uVar12;
  undefined2 uVar13;
  uint uVar14;
  FTlsAutoCleanup *this_00;
  uint uVar15;
  float fVar16;
  undefined1 auStackY_148 [32];
  undefined1 local_f8 [4];
  uint local_f4;
  undefined2 local_f0;
  undefined2 uStack_ee;
  undefined4 uStack_ec;
  undefined2 local_e8;
  undefined2 uStack_e6;
  float fStack_e4;
  undefined2 local_e0;
  undefined2 uStack_de;
  float fStack_dc;
  FTlsAutoCleanup *local_d8;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_d0;
  code *local_c8;
  undefined1 *local_c0;
  FTlsAutoCleanup local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  TArrayView<UE::AnimationCore::FBoneWeight_const_,int> local_a8;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_98;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_c0 = local_f8;
  local_c8 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<UE::Geometry::`anonymous_namespace'::FCreateSkinWeights_Closest_WorkData>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  local_f4 = param_1;
  pFVar10 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_c8,&DAT_154d67008);
  pFVar1 = pFVar10 + 2;
  local_d8 = pFVar10;
  if (*(int *)(*(longlong *)this + 0xb8) < 2) {
    iVar9 = *(int *)&pFVar10[3].field_0x4;
    puVar2 = &pFVar10[3].field_0x4;
    uStack_ec = 0x3f800000;
    local_f0 = 0;
    *(undefined4 *)(pFVar10 + 3) = 0;
    iVar8 = 1;
    if (iVar9 != 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,1,(ForAnyElementType *)pFVar1,0,(int *)puVar2);
      iVar8 = *(int *)puVar2;
    }
    if (((*(FScriptContainerElement **)pFVar1 <= (FScriptContainerElement *)&local_f0) &&
        ((FScriptContainerElement *)&local_f0 <
         *(FScriptContainerElement **)pFVar1 + (longlong)iVar8 * 8)) &&
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
    iVar9 = *(int *)(pFVar10 + 3);
    if (iVar9 == *(int *)puVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,(ForAnyElementType *)pFVar1,(int *)puVar2);
    }
    *(int *)(pFVar10 + 3) = iVar9 + 1;
    *(ulonglong *)(*(FScriptContainerElement **)pFVar1 + (longlong)iVar9 * 8) =
         CONCAT44(uStack_ec,CONCAT22(uStack_ee,local_f0));
  }
  else {
    uVar15 = *(uint *)(*(longlong *)this + 0xa0);
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    iVar9 = *(int *)&pFVar10[3].field_0x4;
    *(undefined4 *)(pFVar10 + 3) = 0;
    if (iVar9 < (int)uVar15) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar15,(ForAnyElementType *)pFVar1,0,(int *)&pFVar10[3].field_0x4);
    }
  }
  uVar14 = 0;
  lVar11 = *(longlong *)this;
  fVar16 = 0.0;
  this_00 = pFVar10;
  uVar15 = param_1;
  if (0 < *(int *)(lVar11 + 0xa0)) {
    do {
      if (*(int *)(lVar11 + 0xb8) == 1) {
        plVar4 = *(longlong **)((longlong)this + 8);
        uVar15 = 0;
        if ((int)uVar14 < (int)plVar4[1]) {
          uVar15 = ~uVar14 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(int *)(*plVar4 + 0x20 + (longlong)(int)uVar14 * 0x28) != 0) goto LAB_14c95636c;
      }
      else {
LAB_14c95636c:
        plVar4 = *(longlong **)((longlong)this + 0x10);
        uVar12 = param_1 * *(int *)(*(longlong *)this + 0xa0) + uVar14;
        uVar15 = 0;
        if ((int)uVar12 < (int)plVar4[1]) {
          uVar15 = ~uVar12 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        fVar3 = *(float *)(*plVar4 + (longlong)(int)uVar12 * 4);
        uVar13 = (undefined2)uVar14;
        if (*(int *)(*(longlong *)this + 0xb8) < 2) {
          if (fVar16 < fVar3) {
            local_e0 = uVar13;
            fStack_dc = fVar3;
            if ((*(int *)(pFVar10 + 3) < 1) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            *(ulonglong *)*(FScriptContainerElement **)pFVar1 =
                 CONCAT44(fStack_dc,CONCAT22(uStack_de,local_e0));
            fVar16 = fVar3;
          }
        }
        else {
          local_e8 = uVar13;
          fStack_e4 = fVar3;
          if (((*(FScriptContainerElement **)pFVar1 <= (FScriptContainerElement *)&local_e8) &&
              ((FScriptContainerElement *)&local_e8 <
               *(FScriptContainerElement **)pFVar1 + (longlong)*(int *)&pFVar10[3].field_0x4 * 8))
             && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar9 = *(int *)(pFVar10 + 3);
          if (iVar9 == *(int *)&pFVar10[3].field_0x4) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,(ForAnyElementType *)pFVar1,(int *)&pFVar10[3].field_0x4);
          }
          *(int *)(pFVar10 + 3) = iVar9 + 1;
          *(ulonglong *)(*(FScriptContainerElement **)pFVar1 + (longlong)iVar9 * 8) =
               CONCAT44(fStack_e4,CONCAT22(uStack_e6,local_e8));
          fVar16 = fVar16 + fVar3;
        }
      }
      lVar11 = *(longlong *)this;
      uVar14 = uVar14 + 1;
      this_00 = local_d8;
      uVar15 = local_f4;
    } while ((int)uVar14 < *(int *)(lVar11 + 0xa0));
  }
  UE::Geometry::`anonymous_namespace'::FCreateSkinWeights_Closest_WorkData::
  NormalizeWeightsAndLimitCount(this_00,fVar16,*(int *)(*(longlong *)((longlong)this + 0x18) + 4));
  iStack_b0 = *(int *)(this_00 + 5);
  pFVar5 = *(FBoneWeightsSettings **)((longlong)this + 0x18);
  lVar11 = **(longlong **)((longlong)this + 0x20);
  local_b8 = this_00[4];
  if ((iStack_b0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_d0.Container = &local_98;
  local_a8._12_4_ = uStack_ac;
  local_a8.ArrayNum = iStack_b0;
  local_a8.DataPtr = (FBoneWeight *)local_b8;
  local_98.AllocatorInstance.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0xc;
  UE::AnimationCore::
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  ::
  SetBoneWeights<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
            (&local_d0,&local_a8,pFVar5);
  UE::AnimationCore::FBoneWeights::operator=
            ((FBoneWeights *)
             ((ulonglong)(uVar15 & 0x1ff) * 0x40 +
             *(longlong *)(*(longlong *)(lVar11 + 0x20) + (ulonglong)(uVar15 >> 9) * 8)),
             (FBoneWeights *)&local_98);
  if (local_98.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    FMemory::Free((void *)local_98.AllocatorInstance.SecondaryData);
  }
  return;
}

// CalculateResult @ 14c96a000

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FSkinBindingOp::CalculateResult(FSkinBindingOp *this,FProgressCancel *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  longlong *plVar5;
  FDynamicMesh3 *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *pTVar21;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *pTVar22;
  bool bVar23;
  uint uVar24;
  undefined8 uVar25;
  TAxisAlignedBox3<double> *pTVar26;
  longlong *plVar27;
  uint uVar28;
  FDynamicMeshAttributeSet *pFVar29;
  FDynamicMeshAttributeSet *pFVar30;
  FDynamicMeshAttributeSet *pFVar31;
  uint uVar32;
  FDynamicMeshAttributeSet *pFVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  double dVar39;
  int local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  float local_2d8 [2];
  float local_2d0 [2];
  undefined4 local_2c8;
  int local_2c4;
  undefined4 local_2c0;
  undefined2 local_2bc;
  TArray<float,TSizedDefaultAllocator<32>_> local_2b8;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,FName> *local_2a8;
  FTransformHierarchyQuery local_2a0;
  FTransformHierarchyQuery local_290;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *local_280;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *local_278;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,int> *local_270;
  TDynamicBoneAttributeBase<UE::Geometry::FDynamicMesh3,UE::Math::TTransform<double>_> *local_268;
  longlong local_260;
  undefined8 local_258;
  int local_250;
  TArrayView<std::nullptr_t,int> local_248;
  code *local_238;
  FSkinBindingOp **local_230;
  TArrayView<std::nullptr_t,int> local_228;
  code *local_218;
  FSkinBindingOp **local_210;
  TArrayView<std::nullptr_t,int> local_208;
  code *local_1f8;
  FDynamicMesh3 **local_1f0;
  FSkinBindingOp *local_1e8;
  FTransformHierarchyQuery *local_1e0;
  TArray<float,TSizedDefaultAllocator<32>_> *local_1d8;
  undefined4 *local_1d0;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> **local_1c8;
  FDynamicMesh3 *local_1c0;
  FSkinBindingOp *local_1b8;
  FTransformHierarchyQuery *local_1b0;
  float *local_1a8;
  float *local_1a0;
  undefined4 *local_198;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> **local_190;
  FSkinBindingOp *local_188;
  FTransformHierarchyQuery *local_180;
  undefined8 *local_178;
  float *local_170;
  FOccupancyGrid3 *local_168;
  int *local_160;
  FDynamicMesh3 *local_158;
  float *local_150;
  TArray<float,TSizedDefaultAllocator<32>_> *local_148;
  FOccupancyGrid3 local_138;
  TAxisAlignedBox3<double> local_f8;
  TAxisAlignedBox3<double> local_c8 [3];
  
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar4 = *(code **)&param_1->CancelF;
    plVar5 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar27 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar27 = plVar5;
    }
    uVar25 = (**(code **)(*plVar27 + 8))();
    bVar23 = (bool)(*pcVar4)(uVar25);
    param_1->WasCancelled = bVar23;
    if (bVar23 != false) {
      return;
    }
  }
  pFVar6 = (FDynamicMesh3 *)this->_padding_;
  if (((this->OriginalMesh).Object == (FDynamicMesh3 *)0x0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar23)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FDynamicMesh3::Copy(pFVar6,(this->OriginalMesh).Object,true,true,true,true);
  if (param_1 != (FProgressCancel *)0x0) {
    if (param_1->WasCancelled != false) {
      return;
    }
    Core::Private::Function::CheckCallable(*(void **)&param_1->CancelF);
    pcVar4 = *(code **)&param_1->CancelF;
    plVar5 = *(longlong **)&(param_1->CancelF).field_0x28;
    plVar27 = (longlong *)&(param_1->CancelF).field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar27 = plVar5;
    }
    uVar25 = (**(code **)(*plVar27 + 8))();
    bVar23 = (bool)(*pcVar4)(uVar25);
    param_1->WasCancelled = bVar23;
    if (bVar23 != false) {
      return;
    }
  }
  local_2c4 = this->MaxInfluences;
  pFVar30 = (FDynamicMeshAttributeSet *)0x0;
  fVar38 = this->Stiffness;
  if (__real_3f800000 <= this->Stiffness) {
    fVar38 = __real_3f800000;
  }
  local_2c8 = 2;
  local_2c0 = 1;
  if (local_2c4 < 1) {
    local_2c4 = 1;
  }
  local_2bc = 0x100;
  if (fVar38 <= 0.0) {
    fVar38 = 0.0;
  }
  if (this->BindType == DirectDistance) {
    pFVar6 = (FDynamicMesh3 *)this->_padding_;
    local_2d0[0] = fVar38;
    local_278 = GetOrCreateSkinWeightsAttribute(pFVar6,this->ProfileName);
    iVar2 = (pFVar6->VertexRefCounts).UsedCount;
    pTVar26 = FDynamicMesh3::GetBounds(pFVar6,local_c8,true);
    dVar9 = (pTVar26->Max).field0_0x0._s_0.Y - (pTVar26->Min).field0_0x0._s_0.Y;
    dVar34 = (pTVar26->Max).field0_0x0._s_0.X - (pTVar26->Min).field0_0x0._s_0.X;
    dVar39 = (pTVar26->Max).field0_0x0._s_0.Z - (pTVar26->Min).field0_0x0._s_0.Z;
    auVar37._0_8_ = dVar34 * dVar34;
    auVar37._8_8_ = 0;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = dVar9 * dVar9 + auVar37._0_8_ + dVar39 * dVar39;
    auVar36 = sqrtpd(auVar37,auVar36);
    local_2d8[0] = (float)auVar36._0_8_;
    FTransformHierarchyQuery::FTransformHierarchyQuery(&local_290,&this->TransformHierarchy);
    local_1b0 = &local_290;
    local_1a8 = local_2d8;
    local_1a0 = local_2d0;
    local_208.DataPtr = (void **)0x0;
    local_198 = &local_2c8;
    local_208.ArrayNum = 0;
    local_190 = &local_278;
    local_1f8 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FSkinBindingOp::CreateSkinWeights_DirectDistance'::__l2::<lambda_1>,void,int>
                ::Call;
    local_1f0 = &local_1c0;
    local_1c0 = pFVar6;
    local_1b8 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",iVar2,1,(TFunctionRef<void___cdecl(int)> *)&local_1f8,
               local_res10[0]._0_1_,None,&local_208);
    DestructItems<UE::Geometry::FTransformHierarchyQuery::FBoneFan,int>
              ((FBoneFan *)local_290.BoneFans.AllocatorInstance.Data,local_290.BoneFans.ArrayNum);
    local_2a0.BoneFans.AllocatorInstance.Data = local_290.BoneFans.AllocatorInstance.Data;
  }
  else {
    if (this->BindType != GeodesicVoxel) goto LAB_14c96a4e6;
    pFVar6 = (FDynamicMesh3 *)this->_padding_;
    local_res20[0] = fVar38;
    local_280 = GetOrCreateSkinWeightsAttribute(pFVar6,this->ProfileName);
    local_res10[0] = (pFVar6->VertexRefCounts).UsedCount;
    pTVar26 = FDynamicMesh3::GetBounds(pFVar6,&local_f8,true);
    dVar9 = (pTVar26->Max).field0_0x0._s_0.Y - (pTVar26->Min).field0_0x0._s_0.Y;
    dVar34 = (pTVar26->Max).field0_0x0._s_0.X - (pTVar26->Min).field0_0x0._s_0.X;
    dVar39 = (pTVar26->Max).field0_0x0._s_0.Z - (pTVar26->Min).field0_0x0._s_0.Z;
    auVar35._0_8_ = dVar34 * dVar34;
    auVar35._8_8_ = 0;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar9 * dVar9 + auVar35._0_8_ + dVar39 * dVar39;
    auVar36 = sqrtpd(auVar35,auVar8);
    local_res18[0] = (float)auVar36._0_8_;
    FTransformHierarchyQuery::FTransformHierarchyQuery(&local_2a0,&this->TransformHierarchy);
    local_2b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.ArrayNum = 0;
    local_2b8.ArrayMax = 0;
    TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_2b8,local_res10[0] * (this->TransformHierarchy).ArrayNum,Default);
    FOccupancyGrid3::FOccupancyGrid3<UE::Geometry::FDynamicMesh3>
              (&local_138,pFVar6,this->VoxelResolution);
    local_250 = local_138.Occupancy.Dimensions.field0_0x0._s_0.Z;
    local_180 = &local_2a0;
    local_178 = &local_258;
    local_170 = local_res18;
    local_168 = &local_138;
    local_160 = local_res10;
    local_150 = local_res20;
    local_148 = &local_2b8;
    local_238 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FSkinBindingOp::CreateSkinWeights_GeodesicVoxel'::__l2::<lambda_1>,void,int>
                ::Call;
    local_230 = &local_188;
    local_258 = local_138.Occupancy.Dimensions.field0_0x0._0_8_;
    local_248.DataPtr = (void **)0x0;
    local_248.ArrayNum = 0;
    local_188 = this;
    local_158 = pFVar6;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",(this->TransformHierarchy).ArrayNum,1,
               (TFunctionRef<void___cdecl(int)> *)&local_238,local_res10[0]._0_1_,None,&local_248);
    local_1e0 = &local_2a0;
    local_1d8 = &local_2b8;
    local_1d0 = &local_2c8;
    local_1c8 = &local_280;
    local_228.DataPtr = (void **)0x0;
    local_228.ArrayNum = 0;
    local_218 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FSkinBindingOp::CreateSkinWeights_GeodesicVoxel'::__l2::<lambda_2>,void,int>
                ::Call;
    local_210 = &local_1e8;
    local_1e8 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",local_res10[0],1,(TFunctionRef<void___cdecl(int)> *)&local_218,
               local_res10[0]._0_1_,None,&local_228);
    if (local_138.Occupancy.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Occupancy.Buffer.AllocatorInstance.Data);
    }
    if (local_2b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.AllocatorInstance.Data);
    }
    DestructItems<UE::Geometry::FTransformHierarchyQuery::FBoneFan,int>
              ((FBoneFan *)local_2a0.BoneFans.AllocatorInstance.Data,local_2a0.BoneFans.ArrayNum);
  }
  if ((FBoneFan *)local_2a0.BoneFans.AllocatorInstance.Data != (FBoneFan *)0x0) {
    FMemory::Free(local_2a0.BoneFans.AllocatorInstance.Data);
  }
LAB_14c96a4e6:
  iVar2 = (this->TransformHierarchy).ArrayNum;
  pFVar31 = *(FDynamicMeshAttributeSet **)(this->_padding_ + 0x208);
  pFVar29 = pFVar30;
  if (pFVar31 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar29 = pFVar31;
  }
  FDynamicMeshAttributeSet::EnableBones(pFVar29,iVar2);
  local_2a8 = (pFVar29->BoneNameAttrib).Ptr;
  local_270 = (pFVar29->BoneParentIndexAttrib).Ptr;
  local_268 = (pFVar29->BonePoseAttrib).Ptr;
  pFVar31 = pFVar30;
  pFVar29 = pFVar30;
  pFVar33 = pFVar30;
  local_260 = (longlong)iVar2;
  if (0 < iVar2) {
    do {
      uVar28 = (uint)pFVar30;
      uVar32 = ~uVar28 >> 0x1f;
      uVar24 = 0;
      if ((int)uVar28 < (this->TransformHierarchy).ArrayNum) {
        uVar24 = uVar32;
      }
      if ((uVar24 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar25 = *(undefined8 *)
                ((this->TransformHierarchy).AllocatorInstance.Data +
                (longlong)&(pFVar33->PolygroupLayers).Array);
      uVar24 = 0;
      if ((int)uVar28 < (local_2a8->AttribValues).ArrayNum) {
        uVar24 = uVar32;
      }
      if ((uVar24 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined8 *)((local_2a8->AttribValues).AllocatorInstance.Data + (longlong)pFVar29 * 8) =
           uVar25;
      uVar24 = 0;
      if ((int)uVar28 < (this->TransformHierarchy).ArrayNum) {
        uVar24 = uVar32;
      }
      if ((uVar24 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar21 = local_270;
      uVar3 = *(undefined4 *)
               ((this->TransformHierarchy).AllocatorInstance.Data + 8 +
               (longlong)&(pFVar33->PolygroupLayers).Array);
      uVar24 = 0;
      if ((int)uVar28 < (local_270->AttribValues).ArrayNum) {
        uVar24 = ~uVar28 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined4 *)((pTVar21->AttribValues).AllocatorInstance.Data + (longlong)pFVar29 * 4) =
           uVar3;
      uVar24 = 0;
      if ((int)uVar28 < (this->TransformHierarchy).ArrayNum) {
        uVar24 = ~uVar28 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar22 = local_268;
      pFVar7 = (this->TransformHierarchy).AllocatorInstance.Data;
      pFVar1 = (FScriptContainerElement *)((longlong)&pFVar33->_padding_ + (longlong)pFVar7);
      uVar25 = *(undefined8 *)pFVar1;
      uVar10 = *(undefined8 *)(pFVar1 + 8);
      pFVar1 = (FScriptContainerElement *)((longlong)&pFVar33->_padding_ + (longlong)pFVar7);
      uVar11 = *(undefined8 *)pFVar1;
      uVar12 = *(undefined8 *)(pFVar1 + 8);
      uVar13 = *(undefined8 *)(pFVar7 + (longlong)&(pFVar33->UVLayers).Array);
      uVar14 = *(undefined8 *)(pFVar7 + (longlong)&(pFVar33->UVLayers).Array + 8);
      uVar15 = *(undefined8 *)(pFVar7 + (longlong)&(pFVar33->NormalLayers).Array);
      uVar16 = *(undefined8 *)(pFVar7 + (longlong)&(pFVar33->NormalLayers).Array + 8);
      uVar17 = *(undefined8 *)(pFVar7 + (longlong)&(pFVar33->ColorLayer).Ptr);
      uVar18 = *(undefined8 *)(pFVar7 + (longlong)&(pFVar33->ColorLayer).Ptr + 8);
      uVar19 = *(undefined8 *)(pFVar7 + (longlong)&(pFVar33->WeightLayers).Array);
      uVar20 = *(undefined8 *)(pFVar7 + (longlong)&(pFVar33->WeightLayers).Array + 8);
      uVar24 = 0;
      if ((int)uVar28 < (local_268->AttribValues).ArrayNum) {
        uVar24 = ~uVar28 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar7 = (pTVar22->AttribValues).AllocatorInstance.Data;
      pFVar30 = (FDynamicMeshAttributeSet *)(ulonglong)(uVar28 + 1);
      pFVar29 = (FDynamicMeshAttributeSet *)((longlong)&pFVar29->_padding_ + 1);
      pFVar1 = (FScriptContainerElement *)((longlong)&pFVar31->_padding_ + (longlong)pFVar7);
      *(undefined8 *)pFVar1 = uVar25;
      *(undefined8 *)(pFVar1 + 8) = uVar10;
      pFVar1 = (FScriptContainerElement *)((longlong)&pFVar31->_padding_ + (longlong)pFVar7);
      *(undefined8 *)pFVar1 = uVar11;
      *(undefined8 *)(pFVar1 + 8) = uVar12;
      *(undefined8 *)(pFVar7 + (longlong)&(pFVar31->UVLayers).Array) = uVar13;
      *(undefined8 *)(pFVar7 + (longlong)&(pFVar31->UVLayers).Array + 8) = uVar14;
      *(undefined8 *)(pFVar7 + (longlong)&(pFVar31->NormalLayers).Array) = uVar15;
      *(undefined8 *)(pFVar7 + (longlong)&(pFVar31->NormalLayers).Array + 8) = uVar16;
      *(undefined8 *)(pFVar7 + (longlong)&(pFVar31->ColorLayer).Ptr) = uVar17;
      *(undefined8 *)(pFVar7 + (longlong)&(pFVar31->ColorLayer).Ptr + 8) = uVar18;
      *(undefined8 *)(pFVar7 + (longlong)&(pFVar31->WeightLayers).Array) = uVar19;
      *(undefined8 *)(pFVar7 + (longlong)&(pFVar31->WeightLayers).Array + 8) = uVar20;
      pFVar31 = (FDynamicMeshAttributeSet *)&pFVar31->PolygroupLayers;
      pFVar33 = (FDynamicMeshAttributeSet *)&pFVar33->SkinWeightAttributes;
    } while ((longlong)pFVar29 < local_260);
  }
  return;
}

// CreateSkinWeights_DirectDistance @ 14c97b890

void __thiscall
UE::Geometry::FSkinBindingOp::CreateSkinWeights_DirectDistance
          (FSkinBindingOp *this,FDynamicMesh3 *param_1,float param_2,FBoneWeightsSettings *param_3)

{
  int iVar1;
  double dVar2;
  TAxisAlignedBox3<double> *pTVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  float local_res8 [2];
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *local_res10;
  float local_res18 [4];
  FTransformHierarchyQuery local_98;
  TArrayView<std::nullptr_t,int> local_88;
  code *local_78;
  TVector<double>_u_0 *local_70;
  TVector<double>_u_0 local_68;
  float *local_50;
  float *local_48;
  FBoneWeightsSettings *local_40;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> **local_38;
  
  local_res18[0] = param_2;
  local_res10 = GetOrCreateSkinWeightsAttribute(param_1,this->ProfileName);
  iVar1 = (param_1->VertexRefCounts).UsedCount;
  pTVar3 = FDynamicMesh3::GetBounds(param_1,(TAxisAlignedBox3<double> *)&local_68._s_0,true);
  dVar2 = (pTVar3->Max).field0_0x0._s_0.X - (pTVar3->Min).field0_0x0._s_0.X;
  dVar4 = (pTVar3->Max).field0_0x0._s_0.Y - (pTVar3->Min).field0_0x0._s_0.Y;
  dVar7 = (pTVar3->Max).field0_0x0._s_0.Z - (pTVar3->Min).field0_0x0._s_0.Z;
  auVar5._0_8_ = dVar4 * dVar4;
  auVar5._8_8_ = 0;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar2 * dVar2 + auVar5._0_8_ + dVar7 * dVar7;
  auVar6 = sqrtpd(auVar5,auVar6);
  local_res8[0] = (float)auVar6._0_8_;
  FTransformHierarchyQuery::FTransformHierarchyQuery(&local_98,&this->TransformHierarchy);
  local_68._s_0.Z = (double)&local_98;
  local_88.DataPtr = (void **)0x0;
  local_50 = local_res8;
  local_88.ArrayNum = 0;
  local_48 = local_res18;
  local_38 = &local_res10;
  local_78 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FSkinBindingOp::CreateSkinWeights_DirectDistance'::__l2::<lambda_1>,void,int>
             ::Call;
  local_70 = &local_68;
  local_68._s_0.X = (double)param_1;
  local_68._s_0.Y = (double)this;
  local_40 = param_3;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar1,1,(TFunctionRef<void___cdecl(int)> *)&local_78,
             local_res8[0]._0_1_,None,&local_88);
  DestructItems<UE::Geometry::FTransformHierarchyQuery::FBoneFan,int>
            ((FBoneFan *)local_98.BoneFans.AllocatorInstance.Data,local_98.BoneFans.ArrayNum);
  if ((FBoneFan *)local_98.BoneFans.AllocatorInstance.Data != (FBoneFan *)0x0) {
    FMemory::Free(local_98.BoneFans.AllocatorInstance.Data);
  }
  return;
}

// CreateSkinWeights_GeodesicVoxel @ 14c97b9d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FSkinBindingOp::CreateSkinWeights_GeodesicVoxel
          (FSkinBindingOp *this,FDynamicMesh3 *param_1,float param_2,FBoneWeightsSettings *param_3)

{
  double dVar1;
  TAxisAlignedBox3<double> *pTVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  int local_res8 [2];
  float local_res10 [2];
  float local_res18 [2];
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *local_res20;
  TArray<float,TSizedDefaultAllocator<32>_> local_108;
  FTransformHierarchyQuery local_f8;
  undefined1 local_e8 [12];
  uint uStack_dc;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  int local_c0;
  TVector<double>_u_0 local_b8;
  FBoneWeightsSettings *local_a0;
  FOccupancyGrid3 *local_98;
  int *local_90;
  FDynamicMesh3 *local_88;
  float *local_80;
  TArray<float,TSizedDefaultAllocator<32>_> *local_78;
  FOccupancyGrid3 local_68;
  
  local_res18[0] = param_2;
  local_res20 = GetOrCreateSkinWeightsAttribute(param_1,this->ProfileName);
  local_res8[0] = (param_1->VertexRefCounts).UsedCount;
  pTVar2 = FDynamicMesh3::GetBounds(param_1,(TAxisAlignedBox3<double> *)&local_b8._s_0,true);
  dVar1 = (pTVar2->Max).field0_0x0._s_0.Y - (pTVar2->Min).field0_0x0._s_0.Y;
  dVar3 = (pTVar2->Max).field0_0x0._s_0.X - (pTVar2->Min).field0_0x0._s_0.X;
  dVar6 = (pTVar2->Max).field0_0x0._s_0.Z - (pTVar2->Min).field0_0x0._s_0.Z;
  auVar4._0_8_ = dVar3 * dVar3;
  auVar4._8_8_ = 0;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar1 * dVar1 + auVar4._0_8_ + dVar6 * dVar6;
  auVar5 = sqrtpd(auVar4,auVar5);
  local_res10[0] = (float)auVar5._0_8_;
  FTransformHierarchyQuery::FTransformHierarchyQuery(&local_f8,&this->TransformHierarchy);
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 0;
  local_108.ArrayMax = 0;
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_108,local_res8[0] * (this->TransformHierarchy).ArrayNum,Default);
  FOccupancyGrid3::FOccupancyGrid3<UE::Geometry::FDynamicMesh3>
            (&local_68,param_1,this->VoxelResolution);
  local_c0 = local_68.Occupancy.Dimensions.field0_0x0._s_0.Z;
  local_b8._s_0.Y = (double)&local_f8;
  local_b8._s_0.Z = (double)&local_c8;
  local_a0 = (FBoneWeightsSettings *)local_res10;
  local_98 = &local_68;
  local_90 = local_res8;
  local_80 = local_res18;
  local_78 = &local_108;
  local_d8._0_8_ =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::FSkinBindingOp::CreateSkinWeights_GeodesicVoxel'::__l2::<lambda_1>,void,int>
       ::Call;
  local_d8._8_8_ = &local_b8;
  local_c8 = local_68.Occupancy.Dimensions.field0_0x0._0_8_;
  local_e8._0_8_ = (void **)0x0;
  stack0xffffffffffffff20 = (TVector<double>_u_0 *)((ulonglong)uStack_dc << 0x20);
  local_b8._s_0.X = (double)this;
  local_88 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->TransformHierarchy).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)local_d8,local_res8[0]._0_1_,None,
             (TArrayView<std::nullptr_t,int> *)local_e8);
  local_b8._s_0.Y = (double)&local_f8;
  local_b8._s_0.Z = (double)&local_108;
  local_98 = (FOccupancyGrid3 *)&local_res20;
  local_d8._0_8_ = (void **)0x0;
  local_e8._0_8_ =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::FSkinBindingOp::CreateSkinWeights_GeodesicVoxel'::__l2::<lambda_2>,void,int>
       ::Call;
  unique0x00008e00 = &local_b8;
  local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
  local_b8._s_0.X = (double)this;
  local_a0 = param_3;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",local_res8[0],1,(TFunctionRef<void___cdecl(int)> *)local_e8,
             local_res8[0]._0_1_,None,(TArrayView<std::nullptr_t,int> *)local_d8);
  if (local_68.Occupancy.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Occupancy.Buffer.AllocatorInstance.Data);
  }
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  DestructItems<UE::Geometry::FTransformHierarchyQuery::FBoneFan,int>
            ((FBoneFan *)local_f8.BoneFans.AllocatorInstance.Data,local_f8.BoneFans.ArrayNum);
  if ((FBoneFan *)local_f8.BoneFans.AllocatorInstance.Data != (FBoneFan *)0x0) {
    FMemory::Free(local_f8.BoneFans.AllocatorInstance.Data);
  }
  return;
}

// GetOrCreateSkinWeightsAttribute @ 14c97fc20

TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> * __cdecl
UE::Geometry::FSkinBindingOp::GetOrCreateSkinWeightsAttribute(FDynamicMesh3 *param_1,FName param_2)

{
  TDynamicVector<UE::AnimationCore::FBoneWeights,512> *this;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar5;
  TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *pTVar6;
  FDynamicMeshAttributeSet *pFVar7;
  undefined1 *puVar8;
  FDynamicMeshAttributeSet *this_00;
  FDynamicMeshAttributeSet *pFVar9;
  FBoneWeights local_48;
  
  this_00 = (FDynamicMeshAttributeSet *)0x0;
  pFVar9 = (param_1->AttributeSet).Ptr;
  pFVar7 = this_00;
  if (pFVar9 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar7 = pFVar9;
  }
  uVar3 = ::GetTypeHash(param_2.ComparisonIndex.Value);
  if (*(int *)&(pFVar7->SkinWeightAttributes).field_0x8 !=
      *(int *)&(pFVar7->SkinWeightAttributes).field_0x34) {
    puVar8 = *(undefined1 **)&(pFVar7->SkinWeightAttributes).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(pFVar7->SkinWeightAttributes).field_0x38;
    }
    iVar4 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(pFVar7->SkinWeightAttributes).field_0x48 - 1U &
                              param_2.Number + uVar3) * 4);
    if (iVar4 != -1) {
      do {
        if (*(FName *)(*(longlong *)&pFVar7->SkinWeightAttributes + (longlong)iVar4 * 0x18) ==
            param_2) {
          pTVar5 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                           *)&pFVar7->SkinWeightAttributes,param_2);
          if ((pTVar5 == (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>_>_>_>
                          *)0x0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x27b,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            pTVar6 = (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)(*pcVar1)();
            return pTVar6;
          }
          if (*(TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> **)
               &pTVar5->field_0x8 !=
              (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)0x0) {
            return *(TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> **)
                    &pTVar5->field_0x8;
          }
          break;
        }
        iVar4 = *(int *)(*(longlong *)&pFVar7->SkinWeightAttributes + 0x10 + (longlong)iVar4 * 0x18)
        ;
      } while (iVar4 != -1);
    }
  }
  pFVar7 = ::operator_new(0x30);
  pFVar9 = this_00;
  if (pFVar7 != (FDynamicMeshAttributeSet *)0x0) {
    this = (TDynamicVector<UE::AnimationCore::FBoneWeights,512> *)&pFVar7->ParentMesh;
    pFVar7->_padding_ = 0;
    pFVar7->_padding_ = (longlong)param_1;
    pFVar7->_padding_ =
         (longlong)
         &___7__TDynamicVertexSkinWeightsAttribute_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
    this->CurBlock = 0;
    this->CurBlockUsed = 0;
    (((TArray<UE::Geometry::TDynamicVector<UE::AnimationCore::FBoneWeights,512>::TBlock_*,TSizedDefaultAllocator<32>_>
       *)&pFVar7->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pFVar7->UVLayers).Array.ArrayNum = 0;
    (pFVar7->UVLayers).Array.ArrayMax = 0;
    TDynamicVector<UE::AnimationCore::FBoneWeights,512>::AddAllocatedBlock(this);
    local_48.BoneWeights.AllocatorInstance.InlineData[0] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[1] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[2] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[3] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[4] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[5] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[6] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[7] = '\0';
    local_48.BoneWeights.ArrayNum = 0;
    local_48.BoneWeights.ArrayMax = 0xc;
    local_48.BoneWeights.AllocatorInstance.InlineData[8] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[9] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[10] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0xb] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0xc] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0xd] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0xe] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0xf] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x10] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x11] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x12] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x13] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x14] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x15] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x16] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x17] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x18] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x19] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x1a] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x1b] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x1c] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x1d] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x1e] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x1f] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x20] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x21] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x22] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x23] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x24] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x25] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x26] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x27] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x28] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x29] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x2a] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x2b] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x2c] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x2d] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x2e] = '\0';
    local_48.BoneWeights.AllocatorInstance.InlineData[0x2f] = '\0';
    local_48.BoneWeights.AllocatorInstance.SecondaryData =
         (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
    TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3>::Initialize
              ((TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar7,&local_48);
    pFVar9 = pFVar7;
  }
  pFVar7 = (param_1->AttributeSet).Ptr;
  if (pFVar7 != (FDynamicMeshAttributeSet *)0x0) {
    this_00 = pFVar7;
  }
  FDynamicMeshAttributeSet::AttachSkinWeightsAttribute
            (this_00,param_2,
             (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar9);
  return (TDynamicVertexSkinWeightsAttribute<UE::Geometry::FDynamicMesh3> *)pFVar9;
}

// SetTransformHierarchyFromReferenceSkeleton @ 14c985b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FSkinBindingOp::SetTransformHierarchyFromReferenceSkeleton
          (FSkinBindingOp *this,FReferenceSkeleton *param_1)

{
  int *piVar1;
  TArray<TTuple<UE::Math::TTransform<double>,FMeshBoneInfo>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStackY_118 [32];
  longlong local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  uVar11 = (param_1->RawRefBoneInfo).ArrayNum;
  pTVar2 = &this->TransformHierarchy;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &(this->TransformHierarchy).ArrayMax;
  (this->TransformHierarchy).ArrayNum = 0;
  if ((this->TransformHierarchy).ArrayMax < (int)uVar11) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,0x10,uVar11,&pTVar2->AllocatorInstance,0,piVar1);
  }
  iVar9 = (param_1->RawRefBoneInfo).ArrayNum;
  uVar11 = 0;
  if (0 < iVar9) {
    lVar12 = 0;
    local_c8 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar11 < iVar9) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar3 = (param_1->RawRefBoneInfo).AllocatorInstance.Data;
      uVar8 = 0;
      if ((int)uVar11 < (param_1->RawRefBonePose).ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (param_1->RawRefBonePose).AllocatorInstance.Data;
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      local_b8 = *(undefined8 *)(pFVar4 + local_c8);
      uStack_b0 = *(undefined8 *)(pFVar4 + local_c8 + 8);
      local_a8 = *(undefined8 *)(pFVar4 + local_c8 + 0x10);
      uStack_a0 = *(undefined8 *)(pFVar4 + local_c8 + 0x10 + 8);
      local_98 = *(undefined8 *)(pFVar4 + local_c8 + 0x20);
      uStack_90 = *(undefined8 *)(pFVar4 + local_c8 + 0x20 + 8);
      local_88 = *(undefined8 *)(pFVar4 + local_c8 + 0x30);
      uStack_80 = *(undefined8 *)(pFVar4 + local_c8 + 0x30 + 8);
      local_78 = *(undefined8 *)(pFVar4 + local_c8 + 0x40);
      uStack_70 = *(undefined8 *)(pFVar4 + local_c8 + 0x40 + 8);
      local_68 = *(undefined8 *)(pFVar4 + local_c8 + 0x50);
      uStack_60 = *(undefined8 *)(pFVar4 + local_c8 + 0x50 + 8);
      local_58 = *(undefined8 *)(pFVar3 + lVar12);
      uStack_50 = *(undefined4 *)(pFVar3 + lVar12 + 8);
      if (((pFVar5 <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 < pFVar5 + (longlong)*piVar1 * 0x70)) &&
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
      iVar9 = (this->TransformHierarchy).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1070,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->TransformHierarchy).ArrayNum = iVar9 + 1;
      local_c8 = local_c8 + 0x60;
      uVar11 = uVar11 + 1;
      lVar10 = (longlong)iVar9 * 0x70;
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      lVar12 = lVar12 + 0xc;
      *(undefined8 *)(pFVar3 + lVar10) = local_b8;
      *(undefined8 *)(pFVar3 + lVar10 + 8) = uStack_b0;
      *(undefined8 *)(pFVar3 + lVar10 + 0x10) = local_a8;
      *(undefined8 *)(pFVar3 + lVar10 + 0x10 + 8) = uStack_a0;
      *(undefined8 *)(pFVar3 + lVar10 + 0x20) = local_98;
      *(undefined8 *)(pFVar3 + lVar10 + 0x20 + 8) = uStack_90;
      *(undefined8 *)(pFVar3 + lVar10 + 0x30) = local_88;
      *(undefined8 *)(pFVar3 + lVar10 + 0x30 + 8) = uStack_80;
      *(undefined8 *)(pFVar3 + lVar10 + 0x40) = local_78;
      *(undefined8 *)(pFVar3 + lVar10 + 0x40 + 8) = uStack_70;
      *(undefined8 *)(pFVar3 + lVar10 + 0x50) = local_68;
      *(undefined8 *)(pFVar3 + lVar10 + 0x50 + 8) = uStack_60;
      *(undefined8 *)(pFVar3 + lVar10 + 0x60) = local_58;
      *(ulonglong *)(pFVar3 + lVar10 + 0x60 + 8) = CONCAT44(uStack_4c,uStack_50);
      iVar9 = (param_1->RawRefBoneInfo).ArrayNum;
    } while ((int)uVar11 < iVar9);
  }
  return;
}

