// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 12

// FGameplayDebuggerAddonManager @ 146d3f7f0

FGameplayDebuggerAddonManager * __thiscall
FGameplayDebuggerAddonManager::FGameplayDebuggerAddonManager(FGameplayDebuggerAddonManager *this)

{
  *(undefined8 *)&(this->OnCategoriesChanged).field_0x18 = 2;
  *(undefined8 *)&this->OnCategoriesChanged = 0;
  *(undefined8 *)&(this->OnCategoriesChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnCategoriesChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnExtensionsChanged = 0;
  *(undefined8 *)&(this->OnExtensionsChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnExtensionsChanged).field_0x10 = 0;
  *(undefined8 *)&this->ExtensionMap = 0;
  *(undefined8 *)&(this->ExtensionMap).field_0x8 = 0;
  *(undefined8 *)&(this->ExtensionMap).field_0x20 = 0;
  *(undefined8 *)&(this->OnExtensionsChanged).field_0x18 = 2;
  *(undefined4 *)&(this->ExtensionMap).field_0x28 = 0;
  *(undefined4 *)&(this->ExtensionMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExtensionMap).field_0x34 = 0;
  *(undefined4 *)&(this->ExtensionMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ExtensionMap).field_0x40 = 0;
  *(undefined4 *)&(this->ExtensionMap).field_0x48 = 0;
  *(undefined8 *)&this->CategoryMap = 0;
  *(undefined8 *)&(this->CategoryMap).field_0x8 = 0;
  *(undefined8 *)&(this->CategoryMap).field_0x20 = 0;
  *(undefined4 *)&(this->CategoryMap).field_0x28 = 0;
  *(undefined4 *)&(this->CategoryMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CategoryMap).field_0x34 = 0;
  *(undefined4 *)&(this->CategoryMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CategoryMap).field_0x40 = 0;
  *(undefined4 *)&(this->CategoryMap).field_0x48 = 0;
  (this->SlotMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SlotMap).ArrayNum = 0;
  (this->SlotMap).ArrayMax = 0;
  (this->SlotNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SlotNames).ArrayNum = 0;
  (this->SlotNames).ArrayMax = 0;
  this->NumVisibleCategories = 0;
  return this;
}

// ~FGameplayDebuggerAddonManager @ 146d41110

void __thiscall
FGameplayDebuggerAddonManager::~FGameplayDebuggerAddonManager(FGameplayDebuggerAddonManager *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<FString,int>
            ((FString *)(this->SlotNames).AllocatorInstance.Data,(this->SlotNames).ArrayNum);
  pFVar1 = (this->SlotNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(this->SlotMap).AllocatorInstance.Data,
             (this->SlotMap).ArrayNum);
  pFVar1 = (this->SlotMap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->CategoryMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CategoryMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FGameplayDebuggerCategoryInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FGameplayDebuggerCategoryInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FGameplayDebuggerCategoryInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CategoryMap);
  *(undefined4 *)&(this->ExtensionMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ExtensionMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FGameplayDebuggerExtensionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FGameplayDebuggerExtensionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FGameplayDebuggerExtensionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExtensionMap);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnExtensionsChanged).field_0x8,*(int *)&(this->OnExtensionsChanged).field_0x10
            );
  pvVar2 = *(void **)&(this->OnExtensionsChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnExtensionsChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnCategoriesChanged).field_0x8,*(int *)&(this->OnCategoriesChanged).field_0x10
            );
  pvVar2 = *(void **)&(this->OnCategoriesChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector((FMRSWRecursiveAccessDetector *)this);
  return;
}

// CreateCategories @ 146d45900

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FGameplayDebuggerAddonManager::CreateCategories
          (FGameplayDebuggerAddonManager *this,AGameplayDebuggerCategoryReplicator *param_1,
          TArray<TSharedRef<FGameplayDebuggerCategory,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  TSharedRef<FGameplayDebuggerCategory,1> *pTVar4;
  longlong lVar5;
  code *pcVar6;
  FGameplayDebuggerCategory *pFVar7;
  TMap<FName,FGameplayDebuggerCategoryInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayDebuggerCategoryInfo,0>_>
  *pTVar8;
  TMap<FName,FGameplayDebuggerCategoryInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayDebuggerCategoryInfo,0>_>
  *pTVar9;
  bool bVar10;
  ENetMode EVar11;
  int iVar12;
  uint uVar13;
  UWorld *this_00;
  longlong lVar14;
  ForAnyElementType FVar15;
  FMRSWRecursiveAccessDetector *this_01;
  uint uVar16;
  FName *pFVar17;
  FDestructionSentinel *pFVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  uint uVar23;
  undefined1 *puVar24;
  uint *puVar25;
  undefined1 local_res18 [8];
  undefined8 local_res20;
  ForAnyElementType local_168;
  undefined8 local_160;
  FName local_158;
  undefined1 local_150 [8];
  ForAnyElementType FStack_148;
  int local_140;
  undefined1 local_138;
  byte local_137;
  uint local_134;
  TSharedRef<FGameplayDebuggerCategory,1> local_130;
  undefined8 local_120;
  int local_118;
  int local_114;
  TMap<FName,FGameplayDebuggerCategoryInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayDebuggerCategoryInfo,0>_>
  *local_110;
  AGameplayDebuggerCategoryReplicator *local_108;
  TMap<FName,FGameplayDebuggerCategoryInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayDebuggerCategoryInfo,0>_>
  *local_100;
  int iStack_f8;
  uint uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  TMap<FName,FGameplayDebuggerCategoryInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayDebuggerCategoryInfo,0>_>
  *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FReadAccessScope local_70 [2];
  undefined4 local_3c;
  
  this_00 = AActor::GetWorld((AActor *)param_1);
  if ((this_00 == (UWorld *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("World",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayDebugger\\Private\\GameplayDebuggerAddonManager.cpp"
                          ,0x7b,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  UWorld::InternalGetNetMode(this_00);
  if (this_00 != (UWorld *)0x0) {
    EVar11 = UWorld::InternalGetNetMode(this_00);
    if (EVar11 == NM_Client) {
      bVar10 = UWorld::IsPlayingReplay(this_00);
      local_res20 = (ulonglong)local_res20._4_4_ << 0x20;
      if (!bVar10) goto LAB_146d459a2;
    }
  }
  local_res20 = CONCAT44(local_res20._4_4_,0x40);
LAB_146d459a2:
  local_168.Data = (FScriptContainerElement *)0x0;
  puVar3 = &(this->CategoryMap).field_0x10;
  local_160 = 0;
  local_110 = &this->CategoryMap;
  iVar12 = *(int *)&(this->CategoryMap).field_0x28;
  local_e0 = 0;
  uStack_f4 = 1;
  iStack_e4 = 0;
  iStack_f8 = 0;
  if (iVar12 != 0) {
    puVar25 = *(uint **)&(this->CategoryMap).field_0x20;
    if (puVar25 == (uint *)0x0) {
      puVar25 = (uint *)puVar3;
    }
    uVar23 = *puVar25;
    while (uVar23 == 0) {
      lVar14 = (longlong)iStack_f8;
      local_e0 = local_e0 + 0x20;
      iStack_f8 = iStack_f8 + 1;
      iStack_e4 = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8) goto LAB_146d45a3d;
      uVar23 = puVar25[lVar14 + 1];
    }
    uStack_f4 = -uVar23 & uVar23;
    uVar2 = (ulonglong)uStack_f4 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_118 = (int)lVar14;
    iStack_e4 = local_e0 + -1 + local_118;
    if (iVar12 < iStack_e4) {
      iStack_e4 = iVar12;
    }
  }
LAB_146d45a3d:
  uStack_dc = local_3c;
  iStack_d8 = *(int *)&(this->CategoryMap).field_0x8 - *(int *)&(this->CategoryMap).field_0x34;
  uVar23 = *(uint *)&(this->CategoryMap).field_0x28;
  uVar22 = uVar23 & 0xffffffe0;
  uStack_e8 = 0xffffffff;
  TStack_c8._padding_ = CONCAT44(uStack_f4,iStack_f8);
  TStack_c8.CurrentBitIndex = iStack_e4;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar23 >> 5;
  TStack_c8._28_4_ = local_3c;
  TStack_c8.BaseBitIndex = local_e0;
  uStack_a8 = CONCAT44(uStack_d4,iStack_d8);
  local_100 = local_110;
  local_f0 = puVar3;
  local_d0 = local_110;
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar23 < 0) || (iVar12 < (int)uVar23)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar8 = local_110;
  uVar16 = *(uint *)&(this->CategoryMap).field_0x28;
  if (uVar23 != uVar16) {
    puVar24 = *(undefined1 **)&(this->CategoryMap).field_0x20;
    if (puVar24 == (undefined1 *)0x0) {
      puVar24 = puVar3;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar19 * 4);
    while (uVar23 == 0) {
      lVar14 = (longlong)iVar19;
      uVar22 = uVar22 + 0x20;
      iVar19 = iVar19 + 1;
      uVar23 = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
      goto LAB_146d45b3f;
      uVar23 = *(uint *)(puVar24 + lVar14 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_114 = (int)lVar14;
    uVar23 = local_114 + -1 + uVar22;
    if ((int)uVar16 < (int)uVar23) {
      uVar23 = uVar16;
    }
  }
LAB_146d45b3f:
  uVar22 = (uint)local_res20;
  do {
    pTVar9 = local_d0;
    if (*(int *)&local_d0->field_0x8 - *(int *)&local_d0->field_0x34 != (int)uStack_a8) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FGameplayDebuggerCategoryInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_c8.CurrentBitIndex == uVar23) &&
        (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar9 == pTVar8))
    {
      piVar1 = &param_2->ArrayMax;
      FGameplayDebuggerInputHandlerConfig::CurrentCategoryName.ComparisonIndex.Value = 0;
      FGameplayDebuggerInputHandlerConfig::CurrentCategoryName.Number = 0;
      pTVar4 = (TSharedRef<FGameplayDebuggerCategory,1> *)(param_2->AllocatorInstance).Data;
      local_120 = 0;
      if (*piVar1 < 0) {
        DestructItems<TSharedRef<FGameplayDebuggerCategory,1>,int>(pTVar4,param_2->ArrayNum);
        param_2->ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&param_2->AllocatorInstance,0,piVar1);
        }
      }
      else {
        DestructItems<TSharedRef<FGameplayDebuggerCategory,1>,int>(pTVar4,param_2->ArrayNum);
        param_2->ArrayNum = 0;
      }
      uVar23 = 0;
      if (0 < (this->SlotMap).ArrayNum) {
        local_res20 = 0;
        do {
          uVar22 = 0;
          lVar14 = 0;
          while( true ) {
            uVar16 = 0;
            if ((int)uVar23 < (this->SlotMap).ArrayNum) {
              uVar16 = ~uVar23 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (*(int *)((this->SlotMap).AllocatorInstance.Data + local_res20 + 8) <= (int)uVar22)
            break;
            uVar16 = 0;
            if ((int)uVar23 < (this->SlotMap).ArrayNum) {
              uVar16 = ~uVar23 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar20 = (this->SlotMap).AllocatorInstance.Data + (longlong)(int)uVar23 * 0x10;
            uVar16 = 0;
            if ((int)uVar22 < *(int *)(pFVar20 + 8)) {
              uVar16 = ~uVar22 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar16 = *(uint *)(lVar14 + *(longlong *)pFVar20);
            uVar13 = 0;
            if ((int)uVar16 < (int)local_160) {
              uVar13 = ~uVar16 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar20 = (param_2->AllocatorInstance).Data;
            pFVar21 = local_168.Data + (longlong)(int)uVar16 * 0x10;
            if (((pFVar20 <= pFVar21) && (pFVar21 < pFVar20 + (longlong)*piVar1 * 0x10)) &&
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
            iVar12 = param_2->ArrayNum;
            if (iVar12 == *piVar1) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&param_2->AllocatorInstance,piVar1);
            }
            param_2->ArrayNum = iVar12 + 1;
            pFVar20 = (param_2->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
            *(undefined8 *)pFVar20 = *(undefined8 *)&pFVar21->field_0x0;
            lVar5 = *(longlong *)(pFVar21 + 8);
            *(longlong *)(pFVar20 + 8) = lVar5;
            if (lVar5 != 0) {
              LOCK();
              *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
              UNLOCK();
            }
            uVar22 = uVar22 + 1;
            lVar14 = lVar14 + 4;
          }
          local_res20 = local_res20 + 0x10;
          uVar23 = uVar23 + 1;
        } while ((int)uVar23 < (this->SlotMap).ArrayNum);
      }
      DestructItems<TSharedRef<FGameplayDebuggerCategory,1>,int>
                ((TSharedRef<FGameplayDebuggerCategory,1> *)local_168.Data,(int)local_160);
      if ((TSharedRef<FGameplayDebuggerCategory,1> *)local_168.Data !=
          (TSharedRef<FGameplayDebuggerCategory,1> *)0x0) {
        FMemory::Free(local_168.Data);
      }
      return;
    }
    pFVar17 = (FName *)((longlong)TStack_c8.CurrentBitIndex * 0x30 + *(longlong *)pTVar9);
    local_158 = *pFVar17;
    local_150 = (undefined1  [8])0x0;
    FStack_148.Data = (FScriptContainerElement *)0x0;
    local_140 = 0;
    TDelegate<TSharedRef<FGameplayDebuggerCategory,1>___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<TSharedRef<FGameplayDebuggerCategory,1>___cdecl(void),FDefaultDelegateUserPolicy>
                *)local_150,
               (TDelegate<TSharedRef<FGameplayDebuggerCategory,1>___cdecl(void),FDefaultDelegateUserPolicy>
                *)(pFVar17 + 1));
    local_138 = (undefined1)pFVar17[4].ComparisonIndex.Value;
    local_137 = *(byte *)((longlong)&pFVar17[4].ComparisonIndex.Value + 1);
    local_134 = pFVar17[4].Number;
    FGameplayDebuggerInputHandlerConfig::CurrentCategoryName = local_158;
    if (local_137 == 4) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_150,
                 (FWriteAccessScope *)&local_a0);
      if ((local_140 != 0) && (FStack_148.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_148.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_148,0,0,0x10);
        local_140 = 0;
      }
      if (local_a0.bDestroyed == false) {
        pFVar18 = &local_a0;
        this_01 = local_a0.Accessor;
LAB_146d45e01:
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(this_01,pFVar18);
      }
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_150,local_70);
      FVar15.Data = (FScriptContainerElement *)0x0;
      if (local_140 != 0) {
        FVar15.Data = FStack_148.Data;
      }
      (**(code **)(*(longlong *)FVar15.Data + 0x60))(FVar15.Data,&local_130);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_70);
      pFVar7 = local_130.Object;
      local_108 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_1 != (AGameplayDebuggerCategoryReplicator *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&pFVar7->_padding_,(FObjectPtr)&local_108);
      pFVar7->CategoryId = param_2->ArrayNum;
      pFVar7->bHasAuthority = 0;
      *(uint *)&pFVar7->field_0x34 = *(uint *)&pFVar7->field_0x34 | uVar22;
      pFVar7->CategoryName = local_158;
      uVar16 = ((*(uint *)&param_1->field_0x378 >> 2 & 0xff) << 5 ^ *(uint *)&pFVar7->field_0x34) &
               0x20 ^ *(uint *)&pFVar7->field_0x34;
      *(uint *)&pFVar7->field_0x34 = uVar16;
      *(uint *)&pFVar7->field_0x34 = uVar16 & 0xffffff7f | -(uint)(local_137 < 2) & 0x80;
      if (((local_168.Data <= &local_130) &&
          (&local_130 <
           (TSharedRef<FGameplayDebuggerCategory,1> *)
           (local_168.Data + (longlong)local_160._4_4_ * 0x10))) &&
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
      iVar12 = (int)local_160;
      if ((int)local_160 == local_160._4_4_) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_168,(int *)((longlong)&local_160 + 4));
      }
      local_160 = CONCAT44(local_160._4_4_,iVar12 + 1);
      *(FGameplayDebuggerCategory **)&local_168.Data[(longlong)iVar12 * 0x10].field_0x0 =
           local_130.Object;
      *(TReferenceControllerBase<1> **)(local_168.Data + (longlong)iVar12 * 0x10 + 8) =
           local_130.SharedReferenceCount.ReferenceController;
      if (local_130.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_130.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_130.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_130.SharedReferenceCount.ReferenceController);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_150,
                 (FWriteAccessScope *)&local_88);
      if ((local_140 != 0) && (FStack_148.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_148.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_148,0,0,0x10);
        local_140 = 0;
      }
      if (local_88.bDestroyed == false) {
        pFVar18 = &local_88;
        this_01 = local_88.Accessor;
        goto LAB_146d45e01;
      }
    }
    if (FStack_148.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_148.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_150);
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  } while( true );
}

// CreateExtensions @ 146d47680

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FGameplayDebuggerAddonManager::CreateExtensions
          (FGameplayDebuggerAddonManager *this,AGameplayDebuggerCategoryReplicator *param_1,
          TArray<TSharedRef<FGameplayDebuggerExtension,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  TSharedRef<FGameplayDebuggerExtension,1> *pTVar4;
  FName FVar5;
  code *pcVar6;
  TMap<FName,FGameplayDebuggerExtensionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayDebuggerExtensionInfo,0>_>
  *pTVar7;
  bool bVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  FName *pFVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  TBitArray<FDefaultBitArrayAllocator> *pTVar16;
  FScriptContainerElement *pFVar17;
  uint *puVar18;
  FScriptContainerElement *pFVar19;
  undefined1 local_res8 [8];
  uint local_res18;
  undefined1 auStack_120 [8];
  ForAnyElementType local_118;
  int iStack_110;
  uint uStack_10c;
  uint local_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  TReferenceControllerBase<1> *local_f0;
  TBitArray<FDefaultBitArrayAllocator> *local_e8;
  int local_d8;
  TMap<FName,FGameplayDebuggerExtensionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayDebuggerExtensionInfo,0>_>
  *local_d0;
  AGameplayDebuggerCategoryReplicator *local_c8;
  TMap<FName,FGameplayDebuggerExtensionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayDebuggerExtensionInfo,0>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  FDestructionSentinel local_90;
  FReadAccessScope local_78 [2];
  undefined4 local_44;
  
  piVar1 = &param_2->ArrayMax;
  pTVar4 = (TSharedRef<FGameplayDebuggerExtension,1> *)(param_2->AllocatorInstance).Data;
  if (param_2->ArrayMax < 0) {
    DestructItems<TSharedRef<FGameplayDebuggerExtension,1>,int>(pTVar4,param_2->ArrayNum);
    param_2->ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedRef<FGameplayDebuggerExtension,1>,int>(pTVar4,param_2->ArrayNum);
    param_2->ArrayNum = 0;
  }
  pFVar19 = (FScriptContainerElement *)0x0;
  uVar3 = *(uint *)&(this->ExtensionMap).field_0x28;
  local_d0 = &this->ExtensionMap;
  local_e8 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ExtensionMap).field_0x10;
  local_108 = 0;
  auStack_120._4_4_ = 1;
  pFVar12 = pFVar19;
  uStack_10c = local_108;
  if (uVar3 != 0) {
    puVar18 = *(uint **)&(this->ExtensionMap).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)local_e8;
    }
    uVar15 = *puVar18;
    pFVar17 = pFVar19;
    while (local_108 = (uint)pFVar17, uVar15 == 0) {
      iVar13 = (int)pFVar12;
      local_108 = local_108 + 0x20;
      pFVar17 = (FScriptContainerElement *)(ulonglong)local_108;
      uVar15 = iVar13 + 1;
      pFVar12 = (FScriptContainerElement *)(ulonglong)uVar15;
      uStack_10c = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
      goto LAB_146d47786;
      uVar15 = puVar18[(longlong)iVar13 + 1];
    }
    auStack_120._4_4_ = -uVar15 & uVar15;
    uVar2 = (ulonglong)(uint)auStack_120._4_4_ * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uStack_10c = (int)lVar9 + -1 + local_108;
    if ((int)uVar3 < (int)uStack_10c) {
      uStack_10c = uVar3;
    }
  }
LAB_146d47786:
  local_118.Data = (FScriptContainerElement *)&(this->ExtensionMap).field_0x10;
  local_res18 = *(uint *)&(this->ExtensionMap).field_0x28;
  local_c0 = &this->ExtensionMap;
  uStack_104 = local_44;
  iStack_100 = *(int *)&(this->ExtensionMap).field_0x8 - *(int *)&(this->ExtensionMap).field_0x34;
  uVar15 = local_res18 & 0xffffffe0;
  iStack_110 = -1;
  TStack_b8.CurrentBitIndex = uStack_10c;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  auStack_120._0_4_ = (int)pFVar12;
  TStack_b8._padding_ = (longlong)auStack_120;
  iVar13 = (int)local_res18 >> 5;
  TStack_b8._28_4_ = local_44;
  TStack_b8.BaseBitIndex = local_108;
  uStack_98 = CONCAT44(uStack_fc,iStack_100);
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_118.Data;
  if ((((int)local_res18 < 0) || ((int)uVar3 < (int)local_res18)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar3 = local_e8->NumBits;
  if (local_res18 != uVar3) {
    pTVar16 = *(TBitArray<FDefaultBitArrayAllocator> **)
               &(local_e8->AllocatorInstance).SecondaryData.field_0x0;
    if (pTVar16 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar16 = local_e8;
    }
    uVar14 = -1 << ((byte)local_res18 & 0x1f) &
             *(uint *)((pTVar16->AllocatorInstance).InlineData + (longlong)iVar13 * 4);
    while (uVar14 == 0) {
      lVar9 = (longlong)iVar13;
      uVar15 = uVar15 + 0x20;
      iVar13 = iVar13 + 1;
      local_res18 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_146d478c0;
      uVar14 = *(uint *)((pTVar16->AllocatorInstance).InlineData + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_d8 = (int)lVar9;
    local_res18 = local_d8 + -1 + uVar15;
    if ((int)uVar3 < (int)local_res18) {
      local_res18 = uVar3;
    }
  }
LAB_146d478c0:
  do {
    pTVar7 = local_c0;
    if (*(int *)&local_c0->field_0x8 - *(int *)&local_c0->field_0x34 != (int)uStack_98) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FGameplayDebuggerExtensionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_b8.CurrentBitIndex == local_res18) && (TStack_b8.Array == local_e8)) &&
       (pTVar7 == local_d0)) {
      FGameplayDebuggerInputHandlerConfig::CurrentExtensionName.ComparisonIndex.Value = 0;
      FGameplayDebuggerInputHandlerConfig::CurrentExtensionName.Number = 0;
      return;
    }
    pFVar11 = (FName *)((longlong)TStack_b8.CurrentBitIndex * 0x30 + *(longlong *)pTVar7);
    FVar5 = *pFVar11;
    auStack_120 = (undefined1  [8])0x0;
    local_118.Data = (FScriptContainerElement *)0x0;
    iStack_110 = 0;
    TDelegate<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
                *)auStack_120,
               (TDelegate<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
                *)(pFVar11 + 1));
    local_108 = local_108 ^ (local_108 ^ pFVar11[4].ComparisonIndex.Value) & 1;
    local_108 = (local_108 ^ pFVar11[4].ComparisonIndex.Value) & 2 ^ local_108;
    if ((local_108 & 2) != 0) {
      FGameplayDebuggerInputHandlerConfig::CurrentExtensionName = FVar5;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_120,local_78);
      FVar10.Data = pFVar19;
      if (iStack_110 != 0) {
        FVar10.Data = local_118.Data;
      }
      (**(code **)(*(longlong *)&(FVar10.Data)->field_0x0 + 0x60))(FVar10.Data,&local_f8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (local_78);
      lVar9 = local_f8;
      local_c8 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_1 != (AGameplayDebuggerCategoryReplicator *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(lVar9 + 0x28),(FObjectPtr)&local_c8);
      pFVar12 = (param_2->AllocatorInstance).Data;
      if (((pFVar12 <= (FScriptContainerElement *)&local_f8) &&
          ((FScriptContainerElement *)&local_f8 < pFVar12 + (longlong)*piVar1 * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar13 = param_2->ArrayNum;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar13 + 1;
      pFVar12 = (param_2->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
      *(longlong *)pFVar12 = local_f8;
      *(TReferenceControllerBase<1> **)(pFVar12 + 8) = local_f0;
      if (local_f0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_f0->SharedReferenceCount = (atomic<int>)((int)local_f0->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_120,
               (FWriteAccessScope *)&local_90);
    if ((iStack_110 != 0) && (local_118.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_118.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_118,0,0,0x10);
      iStack_110 = 0;
    }
    if (local_90.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
    }
    if (local_118.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)auStack_120);
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  } while( true );
}

// GetCurrent @ 146d4c190

FGameplayDebuggerAddonManager * __cdecl FGameplayDebuggerAddonManager::GetCurrent(void)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this;
  IModuleInterface *pIVar3;
  FName local_res8 [4];
  
  pFVar2 = ::FName::FName(local_res8,"GameplayDebugger");
  FVar1 = *pFVar2;
  this = FModuleManager::Get();
  pIVar3 = FModuleManager::LoadModuleChecked(this,FVar1);
  return (FGameplayDebuggerAddonManager *)(pIVar3 + 1);
}

// NotifyCategoriesChanged @ 146d54360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FGameplayDebuggerAddonManager::NotifyCategoriesChanged(FGameplayDebuggerAddonManager *this)

{
  int *piVar1;
  undefined1 *puVar2;
  TMap<FName,FGameplayDebuggerCategoryInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayDebuggerCategoryInfo,0>_>
  *pTVar3;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  FGameplayDebuggerAddonManager *pFVar8;
  TMap<FName,FGameplayDebuggerCategoryInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayDebuggerCategoryInfo,0>_>
  *pTVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FString *pFVar13;
  longlong lVar14;
  FMRSWRecursiveAccessDetector *this_01;
  FName *pFVar15;
  FDestructionSentinel *pFVar16;
  ForElementType<FSetElementId> FVar17;
  int iVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  uint uVar21;
  undefined1 *puVar22;
  ulonglong uVar23;
  int iVar24;
  uint uVar25;
  uint *puVar26;
  int iVar27;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar28;
  undefined1 auStackY_1e8 [32];
  undefined1 local_198;
  FIdentityFunctor local_197 [7];
  ForAnyElementType local_190;
  undefined8 local_188;
  undefined8 local_180;
  FName local_178;
  undefined1 auStack_170 [8];
  ForAnyElementType local_168;
  int iStack_160;
  int iStack_15c;
  undefined1 local_158;
  char cStack_157;
  undefined2 uStack_156;
  uint uStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  uint local_148;
  uint local_144;
  FSlotInfo local_140;
  FGameplayDebuggerAddonManager *local_130;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  TMap<FName,FGameplayDebuggerCategoryInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayDebuggerCategoryInfo,0>_>
  *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_110;
  undefined8 uStack_f0;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FString local_b8 [2];
  uint local_8c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  iVar11 = 0;
  local_88.Elements._44_4_ = 0x80;
  puVar2 = &(this->CategoryMap).field_0x10;
  local_190.Data = (FScriptContainerElement *)0x0;
  local_188 = 0;
  pTVar3 = &this->CategoryMap;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  iVar24 = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  auStack_170._4_4_ = 1;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  local_88.Elements._48_4_ = 0xffffffff;
  iVar27 = *(int *)&(this->CategoryMap).field_0x28;
  iStack_15c = iVar24;
  auStack_170._0_4_ = iVar11;
  if (iVar27 != 0) {
    puVar26 = *(uint **)&(this->CategoryMap).field_0x20;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)puVar2;
    }
    uVar21 = *puVar26;
    iVar24 = 0;
    while (uVar21 == 0) {
      lVar14 = (longlong)(int)auStack_170._0_4_;
      iVar24 = iVar24 + 0x20;
      auStack_170._0_4_ = auStack_170._0_4_ + 1;
      iStack_15c = iVar27;
      if ((int)(iVar27 + -1 + (iVar27 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)auStack_170._0_4_)
      goto LAB_146d5446d;
      uVar21 = puVar26[lVar14 + 1];
    }
    auStack_170._4_4_ = -uVar21 & uVar21;
    uVar23 = (ulonglong)(uint)auStack_170._4_4_ * 2 + 1;
    lVar14 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_128 = (int)lVar14;
    iStack_15c = iVar24 + -1 + local_128;
    if (iVar27 < iStack_15c) {
      iStack_15c = iVar27;
    }
  }
LAB_146d5446d:
  uVar21 = *(uint *)&(this->CategoryMap).field_0x28;
  uStack_154 = local_8c;
  iStack_150 = *(int *)&(this->CategoryMap).field_0x8 - *(int *)&(this->CategoryMap).field_0x34;
  uVar20 = uVar21 & 0xffffffe0;
  iStack_160 = -1;
  TStack_110.CurrentBitIndex = iStack_15c;
  TStack_110.UnvisitedBitMask = 0xffffffff;
  local_158 = (undefined1)iVar24;
  cStack_157 = (char)((uint)iVar24 >> 8);
  uStack_156 = (undefined2)((uint)iVar24 >> 0x10);
  TStack_110._padding_ = (longlong)auStack_170;
  iVar18 = (int)uVar21 >> 5;
  TStack_110._28_4_ = local_8c;
  TStack_110.BaseBitIndex = iVar24;
  uStack_f0 = CONCAT44(uStack_14c,iStack_150);
  local_178 = (FName)pTVar3;
  local_168.Data = (FScriptContainerElement *)puVar2;
  local_130 = this;
  local_118 = pTVar3;
  TStack_110.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar21 < 0) || (iVar27 < (int)uVar21)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar25 = *(uint *)&(this->CategoryMap).field_0x28;
  if (uVar21 != uVar25) {
    puVar22 = *(undefined1 **)&(this->CategoryMap).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar2;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar18 * 4);
    while (uVar21 == 0) {
      lVar14 = (longlong)iVar18;
      uVar20 = uVar20 + 0x20;
      iVar18 = iVar18 + 1;
      uVar21 = uVar25;
      if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_146d5456e;
      uVar21 = *(uint *)(puVar22 + lVar14 * 4 + 4);
    }
    uVar23 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_124 = (int)lVar14;
    uVar21 = local_124 + -1 + uVar20;
    if ((int)uVar25 < (int)uVar21) {
      uVar21 = uVar25;
    }
  }
LAB_146d5456e:
  uVar20 = 0;
  lVar14 = 0;
  do {
    pTVar9 = local_118;
    if (*(int *)&local_118->field_0x8 - *(int *)&local_118->field_0x34 != (int)uStack_f0) {
      local_198 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FGameplayDebuggerCategoryInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_198);
    }
    pFVar8 = local_130;
    if (((TStack_110.CurrentBitIndex == uVar21) &&
        (TStack_110.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar9 == pTVar3))
    {
      local_130->NumVisibleCategories = (int)local_188;
      AlgoImpl::
      IntroSortInternal<_FGameplayDebuggerAddonManager::NotifyCategoriesChanged_::__l2::FSlotInfo,int,FIdentityFunctor,TDereferenceWrapper<_FGameplayDebuggerAddonManager::NotifyCategoriesChanged_::__l2::FSlotInfo,TLess<void>_>_>
                ((FSlotInfo *)local_190.Data,(int)local_188,local_197[0],(TLess<void> *)local_197);
      local_180 = (ulonglong)local_180._4_4_ << 0x20;
      iVar27 = (int)local_188;
      uVar21 = uVar20;
      if (0 < (int)local_188) {
        do {
          uVar25 = 0;
          if ((int)uVar21 < iVar27) {
            uVar25 = ~uVar21 >> 0x1f;
          }
          if (uVar25 == 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar27 = (int)local_188;
          }
          FVar7.Data = local_190.Data;
          if (*(int *)(local_190.Data + lVar14 + 0xc) == -1) {
            uVar25 = 0;
            local_144 = 0;
            uVar23 = 0;
            if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
              do {
                FVar17 = (ForElementType<FSetElementId>)&local_88.Hash;
                if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FVar17 = local_88.Hash.SecondaryData;
                }
                iVar27 = *(int *)((longlong)FVar17 + (local_88.HashSize - 1 & uVar23) * 4);
                while( true ) {
                  if (iVar27 == -1) {
                    uVar20 = (uint)local_180;
                    local_144 = uVar25;
                    goto LAB_146d548cf;
                  }
                  if (*(int *)(local_88.Elements._0_8_ + (longlong)iVar27 * 0xc) == (int)uVar23)
                  break;
                  iVar27 = *(int *)(local_88.Elements._0_8_ + 4 + (longlong)iVar27 * 0xc);
                }
                uVar25 = uVar25 + 1;
                uVar23 = (ulonglong)uVar25;
              } while( true );
            }
LAB_146d548cf:
            *(uint *)(local_190.Data + lVar14 + 0xc) = local_144;
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (&local_88,&local_11c,(bool *)&local_144);
            iVar27 = (int)local_188;
          }
          uVar25 = *(uint *)(FVar7.Data + lVar14 + 0xc);
          if ((int)*(uint *)(FVar7.Data + lVar14 + 0xc) < (int)uVar20) {
            uVar25 = uVar20;
          }
          uVar20 = uVar25;
          uVar21 = uVar21 + 1;
          lVar14 = lVar14 + 0x10;
          local_180 = CONCAT44(local_180._4_4_,uVar20);
        } while ((int)uVar21 < iVar27);
      }
      uVar21 = 0;
      this_00 = &pFVar8->SlotMap;
      piVar4 = &(pFVar8->SlotMap).ArrayMax;
      pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)(this_00->AllocatorInstance).Data;
      iVar27 = (pFVar8->SlotMap).ArrayNum;
      if ((pFVar8->SlotMap).ArrayMax < 0) {
        DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar5,iVar27);
        (pFVar8->SlotMap).ArrayNum = 0;
        if (*piVar4 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&this_00->AllocatorInstance,0,piVar4);
        }
      }
      else {
        DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar5,iVar27);
        (pFVar8->SlotMap).ArrayNum = 0;
      }
      pTVar28 = &pFVar8->SlotNames;
      piVar4 = &(pFVar8->SlotNames).ArrayNum;
      pFVar19 = (pTVar28->AllocatorInstance).Data;
      piVar1 = &(pFVar8->SlotNames).ArrayMax;
      if ((pFVar8->SlotNames).ArrayMax < 0) {
        DestructItems<FString,int>((FString *)pFVar19,*piVar4);
        *piVar4 = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&pTVar28->AllocatorInstance,0,piVar1);
        }
      }
      else {
        DestructItems<FString,int>((FString *)pFVar19,*piVar4);
        *piVar4 = 0;
      }
      iVar24 = (uint)local_180 + 1;
      TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::AddDefaulted
                (this_00,iVar24);
      iVar27 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,8,iVar24,&pTVar28->AllocatorInstance,piVar4,piVar1);
      memset((pTVar28->AllocatorInstance).Data + (longlong)iVar27 * 0x10,0,(longlong)iVar24 << 4);
      if (0 < (int)local_188) {
        local_180 = 0;
        do {
          lVar14 = local_180;
          uVar25 = 0;
          uVar20 = uVar25;
          if ((int)uVar21 < (int)local_188) {
            uVar20 = ~uVar21 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar15 = (FName *)(local_190.Data + lVar14);
          uVar20 = pFVar15[1].Number;
          uVar12 = uVar25;
          if ((int)uVar20 < *piVar4) {
            uVar12 = ~uVar20 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar27 = *(int *)((pTVar28->AllocatorInstance).Data + (longlong)(int)uVar20 * 0x10 + 8);
          uVar20 = iVar27 - 1;
          if (iVar27 == 0) {
            uVar20 = uVar25;
          }
          if (uVar20 != 0) {
            uVar20 = pFVar15[1].Number;
            if ((int)uVar20 < *piVar4) {
              uVar25 = ~uVar20 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            ::FString::AppendChar
                      ((FString *)((pTVar28->AllocatorInstance).Data + (longlong)(int)uVar20 * 0x10)
                       ,L'+');
          }
          pFVar13 = ::FName::ToString(pFVar15,local_b8);
          uVar20 = pFVar15[1].Number;
          uVar25 = 0;
          if ((int)uVar20 < *piVar4) {
            uVar25 = ~uVar20 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar24 = (pFVar13->Data).ArrayNum;
          iVar27 = iVar24 + -1;
          if (iVar24 == 0) {
            iVar27 = 0;
          }
          ::FString::AppendChars
                    ((FString *)((pTVar28->AllocatorInstance).Data + (longlong)(int)uVar20 * 0x10),
                     (wchar_t *)(pFVar13->Data).AllocatorInstance.Data,iVar27);
          if (local_b8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8[0].Data.AllocatorInstance.Data);
          }
          uVar20 = pFVar15[1].Number;
          uVar25 = 0;
          if ((int)uVar20 < (pFVar8->SlotMap).ArrayNum) {
            uVar25 = ~uVar20 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar15 = pFVar15 + 1;
          pFVar19 = (this_00->AllocatorInstance).Data + (longlong)(int)uVar20 * 0x10;
          if (((*(FName **)&pFVar19->field_0x0 <= pFVar15) &&
              (pFVar15 < (FName *)(&(*(FName **)&pFVar19->field_0x0)->ComparisonIndex +
                                  *(int *)(pFVar19 + 0xc)))) &&
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
          iVar27 = *(int *)&pFVar19[8].field_0x0;
          if (iVar27 == *(int *)(pFVar19 + 0xc)) {
            iVar27 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)pFVar19,(int *)(pFVar19 + 0xc));
          }
          *(int *)&pFVar19[8].field_0x0 = iVar27 + 1;
          uVar21 = uVar21 + 1;
          local_180 = local_180 + 0x10;
          *(uint *)(*(longlong *)&pFVar19->field_0x0 + (longlong)iVar27 * 4) =
               (pFVar15->ComparisonIndex).Value;
        } while ((int)uVar21 < (int)local_188);
      }
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&local_130->OnCategoriesChanged);
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      if ((FSlotInfo *)local_190.Data != (FSlotInfo *)0x0) {
        FMemory::Free(local_190.Data);
      }
      return;
    }
    pFVar15 = (FName *)((longlong)TStack_110.CurrentBitIndex * 0x30 + *(longlong *)pTVar9);
    local_178 = *pFVar15;
    auStack_170 = (undefined1  [8])0x0;
    local_168.Data = (FScriptContainerElement *)0x0;
    iStack_160 = 0;
    TDelegate<TSharedRef<FGameplayDebuggerCategory,1>___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<TSharedRef<FGameplayDebuggerCategory,1>___cdecl(void),FDefaultDelegateUserPolicy>
                *)auStack_170,
               (TDelegate<TSharedRef<FGameplayDebuggerCategory,1>___cdecl(void),FDefaultDelegateUserPolicy>
                *)(pFVar15 + 1));
    local_158 = (undefined1)pFVar15[4].ComparisonIndex.Value;
    cStack_157 = *(char *)((longlong)&pFVar15[4].ComparisonIndex.Value + 1);
    uStack_154 = pFVar15[4].Number;
    if (cStack_157 == '\x04') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_170,
                 (FWriteAccessScope *)&local_e8);
      if ((iStack_160 != 0) && (local_168.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_168.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_168,0,0,0x10);
        iStack_160 = 0;
      }
      this_01 = local_e8.Accessor;
      pFVar16 = &local_e8;
      if (local_e8.bDestroyed == false) {
LAB_146d5478e:
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(this_01,pFVar16);
      }
    }
    else {
      if ((int)uStack_154 < 0) {
        uVar25 = 0xffffffff;
      }
      else {
        uVar25 = uStack_154;
        if (100 < (int)uStack_154) {
          uVar25 = 100;
        }
      }
      local_140.CategoryName = local_178;
      iVar27 = iVar11 + 1;
      local_148 = uVar25;
      local_140.CategoryId = iVar11;
      local_140.SlotIdx = uVar25;
      if (((local_190.Data <= &local_140) &&
          (&local_140 < (FSlotInfo *)(local_190.Data + (longlong)local_188._4_4_ * 0x10))) &&
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
      iVar24 = (int)local_188;
      if ((int)local_188 == local_188._4_4_) {
        iVar24 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&local_190,(int *)((longlong)&local_188 + 4));
      }
      local_188 = CONCAT44(local_188._4_4_,iVar24 + 1);
      *(FName *)&local_190.Data[(longlong)iVar24 * 0x10].field_0x0 = local_140.CategoryName;
      *(ulonglong *)(local_190.Data + (longlong)iVar24 * 0x10 + 8) =
           CONCAT44(local_140.SlotIdx,local_140.CategoryId);
      if (-1 < (int)uVar25) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_88,&local_120,(bool *)&local_148);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_170,
                 (FWriteAccessScope *)&local_d0);
      if ((iStack_160 != 0) && (local_168.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_168.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_168,0,0,0x10);
        iStack_160 = 0;
      }
      iVar11 = iVar27;
      if (local_d0.bDestroyed == false) {
        this_01 = local_d0.Accessor;
        pFVar16 = &local_d0;
        goto LAB_146d5478e;
      }
    }
    if (local_168.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)auStack_170);
    TStack_110.UnvisitedBitMask = TStack_110.UnvisitedBitMask & ~TStack_110._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_110);
  } while( true );
}

// NotifyExtensionsChanged @ 146d54df0

void __thiscall
FGameplayDebuggerAddonManager::NotifyExtensionsChanged(FGameplayDebuggerAddonManager *this)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnExtensionsChanged);
  return;
}

// RegisterCategory @ 146d58ec0

void __thiscall
FGameplayDebuggerAddonManager::RegisterCategory
          (FGameplayDebuggerAddonManager *this,FName param_1,
          TDelegate<TSharedRef<FGameplayDebuggerCategory,1>___cdecl(void),FDefaultDelegateUserPolicy>
          *param_2,EGameplayDebuggerCategoryState param_3,int param_4)

{
  UClass *this_00;
  UGameplayDebuggerConfig *this_01;
  longlong *plVar1;
  FName local_res10 [2];
  EGameplayDebuggerCategoryState local_res20 [8];
  FDestructionSentinel local_78;
  undefined1 local_60 [8];
  TReferenceControllerBase<1> *local_58;
  undefined1 local_50 [8];
  ForAnyElementType local_48;
  int local_40;
  EGameplayDebuggerCategoryState local_38;
  EGameplayDebuggerCategoryState local_37;
  int local_34;
  
  plVar1 = (longlong *)0x0;
  local_50 = (undefined1  [8])0x0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  local_res10[0] = param_1;
  TDelegate<TSharedRef<FGameplayDebuggerCategory,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<TSharedRef<FGameplayDebuggerCategory,1>___cdecl(void),FDefaultDelegateUserPolicy>
              *)local_50,param_2);
  local_38 = param_3;
  this_00 = UGameplayDebuggerConfig::StaticClass();
  this_01 = UClass::GetDefaultObject<UGameplayDebuggerConfig>(this_00);
  local_res20[0] = param_3;
  UGameplayDebuggerConfig::UpdateCategoryConfig(this_01,local_res10[0],&param_4,local_res20);
  local_37 = local_res20[0];
  local_34 = param_4;
  local_78._0_8_ = local_res10;
  local_78.Accessor = (FMRSWRecursiveAccessDetector *)local_50;
  TSet<TTuple<FName,FGameplayDebuggerCategoryInfo>,TDefaultMapHashableKeyFuncs<FName,FGameplayDebuggerCategoryInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FGameplayDebuggerCategoryInfo_const_&>_>
            ((TSet<TTuple<FName,FGameplayDebuggerCategoryInfo>,TDefaultMapHashableKeyFuncs<FName,FGameplayDebuggerCategoryInfo,0>,FDefaultSetAllocator>
              *)&this->CategoryMap,
             (TPairInitializer<FName_const_&,FGameplayDebuggerCategoryInfo_const_&> *)local_res20,
             (bool *)&local_78);
  FGameplayDebuggerInputHandlerConfig::CurrentCategoryName = local_res10[0];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
             (FReadAccessScope *)&local_78);
  if (*(int *)&param_2->field_0x10 != 0) {
    plVar1 = *(longlong **)&param_2->field_0x8;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,local_60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_78);
  FGameplayDebuggerInputHandlerConfig::CurrentCategoryName.ComparisonIndex.Value = 0;
  FGameplayDebuggerInputHandlerConfig::CurrentCategoryName.Number = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_50,
             (FWriteAccessScope *)&local_78);
  if ((local_40 != 0) && (local_48.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_48.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,0x10);
    local_40 = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_50);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// RegisterExtension @ 146d59110

void __thiscall
FGameplayDebuggerAddonManager::RegisterExtension
          (FGameplayDebuggerAddonManager *this,FName param_1,
          TDelegate<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
          *param_2)

{
  UClass *this_00;
  UGameplayDebuggerConfig *this_01;
  longlong *plVar1;
  uint uVar2;
  TPairInitializer<FName_const_&,FGameplayDebuggerExtensionInfo_const_&> local_res8;
  FGameplayDebuggerExtensionInfo **local_68;
  FMRSWRecursiveAccessDetector *local_60;
  bool local_58;
  undefined1 local_50 [8];
  TReferenceControllerBase<1> *local_48;
  undefined1 local_40 [8];
  ForAnyElementType local_38;
  int local_30;
  uint local_28;
  
  plVar1 = (longlong *)0x0;
  local_40 = (undefined1  [8])0x0;
  local_38.Data = (FScriptContainerElement *)0x0;
  uVar2 = 0;
  local_30 = 0;
  local_res8.Value = (FGameplayDebuggerExtensionInfo *)param_1;
  TDelegate<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<TSharedRef<FGameplayDebuggerExtension,1>___cdecl(void),FDefaultDelegateUserPolicy>
              *)local_40,param_2);
  local_28 = local_28 | 1;
  local_res8.Key = (FName *)CONCAT71(local_res8.Key._1_7_,1);
  this_00 = UGameplayDebuggerConfig::StaticClass();
  this_01 = UClass::GetDefaultObject<UGameplayDebuggerConfig>(this_00);
  UGameplayDebuggerConfig::UpdateExtensionConfig
            (this_01,(FName)local_res8.Value,(uchar *)&local_res8);
  if ((char)local_res8.Key != '\0') {
    uVar2 = 2;
  }
  local_28 = uVar2 | local_28 & 0xfffffffd;
  local_68 = &local_res8.Value;
  local_60 = (FMRSWRecursiveAccessDetector *)local_40;
  TSet<TTuple<FName,FGameplayDebuggerExtensionInfo>,TDefaultMapHashableKeyFuncs<FName,FGameplayDebuggerExtensionInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FGameplayDebuggerExtensionInfo_const_&>_>
            ((TSet<TTuple<FName,FGameplayDebuggerExtensionInfo>,TDefaultMapHashableKeyFuncs<FName,FGameplayDebuggerExtensionInfo,0>,FDefaultSetAllocator>
              *)&this->ExtensionMap,&local_res8,(bool *)&local_68);
  FGameplayDebuggerInputHandlerConfig::CurrentExtensionName = (FName)local_res8.Value;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
             (FReadAccessScope *)&local_68);
  if (*(int *)&param_2->field_0x10 != 0) {
    plVar1 = *(longlong **)&param_2->field_0x8;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_68);
  FGameplayDebuggerInputHandlerConfig::CurrentExtensionName.ComparisonIndex.Value = 0;
  FGameplayDebuggerInputHandlerConfig::CurrentExtensionName.Number = 0;
  local_res8.Key = (FName *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_40,
             (FWriteAccessScope *)&local_68);
  if ((local_30 != 0) && (local_38.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_38.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_58 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60,(FDestructionSentinel *)&local_68);
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_40);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// UnregisterCategory @ 146d5d5a0

void __thiscall
FGameplayDebuggerAddonManager::UnregisterCategory(FGameplayDebuggerAddonManager *this,FName param_1)

{
  uint uVar1;
  FName local_res8;
  FName local_res10;
  
  if (*(int *)&(this->CategoryMap).field_0x8 != *(int *)&(this->CategoryMap).field_0x34) {
    local_res8 = param_1;
    local_res10 = param_1;
    uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    TSet<TTuple<FName,FGameplayDebuggerCategoryInfo>,TDefaultMapHashableKeyFuncs<FName,FGameplayDebuggerCategoryInfo,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,FGameplayDebuggerCategoryInfo>,TDefaultMapHashableKeyFuncs<FName,FGameplayDebuggerCategoryInfo,0>,FDefaultSetAllocator>
                         *)&this->CategoryMap,local_res10.Number + uVar1,&local_res8);
  }
  return;
}

// UnregisterExtension @ 146d5d6b0

void __thiscall
FGameplayDebuggerAddonManager::UnregisterExtension
          (FGameplayDebuggerAddonManager *this,FName param_1)

{
  uint uVar1;
  FName local_res8;
  FName local_res10;
  
  if (*(int *)&(this->ExtensionMap).field_0x8 != *(int *)&(this->ExtensionMap).field_0x34) {
    local_res8 = param_1;
    local_res10 = param_1;
    uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    TSet<TTuple<FName,FGameplayDebuggerExtensionInfo>,TDefaultMapHashableKeyFuncs<FName,FGameplayDebuggerExtensionInfo,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,FGameplayDebuggerExtensionInfo>,TDefaultMapHashableKeyFuncs<FName,FGameplayDebuggerExtensionInfo,0>,FDefaultSetAllocator>
                         *)&this->ExtensionMap,local_res10.Number + uVar1,&local_res8);
  }
  return;
}

// UpdateFromConfig @ 146d5ee40

void __thiscall FGameplayDebuggerAddonManager::UpdateFromConfig(FGameplayDebuggerAddonManager *this)

{
  TMap<FName,FGameplayDebuggerExtensionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayDebuggerExtensionInfo,0>_>
  *pTVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  code *pcVar6;
  FScriptContainerElement FVar7;
  bool bVar8;
  TMap<FName,FGameplayDebuggerExtensionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayDebuggerExtensionInfo,0>_>
  *pTVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  UClass *this_00;
  UGameplayDebuggerConfig *pUVar14;
  char cVar15;
  longlong lVar16;
  wchar_t *pwVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  int iVar20;
  undefined1 *puVar21;
  int iVar22;
  uint *puVar23;
  uint uVar24;
  FName *pFVar25;
  bool bVar26;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_158;
  undefined4 uStack_11c;
  undefined4 uStack_d4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  TMap<FName,FGameplayDebuggerExtensionInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGameplayDebuggerExtensionInfo,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  this_00 = UGameplayDebuggerConfig::StaticClass();
  pUVar14 = UClass::GetDefaultObject<UGameplayDebuggerConfig>(this_00);
  if (pUVar14 != (UGameplayDebuggerConfig *)0x0) {
    iVar20 = 0;
    iVar22 = 0;
    puVar2 = &(this->CategoryMap).field_0x10;
    iVar5 = *(int *)&(this->CategoryMap).field_0x28;
    bVar8 = false;
    local_158 = 1;
    uVar11 = 1;
    iVar12 = 0;
    if (iVar5 != 0) {
      puVar23 = *(uint **)&(this->CategoryMap).field_0x20;
      if (puVar23 == (uint *)0x0) {
        puVar23 = (uint *)puVar2;
      }
      uVar11 = *puVar23;
      while (uVar11 == 0) {
        lVar16 = (longlong)iVar20;
        iVar22 = iVar22 + 0x20;
        iVar20 = iVar20 + 1;
        uVar11 = 1;
        iVar12 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_146d5ef3e;
        uVar11 = puVar23[lVar16 + 1];
      }
      uVar11 = -uVar11 & uVar11;
      uVar3 = (ulonglong)uVar11 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar12 = (int)lVar16 + -1 + iVar22;
      if (iVar5 < iVar12) {
        iVar12 = iVar5;
      }
    }
LAB_146d5ef3e:
    uVar18 = *(uint *)&(this->CategoryMap).field_0x28;
    uVar24 = uVar18 & 0xffffffe0;
    TStack_c8._padding_ = CONCAT44(uVar11,iVar20);
    TStack_c8.CurrentBitIndex = iVar12;
    TStack_c8.UnvisitedBitMask = 0xffffffff;
    iVar20 = (int)uVar18 >> 5;
    TStack_c8._28_4_ = local_54;
    TStack_c8.BaseBitIndex = iVar22;
    uStack_a8 = CONCAT44(uStack_11c,
                         *(int *)&(this->CategoryMap).field_0x8 -
                         *(int *)&(this->CategoryMap).field_0x34);
    TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar11 = *(uint *)&(this->CategoryMap).field_0x28;
    if (uVar18 != uVar11) {
      puVar21 = *(undefined1 **)&(this->CategoryMap).field_0x20;
      if (puVar21 == (undefined1 *)0x0) {
        puVar21 = puVar2;
      }
      uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar20 * 4);
      while (uVar18 == 0) {
        lVar16 = (longlong)iVar20;
        uVar24 = uVar24 + 0x20;
        iVar20 = iVar20 + 1;
        uVar18 = uVar11;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
        goto LAB_146d5f050;
        uVar18 = *(uint *)(puVar21 + lVar16 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      uVar18 = (int)lVar16 + -1 + uVar24;
      if ((int)uVar11 < (int)uVar18) {
        uVar18 = uVar11;
      }
    }
LAB_146d5f050:
    while( true ) {
      if (*(int *)&(this->CategoryMap).field_0x8 - *(int *)&(this->CategoryMap).field_0x34 !=
          (int)uStack_a8) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FGameplayDebuggerCategoryInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if ((TStack_c8.CurrentBitIndex == uVar18) &&
         (TStack_c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
      pFVar25 = (FName *)((longlong)TStack_c8.CurrentBitIndex * 0x30 +
                         *(longlong *)&this->CategoryMap);
      uVar11 = 0;
      if (0 < (pUVar14->Categories).ArrayNum) {
        lVar16 = 0;
        do {
          uVar24 = 0;
          if ((int)uVar11 < (pUVar14->Categories).ArrayNum) {
            uVar24 = ~uVar11 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar19 = (pUVar14->Categories).AllocatorInstance.Data + lVar16;
          if (*(int *)(pFVar19 + 8) == 0) {
            pwVar17 = L"";
          }
          else {
            pwVar17 = *(wchar_t **)pFVar19;
          }
          bVar10 = ::FName::Equals(*pFVar25,pwVar17);
          if (bVar10) {
            bVar4 = (byte)pFVar25[4].ComparisonIndex.Value;
            if ((bVar4 == 1) || (bVar4 == 0)) {
              bVar10 = true;
            }
            else {
              bVar10 = false;
            }
            if (pFVar19[0x14] != (FScriptContainerElement)0x2) {
              bVar10 = pFVar19[0x14] == (FScriptContainerElement)0x0;
            }
            FVar7 = (FScriptContainerElement)(bVar4 & 0xfd);
            if (pFVar19[0x15] != (FScriptContainerElement)0x2) {
              FVar7 = pFVar19[0x15];
            }
            cVar15 = FVar7 != (FScriptContainerElement)0x0;
            if (pFVar19[0x16] == (FScriptContainerElement)0x2) {
              bVar26 = bVar4 == 4;
            }
            else {
              bVar26 = pFVar19[0x16] == (FScriptContainerElement)0x0;
            }
            if (bVar26) {
              cVar15 = '\x04';
            }
            else if (!bVar10) {
              cVar15 = cVar15 + '\x02';
            }
            if (((bVar8) || (pFVar25[4].Number != *(uint *)(pFVar19 + 0x10))) ||
               (*(char *)((longlong)&pFVar25[4].ComparisonIndex.Value + 1) != cVar15)) {
              bVar8 = true;
            }
            else {
              bVar8 = false;
            }
            pFVar25[4].Number = *(uint *)(pFVar19 + 0x10);
            *(char *)((longlong)&pFVar25[4].ComparisonIndex.Value + 1) = cVar15;
            break;
          }
          uVar11 = uVar11 + 1;
          lVar16 = lVar16 + 0x30;
        } while ((int)uVar11 < (pUVar14->Categories).ArrayNum);
      }
      TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
    }
    bVar10 = false;
    iVar5 = *(int *)&(this->ExtensionMap).field_0x28;
    puVar2 = &(this->ExtensionMap).field_0x10;
    iVar22 = 0;
    iVar20 = 0;
    pTVar1 = &this->ExtensionMap;
    iVar13 = 0;
    if (iVar5 != 0) {
      puVar23 = *(uint **)&(this->ExtensionMap).field_0x20;
      if (puVar23 == (uint *)0x0) {
        puVar23 = (uint *)puVar2;
      }
      uVar11 = *puVar23;
      while (uVar11 == 0) {
        lVar16 = (longlong)iVar22;
        iVar20 = iVar20 + 0x20;
        iVar22 = iVar22 + 1;
        iVar13 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar22) goto LAB_146d5f291;
        uVar11 = puVar23[lVar16 + 1];
      }
      local_158 = -uVar11 & uVar11;
      uVar3 = (ulonglong)local_158 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar13 = (int)lVar16 + -1 + iVar20;
      if (iVar5 < iVar13) {
        iVar13 = iVar5;
      }
    }
LAB_146d5f291:
    uVar11 = *(uint *)&(this->ExtensionMap).field_0x28;
    uVar18 = uVar11 & 0xffffffe0;
    TStack_98._padding_ = CONCAT44(local_158,iVar22);
    TStack_98.CurrentBitIndex = iVar13;
    TStack_98.UnvisitedBitMask = 0xffffffff;
    iVar22 = (int)uVar11 >> 5;
    TStack_98._28_4_ = iVar12;
    TStack_98.BaseBitIndex = iVar20;
    uStack_78 = CONCAT44(uStack_d4,
                         *(int *)&(this->ExtensionMap).field_0x8 -
                         *(int *)&(this->ExtensionMap).field_0x34);
    local_a0 = pTVar1;
    TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar11 < 0) || (iVar5 < (int)uVar11)) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar26)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar24 = *(uint *)&(this->ExtensionMap).field_0x28;
    if (uVar11 != uVar24) {
      puVar21 = *(undefined1 **)&(this->ExtensionMap).field_0x20;
      if (puVar21 == (undefined1 *)0x0) {
        puVar21 = puVar2;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar22 * 4);
      while (uVar11 == 0) {
        lVar16 = (longlong)iVar22;
        uVar18 = uVar18 + 0x20;
        iVar22 = iVar22 + 1;
        uVar11 = uVar24;
        if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
        goto LAB_146d5f3a1;
        uVar11 = *(uint *)(puVar21 + lVar16 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      uVar11 = (int)lVar16 + -1 + uVar18;
      if ((int)uVar24 < (int)uVar11) {
        uVar11 = uVar24;
      }
    }
LAB_146d5f3a1:
    while( true ) {
      pTVar9 = local_a0;
      if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
        local_res20[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FGameplayDebuggerExtensionInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (((TStack_98.CurrentBitIndex == uVar11) &&
          (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar9 == pTVar1)
         ) break;
      pFVar25 = (FName *)((longlong)TStack_98.CurrentBitIndex * 0x30 + *(longlong *)pTVar9);
      uVar18 = 0;
      if (0 < (pUVar14->Extensions).ArrayNum) {
        lVar16 = 0;
        do {
          uVar24 = 0;
          if ((int)uVar18 < (pUVar14->Extensions).ArrayNum) {
            uVar24 = ~uVar18 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar19 = (pUVar14->Extensions).AllocatorInstance.Data;
          if (*(int *)(pFVar19 + lVar16 + 8) == 0) {
            pwVar17 = L"";
          }
          else {
            pwVar17 = *(wchar_t **)(pFVar19 + lVar16);
          }
          bVar26 = ::FName::Equals(*pFVar25,pwVar17);
          if (bVar26) {
            pFVar25 = pFVar25 + 4;
            if (pFVar19[lVar16 + 0x10] == (FScriptContainerElement)0x2) {
              bVar26 = (bool)((byte)(pFVar25->ComparisonIndex).Value & 1);
            }
            else {
              bVar26 = pFVar19[lVar16 + 0x10] == (FScriptContainerElement)0x0;
            }
            uVar18 = (pFVar25->ComparisonIndex).Value;
            if ((bVar10) || ((uVar18 >> 1 & 1) != (uint)bVar26)) {
              bVar10 = true;
            }
            (pFVar25->ComparisonIndex).Value = (uint)bVar26 + (uint)bVar26 | uVar18 & 0xfffffffd;
            break;
          }
          uVar18 = uVar18 + 1;
          lVar16 = lVar16 + 0x28;
        } while ((int)uVar18 < (pUVar14->Extensions).ArrayNum);
      }
      TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
    }
    if (bVar8) {
      NotifyCategoriesChanged(this);
    }
    if (bVar10) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnExtensionsChanged);
    }
  }
  return;
}

