// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 28

// StaticStruct @ 142c2e9c0

UScriptStruct * __cdecl FToolMenuSection::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FToolMenuSection.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ToolMenus();
    Z_Registration_Info_UScriptStruct_FToolMenuSection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FToolMenuSection,(UObject *)pUVar1,
                         L"ToolMenuSection");
  }
  return Z_Registration_Info_UScriptStruct_FToolMenuSection.OuterSingleton;
}

// FToolMenuSection @ 142c3a280

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuSection * __thiscall
FToolMenuSection::FToolMenuSection(FToolMenuSection *this,FToolMenuSection *param_1)

{
  TArray<FToolMenuEntry,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TDelegate<void___cdecl(FMenuBuilder_&,UToolMenu_*),FDefaultDelegateUserPolicy> *this_00;
  TDelegate<void___cdecl(FToolBarBuilder_&,UToolMenu_*),FDefaultDelegateUserPolicy> *this_01;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *this_02;
  int iVar3;
  FToolMenuEntry *pFVar4;
  UObject *pUVar5;
  ITextData *pIVar6;
  EValueType EVar7;
  undefined7 uVar8;
  EToolMenuInsertFallback EVar9;
  undefined2 uVar10;
  undefined1 local_res8 [8];
  
  pTVar1 = &this->Blocks;
  this->Name = param_1->Name;
  EVar7 = (param_1->Owner).ValueType;
  uVar8 = *(undefined7 *)&(param_1->Owner).field_0x9;
  piVar2 = &(this->Blocks).ArrayMax;
  (this->Owner).field0_0x0 = (param_1->Owner).field0_0x0;
  (this->Owner).ValueType = EVar7;
  *(undefined7 *)&(this->Owner).field_0x9 = uVar8;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Blocks).ArrayNum;
  pFVar4 = (FToolMenuEntry *)(param_1->Blocks).AllocatorInstance.Data;
  (this->Blocks).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x780,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FToolMenuEntry,FToolMenuEntry,int>((pTVar1->AllocatorInstance).Data,pFVar4,iVar3)
    ;
  }
  (this->InsertPosition).Name = (param_1->InsertPosition).Name;
  EVar9 = (param_1->InsertPosition).Fallback;
  uVar10 = *(undefined2 *)&(param_1->InsertPosition).field_0xa;
  (this->InsertPosition).Position = (param_1->InsertPosition).Position;
  (this->InsertPosition).Fallback = EVar9;
  *(undefined2 *)&(this->InsertPosition).field_0xa = uVar10;
  FToolMenuContext::FToolMenuContext(&this->Context,&param_1->Context);
  pUVar5 = (UObject *)(param_1->ToolMenuSectionDynamic).field0_0x0.DebugPtr;
  (this->ToolMenuSectionDynamic).field0_0x0.DebugPtr = (UToolMenuSectionDynamic *)pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  (this->Label).Value.TextData.Reference = (ITextData *)0x0;
  pIVar6 = (param_1->Label).Value.TextData.Reference;
  (this->Label).Value.TextData.Reference = pIVar6;
  if (pIVar6 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar6 + 8))(pIVar6,local_res8);
  }
  this_02 = &(this->Label).Getter;
  (this->Label).Value.Flags = (param_1->Label).Value.Flags;
  (this->Label).bIsSet = (param_1->Label).bIsSet;
  *(undefined8 *)this_02 = 0;
  *(undefined8 *)&(this->Label).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->Label).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (this_02,&(param_1->Label).Getter);
  TVariant<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
  ::
  TVariant<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
            (&(this->Visibility).Value,&(param_1->Visibility).Value);
  *(undefined8 *)&(this->Construct).NewToolMenuDelegate = 0;
  *(undefined8 *)&(this->Construct).NewToolMenuDelegate.field_0x8 = 0;
  *(undefined4 *)&(this->Construct).NewToolMenuDelegate.field_0x10 = 0;
  TDelegate<void___cdecl(UToolMenu_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->Construct).NewToolMenuDelegate,&(param_1->Construct).NewToolMenuDelegate);
  this_00 = &(this->Construct).NewToolMenuDelegateLegacy;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->Construct).NewToolMenuDelegateLegacy.field_0x8 = 0;
  *(undefined4 *)&(this->Construct).NewToolMenuDelegateLegacy.field_0x10 = 0;
  TDelegate<void___cdecl(FMenuBuilder_&,UToolMenu_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(this_00,&(param_1->Construct).NewToolMenuDelegateLegacy);
  this_01 = &(this->Construct).NewToolBarDelegateLegacy;
  *(undefined8 *)this_01 = 0;
  *(undefined8 *)&(this->Construct).NewToolBarDelegateLegacy.field_0x8 = 0;
  *(undefined4 *)&(this->Construct).NewToolBarDelegateLegacy.field_0x10 = 0;
  TDelegate<void___cdecl(FToolBarBuilder_&,UToolMenu_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(this_01,&(param_1->Construct).NewToolBarDelegateLegacy);
  this->Alignment = param_1->Alignment;
  FMenuEntryResizeParams::FMenuEntryResizeParams(&this->ResizeParams,&param_1->ResizeParams);
  *(undefined8 *)&this->Sorter = 0;
  *(undefined8 *)&(this->Sorter).field_0x8 = 0;
  *(undefined4 *)&(this->Sorter).field_0x10 = 0;
  TDelegate<bool___cdecl(FToolMenuEntry_const_&,FToolMenuEntry_const_&,FToolMenuContext_const_&),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>(&this->Sorter,&param_1->Sorter);
  this->bIsRegistering = param_1->bIsRegistering;
  this->bAddedDuringRegister = param_1->bAddedDuringRegister;
  return this;
}

// FToolMenuSection @ 142c3a490

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuSection * __thiscall FToolMenuSection::FToolMenuSection(FToolMenuSection *this)

{
  (this->InsertPosition).Position = Default;
  (this->InsertPosition).Fallback = Log|Insert;
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  (this->Owner).field0_0x0.ValueInt64 = 0;
  (this->Owner).ValueType = None;
  (this->Blocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Blocks).ArrayNum = 0;
  (this->Blocks).ArrayMax = 0;
  (this->InsertPosition).Name.ComparisonIndex = 0;
  (this->InsertPosition).Name.Number = 0;
  (this->Context).bIsEditing = false;
  (this->Context).ContextObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Context).ContextObjects.ArrayNum = 0;
  (this->Context).ContextObjects.ArrayMax = 0;
  (this->Context).ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Context).ContextObjectCleanupFuncs.Pairs.ArrayNum = 0;
  (this->Context).ContextObjectCleanupFuncs.Pairs.ArrayMax = 0;
  (this->Context).ContextCleanupFuncs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Context).ContextCleanupFuncs.ArrayNum = 0;
  (this->Context).ContextCleanupFuncs.ArrayMax = 0;
  (this->Context).CommandLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Context).CommandLists.ArrayNum = 0;
  (this->Context).CommandLists.ArrayMax = 0;
  (this->Context).CommandList.Object = (FUICommandList *)0x0;
  (this->Context).CommandList.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Context).Extenders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Context).Extenders.ArrayNum = 0;
  (this->Context).Extenders.ArrayMax = 0;
  (this->ToolMenuSectionDynamic).field0_0x0.DebugPtr = (UToolMenuSectionDynamic *)0x0;
  FText::FText(&(this->Label).Value);
  (this->Label).bIsSet = false;
  *(undefined8 *)&(this->Label).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->Label).Getter = 0;
  *(undefined8 *)&(this->Label).Getter.field_0x8 = 0;
  *(undefined2 *)&(this->Visibility).Value._padding_ = 0x19;
  (this->Visibility).Value._padding_ = 0;
  (this->Visibility).Value._padding_ = 0;
  (this->Visibility).Value._padding_ = 0;
  (this->Visibility).Value.TypeIndex = '\0';
  *(undefined8 *)&(this->Construct).NewToolMenuDelegate = 0;
  *(undefined8 *)&(this->Construct).NewToolMenuDelegate.field_0x8 = 0;
  *(undefined4 *)&(this->Construct).NewToolMenuDelegate.field_0x10 = 0;
  *(undefined8 *)&(this->Construct).NewToolMenuDelegateLegacy = 0;
  *(undefined8 *)&(this->Construct).NewToolMenuDelegateLegacy.field_0x8 = 0;
  *(undefined4 *)&(this->Construct).NewToolMenuDelegateLegacy.field_0x10 = 0;
  *(undefined8 *)&(this->Construct).NewToolBarDelegateLegacy = 0;
  *(undefined8 *)&(this->Construct).NewToolBarDelegateLegacy.field_0x8 = 0;
  *(undefined4 *)&(this->Construct).NewToolBarDelegateLegacy.field_0x10 = 0;
  (this->ResizeParams).ClippingPriority.Value = 0;
  (this->ResizeParams).ClippingPriority.bIsSet = false;
  this->Alignment = Default;
  *(undefined8 *)&(this->ResizeParams).ClippingPriority.Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ResizeParams).ClippingPriority.Getter = 0;
  *(undefined8 *)&(this->ResizeParams).ClippingPriority.Getter.field_0x8 = 0;
  (this->ResizeParams).AllowClipping.Value = false;
  (this->ResizeParams).AllowClipping.bIsSet = false;
  *(undefined8 *)&(this->ResizeParams).AllowClipping.Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ResizeParams).AllowClipping.Getter = 0;
  *(undefined8 *)&(this->ResizeParams).AllowClipping.Getter.field_0x8 = 0;
  (this->ResizeParams).VisibleInOverflow.Value = false;
  (this->ResizeParams).VisibleInOverflow.bIsSet = false;
  *(undefined8 *)&(this->ResizeParams).VisibleInOverflow.Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ResizeParams).VisibleInOverflow.Getter = 0;
  *(undefined8 *)&(this->ResizeParams).VisibleInOverflow.Getter.field_0x8 = 0;
  (this->ResizeParams).Wrapping.Allow.Value = false;
  (this->ResizeParams).Wrapping.Allow.bIsSet = false;
  *(undefined8 *)&(this->ResizeParams).Wrapping.Allow.Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ResizeParams).Wrapping.Allow.Getter = 0;
  *(undefined8 *)&(this->ResizeParams).Wrapping.Allow.Getter.field_0x8 = 0;
  (this->ResizeParams).Wrapping.Priority.Value = 0;
  (this->ResizeParams).Wrapping.Priority.bIsSet = false;
  *(undefined8 *)&(this->ResizeParams).Wrapping.Priority.Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ResizeParams).Wrapping.Priority.Getter = 0;
  *(undefined8 *)&(this->ResizeParams).Wrapping.Priority.Getter.field_0x8 = 0;
  (this->ResizeParams).Wrapping.Mode.Value = Preferred;
  (this->ResizeParams).Wrapping.Mode.bIsSet = false;
  *(undefined8 *)&(this->ResizeParams).Wrapping.Mode.Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ResizeParams).Wrapping.Mode.Getter = 0;
  *(undefined8 *)&(this->ResizeParams).Wrapping.Mode.Getter.field_0x8 = 0;
  (this->ResizeParams).Wrapping.VerticalOverflowBehavior.bIsSet = false;
  (this->ResizeParams).Wrapping.ForceNewLine.bIsSet = false;
  *(undefined8 *)&this->Sorter = 0;
  *(undefined8 *)&(this->Sorter).field_0x8 = 0;
  *(undefined4 *)&(this->Sorter).field_0x10 = 0;
  this->bIsRegistering = false;
  this->bAddedDuringRegister = false;
  return this;
}

// ~FToolMenuSection @ 142c3c570

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall FToolMenuSection::~FToolMenuSection(FToolMenuSection *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Sorter);
  pvVar1 = *(void **)&(this->Sorter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Sorter);
  FMenuEntryResizeParams::~FMenuEntryResizeParams(&this->ResizeParams);
  FNewSectionConstructChoice::~FNewSectionConstructChoice(&this->Construct);
  uVar6 = (ulonglong)(this->Visibility).Value.TypeIndex;
  if (2 < uVar6) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar6])(&this->Visibility);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Label).Getter);
  pvVar1 = *(void **)&(this->Label).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Label).Getter);
  pIVar2 = (this->Label).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  FToolMenuContext::~FToolMenuContext(&this->Context);
  DestructItems<FToolMenuEntry,int>
            ((FToolMenuEntry *)(this->Blocks).AllocatorInstance.Data,(this->Blocks).ArrayNum);
  pFVar3 = (this->Blocks).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// AddDynamicEntry @ 142c44e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __thiscall
FToolMenuSection::AddDynamicEntry
          (FToolMenuSection *this,FName param_1,
          TDelegate<void___cdecl(FToolMenuSection_&),FDefaultDelegateUserPolicy> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  UToolMenus *pUVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  FModuleManager *this_00;
  FToolMenuEntry *pFVar9;
  uint uVar10;
  undefined1 auStack_808 [32];
  longlong local_7e8;
  longlong local_7e0;
  undefined8 local_7d8;
  uint uStack_7d0;
  undefined4 uStack_7cc;
  FName local_7c8 [2];
  FToolMenuOwner_u_0 local_7b8;
  uint uStack_7b0;
  undefined4 uStack_7ac;
  FToolMenuEntry local_7a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_808;
  if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (!UToolMenus::bHasShutDown)) {
    pFVar8 = ::FName::FName(local_7c8,"ToolMenus");
    FVar3 = *pFVar8;
    this_00 = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this_00,FVar3);
    UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
  }
  pUVar5 = UToolMenus::Singleton;
  iVar2 = (UToolMenus::Singleton->OwnerStack).ArrayNum;
  if (iVar2 < 1) {
    local_7d8 = 0;
    uStack_7d0 = uStack_7d0 & 0xffffff00;
    local_7d8._0_4_ = 0;
    local_7d8._4_4_ = 0;
    local_7b8.ValueName.Index = (int)local_7d8;
    local_7b8.ValueName.Number = local_7d8._4_4_;
    uStack_7b0 = uStack_7d0;
  }
  else {
    uVar10 = iVar2 - 1;
    uVar7 = 0;
    if ((int)uVar10 < iVar2) {
      uVar7 = ~uVar10 >> 0x1f;
    }
    if (uVar7 == 0) {
      local_7e8 = (longlong)(int)uVar10;
      local_7e0 = (longlong)iVar2;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FToolMenuEntry *)(*pcVar4)();
        return pFVar9;
      }
    }
    pFVar1 = (pUVar5->OwnerStack).AllocatorInstance.Data +
             (longlong)(pUVar5->OwnerStack).ArrayNum * 0x10 + -0x10;
    uStack_7cc = *(undefined4 *)(pFVar1 + 0xc);
    local_7b8.ValueName.Index = *(int *)pFVar1;
    local_7b8.ValueName.Number = *(int *)(pFVar1 + 4);
    uStack_7b0 = *(uint *)(pFVar1 + 8);
  }
  uStack_7ac = uStack_7cc;
  FToolMenuEntry::FToolMenuEntry
            (&local_7a8,(FToolMenuOwner *)&local_7b8.ValueName,param_1,MenuEntry);
  TDelegate<void___cdecl(FToolMenuSection_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&local_7a8.Construct,param_2);
  pFVar9 = AddEntry(this,&local_7a8);
  FToolMenuEntry::~FToolMenuEntry(&local_7a8);
  return pFVar9;
}

// AddDynamicEntry @ 142c44f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __thiscall
FToolMenuSection::AddDynamicEntry
          (FToolMenuSection *this,FName param_1,
          TDelegate<void___cdecl(FMenuBuilder_&,UToolMenu_*),FDefaultDelegateUserPolicy> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  UToolMenus *pUVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  FModuleManager *this_00;
  FToolMenuEntry *pFVar9;
  uint uVar10;
  undefined1 auStack_808 [32];
  longlong local_7e8;
  longlong local_7e0;
  undefined8 local_7d8;
  uint uStack_7d0;
  undefined4 uStack_7cc;
  FName local_7c8 [2];
  FToolMenuOwner_u_0 local_7b8;
  uint uStack_7b0;
  undefined4 uStack_7ac;
  FToolMenuEntry local_7a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_808;
  if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (!UToolMenus::bHasShutDown)) {
    pFVar8 = ::FName::FName(local_7c8,"ToolMenus");
    FVar3 = *pFVar8;
    this_00 = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this_00,FVar3);
    UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
  }
  pUVar5 = UToolMenus::Singleton;
  iVar2 = (UToolMenus::Singleton->OwnerStack).ArrayNum;
  if (iVar2 < 1) {
    local_7d8 = 0;
    uStack_7d0 = uStack_7d0 & 0xffffff00;
    local_7d8._0_4_ = 0;
    local_7d8._4_4_ = 0;
    local_7b8.ValueName.Index = (int)local_7d8;
    local_7b8.ValueName.Number = local_7d8._4_4_;
    uStack_7b0 = uStack_7d0;
  }
  else {
    uVar10 = iVar2 - 1;
    uVar7 = 0;
    if ((int)uVar10 < iVar2) {
      uVar7 = ~uVar10 >> 0x1f;
    }
    if (uVar7 == 0) {
      local_7e8 = (longlong)(int)uVar10;
      local_7e0 = (longlong)iVar2;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FToolMenuEntry *)(*pcVar4)();
        return pFVar9;
      }
    }
    pFVar1 = (pUVar5->OwnerStack).AllocatorInstance.Data +
             (longlong)(pUVar5->OwnerStack).ArrayNum * 0x10 + -0x10;
    uStack_7cc = *(undefined4 *)(pFVar1 + 0xc);
    local_7b8.ValueName.Index = *(int *)pFVar1;
    local_7b8.ValueName.Number = *(int *)(pFVar1 + 4);
    uStack_7b0 = *(uint *)(pFVar1 + 8);
  }
  uStack_7ac = uStack_7cc;
  pFVar9 = FToolMenuEntry::FToolMenuEntry
                     (&local_7a8,(FToolMenuOwner *)&local_7b8.ValueName,param_1,MenuEntry);
  pFVar9 = AddEntry(this,pFVar9);
  FToolMenuEntry::~FToolMenuEntry(&local_7a8);
  TDelegate<void___cdecl(FMenuBuilder_&,UToolMenu_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&pFVar9->ConstructLegacy,param_2);
  return pFVar9;
}

// AddEntry @ 142c45280

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __thiscall
FToolMenuSection::AddEntry(FToolMenuSection *this,FToolMenuEntry *param_1)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  FToolMenuEntry *pFVar8;
  longlong lVar9;
  uint uVar10;
  
  if (param_1->Name != (FName)0x0) {
    uVar6 = IndexOfBlock(this,param_1->Name);
    if (uVar6 == 0xffffffff) {
      pFVar8 = (FToolMenuEntry *)(this->Blocks).AllocatorInstance.Data;
      if ((pFVar8 <= param_1) && (param_1 < pFVar8 + (this->Blocks).ArrayMax)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar8 = (FToolMenuEntry *)(*pcVar3)();
          return pFVar8;
        }
      }
      iVar5 = (this->Blocks).ArrayNum;
      piVar1 = &(this->Blocks).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x780,8,&(this->Blocks).AllocatorInstance,piVar1);
      }
      (this->Blocks).ArrayNum = iVar5 + 1;
      pFVar8 = FToolMenuEntry::FToolMenuEntry
                         ((FToolMenuEntry *)
                          ((this->Blocks).AllocatorInstance.Data + (longlong)iVar5 * 0x780),param_1)
      ;
      pFVar8->bAddedDuringRegister = this->bIsRegistering;
      return pFVar8;
    }
    uVar10 = ~uVar6 >> 0x1f;
    uVar7 = 0;
    if ((int)uVar6 < (this->Blocks).ArrayNum) {
      uVar7 = uVar10;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FToolMenuEntry *)(*pcVar3)();
        return pFVar8;
      }
    }
    lVar9 = (longlong)(int)uVar6 * 0x780;
    FToolMenuEntry::operator=
              ((FToolMenuEntry *)((this->Blocks).AllocatorInstance.Data + lVar9),param_1);
    FVar2 = (FScriptContainerElement)this->bIsRegistering;
    uVar7 = 0;
    if ((int)uVar6 < (this->Blocks).ArrayNum) {
      uVar7 = uVar10;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FToolMenuEntry *)(*pcVar3)();
        return pFVar8;
      }
    }
    (this->Blocks).AllocatorInstance.Data[lVar9 + 0x758] = FVar2;
    uVar7 = 0;
    if ((int)uVar6 < (this->Blocks).ArrayNum) {
      uVar7 = uVar10;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FToolMenuEntry *)(*pcVar3)();
        return pFVar8;
      }
    }
    return (FToolMenuEntry *)((this->Blocks).AllocatorInstance.Data + lVar9);
  }
  pFVar8 = (FToolMenuEntry *)(this->Blocks).AllocatorInstance.Data;
  if ((pFVar8 <= param_1) && (param_1 < pFVar8 + (this->Blocks).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FToolMenuEntry *)(*pcVar3)();
      return pFVar8;
    }
  }
  iVar5 = (this->Blocks).ArrayNum;
  piVar1 = &(this->Blocks).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x780,8,&(this->Blocks).AllocatorInstance,piVar1);
  }
  (this->Blocks).ArrayNum = iVar5 + 1;
  pFVar8 = FToolMenuEntry::FToolMenuEntry
                     ((FToolMenuEntry *)
                      ((this->Blocks).AllocatorInstance.Data + (longlong)iVar5 * 0x780),param_1);
  pFVar8->bAddedDuringRegister = this->bIsRegistering;
  return pFVar8;
}

// AddEntryObject @ 142c455c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __thiscall
FToolMenuSection::AddEntryObject(FToolMenuSection *this,UToolMenuEntryScript *param_1)

{
  FName FVar1;
  UToolMenus *pUVar2;
  char cVar3;
  FName *pFVar4;
  FModuleManager *this_00;
  UClass *pUVar5;
  FToolMenuEntry *pFVar6;
  undefined1 auStack_7c8 [32];
  FName local_7a8;
  FName local_7a0;
  FToolMenuEntry local_798;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_7c8;
  cVar3 = (**(code **)(param_1->_padding_ + 0x1c0))(param_1);
  if (cVar3 != '\0') {
    local_7a8.ComparisonIndex.Value = 0;
    local_7a8.Number = 0;
    if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (UToolMenus::bHasShutDown == false)) {
      pFVar4 = ::FName::FName(&local_7a0,"ToolMenus");
      FVar1 = *pFVar4;
      this_00 = FModuleManager::Get();
      FModuleManager::LoadModuleChecked(this_00,FVar1);
      UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
    }
    pUVar2 = UToolMenus::Singleton;
    pUVar5 = UToolMenuEntryScript::StaticClass();
    param_1 = (UToolMenuEntryScript *)
              DuplicateObject_Internal(pUVar5,(UObject *)param_1,(UObject *)pUVar2,local_7a8);
  }
  FToolMenuEntry::FToolMenuEntry(&local_798);
  UToolMenuEntryScript::ToMenuEntry(param_1,&local_798);
  pFVar6 = AddEntry(this,&local_798);
  FToolMenuEntry::~FToolMenuEntry(&local_798);
  return pFVar6;
}

// AddMenuEntry @ 142c458d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __thiscall
FToolMenuSection::AddMenuEntry
          (FToolMenuSection *this,TSharedPtr<FUICommandInfo_const_,1> *param_1,
          TAttribute<FText> *param_2,TAttribute<FText> *param_3,TAttribute<FSlateIcon> *param_4,
          FName param_5,TOptional<FName> param_6)

{
  code *pcVar1;
  bool bVar2;
  FToolMenuEntry *pFVar3;
  undefined1 auStackY_7f8 [32];
  undefined8 local_7b8;
  FToolMenuEntry local_7b0;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_7f8;
  if (param_1->Object == (FUICommandInfo *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCommand.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolMenus\\Private\\ToolMenuSection.cpp"
                       ,0x5d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FToolMenuEntry *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_7b8 = 0xffffffff;
  if (*(int *)param_6.field0_0x0 != -1) {
    local_7b8 = *(undefined8 *)param_6.field0_0x0;
  }
  pFVar3 = FToolMenuEntry::InitMenuEntry
                     (&local_7b0,param_1,param_2,param_3,param_4,param_5,
                      (TOptional<FName>)&local_7b8);
  pFVar3 = AddEntry(this,pFVar3);
  FToolMenuEntry::~FToolMenuEntry(&local_7b0);
  return pFVar3;
}

// AddMenuEntry @ 142c459d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __thiscall
FToolMenuSection::AddMenuEntry
          (FToolMenuSection *this,FName param_1,TAttribute<FText> *param_2,
          TAttribute<FText> *param_3,TAttribute<FSlateIcon> *param_4,FToolUIActionChoice *param_5,
          EUserInterfaceActionType param_6,FName param_7)

{
  FToolMenuEntry *pFVar1;
  undefined1 auStackY_7d8 [32];
  FToolMenuEntry local_798;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_7d8;
  pFVar1 = FToolMenuEntry::InitMenuEntry
                     (&local_798,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  pFVar1 = AddEntry(this,pFVar1);
  FToolMenuEntry::~FToolMenuEntry(&local_798);
  return pFVar1;
}

// AddMenuEntry @ 142c45a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __thiscall
FToolMenuSection::AddMenuEntry
          (FToolMenuSection *this,FName param_1,TSharedPtr<FUICommandInfo_const_,1> *param_2,
          TAttribute<FText> *param_3,TAttribute<FText> *param_4,TAttribute<FSlateIcon> *param_5,
          FName param_6)

{
  code *pcVar1;
  bool bVar2;
  FToolMenuEntry *pFVar3;
  undefined1 auStackY_7f8 [32];
  FName local_7b8;
  FToolMenuEntry local_7b0;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_7f8;
  if (param_2->Object == (FUICommandInfo *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCommand.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolMenus\\Private\\ToolMenuSection.cpp"
                       ,100,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FToolMenuEntry *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_7b8 = param_1;
  if (param_1.ComparisonIndex.Value.Value == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0xbd,
                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FToolMenuEntry *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = FToolMenuEntry::InitMenuEntry
                     (&local_7b0,param_2,param_3,param_4,param_5,param_6,
                      (TOptional<FName>)&local_7b8);
  pFVar3 = AddEntry(this,pFVar3);
  FToolMenuEntry::~FToolMenuEntry(&local_7b0);
  return pFVar3;
}

// AddMenuEntryWithCommandList @ 142c45cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __thiscall
FToolMenuSection::AddMenuEntryWithCommandList
          (FToolMenuSection *this,TSharedPtr<FUICommandInfo_const_,1> *param_1,
          TSharedPtr<FUICommandList_const_,1> *param_2,TAttribute<FText> *param_3,
          TAttribute<FText> *param_4,TAttribute<FSlateIcon> *param_5,FName param_6,
          TOptional<FName> param_7)

{
  FToolMenuOwner_u_0 *pFVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  UToolMenus *pUVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  uint uVar8;
  FToolMenuEntry *pFVar9;
  FName *pFVar10;
  FModuleManager *this_00;
  undefined1 auStackY_848 [32];
  undefined8 local_818;
  undefined8 local_810;
  FName local_808;
  TAttribute<FSlateIcon> *local_800;
  undefined8 local_7f8;
  undefined1 uStack_7f0;
  uint7 uStack_7ef;
  FName local_7e8 [2];
  FToolMenuOwner_u_0 local_7d8;
  FToolMenuOwner_u_0 FStack_7d0;
  FToolMenuEntry local_7c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_848;
  local_800 = param_5;
  if ((param_1->Object == (FUICommandInfo *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCommand.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolMenus\\Private\\ToolMenuSection.cpp"
                         ,0x6b,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FToolMenuEntry *)(*pcVar4)();
    return pFVar9;
  }
  if ((param_2->Object == (FUICommandList *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCommandList.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolMenus\\Private\\ToolMenuSection.cpp"
                         ,0x6c,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FToolMenuEntry *)(*pcVar4)();
    return pFVar9;
  }
  local_818._0_4_ = -1;
  local_818 = 0xffffffff;
  if (*(int *)param_7.field0_0x0 != -1) {
    local_818 = *(undefined8 *)param_7.field0_0x0;
  }
  local_808.ComparisonIndex.Value = 0;
  local_808.Number = 0;
  if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (UToolMenus::bHasShutDown == false)) {
    pFVar10 = ::FName::FName(local_7e8,"ToolMenus");
    FVar3 = *pFVar10;
    this_00 = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this_00,FVar3);
    UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
  }
  pUVar5 = UToolMenus::Singleton;
  iVar2 = (UToolMenus::Singleton->OwnerStack).ArrayNum;
  if (iVar2 < 1) {
    local_7f8 = 0;
    uStack_7f0 = 0;
    local_7d8.ValueInt64 = 0;
    FStack_7d0.ValueInt64 = (ulonglong)uStack_7ef << 8;
  }
  else {
    uVar8 = 0;
    if ((int)(iVar2 - 1U) < iVar2) {
      uVar8 = ~(iVar2 - 1U) >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FToolMenuEntry *)(*pcVar4)();
      return pFVar9;
    }
    pFVar1 = (FToolMenuOwner_u_0 *)
             ((pUVar5->OwnerStack).AllocatorInstance.Data +
             (longlong)(pUVar5->OwnerStack).ArrayNum * 0x10 + -0x10);
    local_7d8 = *pFVar1;
    FStack_7d0 = pFVar1[1];
  }
  FToolMenuEntry::FToolMenuEntry
            (&local_7c8,(FToolMenuOwner *)&local_7d8.ValueName,local_808,MenuEntry);
  local_7c8.TutorialHighlightName = param_6;
  local_810 = 0xffffffff;
  if ((int)local_818 != -1) {
    local_810 = local_818;
  }
  FToolMenuEntry::SetCommand
            (&local_7c8,param_1,(TOptional<FName>)&local_810,param_3,param_4,local_800);
  FVar6.ReferenceController = local_7c8.CommandList.SharedReferenceCount.ReferenceController;
  local_7c8.CommandList.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  local_7c8.CommandList.Object = param_2->Object;
  if (local_7c8.CommandList.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_7c8.CommandList.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_7c8.CommandList.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  pFVar9 = AddEntry(this,&local_7c8);
  FToolMenuEntry::~FToolMenuEntry(&local_7c8);
  return pFVar9;
}

// AddMenuSeparator @ 142c462e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __thiscall FToolMenuSection::AddMenuSeparator(FToolMenuSection *this,FName param_1)

{
  FScriptContainerElement *pFVar1;
  uchar uVar2;
  int iVar3;
  FName FVar4;
  code *pcVar5;
  UToolMenus *pUVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  FName *pFVar10;
  FModuleManager *this_00;
  FToolMenuEntry *pFVar11;
  TDelegateBase<FNotThreadSafeDelegateMode> *pTVar12;
  TDelegateBase<FNotThreadSafeDelegateMode> *pTVar13;
  uint uVar14;
  undefined1 auStack_7f8 [32];
  longlong lStack_7d8;
  longlong lStack_7d0;
  undefined8 uStack_7c8;
  uint uStack_7c0;
  undefined4 uStack_7bc;
  FName aFStack_7b8 [2];
  FToolMenuOwner_u_0 FStack_7a8;
  uint uStack_7a0;
  undefined4 uStack_79c;
  FToolMenuEntry FStack_798;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_7f8;
  if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (!UToolMenus::bHasShutDown)) {
    pFVar10 = ::FName::FName(aFStack_7b8,"ToolMenus");
    FVar4 = *pFVar10;
    this_00 = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this_00,FVar4);
    UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
  }
  pUVar6 = UToolMenus::Singleton;
  iVar3 = (UToolMenus::Singleton->OwnerStack).ArrayNum;
  pTVar13 = (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0;
  if (iVar3 < 1) {
    uStack_7c8 = 0;
    uStack_7c0 = uStack_7c0 & 0xffffff00;
    uStack_7c8._0_4_ = 0;
    uStack_7c8._4_4_ = 0;
    FStack_7a8.ValueName.Index = (int)uStack_7c8;
    FStack_7a8.ValueName.Number = uStack_7c8._4_4_;
    uStack_7a0 = uStack_7c0;
  }
  else {
    uVar14 = iVar3 - 1;
    uVar9 = 0;
    if ((int)uVar14 < iVar3) {
      uVar9 = ~uVar14 >> 0x1f;
    }
    if (uVar9 == 0) {
      lStack_7d8 = (longlong)(int)uVar14;
      lStack_7d0 = (longlong)iVar3;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FToolMenuEntry *)(*pcVar5)();
        return pFVar11;
      }
    }
    pFVar1 = (pUVar6->OwnerStack).AllocatorInstance.Data +
             (longlong)(pUVar6->OwnerStack).ArrayNum * 0x10 + -0x10;
    uStack_7bc = *(undefined4 *)(pFVar1 + 0xc);
    FStack_7a8.ValueName.Index = *(int *)pFVar1;
    FStack_7a8.ValueName.Number = *(int *)(pFVar1 + 4);
    uStack_7a0 = *(uint *)(pFVar1 + 8);
  }
  uStack_79c = uStack_7bc;
  FToolMenuEntry::FToolMenuEntry
            (&FStack_798,(FToolMenuOwner *)&FStack_7a8.ValueName,param_1,Separator);
  pFVar11 = AddEntry(this,&FStack_798);
  FToolMenuEntry::~FToolMenuEntry(&FStack_798);
  uVar2 = (this->Visibility).Value.TypeIndex;
  pTVar12 = (TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Visibility;
  if (uVar2 != '\0') {
    pTVar12 = pTVar13;
  }
  if (pTVar12 == (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
    pTVar12 = (TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Visibility;
    if (uVar2 != '\x01') {
      pTVar12 = pTVar13;
    }
    if (pTVar12 == (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
      pTVar12 = (TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Visibility;
      if (uVar2 != '\x02') {
        pTVar12 = pTVar13;
      }
      if (pTVar12 == (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
        return pFVar11;
      }
      cVar8 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound(pTVar12);
    }
    else {
      cVar8 = pTVar12->field_0x1;
    }
  }
  else {
    cVar8 = pTVar12->field_0x1;
  }
  if (cVar8 != '\0') {
    FToolMenuVisibilityChoice::operator=(&pFVar11->Visibility,&this->Visibility);
  }
  return pFVar11;
}

// AddSeparator @ 142c47b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __thiscall FToolMenuSection::AddSeparator(FToolMenuSection *this,FName param_1)

{
  FScriptContainerElement *pFVar1;
  uchar uVar2;
  int iVar3;
  FName FVar4;
  code *pcVar5;
  UToolMenus *pUVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  FName *pFVar10;
  FModuleManager *this_00;
  FToolMenuEntry *pFVar11;
  TDelegateBase<FNotThreadSafeDelegateMode> *pTVar12;
  TDelegateBase<FNotThreadSafeDelegateMode> *pTVar13;
  uint uVar14;
  undefined1 auStack_7f8 [32];
  longlong local_7d8;
  longlong local_7d0;
  undefined8 local_7c8;
  uint uStack_7c0;
  undefined4 uStack_7bc;
  FName local_7b8 [2];
  FToolMenuOwner_u_0 local_7a8;
  uint uStack_7a0;
  undefined4 uStack_79c;
  FToolMenuEntry local_798;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_7f8;
  if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (!UToolMenus::bHasShutDown)) {
    pFVar10 = ::FName::FName(local_7b8,"ToolMenus");
    FVar4 = *pFVar10;
    this_00 = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this_00,FVar4);
    UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
  }
  pUVar6 = UToolMenus::Singleton;
  iVar3 = (UToolMenus::Singleton->OwnerStack).ArrayNum;
  pTVar13 = (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0;
  if (iVar3 < 1) {
    local_7c8 = 0;
    uStack_7c0 = uStack_7c0 & 0xffffff00;
    local_7c8._0_4_ = 0;
    local_7c8._4_4_ = 0;
    local_7a8.ValueName.Index = (int)local_7c8;
    local_7a8.ValueName.Number = local_7c8._4_4_;
    uStack_7a0 = uStack_7c0;
  }
  else {
    uVar14 = iVar3 - 1;
    uVar9 = 0;
    if ((int)uVar14 < iVar3) {
      uVar9 = ~uVar14 >> 0x1f;
    }
    if (uVar9 == 0) {
      local_7d8 = (longlong)(int)uVar14;
      local_7d0 = (longlong)iVar3;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FToolMenuEntry *)(*pcVar5)();
        return pFVar11;
      }
    }
    pFVar1 = (pUVar6->OwnerStack).AllocatorInstance.Data +
             (longlong)(pUVar6->OwnerStack).ArrayNum * 0x10 + -0x10;
    uStack_7bc = *(undefined4 *)(pFVar1 + 0xc);
    local_7a8.ValueName.Index = *(int *)pFVar1;
    local_7a8.ValueName.Number = *(int *)(pFVar1 + 4);
    uStack_7a0 = *(uint *)(pFVar1 + 8);
  }
  uStack_79c = uStack_7bc;
  FToolMenuEntry::FToolMenuEntry
            (&local_798,(FToolMenuOwner *)&local_7a8.ValueName,param_1,Separator);
  pFVar11 = AddEntry(this,&local_798);
  FToolMenuEntry::~FToolMenuEntry(&local_798);
  uVar2 = (this->Visibility).Value.TypeIndex;
  pTVar12 = (TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Visibility;
  if (uVar2 != '\0') {
    pTVar12 = pTVar13;
  }
  if (pTVar12 == (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
    pTVar12 = (TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Visibility;
    if (uVar2 != '\x01') {
      pTVar12 = pTVar13;
    }
    if (pTVar12 == (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
      pTVar12 = (TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Visibility;
      if (uVar2 != '\x02') {
        pTVar12 = pTVar13;
      }
      if (pTVar12 == (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
        return pFVar11;
      }
      cVar8 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound(pTVar12);
    }
    else {
      cVar8 = pTVar12->field_0x1;
    }
  }
  else {
    cVar8 = pTVar12->field_0x1;
  }
  if (cVar8 != '\0') {
    FToolMenuVisibilityChoice::operator=(&pFVar11->Visibility,&this->Visibility);
  }
  return pFVar11;
}

// AddSubMenu @ 142c48610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __thiscall
FToolMenuSection::AddSubMenu
          (FToolMenuSection *this,FName param_1,FToolUIActionChoice *param_2,
          TSharedRef<SWidget,1> *param_3,FNewToolMenuChoice *param_4,bool param_5)

{
  FToolMenuEntry *pFVar1;
  undefined1 auStackY_7c8 [32];
  FToolMenuEntry local_798;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_7c8;
  pFVar1 = FToolMenuEntry::InitSubMenu(&local_798,param_1,param_2,param_3,param_4,param_5);
  pFVar1 = AddEntry(this,pFVar1);
  FToolMenuEntry::~FToolMenuEntry(&local_798);
  return pFVar1;
}

// AddSubMenu @ 142c48690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __thiscall
FToolMenuSection::AddSubMenu
          (FToolMenuSection *this,FName param_1,TAttribute<FText> *param_2,
          TAttribute<FText> *param_3,FNewToolMenuChoice *param_4,FToolUIActionChoice *param_5,
          EUserInterfaceActionType param_6,bool param_7,TAttribute<FSlateIcon> *param_8,bool param_9
          )

{
  FToolMenuEntry *pFVar1;
  undefined1 auStackY_7f8 [32];
  FToolMenuEntry local_7a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_7f8;
  pFVar1 = FToolMenuEntry::InitSubMenu
                     (&local_7a8,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      param_9);
  pFVar1 = AddEntry(this,pFVar1);
  FToolMenuEntry::~FToolMenuEntry(&local_7a8);
  return pFVar1;
}

// AddSubMenu @ 142c48750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __thiscall
FToolMenuSection::AddSubMenu
          (FToolMenuSection *this,FName param_1,TAttribute<FText> *param_2,
          TAttribute<FText> *param_3,FNewToolMenuChoice *param_4,bool param_5,
          TAttribute<FSlateIcon> *param_6,bool param_7,FName param_8)

{
  FToolMenuEntry *pFVar1;
  undefined1 auStackY_7f8 [32];
  FToolMenuEntry local_7a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_7f8;
  pFVar1 = FToolMenuEntry::InitSubMenu
                     (&local_7a8,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  pFVar1 = AddEntry(this,pFVar1);
  FToolMenuEntry::~FToolMenuEntry(&local_7a8);
  return pFVar1;
}

// FindBlockInsertIndex @ 142c59b90

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

int __thiscall
FToolMenuSection::FindBlockInsertIndex(FToolMenuSection *this,FToolMenuEntry *param_1)

{
  FName FVar1;
  undefined1 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  FVar1 = (param_1->InsertPosition).Name;
  uVar2 = (param_1->InsertPosition).Position;
  if ((FScriptContainerElement)uVar2 == (FScriptContainerElement)0x0) {
    uVar8 = (this->Blocks).ArrayNum;
    uVar7 = 0;
    if (0 < (int)uVar8) {
      lVar9 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar7 < (this->Blocks).ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        if ((this->Blocks).AllocatorInstance.Data[lVar9 + 0x2c] == (FScriptContainerElement)0x4) {
          return uVar7;
        }
        uVar8 = (this->Blocks).ArrayNum;
        uVar7 = uVar7 + 1;
        lVar9 = lVar9 + 0x780;
      } while ((int)uVar7 < (int)uVar8);
    }
  }
  else if ((FScriptContainerElement)uVar2 == (FScriptContainerElement)0x3) {
    uVar8 = (this->Blocks).ArrayNum;
    uVar7 = 0;
    if (0 < (int)uVar8) {
      lVar9 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar7 < (this->Blocks).ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        pFVar3 = (this->Blocks).AllocatorInstance.Data;
        if (FVar1 != *(FName *)(pFVar3 + lVar9 + 0x24)) {
          return uVar7;
        }
        if (pFVar3[lVar9 + 0x2c] != (FScriptContainerElement)0x3) {
          return uVar7;
        }
        uVar8 = (this->Blocks).ArrayNum;
        uVar7 = uVar7 + 1;
        lVar9 = lVar9 + 0x780;
      } while ((int)uVar7 < (int)uVar8);
    }
  }
  else if ((FScriptContainerElement)uVar2 == (FScriptContainerElement)0x4) {
    uVar8 = (this->Blocks).ArrayNum - 1;
    if (-1 < (int)uVar8) {
      lVar9 = (longlong)(int)uVar8 * 0x780;
      do {
        uVar7 = 0;
        if ((int)uVar8 < (this->Blocks).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        if ((this->Blocks).AllocatorInstance.Data[lVar9 + 0x2c] == (FScriptContainerElement)0x4) {
          return uVar8 + 1;
        }
        lVar9 = lVar9 + -0x780;
        uVar8 = uVar8 - 1;
      } while (-1 < (int)uVar8);
    }
    uVar8 = (this->Blocks).ArrayNum;
  }
  else {
    uVar7 = IndexOfBlock(this,FVar1);
    uVar8 = uVar7;
    if (uVar7 != 0xffffffff) {
      if ((FScriptContainerElement)uVar2 == (FScriptContainerElement)0x2) {
        uVar7 = uVar7 + 1;
      }
      uVar8 = (this->Blocks).ArrayNum;
      if ((int)uVar7 < (int)uVar8) {
        lVar9 = (longlong)(int)uVar7 * 0x780;
        do {
          uVar8 = 0;
          if ((int)uVar7 < (this->Blocks).ArrayNum) {
            uVar8 = ~uVar7 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            iVar6 = (*pcVar4)();
            return iVar6;
          }
          pFVar3 = (this->Blocks).AllocatorInstance.Data;
          if (FVar1 != *(FName *)(pFVar3 + lVar9 + 0x24)) {
            return uVar7;
          }
          if ((FScriptContainerElement)uVar2 != pFVar3[lVar9 + 0x2c]) {
            return uVar7;
          }
          uVar8 = (this->Blocks).ArrayNum;
          uVar7 = uVar7 + 1;
          lVar9 = lVar9 + 0x780;
        } while ((int)uVar7 < (int)uVar8);
      }
    }
  }
  return uVar8;
}

// FindEntry @ 142c59f50

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __thiscall FToolMenuSection::FindEntry(FToolMenuSection *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FToolMenuEntry *pFVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->Blocks).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->Blocks).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FToolMenuEntry *)(*pcVar1)();
        return pFVar4;
      }
      if (*(FName *)((this->Blocks).AllocatorInstance.Data + lVar6) == param_1) {
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FToolMenuEntry *)(*pcVar1)();
          return pFVar4;
        }
        return (FToolMenuEntry *)
               ((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x780);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x780;
    } while ((int)uVar5 < (this->Blocks).ArrayNum);
  }
  return (FToolMenuEntry *)0x0;
}

// FindEntry @ 142c5a060

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __thiscall FToolMenuSection::FindEntry(FToolMenuSection *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FToolMenuEntry *pFVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->Blocks).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->Blocks).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FToolMenuEntry *)(*pcVar1)();
        return pFVar4;
      }
      if (*(FName *)((this->Blocks).AllocatorInstance.Data + lVar6) == param_1) {
        uVar3 = 0;
        if ((int)uVar5 < (this->Blocks).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FToolMenuEntry *)(*pcVar1)();
          return pFVar4;
        }
        return (FToolMenuEntry *)
               ((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x780);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x780;
    } while ((int)uVar5 < (this->Blocks).ArrayNum);
  }
  return (FToolMenuEntry *)0x0;
}

// IndexOfBlock @ 142c61230

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

int __thiscall FToolMenuSection::IndexOfBlock(FToolMenuSection *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (0 < (this->Blocks).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->Blocks).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(FName *)((this->Blocks).AllocatorInstance.Data + lVar5) == param_1) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x780;
    } while ((int)uVar6 < (this->Blocks).ArrayNum);
  }
  return -1;
}

// InitGeneratedSectionCopy @ 142c61860

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FToolMenuSection::InitGeneratedSectionCopy
          (FToolMenuSection *this,FToolMenuSection *param_1,FToolMenuContext *param_2)

{
  EToolMenuInsertFallback EVar1;
  undefined2 uVar2;
  
  this->Name = param_1->Name;
  TAttribute<FText>::operator=(&this->Label,&param_1->Label);
  (this->InsertPosition).Name = (param_1->InsertPosition).Name;
  EVar1 = (param_1->InsertPosition).Fallback;
  uVar2 = *(undefined2 *)&(param_1->InsertPosition).field_0xa;
  (this->InsertPosition).Position = (param_1->InsertPosition).Position;
  (this->InsertPosition).Fallback = EVar1;
  *(undefined2 *)&(this->InsertPosition).field_0xa = uVar2;
  TDelegate<void___cdecl(UToolMenu_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->Construct).NewToolMenuDelegate,&(param_1->Construct).NewToolMenuDelegate);
  TDelegate<void___cdecl(FMenuBuilder_&,UToolMenu_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->Construct).NewToolMenuDelegateLegacy,
             &(param_1->Construct).NewToolMenuDelegateLegacy);
  TDelegate<void___cdecl(FToolBarBuilder_&,UToolMenu_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->Construct).NewToolBarDelegateLegacy,
             &(param_1->Construct).NewToolBarDelegateLegacy);
  FToolMenuContext::operator=(&this->Context,param_2);
  this->Alignment = param_1->Alignment;
  FToolMenuVisibilityChoice::operator=(&this->Visibility,&param_1->Visibility);
  FMenuEntryResizeParams::operator=(&this->ResizeParams,&param_1->ResizeParams);
  TDelegate<bool___cdecl(FToolMenuEntry_const_&,FToolMenuEntry_const_&,FToolMenuContext_const_&),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>(&this->Sorter,&param_1->Sorter);
  return;
}

// InitSection @ 142c624f0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FToolMenuSection::InitSection
          (FToolMenuSection *this,FName param_1,TAttribute<FText> *param_2,FToolMenuInsert *param_3)

{
  EToolMenuInsertType EVar1;
  EToolMenuInsertFallback EVar2;
  undefined2 uVar3;
  
  this->Name = param_1;
  TAttribute<FText>::operator=(&this->Label,param_2);
  EVar1 = param_3->Position;
  EVar2 = param_3->Fallback;
  uVar3 = *(undefined2 *)&param_3->field_0xa;
  (this->InsertPosition).Name = param_3->Name;
  (this->InsertPosition).Position = EVar1;
  (this->InsertPosition).Fallback = EVar2;
  *(undefined2 *)&(this->InsertPosition).field_0xa = uVar3;
  return;
}

// IsNonLegacyDynamic @ 142c63760

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall FToolMenuSection::IsNonLegacyDynamic(FToolMenuSection *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  if ((this->ToolMenuSectionDynamic).field0_0x0.DebugPtr != (UToolMenuSectionDynamic *)0x0) {
    return true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->Construct,&local_28);
  if (((*(int *)&(this->Construct).NewToolMenuDelegate.field_0x10 != 0) &&
      (plVar1 = *(longlong **)&(this->Construct).NewToolMenuDelegate.field_0x8,
      plVar1 != (longlong *)0x0)) && (cVar2 = (**(code **)(*plVar1 + 0x38))(), cVar2 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    return true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// IsRegistering @ 142c63850

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall FToolMenuSection::IsRegistering(FToolMenuSection *this)

{
  return this->bIsRegistering;
}

// RemoveEntriesByOwner @ 142c6eb90

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

int __thiscall
FToolMenuSection::RemoveEntriesByOwner(FToolMenuSection *this,FToolMenuOwner *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  byte bVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  FScriptContainerElement FVar12;
  int iVar13;
  byte bVar14;
  
  if (((param_1->field0_0x0).ValueInt64 == 0) && (param_1->ValueType == None)) {
    return 0;
  }
  iVar1 = (this->Blocks).ArrayNum;
  lVar6 = (longlong)iVar1;
  lVar3 = (param_1->field0_0x0).ValueInt64;
  uVar7 = 0;
  iVar13 = 0;
  if (iVar1 != 0) {
    pFVar2 = (this->Blocks).AllocatorInstance.Data;
    FVar12 = SUB81(*(undefined8 *)&param_1->ValueType,0);
    uVar11 = uVar7;
    if ((lVar3 == *(longlong *)(pFVar2 + 8)) && (FVar12 == pFVar2[0x10])) {
      bVar14 = 0;
      uVar9 = uVar7;
    }
    else {
      bVar14 = 1;
      uVar9 = uVar7;
    }
    do {
      iVar13 = (int)uVar9;
      uVar9 = (ulonglong)(iVar13 + 1);
      uVar7 = uVar7 + 1;
      if ((longlong)uVar7 < lVar6) {
        pFVar4 = pFVar2 + uVar7 * 0x780 + 0x10;
        do {
          if ((lVar3 != *(longlong *)(pFVar4 + -8)) || (bVar5 = 0, FVar12 != *pFVar4)) {
            bVar5 = 1;
          }
          if (bVar14 != bVar5) break;
          uVar9 = (ulonglong)((int)uVar9 + 1);
          uVar7 = uVar7 + 1;
          pFVar4 = pFVar4 + 0x780;
        } while ((longlong)uVar7 < lVar6);
      }
      iVar8 = (int)uVar9 - iVar13;
      if (bVar14 == 0) {
        DestructItems<FToolMenuEntry,int>
                  ((FToolMenuEntry *)(pFVar2 + (longlong)iVar13 * 0x780),iVar8);
      }
      else {
        iVar10 = (int)uVar11;
        if (iVar10 != iVar13) {
          memmove(pFVar2 + (longlong)iVar10 * 0x780,pFVar2 + (longlong)iVar13 * 0x780,
                  (longlong)iVar8 * 0x780);
        }
        uVar11 = (ulonglong)(uint)(iVar10 + iVar8);
      }
      bVar14 = bVar14 ^ 1;
    } while ((longlong)uVar7 < lVar6);
    iVar13 = iVar1 - (int)uVar11;
    (this->Blocks).ArrayNum = (int)uVar11;
  }
  return iVar13;
}

// RemoveEntry @ 142c6ed50

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

int __thiscall FToolMenuSection::RemoveEntry(FToolMenuSection *this,FName param_1)

{
  int iVar1;
  FName *pFVar2;
  longlong lVar3;
  FName *pFVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  
  iVar1 = (this->Blocks).ArrayNum;
  lVar3 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  pFVar2 = (FName *)(this->Blocks).AllocatorInstance.Data;
  iVar9 = 0;
  bVar10 = *pFVar2 != param_1;
  lVar8 = 0;
  iVar6 = 0;
  do {
    lVar8 = lVar8 + 1;
    iVar7 = iVar6 + 1;
    if (lVar8 < lVar3) {
      pFVar4 = pFVar2 + lVar8 * 0xf0;
      do {
        if (bVar10 != (*pFVar4 != param_1)) break;
        iVar7 = iVar7 + 1;
        lVar8 = lVar8 + 1;
        pFVar4 = pFVar4 + 0xf0;
      } while (lVar8 < lVar3);
    }
    iVar5 = iVar7 - iVar6;
    if (bVar10 == false) {
      DestructItems<FToolMenuEntry,int>((FToolMenuEntry *)(pFVar2 + (longlong)iVar6 * 0xf0),iVar5);
    }
    else {
      if (iVar9 != iVar6) {
        memmove(pFVar2 + (longlong)iVar9 * 0xf0,pFVar2 + (longlong)iVar6 * 0xf0,
                (longlong)iVar5 * 0x780);
      }
      iVar9 = iVar9 + iVar5;
    }
    bVar10 = (bool)(bVar10 ^ 1);
    iVar6 = iVar7;
    if (lVar3 <= lVar8) {
      (this->Blocks).ArrayNum = iVar9;
      return iVar1 - iVar9;
    }
  } while( true );
}

// RemoveEntryObject @ 142c6f000

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

int __thiscall
FToolMenuSection::RemoveEntryObject(FToolMenuSection *this,UToolMenuEntryScript *param_1)

{
  int iVar1;
  <lambda_1> local_res8 [4];
  
  local_res8[0].InObject = param_1;
  iVar1 = TArray<FToolMenuEntry,TSizedDefaultAllocator<32>_>::
          RemoveAll<_FToolMenuSection::RemoveEntryObject_::__l2::<lambda_1>_>
                    (&this->Blocks,local_res8);
  return iVar1;
}

