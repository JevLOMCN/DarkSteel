// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 75

// StaticClass @ 14a788450

UClass * __cdecl UCommonTabListWidgetBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonTabListWidgetBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonTabListWidgetBase",
               &Z_Registration_Info_UClass_UCommonTabListWidgetBase.InnerSingleton,
               StaticRegisterNativesUCommonTabListWidgetBase,0x598,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonTabListWidgetBase>,
               InternalVTableHelperCtorCaller<UCommonTabListWidgetBase>,local_res8,
               UCommonUserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonTabListWidgetBase.InnerSingleton;
}

// UCommonTabListWidgetBase @ 14a7ae850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UCommonTabListWidgetBase * __thiscall
UCommonTabListWidgetBase::UCommonTabListWidgetBase
          (UCommonTabListWidgetBase *this,FVTableHelper *param_1)

{
  UUserWidget::UUserWidget((UUserWidget *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->OnTabSelected = 0;
  *(undefined8 *)&(this->OnTabSelected).field_0x8 = 0;
  *(undefined8 *)&(this->OnTabSelected).field_0x10 = 0;
  *(undefined8 *)&this->OnTabButtonCreation = 0;
  *(undefined8 *)&(this->OnTabButtonCreation).field_0x8 = 0;
  *(undefined8 *)&(this->OnTabButtonCreation).field_0x10 = 0;
  *(undefined8 *)&this->OnTabButtonRemoval = 0;
  *(undefined8 *)&(this->OnTabButtonRemoval).field_0x8 = 0;
  *(undefined8 *)&(this->OnTabButtonRemoval).field_0x10 = 0;
  *(undefined8 *)&this->OnTabListRebuilt = 0;
  *(undefined8 *)&(this->OnTabListRebuilt).field_0x8 = 0;
  *(undefined8 *)&(this->OnTabListRebuilt).field_0x10 = 0;
  (this->NextTabInputActionData).DataTable.field0_0x0.DebugPtr = (UDataTable *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UCommonTabListWidgetBase__6B_;
  (this->NextTabInputActionData).RowName.ComparisonIndex = 0;
  (this->NextTabInputActionData).RowName.Number = 0;
  (this->PreviousTabInputActionData).DataTable.field0_0x0.DebugPtr = (UDataTable *)0x0;
  (this->PreviousTabInputActionData).RowName.ComparisonIndex = 0;
  (this->PreviousTabInputActionData).RowName.Number = 0;
  (this->NextTabEnhancedInputAction).field0_0x0.DebugPtr = (UInputAction *)0x0;
  (this->PreviousTabEnhancedInputAction).field0_0x0.DebugPtr = (UInputAction *)0x0;
  (this->LinkedSwitcher).WeakPtr = (FWeakObjectPtr)0x0;
  (this->TabButtonGroup).field0_0x0.DebugPtr = (UCommonButtonGroupBase *)0x0;
  *(undefined8 *)&this->RegisteredTabsByID = 0;
  *(undefined8 *)&(this->RegisteredTabsByID).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredTabsByID).field_0x20 = 0;
  this->bShouldWrapNavigation = true;
  this->bIsListeningForInput = false;
  *(undefined4 *)&(this->RegisteredTabsByID).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredTabsByID).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredTabsByID).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RegisteredTabsByID).field_0x34 = 0;
  *(undefined8 *)&(this->RegisteredTabsByID).field_0x40 = 0;
  *(undefined4 *)&(this->RegisteredTabsByID).field_0x48 = 0;
  (this->TabButtonWidgetPool).ActiveWidgets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TabButtonWidgetPool).ActiveWidgets.ArrayNum = 0;
  (this->TabButtonWidgetPool).ActiveWidgets.ArrayMax = 0;
  (this->TabButtonWidgetPool).InactiveWidgets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TabButtonWidgetPool).InactiveWidgets.ArrayNum = 0;
  (this->TabButtonWidgetPool).InactiveWidgets.ArrayMax = 0;
  (this->TabButtonWidgetPool).OwningWidget.WeakPtr = (FWeakObjectPtr)0x0;
  (this->TabButtonWidgetPool).OwningWorld.WeakPtr = (FWeakObjectPtr)0x0;
  (this->TabButtonWidgetPool).DefaultPlayerController.WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&(this->TabButtonWidgetPool).CachedSlateByWidgetObject = 0;
  *(undefined8 *)&(this->TabButtonWidgetPool).CachedSlateByWidgetObject.field_0x8 = 0;
  *(undefined8 *)&(this->TabButtonWidgetPool).CachedSlateByWidgetObject.field_0x20 = 0;
  *(undefined4 *)&(this->TabButtonWidgetPool).CachedSlateByWidgetObject.field_0x28 = 0;
  *(undefined4 *)&(this->TabButtonWidgetPool).CachedSlateByWidgetObject.field_0x2c = 0x80;
  *(undefined4 *)&(this->TabButtonWidgetPool).CachedSlateByWidgetObject.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TabButtonWidgetPool).CachedSlateByWidgetObject.field_0x34 = 0;
  *(undefined8 *)&(this->TabButtonWidgetPool).CachedSlateByWidgetObject.field_0x40 = 0;
  *(undefined4 *)&(this->TabButtonWidgetPool).CachedSlateByWidgetObject.field_0x48 = 0;
  (this->ActiveTabID).ComparisonIndex = 0;
  (this->ActiveTabID).Number = 0;
  this->bIsRebuildingList = false;
  this->bPendingRebuild = false;
  (this->NextTabActionHandle).CachedDebugActionName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->NextTabActionHandle).CachedDebugActionName.Data.ArrayNum = 0;
  (this->NextTabActionHandle).CachedDebugActionName.Data.ArrayMax = 0;
  (this->NextTabActionHandle).RegistrationId = -1;
  (this->PrevTabActionHandle).CachedDebugActionName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PrevTabActionHandle).CachedDebugActionName.Data.ArrayNum = 0;
  (this->PrevTabActionHandle).CachedDebugActionName.Data.ArrayMax = 0;
  (this->PrevTabActionHandle).RegistrationId = -1;
  return this;
}

// UCommonTabListWidgetBase @ 14a7aea50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UCommonTabListWidgetBase * __thiscall
UCommonTabListWidgetBase::UCommonTabListWidgetBase
          (UCommonTabListWidgetBase *this,FObjectInitializer *param_1)

{
  UUserWidget::UUserWidget((UUserWidget *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->OnTabSelected = 0;
  *(undefined8 *)&(this->OnTabSelected).field_0x8 = 0;
  *(undefined8 *)&(this->OnTabSelected).field_0x10 = 0;
  *(undefined8 *)&this->OnTabButtonCreation = 0;
  *(undefined8 *)&(this->OnTabButtonCreation).field_0x8 = 0;
  *(undefined8 *)&(this->OnTabButtonCreation).field_0x10 = 0;
  *(undefined8 *)&this->OnTabButtonRemoval = 0;
  *(undefined8 *)&(this->OnTabButtonRemoval).field_0x8 = 0;
  *(undefined8 *)&(this->OnTabButtonRemoval).field_0x10 = 0;
  *(undefined8 *)&this->OnTabListRebuilt = 0;
  *(undefined8 *)&(this->OnTabListRebuilt).field_0x8 = 0;
  *(undefined8 *)&(this->OnTabListRebuilt).field_0x10 = 0;
  (this->NextTabInputActionData).DataTable.field0_0x0.DebugPtr = (UDataTable *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UCommonTabListWidgetBase__6B_;
  (this->NextTabInputActionData).RowName.ComparisonIndex = 0;
  (this->NextTabInputActionData).RowName.Number = 0;
  (this->PreviousTabInputActionData).DataTable.field0_0x0.DebugPtr = (UDataTable *)0x0;
  (this->PreviousTabInputActionData).RowName.ComparisonIndex = 0;
  (this->PreviousTabInputActionData).RowName.Number = 0;
  (this->NextTabEnhancedInputAction).field0_0x0.DebugPtr = (UInputAction *)0x0;
  (this->PreviousTabEnhancedInputAction).field0_0x0.DebugPtr = (UInputAction *)0x0;
  this->bAutoListenForInput = false;
  this->bShouldWrapNavigation = true;
  this->bDeferRebuildingTabList = false;
  (this->LinkedSwitcher).WeakPtr = (FWeakObjectPtr)0x0;
  (this->TabButtonGroup).field0_0x0.DebugPtr = (UCommonButtonGroupBase *)0x0;
  this->bIsListeningForInput = false;
  *(undefined8 *)&(this->RegisteredTabsByID).field_0x10 = 0;
  *(undefined8 *)&(this->RegisteredTabsByID).field_0x18 = 0;
  *(undefined8 *)&(this->RegisteredTabsByID).field_0x38 = 0;
  *(undefined8 *)&(this->RegisteredTabsByID).field_0x48 = 0;
  *(undefined8 *)&this->RegisteredTabsByID = 0;
  *(undefined8 *)&(this->RegisteredTabsByID).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredTabsByID).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredTabsByID).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredTabsByID).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredTabsByID).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RegisteredTabsByID).field_0x34 = 0;
  *(undefined8 *)&(this->RegisteredTabsByID).field_0x40 = 0;
  FUserWidgetPool::FUserWidgetPool(&this->TabButtonWidgetPool,(UWidget *)this);
  (this->ActiveTabID).ComparisonIndex = 0;
  (this->ActiveTabID).Number = 0;
  this->bIsRebuildingList = false;
  this->bPendingRebuild = false;
  (this->NextTabActionHandle).CachedDebugActionName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->NextTabActionHandle).CachedDebugActionName.Data.ArrayNum = 0;
  (this->NextTabActionHandle).CachedDebugActionName.Data.ArrayMax = 0;
  (this->NextTabActionHandle).RegistrationId = -1;
  (this->PrevTabActionHandle).CachedDebugActionName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PrevTabActionHandle).CachedDebugActionName.Data.ArrayNum = 0;
  (this->PrevTabActionHandle).CachedDebugActionName.Data.ArrayMax = 0;
  (this->PrevTabActionHandle).RegistrationId = -1;
  return this;
}

// ~UCommonTabListWidgetBase @ 14a7b3370

void __thiscall UCommonTabListWidgetBase::~UCommonTabListWidgetBase(UCommonTabListWidgetBase *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UCommonTabListWidgetBase__6B_;
  pFVar1 = (this->PrevTabActionHandle).CachedDebugActionName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NextTabActionHandle).CachedDebugActionName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FUserWidgetPool::~FUserWidgetPool(&this->TabButtonWidgetPool);
  *(undefined4 *)&(this->RegisteredTabsByID).field_0x48 = 0;
  pvVar2 = *(void **)&(this->RegisteredTabsByID).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FCommonRegisteredTabInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FCommonRegisteredTabInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FCommonRegisteredTabInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RegisteredTabsByID);
  pvVar2 = *(void **)&(this->OnTabListRebuilt).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTabListRebuilt);
  pvVar2 = *(void **)&(this->OnTabButtonRemoval).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTabButtonRemoval);
  pvVar2 = *(void **)&(this->OnTabButtonCreation).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTabButtonCreation);
  pvVar2 = *(void **)&(this->OnTabSelected).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTabSelected);
  UCommonUserWidget::~UCommonUserWidget((UCommonUserWidget *)this);
  return;
}

// DeferredRebuildTabList @ 14a7d2d10

bool __thiscall
UCommonTabListWidgetBase::DeferredRebuildTabList(UCommonTabListWidgetBase *this,float param_1)

{
  this->bPendingRebuild = false;
  RebuildTabList(this);
  return false;
}

// DisableTabWithReason @ 14a7d3d70

void __thiscall
UCommonTabListWidgetBase::DisableTabWithReason
          (UCommonTabListWidgetBase *this,FName param_1,FText *param_2)

{
  undefined1 *puVar1;
  TMap<FName,FCommonRegisteredTabInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  ITextData *pIVar7;
  ITextData *pIVar8;
  code *pcVar9;
  TMap<FName,FCommonRegisteredTabInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>_>
  *pTVar10;
  bool bVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  undefined1 local_a4 [4];
  TMap<FName,FCommonRegisteredTabInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>_>
  *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TMap<FName,FCommonRegisteredTabInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iStack_98 = 0;
  puVar1 = &(this->RegisteredTabsByID).field_0x10;
  iVar4 = *(int *)&(this->RegisteredTabsByID).field_0x28;
  pTVar2 = &this->RegisteredTabsByID;
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&(this->RegisteredTabsByID).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar13 = *puVar16;
    while (uVar13 == 0) {
      lVar12 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_14a7d3e1e;
      uVar13 = puVar16[lVar12 + 1];
    }
    uStack_94 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uStack_94 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iStack_84 = (int)lVar12 + -1 + local_80;
    if (iVar4 < iStack_84) {
      iStack_84 = iVar4;
    }
  }
LAB_14a7d3e1e:
  iStack_78 = *(int *)&(this->RegisteredTabsByID).field_0x8 -
              *(int *)&(this->RegisteredTabsByID).field_0x34;
  uVar13 = *(uint *)&(this->RegisteredTabsByID).field_0x28;
  uStack_88 = 0xffffffff;
  uVar17 = uVar13 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_a0 = pTVar2;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_70 = pTVar2;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar5 = *(uint *)&(this->RegisteredTabsByID).field_0x28;
  if (uVar13 != uVar5) {
    puVar15 = *(undefined1 **)&(this->RegisteredTabsByID).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar14;
      uVar17 = uVar17 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14a7d3f30;
      uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar13 = (int)lVar12 + -1 + uVar17;
    if ((int)uVar5 < (int)uVar13) {
      uVar13 = uVar5;
    }
  }
LAB_14a7d3f30:
  do {
    pTVar10 = local_70;
    if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FCommonRegisteredTabInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_68.CurrentBitIndex == uVar13) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar10 == pTVar2))
    {
      return;
    }
    lVar12 = *(longlong *)pTVar10;
    if (*(FName *)(lVar12 + (longlong)TStack_68.CurrentBitIndex * 0x30) == param_1) {
      plVar6 = *(longlong **)(lVar12 + 0x18 + (longlong)TStack_68.CurrentBitIndex * 0x30);
      if (plVar6 != (longlong *)0x0) {
        pIVar7 = (ITextData *)plVar6[0xe0];
        pIVar8 = (param_2->TextData).Reference;
        if (pIVar7 != pIVar8) {
          plVar6[0xe0] = (longlong)pIVar8;
          if (pIVar8 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar8 + 8))(pIVar8,local_a4);
          }
          if (pIVar7 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7);
          }
        }
        *(uint *)(plVar6 + 0xe1) = param_2->Flags;
        (**(code **)(*plVar6 + 0x2b8))(plVar6,0);
        return;
      }
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<8444838673911906654>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonTabListWidgetBase.cpp"
                          ,0x15e,"TabPair.Value.TabButton");
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// FOnTabButtonCreation_DelegateWrapper @ 14a7db640

void __cdecl
UCommonTabListWidgetBase::FOnTabButtonCreation_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FName param_2,
          UCommonButtonBase *param_3)

{
  FName local_18;
  UCommonButtonBase *local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  return;
}

// FOnTabButtonRemoval_DelegateWrapper @ 14a7db670

void __cdecl
UCommonTabListWidgetBase::FOnTabButtonRemoval_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FName param_2,
          UCommonButtonBase *param_3)

{
  FName local_18;
  UCommonButtonBase *local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  return;
}

// FOnTabListRebuilt_DelegateWrapper @ 14a7db6a0

void __cdecl
UCommonTabListWidgetBase::FOnTabListRebuilt_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// FOnTabSelected_DelegateWrapper @ 14a7db6b0

void __cdecl
UCommonTabListWidgetBase::FOnTabSelected_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FName param_2)

{
  FName local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// GetLinkedSwitcher @ 14a7e3340

UCommonAnimatedSwitcher * __thiscall
UCommonTabListWidgetBase::GetLinkedSwitcher(UCommonTabListWidgetBase *this)

{
  UCommonAnimatedSwitcher *pUVar1;
  
  pUVar1 = (UCommonAnimatedSwitcher *)FWeakObjectPtr::Get(&(this->LinkedSwitcher).WeakPtr);
  return pUVar1;
}

// GetPrivateStaticClass @ 14a7e6100

UClass * __cdecl UCommonTabListWidgetBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonTabListWidgetBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonTabListWidgetBase",
               &Z_Registration_Info_UClass_UCommonTabListWidgetBase.InnerSingleton,
               StaticRegisterNativesUCommonTabListWidgetBase,0x598,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UCommonTabListWidgetBase>,
               InternalVTableHelperCtorCaller<UCommonTabListWidgetBase>,local_res8,
               UCommonUserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonTabListWidgetBase.InnerSingleton;
}

// GetRegisteredTabsByID @ 14a7e7390

TMap<FName,FCommonRegisteredTabInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>_>
* __thiscall UCommonTabListWidgetBase::GetRegisteredTabsByID(UCommonTabListWidgetBase *this)

{
  return &this->RegisteredTabsByID;
}

// GetSelectedTabId @ 14a7e7840

FName __thiscall UCommonTabListWidgetBase::GetSelectedTabId(UCommonTabListWidgetBase *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FName FVar8;
  longlong lVar9;
  FName in_RDX;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  puVar1 = &(this->RegisteredTabsByID).field_0x10;
  *(undefined8 *)in_RDX = 0;
  iVar3 = *(int *)&(this->RegisteredTabsByID).field_0x28;
  uVar6 = 1;
  iVar13 = 0;
  iVar15 = 0;
  iVar7 = iVar13;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->RegisteredTabsByID).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    iVar15 = 0;
    iVar13 = 0;
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14a7e78ed;
      uVar12 = puVar16[lVar9 + 1];
    }
    uVar6 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar7 = iVar15 + -1 + local_res10;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14a7e78ed:
  uVar12 = *(uint *)&(this->RegisteredTabsByID).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar13);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->RegisteredTabsByID).field_0x8 -
                       *(int *)&(this->RegisteredTabsByID).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    FVar8 = (FName)(*pcVar4)();
    return FVar8;
  }
  uVar6 = *(uint *)&(this->RegisteredTabsByID).field_0x28;
  if (uVar12 != uVar6) {
    puVar14 = *(undefined1 **)&(this->RegisteredTabsByID).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14a7e79f0;
      uVar12 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar11;
    if ((int)uVar6 < (int)uVar12) {
      uVar12 = uVar6;
    }
  }
LAB_14a7e79f0:
  while( true ) {
    if (*(int *)&(this->RegisteredTabsByID).field_0x8 -
        *(int *)&(this->RegisteredTabsByID).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FCommonRegisteredTabInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    puVar10 = (undefined8 *)
              ((longlong)TStack_60.CurrentBitIndex * 0x30 + *(longlong *)&this->RegisteredTabsByID);
    lVar9 = puVar10[3];
    if ((lVar9 != 0) && ((*(byte *)(lVar9 + 0x4e1) & 1) != 0)) {
      *(undefined8 *)in_RDX = *puVar10;
      return in_RDX;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return in_RDX;
}

// GetTabButtonBaseByID @ 14a7e8b80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UCommonButtonBase * __thiscall
UCommonTabListWidgetBase::GetTabButtonBaseByID(UCommonTabListWidgetBase *this,FName param_1)

{
  FCommonRegisteredTabInfo *pFVar1;
  
  pFVar1 = TMapBase<FName,FCommonRegisteredTabInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>_>
           ::Find((TMapBase<FName,FCommonRegisteredTabInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>_>
                   *)&this->RegisteredTabsByID,param_1);
  if (pFVar1 != (FCommonRegisteredTabInfo *)0x0) {
    return (pFVar1->TabButton).field0_0x0.DebugPtr;
  }
  return (UCommonButtonBase *)0x0;
}

// GetTabCount @ 14a7e8bb0

int __thiscall UCommonTabListWidgetBase::GetTabCount(UCommonTabListWidgetBase *this)

{
  return *(int *)&(this->RegisteredTabsByID).field_0x8 -
         *(int *)&(this->RegisteredTabsByID).field_0x34;
}

// GetTabIdAtIndex @ 14a7e8bd0

/* WARNING: Type propagation algorithm not settling */

FName __thiscall
UCommonTabListWidgetBase::GetTabIdAtIndex(UCommonTabListWidgetBase *this,int param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FName FVar8;
  longlong lVar9;
  int iVar10;
  uint in_register_00000014;
  uint uVar11;
  uint uVar12;
  int in_R8D;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  int iVar17;
  undefined1 local_res18 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  FVar8.Number = in_register_00000014;
  FVar8.ComparisonIndex.Value = param_1;
  iVar15 = 0;
  *(undefined8 *)FVar8 = 0;
  iVar17 = *(int *)&(this->RegisteredTabsByID).field_0x8 -
           *(int *)&(this->RegisteredTabsByID).field_0x34;
  if (iVar17 <= in_R8D) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8444838673911906573>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonTabListWidgetBase.cpp"
                       ,0x10d,"Index < RegisteredTabsByID.Num()");
    if (!bVar5) {
      return FVar8;
    }
    pcVar4 = (code *)swi(3);
    FVar8 = (FName)(*pcVar4)();
    return FVar8;
  }
  uVar6 = 1;
  puVar1 = &(this->RegisteredTabsByID).field_0x10;
  iVar3 = *(int *)&(this->RegisteredTabsByID).field_0x28;
  iVar10 = 0;
  iVar7 = 0;
  iVar13 = iVar15;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->RegisteredTabsByID).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    iVar13 = 0;
    iVar15 = 0;
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar15;
      iVar13 = iVar13 + 0x20;
      iVar15 = iVar15 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) {
        iVar10 = *(int *)&(this->RegisteredTabsByID).field_0x28;
        iVar7 = iVar3;
        goto LAB_14a7e8cf4;
      }
      uVar12 = puVar16[lVar9 + 1];
    }
    iVar10 = *(int *)&(this->RegisteredTabsByID).field_0x28;
    uVar6 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar7 = iVar13 + -1 + (int)lVar9;
    if (iVar10 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14a7e8cf4:
  uVar12 = *(uint *)&(this->RegisteredTabsByID).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar15);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,iVar17);
  iVar15 = (int)uVar12 >> 5;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar10 < (int)uVar12)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    FVar8 = (FName)(*pcVar4)();
    return FVar8;
  }
  uVar6 = *(uint *)&(this->RegisteredTabsByID).field_0x28;
  if (uVar12 != uVar6) {
    puVar14 = *(undefined1 **)&(this->RegisteredTabsByID).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar15 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar15;
      uVar11 = uVar11 + 0x20;
      iVar15 = iVar15 + 1;
      uVar12 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14a7e8e00;
      uVar12 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar11;
    if ((int)uVar6 < (int)uVar12) {
      uVar12 = uVar6;
    }
  }
LAB_14a7e8e00:
  while( true ) {
    if (*(int *)&(this->RegisteredTabsByID).field_0x8 -
        *(int *)&(this->RegisteredTabsByID).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FCommonRegisteredTabInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    if (*(int *)(*(longlong *)&this->RegisteredTabsByID + 8 +
                (longlong)TStack_60.CurrentBitIndex * 0x30) == in_R8D) {
      *(undefined8 *)FVar8 =
           *(undefined8 *)
            (*(longlong *)&this->RegisteredTabsByID + (longlong)TStack_60.CurrentBitIndex * 0x30);
      return FVar8;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return FVar8;
}

// HandleNextTabAction @ 14a7ee1a0

void __thiscall UCommonTabListWidgetBase::HandleNextTabAction(UCommonTabListWidgetBase *this)

{
  UCommonButtonGroupBase *this_00;
  code *pcVar1;
  bool bVar2;
  
  this_00 = (this->TabButtonGroup).field0_0x0.DebugPtr;
  if (this_00 != (UCommonButtonGroupBase *)0x0) {
    UCommonButtonGroupBase::SelectNextButton(this_00,this->bShouldWrapNavigation);
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8444838673911906820>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonTabListWidgetBase.cpp"
                     ,0x204,"TabButtonGroup");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// HandleNextTabInputAction @ 14a7ee200

void __thiscall
UCommonTabListWidgetBase::HandleNextTabInputAction(UCommonTabListWidgetBase *this,bool *param_1)

{
  UCommonButtonGroupBase *this_00;
  code *pcVar1;
  bool bVar2;
  
  this_00 = (this->TabButtonGroup).field0_0x0.DebugPtr;
  if (this_00 != (UCommonButtonGroupBase *)0x0) {
    UCommonButtonGroupBase::SelectNextButton(this_00,this->bShouldWrapNavigation);
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8444838673911906820>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonTabListWidgetBase.cpp"
                     ,0x204,"TabButtonGroup");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// HandlePostLinkedSwitcherChanged @ 14a7ee870

void __thiscall
UCommonTabListWidgetBase::HandlePostLinkedSwitcherChanged(UCommonTabListWidgetBase *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UCommonTabListWidgetBase_HandlePostLinkedSwitcherChanged_BP);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014a7ee89d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// HandlePostLinkedSwitcherChanged_BP @ 14a7ee8b0

void __thiscall
UCommonTabListWidgetBase::HandlePostLinkedSwitcherChanged_BP(UCommonTabListWidgetBase *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UCommonTabListWidgetBase_HandlePostLinkedSwitcherChanged_BP);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014a7ee8dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// HandlePreLinkedSwitcherChanged @ 14a7ee8f0

void __thiscall
UCommonTabListWidgetBase::HandlePreLinkedSwitcherChanged(UCommonTabListWidgetBase *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UCommonTabListWidgetBase_HandlePreLinkedSwitcherChanged_BP);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014a7ee91d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// HandlePreLinkedSwitcherChanged_BP @ 14a7ee930

void __thiscall
UCommonTabListWidgetBase::HandlePreLinkedSwitcherChanged_BP(UCommonTabListWidgetBase *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UCommonTabListWidgetBase_HandlePreLinkedSwitcherChanged_BP);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014a7ee95d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// HandlePreviousTabAction @ 14a7ee970

void __thiscall UCommonTabListWidgetBase::HandlePreviousTabAction(UCommonTabListWidgetBase *this)

{
  UCommonButtonGroupBase *this_00;
  code *pcVar1;
  bool bVar2;
  
  this_00 = (this->TabButtonGroup).field0_0x0.DebugPtr;
  if (this_00 != (UCommonButtonGroupBase *)0x0) {
    UCommonButtonGroupBase::SelectPreviousButton(this_00,this->bShouldWrapNavigation);
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8444838673911906833>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonTabListWidgetBase.cpp"
                     ,0x211,"TabButtonGroup");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// HandlePreviousTabInputAction @ 14a7ee9d0

void __thiscall
UCommonTabListWidgetBase::HandlePreviousTabInputAction(UCommonTabListWidgetBase *this,bool *param_1)

{
  UCommonButtonGroupBase *this_00;
  code *pcVar1;
  bool bVar2;
  
  this_00 = (this->TabButtonGroup).field0_0x0.DebugPtr;
  if (this_00 != (UCommonButtonGroupBase *)0x0) {
    UCommonButtonGroupBase::SelectPreviousButton(this_00,this->bShouldWrapNavigation);
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8444838673911906833>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonTabListWidgetBase.cpp"
                     ,0x211,"TabButtonGroup");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// HandleTabButtonSelected @ 14a7f01d0

void __thiscall
UCommonTabListWidgetBase::HandleTabButtonSelected
          (UCommonTabListWidgetBase *this,UCommonButtonBase *param_1,int param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FName,FCommonRegisteredTabInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>_>
  *pTVar6;
  bool bVar7;
  UObject *pUVar8;
  longlong lVar9;
  int iVar10;
  FName *pFVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  FName local_a8;
  TMap<FName,FCommonRegisteredTabInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>_>
  *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TMap<FName,FCommonRegisteredTabInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iStack_98 = 0;
  puVar1 = &(this->RegisteredTabsByID).field_0x10;
  iVar3 = *(int *)&(this->RegisteredTabsByID).field_0x28;
  local_a0 = &this->RegisteredTabsByID;
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->RegisteredTabsByID).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar12 = *puVar14;
    while (uVar12 == 0) {
      lVar9 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_14a7f027e;
      uVar12 = puVar14[lVar9 + 1];
    }
    uStack_94 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_94 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStack_84 = (int)lVar9 + -1 + local_80;
    if (iVar3 < iStack_84) {
      iStack_84 = iVar3;
    }
  }
LAB_14a7f027e:
  uVar12 = *(uint *)&(this->RegisteredTabsByID).field_0x28;
  iStack_78 = *(int *)&(this->RegisteredTabsByID).field_0x8 -
              *(int *)&(this->RegisteredTabsByID).field_0x34;
  uStack_88 = 0xffffffff;
  uVar15 = uVar12 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_70 = local_a0;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(this->RegisteredTabsByID).field_0x28;
  if (uVar12 != uVar4) {
    puVar13 = *(undefined1 **)&(this->RegisteredTabsByID).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar15 = uVar15 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14a7f037b;
      uVar12 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_14a7f037b:
  while( true ) {
    pTVar6 = local_70;
    if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FCommonRegisteredTabInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_68.CurrentBitIndex == uVar12) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar6 == &this->RegisteredTabsByID)) break;
    pFVar11 = (FName *)(*(longlong *)pTVar6 + (longlong)TStack_68.CurrentBitIndex * 0x30);
    if (pFVar11[3] == (FName)0x0) {
      bVar7 = param_1 == (UCommonButtonBase *)0x0;
    }
    else {
      bVar7 = pFVar11[3] == (FName)param_1;
    }
    if (bVar7) {
      this->ActiveTabID = *pFVar11;
      if ((pFVar11[4] != (FName)0x0) &&
         (bVar7 = FWeakObjectPtr::IsValid(&(this->LinkedSwitcher).WeakPtr), bVar7)) {
        pUVar8 = FWeakObjectPtr::Get(&(this->LinkedSwitcher).WeakPtr);
        (**(code **)(*(longlong *)pUVar8 + 0x338))(pUVar8,pFVar11[4]);
      }
      local_a8 = *pFVar11;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnTabSelected,
                 &local_a8);
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// HandleTabCreation @ 14a7f0480

void __thiscall
UCommonTabListWidgetBase::HandleTabCreation
          (UCommonTabListWidgetBase *this,FName param_1,UCommonButtonBase *param_2)

{
  UFunction *this_00;
  UClass *pUVar1;
  FName local_18;
  UCommonButtonBase *local_10;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UCommonTabListWidgetBase_HandleTabCreation);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_18 = param_1;
    local_10 = param_2;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_18);
  }
  else {
    (**(code **)(this->_padding_ + 0x4e8))(this,param_1,param_2);
  }
  return;
}

// HandleTabCreation_Implementation @ 14a7f0510

void __thiscall
UCommonTabListWidgetBase::HandleTabCreation_Implementation
          (UCommonTabListWidgetBase *this,FName param_1,UCommonButtonBase *param_2)

{
  return;
}

// HandleTabRemoval @ 14a7f0520

void __thiscall
UCommonTabListWidgetBase::HandleTabRemoval
          (UCommonTabListWidgetBase *this,FName param_1,UCommonButtonBase *param_2)

{
  UFunction *this_00;
  UClass *pUVar1;
  FName local_18;
  UCommonButtonBase *local_10;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UCommonTabListWidgetBase_HandleTabRemoval);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_18 = param_1;
    local_10 = param_2;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_18);
  }
  else {
    (**(code **)(this->_padding_ + 0x4e0))(this,param_1,param_2);
  }
  return;
}

// HandleTabRemoval_Implementation @ 14a7f05b0

void __thiscall
UCommonTabListWidgetBase::HandleTabRemoval_Implementation
          (UCommonTabListWidgetBase *this,FName param_1,UCommonButtonBase *param_2)

{
  return;
}

// HasTabContentWidget @ 14a7f2050

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UCommonTabListWidgetBase::HasTabContentWidget(UCommonTabListWidgetBase *this,FName param_1)

{
  FCommonRegisteredTabInfo *pFVar1;
  
  pFVar1 = TMapBase<FName,FCommonRegisteredTabInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>_>
           ::Find((TMapBase<FName,FCommonRegisteredTabInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>_>
                   *)&this->RegisteredTabsByID,param_1);
  if ((pFVar1 != (FCommonRegisteredTabInfo *)0x0) &&
     ((pFVar1->ContentInstance).field0_0x0.DebugPtr != (UWidget *)0x0)) {
    return true;
  }
  return false;
}

// IsRebuildingList @ 14a7f6680

bool __thiscall UCommonTabListWidgetBase::IsRebuildingList(UCommonTabListWidgetBase *this)

{
  return this->bIsRebuildingList;
}

// NativeConstruct @ 14a7f9660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UCommonTabListWidgetBase::NativeConstruct(UCommonTabListWidgetBase *this)

{
  UUserWidget::NativeConstruct((UUserWidget *)this);
  if (this->bAutoListenForInput != false) {
                    /* WARNING: Could not recover jumptable at 0x00014a7f9684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x4f8))(this,1);
    return;
  }
  return;
}

// NativeDestruct @ 14a7f98a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UCommonTabListWidgetBase::NativeDestruct(UCommonTabListWidgetBase *this)

{
  int iVar1;
  UCommonButtonGroupBase *pUVar2;
  bool bVar3;
  ULocalPlayer *this_00;
  UCommonUIActionRouterBase *this_01;
  UCommonButtonBase *this_02;
  
  if (((0 < (int)this->_padding_) &&
      (this_00 = (ULocalPlayer *)(**(code **)(this->_padding_ + 0x2e0))(),
      this_00 != (ULocalPlayer *)0x0)) &&
     (this_01 = ULocalPlayer::GetSubsystem<UCommonUIActionRouterBase>(this_00),
     this_01 != (UCommonUIActionRouterBase *)0x0)) {
    UCommonUIActionRouterBase::NotifyUserWidgetDestructed(this_01,(UCommonUserWidget *)this);
  }
  UUserWidget::NativeDestruct((UUserWidget *)this);
  (**(code **)(this->_padding_ + 0x4f8))(this);
  (this->ActiveTabID).ComparisonIndex = 0;
  (this->ActiveTabID).Number = 0;
  pUVar2 = (this->TabButtonGroup).field0_0x0.DebugPtr;
  if ((pUVar2 != (UCommonButtonGroupBase *)0x0) && (pUVar2->bSelectionRequired != false)) {
    pUVar2->bSelectionRequired = false;
  }
  RemoveAllTabs(this);
  pUVar2 = (this->TabButtonGroup).field0_0x0.DebugPtr;
  if ((((pUVar2 != (UCommonButtonGroupBase *)0x0) && (pUVar2->bSelectionRequired != true)) &&
      ((iVar1 = (pUVar2->Buttons).ArrayNum, pUVar2->bSelectionRequired = true, 0 < iVar1 &&
       (((pUVar2->SelectedButtonIndex < 0 &&
         (this_02 = UCommonButtonGroupBase::GetButtonBaseAtIndex(pUVar2,0),
         this_02 != (UCommonButtonBase *)0x0)) && (this_02->bSelected == 0)))))) &&
     (bVar3 = UWidget::GetIsEnabled((UWidget *)this_02), bVar3)) {
    pUVar2->SelectedButtonIndex = 0;
    UCommonButtonBase::SetSelectedInternal(this_02,true,true,true);
  }
  pUVar2 = (this->TabButtonGroup).field0_0x0.DebugPtr;
  if (pUVar2 == (UCommonButtonGroupBase *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014a7f99c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar2->_padding_ + 0x2c8))();
  return;
}

// NativeOnInitialized @ 14a7fae50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UCommonTabListWidgetBase::NativeOnInitialized(UCommonTabListWidgetBase *this)

{
  code *pcVar1;
  bool bVar2;
  UCommonButtonGroupBase *pUVar3;
  UCommonButtonBase *this_00;
  char *pcVar4;
  UObject *this_01;
  UFunction *pUVar5;
  char *pcVar6;
  <lambda_1> local_res8 [8];
  FName local_res10;
  FName local_res18;
  UCommonTabListWidgetBase *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FWeakObjectPtr local_b0;
  FName local_a8;
  FName *local_a0;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_98;
  FDestructionSentinel local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  
  UUserWidget::NativeOnInitialized((UUserWidget *)this);
  pUVar3 = NewObject<UCommonButtonGroupBase>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar3 == (UCommonButtonGroupBase *)0x0)) {
    (this->TabButtonGroup).field0_0x0.DebugPtr = pUVar3;
    if (pUVar3 != (UCommonButtonGroupBase *)0x0) goto LAB_14a7faea8;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
    (this->TabButtonGroup).field0_0x0.DebugPtr = pUVar3;
LAB_14a7faea8:
    if (((((pUVar3->bSelectionRequired != true) &&
          (pUVar3->bSelectionRequired = true, 0 < (pUVar3->Buttons).ArrayNum)) &&
         (pUVar3->SelectedButtonIndex < 0)) &&
        ((this_00 = UCommonButtonGroupBase::GetButtonBaseAtIndex(pUVar3,0),
         this_00 != (UCommonButtonBase *)0x0 && (this_00->bSelected == 0)))) &&
       (bVar2 = UWidget::GetIsEnabled((UWidget *)this_00), bVar2)) {
      pUVar3->SelectedButtonIndex = 0;
      UCommonButtonBase::SetSelectedInternal(this_00,true,true,true);
    }
  }
  pUVar3 = (this->TabButtonGroup).field0_0x0.DebugPtr;
  pcVar4 = strstr("&UCommonTabListWidgetBase::HandleTabButtonSelected","::");
  if (pcVar4 == (char *)0x0) {
LAB_14a7faf5b:
    pcVar6 = &DAT_00000002;
LAB_14a7faf60:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar6 = pcVar4;
      pcVar4 = strstr(pcVar6 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar6 == (char *)0x0) goto LAB_14a7faf5b;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14a7faf60;
  }
  ::FName::FName(&local_res18,pcVar6);
  local_res10 = local_res18;
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.ObjectIndex = 0;
  local_b0.ObjectSerialNumber = 0;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  local_res20 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UCommonTabListWidgetBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_res20);
  local_a8 = local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_70);
  if ((local_a8 == (FName)0x0) ||
     (this_01 = FWeakObjectPtr::Get(&local_b0), this_01 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
  }
  else {
    pUVar5 = UObject::FindFunction(this_01,local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
    if (pUVar5 != (UFunction *)0x0) goto LAB_14a7fb037;
  }
  local_a0 = &local_res10;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UCommonButtonBase_*,int>::
  __Internal_BindDynamic<UCommonTabListWidgetBase>'::__l2::<lambda_1>::operator()(&local_a0);
LAB_14a7fb037:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_58);
  local_98.Object = local_b0;
  local_98.FunctionName = local_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pUVar3->OnSelectedButtonBaseChanged,(FWriteAccessScope *)&local_88);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(pUVar3->OnSelectedButtonBaseChanged).field_0x8,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &pUVar3->OnSelectedButtonBaseChanged,&local_98);
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  return;
}

// RebuildTabList @ 14a804d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCommonTabListWidgetBase::RebuildTabList(UCommonTabListWidgetBase *this)

{
  ulonglong uVar1;
  UCommonButtonGroupBase *pUVar2;
  FName FVar3;
  FName FVar4;
  code *pcVar5;
  longlong *plVar6;
  bool bVar7;
  UCommonButtonBase *this_00;
  byte bVar8;
  longlong lVar9;
  int iVar10;
  FName *pFVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [8];
  longlong *local_100;
  uint uStack_f8;
  uint uStack_f4;
  TBitArray<FDefaultBitArrayAllocator> *local_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  uint local_e0;
  uint uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  FName local_c8;
  longlong *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  this->bIsRebuildingList = true;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_68 = (uint *)0x0;
  uVar12 = 0;
  local_60 = 0;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  TSet<TTuple<FName,FCommonRegisteredTabInfo>,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,FCommonRegisteredTabInfo>,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>,FDefaultSetAllocator>
               *)local_88,
              (TSet<TTuple<FName,FCommonRegisteredTabInfo>,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>,FDefaultSetAllocator>
               *)&this->RegisteredTabsByID);
  pUVar2 = (this->TabButtonGroup).field0_0x0.DebugPtr;
  FVar3 = this->ActiveTabID;
  if ((pUVar2 != (UCommonButtonGroupBase *)0x0) && (pUVar2->bSelectionRequired != false)) {
    pUVar2->bSelectionRequired = false;
  }
  UCommonButtonGroupBase::DeselectAll((this->TabButtonGroup).field0_0x0.DebugPtr);
  RemoveAllTabs(this);
  uVar15 = local_60;
  uStack_f4 = 1;
  local_e0 = 0;
  uStack_e4 = local_e0;
  if (local_60 != 0) {
    puVar13 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar13 = local_68;
    }
    uVar14 = *puVar13;
    local_e0 = 0;
    uVar12 = 0;
    while (uVar14 == 0) {
      lVar9 = (longlong)(int)uVar12;
      local_e0 = local_e0 + 0x20;
      uVar12 = uVar12 + 1;
      uStack_e4 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar12)
      goto LAB_14a804ea1;
      uVar14 = puVar13[lVar9 + 1];
    }
    uStack_f4 = -uVar14 & uVar14;
    uVar1 = (ulonglong)uStack_f4 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_d0 = (int)lVar9;
    uStack_e4 = local_d0 + -1 + local_e0;
    if ((int)local_60 < (int)uStack_e4) {
      uStack_e4 = local_60;
    }
  }
LAB_14a804ea1:
  local_100 = (longlong *)local_88;
  local_f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  uVar14 = local_60 & 0xffffffe0;
  iStack_d8 = local_88._8_4_ - local_54;
  uStack_e8 = 0xffffffff;
  TStack_b8.CurrentBitIndex = uStack_e4;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  TStack_b8._padding_ = CONCAT44(uStack_f4,uVar12);
  iVar10 = (int)local_60 >> 5;
  TStack_b8._28_4_ = uStack_e4;
  TStack_b8.BaseBitIndex = local_e0;
  uStack_98 = CONCAT44(uStack_d4,iStack_d8);
  bVar8 = (byte)local_60;
  uStack_f8 = uVar12;
  uStack_dc = uStack_e4;
  local_c0 = local_100;
  TStack_b8.Array = local_f0;
  if (((int)local_60 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar15 != local_60) {
    puVar13 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar13 = local_68;
    }
    uVar12 = -1 << (bVar8 & 0x1f) & puVar13[iVar10];
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar15 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
      goto LAB_14a804faf;
      uVar12 = puVar13[lVar9 + 1];
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar15 = (uVar14 - 1) + (int)lVar9;
    if ((int)local_60 < (int)uVar15) {
      uVar15 = local_60;
    }
  }
LAB_14a804faf:
  while( true ) {
    plVar6 = local_c0;
    if ((int)local_c0[1] - *(int *)((longlong)local_c0 + 0x34) != (int)uStack_98) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FCommonRegisteredTabInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_108);
    }
    if (((TStack_b8.CurrentBitIndex == uVar15) &&
        (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (plVar6 == (longlong *)local_88)) break;
    pFVar11 = (FName *)(*plVar6 + (longlong)TStack_b8.CurrentBitIndex * 0x30);
    local_c8 = pFVar11[2];
    uVar12 = pFVar11[1].ComparisonIndex.Value;
    FVar4 = pFVar11[4];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c8 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_c8);
    }
    RegisterTab(this,*pFVar11,(TSubclassOf<UCommonButtonBase>)&local_c8,(UWidget *)FVar4,uVar12);
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  }
  this->bIsRebuildingList = false;
  SelectTabByID(this,FVar3,true);
  pUVar2 = (this->TabButtonGroup).field0_0x0.DebugPtr;
  if (((((pUVar2 != (UCommonButtonGroupBase *)0x0) && (pUVar2->bSelectionRequired != true)) &&
       ((iVar10 = (pUVar2->Buttons).ArrayNum, pUVar2->bSelectionRequired = true, 0 < iVar10 &&
        ((pUVar2->SelectedButtonIndex < 0 &&
         (this_00 = UCommonButtonGroupBase::GetButtonBaseAtIndex(pUVar2,0),
         this_00 != (UCommonButtonBase *)0x0)))))) && (this_00->bSelected == 0)) &&
     (bVar7 = UWidget::GetIsEnabled((UWidget *)this_00), bVar7)) {
    pUVar2->SelectedButtonIndex = 0;
    UCommonButtonBase::SetSelectedInternal(this_00,true,true,true);
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnTabListRebuilt,
             (void *)0x0);
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FCommonRegisteredTabInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FCommonRegisteredTabInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FCommonRegisteredTabInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  return;
}

// RegisterTab @ 14a80f400

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UCommonTabListWidgetBase::RegisterTab
          (UCommonTabListWidgetBase *this,FName param_1,TSubclassOf<UCommonButtonBase> param_2,
          UWidget *param_3,int param_4)

{
  int *piVar1;
  TMap<FName,FCommonRegisteredTabInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  UObject *pUVar6;
  UCommonButtonGroupBase *pUVar7;
  code *pcVar8;
  longlong *plVar9;
  FName FVar10;
  TObjectPtr<UClass>_u_0 TVar11;
  UWidget *pUVar12;
  bool bVar13;
  undefined1 uVar14;
  bool bVar15;
  uint uVar16;
  UClass *pUVar17;
  UCommonButtonBase *pUVar18;
  TSubclassOf<UWidget> TVar19;
  UFunction *this_00;
  FTSTicker *this_01;
  undefined8 *puVar20;
  ulong64 uVar21;
  longlong lVar22;
  undefined1 *puVar23;
  int iVar24;
  int iVar25;
  uint *puVar26;
  int iVar27;
  uint uVar28;
  undefined1 local_res8 [8];
  FName local_res10;
  TObjectPtr<UClass>_u_0 local_res18;
  UWidget *local_res20;
  undefined1 local_1c8;
  undefined1 local_1c7 [3];
  undefined1 local_1c4 [12];
  FDelegateAllocation local_1b8;
  code *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  TMap<FName,FCommonRegisteredTabInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>_>
  *local_198;
  int iStack_190;
  uint uStack_18c;
  undefined1 *local_188;
  undefined4 uStack_180;
  int iStack_17c;
  int local_178;
  int iStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  int local_168;
  UObject *local_160;
  UCommonTabListWidgetBase *local_158;
  TMap<FName,FCommonRegisteredTabInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>_>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  int local_120 [2];
  longlong local_118;
  UCommonButtonBase *local_110;
  UWidget *local_108;
  code *local_100;
  undefined1 *local_f8;
  FName *local_f0;
  int *local_e8;
  FName local_e0;
  UCommonButtonBase *local_d8;
  FName local_d0;
  UCommonButtonBase *local_c8;
  TWeakPtr<FTSTicker::FElement,1> local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FDelegateAllocation *local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  
  pTVar2 = &this->RegisteredTabsByID;
  bVar13 = true;
  local_res10 = param_1;
  local_res18 = (TObjectPtr<UClass>_u_0)param_2.Class.field0_0x0;
  local_res20 = param_3;
  uVar16 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->RegisteredTabsByID).field_0x8 !=
      *(int *)&(this->RegisteredTabsByID).field_0x34) {
    puVar23 = *(undefined1 **)&(this->RegisteredTabsByID).field_0x40;
    if (puVar23 == (undefined1 *)0x0) {
      puVar23 = &(this->RegisteredTabsByID).field_0x38;
    }
    iVar27 = *(int *)(puVar23 +
                     (ulonglong)
                     (*(int *)&(this->RegisteredTabsByID).field_0x48 - 1U & param_1.Number + uVar16)
                     * 4);
    if (iVar27 != -1) {
      do {
        if (*(FName *)(*(longlong *)pTVar2 + (longlong)iVar27 * 0x30) == param_1) {
          bVar13 = false;
          if (2 < (byte)LogCommonUI._0_1_) {
            ::FName::ToString(&local_res10,&local_78);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
          }
          break;
        }
        iVar27 = *(int *)(*(longlong *)pTVar2 + 0x28 + (longlong)iVar27 * 0x30);
      } while (iVar27 != -1);
    }
  }
  lVar22 = *(longlong *)param_2.Class.field0_0x0;
  if ((lVar22 != 0) && (pUVar17 = UCommonButtonBase::StaticClass(), pUVar17 != (UClass *)0x0)) {
    iVar27 = (int)pUVar17->_padding_;
    if ((*(int *)(lVar22 + 0x38) < iVar27) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar22 + 0x30) + (longlong)iVar27 * 8) !=
        &pUVar17->_padding_)) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    if ((bVar15) && (*(longlong *)param_2.Class.field0_0x0 != 0)) goto LAB_14a80f584;
  }
  bVar13 = false;
  if (2 < (byte)LogCommonUI._0_1_) {
    ::FName::ToString(&local_res10,&local_68);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
LAB_14a80f584:
  if ((this->TabButtonGroup).field0_0x0.DebugPtr == (UCommonButtonGroupBase *)0x0) {
    if (2 < (byte)LogCommonUI._0_1_) {
      ::FName::ToString(&local_res10,&local_58);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCommonUI);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (bVar13) {
    pUVar6 = *(UObject **)param_2.Class.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    local_f8 = &local_1c8;
    local_100 = UE::Core::Private::Function::
                TFunctionRefCaller<`FUserWidgetPool::GetOrCreateInstance<UCommonButtonBase>'::__l2::<lambda_1>,TSharedPtr<SObjectWidget,1>,UUserWidget_*,TSharedRef<SWidget,1>_>
                ::Call;
    local_160 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    pUVar18 = FUserWidgetPool::AddActiveWidgetInternal<UCommonButtonBase>
                        (&this->TabButtonWidgetPool,(TSubclassOf<UCommonButtonBase>)&local_160,
                         (TFunctionRef<TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                          *)&local_100);
    if (pUVar18 == (UCommonButtonBase *)0x0) {
      local_res8[0] = 0;
      bVar13 = `UCommonTabListWidgetBase::RegisterTab'::__l69::<lambda_1>::operator()(local_res8);
      if (!bVar13) {
        return false;
      }
    }
    iVar25 = *(int *)&(this->RegisteredTabsByID).field_0x8 -
             *(int *)&(this->RegisteredTabsByID).field_0x34;
    iVar27 = iVar25;
    if (param_4 != -1) {
      iVar4 = iVar25;
      if (param_4 < iVar25) {
        iVar4 = param_4;
      }
      iVar27 = 0;
      if (0 < iVar4) {
        iVar27 = iVar4;
      }
    }
    if ((this->bIsRebuildingList == false) && (iVar27 < iVar25)) {
      iStack_190 = 0;
      iVar4 = *(int *)&(this->RegisteredTabsByID).field_0x28;
      local_178 = 0;
      uStack_18c = 1;
      iStack_17c = 0;
      if (iVar4 != 0) {
        puVar26 = *(uint **)&(this->RegisteredTabsByID).field_0x20;
        if (puVar26 == (uint *)0x0) {
          puVar26 = (uint *)&(this->RegisteredTabsByID).field_0x10;
        }
        uVar16 = *puVar26;
        while (uVar16 == 0) {
          lVar22 = (longlong)iStack_190;
          local_178 = local_178 + 0x20;
          iStack_190 = iStack_190 + 1;
          iStack_17c = iVar4;
          if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_190)
          goto LAB_14a80f75a;
          uVar16 = puVar26[lVar22 + 1];
        }
        uStack_18c = -uVar16 & uVar16;
        uVar3 = (ulonglong)uStack_18c * 2 + 1;
        lVar22 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        local_168 = (int)lVar22;
        iStack_17c = local_178 + -1 + local_168;
        if (iVar4 < iStack_17c) {
          iStack_17c = iVar4;
        }
      }
LAB_14a80f75a:
      local_188 = &(this->RegisteredTabsByID).field_0x10;
      uVar16 = *(uint *)&(this->RegisteredTabsByID).field_0x28;
      uStack_180 = 0xffffffff;
      uVar28 = uVar16 & 0xffffffe0;
      TStack_148._padding_ = CONCAT44(uStack_18c,iStack_190);
      TStack_148.CurrentBitIndex = iStack_17c;
      TStack_148.UnvisitedBitMask = 0xffffffff;
      TStack_148._28_4_ = iStack_17c;
      TStack_148.BaseBitIndex = local_178;
      uStack_128 = CONCAT44(uStack_16c,iVar25);
      iVar24 = (int)uVar16 >> 5;
      local_198 = pTVar2;
      iStack_174 = iStack_17c;
      iStack_170 = iVar25;
      local_150 = pTVar2;
      TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_188;
      if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar13)) {
        pcVar8 = (code *)swi(3);
        uVar14 = (*pcVar8)();
        return (bool)uVar14;
      }
      uVar5 = *(uint *)&(this->RegisteredTabsByID).field_0x28;
      if (uVar16 != uVar5) {
        puVar23 = *(undefined1 **)&(this->RegisteredTabsByID).field_0x20;
        if (puVar23 == (undefined1 *)0x0) {
          puVar23 = &(this->RegisteredTabsByID).field_0x10;
        }
        uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar24 * 4);
        while (uVar16 == 0) {
          lVar22 = (longlong)iVar24;
          uVar28 = uVar28 + 0x20;
          iVar24 = iVar24 + 1;
          uVar16 = uVar5;
          if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
          goto LAB_14a80f870;
          uVar16 = *(uint *)(puVar23 + lVar22 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
        lVar22 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        uVar16 = (int)lVar22 + -1 + uVar28;
        if ((int)uVar5 < (int)uVar16) {
          uVar16 = uVar5;
        }
      }
LAB_14a80f870:
      while( true ) {
        pTVar2 = local_150;
        if (*(int *)&local_150->field_0x8 - *(int *)&local_150->field_0x34 != (int)uStack_128) {
          `TSparseArray<TSparseSetElement<TTuple<FName,FCommonRegisteredTabInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1c7);
        }
        if (((TStack_148.CurrentBitIndex == uVar16) &&
            (TStack_148.Array ==
             (TBitArray<FDefaultBitArrayAllocator> *)&(this->RegisteredTabsByID).field_0x10)) &&
           (pTVar2 == &this->RegisteredTabsByID)) break;
        lVar22 = *(longlong *)pTVar2;
        iVar25 = *(int *)(lVar22 + 8 + (longlong)TStack_148.CurrentBitIndex * 0x30);
        if (iVar27 <= iVar25) {
          *(int *)(lVar22 + 8 + (longlong)TStack_148.CurrentBitIndex * 0x30) = iVar25 + 1;
        }
        TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
      }
      bVar13 = true;
    }
    else {
      bVar13 = false;
    }
    TVar11 = local_res18;
    local_120[0] = iVar27;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)(local_res18.DebugPtr)->_padding_ != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)(local_res18.DebugPtr)->_padding_);
    }
    local_118 = (TVar11.DebugPtr)->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar18 != (UCommonButtonBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar18);
    }
    pUVar12 = local_res20;
    local_110 = pUVar18;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UWidget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    local_f0 = &local_res10;
    local_108 = pUVar12;
    local_e8 = local_120;
    TSet<TTuple<FName,FCommonRegisteredTabInfo>,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FCommonRegisteredTabInfo_const_&>_>
              ((TSet<TTuple<FName,FCommonRegisteredTabInfo>,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>,FDefaultSetAllocator>
                *)&this->RegisteredTabsByID,
               (TPairInitializer<FName_const_&,FCommonRegisteredTabInfo_const_&> *)local_1c4,
               (bool *)&local_f0);
    if (pUVar18->bSelectable == '\0') {
      pUVar18->field_0x4d0 = pUVar18->field_0x4d0 | 4;
    }
    UCommonButtonBase::SetIsToggleable(pUVar18,false);
    pUVar7 = (this->TabButtonGroup).field0_0x0.DebugPtr;
    TVar19.Class.field0_0x0 =
         (TObjectPtr<UClass>)(**(code **)(pUVar7->_padding_ + 0x2b0))(pUVar7,&local_1a8);
    bVar15 = UObjectBaseUtility::IsA<TSubclassOf<UWidget>_>((UObjectBaseUtility *)pUVar18,TVar19);
    if (bVar15) {
      (**(code **)(pUVar7->_padding_ + 0x2b8))(pUVar7,pUVar18);
    }
    pUVar18 = local_110;
    FVar10 = local_res10;
    this_00 = UObject::FindFunctionChecked
                        ((UObject *)this,NAME_UCommonTabListWidgetBase_HandleTabCreation);
    pUVar17 = UField::GetOwnerClass((UField *)this_00);
    if ((pUVar17->ClassFlags & CLASS_Native) == CLASS_None) {
      local_e0 = FVar10;
      local_d8 = pUVar18;
      (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_e0);
    }
    else {
      (**(code **)(this->_padding_ + 0x4e8))(this,FVar10,pUVar18);
    }
    local_d0 = local_res10;
    local_c8 = local_110;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnTabButtonCreation,
               &local_d0);
    if (bVar13) {
      if (this->bDeferRebuildingTabList == false) {
        RebuildTabList(this);
      }
      else if (this->bPendingRebuild == false) {
        this->bPendingRebuild = true;
        this_01 = FTSTicker::GetCoreTicker();
        uStack_19c = local_c0.WeakReferenceCount.ReferenceController._4_4_;
        uStack_1a0 = 0;
        local_1c4._4_8_ = 0;
        local_1a8 = DeferredRebuildTabList;
        local_1b8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_1b8.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_1c4 + 4),
                   (FWriteAccessScope *)&local_98);
        local_80 = &local_1b8;
        puVar20 = UE::Core::Private::DelegateAllocate(0x30,&local_1b8);
        if (puVar20 != (undefined8 *)0x0) {
          *puVar20 = &
                     ___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar21 = FDelegateHandle::GenerateNewID();
          puVar20[2] = uVar21;
          *puVar20 = &
                     ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonTabListWidgetBase____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar20[3] = 0;
          local_158 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar20 + 3),(FObjectPtr)&local_158);
          puVar20[4] = local_1a8;
          puVar20[5] = CONCAT44(uStack_19c,uStack_1a0);
        }
        if (local_98.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
        }
        FTSTicker::AddTicker
                  (this_01,&local_c0,
                   (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)(local_1c4 + 4),0.0)
        ;
        plVar9 = (longlong *)
                 CONCAT44(local_c0.WeakReferenceCount.ReferenceController._4_4_,
                          local_c0.WeakReferenceCount.ReferenceController._0_4_);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar27 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar27 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_1c4 + 4),
                   (FWriteAccessScope *)&local_b0);
        if ((local_1b8.DelegateSize != 0) &&
           (local_1b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_1b8.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_1b8,0,0,0x10);
          local_1b8.DelegateSize = 0;
        }
        if (local_b0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
        }
        if (local_1b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_1b8.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)(local_1c4 + 4));
        return true;
      }
    }
    return true;
  }
  return false;
}

// RegisterTabContentWidget @ 14a80fc10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UCommonTabListWidgetBase::RegisterTabContentWidget
          (UCommonTabListWidgetBase *this,FName param_1,UWidget *param_2)

{
  UWidget *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char *pcVar5;
  FCommonRegisteredTabInfo *pFVar6;
  UPanelWidget *this_00;
  FName FVar7;
  atomic<unsigned_char> *paVar8;
  int iVar9;
  
  if (param_2 == (UWidget *)0x0) {
    pcVar5 = "ContentWidget";
    iVar9 = 0x178;
    paVar8 = &bGEnsureHasExecuted<8444838673911906680>;
  }
  else {
    pFVar6 = TMapBase<FName,FCommonRegisteredTabInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>_>
             ::Find((TMapBase<FName,FCommonRegisteredTabInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>_>
                     *)&this->RegisteredTabsByID,param_1);
    if (pFVar6 != (FCommonRegisteredTabInfo *)0x0) {
      pUVar1 = (pFVar6->ContentInstance).field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      (pFVar6->ContentInstance).field0_0x0.DebugPtr = param_2;
      this_00 = (UPanelWidget *)FWeakObjectPtr::Get(&(this->LinkedSwitcher).WeakPtr);
      if (this_00 != (UPanelWidget *)0x0) {
        if (pUVar1 != (UWidget *)0x0) {
          UPanelWidget::RemoveChild(this_00,pUVar1);
        }
        UPanelWidget::AddChild(this_00,param_2);
        FVar7 = GetSelectedTabId(this);
        if (param_1 == *(FName *)FVar7) {
          (**(code **)(this_00->_padding_ + 0x338))(this_00,param_2);
        }
      }
      return true;
    }
    pcVar5 = "FoundTabInfo";
    iVar9 = 0x17e;
    paVar8 = &bGEnsureHasExecuted<8444838673911906686>;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar8,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonTabListWidgetBase.cpp"
                     ,iVar9,pcVar5);
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

// ReleaseSlateResources @ 14a811fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UCommonTabListWidgetBase::ReleaseSlateResources(UCommonTabListWidgetBase *this,bool param_1)

{
  UUserWidget::ReleaseSlateResources((UUserWidget *)this,param_1);
  FUserWidgetPool::ResetPool(&this->TabButtonWidgetPool);
  return;
}

// RemoveAllTabs @ 14a812db0

void __thiscall UCommonTabListWidgetBase::RemoveAllTabs(UCommonTabListWidgetBase *this)

{
  FName *pFVar1;
  int iVar2;
  ulonglong uVar3;
  ForAnyElementType FVar4;
  undefined1 local_res8 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  TMapBase<FName,FCommonRegisteredTabInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,FCommonRegisteredTabInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>_>
              *)&this->RegisteredTabsByID,&local_18);
  iVar2 = local_18.ArrayNum;
  uVar3 = (ulonglong)local_18.ArrayNum;
  pFVar1 = (FName *)(local_18.AllocatorInstance.Data + uVar3 * 8);
  FVar4.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar3 != iVar2) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((FName *)FVar4.Data == pFVar1) break;
    RemoveTab(this,*(FName *)FVar4.Data);
    uVar3 = local_18._8_8_ & 0xffffffff;
    FVar4.Data = FVar4.Data + 8;
  }
  if ((FName *)local_18.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// RemoveTab @ 14a813e10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UCommonTabListWidgetBase::RemoveTab(UCommonTabListWidgetBase *this,FName param_1)

{
  TMap<FName,FCommonRegisteredTabInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>_>
  *this_00;
  ulonglong uVar1;
  UCommonButtonBase *this_01;
  UCommonButtonGroupBase *pUVar2;
  code *pcVar3;
  TMap<FName,FCommonRegisteredTabInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>_>
  *pTVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  FCommonRegisteredTabInfo *pFVar9;
  TSubclassOf<UWidget> TVar10;
  UFunction *this_02;
  UClass *pUVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 local_res8 [8];
  FName local_res10;
  int local_res18;
  FCommonRegisteredTabInfo *local_res20;
  undefined4 uStack_ac;
  FName local_a8;
  TMap<FName,FCommonRegisteredTabInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  FName local_70;
  UCommonButtonBase *local_68;
  FName local_60;
  UCommonButtonBase *local_58;
  undefined1 local_50 [16];
  
  this_00 = &this->RegisteredTabsByID;
  local_res10 = param_1;
  pFVar9 = TMapBase<FName,FCommonRegisteredTabInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>_>
           ::Find((TMapBase<FName,FCommonRegisteredTabInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>_>
                   *)this_00,param_1);
  if (pFVar9 == (FCommonRegisteredTabInfo *)0x0) {
    return false;
  }
  local_res20 = pFVar9;
  if (-1 < pFVar9->TabIndex) {
    iVar16 = 0;
    TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->RegisteredTabsByID).field_0x10
    ;
    iVar15 = *(int *)&(this->RegisteredTabsByID).field_0x28;
    uVar7 = 1;
    iVar18 = 0;
    iVar13 = 0;
    iVar8 = iVar18;
    if (iVar15 != 0) {
      puVar19 = *(uint **)&(this->RegisteredTabsByID).field_0x20;
      if (puVar19 == (uint *)0x0) {
        puVar19 = (uint *)TStack_98.Array;
      }
      uVar14 = *puVar19;
      iVar18 = 0;
      while (uVar14 == 0) {
        lVar12 = (longlong)iVar16;
        iVar18 = iVar18 + 0x20;
        iVar16 = iVar16 + 1;
        if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) {
          iVar13 = *(int *)&(this->RegisteredTabsByID).field_0x28;
          iVar8 = iVar15;
          goto LAB_14a813f04;
        }
        uVar14 = puVar19[lVar12 + 1];
      }
      iVar13 = *(int *)&(this->RegisteredTabsByID).field_0x28;
      uVar7 = -uVar14 & uVar14;
      uVar1 = (ulonglong)uVar7 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res18 = (int)lVar12;
      iVar8 = local_res18 + -1 + iVar18;
      if (iVar13 < iVar8) {
        iVar8 = iVar15;
      }
    }
LAB_14a813f04:
    uVar14 = *(uint *)&(this->RegisteredTabsByID).field_0x28;
    uVar20 = uVar14 & 0xffffffe0;
    TStack_98._padding_ = CONCAT44(uVar7,iVar16);
    TStack_98.CurrentBitIndex = iVar8;
    TStack_98.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar14 >> 5;
    TStack_98._28_4_ = iVar8;
    TStack_98.BaseBitIndex = iVar18;
    uStack_78 = CONCAT44(uStack_ac,
                         *(int *)&(this->RegisteredTabsByID).field_0x8 -
                         *(int *)&(this->RegisteredTabsByID).field_0x34);
    local_a0 = this_00;
    if ((((int)uVar14 < 0) || (iVar13 < (int)uVar14)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    pFVar9 = local_res20;
    uVar7 = *(uint *)&(this->RegisteredTabsByID).field_0x28;
    if (uVar14 != uVar7) {
      puVar17 = *(undefined1 **)&(this->RegisteredTabsByID).field_0x20;
      if (puVar17 == (undefined1 *)0x0) {
        puVar17 = &(this->RegisteredTabsByID).field_0x10;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar15 * 4);
      while (uVar14 == 0) {
        lVar12 = (longlong)iVar15;
        uVar20 = uVar20 + 0x20;
        iVar15 = iVar15 + 1;
        uVar14 = uVar7;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_14a81400d;
        uVar14 = *(uint *)(puVar17 + lVar12 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar14 = (int)lVar12 + -1 + uVar20;
      if ((int)uVar7 < (int)uVar14) {
        uVar14 = uVar7;
      }
    }
LAB_14a81400d:
    while( true ) {
      pTVar4 = local_a0;
      if (*(int *)(&local_a0->field_0x0 + 8) - *(int *)(&local_a0->field_0x0 + 0x34) !=
          (int)uStack_78) {
        `TSparseArray<TSparseSetElement<TTuple<FName,FCommonRegisteredTabInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_98.CurrentBitIndex == uVar14) &&
          (TStack_98.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)&(this->RegisteredTabsByID).field_0x10)) &&
         (param_1 = local_res10, pTVar4 == this_00)) break;
      lVar12 = (longlong)TStack_98.CurrentBitIndex * 0x30 + *(longlong *)&pTVar4->field_0x0;
      iVar15 = *(int *)(lVar12 + 8);
      if (pFVar9->TabIndex < iVar15) {
        *(int *)(lVar12 + 8) = iVar15 + -1;
      }
      TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
    }
  }
  this_01 = (pFVar9->TabButton).field0_0x0.DebugPtr;
  if (this_01 != (UCommonButtonBase *)0x0) {
    pUVar2 = (this->TabButtonGroup).field0_0x0.DebugPtr;
    TVar10.Class.field0_0x0 =
         (TObjectPtr<UClass>)(**(code **)(pUVar2->_padding_ + 0x2b0))(pUVar2,local_50);
    bVar5 = UObjectBaseUtility::IsA<TSubclassOf<UWidget>_>((UObjectBaseUtility *)this_01,TVar10);
    if (bVar5) {
      (**(code **)(pUVar2->_padding_ + 0x2c0))(pUVar2,this_01);
    }
    (**(code **)(this_01->_padding_ + 0x2d0))(this_01);
    FUserWidgetPool::Release(&this->TabButtonWidgetPool,(UUserWidget *)this_01,false);
  }
  local_a8 = param_1;
  if (*(int *)&(this->RegisteredTabsByID).field_0x8 !=
      *(int *)&(this->RegisteredTabsByID).field_0x34) {
    uVar7 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    TSet<TTuple<FName,FCommonRegisteredTabInfo>,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,FCommonRegisteredTabInfo>,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>,FDefaultSetAllocator>
                         *)this_00,local_res10.Number + uVar7,&local_a8);
  }
  this_02 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UCommonTabListWidgetBase_HandleTabRemoval);
  pUVar11 = UField::GetOwnerClass((UField *)this_02);
  if ((pUVar11->ClassFlags & CLASS_Native) == CLASS_None) {
    local_70 = param_1;
    local_68 = this_01;
    (**(code **)(this->_padding_ + 0x260))(this,this_02,&local_70);
  }
  else {
    (**(code **)(this->_padding_ + 0x4e0))(this,param_1,this_01);
  }
  local_60 = param_1;
  local_58 = this_01;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnTabButtonRemoval,
             &local_60);
  return true;
}

// RemoveTab_Internal @ 14a8141b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonTabListWidgetBase::RemoveTab_Internal
          (UCommonTabListWidgetBase *this,FName param_1,FCommonRegisteredTabInfo *param_2)

{
  UCommonButtonBase *this_00;
  UCommonButtonGroupBase *pUVar1;
  bool bVar2;
  uint uVar3;
  TSubclassOf<UWidget> TVar4;
  UFunction *this_01;
  UClass *pUVar5;
  FName local_res8;
  FName local_res10;
  FName local_28;
  UCommonButtonBase *local_20;
  
  this_00 = (param_2->TabButton).field0_0x0.DebugPtr;
  local_res10 = param_1;
  if (this_00 != (UCommonButtonBase *)0x0) {
    pUVar1 = (this->TabButtonGroup).field0_0x0.DebugPtr;
    TVar4.Class.field0_0x0 =
         (TObjectPtr<UClass>)(**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,&local_res8);
    bVar2 = UObjectBaseUtility::IsA<TSubclassOf<UWidget>_>((UObjectBaseUtility *)this_00,TVar4);
    if (bVar2) {
      (**(code **)(pUVar1->_padding_ + 0x2c0))(pUVar1,this_00);
    }
    (**(code **)(this_00->_padding_ + 0x2d0))(this_00);
    FUserWidgetPool::Release(&this->TabButtonWidgetPool,(UUserWidget *)this_00,false);
  }
  local_res8 = param_1;
  if (*(int *)&(this->RegisteredTabsByID).field_0x8 !=
      *(int *)&(this->RegisteredTabsByID).field_0x34) {
    uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    TSet<TTuple<FName,FCommonRegisteredTabInfo>,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,FCommonRegisteredTabInfo>,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>,FDefaultSetAllocator>
                         *)&this->RegisteredTabsByID,local_res10.Number + uVar3,&local_res8);
  }
  this_01 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UCommonTabListWidgetBase_HandleTabRemoval);
  pUVar5 = UField::GetOwnerClass((UField *)this_01);
  if ((pUVar5->ClassFlags & CLASS_Native) == CLASS_None) {
    local_28 = param_1;
    local_20 = this_00;
    (**(code **)(this->_padding_ + 0x260))(this,this_01,&local_28);
  }
  else {
    (**(code **)(this->_padding_ + 0x4e0))(this,param_1,this_00);
  }
  local_28 = param_1;
  local_20 = this_00;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnTabButtonRemoval,
             &local_28);
  return;
}

// SelectTabByID @ 14a8155c0

bool __thiscall
UCommonTabListWidgetBase::SelectTabByID(UCommonTabListWidgetBase *this,FName param_1,bool param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UCommonButtonBase *this_00;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar13 = 0;
  puVar1 = &(this->RegisteredTabsByID).field_0x10;
  iVar3 = *(int *)&(this->RegisteredTabsByID).field_0x28;
  uVar7 = 1;
  iVar11 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->RegisteredTabsByID).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar13;
      iVar11 = iVar11 + 0x20;
      iVar13 = iVar13 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14a81566e;
      uVar10 = puVar14[lVar9 + 1];
    }
    uVar7 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (int)lVar9 + -1 + iVar11;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14a81566e:
  uVar10 = *(uint *)&(this->RegisteredTabsByID).field_0x28;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar7,iVar13);
  TStack_68.CurrentBitIndex = iVar8;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar10 >> 5;
  TStack_68._28_4_ = iVar8;
  TStack_68.BaseBitIndex = iVar11;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->RegisteredTabsByID).field_0x8 -
                       *(int *)&(this->RegisteredTabsByID).field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar7 = *(uint *)&(this->RegisteredTabsByID).field_0x28;
  if (uVar10 != uVar7) {
    puVar12 = *(undefined1 **)&(this->RegisteredTabsByID).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar13 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar13;
      uVar15 = uVar15 + 0x20;
      iVar13 = iVar13 + 1;
      uVar10 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14a815780;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar7 < (int)uVar10) {
      uVar10 = uVar7;
    }
  }
LAB_14a815780:
  do {
    if (*(int *)&(this->RegisteredTabsByID).field_0x8 -
        *(int *)&(this->RegisteredTabsByID).field_0x34 != (int)uStack_48) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FCommonRegisteredTabInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar10) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return false;
    }
    if (*(FName *)(*(longlong *)&this->RegisteredTabsByID +
                  (longlong)TStack_68.CurrentBitIndex * 0x30) == param_1) {
      this_00 = *(UCommonButtonBase **)
                 (*(longlong *)&this->RegisteredTabsByID + 0x18 +
                 (longlong)TStack_68.CurrentBitIndex * 0x30);
      if (this_00 != (UCommonButtonBase *)0x0) {
        UCommonButtonBase::SetIsSelected(this_00,true,!param_2);
        return true;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8444838673911906543>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonTabListWidgetBase.cpp"
                         ,0xef,"TabPair.Value.TabButton");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// SetLinkedSwitcher @ 14a819c20

void __thiscall
UCommonTabListWidgetBase::SetLinkedSwitcher
          (UCommonTabListWidgetBase *this,UCommonAnimatedSwitcher *param_1)

{
  UCommonAnimatedSwitcher *pUVar1;
  UCommonAnimatedSwitcher *local_res8;
  
  pUVar1 = (UCommonAnimatedSwitcher *)FWeakObjectPtr::Get(&(this->LinkedSwitcher).WeakPtr);
  if (pUVar1 != param_1) {
    (**(code **)(this->_padding_ + 0x508))(this);
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UCommonAnimatedSwitcher *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&(this->LinkedSwitcher).WeakPtr,(FObjectPtr)&local_res8);
    (**(code **)(this->_padding_ + 0x510))(this);
  }
  return;
}

// SetListeningForInput @ 14a819ca0

void __thiscall
UCommonTabListWidgetBase::SetListeningForInput(UCommonTabListWidgetBase *this,bool param_1)

{
  UCommonUISubsystemBase *pUVar1;
  
  if ((!param_1) || ((this->TabButtonGroup).field0_0x0.DebugPtr != (UCommonButtonGroupBase *)0x0)) {
    pUVar1 = UCommonUserWidget::GetUISubsystem((UCommonUserWidget *)this);
    if ((pUVar1 != (UCommonUISubsystemBase *)0x0) && (param_1 != this->bIsListeningForInput)) {
      this->bIsListeningForInput = param_1;
      (**(code **)(this->_padding_ + 0x500))(this);
    }
  }
  return;
}

// SetSelectionRequired @ 14a81b500

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCommonTabListWidgetBase::SetSelectionRequired(UCommonTabListWidgetBase *this,bool param_1)

{
  UCommonButtonGroupBase *this_00;
  bool bVar1;
  UCommonButtonBase *this_01;
  
  this_00 = (this->TabButtonGroup).field0_0x0.DebugPtr;
  if (this_00 != (UCommonButtonGroupBase *)0x0) {
    if ((((this_00->bSelectionRequired != param_1) &&
         (this_00->bSelectionRequired = param_1, param_1)) && (0 < (this_00->Buttons).ArrayNum)) &&
       (((this_00->SelectedButtonIndex < 0 &&
         (this_01 = UCommonButtonGroupBase::GetButtonBaseAtIndex(this_00,0),
         this_01 != (UCommonButtonBase *)0x0)) &&
        ((this_01->bSelected == 0 && (bVar1 = UWidget::GetIsEnabled((UWidget *)this_01), bVar1))))))
    {
      this_00->SelectedButtonIndex = 0;
      UCommonButtonBase::SetSelectedInternal(this_01,true,true,true);
    }
    return;
  }
  return;
}

// SetTabEnabled @ 14a81be00

void __thiscall
UCommonTabListWidgetBase::SetTabEnabled(UCommonTabListWidgetBase *this,FName param_1,bool param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar13 = 0;
  puVar1 = &(this->RegisteredTabsByID).field_0x10;
  iVar3 = *(int *)&(this->RegisteredTabsByID).field_0x28;
  uVar7 = 1;
  iVar11 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->RegisteredTabsByID).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar13;
      iVar11 = iVar11 + 0x20;
      iVar13 = iVar13 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14a81beae;
      uVar10 = puVar14[lVar9 + 1];
    }
    uVar7 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (int)lVar9 + -1 + iVar11;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14a81beae:
  uVar10 = *(uint *)&(this->RegisteredTabsByID).field_0x28;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar7,iVar13);
  TStack_68.CurrentBitIndex = iVar8;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar10 >> 5;
  TStack_68._28_4_ = iVar8;
  TStack_68.BaseBitIndex = iVar11;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->RegisteredTabsByID).field_0x8 -
                       *(int *)&(this->RegisteredTabsByID).field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->RegisteredTabsByID).field_0x28;
  if (uVar10 != uVar7) {
    puVar12 = *(undefined1 **)&(this->RegisteredTabsByID).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar13 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar13;
      uVar15 = uVar15 + 0x20;
      iVar13 = iVar13 + 1;
      uVar10 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14a81bfc0;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar7 < (int)uVar10) {
      uVar10 = uVar7;
    }
  }
LAB_14a81bfc0:
  do {
    if (*(int *)&(this->RegisteredTabsByID).field_0x8 -
        *(int *)&(this->RegisteredTabsByID).field_0x34 != (int)uStack_48) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FCommonRegisteredTabInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar10) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return;
    }
    if (*(FName *)(*(longlong *)&this->RegisteredTabsByID +
                  (longlong)TStack_68.CurrentBitIndex * 0x30) == param_1) {
      plVar4 = *(longlong **)
                (*(longlong *)&this->RegisteredTabsByID + 0x18 +
                (longlong)TStack_68.CurrentBitIndex * 0x30);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x2b8))(plVar4,param_2);
        return;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8444838673911906614>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonTabListWidgetBase.cpp"
                         ,0x136,"TabPair.Value.TabButton");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// SetTabInteractionEnabled @ 14a81c080

void __thiscall
UCommonTabListWidgetBase::SetTabInteractionEnabled
          (UCommonTabListWidgetBase *this,FName param_1,bool param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UCommonButtonBase *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar12 = 0;
  puVar1 = &(this->RegisteredTabsByID).field_0x10;
  iVar3 = *(int *)&(this->RegisteredTabsByID).field_0x28;
  uVar6 = 1;
  iVar10 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->RegisteredTabsByID).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar9 = *puVar13;
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar12;
      iVar10 = iVar10 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14a81c12e;
      uVar9 = puVar13[lVar8 + 1];
    }
    uVar6 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar10;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14a81c12e:
  uVar9 = *(uint *)&(this->RegisteredTabsByID).field_0x28;
  uVar14 = uVar9 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar6,iVar12);
  TStack_68.CurrentBitIndex = iVar7;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar9 >> 5;
  TStack_68._28_4_ = iVar7;
  TStack_68.BaseBitIndex = iVar10;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->RegisteredTabsByID).field_0x8 -
                       *(int *)&(this->RegisteredTabsByID).field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->RegisteredTabsByID).field_0x28;
  if (uVar9 != uVar6) {
    puVar11 = *(undefined1 **)&(this->RegisteredTabsByID).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar12 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar12;
      uVar14 = uVar14 + 0x20;
      iVar12 = iVar12 + 1;
      uVar9 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14a81c240;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar14;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
  }
LAB_14a81c240:
  do {
    if (*(int *)&(this->RegisteredTabsByID).field_0x8 -
        *(int *)&(this->RegisteredTabsByID).field_0x34 != (int)uStack_48) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FCommonRegisteredTabInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar9) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return;
    }
    if (*(FName *)(*(longlong *)&this->RegisteredTabsByID +
                  (longlong)TStack_68.CurrentBitIndex * 0x30) == param_1) {
      this_00 = *(UCommonButtonBase **)
                 (*(longlong *)&this->RegisteredTabsByID + 0x18 +
                 (longlong)TStack_68.CurrentBitIndex * 0x30);
      if (this_00 != (UCommonButtonBase *)0x0) {
        UCommonButtonBase::SetIsInteractionEnabled(this_00,param_2);
        return;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8444838673911906634>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonTabListWidgetBase.cpp"
                         ,0x14a,"TabPair.Value.TabButton");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// SetTabVisibility @ 14a81c300

void __thiscall
UCommonTabListWidgetBase::SetTabVisibility
          (UCommonTabListWidgetBase *this,FName param_1,ESlateVisibility param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  FName *pFVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar13 = 0;
  puVar1 = &(this->RegisteredTabsByID).field_0x10;
  iVar3 = *(int *)&(this->RegisteredTabsByID).field_0x28;
  uVar6 = 1;
  iVar11 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->RegisteredTabsByID).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar9 = *puVar14;
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar13;
      iVar11 = iVar11 + 0x20;
      iVar13 = iVar13 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14a81c3ae;
      uVar9 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar11;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14a81c3ae:
  uVar9 = *(uint *)&(this->RegisteredTabsByID).field_0x28;
  uVar15 = uVar9 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar6,iVar13);
  TStack_68.CurrentBitIndex = iVar7;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar9 >> 5;
  TStack_68._28_4_ = iVar7;
  TStack_68.BaseBitIndex = iVar11;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->RegisteredTabsByID).field_0x8 -
                       *(int *)&(this->RegisteredTabsByID).field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->RegisteredTabsByID).field_0x28;
  if (uVar9 != uVar6) {
    puVar12 = *(undefined1 **)&(this->RegisteredTabsByID).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar13 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar13;
      uVar15 = uVar15 + 0x20;
      iVar13 = iVar13 + 1;
      uVar9 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14a81c4c0;
      uVar9 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar15;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
  }
LAB_14a81c4c0:
  do {
    if (*(int *)&(this->RegisteredTabsByID).field_0x8 -
        *(int *)&(this->RegisteredTabsByID).field_0x34 != (int)uStack_48) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FCommonRegisteredTabInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar9) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return;
    }
    pFVar10 = (FName *)(*(longlong *)&this->RegisteredTabsByID +
                       (longlong)TStack_68.CurrentBitIndex * 0x30);
    if (*pFVar10 == param_1) {
      if (pFVar10[3] != (FName)0x0) {
        (**(code **)(*(longlong *)pFVar10[3] + 0x2c0))();
        UCommonButtonBase::SetIsInteractionEnabled
                  ((UCommonButtonBase *)pFVar10[3],1 < (byte)(param_2 - Collapsed));
        return;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8444838673911906592>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonTabListWidgetBase.cpp"
                         ,0x120,"TabPair.Value.TabButton");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// StaticRegisterNativesUCommonTabListWidgetBase @ 14a81e800

void __cdecl UCommonTabListWidgetBase::StaticRegisterNativesUCommonTabListWidgetBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x17;
  local_18.DataPtr = Z_Construct_UClass_UCommonTabListWidgetBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateBindings @ 14a825d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UCommonTabListWidgetBase::UpdateBindings(UCommonTabListWidgetBase *this)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FBindUIActionArgs *pFVar5;
  FUIActionBindingHandle *pFVar6;
  FUIActionBindingHandle *pFVar7;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8 [8];
  FDelegateAllocation local_1a0;
  code *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  bool local_178;
  UCommonTabListWidgetBase *local_168;
  FDestructionSentinel local_160;
  FDelegateAllocation *local_148;
  FUIActionBindingHandle local_140;
  FBindUIActionArgs local_128;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  if (this->bIsListeningForInput == false) {
    FUIActionBindingHandle::Unregister(&this->NextTabActionHandle);
    FUIActionBindingHandle::Unregister(&this->PrevTabActionHandle);
    return;
  }
  bVar2 = CommonUI::IsEnhancedInputSupportEnabled();
  if ((bVar2) && ((this->NextTabEnhancedInputAction).field0_0x0.DebugPtr != (UInputAction *)0x0)) {
    local_188 = HandleNextTabAction;
    uStack_180 = 0;
    local_1a8 = (undefined1  [8])0x0;
    local_1a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_1a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a8,
               (FWriteAccessScope *)&local_160);
    local_148 = &local_1a0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_1a0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonTabListWidgetBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar3[3] = 0;
      local_168 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_168);
      puVar3[4] = local_188;
      puVar3[5] = CONCAT44(uStack_17c,uStack_180);
    }
    if (local_160.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
    }
    pFVar5 = FBindUIActionArgs::FBindUIActionArgs
                       (&local_128,(this->NextTabEnhancedInputAction).field0_0x0.DebugPtr,false,
                        (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_1a8);
    pFVar6 = UCommonUserWidget::RegisterUIActionBinding((UCommonUserWidget *)this,&local_140,pFVar5)
    ;
    FUIActionBindingHandle::operator=(&this->NextTabActionHandle,pFVar6);
    if (local_140.CachedDebugActionName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.CachedDebugActionName.Data.AllocatorInstance.Data);
    }
    FBindUIActionArgs::~FBindUIActionArgs(&local_128);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a8,
               (FWriteAccessScope *)&local_188);
    if ((local_1a0.DelegateSize != 0) &&
       (local_1a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_1a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_1a0,0,0,0x10);
      local_1a0.DelegateSize = 0;
    }
    if (local_178 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_17c,uStack_180),
                 (FDestructionSentinel *)&local_188);
    }
    if (local_1a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_1a0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1a8);
LAB_14a826130:
    if ((this->PreviousTabEnhancedInputAction).field0_0x0.DebugPtr != (UInputAction *)0x0) {
      uStack_180 = 0;
      local_188 = HandlePreviousTabAction;
      local_1a8 = (undefined1  [8])0x0;
      local_1a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_1a0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a8,
                 (FWriteAccessScope *)&local_160);
      local_148 = &local_1a0;
      puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_1a0);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        *puVar3 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonTabListWidgetBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar3[3] = 0;
        local_168 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_168);
        puVar3[4] = local_188;
        puVar3[5] = CONCAT44(uStack_17c,uStack_180);
      }
      if (local_160.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
      }
      pFVar5 = FBindUIActionArgs::FBindUIActionArgs
                         (&local_128,(this->PreviousTabEnhancedInputAction).field0_0x0.DebugPtr,
                          false,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                                local_1a8);
      pFVar6 = UCommonUserWidget::RegisterUIActionBinding
                         ((UCommonUserWidget *)this,&local_140,pFVar5);
      FUIActionBindingHandle::operator=(&this->PrevTabActionHandle,pFVar6);
      goto LAB_14a82635f;
    }
  }
  else {
    local_188 = HandleNextTabAction;
    uStack_180 = 0;
    local_1a8 = (undefined1  [8])0x0;
    local_1a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_1a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a8,
               (FWriteAccessScope *)&local_160);
    local_148 = &local_1a0;
    puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_1a0);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonTabListWidgetBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar3[3] = 0;
      local_168 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_168);
      puVar3[4] = local_188;
      puVar3[5] = CONCAT44(uStack_17c,uStack_180);
    }
    if (local_160.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
    }
    pFVar5 = FBindUIActionArgs::FBindUIActionArgs
                       (&local_128,&this->NextTabInputActionData,false,
                        (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_1a8);
    pFVar7 = UCommonUserWidget::RegisterUIActionBinding((UCommonUserWidget *)this,&local_140,pFVar5)
    ;
    pFVar6 = &this->NextTabActionHandle;
    if (pFVar6 != pFVar7) {
      pFVar1 = (pFVar6->CachedDebugActionName).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (pFVar6->CachedDebugActionName).Data.AllocatorInstance.Data =
           (pFVar7->CachedDebugActionName).Data.AllocatorInstance.Data;
      (pFVar7->CachedDebugActionName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->NextTabActionHandle).CachedDebugActionName.Data.ArrayNum =
           (pFVar7->CachedDebugActionName).Data.ArrayNum;
      (this->NextTabActionHandle).CachedDebugActionName.Data.ArrayMax =
           (pFVar7->CachedDebugActionName).Data.ArrayMax;
      (pFVar7->CachedDebugActionName).Data.ArrayNum = 0;
      (pFVar7->CachedDebugActionName).Data.ArrayMax = 0;
    }
    (this->NextTabActionHandle).RegistrationId = pFVar7->RegistrationId;
    if (local_140.CachedDebugActionName.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.CachedDebugActionName.Data.AllocatorInstance.Data);
    }
    FBindUIActionArgs::~FBindUIActionArgs(&local_128);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a8,
               (FWriteAccessScope *)&local_188);
    if ((local_1a0.DelegateSize != 0) &&
       (local_1a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_1a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_1a0,0,0,0x10);
      local_1a0.DelegateSize = 0;
    }
    if (local_178 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_17c,uStack_180),
                 (FDestructionSentinel *)&local_188);
    }
    if (local_1a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_1a0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1a8);
    if (bVar2) goto LAB_14a826130;
  }
  uStack_180 = 0;
  local_188 = HandlePreviousTabAction;
  local_1a8 = (undefined1  [8])0x0;
  local_1a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1a0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a8,
             (FWriteAccessScope *)&local_160);
  local_148 = &local_1a0;
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_1a0);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCommonTabListWidgetBase____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar3[3] = 0;
    local_168 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_168);
    puVar3[4] = local_188;
    puVar3[5] = CONCAT44(uStack_17c,uStack_180);
  }
  if (local_160.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_160.Accessor,&local_160);
  }
  pFVar5 = FBindUIActionArgs::FBindUIActionArgs
                     (&local_128,&this->PreviousTabInputActionData,false,
                      (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_1a8);
  pFVar6 = UCommonUserWidget::RegisterUIActionBinding((UCommonUserWidget *)this,&local_140,pFVar5);
  pFVar7 = &this->PrevTabActionHandle;
  if (pFVar7 != pFVar6) {
    pFVar1 = (pFVar7->CachedDebugActionName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar7->CachedDebugActionName).Data.AllocatorInstance.Data =
         (pFVar6->CachedDebugActionName).Data.AllocatorInstance.Data;
    (pFVar6->CachedDebugActionName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PrevTabActionHandle).CachedDebugActionName.Data.ArrayNum =
         (pFVar6->CachedDebugActionName).Data.ArrayNum;
    (this->PrevTabActionHandle).CachedDebugActionName.Data.ArrayMax =
         (pFVar6->CachedDebugActionName).Data.ArrayMax;
    (pFVar6->CachedDebugActionName).Data.ArrayNum = 0;
    (pFVar6->CachedDebugActionName).Data.ArrayMax = 0;
  }
  (this->PrevTabActionHandle).RegistrationId = pFVar6->RegistrationId;
LAB_14a82635f:
  if (local_140.CachedDebugActionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_140.CachedDebugActionName.Data.AllocatorInstance.Data);
  }
  FBindUIActionArgs::~FBindUIActionArgs(&local_128);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a8,
             (FWriteAccessScope *)&local_188);
  if ((local_1a0.DelegateSize != 0) &&
     (local_1a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_1a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_1a0,0,0,0x10);
    local_1a0.DelegateSize = 0;
  }
  if (local_178 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_17c,uStack_180),
               (FDestructionSentinel *)&local_188);
  }
  if (local_1a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_1a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a8);
  return;
}

// execDisableTabWithReason @ 14a82ceb0

void __cdecl
UCommonTabListWidgetBase::execDisableTabWithReason(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  FName local_res10;
  FText local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FText::FText(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar2 = &local_18;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar2 = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  DisableTabWithReason((UCommonTabListWidgetBase *)param_1,local_res10,pFVar2);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execGetActiveTab @ 14a82d310

void __cdecl
UCommonTabListWidgetBase::execGetActiveTab(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x22].field_0x8;
  return;
}

// execGetLinkedSwitcher @ 14a82e6a0

void __cdecl
UCommonTabListWidgetBase::execGetLinkedSwitcher(UObject *param_1,FFrame *param_2,void *param_3)

{
  UObject *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[0x1c].field_0x4);
  *(UObject **)param_3 = pUVar1;
  return;
}

// execGetSelectedTabId @ 14a82f130

void __cdecl
UCommonTabListWidgetBase::execGetSelectedTabId(UObject *param_1,FFrame *param_2,void *param_3)

{
  FName FVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar1 = GetSelectedTabId((UCommonTabListWidgetBase *)param_1);
  *(undefined8 *)param_3 = *(undefined8 *)FVar1;
  return;
}

// execGetTabButtonBaseByID @ 14a82f4c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UCommonTabListWidgetBase::execGetTabButtonBaseByID(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FCommonRegisteredTabInfo *pFVar2;
  FName local_res8;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = TMapBase<FName,FCommonRegisteredTabInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>_>
           ::Find((TMapBase<FName,FCommonRegisteredTabInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>_>
                   *)&param_1[0x1c].field_0x20,local_res8);
  if (pFVar2 != (FCommonRegisteredTabInfo *)0x0) {
    *(TObjectPtr<UCommonButtonBase>_u_0 *)param_3 = (pFVar2->TabButton).field0_0x0;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetTabCount @ 14a82f580

void __cdecl
UCommonTabListWidgetBase::execGetTabCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(int *)param_3 = *(int *)(param_1 + 0x1d) - *(int *)&param_1[0x1e].field_0x4;
  return;
}

// execGetTabIdAtIndex @ 14a82f5b0

void __cdecl
UCommonTabListWidgetBase::execGetTabIdAtIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  undefined4 local_res10 [2];
  undefined1 local_res18 [16];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar2 = GetTabIdAtIndex((UCommonTabListWidgetBase *)param_1,(int)local_res18);
  *(undefined8 *)param_3 = *(undefined8 *)FVar2;
  return;
}

// execHandleNextTabInputAction @ 14a82fa40

void __cdecl
UCommonTabListWidgetBase::execHandleNextTabInputAction
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UCommonButtonGroupBase **)&param_1[0x1c].field_0x10 == (UCommonButtonGroupBase *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8444838673911906820>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonTabListWidgetBase.cpp"
                       ,0x204,"TabButtonGroup");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    UCommonButtonGroupBase::SelectNextButton
              (*(UCommonButtonGroupBase **)&param_1[0x1c].field_0x10,(bool)param_1[0x1c].field_0x1);
  }
  return;
}

// execHandlePreviousTabInputAction @ 14a82fc00

void __cdecl
UCommonTabListWidgetBase::execHandlePreviousTabInputAction
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UCommonButtonGroupBase **)&param_1[0x1c].field_0x10 == (UCommonButtonGroupBase *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8444838673911906833>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonTabListWidgetBase.cpp"
                       ,0x211,"TabButtonGroup");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    UCommonButtonGroupBase::SelectPreviousButton
              (*(UCommonButtonGroupBase **)&param_1[0x1c].field_0x10,(bool)param_1[0x1c].field_0x1);
  }
  return;
}

// execHandleTabButtonSelected @ 14a82fce0

void __cdecl
UCommonTabListWidgetBase::execHandleTabButtonSelected
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  UCommonButtonBase *local_res20;
  
  local_res20 = (UCommonButtonBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  HandleTabButtonSelected((UCommonTabListWidgetBase *)param_1,local_res20,local_res10[0]);
  return;
}

// execHandleTabCreation @ 14a82fdb0

void __cdecl
UCommonTabListWidgetBase::execHandleTabCreation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x4e8))(param_1,local_res8,local_res10);
  return;
}

// execHandleTabRemoval @ 14a82fe90

void __cdecl
UCommonTabListWidgetBase::execHandleTabRemoval(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x4e0))(param_1,local_res8,local_res10);
  return;
}

// execHasTabContentWidget @ 14a830040

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UCommonTabListWidgetBase::execHasTabContentWidget(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FCommonRegisteredTabInfo *pFVar2;
  FName local_res8;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = TMapBase<FName,FCommonRegisteredTabInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>_>
           ::Find((TMapBase<FName,FCommonRegisteredTabInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>_>
                   *)&param_1[0x1c].field_0x20,local_res8);
  if ((pFVar2 == (FCommonRegisteredTabInfo *)0x0) ||
     ((pFVar2->ContentInstance).field0_0x0.DebugPtr == (UWidget *)0x0)) {
    *(undefined1 *)param_3 = 0;
  }
  else {
    *(undefined1 *)param_3 = 1;
  }
  return;
}

// execRegisterTab @ 14a831360

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UCommonTabListWidgetBase::execRegisterTab(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  UWidget *pUVar3;
  bool bVar4;
  int local_res10 [2];
  FName local_res18;
  UWidget *local_res20;
  UObject *local_28;
  UObject *local_20;
  
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_28 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res20 = (UWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar3 = local_res20;
  iVar2 = local_res10[0];
  local_20 = local_28;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_28);
  }
  bVar4 = RegisterTab((UCommonTabListWidgetBase *)param_1,local_res18,
                      (TSubclassOf<UCommonButtonBase>)&local_20,pUVar3,iVar2);
  *(bool *)param_3 = bVar4;
  return;
}

// execRegisterTabContentWidget @ 14a8314e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UCommonTabListWidgetBase::execRegisterTabContentWidget
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UWidget *pUVar2;
  code *pcVar3;
  FName FVar4;
  TObjectPtr<UWidget>_u_0 TVar5;
  bool bVar6;
  char *pcVar7;
  FCommonRegisteredTabInfo *pFVar8;
  UPanelWidget *this;
  FName FVar9;
  atomic<unsigned_char> *paVar10;
  int iVar11;
  FName local_res10;
  TObjectPtr<UWidget>_u_0 local_res18 [2];
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18[0].DebugPtr = (UWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  TVar5 = local_res18[0];
  FVar4 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18[0].DebugPtr == (UWidget *)0x0) {
    pcVar7 = "ContentWidget";
    iVar11 = 0x178;
    paVar10 = &bGEnsureHasExecuted<8444838673911906680>;
  }
  else {
    pFVar8 = TMapBase<FName,FCommonRegisteredTabInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>_>
             ::Find((TMapBase<FName,FCommonRegisteredTabInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCommonRegisteredTabInfo,0>_>
                     *)&param_1[0x1c].field_0x20,local_res10);
    if (pFVar8 != (FCommonRegisteredTabInfo *)0x0) {
      pUVar2 = (pFVar8->ContentInstance).field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
      }
      (pFVar8->ContentInstance).field0_0x0.DebugPtr = (UWidget *)TVar5;
      this = (UPanelWidget *)FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[0x1c].field_0x4);
      if (this != (UPanelWidget *)0x0) {
        if (pUVar2 != (UWidget *)0x0) {
          UPanelWidget::RemoveChild(this,pUVar2);
        }
        UPanelWidget::AddChild(this,TVar5.DebugPtr);
        FVar9 = GetSelectedTabId((UCommonTabListWidgetBase *)param_1);
        if (FVar4 == *(FName *)FVar9) {
          (**(code **)(this->_padding_ + 0x338))(this,TVar5.DebugPtr);
        }
      }
      *(undefined1 *)param_3 = 1;
      return;
    }
    pcVar7 = "FoundTabInfo";
    iVar11 = 0x17e;
    paVar10 = &bGEnsureHasExecuted<8444838673911906686>;
  }
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar10,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonTabListWidgetBase.cpp"
                     ,iVar11,pcVar7);
  if (bVar6) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execRemoveAllTabs @ 14a8316c0

void __cdecl
UCommonTabListWidgetBase::execRemoveAllTabs(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RemoveAllTabs((UCommonTabListWidgetBase *)param_1);
  return;
}

// execRemoveTab @ 14a8316e0

void __cdecl UCommonTabListWidgetBase::execRemoveTab(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = RemoveTab((UCommonTabListWidgetBase *)param_1,local_res10);
  *(bool *)param_3 = bVar2;
  return;
}

// execSelectTabByID @ 14a831cb0

void __cdecl
UCommonTabListWidgetBase::execSelectTabByID(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  FName local_res18 [2];
  
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = SelectTabByID((UCommonTabListWidgetBase *)param_1,local_res18[0],local_res10[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetLinkedSwitcher @ 14a8344d0

void __cdecl
UCommonTabListWidgetBase::execSetLinkedSwitcher(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x4f0))(param_1,local_res8);
  return;
}

// execSetListeningForInput @ 14a834560

void __cdecl
UCommonTabListWidgetBase::execSetListeningForInput(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x4f8))(param_1,local_res8[0] != 0);
  return;
}

// execSetTabEnabled @ 14a835ef0

void __cdecl
UCommonTabListWidgetBase::execSetTabEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  FName local_res20;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetTabEnabled((UCommonTabListWidgetBase *)param_1,local_res20,local_res10[0] != 0);
  return;
}

// execSetTabInteractionEnabled @ 14a835fd0

void __cdecl
UCommonTabListWidgetBase::execSetTabInteractionEnabled
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  FName local_res20;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetTabInteractionEnabled((UCommonTabListWidgetBase *)param_1,local_res20,local_res10[0] != 0);
  return;
}

// execSetTabVisibility @ 14a8360b0

void __cdecl
UCommonTabListWidgetBase::execSetTabVisibility(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ESlateVisibility local_res10 [8];
  FName local_res20;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = Visible;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetTabVisibility((UCommonTabListWidgetBase *)param_1,local_res20,local_res10[0]);
  return;
}

// operator() @ 150555730

bool __thiscall `UCommonTabListWidgetBase::RegisterTab'::__l69::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8444838673911906380>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8444838673911906380>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

