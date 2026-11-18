// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// CreateRenderers @ 14549c1a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FSceneExtensions::CreateRenderers
          (FSceneExtensions *this,FSceneRendererBase *param_1,FEngineShowFlags *param_2,
          TSparseArray<ISceneExtensionRenderer_*,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
          *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  FSceneExtensionRegistry *pFVar5;
  longlong lVar6;
  FSparseArrayAllocationInfo *pFVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  FSparseArrayAllocationInfo local_68;
  undefined1 local_58 [12];
  uint local_4c;
  longlong local_48;
  uint local_40;
  uint local_3c;
  
  TSparseArray<ISceneExtensionRenderer_*,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
  ::Empty(param_3,*(int *)&(this->Extensions).field_0x8 - *(int *)&(this->Extensions).field_0x34);
  TSparseArray<ISceneExtension_*,FDefaultSparseArrayAllocator>::CreateIterator
            (&this->Extensions,(TIterator *)local_58);
  if ((int)local_3c < *(int *)(local_48 + 0x18)) {
    do {
      uVar2 = local_3c;
      if ((FSceneExtensionRegistry::GlobalRegistry == (FSceneExtensionRegistry *)0x0) &&
         (pFVar5 = ::operator_new(0x10),
         FSceneExtensionRegistry::GlobalRegistry = (FSceneExtensionRegistry *)0x0,
         pFVar5 != (FSceneExtensionRegistry *)0x0)) {
        (pFVar5->Factories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar5->Factories).ArrayNum = 0;
        (pFVar5->Factories).ArrayMax = 0;
        FSceneExtensionRegistry::GlobalRegistry = pFVar5;
      }
      if (((FSceneExtensionRegistry::GlobalRegistry->Factories).ArrayNum + -1 < (int)uVar2) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index <= FSceneExtensionRegistry::Get().GetMaxRegistrationID()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneExtensions.cpp"
                             ,0x53,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      plVar8 = *(longlong **)((longlong)(int)uVar2 * 8 + *(longlong *)&this->Extensions);
      lVar6 = (**(code **)(*plVar8 + 0x18))(plVar8,param_1,param_2);
      if (lVar6 != 0) {
        if (((int)uVar2 < 0) || (*(int *)&param_3->field_0x28 <= (int)uVar2)) {
LAB_14549c30c:
          pFVar7 = TSparseArrayBase<8,8,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
                   ::InsertUninitialized
                             ((TSparseArrayBase<8,8,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
                               *)param_3,&local_68,uVar2);
          plVar8 = pFVar7->Pointer;
        }
        else {
          if ((*(int *)&param_3->field_0x28 <= (int)uVar2) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          puVar9 = &param_3->field_0x10;
          if (*(undefined1 **)&param_3->field_0x20 != (undefined1 *)0x0) {
            puVar9 = *(undefined1 **)&param_3->field_0x20;
          }
          uVar4 = uVar2;
          if ((int)uVar2 < 0) {
            uVar4 = uVar2 + 0x1f;
          }
          if ((*(uint *)(puVar9 + (longlong)((int)uVar4 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14549c30c;
          plVar8 = (longlong *)(*(longlong *)param_3 + (longlong)(int)uVar2 * 8);
        }
        if (plVar8 != (longlong *)0x0) {
          *plVar8 = lVar6;
        }
      }
      local_40 = local_40 & ~local_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_58 + 8));
    } while ((int)local_3c < *(int *)(local_48 + 0x18));
  }
  return;
}

// CreateUpdaters @ 14549f0a0

void __thiscall
FSceneExtensions::CreateUpdaters
          (FSceneExtensions *this,
          TSparseArray<ISceneExtensionUpdater_*,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
          *param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  FSceneExtensionRegistry *pFVar5;
  longlong lVar6;
  FSparseArrayAllocationInfo *pFVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  FSparseArrayAllocationInfo local_58;
  undefined1 local_48 [12];
  uint local_3c;
  longlong local_38;
  uint local_30;
  uint local_2c;
  
  TSparseArray<ISceneExtensionUpdater_*,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
  ::Empty(param_1,*(int *)&(this->Extensions).field_0x8 - *(int *)&(this->Extensions).field_0x34);
  TSparseArray<ISceneExtension_*,FDefaultSparseArrayAllocator>::CreateIterator
            (&this->Extensions,(TIterator *)local_48);
  if ((int)local_2c < *(int *)(local_38 + 0x18)) {
    do {
      uVar2 = local_2c;
      if ((FSceneExtensionRegistry::GlobalRegistry == (FSceneExtensionRegistry *)0x0) &&
         (pFVar5 = ::operator_new(0x10),
         FSceneExtensionRegistry::GlobalRegistry = (FSceneExtensionRegistry *)0x0,
         pFVar5 != (FSceneExtensionRegistry *)0x0)) {
        (pFVar5->Factories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar5->Factories).ArrayNum = 0;
        (pFVar5->Factories).ArrayMax = 0;
        FSceneExtensionRegistry::GlobalRegistry = pFVar5;
      }
      if (((FSceneExtensionRegistry::GlobalRegistry->Factories).ArrayNum + -1 < (int)uVar2) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index <= FSceneExtensionRegistry::Get().GetMaxRegistrationID()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneExtensions.cpp"
                             ,0x45,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar6 = (**(code **)(**(longlong **)
                             ((longlong)(int)uVar2 * 8 + *(longlong *)&this->Extensions) + 0x10))();
      if (lVar6 != 0) {
        if (((int)uVar2 < 0) || (*(int *)&param_1->field_0x28 <= (int)uVar2)) {
LAB_14549f202:
          pFVar7 = TSparseArrayBase<8,8,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
                   ::InsertUninitialized
                             ((TSparseArrayBase<8,8,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
                               *)param_1,&local_58,uVar2);
          plVar8 = pFVar7->Pointer;
        }
        else {
          if ((*(int *)&param_1->field_0x28 <= (int)uVar2) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          puVar9 = &param_1->field_0x10;
          if (*(undefined1 **)&param_1->field_0x20 != (undefined1 *)0x0) {
            puVar9 = *(undefined1 **)&param_1->field_0x20;
          }
          uVar4 = uVar2;
          if ((int)uVar2 < 0) {
            uVar4 = uVar2 + 0x1f;
          }
          if ((*(uint *)(puVar9 + (longlong)((int)uVar4 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
          goto LAB_14549f202;
          plVar8 = (longlong *)(*(longlong *)param_1 + (longlong)(int)uVar2 * 8);
        }
        if (plVar8 != (longlong *)0x0) {
          *plVar8 = lVar6;
        }
      }
      local_30 = local_30 & ~local_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_48 + 8));
    } while ((int)local_2c < *(int *)(local_38 + 0x18));
  }
  return;
}

// Init @ 1454aaeb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FSceneExtensions::Init(FSceneExtensions *this,FScene *param_1)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  longlong *plVar3;
  code *pcVar4;
  FSceneExtensionRegistry *pFVar5;
  TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *pTVar6;
  FScene *pFVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  FSparseArrayAllocationInfo *pFVar11;
  uint uVar12;
  ForElementType<unsigned_int> FVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *pTVar16;
  int iVar17;
  ForElementType<unsigned_int> FVar18;
  FScriptContainerElement *pFVar19;
  undefined1 auStackY_138 [32];
  undefined1 local_108;
  undefined1 local_107 [7];
  int local_100;
  uint uStack_fc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_f8;
  undefined4 local_f0;
  int iStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *local_e0;
  FScene *local_d8;
  TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c8;
  int local_a8;
  undefined8 local_a0;
  FScriptContainerElement *pFStack_98;
  FSparseArrayAllocationInfo local_90;
  TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> local_80;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  uVar15 = 0;
  local_e0 = (TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)this;
  local_d8 = param_1;
  if (FSceneExtensionRegistry::GlobalRegistry == (FSceneExtensionRegistry *)0x0) {
    FSceneExtensionRegistry::GlobalRegistry = ::operator_new(0x10);
    if (FSceneExtensionRegistry::GlobalRegistry == (FSceneExtensionRegistry *)0x0) {
      FSceneExtensionRegistry::GlobalRegistry = (FSceneExtensionRegistry *)0x0;
    }
    else {
      (FSceneExtensionRegistry::GlobalRegistry->Factories).AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (FSceneExtensionRegistry::GlobalRegistry->Factories).ArrayNum = 0;
      (FSceneExtensionRegistry::GlobalRegistry->Factories).ArrayMax = 0;
    }
  }
  pFVar5 = FSceneExtensionRegistry::GlobalRegistry;
  local_80.AllocationFlags.NumBits = ___xmm_00000000ffffffff0000008000000000;
  local_80.AllocationFlags.MaxBits = _UNK_150631d94;
  local_80.FirstFreeIndex = _UNK_150631d98;
  local_80.NumFreeIndices = _UNK_150631d9c;
  local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.Data.ArrayMax = 0;
  local_80.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  uVar12 = (FSceneExtensionRegistry::GlobalRegistry->Factories).ArrayNum;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  local_80.Data.ArrayNum = 0;
  if (uVar12 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar12,(ForAnyElementType *)&local_80,0,&local_80.Data.ArrayMax);
  }
  iVar17 = local_80.AllocationFlags.MaxBits;
  uVar12 = uVar12 + 0x1f & 0xffffffe0;
  local_80.FirstFreeIndex = -1;
  local_80.NumFreeIndices = 0;
  local_80.AllocationFlags._24_8_ = (ulonglong)(uint)local_80.AllocationFlags.MaxBits << 0x20;
  if ((iVar17 < (int)uVar12) || (0x80 < iVar17)) {
    uVar9 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar9 = uVar12;
    }
    local_80.AllocationFlags._24_8_ = (ulonglong)uVar9 << 0x20;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_80.AllocationFlags,0);
  }
  pFVar19 = (pFVar5->Factories).AllocatorInstance.Data;
  iVar17 = (pFVar5->Factories).ArrayNum;
  pFVar1 = pFVar19 + (longlong)iVar17 * 8;
  while( true ) {
    if ((pFVar5->Factories).ArrayNum != iVar17) {
      local_108 = 0;
      `TCheckedPointerIterator<ISceneExtensionFactory_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_108);
    }
    pTVar6 = local_e0;
    if (pFVar19 == pFVar1) break;
    lVar10 = (**(code **)(**(longlong **)pFVar19 + 8))();
    if (lVar10 != 0) {
      if (((int)uVar15 < 0) || (local_80.AllocationFlags.NumBits <= (int)uVar15)) {
LAB_1454ab03b:
        pFVar11 = TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::InsertUninitialized
                            (&local_80,&local_90,uVar15);
        local_a0 = *(undefined8 *)pFVar11;
        pFStack_98 = pFVar11->Pointer;
        pFVar14 = pFVar11->Pointer;
      }
      else {
        FVar13 = (ForElementType<unsigned_int>)&local_80.AllocationFlags;
        if (local_80.AllocationFlags.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar13 = local_80.AllocationFlags.AllocatorInstance.SecondaryData;
        }
        uVar12 = uVar15;
        if ((int)uVar15 < 0) {
          uVar12 = uVar15 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar13 + (longlong)((int)uVar12 >> 5) * 4) >> (uVar15 & 0x1f) & 1)
            == 0) goto LAB_1454ab03b;
        pFVar14 = local_80.Data.AllocatorInstance.Data + (longlong)(int)uVar15 * 8;
        pFStack_98 = pFVar14;
      }
      if (pFVar14 != (FScriptContainerElement *)0x0) {
        *(longlong *)pFVar14 = lVar10;
      }
    }
    uVar15 = uVar15 + 1;
    pFVar19 = pFVar19 + 8;
  }
  if (local_e0 != &local_80) {
    TSparseArray<ISceneExtension_*,FDefaultSparseArrayAllocator>::
    Move<TSparseArray<ISceneExtension_*,FDefaultSparseArrayAllocator>_>
              ((TSparseArray<ISceneExtension_*,FDefaultSparseArrayAllocator> *)local_e0,
               (TSparseArray<ISceneExtension_*,FDefaultSparseArrayAllocator> *)&local_80);
  }
  local_80.Data.ArrayNum = 0;
  if (local_80.Data.ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&local_80,0,&local_80.Data.ArrayMax);
  }
  iVar17 = local_80.AllocationFlags.MaxBits;
  local_80.FirstFreeIndex = -1;
  local_80.NumFreeIndices = 0;
  local_80.AllocationFlags._24_8_ = (ulonglong)(uint)local_80.AllocationFlags.MaxBits << 0x20;
  if (0x80 < (uint)iVar17) {
    local_80.AllocationFlags.NumBits = 0;
    local_80.AllocationFlags.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_80.AllocationFlags,0);
  }
  if (local_80.AllocationFlags.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
  {
    FMemory::Free((void *)local_80.AllocationFlags.AllocatorInstance.SecondaryData);
  }
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  iVar17 = (pTVar6->AllocationFlags).NumBits;
  pTStack_f8 = &pTVar6->AllocationFlags;
  local_100 = 0;
  uStack_fc = 1;
  iStack_ec = 0;
  iStack_e8 = 0;
  if (iVar17 != 0) {
    FVar13 = (pTVar6->AllocationFlags).AllocatorInstance.SecondaryData;
    if (FVar13 == (ForElementType<unsigned_int>)0x0) {
      FVar13 = (ForElementType<unsigned_int>)pTStack_f8;
    }
    uVar15 = *(uint *)FVar13;
    iStack_e8 = 0;
    while (uVar15 == 0) {
      lVar10 = (longlong)local_100;
      iStack_e8 = iStack_e8 + 0x20;
      local_100 = local_100 + 1;
      if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < local_100) goto LAB_1454ab19f;
      uVar15 = *(uint *)((uchar *)((longlong)FVar13 + 4) + lVar10 * 4);
    }
    uStack_fc = -uVar15 & uVar15;
    uVar2 = (ulonglong)uStack_fc * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_e0 = (TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)
               CONCAT44(local_e0._4_4_,(int)lVar10);
    iStack_ec = (int)lVar10 + -1 + iStack_e8;
    if (iVar17 < iStack_ec) {
LAB_1454ab19f:
      iStack_ec = iVar17;
    }
  }
  local_f0 = 0xffffffff;
  uVar15 = (pTVar6->AllocationFlags).NumBits;
  local_a8 = (pTVar6->Data).ArrayNum - pTVar6->NumFreeIndices;
  local_c8._padding_ = CONCAT44(uStack_fc,local_100);
  iVar17 = (int)uVar15 >> 5;
  local_c8.CurrentBitIndex = iStack_ec;
  local_c8.UnvisitedBitMask = 0xffffffff;
  local_c8._28_4_ = uStack_e4;
  local_c8.BaseBitIndex = iStack_e8;
  uVar12 = uVar15 & 0xffffffe0;
  local_d0 = pTVar6;
  local_c8.Array = pTStack_f8;
  if (((int)uVar15 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar7 = local_d8;
  uVar9 = (pTVar6->AllocationFlags).NumBits;
  pTVar16 = pTVar6;
  if (uVar15 != uVar9) {
    FVar13 = (pTVar6->AllocationFlags).AllocatorInstance.SecondaryData;
    FVar18 = (ForElementType<unsigned_int>)&pTVar6->AllocationFlags;
    if (FVar13 != (ForElementType<unsigned_int>)0x0) {
      FVar18 = FVar13;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)((longlong)FVar18 + (longlong)iVar17 * 4);
    while (uVar15 == 0) {
      lVar10 = (longlong)iVar17;
      uVar12 = uVar12 + 0x20;
      iVar17 = iVar17 + 1;
      uVar15 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_1454ab2a0;
      uVar15 = *(uint *)((uchar *)((longlong)FVar18 + 4) + lVar10 * 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar15 = (int)lVar10 + -1 + uVar12;
    if ((int)uVar9 < (int)uVar15) {
      uVar15 = uVar9;
    }
  }
LAB_1454ab2a0:
  while( true ) {
    if ((pTVar16->Data).ArrayNum - pTVar16->NumFreeIndices != local_a8) {
      `TSparseArray<ISceneExtension_*,FDefaultSparseArrayAllocator>::TRangedForIterator::operator!='
      ::__l2::<lambda_1>::operator()(local_107);
    }
    if (((local_c8.CurrentBitIndex == uVar15) && (local_c8.Array == &pTVar6->AllocationFlags)) &&
       (pTVar16 == pTVar6)) break;
    plVar3 = *(longlong **)
              ((pTVar16->Data).AllocatorInstance.Data + (longlong)local_c8.CurrentBitIndex * 8);
    (**(code **)(*plVar3 + 8))(plVar3,pFVar7);
    local_c8.UnvisitedBitMask = local_c8.UnvisitedBitMask & ~local_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c8);
    pTVar16 = local_d0;
  }
  return;
}

// Reset @ 1454b6e90

void __thiscall FSceneExtensions::Reset(FSceneExtensions *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  iVar3 = *(int *)&(this->Extensions).field_0x28;
  puVar1 = &(this->Extensions).field_0x10;
  uStack_84 = 1;
  local_88 = 0;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar11 = *(uint **)&(this->Extensions).field_0x20;
    if (puVar11 == (uint *)0x0) {
      puVar11 = (uint *)puVar1;
    }
    uVar9 = *puVar11;
    iStack_70 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_1454b6f4a;
      uVar9 = puVar11[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_1454b6f4a:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Extensions).field_0x28;
  local_40 = *(int *)&(this->Extensions).field_0x8 - *(int *)&(this->Extensions).field_0x34;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  iVar12 = (int)uVar9 >> 5;
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->Extensions).field_0x28;
  if (uVar9 != uVar4) {
    puVar10 = *(undefined1 **)&(this->Extensions).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar10 + (longlong)iVar12 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1454b7030;
      uVar9 = *(uint *)(puVar10 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_1454b7030:
  while( true ) {
    if (*(int *)&(this->Extensions).field_0x8 - *(int *)&(this->Extensions).field_0x34 != local_40)
    {
      `TSparseArray<ISceneExtension_*,FDefaultSparseArrayAllocator>::TRangedForIterator::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    puVar5 = *(undefined8 **)
              (*(longlong *)&this->Extensions + (longlong)local_60.CurrentBitIndex * 8);
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  *(undefined4 *)&(this->Extensions).field_0x8 = 0;
  if (*(int *)&(this->Extensions).field_0xc < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,(int *)&(this->Extensions).field_0xc);
  }
  *(undefined4 *)&(this->Extensions).field_0x34 = 0;
  *(undefined4 *)&(this->Extensions).field_0x28 = 0;
  *(undefined4 *)&(this->Extensions).field_0x30 = 0xffffffff;
  return;
}

