// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 9

// StaticStruct @ 1463e5660

UScriptStruct * __cdecl FAnimNode_MultiWayBlend::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_MultiWayBlend.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_MultiWayBlend.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend,(UObject *)pUVar1,
                         L"AnimNode_MultiWayBlend");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_MultiWayBlend.OuterSingleton;
}

// CacheBones_AnyThread @ 146419990

void __thiscall
FAnimNode_MultiWayBlend::CacheBones_AnyThread
          (FAnimNode_MultiWayBlend *this,FAnimationCacheBonesContext *param_1)

{
  int iVar1;
  FPoseLinkBase *this_00;
  FPoseLinkBase *pFVar2;
  undefined1 local_res8 [8];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_MultiWayBlend::CacheBones_AnyThread");
  iVar1 = (this->Poses).ArrayNum;
  this_00 = (FPoseLinkBase *)(this->Poses).AllocatorInstance.Data;
  pFVar2 = this_00 + iVar1;
  while( true ) {
    if ((this->Poses).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPoseLink,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_00 == pFVar2) break;
    FPoseLinkBase::CacheBones(this_00,param_1);
    this_00 = this_00 + 1;
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// Evaluate_AnyThread @ 14643adf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAnimNode_MultiWayBlend::Evaluate_AnyThread(FAnimNode_MultiWayBlend *this,FPoseContext *param_1)

{
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> **ppTVar1;
  FTlsAutoCleanup this_00;
  FCompactPose *pFVar2;
  code *pcVar3;
  float fVar4;
  FPoseContext *pFVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  FTlsAutoCleanup *pFVar11;
  FTlsAutoCleanup FVar12;
  FTlsAutoCleanup FVar13;
  FTlsAutoCleanup FVar14;
  uint uVar15;
  undefined8 *puVar16;
  TArray<int,TSizedDefaultAllocator<32>_> **ppTVar17;
  TArray<int,TSizedDefaultAllocator<32>_> **ppTVar18;
  uint uVar19;
  FStackAttributeContainer *pFVar20;
  longlong lVar21;
  FBlendedCurve *pFVar22;
  undefined1 local_res8 [8];
  FPoseContext *local_res10;
  int local_res18;
  uint local_res20;
  float local_1d8 [2];
  FTlsAutoCleanup local_1d0;
  FTlsAutoCleanup local_1c8;
  undefined1 local_1b8 [88];
  TArray<int,TSizedDefaultAllocator<32>_> *pTStack_160;
  undefined8 local_158;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_150;
  undefined8 local_148;
  TArray<int,TSizedDefaultAllocator<32>_> *local_140;
  undefined8 local_138;
  TArray<int,TSizedDefaultAllocator<32>_> *local_130;
  undefined8 local_128;
  bool local_120;
  longlong local_118;
  FTlsAutoCleanup local_110;
  code *local_108;
  undefined1 *local_100;
  float *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FStackAttributeContainer *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  FBlendedCurve *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FCompactPose *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TArrayView<float_const_,int> local_b8;
  TArrayView<UE::Anim::FStackAttributeContainer_const_,int> local_a8;
  TArrayView<FBlendedCurve_const_,int> local_98;
  TArrayView<FCompactPose_const_,int> local_88;
  FAnimationPoseData local_78 [2];
  
  local_res10 = param_1;
  FStatsHierarchical::BeginMeasurement("FAnimNode_MultiWayBlend::Evaluate_AnyThread");
  local_100 = local_res8;
  local_108 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FMultiBlendData>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar11 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_108,
                       &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FMultiBlendData>::GetTlsSlot(void)'
                        ::__l2::TlsSlot);
  fVar4 = __real_3727c5ac;
  uVar19 = 0;
  local_res18 = 0;
  FVar14 = (FTlsAutoCleanup)(pFVar11 + 2);
  FVar13 = (FTlsAutoCleanup)(pFVar11 + 0x22);
  local_1c8 = (FTlsAutoCleanup)(pFVar11 + 0x44);
  this_00 = (FTlsAutoCleanup)(pFVar11 + 0x1c);
  local_res20 = *(uint *)(pFVar11 + 0x1b);
  iVar9 = (this->Poses).ArrayNum;
  local_1d0 = FVar13;
  local_110 = FVar14;
  if (iVar9 == (this->CachedAlphas).ArrayNum) {
    if (0 < iVar9) {
      local_118 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar19 < (this->CachedAlphas).ArrayNum) {
          uVar7 = ~uVar19 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_1d8[0] = *(float *)((this->CachedAlphas).AllocatorInstance.Data + local_118);
        uVar7 = 0;
        iVar9 = local_res18;
        if (fVar4 < local_1d8[0]) {
          FAnimationBaseContext::FAnimationBaseContext
                    ((FAnimationBaseContext *)local_1b8,(FAnimInstanceProxy *)local_res10->_padding_
                     ,(FAnimationUpdateSharedContext *)0x0);
          local_1b8._32_8_ = 0;
          local_1b8._40_8_ = 0;
          local_1b8._48_8_ = 0;
          local_1b8._56_8_ = 0;
          local_120 = local_res10->bExpectsAdditivePose != false;
          local_1b8._64_8_ = 0;
          local_1b8[0x48] = 0;
          local_1b8._80_8_ = 0;
          pTStack_160 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
          local_158 = 0;
          local_150 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
          local_148 = 0;
          local_140 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
          local_138 = 0;
          local_130 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
          local_128 = 0;
          FPoseContext::InitializeImpl
                    ((FPoseContext *)local_1b8,(FAnimInstanceProxy *)local_res10->_padding_);
          local_1b8._20_4_ = *(int *)((longlong)&local_res10->_padding_ + 4);
          local_1b8._24_4_ = (undefined4)local_res10->_padding_;
          uVar8 = uVar7;
          if ((int)uVar19 < (this->Poses).ArrayNum) {
            uVar8 = ~uVar19 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FPoseLink::Evaluate((FPoseLink *)
                              ((this->Poses).AllocatorInstance.Data + (longlong)(int)uVar19 * 0x10),
                              (FPoseContext *)local_1b8);
          iVar9 = *(int *)(pFVar11 + 0x1b);
          if (iVar9 == *(int *)&pFVar11[0x1b].field_0x4) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FCompactPose>_>
                              (0x818,(ForElementType<FCompactPose> *)FVar14,
                               (int *)&pFVar11[0x1b].field_0x4);
          }
          *(int *)(pFVar11 + 0x1b) = iVar9 + 1;
          FVar12 = FVar14;
          if (pFVar11[0x1a] != (FTlsAutoCleanup)0x0) {
            FVar12 = pFVar11[0x1a];
          }
          puVar16 = (undefined8 *)((longlong)FVar12 + (longlong)iVar9 * 0x18);
          DefaultConstructItems<FCompactPose,int>(puVar16,1);
          if (puVar16 != (undefined8 *)(local_1b8 + 0x20)) {
            *puVar16 = local_1b8._32_8_;
            local_1b8._32_8_ = 0;
            *(undefined4 *)(puVar16 + 1) = local_1b8._40_4_;
            *(undefined4 *)((longlong)puVar16 + 0xc) = local_1b8._44_4_;
            local_1b8._40_8_ = 0;
            puVar16[2] = local_1b8._48_8_;
            local_1b8._48_8_ = 0;
          }
          iVar9 = *(int *)((longlong)FVar13 + 0x108);
          if (iVar9 == *(int *)((longlong)FVar13 + 0x10c)) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FBlendedCurve>_>
                              (0x820,(ForElementType<FBlendedCurve> *)FVar13,
                               (int *)((longlong)FVar13 + 0x10c));
          }
          *(int *)((longlong)FVar13 + 0x108) = iVar9 + 1;
          if (*(FTlsAutoCleanup *)((longlong)FVar13 + 0x100) != (FTlsAutoCleanup)0x0) {
            FVar13 = *(FTlsAutoCleanup *)((longlong)FVar13 + 0x100);
          }
          puVar16 = (undefined8 *)((longlong)iVar9 * 0x20 + (longlong)FVar13);
          DefaultConstructItems<FBlendedCurve,int>(puVar16,1);
          FVar13 = local_1c8;
          if (puVar16 != (undefined8 *)(local_1b8 + 0x38)) {
            *puVar16 = local_1b8._56_8_;
            local_1b8._56_8_ = 0;
            *(undefined4 *)(puVar16 + 1) = local_1b8._64_4_;
            *(undefined4 *)((longlong)puVar16 + 0xc) = local_1b8._68_4_;
            local_1b8._64_8_ = 0;
          }
          *(undefined1 *)(puVar16 + 2) = local_1b8[0x48];
          local_1b8[0x48] = 0;
          iVar9 = *(int *)((longlong)local_1c8 + 0x208);
          if (iVar9 == *(int *)((longlong)local_1c8 + 0x20c)) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Anim::FStackAttributeContainer>_>
                              (0x840,(ForElementType<UE::Anim::FStackAttributeContainer> *)local_1c8
                               ,(int *)((longlong)local_1c8 + 0x20c));
          }
          *(int *)((longlong)FVar13 + 0x208) = iVar9 + 1;
          if (*(FTlsAutoCleanup *)((longlong)FVar13 + 0x200) != (FTlsAutoCleanup)0x0) {
            FVar13 = *(FTlsAutoCleanup *)((longlong)FVar13 + 0x200);
          }
          ppTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> **)
                     ((longlong)iVar9 * 0x40 + (longlong)FVar13);
          DefaultConstructItems<UE::Anim::FStackAttributeContainer,int>(ppTVar17,1);
          ppTVar1 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> **)(ppTVar17 + 2);
          if (ppTVar1 != &local_150) {
            DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
                      (*ppTVar1,*(int *)(ppTVar17 + 3));
            if (*ppTVar1 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
              FMemory::Free(*ppTVar1);
            }
            *ppTVar1 = local_150;
            local_150 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
            *(int *)(ppTVar17 + 3) = (int)local_148;
            *(undefined4 *)((longlong)ppTVar17 + 0x1c) = local_148._4_4_;
            local_148 = 0;
          }
          if (ppTVar17 != &pTStack_160) {
            DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                      (*ppTVar17,*(int *)(ppTVar17 + 1));
            if (*ppTVar17 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
              FMemory::Free(*ppTVar17);
            }
            *ppTVar17 = pTStack_160;
            pTStack_160 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
            *(int *)(ppTVar17 + 1) = (int)local_158;
            *(undefined4 *)((longlong)ppTVar17 + 0xc) = local_158._4_4_;
            local_158 = 0;
          }
          ppTVar18 = ppTVar17 + 4;
          if (ppTVar18 != &local_140) {
            DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
                      ((TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                        *)*ppTVar18,*(int *)(ppTVar17 + 5));
            if (*ppTVar18 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
              FMemory::Free(*ppTVar18);
            }
            *ppTVar18 = local_140;
            local_140 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
            *(int *)(ppTVar17 + 5) = (int)local_138;
            *(undefined4 *)((longlong)ppTVar17 + 0x2c) = local_138._4_4_;
            local_138 = 0;
          }
          ppTVar18 = ppTVar17 + 6;
          if (ppTVar18 != &local_130) {
            if (*ppTVar18 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
              FMemory::Free(*ppTVar18);
            }
            *ppTVar18 = local_130;
            local_130 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
            *(undefined4 *)(ppTVar17 + 7) = (undefined4)local_128;
            *(undefined4 *)((longlong)ppTVar17 + 0x3c) = local_128._4_4_;
            local_128 = 0;
          }
          FVar13 = pFVar11[0x20];
          FVar12 = this_00;
          if (FVar13 != (FTlsAutoCleanup)0x0) {
            FVar12 = FVar13;
          }
          if ((ulonglong)FVar12 <= local_1d8) {
            FVar12 = this_00;
            if (FVar13 != (FTlsAutoCleanup)0x0) {
              FVar12 = FVar13;
            }
            if ((local_1d8 <
                 (float *)((longlong)FVar12 + (longlong)*(int *)&pFVar11[0x21].field_0x4 * 4)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          iVar10 = *(int *)(pFVar11 + 0x21);
          if (iVar10 == *(int *)&pFVar11[0x21].field_0x4) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
                               (0x404,(ForElementType<float> *)this_00,
                                (int *)&pFVar11[0x21].field_0x4);
          }
          *(int *)(pFVar11 + 0x21) = iVar10 + 1;
          FVar13 = this_00;
          if (pFVar11[0x20] != (FTlsAutoCleanup)0x0) {
            FVar13 = pFVar11[0x20];
          }
          iVar9 = local_res18 + 1;
          *(float *)((longlong)FVar13 + (longlong)iVar10 * 4) = local_1d8[0];
          local_res18 = iVar9;
          if (local_130 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
            FMemory::Free(local_130);
          }
          DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
                    ((TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                      *)local_140,(int)local_138);
          if (local_140 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
            FMemory::Free(local_140);
          }
          DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
                    (local_150,(int)local_148);
          if (local_150 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
            FMemory::Free(local_150);
          }
          DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTStack_160,(int)local_158);
          FVar13 = local_1d0;
          if (pTStack_160 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
            FMemory::Free(pTStack_160);
            FVar13 = local_1d0;
          }
        }
        uVar8 = local_res20;
        local_118 = local_118 + 4;
        uVar19 = uVar19 + 1;
      } while ((int)uVar19 < (this->Poses).ArrayNum);
      param_1 = local_res10;
      if (0 < iVar9) {
        lVar21 = (longlong)(int)local_res20;
        uVar15 = ~local_res20 >> 0x1f;
        uVar19 = uVar7;
        if ((int)local_res20 < *(int *)(pFVar11 + 0x1b)) {
          uVar19 = uVar15;
        }
        if ((uVar19 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar13 = local_1d0;
        FVar12 = pFVar11[0x1a];
        if (pFVar11[0x1a] == (FTlsAutoCleanup)0x0) {
          FVar12 = FVar14;
        }
        pFVar2 = (FCompactPose *)((longlong)FVar12 + lVar21 * 0x18);
        uVar19 = uVar7;
        if ((int)uVar8 < *(int *)((longlong)local_1d0 + 0x108)) {
          uVar19 = uVar15;
        }
        if ((uVar19 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar14 = *(FTlsAutoCleanup *)((longlong)FVar13 + 0x100);
        if (FVar14 == (FTlsAutoCleanup)0x0) {
          FVar14 = FVar13;
        }
        pFVar22 = (FBlendedCurve *)((longlong)FVar14 + lVar21 * 0x20);
        uVar19 = uVar7;
        if ((int)local_res20 < *(int *)((longlong)local_1c8 + 0x208)) {
          uVar19 = uVar15;
        }
        if ((uVar19 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar14 = *(FTlsAutoCleanup *)((longlong)local_1c8 + 0x200);
        if (*(FTlsAutoCleanup *)((longlong)local_1c8 + 0x200) == (FTlsAutoCleanup)0x0) {
          FVar14 = local_1c8;
        }
        pFVar20 = (FStackAttributeContainer *)((longlong)FVar14 + lVar21 * 0x40);
        if ((int)local_res20 < *(int *)(pFVar11 + 0x21)) {
          uVar7 = uVar15;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar5 = local_res10;
        FVar14 = pFVar11[0x20];
        FAnimationPoseData::FAnimationPoseData(local_78,local_res10);
        if (FVar14 == (FTlsAutoCleanup)0x0) {
          FVar14 = this_00;
        }
        local_f8 = (float *)((longlong)FVar14 + lVar21 * 4);
        iStack_f0 = local_res18;
        local_b8._12_4_ = uStack_ec;
        local_b8.ArrayNum = local_res18;
        iStack_e0 = local_res18;
        local_a8._12_4_ = uStack_dc;
        local_a8.ArrayNum = local_res18;
        iStack_d0 = local_res18;
        iStack_c0 = local_res18;
        local_98._12_4_ = uStack_cc;
        local_98.ArrayNum = local_res18;
        local_88._12_4_ = uStack_bc;
        local_88.ArrayNum = local_res18;
        local_e8 = pFVar20;
        local_d8 = pFVar22;
        local_c8 = pFVar2;
        local_b8.DataPtr = local_f8;
        local_a8.DataPtr = pFVar20;
        local_98.DataPtr = pFVar22;
        local_88.DataPtr = pFVar2;
        FAnimationRuntime::BlendPosesTogether(&local_88,&local_98,&local_a8,&local_b8,local_78);
        FCompactPose::NormalizeRotations(&pFVar5->Pose);
        uVar19 = local_res20;
        TArray<FCompactPose,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::SetNum
                  ((TArray<FCompactPose,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
                   local_110,local_res20,No);
        TArray<FBlendedCurve,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::SetNum
                  ((TArray<FBlendedCurve,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *
                   )local_1d0,uVar19,No);
        TArray<float,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::SetNum
                  ((TArray<float,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)this_00
                   ,uVar19,No);
        TArray<UE::Anim::FStackAttributeContainer,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
        ::SetNum((TArray<UE::Anim::FStackAttributeContainer,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                  *)local_1c8,uVar19,No);
        goto LAB_14643b665;
      }
    }
  }
  else {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1521608760085184385>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimNodes\\AnimNode_MultiWayBlend.cpp"
                       ,0x7f,"Poses.Num() == CachedAlphas.Num()");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->bAdditiveNode == false) && (param_1->bExpectsAdditivePose == false)) {
    FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
              ((FBaseCompactPose<TMemStackAllocator<0>_> *)&param_1->Pose,
               *(FBoneContainer **)&(param_1->Pose).field_0x10);
  }
  else {
    FCompactPose::ResetToAdditiveIdentity(&param_1->Pose);
  }
LAB_14643b665:
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 146444b90

void __thiscall
FAnimNode_MultiWayBlend::GatherDebugData(FAnimNode_MultiWayBlend *this,FNodeDebugData *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  uint uVar4;
  UPackage *pUVar5;
  FNodeDebugData *pFVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  FName local_res8;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_MultiWayBlend::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_MultiWayBlend.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_MultiWayBlend.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend,(UObject *)pUVar5,
                         L"AnimNode_MultiWayBlend");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_MultiWayBlend.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_68);
  ::FString::PrintfImpl(local_48,L"%s<W:%.1f%%> %s");
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  _Src.Data = local_48[0].Data.AllocatorInstance.Data;
  uVar8 = 0;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_48[0].Data.ArrayNum == 0) {
    local_78.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48[0].Data.ArrayNum,0,(ForAnyElementType *)&local_78,
               local_48[0].Data.ArrayNum,&local_78.Data.ArrayMax);
    memcpy(local_78.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48[0].Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_78,false);
  uVar9 = uVar8;
  if (0 < (this->Poses).ArrayNum) {
    do {
      uVar7 = (uint)uVar8;
      uVar4 = 0;
      if ((int)uVar7 < (this->Poses).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
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
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar1 = (this->Poses).AllocatorInstance.Data;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      uVar4 = 0;
      if ((int)uVar7 < (this->CachedAlphas).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
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
      pFVar6 = FNodeDebugData::BranchFlow
                         (param_1,*(float *)((this->CachedAlphas).AllocatorInstance.Data + uVar9),
                          &local_58);
      FPoseLinkBase::GatherDebugData((FPoseLinkBase *)(pFVar1 + (longlong)(int)uVar7 * 0x10),pFVar6)
      ;
      uVar8 = (ulonglong)(uVar7 + 1);
      uVar9 = uVar9 + 4;
    } while ((int)(uVar7 + 1) < (this->Poses).ArrayNum);
  }
  if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GetTotalAlpha @ 14644fec0

float __thiscall FAnimNode_MultiWayBlend::GetTotalAlpha(FAnimNode_MultiWayBlend *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->DesiredAlphas).AllocatorInstance.Data;
  iVar2 = (this->DesiredAlphas).ArrayNum;
  fVar4 = 0.0;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if ((this->DesiredAlphas).ArrayNum != iVar2) {
      `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    fVar4 = fVar4 + *(float *)pFVar3;
    pFVar3 = pFVar3 + 4;
  }
  return fVar4;
}

// Initialize_AnyThread @ 146459c40

void __thiscall
FAnimNode_MultiWayBlend::Initialize_AnyThread
          (FAnimNode_MultiWayBlend *this,FAnimationInitializeContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FPoseLinkBase *this_00;
  FPoseLinkBase *pFVar4;
  undefined1 local_res8 [8];
  float local_res18 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_MultiWayBlend::Initialize_AnyThread");
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  if ((this->Poses).ArrayNum != (this->DesiredAlphas).ArrayNum) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1521608760085184485>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimNodes\\AnimNode_MultiWayBlend.cpp"
                       ,0x1b,"Poses.Num() == DesiredAlphas.Num()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_res18[0] = 0.0;
    TArray<float,TSizedDefaultAllocator<32>_>::Init
              (&this->DesiredAlphas,local_res18,(this->Poses).ArrayNum);
  }
  UpdateCachedAlphas(this);
  iVar1 = (this->Poses).ArrayNum;
  this_00 = (FPoseLinkBase *)(this->Poses).AllocatorInstance.Data;
  pFVar4 = this_00 + iVar1;
  while( true ) {
    if ((this->Poses).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPoseLink,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_00 == pFVar4) break;
    FPoseLinkBase::Initialize(this_00,param_1);
    this_00 = this_00 + 1;
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// ResetPoses @ 146464670

void __thiscall FAnimNode_MultiWayBlend::ResetPoses(FAnimNode_MultiWayBlend *this)

{
  (this->Poses).ArrayNum = 0;
  if ((this->Poses).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->Poses).AllocatorInstance,0,&(this->Poses).ArrayMax);
  }
  (this->CachedAlphas).ArrayNum = 0;
  if ((this->CachedAlphas).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->CachedAlphas).AllocatorInstance,0,&(this->CachedAlphas).ArrayMax);
  }
  (this->DesiredAlphas).ArrayNum = 0;
  if ((this->DesiredAlphas).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->DesiredAlphas).AllocatorInstance,0,&(this->DesiredAlphas).ArrayMax);
  }
  return;
}

// UpdateCachedAlphas @ 146471f40

void __thiscall FAnimNode_MultiWayBlend::UpdateCachedAlphas(FAnimNode_MultiWayBlend *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float local_res8 [2];
  
  fVar7 = GetTotalAlpha(this);
  iVar1 = (this->DesiredAlphas).ArrayNum;
  if (iVar1 < 1) {
    (this->CachedAlphas).ArrayNum = 0;
    if ((this->CachedAlphas).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->CachedAlphas).AllocatorInstance,0,&(this->CachedAlphas).ArrayMax);
    }
  }
  else if (iVar1 == (this->CachedAlphas).ArrayNum) {
    memset((this->CachedAlphas).AllocatorInstance.Data,0,
           (longlong)(this->CachedAlphas).ArrayMax << 2);
  }
  else {
    local_res8[0] = 0.0;
    TArray<float,TSizedDefaultAllocator<32>_>::Init(&this->CachedAlphas,local_res8,iVar1);
  }
  fVar8 = FInputScaleBias::ApplyTo(&this->AlphaScaleBias,fVar7);
  if (__real_3727c5ac < fVar8) {
    iVar1 = (this->DesiredAlphas).ArrayNum;
    uVar6 = 0;
    if (this->bNormalizeAlpha == false) {
      if (0 < iVar1) {
        lVar5 = 0;
        do {
          uVar4 = 0;
          if ((int)uVar6 < (this->DesiredAlphas).ArrayNum) {
            uVar4 = ~uVar6 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          fVar7 = FInputScaleBias::ApplyTo
                            (&this->AlphaScaleBias,
                             *(float *)((this->DesiredAlphas).AllocatorInstance.Data + lVar5 * 4));
          uVar4 = 0;
          if ((int)uVar6 < (this->CachedAlphas).ArrayNum) {
            uVar4 = ~uVar6 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar6 = uVar6 + 1;
          *(float *)((this->CachedAlphas).AllocatorInstance.Data + lVar5 * 4) = fVar7;
          lVar5 = lVar5 + 1;
        } while ((int)uVar6 < (this->DesiredAlphas).ArrayNum);
      }
    }
    else if (0 < iVar1) {
      lVar5 = 0;
      fVar7 = __real_3f800000 / fVar7;
      do {
        uVar4 = 0;
        if ((int)uVar6 < (this->DesiredAlphas).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
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
        fVar8 = FInputScaleBias::ApplyTo
                          (&this->AlphaScaleBias,
                           fVar7 * *(float *)((this->DesiredAlphas).AllocatorInstance.Data +
                                             lVar5 * 4));
        uVar4 = 0;
        if ((int)uVar6 < (this->CachedAlphas).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
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
        uVar6 = uVar6 + 1;
        *(float *)((this->CachedAlphas).AllocatorInstance.Data + lVar5 * 4) = fVar8;
        lVar5 = lVar5 + 1;
      } while ((int)uVar6 < (this->DesiredAlphas).ArrayNum);
    }
  }
  if (((this->Poses).ArrayNum != (this->CachedAlphas).ArrayNum) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1521608760085184421>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimNodes\\AnimNode_MultiWayBlend.cpp"
                         ,0x5b,"Poses.Num() == CachedAlphas.Num()"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// Update_AnyThread @ 1464782f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_MultiWayBlend::Update_AnyThread
          (FAnimNode_MultiWayBlend *this,FAnimationUpdateContext *param_1)

{
  int *piVar1;
  float fVar2;
  code *pcVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_MultiWayBlend::Update_AnyThread(FAnimationUpdateContext_const_&)_::_2_::FStat_STAT_FAnimationNode_MultiWayBlend_Update>
  FVar12;
  FExposedValueHandler *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FNameEntryId FVar13;
  FName FVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  FColor_u_0 local_res8 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FStatMessage local_98;
  FAnimationUpdateContext local_88;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_MultiWayBlend::Update_AnyThread");
  uVar16 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FAnimationNode_MultiWayBlend_Update ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_MultiWayBlend::Update_AnyThread(FAnimationUpdateContext_const_&)_::_2_::FStat_STAT_FAnimationNode_MultiWayBlend_Update>
         )0x0) {
      pFVar11 = ::FName::FName(&local_b8,"STAT_FAnimationNode_MultiWayBlend_Update");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAnimationNode_MultiWayBlend_Update,
                 *pFVar11,L"STAT_FAnimationNode_MultiWayBlend_Update","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar12 = StatPtr_STAT_FAnimationNode_MultiWayBlend_Update;
  if (StatPtr_STAT_FAnimationNode_MultiWayBlend_Update ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_MultiWayBlend::Update_AnyThread(FAnimationUpdateContext_const_&)_::_2_::FStat_STAT_FAnimationNode_MultiWayBlend_Update>
       )0x0) {
    pFVar11 = ::FName::FName(&local_b0,"STAT_FAnimationNode_MultiWayBlend_Update");
    FVar12 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FAnimNode_MultiWayBlend::Update_AnyThread(FAnimationUpdateContext_const_&)_::_2_::FStat_STAT_FAnimationNode_MultiWayBlend_Update>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FAnimationNode_MultiWayBlend_Update,*pFVar11,
                          L"STAT_FAnimationNode_MultiWayBlend_Update","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar12;
  bVar5 = false;
  bVar7 = false;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar10 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar13.Value;
        local_res18.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimNodes\\AnimNode_MultiWayBlend.cpp"
                   ,0x61);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar13.Value;
      local_res20.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar6 = true;
      goto LAB_146478488;
    }
  }
  bVar6 = false;
  FVar14 = local_a8;
LAB_146478488:
  this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
  UpdateCachedAlphas(this);
  fVar8 = __real_3727c5ac;
  uVar17 = uVar16;
  if (0 < (this->Poses).ArrayNum) {
    do {
      uVar15 = (uint)uVar16;
      uVar10 = 0;
      if ((int)uVar15 < (this->CachedAlphas).ArrayNum) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar2 = *(float *)((this->CachedAlphas).AllocatorInstance.Data + uVar17);
      if (fVar8 < fVar2) {
        uVar10 = 0;
        if ((int)uVar15 < (this->Poses).ArrayNum) {
          uVar10 = ~uVar15 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_88._padding_ = param_1->_padding_;
        local_88._padding_ = param_1->_padding_;
        local_88._padding_ = param_1->_padding_;
        local_88._padding_ = param_1->_padding_;
        uVar4 = param_1->RootMotionWeightModifier;
        local_88.DeltaTime = param_1->DeltaTime;
        local_88._44_4_ = *(undefined4 *)&param_1->field_0x2c;
        local_88.RootMotionWeightModifier = (float)uVar4;
        local_88.CurrentWeight = fVar2 * param_1->CurrentWeight;
        FPoseLinkBase::Update
                  ((FPoseLinkBase *)
                   ((this->Poses).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x10),&local_88);
      }
      uVar16 = (ulonglong)(uVar15 + 1);
      uVar17 = uVar17 + 4;
    } while ((int)(uVar15 + 1) < (this->Poses).ArrayNum);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_98.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_98.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_98.StatData.Pad[4] = '\0';
      local_98.StatData.Pad[5] = '\0';
      local_98.StatData.Pad[6] = '\0';
      local_98.StatData.Pad[7] = '\0';
      local_98.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_98.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_98.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_98.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_98);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
        FStatsHierarchical::EndMeasurement();
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

