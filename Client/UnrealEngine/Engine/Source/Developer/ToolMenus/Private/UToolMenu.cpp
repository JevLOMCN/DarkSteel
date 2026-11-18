// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 55

// StaticClass @ 142c30760

UClass * __cdecl UToolMenu::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolMenu.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolMenus",L"ToolMenu",&Z_Registration_Info_UClass_UToolMenu.InnerSingleton
               ,StaticRegisterNativesUToolMenu,0x118,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UToolMenu>,InternalVTableHelperCtorCaller<UToolMenu>,local_res8,
               UToolMenuBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolMenu.InnerSingleton;
}

// UToolMenu @ 142c3aca0

UToolMenu * __thiscall UToolMenu::UToolMenu(UToolMenu *this,FVTableHelper *param_1)

{
  UToolMenuBase::UToolMenuBase((UToolMenuBase *)this,param_1);
  this->bSeparateSections = true;
  this->_padding_ = (longlong)&___7UToolMenu__6B_;
  (this->MenuName).ComparisonIndex = 0;
  (this->MenuName).Number = 0;
  (this->MenuParent).ComparisonIndex = 0;
  (this->MenuParent).Number = 0;
  (this->StyleName).ComparisonIndex = 0;
  (this->StyleName).Number = 0;
  (this->TutorialHighlightName).ComparisonIndex = 0;
  (this->TutorialHighlightName).Number = 0;
  (this->bAllowToolBarWrapButton).bIsSet = false;
  (this->MenuOwner).field0_0x0.ValueInt64 = 0;
  (this->MenuOwner).ValueType = None;
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
  (this->Sections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sections).ArrayNum = 0;
  (this->Sections).ArrayMax = 0;
  (this->SubMenuParent).field0_0x0.DebugPtr = (UToolMenu *)0x0;
  (this->SubMenuSourceEntryName).ComparisonIndex = 0;
  (this->SubMenuSourceEntryName).Number = 0;
  *(undefined8 *)&this->ModifyBlockWidgetAfterMake = 0;
  *(undefined8 *)&(this->ModifyBlockWidgetAfterMake).field_0x8 = 0;
  *(undefined4 *)&(this->ModifyBlockWidgetAfterMake).field_0x10 = 0;
  (this->StyleSetName).ComparisonIndex = 0;
  (this->StyleSetName).Number = 0;
  return this;
}

// UToolMenu @ 142c3ad70

UToolMenu * __thiscall UToolMenu::UToolMenu(UToolMenu *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UToolMenuBase::UToolMenuBase((UToolMenuBase *)this,pFVar1);
  this->MenuType = Menu;
  this->bShouldCleanupContextOnDestroy = true;
  this->bShouldCloseWindowAfterMenuSelection = true;
  this->bCloseSelfOnly = false;
  this->_padding_ = (longlong)&___7UToolMenu__6B_;
  (this->MenuName).ComparisonIndex = 0;
  (this->MenuName).Number = 0;
  (this->MenuParent).ComparisonIndex = 0;
  (this->MenuParent).Number = 0;
  (this->StyleName).ComparisonIndex = 0;
  (this->StyleName).Number = 0;
  (this->TutorialHighlightName).ComparisonIndex = 0;
  (this->TutorialHighlightName).Number = 0;
  *(undefined2 *)&(this->bAllowToolBarWrapButton).bIsSet = 0;
  (this->MenuOwner).field0_0x0.ValueInt64 = 0;
  (this->MenuOwner).ValueType = None;
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
  (this->Sections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sections).ArrayNum = 0;
  (this->Sections).ArrayMax = 0;
  (this->SubMenuParent).field0_0x0.DebugPtr = (UToolMenu *)0x0;
  (this->SubMenuSourceEntryName).ComparisonIndex = 0;
  (this->SubMenuSourceEntryName).Number = 0;
  *(undefined8 *)&this->ModifyBlockWidgetAfterMake = 0;
  *(undefined8 *)&(this->ModifyBlockWidgetAfterMake).field_0x8 = 0;
  *(undefined4 *)&(this->ModifyBlockWidgetAfterMake).field_0x10 = 0;
  this->bRegistered = false;
  this->bIsRegistering = false;
  (this->StyleSetName).ComparisonIndex = 0;
  (this->StyleSetName).Number = 0;
  this->bSearchable = true;
  this->bToolBarIsFocusable = false;
  this->bSeparateSections = true;
  this->bExtendersEnabled = true;
  this->MaxHeight = 1000;
  return this;
}

// ~UToolMenu @ 142c3c8a0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall UToolMenu::~UToolMenu(UToolMenu *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UToolMenu__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ModifyBlockWidgetAfterMake);
  pvVar1 = *(void **)&(this->ModifyBlockWidgetAfterMake).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ModifyBlockWidgetAfterMake);
  DestructItems<FToolMenuSection,int>
            ((FToolMenuSection *)(this->Sections).AllocatorInstance.Data,(this->Sections).ArrayNum);
  pFVar2 = (this->Sections).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FToolMenuContext::~FToolMenuContext(&this->Context);
  UToolMenuBase::~UToolMenuBase((UToolMenuBase *)this);
  return;
}

// AddDynamicSection @ 142c450e0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuSection * __thiscall
UToolMenu::AddDynamicSection
          (UToolMenu *this,FName param_1,FNewSectionConstructChoice *param_2,
          FToolMenuInsert *param_3)

{
  FToolMenuSection *pFVar1;
  FDestructionSentinel local_58;
  undefined1 local_38 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_20;
  ForAnyElementType FStack_18;
  ulonglong local_10;
  
  FText::FText((FText *)local_38);
  local_58._0_8_ = param_3->Name;
  local_38[0x10] = false;
  local_10 = 0;
  local_58.Accessor._0_1_ = param_3->Position;
  local_58.Accessor._1_1_ = param_3->Fallback;
  local_58.Accessor._2_2_ = *(undefined2 *)&param_3->field_0xa;
  local_20.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_18.Data = (FScriptContainerElement *)0x0;
  pFVar1 = AddSection(this,param_1,(TAttribute<FText> *)local_38,(FToolMenuInsert *)&local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_20,(FWriteAccessScope *)&local_58);
  if (((int)local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_18.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
    local_10 = local_10 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)
               CONCAT44(local_58.Accessor._4_4_,local_58.Accessor._0_4_),&local_58);
  }
  if (FStack_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_20.AccessDetector);
  if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
  }
  TDelegate<void___cdecl(UToolMenu_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(pFVar1->Construct).NewToolMenuDelegate,&param_2->NewToolMenuDelegate);
  TDelegate<void___cdecl(FMenuBuilder_&,UToolMenu_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(pFVar1->Construct).NewToolMenuDelegateLegacy,&param_2->NewToolMenuDelegateLegacy);
  TDelegate<void___cdecl(FToolBarBuilder_&,UToolMenu_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(pFVar1->Construct).NewToolBarDelegateLegacy,&param_2->NewToolBarDelegateLegacy);
  return pFVar1;
}

// AddDynamicSectionScript @ 142c45220

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
UToolMenu::AddDynamicSectionScript(UToolMenu *this,FName param_1,UToolMenuSectionDynamic *param_2)

{
  FToolMenuSection *pFVar1;
  
  pFVar1 = FindOrAddSection(this,param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_2 != (UToolMenuSectionDynamic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
    (pFVar1->ToolMenuSectionDynamic).field0_0x0.DebugPtr = param_2;
    return;
  }
  (pFVar1->ToolMenuSectionDynamic).field0_0x0.DebugPtr = param_2;
  return;
}

// AddMenuCustomization @ 142c45760

FCustomizedToolMenu * __thiscall UToolMenu::AddMenuCustomization(UToolMenu *this)

{
  int *piVar1;
  FName FVar2;
  UToolMenus *pUVar3;
  int iVar4;
  FName *pFVar5;
  FModuleManager *this_00;
  FCustomizedToolMenu *pFVar6;
  FName local_res8;
  
  if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (!UToolMenus::bHasShutDown)) {
    pFVar5 = ::FName::FName(&local_res8,"ToolMenus");
    FVar2 = *pFVar5;
    this_00 = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this_00,FVar2);
    UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
  }
  pUVar3 = UToolMenus::Singleton;
  FVar2 = this->MenuName;
  pFVar6 = UToolMenus::FindMenuCustomization(UToolMenus::Singleton,FVar2);
  if (pFVar6 == (FCustomizedToolMenu *)0x0) {
    iVar4 = (pUVar3->CustomizedMenus).ArrayNum;
    piVar1 = &(pUVar3->CustomizedMenus).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x208,8,&(pUVar3->CustomizedMenus).AllocatorInstance,piVar1);
    }
    (pUVar3->CustomizedMenus).ArrayNum = iVar4 + 1;
    pFVar6 = (FCustomizedToolMenu *)
             ((pUVar3->CustomizedMenus).AllocatorInstance.Data + (longlong)iVar4 * 0x208);
    DefaultConstructItems<FCustomizedToolMenu,int>(pFVar6,1);
    pFVar6->_padding_ = (longlong)FVar2;
  }
  return pFVar6;
}

// AddMenuEntry @ 142c45ba0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall UToolMenu::AddMenuEntry(UToolMenu *this,FName param_1,FToolMenuEntry *param_2)

{
  FToolMenuSection *this_00;
  
  this_00 = FindOrAddSection(this,param_1);
  FToolMenuSection::AddEntry(this_00,param_2);
  return;
}

// AddMenuEntryObject @ 142c45bd0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall UToolMenu::AddMenuEntryObject(UToolMenu *this,UToolMenuEntryScript *param_1)

{
  FName FVar1;
  UToolMenus *this_00;
  FToolMenuSection *this_01;
  FName *pFVar2;
  FModuleManager *this_02;
  FName local_res8;
  
  this_01 = FindOrAddSection(this,(param_1->Data).Section);
  FToolMenuSection::AddEntryObject(this_01,param_1);
  if ((this->MenuType == MenuBar) || (this->MenuType == ToolBar)) {
    if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (UToolMenus::bHasShutDown == false)) {
      pFVar2 = ::FName::FName(&local_res8,"ToolMenus");
      FVar1 = *pFVar2;
      this_02 = FModuleManager::Get();
      FModuleManager::LoadModuleChecked(this_02,FVar1);
      UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
    }
    this_00 = UToolMenus::Singleton;
    if (UToolMenus::Singleton->bSuppressRefreshWidgetsRequests == false) {
      UToolMenus::Singleton->bRefreshWidgetsNextTick = true;
      UToolMenus::SetNextTickTimer(this_00);
    }
  }
  return;
}

// AddMenuProfile @ 142c45f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FToolMenuProfile * __thiscall UToolMenu::AddMenuProfile(UToolMenu *this,FName *param_1)

{
  FName FVar1;
  UToolMenus *pUVar2;
  uint uVar3;
  FName *pFVar4;
  FModuleManager *this_00;
  FToolMenuProfileMap *this_01;
  FToolMenuProfile *pFVar5;
  TSet<TTuple<FName,FToolMenuProfile>,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfile,0>,FDefaultSetAllocator>
  *this_02;
  longlong lVar6;
  undefined1 auStack_218 [32];
  TPairInitializer<FName_const_&,FToolMenuProfile_&&> local_1f8;
  FName local_1e8;
  FToolMenuProfile **local_1e0;
  FToolMenuProfile *local_1d8;
  undefined1 local_1d0 [72];
  void *local_188;
  undefined4 local_180;
  TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_178;
  void *local_138;
  undefined4 local_130;
  ForAnyElementType local_128;
  FNamePermissionList local_118;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_218;
  if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (!UToolMenus::bHasShutDown)) {
    pFVar4 = ::FName::FName((FName *)&local_1f8.Value,"ToolMenus");
    FVar1 = *pFVar4;
    this_00 = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this_00,FVar1);
    UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
  }
  pUVar2 = UToolMenus::Singleton;
  FVar1 = *param_1;
  local_1e8 = this->MenuName;
  local_1f8.Value = (FToolMenuProfile *)FVar1;
  this_01 = TMapBase<FName,FToolMenuProfileMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfileMap,0>_>
            ::Find((TMapBase<FName,FToolMenuProfileMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfileMap,0>_>
                    *)&UToolMenus::Singleton->MenuProfiles,local_1e8);
  if ((this_01 != (FToolMenuProfileMap *)0x0) &&
     (pFVar5 = TMapBase<FName,FToolMenuProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfile,0>_>
               ::Find((TMapBase<FName,FToolMenuProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfile,0>_>
                       *)this_01,FVar1), pFVar5 != (FToolMenuProfile *)0x0)) {
    return pFVar5;
  }
  FVar1 = local_1e8;
  uVar3 = ::GetTypeHash(local_1e8.ComparisonIndex.Value);
  this_02 = (TSet<TTuple<FName,FToolMenuProfile>,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfile,0>,FDefaultSetAllocator>
             *)TMapBase<FName,FToolMenuProfileMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfileMap,0>_>
               ::FindOrAddImpl<FName_const_&>
                         ((TMapBase<FName,FToolMenuProfileMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfileMap,0>_>
                           *)&pUVar2->MenuProfiles,uVar3 + FVar1.Number,&local_1e8);
  memset(local_1d0,0,0x1a8);
  local_1e0 = &local_1f8.Value;
  local_1d8 = FToolMenuProfile::FToolMenuProfile((FToolMenuProfile *)local_1d0);
  TSet<TTuple<FName,FToolMenuProfile>,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfile,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FToolMenuProfile_&&>_>
            (this_02,&local_1f8,(bool *)&local_1e0);
  lVar6 = *(longlong *)&this_02->Elements + (longlong)(int)local_1f8.Key * 0x1b8;
  FNamePermissionList::~FNamePermissionList(&local_118);
  if (local_128.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data);
  }
  local_130 = 0;
  if (local_138 != (void *)0x0) {
    FMemory::Free(local_138);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_178);
  local_180 = 0;
  if (local_188 != (void *)0x0) {
    FMemory::Free(local_188);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_1d0 + 8));
  *(FToolMenuProfile **)(lVar6 + 8) = local_1f8.Value;
  return (FToolMenuProfile *)(lVar6 + 8);
}

// AddSection @ 142c47230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FToolMenuSection * __thiscall
UToolMenu::AddSection
          (UToolMenu *this,FName param_1,TAttribute<FText> *param_2,FToolMenuInsert *param_3)

{
  int iVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  code *pcVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  FToolMenuOwner_u_0 FVar10;
  TObjectPtr<UToolMenuSectionDynamic>_u_0 TVar11;
  int iVar12;
  FNameEntryId FVar13;
  EToolMenuInsertType EVar14;
  EToolMenuInsertFallback EVar15;
  undefined2 uVar16;
  UToolMenus *pUVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  FToolMenuSection *pFVar21;
  FName *pFVar22;
  FToolMenuSection *pFVar23;
  FName *pFVar24;
  FName *pFVar25;
  FModuleManager *this_00;
  FName *pFVar26;
  FName *pFVar27;
  uint uVar28;
  uint uVar29;
  ulonglong uVar30;
  uint uVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  FNameEntryId FVar35;
  uint uVar36;
  undefined1 auStack_508 [32];
  longlong local_4e8;
  longlong local_4e0;
  FName local_4d8;
  int local_4d0;
  int iStack_4cc;
  uint uStack_4c8;
  undefined4 uStack_4c4;
  FName local_4c0;
  FName local_4b8 [71];
  FToolMenuSection local_280;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_508;
  if (param_1 != (FName)0x0) {
    uVar19 = IndexOfSection(this,param_1);
    lVar32 = (longlong)(int)uVar19;
    if (uVar19 != 0xffffffff) {
      uVar30 = 0;
      uVar28 = ~uVar19 >> 0x1f;
      uVar31 = 0;
      if (param_2->bIsSet != false) {
        iVar1 = (this->Sections).ArrayNum;
        uVar20 = uVar31;
        if ((int)uVar19 < iVar1) {
          uVar20 = uVar28;
        }
        if ((uVar20 == 0) &&
           (local_4e8 = lVar32, local_4e0 = (longlong)iVar1,
           bVar18 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar18)) {
          pcVar5 = (code *)swi(3);
          pFVar21 = (FToolMenuSection *)(*pcVar5)();
          return pFVar21;
        }
        TAttribute<FText>::operator=
                  ((TAttribute<FText> *)
                   ((this->Sections).AllocatorInstance.Data + lVar32 * 0x238 + 0xa8),param_2);
      }
      uVar20 = 0;
      if ((param_3->Name != (FName)0x0) || (param_3->Position != Default)) {
        iVar1 = (this->Sections).ArrayNum;
        local_4d8 = param_3->Name;
        FVar35 = local_4d8.ComparisonIndex.Value;
        uVar36 = local_4d8.Number;
        uVar2 = *(undefined4 *)&param_3->Position;
        uVar29 = uVar20;
        if ((int)uVar19 < iVar1) {
          uVar29 = uVar28;
        }
        if (uVar29 == 0) {
          local_4e8 = lVar32;
          local_4e0 = (longlong)iVar1;
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar18) {
            pcVar5 = (code *)swi(3);
            pFVar21 = (FToolMenuSection *)(*pcVar5)();
            return pFVar21;
          }
          FVar35 = local_4d8.ComparisonIndex.Value;
          uVar36 = local_4d8.Number;
        }
        pFVar3 = (this->Sections).AllocatorInstance.Data;
        *(ulonglong *)(pFVar3 + lVar32 * 0x238 + 0x28) = CONCAT44(uVar36,FVar35.Value);
        *(undefined4 *)(pFVar3 + lVar32 * 0x238 + 0x30) = uVar2;
      }
      if (this->bIsRegistering != false) {
        iVar1 = (this->Sections).ArrayNum;
        uVar29 = uVar20;
        if ((int)uVar19 < iVar1) {
          uVar29 = uVar28;
        }
        if ((uVar29 == 0) &&
           (local_4e8 = lVar32, local_4e0 = (longlong)iVar1,
           bVar18 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar18)) {
          pcVar5 = (code *)swi(3);
          pFVar21 = (FToolMenuSection *)(*pcVar5)();
          return pFVar21;
        }
        uVar34 = lVar32 * 0x238;
        if ((this->Sections).AllocatorInstance.Data[uVar34 + 0x231] == (FScriptContainerElement)0x0)
        {
          iVar1 = (this->Sections).ArrayNum;
          uVar29 = uVar31;
          if ((int)uVar19 < iVar1) {
            uVar29 = uVar28;
          }
          if ((uVar29 == 0) &&
             (local_4e8 = lVar32, local_4e0 = (longlong)iVar1,
             bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar5 = (code *)swi(3);
            pFVar21 = (FToolMenuSection *)(*pcVar5)();
            return pFVar21;
          }
          (this->Sections).AllocatorInstance.Data[uVar34 + 0x231] = (FScriptContainerElement)0x1;
          uVar33 = uVar30;
          if (0 < (int)uVar19) {
            do {
              iVar1 = (this->Sections).ArrayNum;
              uVar29 = (uint)uVar30;
              uVar28 = uVar31;
              if ((int)uVar29 < iVar1) {
                uVar28 = ~uVar29 >> 0x1f;
              }
              if (uVar28 == 0) {
                local_4e8 = (longlong)(int)uVar29;
                local_4e0 = (longlong)iVar1;
                bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar18) {
                  pcVar5 = (code *)swi(3);
                  pFVar21 = (FToolMenuSection *)(*pcVar5)();
                  return pFVar21;
                }
              }
              if ((this->Sections).AllocatorInstance.Data[uVar33 + 0x231] ==
                  (FScriptContainerElement)0x0) {
                FToolMenuSection::FToolMenuSection(&local_280);
                iVar1 = (this->Sections).ArrayNum;
                uVar28 = uVar20;
                if ((int)uVar19 < iVar1) {
                  uVar28 = ~uVar19 >> 0x1f;
                }
                if (uVar28 == 0) {
                  local_4e8 = (longlong)(int)uVar19;
                  local_4e0 = (longlong)iVar1;
                  bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar18) {
                    pcVar5 = (code *)swi(3);
                    pFVar21 = (FToolMenuSection *)(*pcVar5)();
                    return pFVar21;
                  }
                }
                pFVar27 = (FName *)((this->Sections).AllocatorInstance.Data + uVar34);
                lVar32 = 4;
                pFVar25 = pFVar27;
                pFVar24 = local_4b8;
                do {
                  pFVar26 = pFVar24;
                  pFVar22 = pFVar25;
                  FVar4 = pFVar22[1];
                  FVar6 = pFVar22[2];
                  FVar7 = pFVar22[3];
                  *pFVar26 = *pFVar22;
                  pFVar26[1] = FVar4;
                  FVar4 = pFVar22[4];
                  FVar8 = pFVar22[5];
                  pFVar26[2] = FVar6;
                  pFVar26[3] = FVar7;
                  FVar6 = pFVar22[6];
                  FVar7 = pFVar22[7];
                  pFVar26[4] = FVar4;
                  pFVar26[5] = FVar8;
                  FVar4 = pFVar22[8];
                  FVar8 = pFVar22[9];
                  pFVar26[6] = FVar6;
                  pFVar26[7] = FVar7;
                  FVar6 = pFVar22[10];
                  FVar7 = pFVar22[0xb];
                  pFVar26[8] = FVar4;
                  pFVar26[9] = FVar8;
                  FVar4 = pFVar22[0xc];
                  FVar8 = pFVar22[0xd];
                  pFVar26[10] = FVar6;
                  pFVar26[0xb] = FVar7;
                  FVar6 = pFVar22[0xe];
                  FVar7 = pFVar22[0xf];
                  pFVar26[0xc] = FVar4;
                  pFVar26[0xd] = FVar8;
                  pFVar26[0xe] = FVar6;
                  pFVar26[0xf] = FVar7;
                  lVar32 = lVar32 + -1;
                  pFVar25 = pFVar22 + 0x10;
                  pFVar24 = pFVar26 + 0x10;
                } while (lVar32 != 0);
                FVar4 = pFVar22[0x11];
                FVar6 = pFVar22[0x12];
                FVar7 = pFVar22[0x13];
                pFVar26[0x10] = pFVar22[0x10];
                pFVar26[0x11] = FVar4;
                FVar8 = pFVar22[0x14];
                FVar9 = pFVar22[0x15];
                FVar4 = pFVar22[0x16];
                pFVar26[0x12] = FVar6;
                pFVar26[0x13] = FVar7;
                pFVar26[0x14] = FVar8;
                pFVar26[0x15] = FVar9;
                pFVar26[0x16] = FVar4;
                lVar32 = 4;
                pFVar21 = &local_280;
                do {
                  pFVar25 = pFVar27;
                  pFVar23 = pFVar21;
                  FVar10 = (pFVar23->Owner).field0_0x0;
                  pFVar21 = (FToolMenuSection *)&(pFVar23->Context).CommandList;
                  *pFVar25 = pFVar23->Name;
                  *(FToolMenuOwner_u_0 *)(pFVar25 + 1) = FVar10;
                  FVar4 = (FName)(pFVar23->Blocks).AllocatorInstance.Data;
                  pFVar25[2] = *(FName *)&(pFVar23->Owner).ValueType;
                  pFVar25[3] = FVar4;
                  iVar1 = (pFVar23->Blocks).ArrayMax;
                  FVar4 = (pFVar23->InsertPosition).Name;
                  pFVar25[4].ComparisonIndex = (FNameEntryId)(pFVar23->Blocks).ArrayNum;
                  pFVar25[4].Number = iVar1;
                  pFVar25[5] = FVar4;
                  FVar4 = *(FName *)&pFVar23->Context;
                  pFVar25[6] = *(FName *)&(pFVar23->InsertPosition).Position;
                  pFVar25[7] = FVar4;
                  iVar1 = (pFVar23->Context).ContextObjects.ArrayNum;
                  iVar12 = (pFVar23->Context).ContextObjects.ArrayMax;
                  pFVar25[8] = (FName)(pFVar23->Context).ContextObjects.AllocatorInstance.Data;
                  pFVar25[9].ComparisonIndex = (FNameEntryId)iVar1;
                  pFVar25[9].Number = iVar12;
                  iVar1 = (pFVar23->Context).ContextObjectCleanupFuncs.Pairs.ArrayNum;
                  iVar12 = (pFVar23->Context).ContextObjectCleanupFuncs.Pairs.ArrayMax;
                  pFVar25[10] = (FName)(pFVar23->Context).ContextObjectCleanupFuncs.Pairs.
                                       AllocatorInstance.Data;
                  pFVar25[0xb].ComparisonIndex = (FNameEntryId)iVar1;
                  pFVar25[0xb].Number = iVar12;
                  iVar1 = (pFVar23->Context).ContextCleanupFuncs.ArrayNum;
                  iVar12 = (pFVar23->Context).ContextCleanupFuncs.ArrayMax;
                  pFVar25[0xc] = (FName)(pFVar23->Context).ContextCleanupFuncs.AllocatorInstance.
                                        Data;
                  pFVar25[0xd].ComparisonIndex = (FNameEntryId)iVar1;
                  pFVar25[0xd].Number = iVar12;
                  iVar1 = (pFVar23->Context).CommandLists.ArrayNum;
                  iVar12 = (pFVar23->Context).CommandLists.ArrayMax;
                  pFVar25[0xe] = (FName)(pFVar23->Context).CommandLists.AllocatorInstance.Data;
                  pFVar25[0xf].ComparisonIndex = (FNameEntryId)iVar1;
                  pFVar25[0xf].Number = iVar12;
                  lVar32 = lVar32 + -1;
                  pFVar27 = pFVar25 + 0x10;
                } while (lVar32 != 0);
                FVar4 = (FName)(pFVar23->Context).CommandList.SharedReferenceCount.
                               ReferenceController;
                pFVar25[0x10] = (FName)((TSharedPtr<FUICommandList,1> *)pFVar21)->Object;
                pFVar25[0x11] = FVar4;
                iVar1 = (pFVar23->Context).Extenders.ArrayNum;
                iVar12 = (pFVar23->Context).Extenders.ArrayMax;
                pFVar25[0x12] = (FName)(pFVar23->Context).Extenders.AllocatorInstance.Data;
                pFVar25[0x13].ComparisonIndex = (FNameEntryId)iVar1;
                pFVar25[0x13].Number = iVar12;
                FVar4 = (FName)(pFVar23->Label).Value.TextData.Reference;
                *(TObjectPtr<UToolMenuSectionDynamic>_u_0 *)(pFVar25 + 0x14) =
                     (pFVar23->ToolMenuSectionDynamic).field0_0x0;
                pFVar25[0x15] = FVar4;
                uVar2 = *(undefined4 *)&(pFVar23->Label).Value.field_0xc;
                pFVar25[0x16].ComparisonIndex = (FNameEntryId)(pFVar23->Label).Value.Flags;
                pFVar25[0x16].Number = uVar2;
                lVar32 = 4;
                pFVar25 = local_4b8;
                pFVar21 = &local_280;
                do {
                  pFVar23 = pFVar21;
                  pFVar24 = pFVar25;
                  pFVar21 = (FToolMenuSection *)&(pFVar23->Context).CommandList;
                  FVar10 = *(FToolMenuOwner_u_0 *)(pFVar24 + 1);
                  FVar4 = pFVar24[2];
                  FVar6 = pFVar24[3];
                  pFVar23->Name = *pFVar24;
                  (pFVar23->Owner).field0_0x0 = FVar10;
                  FVar35.Value = pFVar24[4].ComparisonIndex.Value;
                  uVar28 = pFVar24[4].Number;
                  FVar7 = pFVar24[5];
                  *(FName *)&(pFVar23->Owner).ValueType = FVar4;
                  (pFVar23->Blocks).AllocatorInstance.Data = (FScriptContainerElement *)FVar6;
                  FVar4 = pFVar24[6];
                  FVar6 = pFVar24[7];
                  (pFVar23->Blocks).ArrayNum = FVar35.Value;
                  (pFVar23->Blocks).ArrayMax = uVar28;
                  (pFVar23->InsertPosition).Name = FVar7;
                  FVar7 = pFVar24[8];
                  FVar35.Value = pFVar24[9].ComparisonIndex.Value;
                  uVar28 = pFVar24[9].Number;
                  *(FName *)&(pFVar23->InsertPosition).Position = FVar4;
                  *(FName *)&pFVar23->Context = FVar6;
                  FVar4 = pFVar24[10];
                  FVar13.Value = pFVar24[0xb].ComparisonIndex.Value;
                  uVar36 = pFVar24[0xb].Number;
                  (pFVar23->Context).ContextObjects.AllocatorInstance.Data =
                       (FScriptContainerElement *)FVar7;
                  (pFVar23->Context).ContextObjects.ArrayNum = FVar35.Value;
                  (pFVar23->Context).ContextObjects.ArrayMax = uVar28;
                  FVar6 = pFVar24[0xc];
                  FVar35.Value = pFVar24[0xd].ComparisonIndex.Value;
                  uVar28 = pFVar24[0xd].Number;
                  (pFVar23->Context).ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data =
                       (FScriptContainerElement *)FVar4;
                  (pFVar23->Context).ContextObjectCleanupFuncs.Pairs.ArrayNum = FVar13.Value;
                  (pFVar23->Context).ContextObjectCleanupFuncs.Pairs.ArrayMax = uVar36;
                  FVar4 = pFVar24[0xe];
                  FVar13.Value = pFVar24[0xf].ComparisonIndex.Value;
                  uVar36 = pFVar24[0xf].Number;
                  (pFVar23->Context).ContextCleanupFuncs.AllocatorInstance.Data =
                       (FScriptContainerElement *)FVar6;
                  (pFVar23->Context).ContextCleanupFuncs.ArrayNum = FVar35.Value;
                  (pFVar23->Context).ContextCleanupFuncs.ArrayMax = uVar28;
                  (pFVar23->Context).CommandLists.AllocatorInstance.Data =
                       (FScriptContainerElement *)FVar4;
                  (pFVar23->Context).CommandLists.ArrayNum = FVar13.Value;
                  (pFVar23->Context).CommandLists.ArrayMax = uVar36;
                  lVar32 = lVar32 + -1;
                  pFVar25 = pFVar24 + 0x10;
                } while (lVar32 != 0);
                FVar4 = pFVar24[0x11];
                FVar6 = pFVar24[0x12];
                FVar35.Value = pFVar24[0x13].ComparisonIndex.Value;
                uVar28 = pFVar24[0x13].Number;
                ((TSharedPtr<FUICommandList,1> *)pFVar21)->Object = (FUICommandList *)pFVar24[0x10];
                (pFVar23->Context).CommandList.SharedReferenceCount.ReferenceController =
                     (TReferenceControllerBase<1> *)FVar4;
                TVar11 = *(TObjectPtr<UToolMenuSectionDynamic>_u_0 *)(pFVar24 + 0x14);
                FVar4 = pFVar24[0x15];
                FVar13.Value = pFVar24[0x16].ComparisonIndex.Value;
                uVar36 = pFVar24[0x16].Number;
                (pFVar23->Context).Extenders.AllocatorInstance.Data =
                     (FScriptContainerElement *)FVar6;
                (pFVar23->Context).Extenders.ArrayNum = FVar35.Value;
                (pFVar23->Context).Extenders.ArrayMax = uVar28;
                (pFVar23->ToolMenuSectionDynamic).field0_0x0 = TVar11;
                (pFVar23->Label).Value.TextData.Reference = (ITextData *)FVar4;
                (pFVar23->Label).Value.Flags = FVar13.Value;
                *(uint *)&(pFVar23->Label).Value.field_0xc = uVar36;
                TArray<FToolMenuSection,TSizedDefaultAllocator<32>_>::Insert
                          (&this->Sections,&local_280,uVar29);
                TArray<FToolMenuSection,TSizedDefaultAllocator<32>_>::RemoveAt
                          (&this->Sections,uVar19 + 1,No);
                FToolMenuSection::~FToolMenuSection(&local_280);
                uVar34 = uVar33;
                uVar19 = uVar29;
              }
              uVar30 = (ulonglong)(uVar29 + 1);
              uVar33 = uVar33 + 0x238;
            } while ((int)(uVar29 + 1) < (int)uVar19);
          }
        }
      }
      iVar1 = (this->Sections).ArrayNum;
      local_4e0 = (longlong)iVar1;
      if ((int)uVar19 < iVar1) {
        uVar20 = ~uVar19 >> 0x1f;
      }
      if (uVar20 == 0) {
        local_4e8 = (longlong)(int)uVar19;
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar18) {
          pcVar5 = (code *)swi(3);
          pFVar21 = (FToolMenuSection *)(*pcVar5)();
          return pFVar21;
        }
      }
      return (FToolMenuSection *)
             ((this->Sections).AllocatorInstance.Data + (longlong)(int)uVar19 * 0x238);
    }
  }
  uVar19 = (this->Sections).ArrayNum;
  uVar30 = 0;
  uVar28 = uVar19;
  if ((this->bIsRegistering != false) && (uVar34 = uVar30, 0 < (int)uVar19)) {
    do {
      iVar1 = (this->Sections).ArrayNum;
      uVar31 = (uint)uVar34;
      uVar28 = 0;
      if ((int)uVar31 < iVar1) {
        uVar28 = ~uVar31 >> 0x1f;
      }
      if (uVar28 == 0) {
        local_4e8 = (longlong)(int)uVar31;
        local_4e0 = (longlong)iVar1;
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar18) {
          pcVar5 = (code *)swi(3);
          pFVar21 = (FToolMenuSection *)(*pcVar5)();
          return pFVar21;
        }
      }
      uVar28 = uVar31;
      if ((this->Sections).AllocatorInstance.Data[uVar30 + 0x231] == (FScriptContainerElement)0x0)
      break;
      uVar30 = uVar30 + 0x238;
      uVar34 = (ulonglong)(uVar31 + 1);
      uVar28 = uVar19;
    } while ((int)(uVar31 + 1) < (this->Sections).ArrayNum);
  }
  TArray<FToolMenuSection,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
            (&this->Sections,uVar28,1);
  pFVar21 = (FToolMenuSection *)
            ((this->Sections).AllocatorInstance.Data + (longlong)(int)uVar28 * 0x238);
  DefaultConstructItems<FToolMenuSection,int>(pFVar21,1);
  pFVar21->Name = param_1;
  TAttribute<FText>::operator=(&pFVar21->Label,param_2);
  EVar14 = param_3->Position;
  EVar15 = param_3->Fallback;
  uVar16 = *(undefined2 *)&param_3->field_0xa;
  (pFVar21->InsertPosition).Name = param_3->Name;
  (pFVar21->InsertPosition).Position = EVar14;
  (pFVar21->InsertPosition).Fallback = EVar15;
  *(undefined2 *)&(pFVar21->InsertPosition).field_0xa = uVar16;
  if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (UToolMenus::bHasShutDown == false)) {
    pFVar25 = ::FName::FName(&local_4c0,"ToolMenus");
    FVar4 = *pFVar25;
    this_00 = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this_00,FVar4);
    UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
  }
  pUVar17 = UToolMenus::Singleton;
  iVar1 = (UToolMenus::Singleton->OwnerStack).ArrayNum;
  local_4e0 = (longlong)iVar1;
  if (iVar1 < 1) {
    uStack_4c8 = uStack_4c8 & 0xffffff00;
    local_4d0 = 0;
    iStack_4cc = 0;
  }
  else {
    uVar28 = iVar1 - 1;
    uVar19 = 0;
    if ((int)uVar28 < iVar1) {
      uVar19 = ~uVar28 >> 0x1f;
    }
    if (uVar19 == 0) {
      local_4e8 = (longlong)(int)uVar28;
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar18) {
        pcVar5 = (code *)swi(3);
        pFVar21 = (FToolMenuSection *)(*pcVar5)();
        return pFVar21;
      }
    }
    pFVar3 = (pUVar17->OwnerStack).AllocatorInstance.Data +
             (longlong)(pUVar17->OwnerStack).ArrayNum * 0x10 + -0x10;
    local_4d0 = *(int *)pFVar3;
    iStack_4cc = *(int *)(pFVar3 + 4);
    uStack_4c8 = *(uint *)(pFVar3 + 8);
    uStack_4c4 = *(undefined4 *)(pFVar3 + 0xc);
  }
  (pFVar21->Owner).field0_0x0.ValueName.Index = local_4d0;
  (pFVar21->Owner).field0_0x0.ValueName.Number = iStack_4cc;
  *(uint *)&(pFVar21->Owner).ValueType = uStack_4c8;
  *(undefined4 *)&(pFVar21->Owner).field_0xc = uStack_4c4;
  pFVar21->bIsRegistering = this->bIsRegistering;
  pFVar21->bAddedDuringRegister = this->bIsRegistering;
  return pFVar21;
}

// AddSectionScript @ 142c479e0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
UToolMenu::AddSectionScript
          (UToolMenu *this,FName param_1,FText *param_2,FName param_3,EToolMenuInsertType param_4,
          EToolMenuSectionAlign param_5)

{
  bool bVar1;
  FToolMenuSection *pFVar2;
  undefined1 local_res20 [8];
  FDestructionSentinel local_58;
  FText local_40;
  bool local_30;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  pFVar2 = FindOrAddSection(this,param_1);
  bVar1 = FText::IsEmpty(param_2);
  if (!bVar1) {
    local_40.TextData.Reference = (param_2->TextData).Reference;
    if (local_40.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_40.TextData.Reference + 8))
                (local_40.TextData.Reference,local_res20);
    }
    local_40.Flags = param_2->Flags;
    local_30 = true;
    local_18 = 0;
    local_28 = (undefined1  [8])0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    FText::operator=(&(pFVar2->Label).Value,&local_40);
    (pFVar2->Label).bIsSet = local_30;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar2->Label).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
               (FWriteAccessScope *)&local_58);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)
                 CONCAT44(local_58.Accessor._4_4_,
                          CONCAT22(local_58.Accessor._2_2_,
                                   CONCAT11(local_58.Accessor._1_1_,local_58.Accessor._0_1_))),
                 &local_58);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_28);
    if (local_40.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
    }
  }
  if ((param_3 != (FName)0x0) || (param_4 != Default)) {
    (pFVar2->InsertPosition).Name = param_3;
    (pFVar2->InsertPosition).Position = param_4;
    (pFVar2->InsertPosition).Fallback = 3;
    *(undefined2 *)&(pFVar2->InsertPosition).field_0xa = local_58.Accessor._2_2_;
  }
  pFVar2->Alignment = param_5;
  return;
}

// AddSubMenu @ 142c48800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

UToolMenu * __thiscall
UToolMenu::AddSubMenu
          (UToolMenu *this,FToolMenuOwner *param_1,FName param_2,FName param_3,FText *param_4,
          FText *param_5)

{
  FName FVar1;
  UToolMenus *this_00;
  FToolMenuSection *this_01;
  FName *pFVar2;
  FModuleManager *this_02;
  FString *pFVar3;
  FString *pFVar4;
  UToolMenu *pUVar5;
  ForAnyElementType FVar6;
  FName local_res20;
  undefined1 auStackY_958 [32];
  FDestructionSentinel local_908;
  FName local_8f0;
  undefined1 local_8e8 [8];
  ForAnyElementType local_8e0;
  int local_8d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_8d0;
  ForAnyElementType FStack_8c8;
  int local_8c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_8b8;
  ForAnyElementType FStack_8b0;
  int local_8a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_8a0;
  ForAnyElementType FStack_898;
  int local_890;
  FName local_888;
  undefined1 local_880 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_868;
  ForAnyElementType FStack_860;
  ulonglong local_858;
  undefined1 local_850 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_838;
  ForAnyElementType FStack_830;
  ulonglong local_828;
  FString local_820;
  undefined1 local_810 [40];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_7e8;
  ForAnyElementType FStack_7e0;
  ulonglong local_7d8;
  FString local_7d0;
  FString local_7c0;
  FToolMenuEntry local_7b0;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_958;
  local_8f0.ComparisonIndex.Value = 0;
  local_8f0.Number = 0;
  local_res20 = param_3;
  FSlateIcon::FSlateIcon((FSlateIcon *)local_810);
  local_810[0x20] = false;
  local_7e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_7e0.Data = (FScriptContainerElement *)0x0;
  local_850._0_8_ = (param_5->TextData).Reference;
  local_7d8 = 0;
  local_8e8 = (undefined1  [8])0x0;
  local_8e0.Data = (FScriptContainerElement *)0x0;
  local_8d8 = 0;
  local_8c0 = 0;
  local_8a8 = 0;
  local_890 = 0;
  local_8d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_8c8.Data = (FScriptContainerElement *)0x0;
  local_8b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_8b0.Data = (FScriptContainerElement *)0x0;
  local_8a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_898.Data = (FScriptContainerElement *)0x0;
  if ((ITextData *)local_850._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_850._0_8_ + 8))(local_850._0_8_,&local_888);
  }
  local_850._8_4_ = param_5->Flags;
  local_850[0x10] = true;
  local_880._0_8_ = (param_4->TextData).Reference;
  local_828 = 0;
  local_838.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_830.Data = (FScriptContainerElement *)0x0;
  if ((ITextData *)local_880._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_880._0_8_ + 8))(local_880._0_8_,&local_888);
  }
  local_880._8_4_ = param_4->Flags;
  local_880[0x10] = true;
  local_868.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_860.Data = (FScriptContainerElement *)0x0;
  local_858 = 0;
  FToolMenuEntry::InitSubMenu
            (&local_7b0,local_res20,(TAttribute<FText> *)local_880,(TAttribute<FText> *)local_850,
             (FNewToolMenuChoice *)local_8e8,false,(TAttribute<FSlateIcon> *)local_810,true,
             local_8f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_868,(FWriteAccessScope *)&local_908);
  if (((int)local_858 != 0) && (FStack_860.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_860.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_860,0,0,0x10);
    local_858 = local_858 & 0xffffffff00000000;
  }
  if (local_908.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_908.Accessor,&local_908);
  }
  if (FStack_860.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_860.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_868.AccessDetector);
  if ((ITextData *)local_880._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_880._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_838,(FWriteAccessScope *)&local_908);
  if (((int)local_828 != 0) && (FStack_830.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_830.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_830,0,0,0x10);
    local_828 = local_828 & 0xffffffff00000000;
  }
  if (local_908.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_908.Accessor,&local_908);
  }
  if (FStack_830.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_830.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_838.AccessDetector);
  if ((ITextData *)local_850._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_850._0_8_ + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_8a0,(FWriteAccessScope *)&local_908);
  if ((local_890 != 0) && (FStack_898.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_898.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_898,0,0,0x10);
    local_890 = 0;
  }
  if (local_908.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_908.Accessor,&local_908);
  }
  if (FStack_898.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_898.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_8a0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_8b8,(FWriteAccessScope *)&local_908);
  if ((local_8a8 != 0) && (FStack_8b0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_8b0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_8b0,0,0,0x10);
    local_8a8 = 0;
  }
  if (local_908.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_908.Accessor,&local_908);
  }
  if (FStack_8b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_8b0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_8b8.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_8d0,(FWriteAccessScope *)&local_908);
  if ((local_8c0 != 0) && (FStack_8c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_8c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_8c8,0,0,0x10);
    local_8c0 = 0;
  }
  if (local_908.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_908.Accessor,&local_908);
  }
  if (FStack_8c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_8c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_8d0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8e8,
             (FWriteAccessScope *)&local_908);
  if ((local_8d8 != 0) && (local_8e0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_8e0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_8e0,0,0,0x10);
    local_8d8 = 0;
  }
  if (local_908.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_908.Accessor,&local_908);
  }
  if (local_8e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8e0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_8e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_7e8,(FWriteAccessScope *)&local_908);
  if (((int)local_7d8 != 0) && (FStack_7e0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_7e0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_7e0,0,0,0x10);
    local_7d8 = local_7d8 & 0xffffffff00000000;
  }
  if (local_908.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_908.Accessor,&local_908);
  }
  if (FStack_7e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_7e0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_7e8.AccessDetector);
  local_7b0.Owner.field0_0x0.ValueName = *(FStoreName *)&param_1->field0_0x0;
  local_7b0.Owner.ValueType = param_1->ValueType;
  local_7b0.Owner._9_7_ = *(undefined7 *)&param_1->field_0x9;
  this_01 = FindOrAddSection(this,param_2);
  FToolMenuSection::AddEntry(this_01,&local_7b0);
  if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (UToolMenus::bHasShutDown == false)) {
    pFVar2 = ::FName::FName(&local_8f0,"ToolMenus");
    FVar1 = *pFVar2;
    this_02 = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this_02,FVar1);
    UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
  }
  this_00 = UToolMenus::Singleton;
  pFVar3 = ::FName::ToString(&local_res20,(FString *)&local_908);
  pFVar4 = ::FName::ToString(&this->MenuName,&local_7c0);
  ::FString::ConcatFC(&local_7d0,pFVar4,L".");
  ::FString::ConcatFF(&local_820,&local_7d0,pFVar3);
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_820.Data.ArrayNum != 0) {
    FVar6.Data = local_820.Data.AllocatorInstance.Data;
  }
  pFVar2 = ::FName::FName(&local_888,(wchar_t *)FVar6.Data);
  pUVar5 = UToolMenus::ExtendMenu(this_00,*pFVar2);
  if (local_820.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_820.Data.AllocatorInstance.Data);
  }
  if (local_7d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7d0.Data.AllocatorInstance.Data);
  }
  if (local_7c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7c0.Data.AllocatorInstance.Data);
  }
  if ((void *)local_908._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_908._0_8_);
  }
  FToolMenuEntry::~FToolMenuEntry(&local_7b0);
  return pUVar5;
}

// AddSubMenuScript @ 142c49a00

UToolMenu * __thiscall
UToolMenu::AddSubMenuScript
          (UToolMenu *this,FName param_1,FName param_2,FName param_3,FText *param_4,FText *param_5)

{
  UToolMenu *pUVar1;
  FToolMenuOwner_u_0 local_18;
  longlong lStack_10;
  
  if (param_1 == (FName)0x0) {
    lStack_10 = (ulonglong)lStack_10._1_7_ << 8;
  }
  else {
    lStack_10 = CONCAT71(lStack_10._1_7_,2);
  }
  local_18 = (FToolMenuOwner_u_0)param_1;
  pUVar1 = AddSubMenu(this,(FToolMenuOwner *)&local_18.ValueName,param_2,param_3,param_4,param_5);
  return pUVar1;
}

// ContainsEntry @ 142c50750

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall UToolMenu::ContainsEntry(UToolMenu *this,FName param_1)

{
  int iVar1;
  bool bVar2;
  FToolMenuEntry *pFVar3;
  FToolMenuSection *pFVar4;
  FToolMenuSection *this_00;
  undefined1 local_res10 [8];
  
  if (param_1 == (FName)0x0) {
LAB_142c507ba:
    bVar2 = false;
  }
  else {
    iVar1 = (this->Sections).ArrayNum;
    this_00 = (FToolMenuSection *)(this->Sections).AllocatorInstance.Data;
    pFVar4 = this_00 + iVar1;
    while( true ) {
      if ((this->Sections).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FToolMenuSection_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (this_00 == pFVar4) goto LAB_142c507ba;
      pFVar3 = FToolMenuSection::FindEntry(this_00,param_1);
      if (pFVar3 != (FToolMenuEntry *)0x0) break;
      this_00 = this_00 + 1;
    }
    bVar2 = true;
  }
  return bVar2;
}

// ContainsSection @ 142c507e0

bool __thiscall UToolMenu::ContainsSection(UToolMenu *this,FName param_1)

{
  int iVar1;
  bool bVar2;
  FName *pFVar3;
  FName *pFVar4;
  undefined1 local_res10 [8];
  
  if (param_1 == (FName)0x0) {
LAB_142c5083f:
    bVar2 = false;
  }
  else {
    iVar1 = (this->Sections).ArrayNum;
    pFVar4 = (FName *)(this->Sections).AllocatorInstance.Data;
    pFVar3 = pFVar4 + (longlong)iVar1 * 0x47;
    while( true ) {
      if ((this->Sections).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FToolMenuSection_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar4 == pFVar3) goto LAB_142c5083f;
      if (*pFVar4 == param_1) break;
      pFVar4 = pFVar4 + 0x47;
    }
    bVar2 = true;
  }
  return bVar2;
}

// Empty @ 142c56f60

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall UToolMenu::Empty(UToolMenu *this)

{
  TSharedPtr<FUICommandList,1> *pTVar1;
  int *piVar2;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  piVar2 = &(this->Context).ContextObjects.ArrayMax;
  (this->Context).ContextObjects.ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Context).ContextObjects.AllocatorInstance,0,piVar2);
  }
  DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
            ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
             (this->Context).ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data,
             (this->Context).ContextObjectCleanupFuncs.Pairs.ArrayNum);
  piVar2 = &(this->Context).ContextObjectCleanupFuncs.Pairs.ArrayMax;
  (this->Context).ContextObjectCleanupFuncs.Pairs.ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,0,(ForAnyElementType *)&(this->Context).ContextObjectCleanupFuncs,0,piVar2)
    ;
  }
  DestructItems<TFunction<void___cdecl(void)>,int>
            ((TFunction<void___cdecl(void)> *)
             (this->Context).ContextCleanupFuncs.AllocatorInstance.Data,
             (this->Context).ContextCleanupFuncs.ArrayNum);
  piVar2 = &(this->Context).ContextCleanupFuncs.ArrayMax;
  (this->Context).ContextCleanupFuncs.ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,0x10,0,&(this->Context).ContextCleanupFuncs.AllocatorInstance,0,piVar2);
  }
  DestructItems<TSharedPtr<FUICommandList,1>,int>
            ((TSharedPtr<FUICommandList,1> *)(this->Context).CommandLists.AllocatorInstance.Data,
             (this->Context).CommandLists.ArrayNum);
  piVar2 = &(this->Context).CommandLists.ArrayMax;
  (this->Context).CommandLists.ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->Context).CommandLists.AllocatorInstance,0,piVar2);
  }
  pTVar1 = &(this->Context).CommandList;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<FUICommandList,1> *)&local_18) {
    pTVar1->Object = (FUICommandList *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Context).CommandList.SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  DestructItems<TSharedPtr<FExtender,1>,int>
            ((TSharedPtr<FExtender,1> *)(this->Context).Extenders.AllocatorInstance.Data,
             (this->Context).Extenders.ArrayNum);
  piVar2 = &(this->Context).Extenders.ArrayMax;
  (this->Context).Extenders.ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->Context).Extenders.AllocatorInstance,0,piVar2);
  }
  DestructItems<FToolMenuSection,int>
            ((FToolMenuSection *)(this->Sections).AllocatorInstance.Data,(this->Sections).ArrayNum);
  piVar2 = &(this->Sections).ArrayMax;
  (this->Sections).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x238,8,0,&(this->Sections).AllocatorInstance,0,piVar2);
  }
  (this->SubMenuParent).field0_0x0.DebugPtr = (UToolMenu *)0x0;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ModifyBlockWidgetAfterMake);
  return;
}

// FindEntry @ 142c5a170

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __thiscall UToolMenu::FindEntry(UToolMenu *this,FName param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FToolMenuEntry *pFVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  
  uVar9 = 0;
  if (0 < (this->Sections).ArrayNum) {
    lVar7 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < (this->Sections).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FToolMenuEntry *)(*pcVar2)();
        return pFVar5;
      }
      pFVar1 = (this->Sections).AllocatorInstance.Data;
      uVar6 = 0;
      if (0 < *(int *)(pFVar1 + lVar7 + 0x20)) {
        lVar8 = 0;
        do {
          uVar4 = 0;
          if ((int)uVar6 < *(int *)(pFVar1 + lVar7 + 0x20)) {
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
            pFVar5 = (FToolMenuEntry *)(*pcVar2)();
            return pFVar5;
          }
          if (*(FName *)(lVar8 + *(longlong *)(pFVar1 + lVar7 + 0x18)) == param_1) {
            uVar4 = 0;
            if ((int)uVar6 < *(int *)(pFVar1 + lVar7 + 0x20)) {
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
              pFVar5 = (FToolMenuEntry *)(*pcVar2)();
              return pFVar5;
            }
            pFVar5 = (FToolMenuEntry *)
                     ((longlong)(int)uVar6 * 0x780 + *(longlong *)(pFVar1 + lVar7 + 0x18));
            if (pFVar5 != (FToolMenuEntry *)0x0) {
              return pFVar5;
            }
            break;
          }
          uVar6 = uVar6 + 1;
          lVar8 = lVar8 + 0x780;
        } while ((int)uVar6 < *(int *)(pFVar1 + lVar7 + 0x20));
      }
      uVar9 = uVar9 + 1;
      lVar7 = lVar7 + 0x238;
    } while ((int)uVar9 < (this->Sections).ArrayNum);
  }
  return (FToolMenuEntry *)0x0;
}

// FindEntry @ 142c5a320

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuEntry * __thiscall UToolMenu::FindEntry(UToolMenu *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FToolMenuEntry *pFVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (0 < (this->Sections).ArrayNum) {
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->Sections).ArrayNum) {
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
      pFVar4 = FToolMenuSection::FindEntry
                         ((FToolMenuSection *)
                          ((this->Sections).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x238),
                          param_1);
      if (pFVar4 != (FToolMenuEntry *)0x0) {
        return pFVar4;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (this->Sections).ArrayNum);
  }
  return (FToolMenuEntry *)0x0;
}

// FindEntry @ 142c5a3d0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall UToolMenu::FindEntry(UToolMenu *this,FName param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (0 < (this->Sections).ArrayNum) {
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->Sections).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      iVar5 = FToolMenuSection::IndexOfBlock
                        ((FToolMenuSection *)
                         ((this->Sections).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x238),
                         param_1);
      *param_3 = iVar5;
      if (iVar5 != -1) {
        *param_2 = uVar6;
        return true;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (this->Sections).ArrayNum);
  }
  return false;
}

// FindInsertIndex @ 142c5a4b0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

int __thiscall UToolMenu::FindInsertIndex(UToolMenu *this,FToolMenuSection *param_1)

{
  FName FVar1;
  undefined1 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  FVar1 = (param_1->InsertPosition).Name;
  uVar2 = (param_1->InsertPosition).Position;
  if ((FScriptContainerElement)uVar2 == (FScriptContainerElement)0x0) {
    iVar7 = (this->Sections).ArrayNum;
    uVar9 = 0;
    if (0 < iVar7) {
      lVar10 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar9 < (this->Sections).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        if ((this->Sections).AllocatorInstance.Data[lVar10 + 0x30] == (FScriptContainerElement)0x4)
        {
          return uVar9;
        }
        iVar7 = (this->Sections).ArrayNum;
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x238;
      } while ((int)uVar9 < iVar7);
      return iVar7;
    }
  }
  else if ((FScriptContainerElement)uVar2 == (FScriptContainerElement)0x3) {
    iVar7 = (this->Sections).ArrayNum;
    uVar9 = 0;
    if (0 < iVar7) {
      lVar10 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar9 < (this->Sections).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        if ((this->Sections).AllocatorInstance.Data[lVar10 + 0x30] != (FScriptContainerElement)0x3)
        {
          return uVar9;
        }
        iVar7 = (this->Sections).ArrayNum;
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x238;
      } while ((int)uVar9 < iVar7);
      return iVar7;
    }
  }
  else {
    if ((FScriptContainerElement)uVar2 == (FScriptContainerElement)0x4) {
      uVar9 = (this->Sections).ArrayNum - 1;
      if (-1 < (int)uVar9) {
        lVar10 = (longlong)(int)uVar9 * 0x238;
        do {
          uVar6 = 0;
          if ((int)uVar9 < (this->Sections).ArrayNum) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            iVar7 = (*pcVar4)();
            return iVar7;
          }
          if ((this->Sections).AllocatorInstance.Data[lVar10 + 0x30] == (FScriptContainerElement)0x4
             ) {
            return uVar9 + 1;
          }
          lVar10 = lVar10 + -0x238;
          uVar9 = uVar9 - 1;
        } while (-1 < (int)uVar9);
      }
      return (this->Sections).ArrayNum;
    }
    uVar9 = IndexOfSection(this,FVar1);
    if (uVar9 == 0xffffffff) {
      return -1;
    }
    if (((FScriptContainerElement)uVar2 == (FScriptContainerElement)0x2) &&
       (uVar9 = uVar9 + 1, (int)uVar9 < (this->Sections).ArrayNum)) {
      lVar10 = (longlong)(int)uVar9 * 0x238;
      uVar6 = uVar9;
      do {
        uVar8 = 0;
        if ((int)uVar6 < (this->Sections).ArrayNum) {
          uVar8 = ~uVar6 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        pFVar3 = (this->Sections).AllocatorInstance.Data;
        if ((FVar1 == *(FName *)(pFVar3 + lVar10 + 0x28)) &&
           (pFVar3[lVar10 + 0x30] == (FScriptContainerElement)0x2)) {
          uVar9 = uVar6 + 1;
        }
        uVar6 = uVar6 + 1;
        lVar10 = lVar10 + 0x238;
      } while ((int)uVar6 < (this->Sections).ArrayNum);
    }
    iVar7 = (this->Sections).ArrayNum;
    if ((int)uVar9 < iVar7) {
      lVar10 = (longlong)(int)uVar9 * 0x238;
      do {
        uVar6 = 0;
        if ((int)uVar9 < (this->Sections).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        pFVar3 = (this->Sections).AllocatorInstance.Data;
        if (FVar1 != *(FName *)(pFVar3 + lVar10 + 0x28)) {
          return uVar9;
        }
        if ((FScriptContainerElement)uVar2 != pFVar3[lVar10 + 0x30]) {
          return uVar9;
        }
        iVar7 = (this->Sections).ArrayNum;
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x238;
      } while ((int)uVar9 < iVar7);
    }
  }
  return iVar7;
}

// FindMenuCustomization @ 142c5a8b0

FCustomizedToolMenu * __thiscall UToolMenu::FindMenuCustomization(UToolMenu *this)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this_00;
  FCustomizedToolMenu *pFVar3;
  FName local_res8;
  
  if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (!UToolMenus::bHasShutDown)) {
    pFVar2 = ::FName::FName(&local_res8,"ToolMenus");
    FVar1 = *pFVar2;
    this_00 = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this_00,FVar1);
    UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
  }
  pFVar3 = UToolMenus::FindMenuCustomization(UToolMenus::Singleton,this->MenuName);
  return pFVar3;
}

// FindMenuProfile @ 142c5ab00

FToolMenuProfile * __thiscall UToolMenu::FindMenuProfile(UToolMenu *this,FName *param_1)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this_00;
  FToolMenuProfileMap *this_01;
  FToolMenuProfile *pFVar3;
  FName local_res8;
  
  if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (!UToolMenus::bHasShutDown)) {
    pFVar2 = ::FName::FName(&local_res8,"ToolMenus");
    FVar1 = *pFVar2;
    this_00 = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this_00,FVar1);
    UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
  }
  FVar1 = *param_1;
  this_01 = TMapBase<FName,FToolMenuProfileMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfileMap,0>_>
            ::Find((TMapBase<FName,FToolMenuProfileMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfileMap,0>_>
                    *)&UToolMenus::Singleton->MenuProfiles,this->MenuName);
  if (this_01 != (FToolMenuProfileMap *)0x0) {
    pFVar3 = TMapBase<FName,FToolMenuProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfile,0>_>
             ::Find((TMapBase<FName,FToolMenuProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfile,0>_>
                     *)this_01,FVar1);
    return pFVar3;
  }
  return (FToolMenuProfile *)0x0;
}

// FindOrAddSection @ 142c5abf0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuSection * __thiscall UToolMenu::FindOrAddSection(UToolMenu *this,FName param_1)

{
  int iVar1;
  FToolMenuSection *pFVar2;
  FToolMenuSection *pFVar3;
  undefined1 local_res8 [8];
  undefined4 local_70;
  FDestructionSentinel local_68;
  undefined1 local_48 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_30;
  ForAnyElementType FStack_28;
  ulonglong local_20;
  
  iVar1 = (this->Sections).ArrayNum;
  pFVar2 = (FToolMenuSection *)(this->Sections).AllocatorInstance.Data;
  pFVar3 = pFVar2 + iVar1;
  while( true ) {
    if ((this->Sections).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FToolMenuSection,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (pFVar2->Name == param_1) {
      return pFVar2;
    }
    pFVar2 = pFVar2 + 1;
  }
  local_70 = CONCAT22(local_70._2_2_,0x300);
  FText::FText((FText *)local_48);
  local_48[0x10] = false;
  local_68.Accessor._0_4_ = local_70;
  local_20 = 0;
  local_30.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_28.Data = (FScriptContainerElement *)0x0;
  local_68.AccessType = Reader;
  local_68._4_4_ = 0;
  pFVar2 = AddSection(this,param_1,(TAttribute<FText> *)local_48,(FToolMenuInsert *)&local_68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_30,(FWriteAccessScope *)&local_68);
  if (((int)local_20 != 0) && (FStack_28.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_28,0,0,0x10);
    local_20 = local_20 & 0xffffffff00000000;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)
               CONCAT44(local_68.Accessor._4_4_,local_68.Accessor._0_4_),&local_68);
  }
  if (FStack_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_30.AccessDetector);
  if ((ITextData *)local_48._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_48._0_8_ + 0x10))();
  }
  return pFVar2;
}

// FindOrAddSection @ 142c5ad50

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuSection * __thiscall
UToolMenu::FindOrAddSection
          (UToolMenu *this,FName param_1,TAttribute<FText> *param_2,FToolMenuInsert *param_3)

{
  FToolMenuSection *pFVar1;
  FToolMenuInsert local_18;
  
  pFVar1 = FindSection(this,param_1);
  if (pFVar1 == (FToolMenuSection *)0x0) {
    local_18.Name = param_3->Name;
    local_18.Position = param_3->Position;
    local_18.Fallback = param_3->Fallback;
    local_18._10_2_ = *(undefined2 *)&param_3->field_0xa;
    pFVar1 = AddSection(this,param_1,param_2,&local_18);
  }
  return pFVar1;
}

// FindSection @ 142c5af20

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolMenuSection * __thiscall UToolMenu::FindSection(UToolMenu *this,FName param_1)

{
  int iVar1;
  FToolMenuSection *pFVar2;
  FToolMenuSection *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Sections).ArrayNum;
  pFVar3 = (FToolMenuSection *)(this->Sections).AllocatorInstance.Data;
  pFVar2 = pFVar3 + iVar1;
  while( true ) {
    if ((this->Sections).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FToolMenuSection,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (pFVar3->Name == param_1) {
      return pFVar3;
    }
    pFVar3 = pFVar3 + 1;
  }
  return (FToolMenuSection *)0x0;
}

// GetMenuCustomizationHierarchy @ 142c5e4f0

FCustomizedToolMenuHierarchy * __thiscall
UToolMenu::GetMenuCustomizationHierarchy
          (UToolMenu *this,FCustomizedToolMenuHierarchy *__return_storage_ptr__)

{
  TArray<FCustomizedToolMenu_const_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FCustomizedToolMenu_const_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  UToolMenus *this_00;
  bool bVar6;
  int iVar7;
  FName *pFVar8;
  FModuleManager *this_01;
  FCustomizedToolMenuHierarchy *pFVar9;
  int iVar10;
  ForAnyElementType FVar11;
  undefined1 local_res18 [8];
  FName local_res20;
  FCustomizedToolMenu *local_58;
  FCustomizedToolMenu *local_50;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  
  pTVar1 = &__return_storage_ptr__->Hierarchy;
  pTVar2 = &__return_storage_ptr__->RuntimeHierarchy;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Hierarchy).ArrayNum = 0;
  (__return_storage_ptr__->Hierarchy).ArrayMax = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->RuntimeHierarchy).ArrayNum = 0;
  (__return_storage_ptr__->RuntimeHierarchy).ArrayMax = 0;
  if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (UToolMenus::bHasShutDown == false)) {
    pFVar8 = ::FName::FName(&local_res20,"ToolMenus");
    FVar3 = *pFVar8;
    this_01 = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this_01,FVar3);
    UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
  }
  this_00 = UToolMenus::Singleton;
  GetMenuHierarchyNames(this,&local_48,true);
  iVar10 = local_48.ArrayNum;
  pFVar8 = (FName *)(local_48.AllocatorInstance.Data + (longlong)iVar10 * 8);
  FVar11.Data = local_48.AllocatorInstance.Data;
  while( true ) {
    if (local_48.ArrayNum != iVar10) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((FName *)FVar11.Data == pFVar8) break;
    local_58 = UToolMenus::FindMenuCustomization(this_00,*(FName *)FVar11.Data);
    if (local_58 != (FCustomizedToolMenu *)0x0) {
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      if ((pFVar4 <= (FScriptContainerElement *)&local_58) &&
         ((FScriptContainerElement *)&local_58 <
          pFVar4 + (longlong)(__return_storage_ptr__->Hierarchy).ArrayMax * 8)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FCustomizedToolMenuHierarchy *)(*pcVar5)();
          return pFVar9;
        }
      }
      iVar7 = (__return_storage_ptr__->Hierarchy).ArrayNum;
      if (iVar7 == (__return_storage_ptr__->Hierarchy).ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar1->AllocatorInstance,
                           &(__return_storage_ptr__->Hierarchy).ArrayMax);
      }
      (__return_storage_ptr__->Hierarchy).ArrayNum = iVar7 + 1;
      *(FCustomizedToolMenu **)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_58;
    }
    local_50 = UToolMenus::FindRuntimeMenuCustomization(this_00,*(FName *)FVar11.Data);
    if (local_50 != (FCustomizedToolMenu *)0x0) {
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      if ((pFVar4 <= (FScriptContainerElement *)&local_50) &&
         ((FScriptContainerElement *)&local_50 <
          pFVar4 + (longlong)(__return_storage_ptr__->RuntimeHierarchy).ArrayMax * 8)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar9 = (FCustomizedToolMenuHierarchy *)(*pcVar5)();
          return pFVar9;
        }
      }
      iVar7 = (__return_storage_ptr__->RuntimeHierarchy).ArrayNum;
      if (iVar7 == (__return_storage_ptr__->RuntimeHierarchy).ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,
                           &(__return_storage_ptr__->RuntimeHierarchy).ArrayMax);
      }
      (__return_storage_ptr__->RuntimeHierarchy).ArrayNum = iVar7 + 1;
      *(FCustomizedToolMenu **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_50;
    }
    FVar11.Data = FVar11.Data + 8;
  }
  if ((FName *)local_48.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetMenuHierarchyNames @ 142c5e770

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UToolMenu::GetMenuHierarchyNames
          (UToolMenu *this,TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          bool param_1)

{
  FName FVar1;
  undefined8 uVar2;
  code *pcVar3;
  UToolMenus *this_00;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FName *pFVar8;
  FModuleManager *pFVar9;
  TObjectPtr<UToolMenu>_u_0 *pTVar10;
  TArray<UToolMenu_*,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar12;
  FString *pFVar13;
  FString *pFVar14;
  ulonglong uVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *local_res8;
  FName local_res20;
  FString local_128;
  TArray<UToolMenu_const_*,TSizedDefaultAllocator<32>_> local_118;
  TArray<UToolMenu_*,TSizedDefaultAllocator<32>_> local_108;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FString local_e0;
  FString local_d0;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  TArray<UToolMenu_*,TSizedDefaultAllocator<32>_> local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  TArray<UToolMenu_*,TSizedDefaultAllocator<32>_> local_60 [2];
  
  uVar19 = 0;
  iVar7 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res8 = (FScriptContainerElement *)0x0;
  if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (UToolMenus::bHasShutDown == false)) {
    pFVar8 = ::FName::FName(&local_c0,"ToolMenus");
    FVar1 = *pFVar8;
    pFVar9 = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(pFVar9,FVar1);
    UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
  }
  pTVar10 = &TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
             ::Find((TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
                     *)&UToolMenus::Singleton->Menus,this->MenuName)->field0_0x0;
  uVar5 = 0;
  if ((pTVar10 != (TObjectPtr<UToolMenu>_u_0 *)0x0) && (pTVar10->DebugPtr != (UToolMenu *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pTVar10->DebugPtr);
    }
    if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (UToolMenus::bHasShutDown == false)) {
      pFVar8 = ::FName::FName(&local_b8,"ToolMenus");
      FVar1 = *pFVar8;
      pFVar9 = FModuleManager::Get();
      FModuleManager::LoadModuleChecked(pFVar9,FVar1);
      UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
    }
    pTVar11 = UToolMenus::CollectHierarchy(UToolMenus::Singleton,&local_a0,this->MenuName);
    if (local_60 != pTVar11) {
      local_res8 = (pTVar11->AllocatorInstance).Data;
      (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar7 = pTVar11->ArrayNum;
      pTVar11->ArrayNum = 0;
      pTVar11->ArrayMax = 0;
    }
    if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.AllocatorInstance.Data);
    }
    uVar17 = iVar7 - 1;
    if (-1 < (int)uVar17) {
      pFVar21 = local_res8 + (longlong)(int)uVar17 * 8;
      do {
        uVar6 = uVar5;
        if ((int)uVar17 < iVar7) {
          uVar6 = ~uVar17 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar12 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar12;
        }
        local_res20 = *(FName *)(*(longlong *)pFVar21 + 0x28);
        TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName>
                  (__return_storage_ptr__,&local_res20);
        pFVar21 = pFVar21 + -8;
        uVar17 = uVar17 - 1;
      } while (-1 < (int)uVar17);
    }
  }
  if ((param_1) && ((this->SubMenuParent).field0_0x0.DebugPtr != (UToolMenu *)0x0)) {
    GetSubMenuChain(this,&local_118);
    if (0 < local_118.ArrayNum) {
      uVar17 = 1;
      local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_128.Data.ArrayMax = 0;
      local_128.Data.ArrayNum = 0;
      if (1 < local_118.ArrayNum) {
        lVar18 = 8;
        uVar15 = uVar19;
        while( true ) {
          iVar7 = local_118.ArrayNum;
          uVar6 = (int)uVar15 - 1;
          if ((int)uVar15 == 0) {
            uVar6 = uVar5;
          }
          if (0 < (int)uVar6) {
            ::FString::AppendChars(&local_128,L".",1);
            iVar7 = local_118.ArrayNum;
          }
          uVar6 = uVar5;
          if ((int)uVar17 < iVar7) {
            uVar6 = ~uVar17 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar12 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar12;
          }
          pFVar13 = ::FName::ToString((FName *)(*(longlong *)
                                                 (local_118.AllocatorInstance.Data + lVar18) + 0xe8)
                                      ,&local_90);
          iVar7 = (pFVar13->Data).ArrayNum;
          uVar6 = iVar7 - 1;
          if (iVar7 == 0) {
            uVar6 = uVar5;
          }
          ::FString::AppendChars(&local_128,(wchar_t *)(pFVar13->Data).AllocatorInstance.Data,uVar6)
          ;
          if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
          }
          uVar17 = uVar17 + 1;
          lVar18 = lVar18 + 8;
          if (local_118.ArrayNum <= (int)uVar17) break;
          uVar15 = (ulonglong)(uint)local_128.Data.ArrayNum;
        }
      }
      if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (UToolMenus::bHasShutDown == false)) {
        pFVar8 = ::FName::FName(&local_b0,"ToolMenus");
        FVar1 = *pFVar8;
        pFVar9 = FModuleManager::Get();
        FModuleManager::LoadModuleChecked(pFVar9,FVar1);
        UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
      }
      this_00 = UToolMenus::Singleton;
      if ((local_118.ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar12 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar12;
      }
      UToolMenus::CollectHierarchy
                (this_00,&local_108,*(FName *)(*(longlong *)local_118.AllocatorInstance.Data + 0x28)
                );
      uVar17 = local_108.ArrayNum - 1;
      if (-1 < (int)uVar17) {
        lVar18 = (longlong)(int)uVar17 * 8;
        do {
          FVar16.Data = (FScriptContainerElement *)L"";
          if (local_128.Data.ArrayNum != 0) {
            FVar16.Data = local_128.Data.AllocatorInstance.Data;
          }
          pFVar8 = ::FName::FName(&local_a8,(wchar_t *)FVar16.Data);
          FVar1 = *pFVar8;
          uVar6 = uVar5;
          if ((int)uVar17 < local_108.ArrayNum) {
            uVar6 = ~uVar17 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar12 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
            return pTVar12;
          }
          local_f0 = *(FName *)(*(longlong *)(local_108.AllocatorInstance.Data + lVar18) + 0x28);
          local_f8 = FVar1;
          pFVar13 = ::FName::ToString(&local_f8,&local_70);
          pFVar14 = ::FName::ToString(&local_f0,&local_80);
          ::FString::ConcatFC(&local_d0,pFVar14,L".");
          ::FString::ConcatFF(&local_e0,&local_d0,pFVar13);
          FVar16.Data = (FScriptContainerElement *)L"";
          if (local_e0.Data.ArrayNum != 0) {
            FVar16.Data = local_e0.Data.AllocatorInstance.Data;
          }
          ::FName::FName(&local_e8,(wchar_t *)FVar16.Data);
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
          if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
          }
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
          TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName>
                    (__return_storage_ptr__,&local_e8);
          lVar18 = lVar18 + -8;
          uVar17 = uVar17 - 1;
        } while (-1 < (int)uVar17);
      }
      if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.AllocatorInstance.Data);
      }
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
    }
    if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.AllocatorInstance.Data);
    }
  }
  pFVar21 = (__return_storage_ptr__->AllocatorInstance).Data;
  iVar7 = __return_storage_ptr__->ArrayNum / 2;
  if (0 < iVar7) {
    pFVar20 = pFVar21 + (longlong)(__return_storage_ptr__->ArrayNum + -1) * 8;
    do {
      uVar2 = *(undefined8 *)(pFVar21 + uVar19 * 8);
      *(undefined8 *)(pFVar21 + uVar19 * 8) = *(undefined8 *)pFVar20;
      uVar19 = uVar19 + 1;
      *(undefined8 *)pFVar20 = uVar2;
      pFVar20 = pFVar20 + -8;
    } while ((longlong)uVar19 < (longlong)iVar7);
  }
  if (local_res8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_res8);
  }
  return __return_storage_ptr__;
}

// GetMenuProfileHierarchy @ 142c5ed10

FToolMenuProfileHierarchy * __thiscall
UToolMenu::GetMenuProfileHierarchy
          (UToolMenu *this,FToolMenuProfileHierarchy *__return_storage_ptr__,FName *param_1)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  UToolMenus *pUVar4;
  bool bVar5;
  int iVar6;
  FName *pFVar7;
  FModuleManager *this_00;
  FToolMenuProfileMap *pFVar8;
  FToolMenuProfileHierarchy *pFVar9;
  int iVar10;
  ForAnyElementType FVar11;
  undefined1 local_res10 [8];
  FName *local_res18;
  FName *local_res20;
  FToolMenuProfile *local_68;
  FToolMenuProfile *local_60;
  FName local_58;
  TArray<FName,TSizedDefaultAllocator<32>_> local_50;
  
  (__return_storage_ptr__->ProfileHierarchy).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->ProfileHierarchy).ArrayNum = 0;
  (__return_storage_ptr__->ProfileHierarchy).ArrayMax = 0;
  (__return_storage_ptr__->RuntimeProfileHierarchy).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->RuntimeProfileHierarchy).ArrayNum = 0;
  (__return_storage_ptr__->RuntimeProfileHierarchy).ArrayMax = 0;
  local_res18 = param_1;
  if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (UToolMenus::bHasShutDown == false)) {
    pFVar7 = ::FName::FName(&local_58,"ToolMenus");
    FVar1 = *pFVar7;
    this_00 = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this_00,FVar1);
    UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
  }
  pFVar7 = local_res18;
  pUVar4 = UToolMenus::Singleton;
  GetMenuHierarchyNames(this,&local_50,true);
  iVar10 = local_50.ArrayNum;
  local_res20 = (FName *)(local_50.AllocatorInstance.Data + (longlong)iVar10 * 8);
  FVar11.Data = local_50.AllocatorInstance.Data;
  while( true ) {
    if (local_50.ArrayNum != iVar10) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((FName *)FVar11.Data == local_res20) break;
    FVar1 = *pFVar7;
    pFVar8 = TMapBase<FName,FToolMenuProfileMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfileMap,0>_>
             ::Find((TMapBase<FName,FToolMenuProfileMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfileMap,0>_>
                     *)&pUVar4->MenuProfiles,*(FName *)FVar11.Data);
    if (pFVar8 == (FToolMenuProfileMap *)0x0) {
      local_68 = (FToolMenuProfile *)0x0;
    }
    else {
      local_68 = TMapBase<FName,FToolMenuProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfile,0>_>
                 ::Find((TMapBase<FName,FToolMenuProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfile,0>_>
                         *)pFVar8,FVar1);
      if (local_68 != (FToolMenuProfile *)0x0) {
        pFVar2 = (__return_storage_ptr__->ProfileHierarchy).AllocatorInstance.Data;
        if ((pFVar2 <= (FScriptContainerElement *)&local_68) &&
           ((FScriptContainerElement *)&local_68 <
            pFVar2 + (longlong)(__return_storage_ptr__->ProfileHierarchy).ArrayMax * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            pFVar9 = (FToolMenuProfileHierarchy *)(*pcVar3)();
            return pFVar9;
          }
        }
        iVar6 = (__return_storage_ptr__->ProfileHierarchy).ArrayNum;
        if (iVar6 == (__return_storage_ptr__->ProfileHierarchy).ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)__return_storage_ptr__,
                             &(__return_storage_ptr__->ProfileHierarchy).ArrayMax);
        }
        (__return_storage_ptr__->ProfileHierarchy).ArrayNum = iVar6 + 1;
        *(FToolMenuProfile **)
         ((__return_storage_ptr__->ProfileHierarchy).AllocatorInstance.Data + (longlong)iVar6 * 8) =
             local_68;
      }
    }
    FVar1 = *local_res18;
    pFVar8 = TMapBase<FName,FToolMenuProfileMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfileMap,0>_>
             ::Find((TMapBase<FName,FToolMenuProfileMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfileMap,0>_>
                     *)&pUVar4->RuntimeMenuProfiles,*(FName *)FVar11.Data);
    if (pFVar8 == (FToolMenuProfileMap *)0x0) {
      local_60 = (FToolMenuProfile *)0x0;
    }
    else {
      local_60 = TMapBase<FName,FToolMenuProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfile,0>_>
                 ::Find((TMapBase<FName,FToolMenuProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfile,0>_>
                         *)pFVar8,FVar1);
      if (local_60 != (FToolMenuProfile *)0x0) {
        pFVar2 = (__return_storage_ptr__->RuntimeProfileHierarchy).AllocatorInstance.Data;
        if ((pFVar2 <= (FScriptContainerElement *)&local_60) &&
           ((FScriptContainerElement *)&local_60 <
            pFVar2 + (longlong)(__return_storage_ptr__->RuntimeProfileHierarchy).ArrayMax * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            pFVar9 = (FToolMenuProfileHierarchy *)(*pcVar3)();
            return pFVar9;
          }
        }
        iVar6 = (__return_storage_ptr__->RuntimeProfileHierarchy).ArrayNum;
        if (iVar6 == (__return_storage_ptr__->RuntimeProfileHierarchy).ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(__return_storage_ptr__->RuntimeProfileHierarchy).
                                    AllocatorInstance,
                             &(__return_storage_ptr__->RuntimeProfileHierarchy).ArrayMax);
        }
        (__return_storage_ptr__->RuntimeProfileHierarchy).ArrayNum = iVar6 + 1;
        *(FToolMenuProfile **)
         ((__return_storage_ptr__->RuntimeProfileHierarchy).AllocatorInstance.Data +
         (longlong)iVar6 * 8) = local_60;
      }
    }
    FVar11.Data = FVar11.Data + 8;
    pFVar7 = local_res18;
  }
  if ((FName *)local_50.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 142c5f320

UClass * __cdecl UToolMenu::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolMenu.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolMenus",L"ToolMenu",&Z_Registration_Info_UClass_UToolMenu.InnerSingleton
               ,StaticRegisterNativesUToolMenu,0x118,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UToolMenu>,InternalVTableHelperCtorCaller<UToolMenu>,local_res8,
               UToolMenuBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolMenu.InnerSingleton;
}

// GetSectionName @ 142c5fa30

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FName __thiscall UToolMenu::GetSectionName(UToolMenu *this,FName param_1)

{
  int iVar1;
  int iVar2;
  FName FVar3;
  FToolMenuSection *this_00;
  FName in_R8;
  FToolMenuSection *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Sections).ArrayNum;
  this_00 = (FToolMenuSection *)(this->Sections).AllocatorInstance.Data;
  pFVar4 = this_00 + iVar1;
  while( true ) {
    if ((this->Sections).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FToolMenuSection_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar4) break;
    iVar2 = FToolMenuSection::IndexOfBlock(this_00,in_R8);
    if (iVar2 != -1) {
      FVar3 = this_00->Name;
LAB_142c5faa8:
      *(FName *)param_1 = FVar3;
      return param_1;
    }
    this_00 = this_00 + 1;
  }
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  goto LAB_142c5faa8;
}

// GetStyleSet @ 142c5fcf0

ISlateStyle * __thiscall UToolMenu::GetStyleSet(UToolMenu *this)

{
  ISlateStyle *pIVar1;
  UToolMenu *local_res8;
  
  if (this->StyleSetName != (FName)0x0) {
    pIVar1 = FSlateStyleRegistry::FindSlateStyle(&this->StyleSetName);
    if (pIVar1 == (ISlateStyle *)0x0) {
      local_res8 = this;
      `UToolMenu::GetStyleSet'::__l5::<lambda_1>::operator()(&local_res8);
    }
    return pIVar1;
  }
  pIVar1 = FAppStyle::Get();
  return pIVar1;
}

// GetSubMenuChain @ 142c5fd50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<UToolMenu_const_*,TSizedDefaultAllocator<32>_> * __thiscall
UToolMenu::GetSubMenuChain
          (UToolMenu *this,
          TArray<UToolMenu_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  TObjectPtr<UToolMenu_const_>_u_0 *pTVar9;
  TArray<UToolMenu_const_*,TSizedDefaultAllocator<32>_> *pTVar10;
  byte bVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ForAnyElementType FVar15;
  TObjectPtr<UToolMenu_const_>_u_0 *pTVar16;
  uint uVar17;
  ForElementType<unsigned_int> FVar18;
  ulonglong uVar19;
  TObjectPtr<UToolMenu_const_>_u_0 *pTVar20;
  FScriptContainerElement *pFVar21;
  ulonglong *puVar22;
  undefined1 auStackY_148 [32];
  bool local_f8 [4];
  int local_f4;
  TObjectPtr<UToolMenu_const_>_u_0 local_f0;
  uint local_e8;
  uint uStack_e4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_e0;
  undefined4 local_d8;
  uint uStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  int local_c4;
  longlong *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b8;
  FSparseArrayAllocationInfo local_98;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pTVar16 = (TObjectPtr<UToolMenu_const_>_u_0 *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_54 = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  pTVar9 = pTVar16;
  local_f0.DebugPtr = this;
  if (this == (UToolMenu *)0x0) {
LAB_142c6026a:
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    iVar8 = __return_storage_ptr__->ArrayNum / 2;
    if (0 < iVar8) {
      pFVar21 = pFVar2 + (longlong)(__return_storage_ptr__->ArrayNum + -1) * 8;
      do {
        uVar3 = *(undefined8 *)(pFVar2 + (longlong)pTVar16 * 8);
        *(undefined8 *)(pFVar2 + (longlong)pTVar16 * 8) = *(undefined8 *)pFVar21;
        pTVar16 = (TObjectPtr<UToolMenu_const_>_u_0 *)
                  ((longlong)&(pTVar16->ObjectPtr).field0_0x0 + 1);
        *(undefined8 *)pFVar21 = uVar3;
        pFVar21 = pFVar21 + -8;
      } while ((longlong)pTVar16 < (longlong)iVar8);
    }
    local_40 = 0;
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    iVar8 = SUB84(local_88._8_8_,4);
    local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
    if (iVar8 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
    }
    local_54 = 0;
    local_60 = 0;
    local_58 = -1;
    if (0x80 < local_5c) {
      local_5c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
    }
    if (local_68 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_68);
    }
    if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_88._0_8_);
    }
    return __return_storage_ptr__;
  }
  do {
    local_f8[0] = false;
    if ((int)pTVar9 == 0) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,1,(ForAnyElementType *)local_88,(int *)(local_88 + 8),
                         (int *)(local_88 + 0xc));
      iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),1);
      FVar18 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = local_68;
      }
      bVar11 = (byte)iVar7 & 0x1f;
      if (iVar7 < 0) {
        iVar7 = iVar7 + 0x1f;
        bVar11 = bVar11 - 0x20;
      }
      puVar1 = (uint *)((longlong)FVar18 + (longlong)(iVar7 >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << (bVar11 & 0x1f));
      iVar7 = local_58;
    }
    else {
      local_54 = (int)pTVar9 - 1;
      iVar7 = *(int *)(local_88._0_8_ + (longlong)local_58 * 0x10 + 4);
      iVar8 = local_58;
      if (local_54 != 0) {
        *(undefined4 *)(local_88._0_8_ + (longlong)iVar7 * 0x10) = 0xffffffff;
      }
    }
    local_58 = iVar7;
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,&local_98,iVar8);
    pTVar9 = pTVar16;
    if (local_98.Pointer != (TObjectPtr<UToolMenu_const_>_u_0 *)0x0) {
      *(TObjectPtr<UToolMenu_const_>_u_0 *)local_98.Pointer = (UToolMenu *)local_f0;
      *(undefined4 *)((longlong)local_98.Pointer + 8) = 0xffffffff;
      pTVar9 = local_98.Pointer;
    }
    local_f4 = local_98.Index;
    uVar12 = ((uint)((ulonglong)pTVar9->DebugPtr >> 0x14) & 0xffff ^
             (uint)((ulonglong)pTVar9->DebugPtr >> 4)) * -0x7a143595;
    uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
    uVar12 = uVar12 >> 0x10 ^ uVar12;
    bVar6 = TSet<UToolMenu_const_*,DefaultKeyFuncs<UToolMenu_const_*,0>,FDefaultSetAllocator>::
            TryReplaceExisting((TSet<UToolMenu_const_*,DefaultKeyFuncs<UToolMenu_const_*,0>,FDefaultSetAllocator>
                                *)local_88,uVar12,
                               (TSparseSetElement<UToolMenu_const_*> *)&pTVar9->ObjectPtr,&local_f4,
                               local_f8);
    if (!bVar6) {
      uVar17 = 1;
      uVar14 = local_88._8_4_ - local_54;
      if (3 < uVar14) {
        uVar19 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        local_c8 = (undefined4)lVar4;
        uVar17 = 1 << ((byte)lVar4 & 0x1f);
      }
      if (((int)uVar14 < 1) || ((int)uVar17 <= (int)local_40)) {
        uVar12 = local_40 - 1 & uVar12;
        *(uint *)((longlong)pTVar9 + 0xc) = uVar12;
        FVar15.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar15.Data = local_48.Data;
        }
        uVar19 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar12;
        *(undefined4 *)(pTVar9 + 1) = *(undefined4 *)(FVar15.Data + uVar19 * 4);
        *(int *)(FVar15.Data + uVar19 * 4) = local_f4;
      }
      else {
        local_40 = uVar17;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
        }
        if (uVar17 != 0) {
          uVar12 = uVar17;
          if (uVar17 < 2) {
            if (local_48.Data != (FScriptContainerElement *)0x0) {
              uVar12 = 0;
              goto LAB_142c5ff6b;
            }
          }
          else {
LAB_142c5ff6b:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_48,0,uVar12,4);
          }
          if (0 < (int)uVar17) {
            uVar19 = (ulonglong)uVar17;
            pTVar9 = pTVar16;
            do {
              FVar15.Data = local_50;
              if (local_48.Data != (FScriptContainerElement *)0x0) {
                FVar15.Data = local_48.Data;
              }
              uVar13 = (ulonglong)pTVar9 & (longlong)(int)uVar17 - 1U;
              pTVar9 = (TObjectPtr<UToolMenu_const_>_u_0 *)
                       ((longlong)&(pTVar9->ObjectPtr).field0_0x0 + 1);
              *(undefined4 *)(FVar15.Data + uVar13 * 4) = 0xffffffff;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
          }
        }
        if (local_40 != 0) {
          pTStack_e0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
          local_e8 = 0;
          uStack_e4 = 1;
          uStack_d4 = 0;
          uStack_d0 = 0;
          pTVar9 = pTVar16;
          if (local_60 != 0) {
            FVar18 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
            if (local_68 != (ForElementType<unsigned_int>)0x0) {
              FVar18 = local_68;
            }
            uVar12 = *(uint *)FVar18;
            pTVar20 = pTVar16;
            while (uVar12 == 0) {
              uStack_d0 = (int)pTVar20 + 0x20;
              pTVar20 = (TObjectPtr<UToolMenu_const_>_u_0 *)(ulonglong)uStack_d0;
              iVar8 = (int)pTVar9;
              local_e8 = iVar8 + 1;
              pTVar9 = (TObjectPtr<UToolMenu_const_>_u_0 *)(ulonglong)local_e8;
              if ((int)(((int)(local_60 - 1) >> 0x1f & 0x1fU) + (local_60 - 1)) >> 5 < (int)local_e8
                 ) goto LAB_142c60073;
              uVar12 = ((uint *)((longlong)FVar18 + 4))[iVar8];
            }
            uStack_e4 = -uVar12 & uVar12;
            uVar19 = (ulonglong)uStack_e4 * 2 + 1;
            lVar4 = 0x3f;
            if (uVar19 != 0) {
              for (; uVar19 >> lVar4 == 0; lVar4 = lVar4 + -1) {
              }
            }
            local_c4 = (int)lVar4;
            uStack_d4 = local_c4 + -1 + uStack_d0;
            pTVar9 = (TObjectPtr<UToolMenu_const_>_u_0 *)(ulonglong)uStack_d4;
            if ((int)local_60 < (int)uStack_d4) {
LAB_142c60073:
              pTVar9 = (TObjectPtr<UToolMenu_const_>_u_0 *)(ulonglong)local_60;
              uStack_d4 = local_60;
            }
          }
          local_d8 = 0xffffffff;
          local_c0 = (longlong *)local_88;
          local_b8._padding_ = CONCAT44(uStack_e4,local_e8);
          local_b8.CurrentBitIndex = uStack_d4;
          local_b8.UnvisitedBitMask = 0xffffffff;
          local_b8._28_4_ = uStack_cc;
          local_b8.BaseBitIndex = uStack_d0;
          local_b8.Array = pTStack_e0;
          if ((int)pTVar9 < (int)local_60) {
            do {
              puVar22 = (ulonglong *)((longlong)(int)pTVar9 * 0x10 + *local_c0);
              uVar12 = ((uint)(*puVar22 >> 0x14) & 0xffff ^ (uint)(*puVar22 >> 4)) * -0x7a143595;
              uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
              uVar12 = (uVar12 >> 0x10 ^ uVar12) & local_40 - 1;
              *(uint *)((longlong)puVar22 + 0xc) = uVar12;
              FVar15.Data = local_50;
              if (local_48.Data != (FScriptContainerElement *)0x0) {
                FVar15.Data = local_48.Data;
              }
              uVar19 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar12;
              *(undefined4 *)(puVar22 + 1) = *(undefined4 *)(FVar15.Data + uVar19 * 4);
              *(int *)(FVar15.Data + uVar19 * 4) = (int)pTVar9;
              local_b8.UnvisitedBitMask = local_b8.UnvisitedBitMask & ~local_b8._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b8);
              pTVar9 = (TObjectPtr<UToolMenu_const_>_u_0 *)(ulonglong)(uint)local_b8.CurrentBitIndex
              ;
            } while (local_b8.CurrentBitIndex < (local_b8.Array)->NumBits);
          }
        }
      }
    }
    if (local_f8[0] != false) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3454098736228072825>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolMenus\\Private\\ToolMenu.cpp"
                         ,0x287,"!bIsAlreadyInSet");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TArray<UToolMenu_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar10;
      }
      goto LAB_142c6026a;
    }
    pTVar9 = (TObjectPtr<UToolMenu_const_>_u_0 *)(__return_storage_ptr__->AllocatorInstance).Data;
    if (((pTVar9 <= &local_f0) && (&local_f0 < pTVar9 + __return_storage_ptr__->ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TArray<UToolMenu_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar10;
    }
    iVar8 = __return_storage_ptr__->ArrayNum;
    if (iVar8 == __return_storage_ptr__->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    __return_storage_ptr__->ArrayNum = iVar8 + 1;
    ((TObjectPtr<UToolMenu_const_>_u_0 *)(pFVar2 + (longlong)iVar8 * 8))->DebugPtr =
         (UToolMenu *)local_f0;
    local_f0 = (TObjectPtr<UToolMenu_const_>_u_0)
               ((local_f0.DebugPtr)->SubMenuParent).field0_0x0.DebugPtr;
    if (local_f0.DebugPtr == (UToolMenu *)0x0) goto LAB_142c6026a;
    pTVar9 = (TObjectPtr<UToolMenu_const_>_u_0 *)(ulonglong)local_54;
  } while( true );
}

// GetSubMenuNamePath @ 142c60370

FString * __thiscall UToolMenu::GetSubMenuNamePath(UToolMenu *this,FString *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  TArray<UToolMenu_const_*,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  GetSubMenuChain(this,&local_28);
  if ((0 < local_28.ArrayNum) && (uVar7 = 1, 1 < local_28.ArrayNum)) {
    lVar8 = 8;
    do {
      iVar9 = local_28.ArrayNum;
      iVar1 = (__return_storage_ptr__->Data).ArrayNum;
      uVar5 = 0;
      uVar6 = iVar1 - 1;
      if (iVar1 == 0) {
        uVar6 = uVar5;
      }
      if (0 < (int)uVar6) {
        ::FString::AppendChars(__return_storage_ptr__,L".",1);
        iVar9 = local_28.ArrayNum;
      }
      uVar6 = uVar5;
      if ((int)uVar7 < iVar9) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar2)();
        return pFVar4;
      }
      pFVar4 = ::FName::ToString((FName *)(*(longlong *)(local_28.AllocatorInstance.Data + lVar8) +
                                          0xe8),&local_18);
      iVar1 = (pFVar4->Data).ArrayNum;
      uVar6 = iVar1 - 1;
      if (iVar1 == 0) {
        uVar6 = uVar5;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data,uVar6);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < local_28.ArrayNum);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// IndexOfSection @ 142c612e0

int __thiscall UToolMenu::IndexOfSection(UToolMenu *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (0 < (this->Sections).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->Sections).ArrayNum) {
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
      if (*(FName *)((this->Sections).AllocatorInstance.Data + lVar5) == param_1) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x238;
    } while ((int)uVar6 < (this->Sections).ArrayNum);
  }
  return -1;
}

// InitGeneratedCopy @ 142c61760

void __thiscall
UToolMenu::InitGeneratedCopy
          (UToolMenu *this,UToolMenu *param_1,FName param_2,FToolMenuContext *param_3)

{
  UToolMenu *pUVar1;
  EValueType EVar2;
  undefined7 uVar3;
  
  this->MenuName = param_2;
  this->MenuParent = param_1->MenuParent;
  this->StyleName = param_1->StyleName;
  this->TutorialHighlightName = param_1->TutorialHighlightName;
  this->MenuType = param_1->MenuType;
  this->StyleSetName = param_1->StyleSetName;
  this->bShouldCloseWindowAfterMenuSelection = param_1->bShouldCloseWindowAfterMenuSelection;
  this->bCloseSelfOnly = param_1->bCloseSelfOnly;
  this->bSearchable = param_1->bSearchable;
  this->bSeparateSections = param_1->bSeparateSections;
  this->bToolBarIsFocusable = param_1->bToolBarIsFocusable;
  this->bToolBarForceSmallIcons = param_1->bToolBarForceSmallIcons;
  EVar2 = (param_1->MenuOwner).ValueType;
  uVar3 = *(undefined7 *)&(param_1->MenuOwner).field_0x9;
  (this->MenuOwner).field0_0x0 = (param_1->MenuOwner).field0_0x0;
  (this->MenuOwner).ValueType = EVar2;
  *(undefined7 *)&(this->MenuOwner).field_0x9 = uVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->SubMenuParent).field0_0x0.DebugPtr, pUVar1 != (UToolMenu *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->SubMenuParent).field0_0x0 = (param_1->SubMenuParent).field0_0x0;
  this->SubMenuSourceEntryName = param_1->SubMenuSourceEntryName;
  this->MaxHeight = param_1->MaxHeight;
  this->bExtendersEnabled = param_1->bExtendersEnabled;
  this->MaxHeight = param_1->MaxHeight;
  if (param_3 != (FToolMenuContext *)0x0) {
    FToolMenuContext::operator=(&this->Context,param_3);
  }
  return;
}

// InitMenu @ 142c61960

void __thiscall
UToolMenu::InitMenu(UToolMenu *this,FToolMenuOwner *param_1,FName param_2,FName param_3,
                   EMultiBoxType param_4)

{
  FToolMenuOwner_u_0 FVar1;
  EValueType EVar2;
  undefined7 uVar3;
  
  FVar1 = param_1->field0_0x0;
  EVar2 = param_1->ValueType;
  uVar3 = *(undefined7 *)&param_1->field_0x9;
  this->MenuName = param_2;
  (this->MenuOwner).field0_0x0 = FVar1;
  (this->MenuOwner).ValueType = EVar2;
  *(undefined7 *)&(this->MenuOwner).field_0x9 = uVar3;
  this->MenuParent = param_3;
  this->MenuType = param_4;
  return;
}

// IsEditing @ 142c63710

bool __thiscall UToolMenu::IsEditing(UToolMenu *this)

{
  return (this->Context).bIsEditing;
}

// IsRegistering @ 142c63860

bool __thiscall UToolMenu::IsRegistering(UToolMenu *this)

{
  return this->bIsRegistering;
}

// OnKeyDown @ 142c650b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FReply * __thiscall
UToolMenu::OnKeyDown
          (UToolMenu *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2)

{
  TOptional<FToolUIAction> *this_00;
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  FReply *pFVar7;
  ulonglong uVar8;
  TDelegateBase<FNotThreadSafeDelegateMode> *this_01;
  TDelegate<bool___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy> *this_02;
  FToolMenuEntry *this_03;
  TOptional<FToolUIAction> *this_04;
  FToolMenuEntry *pFVar9;
  TOptional<FToolUIAction> *pTVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  FReply *local_res10;
  longlong local_70;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  uVar11 = 0;
  local_res10 = __return_storage_ptr__;
  if ((this->Sections).ArrayNum < 1) {
LAB_142c652fb:
    pFVar7 = local_res10;
    FReply::FReply(local_res10,false);
    return pFVar7;
  }
  local_70 = 0;
LAB_142c650f0:
  uVar6 = 0;
  if ((int)uVar11 < (this->Sections).ArrayNum) {
    uVar6 = ~uVar11 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FReply *)(*pcVar3)();
    return pFVar7;
  }
  pFVar1 = (this->Sections).AllocatorInstance.Data;
  uVar6 = *(uint *)(pFVar1 + local_70 + 0x20);
  uVar8 = (ulonglong)(int)uVar6;
  this_03 = *(FToolMenuEntry **)(pFVar1 + local_70 + 0x18);
  pFVar9 = this_03 + uVar8;
LAB_142c65160:
  do {
    if (*(int *)(pFVar1 + local_70 + 0x20) != (int)uVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FToolMenuEntry,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_03 == pFVar9) break;
    if ((((this_03->Type == ToolBarButton) && (this_03->bCommandIsKeybindOnly != false)) &&
        (bVar4 = FToolMenuEntry::CommandAcceptsInput(this_03,param_2), bVar4)) &&
       (((this_03->Action).ToolAction.bIsSet != false &&
        (this_00 = &(this_03->Action).ToolAction, this_00 != (TOptional<FToolUIAction> *)0x0)))) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_68);
      if ((*(int *)&(this_03->Action).ToolAction.TypedValue.ExecuteAction.field_0x10 != 0) &&
         ((plVar2 = *(longlong **)&(this_03->Action).ToolAction.TypedValue.ExecuteAction.field_0x8,
          plVar2 != (longlong *)0x0 && (cVar5 = (**(code **)(*plVar2 + 0x38))(), cVar5 != '\0')))) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_68);
        if ((this_03->Action).ToolAction.bIsSet == false) {
          this_01 = (TDelegateBase<FNotThreadSafeDelegateMode> *)&DAT_00000018;
        }
        else {
          this_01 = (TDelegateBase<FNotThreadSafeDelegateMode> *)
                    &(this_03->Action).ToolAction.TypedValue.CanExecuteAction;
        }
        bVar4 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound(this_01);
        if (bVar4) {
          this_02 = (TDelegate<bool___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy> *)
                    &DAT_00000018;
          if ((this_03->Action).ToolAction.bIsSet != false) {
            this_02 = &(this_03->Action).ToolAction.TypedValue.CanExecuteAction;
          }
          bVar4 = TDelegate<bool___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>::
                  Execute(this_02,&this->Context);
          if (!bVar4) {
            this_03 = this_03 + 1;
            uVar8 = (ulonglong)uVar6;
            goto LAB_142c65160;
          }
        }
        pTVar10 = (TOptional<FToolUIAction> *)0x0;
        this_04 = pTVar10;
        if ((this_03->Action).ToolAction.bIsSet != false) {
          this_04 = this_00;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_04,&local_50);
        if (*(int *)&(this_04->TypedValue).ExecuteAction.field_0x10 != 0) {
          pTVar10 = *(TOptional<FToolUIAction> **)&(this_04->TypedValue).ExecuteAction.field_0x8;
        }
        (**(code **)(*(longlong *)&(pTVar10->TypedValue).ExecuteAction + 0x60))
                  (pTVar10,&this->Context);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_50);
        FReply::FReply(local_res10,true);
        return local_res10;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
    }
    uVar8 = (ulonglong)uVar6;
    this_03 = this_03 + 1;
  } while( true );
  uVar11 = uVar11 + 1;
  local_70 = local_70 + 0x238;
  if ((this->Sections).ArrayNum <= (int)uVar11) goto LAB_142c652fb;
  goto LAB_142c650f0;
}

// OnMenuDestroyed @ 142c65330

void __thiscall UToolMenu::OnMenuDestroyed(UToolMenu *this)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined8 local_res8;
  
  if ((this->bShouldCleanupContextOnDestroy != false) &&
     ((this->SubMenuParent).field0_0x0.DebugPtr == (UToolMenu *)0x0)) {
    pFVar5 = (this->Context).ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data;
    iVar1 = (this->Context).ContextObjectCleanupFuncs.Pairs.ArrayNum;
    pFVar6 = pFVar5 + (longlong)iVar1 * 0x40;
    while( true ) {
      if ((this->Context).ContextObjectCleanupFuncs.Pairs.ArrayNum != iVar1) {
        `TCheckedPointerIterator<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
      }
      if (pFVar5 == pFVar6) break;
      local_res8 = *(undefined8 *)pFVar5;
      UE::Core::Private::Function::CheckCallable(*(void **)(pFVar5 + 0x10));
      pcVar2 = *(code **)(pFVar5 + 0x10);
      pFVar4 = pFVar5 + 0x20;
      if (*(FScriptContainerElement **)(pFVar5 + 0x38) != (FScriptContainerElement *)0x0) {
        pFVar4 = *(FScriptContainerElement **)(pFVar5 + 0x38);
      }
      uVar3 = (**(code **)(*(longlong *)pFVar4 + 8))();
      (*pcVar2)(uVar3,&local_res8);
      pFVar5 = pFVar5 + 0x40;
    }
    iVar1 = (this->Context).ContextCleanupFuncs.ArrayNum;
    pFVar5 = (this->Context).ContextCleanupFuncs.AllocatorInstance.Data;
    pFVar6 = pFVar5 + (longlong)iVar1 * 0x30;
    while( true ) {
      if ((this->Context).ContextCleanupFuncs.ArrayNum != iVar1) {
        `TCheckedPointerIterator<TFunction<void___cdecl(void)>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_res8);
      }
      if (pFVar5 == pFVar6) break;
      UE::Core::Private::Function::CheckCallable(*(void **)pFVar5);
      pcVar2 = *(code **)pFVar5;
      pFVar4 = pFVar5 + 0x10;
      if (*(FScriptContainerElement **)(pFVar5 + 0x28) != (FScriptContainerElement *)0x0) {
        pFVar4 = *(FScriptContainerElement **)(pFVar5 + 0x28);
      }
      uVar3 = (**(code **)(*(longlong *)pFVar4 + 8))();
      (*pcVar2)(uVar3);
      pFVar5 = pFVar5 + 0x30;
    }
  }
  return;
}

// RemoveMenuEntryObject @ 142c6f080

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall UToolMenu::RemoveMenuEntryObject(UToolMenu *this,UToolMenuEntryScript *param_1)

{
  FName FVar1;
  UToolMenus *this_00;
  FToolMenuSection *pFVar2;
  FName *pFVar3;
  FModuleManager *this_01;
  FName local_res8;
  
  pFVar2 = FindSection(this,(param_1->Data).Section);
  if (pFVar2 != (FToolMenuSection *)0x0) {
    local_res8 = (FName)param_1;
    TArray<FToolMenuEntry,TSizedDefaultAllocator<32>_>::
    RemoveAll<_FToolMenuSection::RemoveEntryObject_::__l2::<lambda_1>_>
              (&pFVar2->Blocks,(<lambda_1> *)&local_res8);
  }
  if ((this->MenuType == MenuBar) || (this->MenuType == ToolBar)) {
    if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (UToolMenus::bHasShutDown == false)) {
      pFVar3 = ::FName::FName(&local_res8,"ToolMenus");
      FVar1 = *pFVar3;
      this_01 = FModuleManager::Get();
      FModuleManager::LoadModuleChecked(this_01,FVar1);
      UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
    }
    this_00 = UToolMenus::Singleton;
    if (UToolMenus::Singleton->bSuppressRefreshWidgetsRequests == false) {
      UToolMenus::Singleton->bRefreshWidgetsNextTick = true;
      UToolMenus::SetNextTickTimer(this_00);
    }
  }
  return;
}

// RemoveSection @ 142c6f1e0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall UToolMenu::RemoveSection(UToolMenu *this,FName param_1)

{
  FName *pFVar1;
  longlong lVar2;
  FName *pFVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  
  iVar5 = (this->Sections).ArrayNum;
  lVar2 = (longlong)iVar5;
  if (iVar5 != 0) {
    iVar8 = 0;
    pFVar1 = (FName *)(this->Sections).AllocatorInstance.Data;
    bVar9 = *pFVar1 != param_1;
    lVar7 = 0;
    iVar5 = 0;
    do {
      lVar7 = lVar7 + 1;
      iVar6 = iVar5 + 1;
      if (lVar7 < lVar2) {
        pFVar3 = pFVar1 + lVar7 * 0x47;
        do {
          if (bVar9 != (*pFVar3 != param_1)) break;
          iVar6 = iVar6 + 1;
          lVar7 = lVar7 + 1;
          pFVar3 = pFVar3 + 0x47;
        } while (lVar7 < lVar2);
      }
      iVar4 = iVar6 - iVar5;
      if (bVar9 == false) {
        DestructItems<FToolMenuSection,int>
                  ((FToolMenuSection *)(pFVar1 + (longlong)iVar5 * 0x47),iVar4);
      }
      else {
        if (iVar8 != iVar5) {
          memmove(pFVar1 + (longlong)iVar8 * 0x47,pFVar1 + (longlong)iVar5 * 0x47,
                  (longlong)iVar4 * 0x238);
        }
        iVar8 = iVar8 + iVar4;
      }
      bVar9 = (bool)(bVar9 ^ 1);
      iVar5 = iVar6;
    } while (lVar7 < lVar2);
    (this->Sections).ArrayNum = iVar8;
  }
  return;
}

// SetExtendersEnabled @ 142c700e0

void __thiscall UToolMenu::SetExtendersEnabled(UToolMenu *this,bool param_1)

{
  this->bExtendersEnabled = param_1;
  return;
}

// SetStyleSet @ 142c70a10

void __thiscall UToolMenu::SetStyleSet(UToolMenu *this,ISlateStyle *param_1)

{
  FName *pFVar1;
  FName FVar2;
  
  FVar2.ComparisonIndex.Value = 0;
  FVar2.Number = 0;
  if (param_1 != (ISlateStyle *)0x0) {
    pFVar1 = (FName *)(**(code **)((longlong)*param_1 + 8))(param_1);
    FVar2 = *pFVar1;
  }
  if (FVar2 != this->StyleName) {
    this->StyleSetName = FVar2;
  }
  return;
}

// StaticRegisterNativesUToolMenu @ 142c70e70

void __cdecl UToolMenu::StaticRegisterNativesUToolMenu(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UToolMenu_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateMenuCustomizationFromMultibox @ 142c74880

void __thiscall
UToolMenu::UpdateMenuCustomizationFromMultibox
          (UToolMenu *this,TSharedRef<FMultiBox_const_,1> *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  TSet<TTuple<FName,FCustomizedToolMenuNameArray>,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuNameArray,0>,FDefaultSetAllocator>
  *this_00;
  ForAnyElementType *pFVar3;
  FMultiBox *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  longlong lVar14;
  int local_res8 [2];
  longlong local_res10;
  longlong *local_res18;
  longlong local_48;
  longlong local_40;
  
  lVar9 = (**(code **)(this->_padding_ + 0x2d8))();
  this_00 = (TSet<TTuple<FName,FCustomizedToolMenuNameArray>,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuNameArray,0>,FDefaultSetAllocator>
             *)(lVar9 + 0x1a8);
  local_res10 = lVar9;
  TSet<TTuple<FName,FCustomizedToolMenuNameArray>,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuNameArray,0>,FDefaultSetAllocator>
  ::Reset(this_00);
  pFVar3 = (ForAnyElementType *)(lVar9 + 0x1f8);
  piVar1 = (int *)(lVar9 + 0x204);
  *(undefined4 *)(lVar9 + 0x200) = 0;
  if (*(int *)(lVar9 + 0x204) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,pFVar3,0,piVar1);
  }
  pFVar4 = param_1->Object;
  uVar13 = 0;
  local_48 = 0;
  iVar7 = (pFVar4->Blocks).ArrayNum;
  if (0 < iVar7) {
    lVar14 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar13 < iVar7) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar12 = (pFVar4->Blocks).AllocatorInstance.Data;
      if (*(longlong *)(*(longlong *)(pFVar12 + lVar14) + 0xa0) != 0) {
        if ((*(char *)(*(longlong *)(pFVar12 + lVar14) + 0xa8) == '\x05') &&
           ((int)(uVar13 + 1) < (pFVar4->Blocks).ArrayNum)) {
          if (((int)(uVar13 + 1) < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (*(char *)(*(longlong *)((pFVar4->Blocks).AllocatorInstance.Data + lVar14 + 0x10) +
                       0xa8) == '\x03') goto LAB_142c74c0e;
        }
        lVar10 = local_48;
        if (*(char *)(*(longlong *)(pFVar12 + lVar14) + 0xa8) == '\x03') {
          local_48 = *(longlong *)(*(longlong *)(pFVar12 + lVar14) + 0xa0);
          if (((pFVar3->Data <= (FScriptContainerElement *)&local_48) &&
              ((FScriptContainerElement *)&local_48 < pFVar3->Data + (longlong)*piVar1 * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar7 = *(int *)(lVar9 + 0x200);
          if (iVar7 == *piVar1) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,pFVar3,piVar1);
          }
          *(int *)(lVar9 + 0x200) = iVar7 + 1;
          pFVar12 = pFVar3->Data;
          lVar10 = local_48;
        }
        else {
          if (local_48 == 0) goto LAB_142c74c0e;
          uVar8 = ::GetTypeHash(local_48._0_4_);
          uVar8 = uVar8 + (int)((ulonglong)lVar10 >> 0x20);
          if (*(int *)(local_res10 + 0x1b0) != *(int *)(lVar9 + 0x1dc)) {
            lVar10 = lVar9 + 0x1e0;
            if (*(longlong *)(lVar9 + 0x1e8) != 0) {
              lVar10 = *(longlong *)(lVar9 + 0x1e8);
            }
            iVar7 = *(int *)(lVar10 + (ulonglong)(*(int *)(lVar9 + 0x1f0) - 1U & uVar8) * 4);
            if (iVar7 != -1) {
              do {
                plVar11 = (longlong *)((longlong)iVar7 * 0x20 + *(longlong *)&this_00->Elements);
                if (*plVar11 == local_48) {
                  if (plVar11 != (longlong *)0x0) goto LAB_142c74b61;
                  break;
                }
                iVar7 = (int)plVar11[3];
              } while (iVar7 != -1);
            }
          }
          local_res18 = &local_48;
          TSet<TTuple<FName,FCustomizedToolMenuNameArray>,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuNameArray,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
                    (this_00,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)uVar8,
                     (bool *)&local_res18);
          plVar11 = (longlong *)((longlong)local_res8[0] * 0x20 + *(longlong *)&this_00->Elements);
LAB_142c74b61:
          pFVar2 = (ForAnyElementType *)(plVar11 + 1);
          local_40 = *(longlong *)(*(longlong *)(pFVar12 + lVar14) + 0xa0);
          if (((pFVar2->Data <= (FScriptContainerElement *)&local_40) &&
              ((FScriptContainerElement *)&local_40 <
               pFVar2->Data + (longlong)*(int *)((longlong)plVar11 + 0x14) * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar7 = (int)plVar11[2];
          if (iVar7 == *(int *)((longlong)plVar11 + 0x14)) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,pFVar2,(int *)((longlong)plVar11 + 0x14));
          }
          *(int *)(plVar11 + 2) = iVar7 + 1;
          pFVar12 = pFVar2->Data;
          lVar10 = local_40;
        }
        *(longlong *)(pFVar12 + (longlong)iVar7 * 8) = lVar10;
      }
LAB_142c74c0e:
      iVar7 = (pFVar4->Blocks).ArrayNum;
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 0x10;
    } while ((int)uVar13 < iVar7);
  }
  return;
}

// execAddDynamicSectionScript @ 142c75460

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl UToolMenu::execAddDynamicSectionScript(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TObjectPtr<UToolMenuSectionDynamic>_u_0 TVar2;
  FToolMenuSection *pFVar3;
  FName local_res10;
  TObjectPtr<UToolMenuSectionDynamic>_u_0 local_res20;
  
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
  local_res20.DebugPtr = (UToolMenuSectionDynamic *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  TVar2 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FindOrAddSection((UToolMenu *)param_1,local_res10);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar2.DebugPtr != (UToolMenuSectionDynamic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
    (pFVar3->ToolMenuSectionDynamic).field0_0x0.DebugPtr = (UToolMenuSectionDynamic *)TVar2;
    return;
  }
  (pFVar3->ToolMenuSectionDynamic).field0_0x0.DebugPtr = (UToolMenuSectionDynamic *)TVar2;
  return;
}

// execAddMenuEntry @ 142c757d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl UToolMenu::execAddMenuEntry(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FToolMenuSection *this;
  FToolMenuEntry *pFVar2;
  undefined1 auStack_7c8 [32];
  FName local_7a8;
  FToolMenuEntry local_7a0;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_7c8;
  local_7a8.ComparisonIndex.Value = 0;
  local_7a8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_7a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_7a8);
  }
  FToolMenuEntry::FToolMenuEntry(&local_7a0);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_7a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_7a0);
  }
  pFVar2 = &local_7a0;
  if ((FToolMenuEntry *)param_2->MostRecentPropertyAddress != (FToolMenuEntry *)0x0) {
    pFVar2 = (FToolMenuEntry *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FindOrAddSection((UToolMenu *)param_1,local_7a8);
  FToolMenuSection::AddEntry(this,pFVar2);
  FToolMenuEntry::~FToolMenuEntry(&local_7a0);
  return;
}

// execAddMenuEntryObject @ 142c758f0

void __cdecl UToolMenu::execAddMenuEntryObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UToolMenuEntryScript *local_res10;
  
  local_res10 = (UToolMenuEntryScript *)0x0;
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
  AddMenuEntryObject((UToolMenu *)param_1,local_res10);
  return;
}

// execAddSectionScript @ 142c75a10

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl UToolMenu::execAddSectionScript(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  EToolMenuSectionAlign EVar3;
  char cVar4;
  FName FVar5;
  FName FVar6;
  bool bVar7;
  FToolMenuSection *pFVar8;
  FText *this;
  EToolMenuSectionAlign local_res10 [16];
  char local_res20 [8];
  FName local_a8;
  FName local_a0;
  FText local_98;
  bool local_88;
  undefined1 local_80 [8];
  ForAnyElementType FStack_78;
  ulonglong local_70;
  FDestructionSentinel local_68;
  FText local_50;
  undefined1 local_40 [8];
  
  local_a0.ComparisonIndex.Value = 0;
  local_a0.Number = 0;
  FNameProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  FText::FText(&local_50);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  this = &local_50;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    this = (FText *)param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_res20[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = Default;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FVar5 = local_a8;
  cVar4 = local_res20[0];
  EVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar8 = FindOrAddSection((UToolMenu *)param_1,local_a0);
  bVar7 = FText::IsEmpty(this);
  if (!bVar7) {
    local_98.TextData.Reference = (this->TextData).Reference;
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 8))
                (local_98.TextData.Reference,local_40);
    }
    local_98.Flags = this->Flags;
    local_88 = true;
    local_70 = 0;
    local_80 = (undefined1  [8])0x0;
    FStack_78.Data = (FScriptContainerElement *)0x0;
    FText::operator=(&(pFVar8->Label).Value,&local_98);
    (pFVar8->Label).bIsSet = local_88;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->Label).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_80);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_80,
               (FWriteAccessScope *)&local_68);
    if (((int)local_70 != 0) && (FStack_78.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_78.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_78,0,0,0x10);
      local_70 = local_70 & 0xffffffff00000000;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)
                 CONCAT44(local_68.Accessor._4_4_,
                          CONCAT22(local_68.Accessor._2_2_,
                                   CONCAT11(local_68.Accessor._1_1_,(char)local_68.Accessor))),
                 &local_68);
    }
    if (FStack_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_78.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_80);
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
    }
  }
  FVar6 = local_a8;
  if ((FVar5 != (FName)0x0) || (cVar4 != '\0')) {
    local_a8.ComparisonIndex = FVar5.ComparisonIndex.Value;
    local_a8.Number = FVar5.Number;
    local_68.AccessType = local_a8.ComparisonIndex.Value;
    local_68._4_4_ = local_a8.Number;
    local_68.Accessor._0_1_ = cVar4;
    local_68.Accessor._1_1_ = 3;
    (pFVar8->InsertPosition).Name = FVar5;
    (pFVar8->InsertPosition).Position = cVar4;
    (pFVar8->InsertPosition).Fallback = 3;
    *(undefined2 *)&(pFVar8->InsertPosition).field_0xa = local_68.Accessor._2_2_;
  }
  pFVar8->Alignment = EVar3;
  if (local_50.TextData.Reference != (ITextData *)0x0) {
    local_a8 = FVar6;
    (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
  }
  return;
}

// execAddSubMenuScript @ 142c75cd0

void __cdecl UToolMenu::execAddSubMenuScript(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UToolMenu *pUVar2;
  FText *pFVar3;
  FText *pFVar4;
  longlong local_res10;
  FName local_res18;
  FName local_res20;
  FToolMenuOwner_u_0 local_58;
  longlong lStack_50;
  FText local_48;
  FText local_38;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
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
  FText::FText(&local_38);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar4 = &local_38;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar4 = (FText *)param_2->MostRecentPropertyAddress;
  }
  FText::FText(&local_48);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pFVar3 = &local_48;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar3 = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == 0) {
    local_58.ValueInt64 = 0;
    lStack_50 = (ulonglong)lStack_50._1_7_ << 8;
  }
  else {
    local_58.ValueInt64 = local_res10;
    lStack_50 = CONCAT71(lStack_50._1_7_,2);
  }
  pUVar2 = AddSubMenu((UToolMenu *)param_1,(FToolMenuOwner *)&local_58.ValueName,local_res20,
                      local_res18,pFVar4,pFVar3);
  *(UToolMenu **)param_3 = pUVar2;
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return;
}

// execInitMenu @ 142c77900

void __cdecl UToolMenu::execInitMenu(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_28;
  undefined1 uStack_20;
  undefined7 uStack_1f;
  
  local_28 = 0;
  uStack_20 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)(param_1 + 1) = local_res10[0];
  *(undefined8 *)&param_1[1].field_0x8 = local_res20;
  param_1[1].field_0x20 = local_res8[0];
  *(undefined8 *)&param_1[2].field_0x8 = local_28;
  *(ulonglong *)&param_1[2].field_0x10 = CONCAT71(uStack_1f,uStack_20);
  return;
}

// execRemoveMenuEntryObject @ 142c78940

void __cdecl UToolMenu::execRemoveMenuEntryObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UToolMenuEntryScript *local_res10;
  
  local_res10 = (UToolMenuEntryScript *)0x0;
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
  RemoveMenuEntryObject((UToolMenu *)param_1,local_res10);
  return;
}

// operator() @ 150498b50

bool __thiscall `UToolMenu::GetStyleSet'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3454098736228073406>);
  if (bVar4) {
    local_res10 = *(FName *)(*(longlong *)this + 0x28);
    ::FName::ToString(&local_res10,&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 0x10c),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3454098736228073406>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150498bfd;
    }
  }
  bVar4 = false;
LAB_150498bfd:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

