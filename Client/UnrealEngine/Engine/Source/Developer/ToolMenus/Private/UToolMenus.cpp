// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 138

// StaticClass @ 142c2ef50

UClass * __cdecl UToolMenus::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolMenus.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolMenus",L"ToolMenus",
               &Z_Registration_Info_UClass_UToolMenus.InnerSingleton,StaticRegisterNativesUToolMenus
               ,0x378,8,CLASS_Intrinsic,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UToolMenus>,InternalVTableHelperCtorCaller<UToolMenus>,local_res8
               ,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolMenus.InnerSingleton;
}

// UToolMenus @ 142c3b1d0

UToolMenus * __thiscall UToolMenus::UToolMenus(UToolMenus *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UToolMenus__6B_;
  *(undefined8 *)&this->OnStringCommandExecuted = 0;
  *(undefined8 *)&(this->OnStringCommandExecuted).field_0x8 = 0;
  *(undefined8 *)&(this->OnStringCommandExecuted).field_0x10 = 0;
  *(undefined8 *)&(this->OnStringCommandExecuted).field_0x18 = 2;
  *(undefined8 *)&this->ShouldDisplayExtensionPoints = 0;
  *(undefined8 *)&(this->ShouldDisplayExtensionPoints).field_0x8 = 0;
  *(undefined4 *)&(this->ShouldDisplayExtensionPoints).field_0x10 = 0;
  *(undefined8 *)&this->EditMenuDelegate = 0;
  *(undefined8 *)&(this->EditMenuDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->EditMenuDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnPreGenerateWidget = 0;
  *(undefined8 *)&(this->OnPreGenerateWidget).field_0x8 = 0;
  *(undefined8 *)&(this->OnPreGenerateWidget).field_0x10 = 0;
  *(undefined8 *)&(this->OnPreGenerateWidget).field_0x18 = 2;
  *(undefined8 *)&this->OnPostGenerateWidget = 0;
  *(undefined8 *)&(this->OnPostGenerateWidget).field_0x8 = 0;
  *(undefined8 *)&(this->OnPostGenerateWidget).field_0x10 = 0;
  *(undefined8 *)&(this->OnPostGenerateWidget).field_0x18 = 2;
  FSlateIcon::FSlateIcon(&this->EditMenuIcon);
  FSlateIcon::FSlateIcon(&this->EditToolbarIcon);
  (this->CustomizedMenus).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomizedMenus).ArrayNum = 0;
  (this->CustomizedMenus).ArrayMax = 0;
  *(undefined8 *)&this->MenuSubstitutionsDuringGenerate = 0;
  *(undefined8 *)&(this->MenuSubstitutionsDuringGenerate).field_0x8 = 0;
  *(undefined8 *)&(this->MenuSubstitutionsDuringGenerate).field_0x20 = 0;
  *(undefined4 *)&(this->MenuSubstitutionsDuringGenerate).field_0x28 = 0;
  *(undefined4 *)&(this->MenuSubstitutionsDuringGenerate).field_0x2c = 0x80;
  *(undefined4 *)&(this->MenuSubstitutionsDuringGenerate).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MenuSubstitutionsDuringGenerate).field_0x34 = 0;
  *(undefined8 *)&(this->MenuSubstitutionsDuringGenerate).field_0x40 = 0;
  *(undefined4 *)&(this->MenuSubstitutionsDuringGenerate).field_0x48 = 0;
  *(undefined8 *)&this->Menus = 0;
  *(undefined8 *)&(this->Menus).field_0x8 = 0;
  *(undefined8 *)&(this->Menus).field_0x20 = 0;
  *(undefined4 *)&(this->Menus).field_0x28 = 0;
  *(undefined4 *)&(this->Menus).field_0x2c = 0x80;
  *(undefined4 *)&(this->Menus).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Menus).field_0x34 = 0;
  *(undefined8 *)&(this->Menus).field_0x40 = 0;
  *(undefined4 *)&(this->Menus).field_0x48 = 0;
  *(undefined8 *)&this->GeneratedMenuWidgets = 0;
  *(undefined8 *)&(this->GeneratedMenuWidgets).field_0x8 = 0;
  *(undefined8 *)&(this->GeneratedMenuWidgets).field_0x20 = 0;
  *(undefined4 *)&(this->GeneratedMenuWidgets).field_0x28 = 0;
  *(undefined4 *)&(this->GeneratedMenuWidgets).field_0x2c = 0x80;
  *(undefined4 *)&(this->GeneratedMenuWidgets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GeneratedMenuWidgets).field_0x34 = 0;
  *(undefined8 *)&(this->GeneratedMenuWidgets).field_0x40 = 0;
  *(undefined4 *)&(this->GeneratedMenuWidgets).field_0x48 = 0;
  *(undefined8 *)&this->WidgetObjectReferences = 0;
  *(undefined8 *)&(this->WidgetObjectReferences).field_0x8 = 0;
  *(undefined8 *)&(this->WidgetObjectReferences).field_0x20 = 0;
  *(undefined4 *)&(this->WidgetObjectReferences).field_0x28 = 0;
  *(undefined4 *)&(this->WidgetObjectReferences).field_0x2c = 0x80;
  *(undefined4 *)&(this->WidgetObjectReferences).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WidgetObjectReferences).field_0x34 = 0;
  *(undefined8 *)&(this->WidgetObjectReferences).field_0x40 = 0;
  *(undefined4 *)&(this->WidgetObjectReferences).field_0x48 = 0;
  (this->OwnerStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OwnerStack).ArrayNum = 0;
  (this->OwnerStack).ArrayMax = 0;
  *(undefined8 *)&this->StringCommandHandlers = 0;
  *(undefined8 *)&(this->StringCommandHandlers).field_0x8 = 0;
  *(undefined8 *)&(this->StringCommandHandlers).field_0x20 = 0;
  *(undefined4 *)&(this->StringCommandHandlers).field_0x28 = 0;
  *(undefined4 *)&(this->StringCommandHandlers).field_0x2c = 0x80;
  *(undefined4 *)&(this->StringCommandHandlers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StringCommandHandlers).field_0x34 = 0;
  *(undefined8 *)&(this->StringCommandHandlers).field_0x40 = 0;
  *(undefined4 *)&(this->StringCommandHandlers).field_0x48 = 0;
  (this->RuntimeCustomizedMenus).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RuntimeCustomizedMenus).ArrayNum = 0;
  (this->RuntimeCustomizedMenus).ArrayMax = 0;
  *(undefined8 *)&this->MenuProfiles = 0;
  *(undefined8 *)&(this->MenuProfiles).field_0x8 = 0;
  *(undefined8 *)&(this->MenuProfiles).field_0x20 = 0;
  *(undefined4 *)&(this->MenuProfiles).field_0x28 = 0;
  *(undefined4 *)&(this->MenuProfiles).field_0x2c = 0x80;
  *(undefined4 *)&(this->MenuProfiles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MenuProfiles).field_0x34 = 0;
  *(undefined8 *)&(this->MenuProfiles).field_0x40 = 0;
  *(undefined4 *)&(this->MenuProfiles).field_0x48 = 0;
  *(undefined8 *)&this->RuntimeMenuProfiles = 0;
  *(undefined8 *)&(this->RuntimeMenuProfiles).field_0x8 = 0;
  *(undefined8 *)&(this->RuntimeMenuProfiles).field_0x20 = 0;
  *(undefined4 *)&(this->RuntimeMenuProfiles).field_0x28 = 0;
  *(undefined4 *)&(this->RuntimeMenuProfiles).field_0x2c = 0x80;
  *(undefined4 *)&(this->RuntimeMenuProfiles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RuntimeMenuProfiles).field_0x34 = 0;
  *(undefined8 *)&(this->RuntimeMenuProfiles).field_0x40 = 0;
  *(undefined4 *)&(this->RuntimeMenuProfiles).field_0x48 = 0;
  *(undefined8 *)&this->SetTimerForNextTickDelegate = 0;
  *(undefined8 *)&(this->SetTimerForNextTickDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->SetTimerForNextTickDelegate).field_0x10 = 0;
  this->bSuppressRefreshWidgetsRequests = false;
  return this;
}

// UToolMenus @ 142c3b4a0

UToolMenus * __thiscall UToolMenus::UToolMenus(UToolMenus *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UToolMenus__6B_;
  *(undefined8 *)&this->OnStringCommandExecuted = 0;
  *(undefined8 *)&(this->OnStringCommandExecuted).field_0x8 = 0;
  *(undefined8 *)&(this->OnStringCommandExecuted).field_0x10 = 0;
  *(undefined8 *)&(this->OnStringCommandExecuted).field_0x18 = 2;
  *(undefined8 *)&this->ShouldDisplayExtensionPoints = 0;
  *(undefined8 *)&(this->ShouldDisplayExtensionPoints).field_0x8 = 0;
  *(undefined4 *)&(this->ShouldDisplayExtensionPoints).field_0x10 = 0;
  *(undefined8 *)&this->EditMenuDelegate = 0;
  *(undefined8 *)&(this->EditMenuDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->EditMenuDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnPreGenerateWidget = 0;
  *(undefined8 *)&(this->OnPreGenerateWidget).field_0x8 = 0;
  *(undefined8 *)&(this->OnPreGenerateWidget).field_0x10 = 0;
  *(undefined8 *)&(this->OnPreGenerateWidget).field_0x18 = 2;
  *(undefined8 *)&this->OnPostGenerateWidget = 0;
  *(undefined8 *)&(this->OnPostGenerateWidget).field_0x8 = 0;
  *(undefined8 *)&(this->OnPostGenerateWidget).field_0x10 = 0;
  *(undefined8 *)&(this->OnPostGenerateWidget).field_0x18 = 2;
  FSlateIcon::FSlateIcon(&this->EditMenuIcon);
  FSlateIcon::FSlateIcon(&this->EditToolbarIcon);
  (this->CustomizedMenus).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomizedMenus).ArrayNum = 0;
  (this->CustomizedMenus).ArrayMax = 0;
  *(undefined8 *)&this->MenuSubstitutionsDuringGenerate = 0;
  *(undefined8 *)&(this->MenuSubstitutionsDuringGenerate).field_0x8 = 0;
  *(undefined8 *)&(this->MenuSubstitutionsDuringGenerate).field_0x20 = 0;
  *(undefined4 *)&(this->MenuSubstitutionsDuringGenerate).field_0x28 = 0;
  *(undefined4 *)&(this->MenuSubstitutionsDuringGenerate).field_0x2c = 0x80;
  *(undefined4 *)&(this->MenuSubstitutionsDuringGenerate).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MenuSubstitutionsDuringGenerate).field_0x34 = 0;
  *(undefined8 *)&(this->MenuSubstitutionsDuringGenerate).field_0x40 = 0;
  *(undefined4 *)&(this->MenuSubstitutionsDuringGenerate).field_0x48 = 0;
  *(undefined8 *)&this->Menus = 0;
  *(undefined8 *)&(this->Menus).field_0x8 = 0;
  *(undefined8 *)&(this->Menus).field_0x20 = 0;
  *(undefined4 *)&(this->Menus).field_0x28 = 0;
  *(undefined4 *)&(this->Menus).field_0x2c = 0x80;
  *(undefined4 *)&(this->Menus).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Menus).field_0x34 = 0;
  *(undefined8 *)&(this->Menus).field_0x40 = 0;
  *(undefined4 *)&(this->Menus).field_0x48 = 0;
  *(undefined8 *)&this->GeneratedMenuWidgets = 0;
  *(undefined8 *)&(this->GeneratedMenuWidgets).field_0x8 = 0;
  *(undefined8 *)&(this->GeneratedMenuWidgets).field_0x20 = 0;
  *(undefined4 *)&(this->GeneratedMenuWidgets).field_0x28 = 0;
  *(undefined4 *)&(this->GeneratedMenuWidgets).field_0x2c = 0x80;
  *(undefined4 *)&(this->GeneratedMenuWidgets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GeneratedMenuWidgets).field_0x34 = 0;
  *(undefined8 *)&(this->GeneratedMenuWidgets).field_0x40 = 0;
  *(undefined4 *)&(this->GeneratedMenuWidgets).field_0x48 = 0;
  *(undefined8 *)&this->WidgetObjectReferences = 0;
  *(undefined8 *)&(this->WidgetObjectReferences).field_0x8 = 0;
  *(undefined8 *)&(this->WidgetObjectReferences).field_0x20 = 0;
  *(undefined4 *)&(this->WidgetObjectReferences).field_0x28 = 0;
  *(undefined4 *)&(this->WidgetObjectReferences).field_0x2c = 0x80;
  *(undefined4 *)&(this->WidgetObjectReferences).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->WidgetObjectReferences).field_0x34 = 0;
  *(undefined8 *)&(this->WidgetObjectReferences).field_0x40 = 0;
  *(undefined4 *)&(this->WidgetObjectReferences).field_0x48 = 0;
  (this->OwnerStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OwnerStack).ArrayNum = 0;
  (this->OwnerStack).ArrayMax = 0;
  *(undefined8 *)&this->StringCommandHandlers = 0;
  *(undefined8 *)&(this->StringCommandHandlers).field_0x8 = 0;
  *(undefined8 *)&(this->StringCommandHandlers).field_0x20 = 0;
  *(undefined4 *)&(this->StringCommandHandlers).field_0x28 = 0;
  *(undefined4 *)&(this->StringCommandHandlers).field_0x2c = 0x80;
  *(undefined4 *)&(this->StringCommandHandlers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StringCommandHandlers).field_0x34 = 0;
  *(undefined8 *)&(this->StringCommandHandlers).field_0x40 = 0;
  *(undefined4 *)&(this->StringCommandHandlers).field_0x48 = 0;
  (this->RuntimeCustomizedMenus).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RuntimeCustomizedMenus).ArrayNum = 0;
  (this->RuntimeCustomizedMenus).ArrayMax = 0;
  *(undefined8 *)&this->MenuProfiles = 0;
  *(undefined8 *)&(this->MenuProfiles).field_0x8 = 0;
  *(undefined8 *)&(this->MenuProfiles).field_0x20 = 0;
  *(undefined4 *)&(this->MenuProfiles).field_0x28 = 0;
  *(undefined4 *)&(this->MenuProfiles).field_0x2c = 0x80;
  *(undefined4 *)&(this->MenuProfiles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MenuProfiles).field_0x34 = 0;
  *(undefined8 *)&(this->MenuProfiles).field_0x40 = 0;
  *(undefined4 *)&(this->MenuProfiles).field_0x48 = 0;
  *(undefined8 *)&this->RuntimeMenuProfiles = 0;
  *(undefined8 *)&(this->RuntimeMenuProfiles).field_0x8 = 0;
  *(undefined8 *)&(this->RuntimeMenuProfiles).field_0x20 = 0;
  *(undefined4 *)&(this->RuntimeMenuProfiles).field_0x28 = 0;
  *(undefined4 *)&(this->RuntimeMenuProfiles).field_0x2c = 0x80;
  *(undefined4 *)&(this->RuntimeMenuProfiles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RuntimeMenuProfiles).field_0x34 = 0;
  *(undefined8 *)&(this->RuntimeMenuProfiles).field_0x40 = 0;
  *(undefined4 *)&(this->RuntimeMenuProfiles).field_0x48 = 0;
  *(undefined8 *)&this->SetTimerForNextTickDelegate = 0;
  *(undefined8 *)&(this->SetTimerForNextTickDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->SetTimerForNextTickDelegate).field_0x10 = 0;
  this->bNextTickTimerIsSet = false;
  this->bRefreshWidgetsNextTick = false;
  this->bCleanupStaleWidgetsNextTick = false;
  this->bCleanupStaleWidgetsNextTickGC = false;
  this->bEditMenusMode = false;
  this->bSuppressRefreshWidgetsRequests = false;
  return this;
}

// ~UToolMenus @ 142c3cab0

void __thiscall UToolMenus::~UToolMenus(UToolMenus *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UToolMenus__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->SetTimerForNextTickDelegate);
  pvVar1 = *(void **)&(this->SetTimerForNextTickDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->SetTimerForNextTickDelegate);
  *(undefined4 *)&(this->RuntimeMenuProfiles).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RuntimeMenuProfiles).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FToolMenuProfileMap>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FToolMenuProfileMap>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FToolMenuProfileMap>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RuntimeMenuProfiles);
  *(undefined4 *)&(this->MenuProfiles).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MenuProfiles).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FToolMenuProfileMap>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FToolMenuProfileMap>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FToolMenuProfileMap>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MenuProfiles);
  DestructItems<FCustomizedToolMenu,int>
            ((FCustomizedToolMenu *)(this->RuntimeCustomizedMenus).AllocatorInstance.Data,
             (this->RuntimeCustomizedMenus).ArrayNum);
  pFVar2 = (this->RuntimeCustomizedMenus).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->StringCommandHandlers).field_0x48 = 0;
  pvVar1 = *(void **)&(this->StringCommandHandlers).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TDelegate<void___cdecl(FString_const_&,FToolMenuContext_const_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TDelegate<void___cdecl(FString_const_&,FToolMenuContext_const_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TDelegate<void___cdecl(FString_const_&,FToolMenuContext_const_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StringCommandHandlers);
  pFVar2 = (this->OwnerStack).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->WidgetObjectReferences).field_0x48 = 0;
  pvVar1 = *(void **)&(this->WidgetObjectReferences).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakPtr<FMultiBox,1>,TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakPtr<FMultiBox,1>,TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakPtr<FMultiBox,1>,TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WidgetObjectReferences);
  *(undefined4 *)&(this->GeneratedMenuWidgets).field_0x48 = 0;
  pvVar1 = *(void **)&(this->GeneratedMenuWidgets).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GeneratedMenuWidgets);
  *(undefined4 *)&(this->Menus).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Menus).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UToolMenu>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UToolMenu>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UToolMenu>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Menus);
  *(undefined4 *)&(this->MenuSubstitutionsDuringGenerate).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MenuSubstitutionsDuringGenerate).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MenuSubstitutionsDuringGenerate);
  DestructItems<FCustomizedToolMenu,int>
            ((FCustomizedToolMenu *)(this->CustomizedMenus).AllocatorInstance.Data,
             (this->CustomizedMenus).ArrayNum);
  pFVar2 = (this->CustomizedMenus).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPostGenerateWidget).field_0x8,
             *(int *)&(this->OnPostGenerateWidget).field_0x10);
  pvVar1 = *(void **)&(this->OnPostGenerateWidget).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPostGenerateWidget);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPreGenerateWidget).field_0x8,*(int *)&(this->OnPreGenerateWidget).field_0x10
            );
  pvVar1 = *(void **)&(this->OnPreGenerateWidget).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPreGenerateWidget);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->EditMenuDelegate);
  pvVar1 = *(void **)&(this->EditMenuDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->EditMenuDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ShouldDisplayExtensionPoints);
  pvVar1 = *(void **)&(this->ShouldDisplayExtensionPoints).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ShouldDisplayExtensionPoints);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnStringCommandExecuted).field_0x8,
             *(int *)&(this->OnStringCommandExecuted).field_0x10);
  pvVar1 = *(void **)&(this->OnStringCommandExecuted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnStringCommandExecuted);
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 142c3fab0

void __thiscall `UToolMenus::ConvertUIAction'::__l5::<lambda_1>::operator()(void *this)

{
  bool bVar1;
  FToolMenuContext local_78;
  
  bVar1 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound(this);
  if (bVar1) {
    local_78.bIsEditing = false;
    local_78.ContextObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ContextObjects.ArrayNum = 0;
    local_78.ContextObjects.ArrayMax = 0;
    local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
    ;
    local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum = 0;
    local_78.ContextObjectCleanupFuncs.Pairs.ArrayMax = 0;
    local_78.ContextCleanupFuncs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ContextCleanupFuncs.ArrayNum = 0;
    local_78.ContextCleanupFuncs.ArrayMax = 0;
    local_78.CommandLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.CommandLists.ArrayNum = 0;
    local_78.CommandLists.ArrayMax = 0;
    local_78.CommandList.Object = (FUICommandList *)0x0;
    local_78.CommandList.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_78.Extenders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Extenders.ArrayNum = 0;
    local_78.Extenders.ArrayMax = 0;
    FToolMenuContext::operator=(&local_78,(FToolMenuContext *)((longlong)this + 0x18));
    TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(this,&local_78);
    DestructItems<TSharedPtr<FExtender,1>,int>
              ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data,
               local_78.Extenders.ArrayNum);
    if ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data !=
        (TSharedPtr<FExtender,1> *)0x0) {
      FMemory::Free(local_78.Extenders.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.CommandList.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FUICommandList,1>,int>
              ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data,
               local_78.CommandLists.ArrayNum);
    if ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data !=
        (TSharedPtr<FUICommandList,1> *)0x0) {
      FMemory::Free(local_78.CommandLists.AllocatorInstance.Data);
    }
    DestructItems<TFunction<void___cdecl(void)>,int>
              ((TFunction<void___cdecl(void)> *)local_78.ContextCleanupFuncs.AllocatorInstance.Data,
               local_78.ContextCleanupFuncs.ArrayNum);
    if ((TFunction<void___cdecl(void)> *)local_78.ContextCleanupFuncs.AllocatorInstance.Data !=
        (TFunction<void___cdecl(void)> *)0x0) {
      FMemory::Free(local_78.ContextCleanupFuncs.AllocatorInstance.Data);
    }
    DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
              ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
               local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data,
               local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum);
    if ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
        local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data !=
        (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
      FMemory::Free(local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data);
    }
    if (local_78.ContextObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.ContextObjects.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 142c3fbc0

TSharedRef<SWidget,1> * __thiscall
`UToolMenus::ConvertWidgetChoice'::__l5::<lambda_1>::operator()
          (void *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  char cVar3;
  longlong *plVar4;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_28);
  if ((*(int *)((longlong)this + 0x10) != 0) &&
     (*(longlong **)((longlong)this + 8) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x38))();
    if (cVar3 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_28);
      if (*(int *)((longlong)this + 0x10) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)((longlong)this + 8);
      }
      (**(code **)(*plVar4 + 0x60))(plVar4,__return_storage_ptr__,(longlong)this + 0x18);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return __return_storage_ptr__;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// operator() @ 142c401c0

void __thiscall `UToolMenus::PopulateMenuBuilder'::__l5::<lambda_1>::operator()(void *this)

{
  FName FVar1;
  longlong *plVar2;
  UToolMenus *pUVar3;
  FString *pFVar4;
  UObject *pUVar5;
  FName *pFVar6;
  FModuleManager *this_00;
  wchar_t *pwVar7;
  FName local_res8;
  void *local_28 [4];
  
  pFVar4 = ::FName::ToString(this,(FString *)local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  FWindowsPlatformApplicationMisc::ClipboardCopy(pwVar7);
  if (local_28[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0]);
  }
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 8));
  if (pUVar5 != (UObject *)0x0) {
    if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (UToolMenus::bHasShutDown == false)) {
      pFVar6 = ::FName::FName(&local_res8,"ToolMenus");
      FVar1 = *pFVar6;
      this_00 = FModuleManager::Get();
      FModuleManager::LoadModuleChecked(this_00,FVar1);
      UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
    }
    pUVar3 = UToolMenus::Singleton;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &UToolMenus::Singleton->EditMenuDelegate,(FReadAccessScope *)local_28);
    if ((*(int *)&(pUVar3->EditMenuDelegate).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(pUVar3->EditMenuDelegate).field_0x8, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x68))(plVar2,pUVar5);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_28);
  }
  return;
}

// operator() @ 142c402a0

void __thiscall `UToolMenus::PopulateToolBarBuilder'::__l5::<lambda_1>::operator()(void *this)

{
  FName FVar1;
  longlong *plVar2;
  UToolMenus *pUVar3;
  FString *pFVar4;
  UObject *pUVar5;
  FName *pFVar6;
  FModuleManager *this_00;
  wchar_t *pwVar7;
  FName local_res8;
  void *local_28 [4];
  
  pFVar4 = ::FName::ToString(this,(FString *)local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  FWindowsPlatformApplicationMisc::ClipboardCopy(pwVar7);
  if (local_28[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0]);
  }
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 8));
  if (pUVar5 != (UObject *)0x0) {
    if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (UToolMenus::bHasShutDown == false)) {
      pFVar6 = ::FName::FName(&local_res8,"ToolMenus");
      FVar1 = *pFVar6;
      this_00 = FModuleManager::Get();
      FModuleManager::LoadModuleChecked(this_00,FVar1);
      UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
    }
    pUVar3 = UToolMenus::Singleton;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &UToolMenus::Singleton->EditMenuDelegate,(FReadAccessScope *)local_28);
    if ((*(int *)&(pUVar3->EditMenuDelegate).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(pUVar3->EditMenuDelegate).field_0x8, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x68))(plVar2,pUVar5);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_28);
  }
  return;
}

// operator() @ 142c40740

void __thiscall `UToolMenus::PopulateMenuBarBuilder'::__l20::<lambda_1>::operator()(void *this)

{
  FName FVar1;
  longlong *plVar2;
  UToolMenus *pUVar3;
  FString *pFVar4;
  UObject *pUVar5;
  FName *pFVar6;
  FModuleManager *this_00;
  wchar_t *pwVar7;
  FName local_res8;
  void *local_28 [4];
  
  pFVar4 = ::FName::ToString(this,(FString *)local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  FWindowsPlatformApplicationMisc::ClipboardCopy(pwVar7);
  if (local_28[0] != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0]);
  }
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 8));
  if (pUVar5 != (UObject *)0x0) {
    if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (UToolMenus::bHasShutDown == false)) {
      pFVar6 = ::FName::FName(&local_res8,"ToolMenus");
      FVar1 = *pFVar6;
      this_00 = FModuleManager::Get();
      FModuleManager::LoadModuleChecked(this_00,FVar1);
      UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
    }
    pUVar3 = UToolMenus::Singleton;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &UToolMenus::Singleton->EditMenuDelegate,(FReadAccessScope *)local_28);
    if ((*(int *)&(pUVar3->EditMenuDelegate).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(pUVar3->EditMenuDelegate).field_0x8, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x68))(plVar2,pUVar5);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_28);
  }
  return;
}

// operator() @ 142c40820

EVisibility __thiscall
`UToolMenus::PopulateToolBarBuilderWithTopLevelChildren'::__l45::<lambda_1>::operator()(void *this)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  TEnumAsByte<EVisibility::Private> TVar5;
  char cVar6;
  EVisibility EVar7;
  longlong *plVar8;
  uchar *in_RDX;
  longlong *plVar9;
  uchar *puVar10;
  uchar *puVar11;
  uchar local_res8 [8];
  uchar local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_a8 [8];
  FReadAccessScope local_a0;
  FReadAccessScope local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  
  if ((*(longlong *)((longlong)this + 0x10) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    TVar5.Value = (*pcVar3)();
    return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar5.Value;
  }
  puVar2 = *(undefined8 **)((longlong)this + 0x10);
  puVar11 = (uchar *)*puVar2;
  iVar1 = *(int *)(puVar2 + 1);
  puVar10 = puVar11 + (longlong)iVar1 * 0x20;
  plVar9 = (longlong *)(puVar11 + 0x10);
  while( true ) {
    if (*(int *)(puVar2 + 1) != iVar1) {
      `TCheckedPointerIterator<TAttribute<EVisibility>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    EVar7.Value.Value = EVisibility::Collapsed.Value.Value;
    if (puVar11 == puVar10) goto LAB_142c40a02;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(plVar9 + -1),&local_a0);
    if ((((int)plVar9[1] == 0) || ((longlong *)*plVar9 == (longlong *)0x0)) ||
       (cVar6 = (**(code **)(*(longlong *)*plVar9 + 0x38))(), cVar6 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_a0);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_a0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(plVar9 + -1),&local_70);
      if ((int)plVar9[1] == 0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = (longlong *)*plVar9;
      }
      (**(code **)(*plVar8 + 0x60))(plVar8,local_res8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_70);
      *puVar11 = local_res8[0];
    }
    if ((TEnumAsByte<EVisibility::Private>)*puVar11 == EVisibility::Visible.Value.Value) break;
    puVar11 = puVar11 + 0x20;
    plVar9 = plVar9 + 4;
  }
  puVar11 = *(uchar **)this;
  iVar1 = *(int *)((longlong)this + 8);
  puVar10 = puVar11 + (longlong)iVar1 * 0x20;
  plVar9 = (longlong *)(puVar11 + 0x10);
  while( true ) {
    if (*(int *)((longlong)this + 8) != iVar1) {
      `TCheckedPointerIterator<TAttribute<EVisibility>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_a8);
    }
    EVar7.Value.Value = EVisibility::Collapsed.Value.Value;
    if (puVar11 == puVar10) break;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(plVar9 + -1),&local_88);
    if ((((int)plVar9[1] == 0) || ((longlong *)*plVar9 == (longlong *)0x0)) ||
       (cVar6 = (**(code **)(*(longlong *)*plVar9 + 0x38))(), cVar6 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_88);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_88);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(plVar9 + -1),&local_58);
      if ((int)plVar9[1] == 0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = (longlong *)*plVar9;
      }
      (**(code **)(*plVar8 + 0x60))(plVar8,local_res18);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_58);
      *puVar11 = local_res18[0];
    }
    EVar7.Value.Value = EVisibility::Visible.Value.Value;
    if ((TEnumAsByte<EVisibility::Private>)*puVar11 == EVisibility::Visible.Value.Value) break;
    puVar11 = puVar11 + 0x20;
    plVar9 = plVar9 + 4;
  }
LAB_142c40a02:
  *in_RDX = (uchar)EVar7.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// operator() @ 142c40a30

bool __thiscall
`UToolMenus::ConvertScriptObjectToUIAction'::__l11::<lambda_1>::operator()(void *this)

{
  UToolMenuEntryScript *this_00;
  UFunction *this_01;
  UClass *pUVar1;
  undefined1 uVar2;
  FToolMenuContext local_78;
  char local_10;
  
  this_00 = UToolMenuEntryScript::GetIfCanSafelyRouteCall(this);
  uVar2 = 0;
  if (this_00 != (UToolMenuEntryScript *)0x0) {
    this_01 = UObject::FindFunctionChecked((UObject *)this_00,NAME_UToolMenuEntryScript_CanExecute);
    pUVar1 = UField::GetOwnerClass((UField *)this_01);
    if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
      local_78.bIsEditing = false;
      local_78.ContextObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.ContextObjects.ArrayNum = 0;
      local_78.ContextObjects.ArrayMax = 0;
      local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum = 0;
      local_78.ContextObjectCleanupFuncs.Pairs.ArrayMax = 0;
      local_78.ContextCleanupFuncs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.ContextCleanupFuncs.ArrayNum = 0;
      local_78.ContextCleanupFuncs.ArrayMax = 0;
      local_78.CommandLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.CommandLists.ArrayNum = 0;
      local_78.CommandLists.ArrayMax = 0;
      local_78.CommandList.Object = (FUICommandList *)0x0;
      local_78.CommandList.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_78.Extenders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Extenders.ArrayNum = 0;
      local_78.Extenders.ArrayMax = 0;
      local_10 = '\0';
      FToolMenuContext::operator=(&local_78,(FToolMenuContext *)((longlong)this + 8));
      (**(code **)(this_00->_padding_ + 0x260))(this_00,this_01,&local_78);
      uVar2 = local_10 != '\0';
      DestructItems<TSharedPtr<FExtender,1>,int>
                ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data,
                 local_78.Extenders.ArrayNum);
      if ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data !=
          (TSharedPtr<FExtender,1> *)0x0) {
        FMemory::Free(local_78.Extenders.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.CommandList.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FUICommandList,1>,int>
                ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data,
                 local_78.CommandLists.ArrayNum);
      if ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data !=
          (TSharedPtr<FUICommandList,1> *)0x0) {
        FMemory::Free(local_78.CommandLists.AllocatorInstance.Data);
      }
      DestructItems<TFunction<void___cdecl(void)>,int>
                ((TFunction<void___cdecl(void)> *)
                 local_78.ContextCleanupFuncs.AllocatorInstance.Data,
                 local_78.ContextCleanupFuncs.ArrayNum);
      if ((TFunction<void___cdecl(void)> *)local_78.ContextCleanupFuncs.AllocatorInstance.Data !=
          (TFunction<void___cdecl(void)> *)0x0) {
        FMemory::Free(local_78.ContextCleanupFuncs.AllocatorInstance.Data);
      }
      DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
                ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
                 local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data,
                 local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum);
      if ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
          local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data !=
          (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
        FMemory::Free(local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data);
      }
      if (local_78.ContextObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.ContextObjects.AllocatorInstance.Data);
      }
    }
    else {
      uVar2 = (**(code **)(this_00->_padding_ + 0x2b0))(this_00);
    }
  }
  return (bool)uVar2;
}

// operator() @ 142c40bb0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall
`UToolMenus::AssembleMenuHierarchy'::__l13::<lambda_1>::operator()
          (void *this,FToolMenuEntry *param_1,FToolMenuEntry *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  lVar1 = *(longlong *)this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x218),&local_28);
  if (*(int *)(lVar1 + 0x228) == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = *(longlong **)(lVar1 + 0x220);
  }
  uVar2 = (**(code **)(*plVar3 + 0x60))(plVar3,param_1,param_2,lVar1 + 0x38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (bool)uVar2;
}

// operator() @ 142c416d0

/* WARNING: Type propagation algorithm not settling */

EVisibility __thiscall
`UToolMenus::CalculateToolbarVisibility'::__l2::<lambda_2>::operator()(void *this)

{
  int *piVar1;
  FToolMenuVisibilityChoice *pFVar2;
  int iVar3;
  TEnumAsByte<EVisibility::Private> *in_RDX;
  TEnumAsByte<EVisibility::Private> local_res8;
  undefined1 local_res18 [8];
  
  iVar3 = *(int *)((longlong)this + 0x30);
  piVar1 = (int *)((longlong)this + 0x30);
  if (*(FToolMenuVisibilityChoice **)((longlong)this + 0x28) != (FToolMenuVisibilityChoice *)0x0) {
    this = *(FToolMenuVisibilityChoice **)((longlong)this + 0x28);
  }
  pFVar2 = (FToolMenuVisibilityChoice *)((longlong)this + (longlong)iVar3 * 0x28);
  while( true ) {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<FToolMenuVisibilityChoice_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (this == pFVar2) break;
    FToolMenuVisibilityChoice::Get(this);
    if ((TEnumAsByte<EVisibility::Private>)local_res8.Value != EVisibility::Visible.Value.Value) {
      in_RDX->Value = local_res8.Value;
LAB_142c41758:
      return (EVisibility)SUB81(in_RDX,0);
    }
    this = (void *)((longlong)this + 0x28);
  }
  in_RDX->Value = (uchar)EVisibility::Visible.Value.Value;
  goto LAB_142c41758;
}

// operator() @ 142c419f0

bool __thiscall `UToolMenus::ConvertUIAction'::__l8::<lambda_2>::operator()(void *this)

{
  bool bVar1;
  uint *puVar2;
  FTlsAutoCleanup *pFVar3;
  undefined1 local_res8 [8];
  code *local_88;
  undefined1 *local_80;
  FToolMenuContext local_78;
  char local_10;
  
  bVar1 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound(this);
  if (bVar1) {
    puVar2 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_80 = local_res8;
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar3 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_88,puVar2);
    if (*(char *)(pFVar3 + 4) == '\0') {
      local_78.bIsEditing = false;
      local_78.ContextObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.ContextObjects.ArrayNum = 0;
      local_78.ContextObjects.ArrayMax = 0;
      local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum = 0;
      local_78.ContextObjectCleanupFuncs.Pairs.ArrayMax = 0;
      local_78.ContextCleanupFuncs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.ContextCleanupFuncs.ArrayNum = 0;
      local_78.ContextCleanupFuncs.ArrayMax = 0;
      local_78.CommandLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.CommandLists.ArrayNum = 0;
      local_78.CommandLists.ArrayMax = 0;
      local_78.CommandList.Object = (FUICommandList *)0x0;
      local_78.CommandList.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_78.Extenders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Extenders.ArrayNum = 0;
      local_78.Extenders.ArrayMax = 0;
      local_10 = '\0';
      FToolMenuContext::operator=(&local_78,(FToolMenuContext *)((longlong)this + 0x18));
      TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(this,&local_78);
      bVar1 = local_10 != '\0';
      DestructItems<TSharedPtr<FExtender,1>,int>
                ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data,
                 local_78.Extenders.ArrayNum);
      if ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data !=
          (TSharedPtr<FExtender,1> *)0x0) {
        FMemory::Free(local_78.Extenders.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.CommandList.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FUICommandList,1>,int>
                ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data,
                 local_78.CommandLists.ArrayNum);
      if ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data !=
          (TSharedPtr<FUICommandList,1> *)0x0) {
        FMemory::Free(local_78.CommandLists.AllocatorInstance.Data);
      }
      DestructItems<TFunction<void___cdecl(void)>,int>
                ((TFunction<void___cdecl(void)> *)
                 local_78.ContextCleanupFuncs.AllocatorInstance.Data,
                 local_78.ContextCleanupFuncs.ArrayNum);
      if ((TFunction<void___cdecl(void)> *)local_78.ContextCleanupFuncs.AllocatorInstance.Data !=
          (TFunction<void___cdecl(void)> *)0x0) {
        FMemory::Free(local_78.ContextCleanupFuncs.AllocatorInstance.Data);
      }
      DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
                ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
                 local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data,
                 local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum);
      if ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
          local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data !=
          (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
        FMemory::Free(local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data);
      }
      if (local_78.ContextObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.ContextObjects.AllocatorInstance.Data);
      }
      return bVar1;
    }
  }
  return false;
}

// operator() @ 142c41b50

TSharedRef<SWidget,1> * __thiscall
`UToolMenus::ConvertWidgetChoice'::__l9::<lambda_2>::operator()
          (void *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  FName FVar2;
  FSharedReferencer<1> FVar3;
  UToolMenus *this_00;
  char cVar4;
  FName *pFVar5;
  FModuleManager *pFVar6;
  UToolMenu *pUVar7;
  longlong *plVar8;
  FName local_res8;
  FName local_res18 [2];
  FReadAccessScope local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_38);
  if ((*(int *)((longlong)this + 0x10) != 0) &&
     (*(longlong **)((longlong)this + 8) != (longlong *)0x0)) {
    cVar4 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x38))();
    if (cVar4 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (UToolMenus::bHasShutDown == false)) {
        pFVar5 = ::FName::FName(&local_res8,"ToolMenus");
        FVar2 = *pFVar5;
        pFVar6 = FModuleManager::Get();
        FModuleManager::LoadModuleChecked(pFVar6,FVar2);
        UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
      }
      this_00 = UToolMenus::Singleton;
      plVar8 = (longlong *)0x0;
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
      pFVar5 = ::FName::FName(local_res18,L"NewToolMenu");
      pUVar7 = UToolMenus::NewToolMenuObject(this_00,*pFVar5,(FName)0x0);
      FToolMenuContext::operator=(&pUVar7->Context,(FToolMenuContext *)((longlong)this + 0x18));
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_38);
      if (*(int *)((longlong)this + 0x10) != 0) {
        plVar8 = *(longlong **)((longlong)this + 8);
      }
      (**(code **)(*plVar8 + 0x60))(plVar8,pUVar7);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      if ((UToolMenus::Singleton == (UToolMenus *)0x0) && (UToolMenus::bHasShutDown == false)) {
        pFVar5 = ::FName::FName(&local_res8,"ToolMenus");
        FVar2 = *pFVar5;
        pFVar6 = FModuleManager::Get();
        FModuleManager::LoadModuleChecked(pFVar6,FVar2);
        UToolMenus::Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
      }
      UToolMenus::GenerateWidget(UToolMenus::Singleton,__return_storage_ptr__,pUVar7);
      return __return_storage_ptr__;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
  FVar3 = SNullWidget::NullWidget.SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar3.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// operator() @ 142c41cf0

EVisibility __thiscall
`UToolMenus::PopulateToolBarBuilderWithTopLevelChildren'::__l66::<lambda_2>::operator()(void *this)

{
  int iVar1;
  char cVar2;
  EVisibility EVar3;
  longlong *plVar4;
  uchar *in_RDX;
  longlong *plVar5;
  uchar *puVar6;
  uchar *puVar7;
  uchar local_res8 [8];
  undefined1 local_res18 [8];
  FReadAccessScope local_48;
  
  puVar7 = *(uchar **)this;
  iVar1 = *(int *)((longlong)this + 8);
  puVar6 = puVar7 + (longlong)iVar1 * 0x20;
  plVar5 = (longlong *)(puVar7 + 0x10);
  while( true ) {
    if (*(int *)((longlong)this + 8) != iVar1) {
      `TCheckedPointerIterator<TAttribute<EVisibility>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res18);
    }
    EVar3.Value.Value = EVisibility::Collapsed.Value.Value;
    if (puVar7 == puVar6) break;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(plVar5 + -1),&local_48);
    if ((((int)plVar5[1] == 0) || ((longlong *)*plVar5 == (longlong *)0x0)) ||
       (cVar2 = (**(code **)(*(longlong *)*plVar5 + 0x38))(), cVar2 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(plVar5 + -1),&local_48);
      if ((int)plVar5[1] == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)*plVar5;
      }
      (**(code **)(*plVar4 + 0x60))(plVar4,local_res8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      *puVar7 = local_res8[0];
    }
    EVar3.Value.Value = EVisibility::Visible.Value.Value;
    if ((TEnumAsByte<EVisibility::Private>)*puVar7 == EVisibility::Visible.Value.Value) break;
    puVar7 = puVar7 + 0x20;
    plVar5 = plVar5 + 4;
  }
  *in_RDX = (uchar)EVar3.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// operator() @ 142c41e00

TSharedRef<SWidget,1> * __thiscall
`UToolMenus::PopulateToolBarBuilderWithEntry'::__l89::<lambda_2>::operator()
          (void *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  UToolMenus *this_00;
  FName FVar2;
  FWeakObjectPtr FVar3;
  FSharedReferencer<1> FVar4;
  UToolMenu *pUVar5;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  
  this_00 = *(UToolMenus **)this;
  FVar2 = *(FName *)((longlong)this + 0x10);
  FVar3 = *(FWeakObjectPtr *)((longlong)this + 8);
  if ((UE::GC::GIsIncrementalReachabilityPending) && (FVar3 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar3);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = FVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar3 != (FWeakObjectPtr)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar3);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  local_res10 = local_res8;
  pUVar5 = (UToolMenu *)FWeakObjectPtr::Get(&local_res10);
  pUVar5 = UToolMenus::GenerateSubMenu(this_00,pUVar5,FVar2);
  if (pUVar5 != (UToolMenu *)0x0) {
    UToolMenus::GenerateWidget(this_00,__return_storage_ptr__,pUVar5);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
  FVar4 = SNullWidget::NullWidget.SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar4.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// operator() @ 142c41ee0

ECheckBoxState __thiscall
`UToolMenus::ConvertScriptObjectToUIAction'::__l14::<lambda_2>::operator()(void *this)

{
  ECheckBoxState EVar1;
  UToolMenuEntryScript *this_00;
  UFunction *this_01;
  UClass *pUVar2;
  FToolMenuContext local_78;
  ECheckBoxState local_10;
  
  this_00 = UToolMenuEntryScript::GetIfCanSafelyRouteCall(this);
  EVar1 = Unchecked;
  if (this_00 != (UToolMenuEntryScript *)0x0) {
    this_01 = UObject::FindFunctionChecked
                        ((UObject *)this_00,NAME_UToolMenuEntryScript_GetCheckState);
    pUVar2 = UField::GetOwnerClass((UField *)this_01);
    if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
      local_78.bIsEditing = false;
      local_78.ContextObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.ContextObjects.ArrayNum = 0;
      local_78.ContextObjects.ArrayMax = 0;
      local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum = 0;
      local_78.ContextObjectCleanupFuncs.Pairs.ArrayMax = 0;
      local_78.ContextCleanupFuncs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.ContextCleanupFuncs.ArrayNum = 0;
      local_78.ContextCleanupFuncs.ArrayMax = 0;
      local_78.CommandLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.CommandLists.ArrayNum = 0;
      local_78.CommandLists.ArrayMax = 0;
      local_78.CommandList.Object = (FUICommandList *)0x0;
      local_78.CommandList.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_78.Extenders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Extenders.ArrayNum = 0;
      local_78.Extenders.ArrayMax = 0;
      local_10 = Unchecked;
      FToolMenuContext::operator=(&local_78,(FToolMenuContext *)((longlong)this + 8));
      (**(code **)(this_00->_padding_ + 0x260))(this_00,this_01,&local_78);
      EVar1 = local_10;
      DestructItems<TSharedPtr<FExtender,1>,int>
                ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data,
                 local_78.Extenders.ArrayNum);
      if ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data !=
          (TSharedPtr<FExtender,1> *)0x0) {
        FMemory::Free(local_78.Extenders.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.CommandList.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FUICommandList,1>,int>
                ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data,
                 local_78.CommandLists.ArrayNum);
      if ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data !=
          (TSharedPtr<FUICommandList,1> *)0x0) {
        FMemory::Free(local_78.CommandLists.AllocatorInstance.Data);
      }
      DestructItems<TFunction<void___cdecl(void)>,int>
                ((TFunction<void___cdecl(void)> *)
                 local_78.ContextCleanupFuncs.AllocatorInstance.Data,
                 local_78.ContextCleanupFuncs.ArrayNum);
      if ((TFunction<void___cdecl(void)> *)local_78.ContextCleanupFuncs.AllocatorInstance.Data !=
          (TFunction<void___cdecl(void)> *)0x0) {
        FMemory::Free(local_78.ContextCleanupFuncs.AllocatorInstance.Data);
      }
      DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
                ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
                 local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data,
                 local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum);
      if ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
          local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data !=
          (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
        FMemory::Free(local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data);
      }
      if (local_78.ContextObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.ContextObjects.AllocatorInstance.Data);
      }
    }
    else {
      EVar1 = (**(code **)(this_00->_padding_ + 0x2b8))(this_00);
    }
  }
  return EVar1;
}

// operator() @ 142c42540

bool __thiscall
`UToolMenus::ConvertScriptObjectToUIAction'::__l17::<lambda_3>::operator()(void *this)

{
  UToolMenuEntryScript *this_00;
  UFunction *this_01;
  UClass *pUVar1;
  undefined1 uVar2;
  FToolMenuContext local_78;
  char local_10;
  
  this_00 = UToolMenuEntryScript::GetIfCanSafelyRouteCall(this);
  if (this_00 == (UToolMenuEntryScript *)0x0) {
    uVar2 = 1;
  }
  else {
    this_01 = UObject::FindFunctionChecked((UObject *)this_00,NAME_UToolMenuEntryScript_IsVisible);
    pUVar1 = UField::GetOwnerClass((UField *)this_01);
    if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
      local_78.bIsEditing = false;
      local_78.ContextObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.ContextObjects.ArrayNum = 0;
      local_78.ContextObjects.ArrayMax = 0;
      local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum = 0;
      local_78.ContextObjectCleanupFuncs.Pairs.ArrayMax = 0;
      local_78.ContextCleanupFuncs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.ContextCleanupFuncs.ArrayNum = 0;
      local_78.ContextCleanupFuncs.ArrayMax = 0;
      local_78.CommandLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.CommandLists.ArrayNum = 0;
      local_78.CommandLists.ArrayMax = 0;
      local_78.CommandList.Object = (FUICommandList *)0x0;
      local_78.CommandList.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_78.Extenders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Extenders.ArrayNum = 0;
      local_78.Extenders.ArrayMax = 0;
      local_10 = '\0';
      FToolMenuContext::operator=(&local_78,(FToolMenuContext *)((longlong)this + 8));
      (**(code **)(this_00->_padding_ + 0x260))(this_00,this_01,&local_78);
      uVar2 = local_10 != '\0';
      DestructItems<TSharedPtr<FExtender,1>,int>
                ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data,
                 local_78.Extenders.ArrayNum);
      if ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data !=
          (TSharedPtr<FExtender,1> *)0x0) {
        FMemory::Free(local_78.Extenders.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.CommandList.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FUICommandList,1>,int>
                ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data,
                 local_78.CommandLists.ArrayNum);
      if ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data !=
          (TSharedPtr<FUICommandList,1> *)0x0) {
        FMemory::Free(local_78.CommandLists.AllocatorInstance.Data);
      }
      DestructItems<TFunction<void___cdecl(void)>,int>
                ((TFunction<void___cdecl(void)> *)
                 local_78.ContextCleanupFuncs.AllocatorInstance.Data,
                 local_78.ContextCleanupFuncs.ArrayNum);
      if ((TFunction<void___cdecl(void)> *)local_78.ContextCleanupFuncs.AllocatorInstance.Data !=
          (TFunction<void___cdecl(void)> *)0x0) {
        FMemory::Free(local_78.ContextCleanupFuncs.AllocatorInstance.Data);
      }
      DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
                ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
                 local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data,
                 local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum);
      if ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
          local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data !=
          (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
        FMemory::Free(local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data);
      }
      if (local_78.ContextObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.ContextObjects.AllocatorInstance.Data);
      }
    }
    else {
      uVar2 = (**(code **)(this_00->_padding_ + 0x2c0))(this_00);
    }
  }
  return (bool)uVar2;
}

// operator() @ 142c426c0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
`UToolMenus::ConvertWidgetChoice'::__l13::<lambda_3>::operator()
          (void *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  bool bVar2;
  FSharedReferencer<1> FVar3;
  char cVar4;
  ISlateStyle *pIVar5;
  TSharedRef<FExtender,1> *pTVar6;
  longlong *plVar7;
  FReadAccessScope local_1b8;
  TSharedPtr<FExtender,1> local_1a0;
  FMenuBuilder local_190;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_1b8);
  if ((*(int *)((longlong)this + 0x10) != 0) &&
     (*(longlong **)((longlong)this + 8) != (longlong *)0x0)) {
    cVar4 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x38))();
    if (cVar4 != '\0') {
      bVar2 = true;
      goto LAB_142c42703;
    }
  }
  bVar2 = false;
LAB_142c42703:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_1b8);
  if (bVar2) {
    plVar7 = (longlong *)0x0;
    pIVar5 = FAppStyle::Get();
    pTVar6 = FExtender::Combine((TSharedRef<FExtender,1> *)&local_1b8,
                                (TArray<TSharedPtr<FExtender,1>,TSizedDefaultAllocator<32>_> *)
                                ((longlong)this + 0x70));
    local_1a0.Object = pTVar6->Object;
    local_1a0.SharedReferenceCount.ReferenceController =
         (pTVar6->SharedReferenceCount).ReferenceController;
    if (local_1a0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1b8.DestructionSentinel.Accessor);
    local_1b8.DestructionSentinel._0_8_ = *(undefined8 *)((longlong)this + 0x60);
    local_1b8.DestructionSentinel.Accessor =
         *(FMRSWRecursiveAccessDetector **)((longlong)this + 0x68);
    if ((TReferenceControllerBase<1> *)local_1b8.DestructionSentinel.Accessor !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_1b8.DestructionSentinel.Accessor)->SharedReferenceCount
           = (atomic<int>)
             ((int)((TReferenceControllerBase<1> *)local_1b8.DestructionSentinel.Accessor)->
                   SharedReferenceCount + 1);
      UNLOCK();
    }
    FMenuBuilder::FMenuBuilder
              (&local_190,true,(TSharedPtr<FUICommandList_const_,1> *)&local_1b8,&local_1a0,false,
               pIVar5,true,(FName)0x0,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_1b8);
    if (*(int *)((longlong)this + 0x10) != 0) {
      plVar7 = *(longlong **)((longlong)this + 8);
    }
    (**(code **)(*plVar7 + 0x60))(plVar7,&local_190);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1b8);
    FMenuBuilder::MakeWidget
              (&local_190,__return_storage_ptr__,
               (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
                *)0x0);
    FMenuBuilder::~FMenuBuilder(&local_190);
  }
  else {
    __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
    FVar3 = SNullWidget::NullWidget.SharedReferenceCount;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar3.ReferenceController)->SharedReferenceCount;
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
  }
  return __return_storage_ptr__;
}

// operator() @ 142c42e10

bool __thiscall `UToolMenus::ConvertUIAction'::__l14::<lambda_4>::operator()(void *this)

{
  bool bVar1;
  uint *puVar2;
  FTlsAutoCleanup *pFVar3;
  undefined1 local_res8 [8];
  code *local_88;
  undefined1 *local_80;
  FToolMenuContext local_78;
  char local_10;
  
  bVar1 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound(this);
  if (bVar1) {
    puVar2 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_80 = local_res8;
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar3 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_88,puVar2);
    if (*(char *)(pFVar3 + 4) == '\0') {
      local_78.bIsEditing = false;
      local_78.ContextObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.ContextObjects.ArrayNum = 0;
      local_78.ContextObjects.ArrayMax = 0;
      local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum = 0;
      local_78.ContextObjectCleanupFuncs.Pairs.ArrayMax = 0;
      local_78.ContextCleanupFuncs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.ContextCleanupFuncs.ArrayNum = 0;
      local_78.ContextCleanupFuncs.ArrayMax = 0;
      local_78.CommandLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.CommandLists.ArrayNum = 0;
      local_78.CommandLists.ArrayMax = 0;
      local_78.CommandList.Object = (FUICommandList *)0x0;
      local_78.CommandList.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_78.Extenders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Extenders.ArrayNum = 0;
      local_78.Extenders.ArrayMax = 0;
      local_10 = '\0';
      FToolMenuContext::operator=(&local_78,(FToolMenuContext *)((longlong)this + 0x18));
      TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(this,&local_78);
      bVar1 = local_10 != '\0';
      DestructItems<TSharedPtr<FExtender,1>,int>
                ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data,
                 local_78.Extenders.ArrayNum);
      if ((TSharedPtr<FExtender,1> *)local_78.Extenders.AllocatorInstance.Data !=
          (TSharedPtr<FExtender,1> *)0x0) {
        FMemory::Free(local_78.Extenders.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.CommandList.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FUICommandList,1>,int>
                ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data,
                 local_78.CommandLists.ArrayNum);
      if ((TSharedPtr<FUICommandList,1> *)local_78.CommandLists.AllocatorInstance.Data !=
          (TSharedPtr<FUICommandList,1> *)0x0) {
        FMemory::Free(local_78.CommandLists.AllocatorInstance.Data);
      }
      DestructItems<TFunction<void___cdecl(void)>,int>
                ((TFunction<void___cdecl(void)> *)
                 local_78.ContextCleanupFuncs.AllocatorInstance.Data,
                 local_78.ContextCleanupFuncs.ArrayNum);
      if ((TFunction<void___cdecl(void)> *)local_78.ContextCleanupFuncs.AllocatorInstance.Data !=
          (TFunction<void___cdecl(void)> *)0x0) {
        FMemory::Free(local_78.ContextCleanupFuncs.AllocatorInstance.Data);
      }
      DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
                ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
                 local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data,
                 local_78.ContextObjectCleanupFuncs.Pairs.ArrayNum);
      if ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
          local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data !=
          (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
        FMemory::Free(local_78.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data);
      }
      if (local_78.ContextObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.ContextObjects.AllocatorInstance.Data);
      }
      return bVar1;
    }
  }
  return true;
}

// AddEntry @ 142c45580

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
UToolMenus::AddEntry(UToolMenus *this,FName param_1,FName param_2,FToolMenuEntry *param_3)

{
  UToolMenu *this_00;
  FToolMenuSection *this_01;
  
  this_00 = ExtendMenu(this,param_1);
  this_01 = UToolMenu::FindOrAddSection(this_00,param_2);
  FToolMenuSection::AddEntry(this_01,param_3);
  return;
}

// AddMenuCustomization @ 142c45840

FCustomizedToolMenu * __thiscall UToolMenus::AddMenuCustomization(UToolMenus *this,FName param_1)

{
  int *piVar1;
  int iVar2;
  FCustomizedToolMenu *pFVar3;
  
  pFVar3 = FindMenuCustomization(this,param_1);
  if (pFVar3 == (FCustomizedToolMenu *)0x0) {
    iVar2 = (this->CustomizedMenus).ArrayNum;
    piVar1 = &(this->CustomizedMenus).ArrayMax;
    if (iVar2 == *piVar1) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x208,8,&(this->CustomizedMenus).AllocatorInstance,piVar1);
    }
    (this->CustomizedMenus).ArrayNum = iVar2 + 1;
    pFVar3 = (FCustomizedToolMenu *)
             ((this->CustomizedMenus).AllocatorInstance.Data + (longlong)iVar2 * 0x208);
    DefaultConstructItems<FCustomizedToolMenu,int>(pFVar3,1);
    pFVar3->_padding_ = (longlong)param_1;
  }
  return pFVar3;
}

// AddMenuEntryObject @ 142c45c70

bool __cdecl UToolMenus::AddMenuEntryObject(UToolMenuEntryScript *param_1)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this;
  UToolMenu *this_00;
  FName local_res8;
  
  if ((Singleton == (UToolMenus *)0x0) && (!bHasShutDown)) {
    pFVar2 = ::FName::FName(&local_res8,"ToolMenus");
    FVar1 = *pFVar2;
    this = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this,FVar1);
    Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
  }
  this_00 = ExtendMenu(Singleton,(param_1->Data).Menu);
  UToolMenu::AddMenuEntryObject(this_00,param_1);
  return true;
}

// AddMenuProfile @ 142c46160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FToolMenuProfile * __thiscall
UToolMenus::AddMenuProfile(UToolMenus *this,FName param_1,FName param_2)

{
  FName FVar1;
  uint uVar2;
  FToolMenuProfileMap *this_00;
  FToolMenuProfile *pFVar3;
  TSet<TTuple<FName,FToolMenuProfile>,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfile,0>,FDefaultSetAllocator>
  *this_01;
  longlong lVar4;
  FName local_res10;
  FName local_res18;
  undefined1 auStack_1f8 [32];
  TPairInitializer<FName_const_&,FToolMenuProfile_&&> local_1d8;
  FToolMenuProfile *local_1c8;
  undefined1 local_1c0 [72];
  void *local_178;
  undefined4 local_170;
  TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_168;
  void *local_128;
  undefined4 local_120;
  ForAnyElementType local_118;
  FNamePermissionList local_108;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  local_res10 = param_1;
  local_res18 = param_2;
  this_00 = TMapBase<FName,FToolMenuProfileMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfileMap,0>_>
            ::Find((TMapBase<FName,FToolMenuProfileMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfileMap,0>_>
                    *)&this->MenuProfiles,param_1);
  if ((this_00 != (FToolMenuProfileMap *)0x0) &&
     (pFVar3 = TMapBase<FName,FToolMenuProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfile,0>_>
               ::Find((TMapBase<FName,FToolMenuProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfile,0>_>
                       *)this_00,param_2), pFVar3 != (FToolMenuProfile *)0x0)) {
    return pFVar3;
  }
  FVar1 = local_res10;
  uVar2 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
  this_01 = (TSet<TTuple<FName,FToolMenuProfile>,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfile,0>,FDefaultSetAllocator>
             *)TMapBase<FName,FToolMenuProfileMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfileMap,0>_>
               ::FindOrAddImpl<FName_const_&>
                         ((TMapBase<FName,FToolMenuProfileMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfileMap,0>_>
                           *)&this->MenuProfiles,uVar2 + FVar1.Number,&local_res10);
  memset(local_1c0,0,0x1a8);
  local_1d8.Value = (FToolMenuProfile *)&local_res18;
  local_1c8 = FToolMenuProfile::FToolMenuProfile((FToolMenuProfile *)local_1c0);
  TSet<TTuple<FName,FToolMenuProfile>,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfile,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FToolMenuProfile_&&>_>
            (this_01,&local_1d8,(bool *)&local_1d8.Value);
  lVar4 = *(longlong *)&this_01->Elements + (longlong)(int)local_1d8.Key * 0x1b8;
  FNamePermissionList::~FNamePermissionList(&local_108);
  if (local_118.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data);
  }
  local_120 = 0;
  if (local_128 != (void *)0x0) {
    FMemory::Free(local_128);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_168);
  local_170 = 0;
  if (local_178 != (void *)0x0) {
    FMemory::Free(local_178);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_1c0 + 8));
  *(FName *)(lVar4 + 8) = local_res18;
  return (FToolMenuProfile *)(lVar4 + 8);
}

// AddMenuSubstitutionDuringGenerate @ 142c462f0

void __thiscall
UToolMenus::AddMenuSubstitutionDuringGenerate(UToolMenus *this,FName param_1,FName param_2)

{
  TPairInitializer<FName_const_&,FName_const_&> local_res8;
  FName local_res18 [2];
  FName **local_18;
  FName *local_10;
  
  local_18 = &local_res8.Value;
  local_10 = local_res18;
  local_res8.Value = (FName *)param_1;
  local_res18[0] = param_2;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,FName_const_&>_>
            ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
              *)&this->MenuSubstitutionsDuringGenerate,&local_res8,(bool *)&local_18);
  return;
}

// AddReferencedContextObjects @ 142c46940

void __thiscall
UToolMenus::AddReferencedContextObjects
          (UToolMenus *this,TSharedRef<FMultiBox,1> *param_1,UToolMenu *param_2)

{
  TObjectPtr<UObject_const_>_u_0 *pTVar1;
  atomic<int> aVar2;
  int iVar3;
  uint uVar4;
  TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_> *this_00;
  TObjectPtr<UObject_const_>_u_0 TVar5;
  atomic<int> *paVar6;
  TObjectPtr<UObject_const_>_u_0 *pTVar7;
  TObjectPtr<UObject_const_>_u_0 local_res18;
  FWeakObjectPtr local_res20;
  TWeakPtr<FMultiBox,1> local_38;
  
  if (param_2 == (UToolMenu *)0x0) {
    return;
  }
  local_38.WeakReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  local_38.Object = param_1->Object;
  if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
    if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      paVar6 = &(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      LOCK();
      *paVar6 = (atomic<int>)((int)*paVar6 + 1);
      UNLOCK();
      goto LAB_142c469a0;
    }
  }
  paVar6 = (atomic<int> *)&DAT_0000000c;
LAB_142c469a0:
  uVar4 = ((uint)((ulonglong)local_38.Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_38.Object >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    aVar2 = *paVar6;
    *paVar6 = (atomic<int>)((int)*paVar6 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_38.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_38.WeakReferenceCount.ReferenceController,1);
    }
  }
  this_00 = TMapBase<TWeakPtr<FMultiBox,1>,TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<FMultiBox,1>,TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>,0>_>
            ::FindOrAddImpl<TWeakPtr<FMultiBox,1>_>
                      ((TMapBase<TWeakPtr<FMultiBox,1>,TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakPtr<FMultiBox,1>,TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>,0>_>
                        *)&this->WidgetObjectReferences,uVar4 >> 0x10 ^ uVar4,&local_38);
  if (local_38.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar6 = &(local_38.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar6;
    *paVar6 = (atomic<int>)((int)*paVar6 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_38.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_38.WeakReferenceCount.ReferenceController,1);
    }
  }
  local_res18 = (TObjectPtr<UObject_const_>_u_0)param_2;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TObjectPtr<UObject_const_>_>
            (this_00,(TObjectPtr<UObject_const_> *)&local_res18.ObjectPtr);
  pTVar7 = (TObjectPtr<UObject_const_>_u_0 *)
           (param_2->Context).ContextObjects.AllocatorInstance.Data;
  iVar3 = (param_2->Context).ContextObjects.ArrayNum;
  pTVar1 = pTVar7 + iVar3;
  while( true ) {
    if ((param_2->Context).ContextObjects.ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res18);
    }
    if (pTVar7 == pTVar1) break;
    TVar5 = (TObjectPtr<UObject_const_>_u_0)pTVar7->DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UToolMenu *)TVar5.DebugPtr != (UToolMenu *)0x0) {
        UE::GC::MarkAsReachable(TVar5.DebugPtr);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UToolMenu *)TVar5.DebugPtr != (UToolMenu *)0x0)) {
        UE::GC::MarkAsReachable(TVar5.DebugPtr);
      }
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_res18 = TVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UToolMenu *)TVar5.DebugPtr != (UToolMenu *)0x0)) {
      UE::GC::MarkAsReachable(TVar5.DebugPtr);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_res18);
    TVar5.DebugPtr = FWeakObjectPtr::Get(&local_res20);
    if ((UToolMenu *)TVar5.DebugPtr != (UToolMenu *)0x0) {
      local_res18.DebugPtr = TVar5.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(TVar5.DebugPtr);
      }
      TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<TObjectPtr<UObject_const_>_>
                (this_00,(TObjectPtr<UObject_const_> *)&local_res18.ObjectPtr);
    }
    pTVar7 = pTVar7 + 1;
  }
  return;
}

// AddReferencedObjects @ 142c46b30

void __cdecl UToolMenus::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  UClass *pUVar8;
  longlong lVar9;
  FString *pFVar10;
  undefined1 *puVar11;
  wchar_t *pwVar12;
  FScriptContainerElement *_Dst;
  uint uVar13;
  wchar_t *pwVar14;
  undefined1 auStack_130 [16];
  uint uStack_120;
  int iStack_11c;
  longlong local_118;
  TSet<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>,FDefaultSetAllocator>
  *pTStack_110;
  TSet<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>,FDefaultSetAllocator>
  *local_108;
  char local_100;
  char cStack_ff;
  longlong *local_f8;
  undefined1 auStack_f0 [16];
  uint uStack_e0;
  int iStack_dc;
  longlong local_d8;
  TSet<TTuple<TWeakPtr<FMultiBox,1>,TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakPtr<FMultiBox,1>,TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_d0;
  TSet<TTuple<TWeakPtr<FMultiBox,1>,TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakPtr<FMultiBox,1>,TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *local_c8;
  char local_c0;
  char cStack_bf;
  undefined1 local_b8 [32];
  longlong local_98;
  TSet<TTuple<TWeakPtr<FMultiBox,1>,TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakPtr<FMultiBox,1>,TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTStack_90;
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>,FDefaultSetAllocator>
  *pTStack_60;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (param_1 == (UObject *)0x0) {
    pFVar10 = GetTypeName<UToolMenus>(&local_58);
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar14);
  }
  pUVar8 = GetPrivateStaticClass();
  iVar6 = (int)pUVar8->_padding_;
  if ((iVar6 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar6 * 8) ==
      &pUVar8->_padding_)) {
    puVar11 = &param_1[0xc].field_0x18;
    TSet<TTuple<TWeakPtr<FMultiBox,1>,TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakPtr<FMultiBox,1>,TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_b8,
               (TSet<TTuple<TWeakPtr<FMultiBox,1>,TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakPtr<FMultiBox,1>,TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)puVar11);
    local_c0 = '\0';
    cStack_bf = '\0';
    stack0xffffffffffffff18 = local_b8._16_16_;
    local_f8 = (longlong *)local_b8._0_8_;
    auStack_f0._0_8_ = local_b8._8_8_;
    local_d8 = local_98;
    pTStack_d0 = pTStack_90;
    iVar6 = local_b8._28_4_;
    local_c8 = (TSet<TTuple<TWeakPtr<FMultiBox,1>,TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakPtr<FMultiBox,1>,TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)puVar11;
    if (iVar6 < *(int *)(local_b8._16_8_ + 0x18)) {
      do {
        lVar9 = (longlong)iVar6;
        if (((*(longlong *)(*local_f8 + lVar9 * 0x28) == 0) ||
            (lVar2 = *(longlong *)(*local_f8 + 8 + lVar9 * 0x28), lVar2 == 0)) ||
           (*(int *)(lVar2 + 8) < 1)) {
          TSet<TTuple<TWeakPtr<FMultiBox,1>,TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakPtr<FMultiBox,1>,TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_d0,iVar6);
          local_c0 = '\x01';
        }
        else {
          (**(code **)(param_2->_padding_ + 0x90))
                    (param_2,*(undefined8 *)(*local_f8 + lVar9 * 0x28 + 0x10),
                     *(undefined4 *)(*local_f8 + 0x18 + lVar9 * 0x28),param_1,0);
        }
        uStack_e0 = uStack_e0 & ~auStack_f0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_f0);
        iVar6 = iStack_dc;
      } while (iStack_dc < *(int *)(auStack_f0._8_8_ + 0x18));
      if ((local_c0 != '\0') && (cStack_bf != '\0')) {
        uVar13 = *(int *)&(local_c8->Elements).field_0x8 - *(int *)&(local_c8->Elements).field_0x34;
        if (uVar13 < 4) {
          iVar6 = 1;
        }
        else {
          uVar1 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
          lVar9 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          iVar6 = 1 << ((byte)lVar9 & 0x1f);
        }
        if (((0 < (int)uVar13) && (local_c8->HashSize < iVar6)) || (iVar6 < local_c8->HashSize)) {
          local_c8->HashSize = iVar6;
          TSet<TTuple<TWeakPtr<FMultiBox,1>,TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakPtr<FMultiBox,1>,TArray<TObjectPtr<UObject_const_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::Rehash(local_c8);
        }
      }
    }
    puVar11 = &param_1[10].field_0x18;
    TSet<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_88,
               (TSet<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>,FDefaultSetAllocator>
                *)puVar11);
    local_100 = '\0';
    cStack_ff = '\0';
    stack0xfffffffffffffed8 = local_88._16_16_;
    auStack_130._0_8_ = local_88._8_8_;
    local_118 = local_68;
    pTStack_110 = pTStack_60;
    iVar6 = local_88._28_4_;
    local_108 = (TSet<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>,FDefaultSetAllocator>
                 *)puVar11;
    if (iVar6 < *(int *)(local_88._16_8_ + 0x18)) {
      do {
        lVar9 = (longlong)iVar6 * 0x20 + *(longlong *)local_88._0_8_;
        if ((*(longlong *)(lVar9 + 8) == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = *(ForAnyElementType **)(lVar9 + 8);
        iVar6 = 0;
        while ((-1 < iVar6 && (iVar6 < *(int *)&pFVar3[1].Data))) {
          if ((*(longlong *)(*(longlong *)(pFVar3->Data + (longlong)iVar6 * 0x10) + 8) == 0) ||
             ((lVar2 = *(longlong *)(*(longlong *)(pFVar3->Data + (longlong)iVar6 * 0x10) + 0x10),
              lVar2 == 0 || (*(int *)(lVar2 + 8) < 1)))) {
            if ((*(int *)&pFVar3[1].Data <= iVar6) &&
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
            _Dst = pFVar3->Data + (longlong)iVar6 * 0x10;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)(_Dst + 8));
            iVar7 = (*(int *)&pFVar3[1].Data - iVar6) + -1;
            if (iVar7 != 0) {
              memmove(_Dst,_Dst + 0x10,(longlong)iVar7 << 4);
            }
            iVar7 = *(int *)&pFVar3[1].Data + -1;
            *(int *)&pFVar3[1].Data = iVar7;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,pFVar3,iVar7,(int *)((longlong)&pFVar3[1].Data + 4));
          }
          else {
            if ((*(int *)&pFVar3[1].Data <= iVar6) &&
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
            (**(code **)(param_2->_padding_ + 0x88))
                      (param_2,*(undefined8 *)(pFVar3->Data + (longlong)iVar6 * 0x10),param_1,0);
            iVar6 = iVar6 + 1;
          }
        }
        if ((*(longlong *)(lVar9 + 8) == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(int *)(*(longlong *)(lVar9 + 8) + 8) == 0) {
          TSet<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_110,iStack_11c);
          local_100 = '\x01';
        }
        uStack_120 = uStack_120 & ~auStack_130._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_130);
        iVar6 = iStack_11c;
      } while (iStack_11c < *(int *)(auStack_130._8_8_ + 0x18));
      if ((local_100 != '\0') && (cStack_ff != '\0')) {
        iVar6 = 1;
        uVar13 = *(int *)&(local_108->Elements).field_0x8 -
                 *(int *)&(local_108->Elements).field_0x34;
        if (3 < uVar13) {
          uVar1 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
          lVar9 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          iVar6 = 1 << ((byte)lVar9 & 0x1f);
        }
        if (((0 < (int)uVar13) && (local_108->HashSize < iVar6)) || (iVar6 < local_108->HashSize)) {
          local_108->HashSize = iVar6;
          TSet<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>,FDefaultSetAllocator>
          ::Rehash(local_108);
        }
      }
    }
    UObject::AddReferencedObjects(param_1,param_2);
    return;
  }
  pFVar10 = GetTypeName<UToolMenus>(&local_48);
  pwVar14 = L"";
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  pFVar10 = GetFullNameForCastLogError<UObject>(&local_38,param_1);
  if ((pFVar10->Data).ArrayNum != 0) {
    pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar14,pwVar12);
}

// AddRuntimeMenuCustomization @ 142c47020

FCustomizedToolMenu * __thiscall
UToolMenus::AddRuntimeMenuCustomization(UToolMenus *this,FName param_1)

{
  int *piVar1;
  int iVar2;
  FCustomizedToolMenu *pFVar3;
  
  pFVar3 = FindRuntimeMenuCustomization(this,param_1);
  if (pFVar3 == (FCustomizedToolMenu *)0x0) {
    iVar2 = (this->RuntimeCustomizedMenus).ArrayNum;
    piVar1 = &(this->RuntimeCustomizedMenus).ArrayMax;
    if (iVar2 == *piVar1) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x208,8,&(this->RuntimeCustomizedMenus).AllocatorInstance,piVar1);
    }
    (this->RuntimeCustomizedMenus).ArrayNum = iVar2 + 1;
    pFVar3 = (FCustomizedToolMenu *)
             ((this->RuntimeCustomizedMenus).AllocatorInstance.Data + (longlong)iVar2 * 0x208);
    DefaultConstructItems<FCustomizedToolMenu,int>(pFVar3,1);
    pFVar3->_padding_ = (longlong)param_1;
  }
  return pFVar3;
}

// AddRuntimeMenuProfile @ 142c470b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FToolMenuProfile * __thiscall
UToolMenus::AddRuntimeMenuProfile(UToolMenus *this,FName param_1,FName param_2)

{
  FName FVar1;
  uint uVar2;
  FToolMenuProfileMap *this_00;
  FToolMenuProfile *pFVar3;
  TSet<TTuple<FName,FToolMenuProfile>,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfile,0>,FDefaultSetAllocator>
  *this_01;
  longlong lVar4;
  FName local_res10;
  FName local_res18;
  undefined1 auStack_1f8 [32];
  TPairInitializer<FName_const_&,FToolMenuProfile_&&> local_1d8;
  FToolMenuProfile *local_1c8;
  undefined1 local_1c0 [72];
  void *local_178;
  undefined4 local_170;
  TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_168;
  void *local_128;
  undefined4 local_120;
  ForAnyElementType local_118;
  FNamePermissionList local_108;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  local_res10 = param_1;
  local_res18 = param_2;
  this_00 = TMapBase<FName,FToolMenuProfileMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfileMap,0>_>
            ::Find((TMapBase<FName,FToolMenuProfileMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfileMap,0>_>
                    *)&this->RuntimeMenuProfiles,param_1);
  if ((this_00 != (FToolMenuProfileMap *)0x0) &&
     (pFVar3 = TMapBase<FName,FToolMenuProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfile,0>_>
               ::Find((TMapBase<FName,FToolMenuProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfile,0>_>
                       *)this_00,param_2), pFVar3 != (FToolMenuProfile *)0x0)) {
    return pFVar3;
  }
  FVar1 = local_res10;
  uVar2 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
  this_01 = (TSet<TTuple<FName,FToolMenuProfile>,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfile,0>,FDefaultSetAllocator>
             *)TMapBase<FName,FToolMenuProfileMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfileMap,0>_>
               ::FindOrAddImpl<FName_const_&>
                         ((TMapBase<FName,FToolMenuProfileMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfileMap,0>_>
                           *)&this->RuntimeMenuProfiles,uVar2 + FVar1.Number,&local_res10);
  memset(local_1c0,0,0x1a8);
  local_1d8.Value = (FToolMenuProfile *)&local_res18;
  local_1c8 = FToolMenuProfile::FToolMenuProfile((FToolMenuProfile *)local_1c0);
  TSet<TTuple<FName,FToolMenuProfile>,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfile,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FToolMenuProfile_&&>_>
            (this_01,&local_1d8,(bool *)&local_1d8.Value);
  lVar4 = *(longlong *)&this_01->Elements + (longlong)(int)local_1d8.Key * 0x1b8;
  FNamePermissionList::~FNamePermissionList(&local_108);
  if (local_118.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data);
  }
  local_120 = 0;
  if (local_128 != (void *)0x0) {
    FMemory::Free(local_128);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_168);
  local_170 = 0;
  if (local_178 != (void *)0x0) {
    FMemory::Free(local_178);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_1c0 + 8));
  *(FName *)(lVar4 + 8) = local_res18;
  return (FToolMenuProfile *)(lVar4 + 8);
}

// AddSection @ 142c47970

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
UToolMenus::AddSection
          (UToolMenus *this,FName param_1,FName param_2,TAttribute<FText> *param_3,
          FToolMenuInsert *param_4)

{
  UToolMenu *this_00;
  FToolMenuSection *pFVar1;
  FToolMenuInsert local_18;
  
  this_00 = ExtendMenu(this,param_1);
  pFVar1 = UToolMenu::FindSection(this_00,param_2);
  if (pFVar1 == (FToolMenuSection *)0x0) {
    local_18.Name = param_4->Name;
    local_18.Position = param_4->Position;
    local_18.Fallback = param_4->Fallback;
    local_18._10_2_ = *(undefined2 *)&param_4->field_0xa;
    UToolMenu::AddSection(this_00,param_2,param_3,&local_18);
  }
  return;
}

// ApplyCustomization @ 142c4a070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
UToolMenus::ApplyCustomization(UToolMenus *this,UToolMenu *param_1,FCustomizedToolMenu *param_2)

{
  int *piVar1;
  TArray<FToolMenuSection,TSizedDefaultAllocator<32>_> *pTVar2;
  FName *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FName FVar6;
  code *pcVar7;
  ForAnyElementType FVar8;
  UToolMenu *pUVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  FCustomizedToolMenuNameArray *pFVar14;
  FToolMenuEntry *pFVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar20;
  FToolMenuSection *pFVar21;
  FName *pFVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  FToolMenuEntry *pFVar25;
  ulonglong uVar26;
  uint uVar27;
  longlong lVar28;
  undefined1 auStackY_158 [32];
  undefined1 local_107;
  undefined1 local_106;
  undefined1 local_105 [5];
  TArray<int,TSizedDefaultAllocator<32>_> local_100;
  ForAnyElementType local_f0;
  undefined8 local_e8;
  int local_e0;
  int local_dc;
  uint local_d8;
  longlong local_d0;
  longlong local_c8;
  UToolMenu *local_c0;
  FCustomizedToolMenu *local_b8;
  undefined1 local_b0 [8];
  FScriptContainerElement *local_a8;
  UToolMenus *local_a0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  ulonglong uVar19;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  uVar24 = 0;
  uVar27 = (param_1->Sections).ArrayNum;
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8 = 0;
  local_c0 = param_1;
  local_b8 = param_2;
  local_a0 = this;
  if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
  }
  if (0 < (int)uVar27) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x238,8,uVar27,&local_f0,0,(int *)((longlong)&local_e8 + 4));
  }
  uVar27 = (param_1->Sections).ArrayNum;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.ArrayNum = 0;
  local_100.ArrayMax = 0;
  if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
  }
  uVar23 = uVar24;
  if (0 < (int)uVar27) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar27,&local_100.AllocatorInstance,0,&local_100.ArrayMax);
    uVar23 = local_100._8_8_ & 0xffffffff;
  }
  pFVar18 = (param_2->SectionOrder).AllocatorInstance.Data;
  iVar13 = (param_2->SectionOrder).ArrayNum;
  pFVar5 = pFVar18 + (longlong)iVar13 * 8;
LAB_142c4a194:
  do {
    if ((param_2->SectionOrder).ArrayNum != iVar13) {
      local_107 = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_107);
      uVar23 = local_100._8_8_ & 0xffffffff;
    }
    if (pFVar18 == pFVar5) {
      local_dc = 0;
      if (0 < (param_1->Sections).ArrayNum) {
        do {
          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>(&local_100,&local_dc);
          local_dc = local_dc + 1;
        } while (local_dc < (param_1->Sections).ArrayNum);
        uVar23 = local_100._8_8_ & 0xffffffff;
      }
      uVar19 = uVar24;
      uVar26 = uVar24;
      if (0 < (int)uVar23) {
        do {
          uVar17 = (uint)uVar19;
          uVar27 = 0;
          if ((int)uVar17 < (int)uVar23) {
            uVar27 = ~uVar17 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar27 = *(uint *)(local_100.AllocatorInstance.Data + uVar26);
          uVar12 = 0;
          if ((int)uVar27 < (param_1->Sections).ArrayNum) {
            uVar12 = ~uVar27 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar21 = (FToolMenuSection *)
                    ((param_1->Sections).AllocatorInstance.Data + (longlong)(int)uVar27 * 0x238);
          if (((local_f0.Data <= pFVar21) &&
              (pFVar21 < (FToolMenuSection *)(local_f0.Data + (longlong)local_e8._4_4_ * 0x238))) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar13 = (int)local_e8;
          if ((int)local_e8 == local_e8._4_4_) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x238,8,&local_f0,(int *)((longlong)&local_e8 + 4));
          }
          local_e8 = CONCAT44(local_e8._4_4_,iVar13 + 1);
          pFVar21 = FToolMenuSection::FToolMenuSection
                              ((FToolMenuSection *)(local_f0.Data + (longlong)iVar13 * 0x238),
                               pFVar21);
          pFVar15 = (FToolMenuEntry *)(pFVar21->Blocks).AllocatorInstance.Data;
          iVar13 = (pFVar21->Blocks).ArrayNum;
          piVar1 = &(pFVar21->Blocks).ArrayMax;
          if ((pFVar21->Blocks).ArrayMax < 0) {
            DestructItems<FToolMenuEntry,int>(pFVar15,iVar13);
            (pFVar21->Blocks).ArrayNum = 0;
            if (*piVar1 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x780,8,0,&(pFVar21->Blocks).AllocatorInstance,0,piVar1);
            }
          }
          else {
            DestructItems<FToolMenuEntry,int>(pFVar15,iVar13);
            (pFVar21->Blocks).ArrayNum = 0;
          }
          uVar23 = local_100._8_8_ & 0xffffffff;
          uVar19 = (ulonglong)(uVar17 + 1);
          param_2 = local_b8;
          uVar26 = uVar26 + 4;
        } while ((int)(uVar17 + 1) < local_100.ArrayNum);
      }
      local_d8 = 0;
      if (0 < (int)uVar23) {
        local_c8 = 0;
        local_d0 = 0;
        do {
          lVar20 = local_c8;
          lVar28 = local_d0;
          uVar17 = (uint)uVar24;
          uVar27 = 0;
          if ((int)uVar17 < (int)uVar23) {
            uVar27 = ~uVar17 >> 0x1f;
          }
          if (uVar27 == 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar23 = local_100._8_8_ & 0xffffffff;
          }
          uVar27 = *(uint *)(local_100.AllocatorInstance.Data + lVar28);
          uVar12 = 0;
          if ((int)uVar27 < (param_1->Sections).ArrayNum) {
            uVar12 = ~uVar27 >> 0x1f;
          }
          if (uVar12 == 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar23 = local_100._8_8_ & 0xffffffff;
          }
          pFVar5 = (param_1->Sections).AllocatorInstance.Data;
          uVar12 = 0;
          if ((int)uVar17 < (int)local_e8) {
            uVar12 = ~uVar17 >> 0x1f;
          }
          if (uVar12 == 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar23 = local_100._8_8_ & 0xffffffff;
          }
          FVar6 = *(FName *)(pFVar5 + (longlong)(int)uVar27 * 0x238);
          local_a8 = local_f0.Data + lVar20;
          if (FVar6 != (FName)0x0) {
            pFVar14 = TMapBase<FName,FCustomizedToolMenuNameArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuNameArray,0>_>
                      ::Find((TMapBase<FName,FCustomizedToolMenuNameArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCustomizedToolMenuNameArray,0>_>
                              *)&param_2->EntryOrder,FVar6);
            pFVar5 = local_a8;
            if (pFVar14 != (FCustomizedToolMenuNameArray *)0x0) {
              pFVar22 = (FName *)(pFVar14->Names).AllocatorInstance.Data;
              iVar13 = (pFVar14->Names).ArrayNum;
              pFVar3 = pFVar22 + iVar13;
              while( true ) {
                if ((pFVar14->Names).ArrayNum != iVar13) {
                  local_106 = 0;
                  `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(&local_106);
                }
                lVar20 = local_c8;
                param_1 = local_c0;
                lVar28 = local_d0;
                uVar17 = local_d8;
                if (pFVar22 == pFVar3) break;
                if ((*pFVar22 != (FName)0x0) &&
                   (pFVar15 = UToolMenu::FindEntry(local_c0,*pFVar22),
                   pFVar15 != (FToolMenuEntry *)0x0)) {
                  if ((*(FToolMenuEntry **)(pFVar5 + 0x18) <= pFVar15) &&
                     ((pFVar15 < *(FToolMenuEntry **)(pFVar5 + 0x18) + *(int *)(pFVar5 + 0x24) &&
                      (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar10)))) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  iVar11 = *(int *)(pFVar5 + 0x20);
                  if (iVar11 == *(int *)(pFVar5 + 0x24)) {
                    iVar11 = UE::Core::Private::
                             ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x780,8,(ForAnyElementType *)(pFVar5 + 0x18),
                                        (int *)(pFVar5 + 0x24));
                  }
                  *(int *)(pFVar5 + 0x20) = iVar11 + 1;
                  FToolMenuEntry::FToolMenuEntry
                            ((FToolMenuEntry *)
                             ((longlong)iVar11 * 0x780 + *(longlong *)(pFVar5 + 0x18)),pFVar15);
                  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                            (&local_98,(FName *)local_b0,(bool *)pFVar22);
                }
                pFVar22 = pFVar22 + 1;
              }
            }
            uVar23 = local_100._8_8_ & 0xffffffff;
          }
          local_d8 = uVar17 + 1;
          uVar24 = (ulonglong)local_d8;
          local_d0 = lVar28 + 4;
          local_c8 = lVar20 + 0x238;
          param_2 = local_b8;
        } while ((int)local_d8 < (int)uVar23);
      }
      uVar27 = 0;
      if (0 < (int)uVar23) {
        local_d0 = 0;
        local_c8 = 0;
        do {
          lVar20 = local_c8;
          lVar28 = local_d0;
          uVar17 = 0;
          if ((int)uVar27 < (int)uVar23) {
            uVar17 = ~uVar27 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar17 = *(uint *)(local_100.AllocatorInstance.Data + lVar20);
          uVar12 = 0;
          if ((int)uVar17 < (param_1->Sections).ArrayNum) {
            uVar12 = ~uVar17 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar5 = (param_1->Sections).AllocatorInstance.Data;
          uVar12 = 0;
          if ((int)uVar27 < (int)local_e8) {
            uVar12 = ~uVar27 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          FVar8.Data = local_f0.Data;
          iVar13 = *(int *)(pFVar5 + (longlong)(int)uVar17 * 0x238 + 0x20);
          pFVar15 = *(FToolMenuEntry **)(pFVar5 + (longlong)(int)uVar17 * 0x238 + 0x18);
          pFVar25 = pFVar15 + iVar13;
          while( true ) {
            if (*(int *)(pFVar5 + (longlong)(int)uVar17 * 0x238 + 0x20) != iVar13) {
              local_105[0] = 0;
              `TCheckedPointerIterator<FToolMenuEntry_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_105);
            }
            if (pFVar15 == pFVar25) break;
            if (pFVar15->Name != (FName)0x0) {
              TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName_const_&>
                        (&local_98,(FName *)(local_b0 + 4),(bool *)pFVar15);
            }
            if (((*(FToolMenuEntry **)(FVar8.Data + lVar28 + 0x18) <= pFVar15) &&
                (pFVar15 < *(FToolMenuEntry **)(FVar8.Data + lVar28 + 0x18) +
                           *(int *)(FVar8.Data + lVar28 + 0x24))) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar11 = *(int *)(FVar8.Data + lVar28 + 0x20);
            if (iVar11 == *(int *)(FVar8.Data + lVar28 + 0x24)) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x780,8,(ForAnyElementType *)(FVar8.Data + lVar28 + 0x18),
                                  (int *)(FVar8.Data + lVar28 + 0x24));
            }
            *(int *)(FVar8.Data + lVar28 + 0x20) = iVar11 + 1;
            FToolMenuEntry::FToolMenuEntry
                      ((FToolMenuEntry *)
                       ((longlong)iVar11 * 0x780 + *(longlong *)(FVar8.Data + lVar28 + 0x18)),
                       pFVar15);
            pFVar15 = pFVar15 + 1;
          }
          uVar27 = uVar27 + 1;
          local_c8 = local_c8 + 4;
          uVar23 = local_100._8_8_ & 0xffffffff;
          local_d0 = local_d0 + 0x238;
          param_1 = local_c0;
        } while ((int)uVar27 < local_100.ArrayNum);
      }
      pUVar9 = local_c0;
      pTVar2 = &local_c0->Sections;
      if (pTVar2 != (TArray<FToolMenuSection,TSizedDefaultAllocator<32>_> *)&local_f0) {
        DestructItems<FToolMenuSection,int>
                  ((FToolMenuSection *)(pTVar2->AllocatorInstance).Data,
                   (local_c0->Sections).ArrayNum);
        FVar8.Data = local_f0.Data;
        iVar13 = (int)local_e8;
        piVar1 = &(pUVar9->Sections).ArrayMax;
        (pUVar9->Sections).ArrayNum = (int)local_e8;
        if (((int)local_e8 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x238,8,(int)local_e8,*piVar1,&pTVar2->AllocatorInstance,(int)local_e8,piVar1);
          ConstructItems<FToolMenuSection,FToolMenuSection,int>
                    ((pTVar2->AllocatorInstance).Data,(FToolMenuSection *)FVar8.Data,iVar13);
        }
      }
      ApplyProfile(local_a0,pUVar9,(FToolMenuProfile *)local_b8);
      if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.AllocatorInstance.Data);
      }
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
      DestructItems<FToolMenuSection,int>((FToolMenuSection *)local_f0.Data,(int)local_e8);
      if ((FToolMenuSection *)local_f0.Data != (FToolMenuSection *)0x0) {
        FMemory::Free(local_f0.Data);
      }
      return;
    }
    if (*(longlong *)pFVar18 != 0) {
      pFVar4 = (param_1->Sections).AllocatorInstance.Data;
      for (pFVar16 = pFVar4; pFVar16 != pFVar4 + (longlong)(param_1->Sections).ArrayNum * 0x238;
          pFVar16 = pFVar16 + 0x238) {
        if (*(longlong *)pFVar16 == *(longlong *)pFVar18) {
          local_e0 = (int)(((longlong)pFVar16 - (longlong)pFVar4) / 0x238);
          if (local_e0 == -1) goto LAB_142c4a1fb;
          iVar11 = (int)uVar23;
          if ((local_100.AllocatorInstance.Data <= (FScriptContainerElement *)&local_e0) &&
             ((FScriptContainerElement *)&local_e0 <
              local_100.AllocatorInstance.Data + (longlong)local_100.ArrayMax * 4)) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar10) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar11 = local_100.ArrayNum;
          }
          if (iVar11 == local_100.ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_100.AllocatorInstance,&local_100.ArrayMax);
          }
          local_100.ArrayNum = iVar11 + 1U;
          pFVar18 = pFVar18 + 8;
          *(int *)(local_100.AllocatorInstance.Data + (longlong)iVar11 * 4) = local_e0;
          uVar23 = (ulonglong)(iVar11 + 1U);
          goto LAB_142c4a194;
        }
      }
      local_e0 = -1;
    }
LAB_142c4a1fb:
    pFVar18 = pFVar18 + 8;
  } while( true );
}

// ApplyCustomizationAndProfiles @ 142c4ab00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UToolMenus::ApplyCustomizationAndProfiles(UToolMenus *this,UToolMenu *param_1)

{
  FScriptContainerElement *pFVar1;
  FName *pFVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  UClass *pUVar6;
  FScriptContainerElement *pFVar7;
  FName *this_00;
  undefined1 auStack_2e8 [32];
  undefined1 local_2c8 [4];
  FName local_2c4;
  FToolMenuProfileHierarchy local_2b8;
  FString local_298;
  FString local_288;
  FCustomizedToolMenuHierarchy local_278;
  undefined1 local_238 [72];
  void *local_1f0;
  undefined4 local_1e8;
  TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_1e0;
  void *local_1a0;
  undefined4 local_198;
  ForAnyElementType local_190;
  FNamePermissionList local_180;
  TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuNameArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_90;
  void *local_50;
  undefined4 local_48;
  ForAnyElementType local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_2e8;
  pFVar7 = (param_1->Context).ContextObjects.AllocatorInstance.Data;
  iVar3 = (param_1->Context).ContextObjects.ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar3 * 8;
  do {
    if ((param_1->Context).ContextObjects.ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_2c8);
    }
    if (pFVar7 == pFVar1) goto LAB_142c4ad18;
    lVar5 = *(longlong *)pFVar7;
    if (lVar5 != 0) {
      pUVar6 = UToolMenuProfileContext::StaticClass();
      iVar4 = (int)pUVar6->_padding_;
      if ((iVar4 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar4 * 8)
          == &pUVar6->_padding_)) {
        this_00 = *(FName **)(lVar5 + 0x28);
        iVar3 = *(int *)(lVar5 + 0x30);
        pFVar2 = this_00 + iVar3;
        while( true ) {
          if (*(int *)(lVar5 + 0x30) != iVar3) {
            `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_2c8);
          }
          if (this_00 == pFVar2) break;
          (**(code **)(param_1->_padding_ + 0x2f8))(param_1,&local_2b8,this_00);
          if ((local_2b8.ProfileHierarchy.ArrayNum == 0) &&
             (local_2b8.RuntimeProfileHierarchy.ArrayNum == 0)) {
            if (5 < (byte)LogToolMenus._0_1_) {
              local_2c4 = param_1->MenuName;
              ::FName::ToString(&local_2c4,&local_288);
              ::FName::ToString(this_00,&local_298);
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogToolMenus);
              if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_298.Data.AllocatorInstance.Data);
              }
              if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_288.Data.AllocatorInstance.Data);
              }
            }
          }
          else {
            FToolMenuProfileHierarchy::GenerateFlattenedMenuProfile
                      (&local_2b8,(FToolMenuProfile *)local_238);
            ApplyProfile(this,param_1,(FToolMenuProfile *)local_238);
            FNamePermissionList::~FNamePermissionList(&local_180);
            if (local_190.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_190.Data);
            }
            local_198 = 0;
            if (local_1a0 != (void *)0x0) {
              FMemory::Free(local_1a0);
            }
            TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_1e0);
            local_1e8 = 0;
            if (local_1f0 != (void *)0x0) {
              FMemory::Free(local_1f0);
            }
            TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)(local_238 + 8));
          }
          if (local_2b8.RuntimeProfileHierarchy.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2b8.RuntimeProfileHierarchy.AllocatorInstance.Data);
          }
          if (local_2b8.ProfileHierarchy.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2b8.ProfileHierarchy.AllocatorInstance.Data);
          }
          this_00 = this_00 + 1;
        }
LAB_142c4ad18:
        (**(code **)(param_1->_padding_ + 0x2e0))(param_1,&local_278);
        if ((local_278.Hierarchy.ArrayNum != 0) || (local_278.RuntimeHierarchy.ArrayNum != 0)) {
          FCustomizedToolMenuHierarchy::GenerateFlattened
                    (&local_278,(FCustomizedToolMenu *)local_238);
          ApplyCustomization(this,param_1,(FCustomizedToolMenu *)local_238);
          if (local_40.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_40.Data);
          }
          local_48 = 0;
          if (local_50 != (void *)0x0) {
            FMemory::Free(local_50);
          }
          TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuNameArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuNameArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_90);
          FNamePermissionList::~FNamePermissionList(&local_180);
          if (local_190.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_190.Data);
          }
          local_198 = 0;
          if (local_1a0 != (void *)0x0) {
            FMemory::Free(local_1a0);
          }
          TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_1e0);
          local_1e8 = 0;
          if (local_1f0 != (void *)0x0) {
            FMemory::Free(local_1f0);
          }
          TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)(local_238 + 8));
        }
        if (local_278.RuntimeHierarchy.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_278.RuntimeHierarchy.AllocatorInstance.Data);
        }
        if (local_278.Hierarchy.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_278.Hierarchy.AllocatorInstance.Data);
        }
        if ((void *)local_278._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_278._padding_);
        }
        if ((void *)local_278._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_278._padding_);
        }
        return;
      }
    }
    pFVar7 = pFVar7 + 8;
  } while( true );
}

// ApplyProfile @ 142c4ae70

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
UToolMenus::ApplyProfile(UToolMenus *this,UToolMenu *param_1,FToolMenuProfile *param_2)

{
  FName *pFVar1;
  int *piVar2;
  TArray<FToolMenuSection,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  FToolMenuSection *pFVar11;
  uint uVar12;
  FToolMenuEntry *pFVar13;
  FName *pFVar14;
  uint uVar15;
  longlong local_68;
  ForAnyElementType local_50;
  int local_48;
  int local_44 [3];
  
  bVar6 = FToolMenuProfile::IsSuppressExtenders(param_2);
  if (bVar6) {
    param_1->bExtendersEnabled = false;
  }
  iVar9 = (param_1->Sections).ArrayNum;
  pTVar3 = &param_1->Sections;
  pFVar11 = (FToolMenuSection *)(param_1->Sections).AllocatorInstance.Data;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = iVar9;
  if (iVar9 == 0) {
    local_44[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x238,8,iVar9,0,&local_50,iVar9,local_44);
    ConstructItems<FToolMenuSection,FToolMenuSection,int>(local_50.Data,pFVar11,iVar9);
  }
  bVar6 = FNamePermissionList::HasFiltering(&param_2->MenuPermissions);
  if ((bVar6) && (uVar15 = 0, 0 < local_48)) {
    local_68 = 0;
    iVar9 = local_48;
    do {
      uVar10 = 0;
      if ((int)uVar15 < iVar9) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         iVar9 = local_48, bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar5.Data = local_50.Data;
      uVar10 = 0;
      if (0 < *(int *)(local_50.Data + local_68 + 0x20)) {
        do {
          uVar8 = ~uVar10 >> 0x1f;
          uVar12 = 0;
          if ((int)uVar10 < *(int *)(FVar5.Data + local_68 + 0x20)) {
            uVar12 = uVar8;
          }
          if ((uVar12 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar6 = FNamePermissionList::PassesFilter
                            (&param_2->MenuPermissions,
                             *(FName *)((longlong)(int)uVar10 * 0x780 +
                                       *(longlong *)(FVar5.Data + local_68 + 0x18)));
          if (!bVar6) {
            uVar12 = 0;
            if ((int)uVar10 < *(int *)(FVar5.Data + local_68 + 0x20)) {
              uVar12 = uVar8;
            }
            if ((uVar12 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar13 = (FToolMenuEntry *)
                      (*(longlong *)(FVar5.Data + local_68 + 0x18) + (longlong)(int)uVar10 * 0x780);
            FToolMenuEntry::~FToolMenuEntry(pFVar13);
            iVar9 = *(int *)(FVar5.Data + local_68 + 0x20) + ~uVar10;
            if (iVar9 != 0) {
              memmove(pFVar13,pFVar13 + 1,(longlong)iVar9 * 0x780);
            }
            *(int *)(FVar5.Data + local_68 + 0x20) = *(int *)(FVar5.Data + local_68 + 0x20) + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x780,8,(ForAnyElementType *)(FVar5.Data + local_68 + 0x18),
                       *(int *)(FVar5.Data + local_68 + 0x20),(int *)(FVar5.Data + local_68 + 0x24))
            ;
            uVar10 = uVar10 - 1;
          }
          uVar10 = uVar10 + 1;
          iVar9 = local_48;
        } while ((int)uVar10 < *(int *)(FVar5.Data + local_68 + 0x20));
      }
      uVar15 = uVar15 + 1;
      local_68 = local_68 + 0x238;
    } while ((int)uVar15 < iVar9);
  }
  cVar7 = (**(code **)(param_1->_padding_ + 0x2b0))(param_1);
  if ((cVar7 == '\0') && (uVar15 = 0, 0 < local_48)) {
    local_68 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar15 < local_48) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar14 = (FName *)(local_50.Data + local_68);
      bVar6 = FToolMenuProfile::IsSectionHidden(param_2,*pFVar14);
      if (bVar6) {
        uVar10 = 0;
        if ((int)uVar15 < local_48) {
          uVar10 = ~uVar15 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar11 = (FToolMenuSection *)(local_50.Data + local_68);
        FToolMenuSection::~FToolMenuSection(pFVar11);
        iVar9 = (local_48 - uVar15) + -1;
        if (iVar9 != 0) {
          memmove(pFVar11,pFVar11 + 1,(longlong)iVar9 * 0x238);
        }
        local_48 = local_48 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x238,8,&local_50,local_48,local_44);
        uVar15 = uVar15 - 1;
        local_68 = local_68 + -0x238;
      }
      else {
        uVar10 = 0;
        if (0 < (int)pFVar14[4].ComparisonIndex.Value) {
          pFVar1 = pFVar14 + 3;
          do {
            uVar12 = ~uVar10 >> 0x1f;
            uVar8 = 0;
            if ((int)uVar10 < (int)pFVar14[4].ComparisonIndex.Value) {
              uVar8 = uVar12;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            bVar6 = FToolMenuProfile::IsEntryHidden
                              (param_2,*(FName *)((longlong)(int)uVar10 * 0x780 + (longlong)*pFVar1)
                              );
            if (bVar6) {
              uVar8 = 0;
              if ((int)uVar10 < (int)pFVar14[4].ComparisonIndex.Value) {
                uVar8 = uVar12;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar13 = (FToolMenuEntry *)((longlong)*pFVar1 + (longlong)(int)uVar10 * 0x780);
              FToolMenuEntry::~FToolMenuEntry(pFVar13);
              iVar9 = pFVar14[4].ComparisonIndex.Value + ~uVar10;
              if (iVar9 != 0) {
                memmove(pFVar13,pFVar13 + 1,(longlong)iVar9 * 0x780);
              }
              pFVar14[4].ComparisonIndex.Value = pFVar14[4].ComparisonIndex.Value - 1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x780,8,(ForAnyElementType *)pFVar1,pFVar14[4].ComparisonIndex.Value,
                         (int *)&pFVar14[4].Number);
              uVar10 = uVar10 - 1;
            }
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < (int)pFVar14[4].ComparisonIndex.Value);
        }
      }
      uVar15 = uVar15 + 1;
      local_68 = local_68 + 0x238;
    } while ((int)uVar15 < local_48);
  }
  if (pTVar3 != (TArray<FToolMenuSection,TSizedDefaultAllocator<32>_> *)&local_50) {
    DestructItems<FToolMenuSection,int>
              ((FToolMenuSection *)(pTVar3->AllocatorInstance).Data,(param_1->Sections).ArrayNum);
    iVar9 = local_48;
    FVar5.Data = local_50.Data;
    piVar2 = &(param_1->Sections).ArrayMax;
    (param_1->Sections).ArrayNum = local_48;
    if ((local_48 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x238,8,local_48,*piVar2,&pTVar3->AllocatorInstance,local_48,piVar2);
      ConstructItems<FToolMenuSection,FToolMenuSection,int>
                ((pTVar3->AllocatorInstance).Data,(FToolMenuSection *)FVar5.Data,iVar9);
    }
  }
  DestructItems<FToolMenuSection,int>((FToolMenuSection *)local_50.Data,local_48);
  if ((FToolMenuSection *)local_50.Data != (FToolMenuSection *)0x0) {
    FMemory::Free(local_50.Data);
  }
  return;
}

// ApplyStyleToBuilder @ 142c4b490

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
UToolMenus::ApplyStyleToBuilder(UToolMenus *this,FMenuBuilder *param_1,FToolMenuEntryStyle *param_2)

{
  ISlateStyle *pIVar1;
  FName *pFVar2;
  
  pIVar1 = FMultiBoxBuilder::GetStyleSet((FMultiBoxBuilder *)param_1);
  if ((param_2->StyleSet).bIsSet != false) {
    pIVar1 = (param_2->StyleSet).TypedValue;
  }
  pFVar2 = FMultiBoxBuilder::GetStyleName((FMultiBoxBuilder *)param_1);
  if ((param_2->StyleName).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
    pFVar2 = (FName *)&param_2->StyleName;
  }
  FMultiBoxBuilder::SetStyle((FMultiBoxBuilder *)param_1,pIVar1,pFVar2);
  return;
}

// AssembleMenu @ 142c4b4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UToolMenus::AssembleMenu(UToolMenus *this,UToolMenu *param_1,UToolMenu *param_2)

{
  int *piVar1;
  TArray<FToolMenuSection,TSizedDefaultAllocator<32>_> *pTVar2;
  uchar uVar3;
  byte bVar4;
  longlong *plVar5;
  TObjectPtr<UToolMenuSectionDynamic> this_00;
  FName FVar6;
  ITextData *pIVar7;
  ITextData *pIVar8;
  code *pcVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  EToolMenuInsertFallback EVar13;
  undefined2 uVar14;
  char cVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  FName *pFVar21;
  UToolMenu *this_01;
  longlong lVar22;
  UFunction *pUVar23;
  ulonglong uVar24;
  FReadAccessScope *this_02;
  UToolMenu *pUVar25;
  FScriptContainerElement *pFVar26;
  FToolMenuSection *pFVar27;
  ForAnyElementType FVar28;
  FScriptContainerElement *pFVar29;
  FToolMenuSection *pFVar30;
  FToolMenuVisibilityChoice *pFVar31;
  ulonglong uVar32;
  FScriptContainerElement *pFVar33;
  FToolMenuSection *pFVar34;
  uint uVar35;
  undefined1 auStackY_268 [32];
  ForAnyElementType local_218;
  uint local_210;
  uint local_20c;
  TArray<FToolMenuSection,TSizedDefaultAllocator<32>_> local_208;
  undefined1 local_1f8;
  undefined1 local_1f7;
  undefined1 local_1f6 [6];
  UToolMenu *local_1f0;
  undefined1 local_1e8 [8];
  UToolMenus *local_1e0;
  FToolMenuSection *local_1d8;
  UToolMenu *local_1d0;
  uint local_1c8;
  UToolMenu *local_1c0;
  undefined8 local_1b8;
  UToolMenu *local_1a8;
  FToolMenuContext local_1a0;
  undefined1 local_138 [8];
  FToolMenuSection *local_130;
  FName local_128;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FReadAccessScope local_e0;
  FReadAccessScope local_c8;
  FReadAccessScope local_b0;
  FReadAccessScope local_98;
  FReadAccessScope local_80;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_268;
  pFVar34 = (FToolMenuSection *)(param_2->Sections).AllocatorInstance.Data;
  pUVar25 = (UToolMenu *)0x0;
  local_1c8 = (param_2->Sections).ArrayNum;
  uVar24 = (ulonglong)(int)local_1c8;
  local_130 = pFVar34 + uVar24;
  local_218.Data = (FScriptContainerElement *)0x0;
  local_210 = 0;
  local_20c = 0;
  this_01 = pUVar25;
  local_1f0 = param_1;
  local_1e0 = this;
  local_1d0 = param_2;
  while( true ) {
    pFVar27 = local_130;
    iVar19 = 0;
    local_1d8 = pFVar34;
    if ((param_2->Sections).ArrayNum != (int)uVar24) {
      local_1f8 = 0;
      `TCheckedPointerIterator<FToolMenuSection_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1f8);
      pUVar25 = (UToolMenu *)(ulonglong)local_210;
    }
    if (pFVar34 == pFVar27) break;
    if ((pFVar34->ToolMenuSectionDynamic).field0_0x0.DebugPtr == (UToolMenuSectionDynamic *)0x0) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar34->Construct,
                 &local_e0);
      if (((*(int *)&(pFVar34->Construct).NewToolMenuDelegate.field_0x10 != 0) &&
          (plVar5 = *(longlong **)&(pFVar34->Construct).NewToolMenuDelegate.field_0x8,
          plVar5 != (longlong *)0x0)) && (cVar15 = (**(code **)(*plVar5 + 0x38))(), cVar15 != '\0'))
      {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_e0);
        goto LAB_142c4b5e9;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_e0);
      if (((local_218.Data <= pFVar34) &&
          (pFVar34 < (FToolMenuSection *)(local_218.Data + (longlong)(int)local_20c * 0x238))) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (local_210 == local_20c) {
        local_210 = UE::Core::Private::
                    ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x238,8,&local_218,(int *)&local_20c);
      }
      lVar22 = (longlong)(int)local_210;
      local_210 = local_210 + 1;
      FToolMenuSection::FToolMenuSection
                ((FToolMenuSection *)(local_218.Data + lVar22 * 0x238),pFVar34);
    }
    else {
LAB_142c4b5e9:
      if (this_01 == (UToolMenu *)0x0) {
        local_1c0 = this_01;
        pFVar21 = ::FName::FName(&local_128,L"TempAssembleMenu");
        this_01 = NewToolMenuObject(this,*pFVar21,(FName)0x0);
        if (this_01 == (UToolMenu *)0x0) {
          bVar16 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_2961583690955619457>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolMenus\\Private\\ToolMenus.cpp"
                              ,0x37f,"ConstructedSections");
          if (bVar16) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          goto LAB_142c4bed6;
        }
        FToolMenuContext::operator=(&this_01->Context,&param_1->Context);
        this_01->MenuType = param_1->MenuType;
      }
      local_208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_208.ArrayNum = 0;
      local_208.ArrayMax = 0;
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x238,8,&local_208.AllocatorInstance,&local_208.ArrayMax);
      local_208.ArrayNum = iVar17 + 1;
      FToolMenuSection::FToolMenuSection
                ((FToolMenuSection *)(local_208.AllocatorInstance.Data + (longlong)iVar17 * 0x238),
                 pFVar34);
      while (0 < local_208.ArrayNum) {
        if ((local_208.ArrayNum < 1) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar28.Data = local_208.AllocatorInstance.Data;
        if (((TObjectPtr<UToolMenuSectionDynamic>_u_0 *)(local_208.AllocatorInstance.Data + 0xa0))->
            DebugPtr == (UToolMenuSectionDynamic *)0x0) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     (local_208.AllocatorInstance.Data + 0x100),&local_c8);
          if (((*(int *)(FVar28.Data + 0x110) != 0) &&
              (plVar5 = *(longlong **)(FVar28.Data + 0x108), plVar5 != (longlong *)0x0)) &&
             (cVar15 = (**(code **)(*plVar5 + 0x38))(), cVar15 != '\0')) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_c8);
            goto LAB_142c4b715;
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_c8);
          if ((local_208.ArrayNum < 1) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FVar28.Data = local_208.AllocatorInstance.Data;
          if (((local_218.Data <= local_208.AllocatorInstance.Data) &&
              (local_208.AllocatorInstance.Data <
               (FToolMenuSection *)(local_218.Data + (longlong)(int)local_20c * 0x238))) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar16)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if (local_210 == local_20c) {
            local_210 = UE::Core::Private::
                        ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x238,8,&local_218,(int *)&local_20c);
          }
          lVar22 = (longlong)(int)local_210;
          local_210 = local_210 + 1;
          FToolMenuSection::FToolMenuSection
                    ((FToolMenuSection *)(local_218.Data + lVar22 * 0x238),
                     (FToolMenuSection *)FVar28.Data);
          if ((local_208.ArrayNum < 1) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FVar28.Data = local_208.AllocatorInstance.Data;
          FToolMenuSection::~FToolMenuSection((FToolMenuSection *)local_208.AllocatorInstance.Data);
          if (local_208.ArrayNum + -1 != 0) {
            memmove(FVar28.Data,(FToolMenuSection *)(FVar28.Data + 0x238),
                    (longlong)(local_208.ArrayNum + -1) * 0x238);
          }
          local_208.ArrayNum = local_208.ArrayNum + -1;
        }
        else {
LAB_142c4b715:
          pFVar34 = local_1d8;
          if (5000 < iVar19) {
            param_2 = local_1d0;
            this = local_1e0;
            if (2 < (byte)LogToolMenus._0_1_) {
              ::FName::ToString(&local_1d8->Name,&local_110);
              param_2 = local_1d0;
              ::FName::ToString(&local_1d0->MenuName,&local_120);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogToolMenus);
              if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_120.Data.AllocatorInstance.Data);
              }
              this = local_1e0;
              if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_110.Data.AllocatorInstance.Data);
                this = local_1e0;
              }
            }
            break;
          }
          pTVar2 = &this_01->Sections;
          piVar1 = &(this_01->Sections).ArrayMax;
          pFVar34 = (FToolMenuSection *)(pTVar2->AllocatorInstance).Data;
          iVar17 = (this_01->Sections).ArrayNum;
          if ((this_01->Sections).ArrayMax < 0) {
            DestructItems<FToolMenuSection,int>(pFVar34,iVar17);
            (this_01->Sections).ArrayNum = 0;
            if (*piVar1 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x238,8,0,&pTVar2->AllocatorInstance,0,piVar1);
            }
          }
          else {
            DestructItems<FToolMenuSection,int>(pFVar34,iVar17);
            (this_01->Sections).ArrayNum = 0;
          }
          if (local_208.ArrayNum < 1) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          if (((TObjectPtr<UToolMenuSectionDynamic>_u_0 *)(local_208.AllocatorInstance.Data + 0xa0))
              ->DebugPtr == (UToolMenuSectionDynamic *)0x0) {
            if ((local_208.ArrayNum < 1) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar28.Data = local_208.AllocatorInstance.Data;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       (local_208.AllocatorInstance.Data + 0x100),&local_b0);
            if (((*(int *)(FVar28.Data + 0x110) == 0) ||
                (plVar5 = *(longlong **)(FVar28.Data + 0x108), plVar5 == (longlong *)0x0)) ||
               (cVar15 = (**(code **)(*plVar5 + 0x38))(), cVar15 == '\0')) {
              this_02 = &local_b0;
            }
            else {
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_b0);
              if ((local_208.ArrayNum < 1) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              FVar28.Data = local_208.AllocatorInstance.Data;
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                         (local_208.AllocatorInstance.Data + 0x100),&local_80);
              if (*(int *)(FVar28.Data + 0x110) == 0) {
                (**(code **)(_DAT_00000000 + 0x60))();
                this_02 = &local_80;
              }
              else {
                (**(code **)(**(longlong **)(FVar28.Data + 0x108) + 0x60))();
                this_02 = &local_80;
              }
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(this_02);
          }
          else {
            if ((local_208.ArrayNum < 1) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            local_1a0.bIsEditing = false;
            local_1a0.ContextObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1a0.ContextObjects.ArrayNum = 0;
            local_1a0.ContextObjects.ArrayMax = 0;
            this_00.field0_0x0 =
                 (TObjectPtr<UToolMenuSectionDynamic>_u_0)
                 ((TObjectPtr<UToolMenuSectionDynamic>_u_0 *)
                 (local_208.AllocatorInstance.Data + 0xa0))->DebugPtr;
            local_1a0.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_1a0.ContextObjectCleanupFuncs.Pairs.ArrayNum = 0;
            local_1a0.ContextObjectCleanupFuncs.Pairs.ArrayMax = 0;
            local_1a0.ContextCleanupFuncs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1a0.ContextCleanupFuncs.ArrayNum = 0;
            local_1a0.ContextCleanupFuncs.ArrayMax = 0;
            local_1a0.CommandLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1a0.CommandLists.ArrayNum = 0;
            local_1a0.CommandLists.ArrayMax = 0;
            local_1a0.CommandList.Object = (FUICommandList *)0x0;
            local_1a0.CommandList.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)0x0;
            local_1a0.Extenders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1a0.Extenders.ArrayNum = 0;
            local_1a0.Extenders.ArrayMax = 0;
            local_1a8 = this_01;
            FToolMenuContext::operator=(&local_1a0,&param_1->Context);
            pUVar23 = UObject::FindFunctionChecked
                                ((UObject *)this_00.field0_0x0,
                                 NAME_UToolMenuSectionDynamic_ConstructSections);
            (**(code **)(*(longlong *)this_00.field0_0x0 + 0x260))
                      (this_00.field0_0x0,pUVar23,&local_1a8);
            DestructItems<TSharedPtr<FExtender,1>,int>
                      ((TSharedPtr<FExtender,1> *)local_1a0.Extenders.AllocatorInstance.Data,
                       local_1a0.Extenders.ArrayNum);
            if ((TSharedPtr<FExtender,1> *)local_1a0.Extenders.AllocatorInstance.Data !=
                (TSharedPtr<FExtender,1> *)0x0) {
              FMemory::Free(local_1a0.Extenders.AllocatorInstance.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_1a0.CommandList.SharedReferenceCount.ReferenceController);
            DestructItems<TSharedPtr<FUICommandList,1>,int>
                      ((TSharedPtr<FUICommandList,1> *)local_1a0.CommandLists.AllocatorInstance.Data
                       ,local_1a0.CommandLists.ArrayNum);
            if ((TSharedPtr<FUICommandList,1> *)local_1a0.CommandLists.AllocatorInstance.Data !=
                (TSharedPtr<FUICommandList,1> *)0x0) {
              FMemory::Free(local_1a0.CommandLists.AllocatorInstance.Data);
            }
            DestructItems<TFunction<void___cdecl(void)>,int>
                      ((TFunction<void___cdecl(void)> *)
                       local_1a0.ContextCleanupFuncs.AllocatorInstance.Data,
                       local_1a0.ContextCleanupFuncs.ArrayNum);
            if ((TFunction<void___cdecl(void)> *)
                local_1a0.ContextCleanupFuncs.AllocatorInstance.Data !=
                (TFunction<void___cdecl(void)> *)0x0) {
              FMemory::Free(local_1a0.ContextCleanupFuncs.AllocatorInstance.Data);
            }
            DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
                      ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
                       local_1a0.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data,
                       local_1a0.ContextObjectCleanupFuncs.Pairs.ArrayNum);
            if ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
                local_1a0.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data !=
                (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
              FMemory::Free(local_1a0.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data);
            }
            if (local_1a0.ContextObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1a0.ContextObjects.AllocatorInstance.Data);
            }
          }
          pFVar29 = (pTVar2->AllocatorInstance).Data;
          iVar17 = (this_01->Sections).ArrayNum;
          pFVar26 = pFVar29 + 0x28;
          pFVar33 = pFVar29 + (longlong)iVar17 * 0x238;
          while( true ) {
            if ((this_01->Sections).ArrayNum != iVar17) {
              local_1f7 = 0;
              `TCheckedPointerIterator<FToolMenuSection,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_1f7);
            }
            if (pFVar29 == pFVar33) break;
            if (pFVar26[8] == (FScriptContainerElement)0x0) {
              if ((local_208.ArrayNum < 1) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              *(undefined8 *)pFVar26 = *(undefined8 *)(local_208.AllocatorInstance.Data + 0x28);
              *(undefined4 *)(pFVar26 + 8) =
                   *(undefined4 *)(local_208.AllocatorInstance.Data + 0x30);
            }
            pFVar29 = pFVar29 + 0x238;
            pFVar26 = pFVar26 + 0x238;
          }
          if ((local_208.ArrayNum < 1) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FVar28.Data = local_208.AllocatorInstance.Data;
          FToolMenuSection::~FToolMenuSection((FToolMenuSection *)local_208.AllocatorInstance.Data);
          if (local_208.ArrayNum + -1 != 0) {
            memmove(FVar28.Data,(FToolMenuSection *)(FVar28.Data + 0x238),
                    (longlong)(local_208.ArrayNum + -1) * 0x238);
          }
          local_208.ArrayNum = local_208.ArrayNum + -1;
          if ((&local_208 == pTVar2) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(const void*)this != (const void*)&Items",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x767,L""), bVar16)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar17 = (this_01->Sections).ArrayNum;
          TArray<FToolMenuSection,TSizedDefaultAllocator<32>_>::InsertUninitializedImpl
                    (&local_208,0,iVar17);
          ConstructItems<FToolMenuSection,FToolMenuSection,int>
                    (local_208.AllocatorInstance.Data,
                     (FToolMenuSection *)(pTVar2->AllocatorInstance).Data,iVar17);
          param_1 = local_1f0;
          iVar19 = iVar19 + 1;
        }
        pFVar34 = local_1d8;
        param_2 = local_1d0;
        this = local_1e0;
      }
      DestructItems<FToolMenuSection,int>
                ((FToolMenuSection *)local_208.AllocatorInstance.Data,local_208.ArrayNum);
      if ((FToolMenuSection *)local_208.AllocatorInstance.Data != (FToolMenuSection *)0x0) {
        FMemory::Free(local_208.AllocatorInstance.Data);
      }
    }
    pUVar25 = (UToolMenu *)(ulonglong)local_210;
    pFVar34 = pFVar34 + 1;
    uVar24 = (ulonglong)local_1c8;
  }
  if (this_01 != (UToolMenu *)0x0) {
    UToolMenu::Empty(this_01);
LAB_142c4bed6:
    pUVar25 = (UToolMenu *)(ulonglong)local_210;
  }
  uVar18 = (uint)pUVar25;
joined_r0x000142c4bedc:
  if (0 < (int)uVar18) {
    uVar32 = 0;
    uVar24 = uVar32;
    if (0 < (int)pUVar25) {
      do {
        uVar35 = (uint)uVar24;
        uVar18 = 0;
        if ((int)uVar35 < (int)pUVar25) {
          uVar18 = ~uVar35 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar34 = (FToolMenuSection *)(local_218.Data + uVar32);
        if (local_1f0->MenuType == MenuBar) {
          local_1b8 = 0;
          (pFVar34->Name).ComparisonIndex = 0;
          (pFVar34->Name).Number = 0;
        }
        iVar19 = (local_1f0->Sections).ArrayNum;
        pFVar27 = (FToolMenuSection *)(local_1f0->Sections).AllocatorInstance.Data;
        FVar6 = pFVar34->Name;
        pFVar30 = pFVar27 + iVar19;
        pUVar25 = local_1f0;
        while( true ) {
          if ((pUVar25->Sections).ArrayNum != iVar19) {
            local_1f6[0] = 0;
            `TCheckedPointerIterator<FToolMenuSection,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_1f6);
            pUVar25 = local_1f0;
          }
          if (pFVar27 == pFVar30) break;
          if (pFVar27->Name == FVar6) {
            if (((pFVar27->Label).bIsSet == false) && ((pFVar34->Label).bIsSet != false)) {
              pIVar7 = (pFVar34->Label).Value.TextData.Reference;
              pIVar8 = (pFVar27->Label).Value.TextData.Reference;
              if (pIVar8 != pIVar7) {
                (pFVar27->Label).Value.TextData.Reference = pIVar7;
                if (pIVar7 != (ITextData *)0x0) {
                  (**(code **)((longlong)*pIVar7 + 8))(pIVar7,local_138);
                }
                if (pIVar8 != (ITextData *)0x0) {
                  (**(code **)((longlong)*pIVar8 + 0x10))(pIVar8);
                }
              }
              (pFVar27->Label).Value.Flags = (pFVar34->Label).Value.Flags;
              (pFVar27->Label).bIsSet = (pFVar34->Label).bIsSet;
              TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
              CopyFrom<FDefaultDelegateUserPolicy>
                        (&(pFVar27->Label).Getter,&(pFVar34->Label).Getter);
            }
            if ((pFVar34->ToolMenuSectionDynamic).field0_0x0.DebugPtr ==
                (UToolMenuSectionDynamic *)0x0) {
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                         &pFVar34->Construct,&local_98);
              if (((*(int *)&(pFVar34->Construct).NewToolMenuDelegate.field_0x10 == 0) ||
                  (plVar5 = *(longlong **)&(pFVar34->Construct).NewToolMenuDelegate.field_0x8,
                  plVar5 == (longlong *)0x0)) ||
                 (cVar15 = (**(code **)(*plVar5 + 0x38))(), cVar15 == '\0')) {
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
                ~FReadAccessScope(&local_98);
                TDelegate<void___cdecl(UToolMenu_*),FDefaultDelegateUserPolicy>::
                CopyFrom<FDefaultDelegateUserPolicy>
                          (&(pFVar27->Construct).NewToolMenuDelegate,
                           &(pFVar34->Construct).NewToolMenuDelegate);
                TDelegate<void___cdecl(FMenuBuilder_&,UToolMenu_*),FDefaultDelegateUserPolicy>::
                CopyFrom<FDefaultDelegateUserPolicy>
                          (&(pFVar27->Construct).NewToolMenuDelegateLegacy,
                           &(pFVar34->Construct).NewToolMenuDelegateLegacy);
                TDelegate<void___cdecl(FToolBarBuilder_&,UToolMenu_*),FDefaultDelegateUserPolicy>::
                CopyFrom<FDefaultDelegateUserPolicy>
                          (&(pFVar27->Construct).NewToolBarDelegateLegacy,
                           &(pFVar34->Construct).NewToolBarDelegateLegacy);
              }
              else {
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
                ~FReadAccessScope(&local_98);
              }
            }
            uVar3 = (pFVar27->Visibility).Value.TypeIndex;
            if (uVar3 == '\0') {
              cVar15 = *(char *)((longlong)&(pFVar27->Visibility).Value._padding_ + 1);
LAB_142c4c111:
              pUVar25 = local_1f0;
              if (cVar15 != '\0') goto LAB_142c4c248;
            }
            else {
              if (uVar3 == '\x01') {
                cVar15 = *(char *)((longlong)&(pFVar27->Visibility).Value._padding_ + 1);
                goto LAB_142c4c111;
              }
              if (uVar3 == '\x02') {
                cVar15 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                                   ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                                    &pFVar27->Visibility);
                goto LAB_142c4c111;
              }
            }
            uVar3 = (pFVar34->Visibility).Value.TypeIndex;
            if (uVar3 == '\0') {
              cVar15 = *(char *)((longlong)&(pFVar34->Visibility).Value._padding_ + 1);
            }
            else if (uVar3 == '\x01') {
              cVar15 = *(char *)((longlong)&(pFVar34->Visibility).Value._padding_ + 1);
            }
            else {
              pUVar25 = local_1f0;
              if (uVar3 != '\x02') goto LAB_142c4c248;
              cVar15 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                                 ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar34->Visibility)
              ;
            }
            pUVar25 = local_1f0;
            if (cVar15 != '\0') {
              pFVar31 = &pFVar27->Visibility;
              if (&pFVar34->Visibility != pFVar31) {
                bVar4 = (pFVar34->Visibility).Value.TypeIndex;
                local_48 = CONCAT71(local_48._1_7_,bVar4);
                if ((2 < bVar4) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)"
                                        ,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                        ,0xec,L""), bVar16)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                            ::__l2::CopyConstructors)[bVar4])(&local_68,&pFVar34->Visibility);
                lVar22 = (pFVar31->Value)._padding_;
                lVar10 = (pFVar27->Visibility).Value._padding_;
                lVar11 = (pFVar27->Visibility).Value._padding_;
                lVar12 = (pFVar27->Visibility).Value._padding_;
                uVar24 = *(ulonglong *)&(pFVar27->Visibility).Value.TypeIndex;
                (pFVar31->Value)._padding_ = local_68;
                (pFVar27->Visibility).Value._padding_ = lStack_60;
                (pFVar27->Visibility).Value._padding_ = local_58;
                (pFVar27->Visibility).Value._padding_ = lStack_50;
                *(ulonglong *)&(pFVar27->Visibility).Value.TypeIndex = local_48;
                local_68 = lVar22;
                lStack_60 = lVar10;
                local_58 = lVar11;
                lStack_50 = lVar12;
                local_48 = uVar24;
                if ((2 < (uVar24 & 0xff)) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                        ,0xd4,L""), bVar16)) {
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar24 & 0xff])(&local_68);
                pUVar25 = local_1f0;
              }
            }
            goto LAB_142c4c248;
          }
          pFVar27 = pFVar27 + 1;
        }
        uVar18 = UToolMenu::FindInsertIndex(pUVar25,pFVar34);
        pUVar25 = local_1f0;
        if (uVar18 != 0xffffffff) goto LAB_142c4c369;
        pUVar25 = (UToolMenu *)(ulonglong)local_210;
        uVar24 = (ulonglong)(uVar35 + 1);
        uVar32 = uVar32 + 0x238;
      } while ((int)(uVar35 + 1) < (int)local_210);
    }
    iVar19 = (int)pUVar25;
    pFVar34 = (FToolMenuSection *)(local_218.Data + (longlong)iVar19 * 0x238);
    FVar28.Data = local_218.Data;
    while( true ) {
      if ((int)pUVar25 != iVar19) {
        `TCheckedPointerIterator<FToolMenuSection,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_1e8);
        pUVar25 = (UToolMenu *)(ulonglong)local_210;
      }
      uVar18 = (uint)pUVar25;
      if ((FToolMenuSection *)FVar28.Data == pFVar34) break;
      if (2 < (byte)LogToolMenus._0_1_) {
        ::FName::ToString((FName *)FVar28.Data,&local_f0);
        ::FName::ToString(&(((FToolMenuSection *)FVar28.Data)->InsertPosition).Name,&local_100);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogToolMenus);
        if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data.AllocatorInstance.Data);
        }
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
        pUVar25 = (UToolMenu *)(ulonglong)local_210;
      }
      FVar28.Data = FVar28.Data + 0x238;
    }
  }
  DestructItems<FToolMenuSection,int>((FToolMenuSection *)local_218.Data,uVar18);
  if ((FToolMenuSection *)local_218.Data != (FToolMenuSection *)0x0) {
    FMemory::Free(local_218.Data);
  }
  return;
LAB_142c4c369:
  pTVar2 = &local_1f0->Sections;
  iVar19 = (local_1f0->Sections).ArrayNum;
  piVar1 = &(local_1f0->Sections).ArrayMax;
  if (iVar19 == *piVar1) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x238,8,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar26 = (pTVar2->AllocatorInstance).Data;
  (pUVar25->Sections).ArrayNum = iVar19 + 1;
  lVar22 = (longlong)(int)uVar18 * 0x238;
  pFVar26 = pFVar26 + lVar22;
  memmove(pFVar26 + 0x238,pFVar26,(longlong)(int)(iVar19 - uVar18) * 0x238);
  DefaultConstructItems<FToolMenuSection,int>((pTVar2->AllocatorInstance).Data + lVar22,1);
  uVar20 = 0;
  if ((int)uVar18 < (pUVar25->Sections).ArrayNum) {
    uVar20 = ~uVar18 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar27 = (FToolMenuSection *)((pUVar25->Sections).AllocatorInstance.Data + lVar22);
  pFVar27->Name = pFVar34->Name;
  TAttribute<FText>::operator=(&pFVar27->Label,&pFVar34->Label);
  (pFVar27->InsertPosition).Name = (pFVar34->InsertPosition).Name;
  EVar13 = (pFVar34->InsertPosition).Fallback;
  uVar14 = *(undefined2 *)&(pFVar34->InsertPosition).field_0xa;
  (pFVar27->InsertPosition).Position = (pFVar34->InsertPosition).Position;
  (pFVar27->InsertPosition).Fallback = EVar13;
  *(undefined2 *)&(pFVar27->InsertPosition).field_0xa = uVar14;
  TDelegate<void___cdecl(UToolMenu_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(pFVar27->Construct).NewToolMenuDelegate,&(pFVar34->Construct).NewToolMenuDelegate);
  TDelegate<void___cdecl(FMenuBuilder_&,UToolMenu_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(pFVar27->Construct).NewToolMenuDelegateLegacy,
             &(pFVar34->Construct).NewToolMenuDelegateLegacy);
  TDelegate<void___cdecl(FToolBarBuilder_&,UToolMenu_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(pFVar27->Construct).NewToolBarDelegateLegacy,
             &(pFVar34->Construct).NewToolBarDelegateLegacy);
  FToolMenuContext::operator=(&pFVar27->Context,&pUVar25->Context);
  pFVar27->Alignment = pFVar34->Alignment;
  FToolMenuVisibilityChoice::operator=(&pFVar27->Visibility,&pFVar34->Visibility);
  FMenuEntryResizeParams::operator=(&pFVar27->ResizeParams,&pFVar34->ResizeParams);
  TDelegate<bool___cdecl(FToolMenuEntry_const_&,FToolMenuEntry_const_&,FToolMenuContext_const_&),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>(&pFVar27->Sorter,&pFVar34->Sorter);
LAB_142c4c248:
  AssembleMenuSection(local_1e0,pUVar25,local_1d0,pFVar27,pFVar34);
  uVar18 = 0;
  if ((int)uVar35 < (int)local_210) {
    uVar18 = ~uVar35 >> 0x1f;
  }
  if ((uVar18 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar34 = (FToolMenuSection *)(local_218.Data + (longlong)(int)uVar35 * 0x238);
  FToolMenuSection::~FToolMenuSection(pFVar34);
  iVar19 = (local_210 - uVar35) + -1;
  if (iVar19 != 0) {
    memmove(pFVar34,pFVar34 + 1,(longlong)iVar19 * 0x238);
  }
  local_210 = local_210 - 1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x238,8,&local_218,local_210,(int *)&local_20c);
  pUVar25 = (UToolMenu *)(ulonglong)local_210;
  uVar18 = local_210;
  goto joined_r0x000142c4bedc;
}

// AssembleMenuHierarchy @ 142c4c5a0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
UToolMenus::AssembleMenuHierarchy
          (UToolMenus *this,UToolMenu *param_1,
          TArray<UToolMenu_*,TSizedDefaultAllocator<32>_> *param_2)

{
  bool bVar1;
  int iVar2;
  FIdentityFunctor FVar3;
  char cVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *local_res8;
  FReadAccessScope local_48;
  
  bVar1 = this->bSuppressRefreshWidgetsRequests;
  this->bSuppressRefreshWidgetsRequests = true;
  pFVar6 = (param_2->AllocatorInstance).Data;
  iVar2 = param_2->ArrayNum;
  pFVar7 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UToolMenu_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar6 == pFVar7) break;
    AssembleMenu(this,param_1,*(UToolMenu **)pFVar6);
    pFVar6 = pFVar6 + 8;
  }
  pFVar6 = (param_1->Sections).AllocatorInstance.Data;
  iVar2 = (param_1->Sections).ArrayNum;
  FVar3 = local_res8._0_1_;
  pFVar7 = pFVar6 + 0x220;
  pFVar5 = pFVar6 + (longlong)iVar2 * 0x238;
LAB_142c4c630:
  do {
    if ((param_1->Sections).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FToolMenuSection,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar6 == pFVar5) {
      ApplyCustomizationAndProfiles(this,param_1);
      this->bSuppressRefreshWidgetsRequests = bVar1;
      return;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pFVar7 + -8),&local_48);
    if ((*(int *)(pFVar7 + 8) != 0) && (*(longlong **)pFVar7 != (longlong *)0x0)) {
      cVar4 = (**(code **)(**(longlong **)pFVar7 + 0x38))();
      if (cVar4 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_48);
        local_res8 = pFVar6;
        AlgoImpl::
        StableSortInternal<FToolMenuEntry,FIdentityFunctor,TDereferenceWrapper<FToolMenuEntry,_UToolMenus::AssembleMenuHierarchy_::__l13::<lambda_1>_>_>
                  (*(FToolMenuEntry **)(pFVar7 + -0x208),*(int *)(pFVar7 + -0x200),FVar3,
                   (<lambda_1> *)&local_res8);
        pFVar6 = pFVar6 + 0x238;
        pFVar7 = pFVar7 + 0x238;
        goto LAB_142c4c630;
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    pFVar6 = pFVar6 + 0x238;
    pFVar7 = pFVar7 + 0x238;
  } while( true );
}

// AssembleMenuSection @ 142c4c700

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UToolMenus::AssembleMenuSection
          (UToolMenus *this,UToolMenu *param_1,UToolMenu *param_2,FToolMenuSection *param_3,
          FToolMenuSection *param_4)

{
  int *piVar1;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar3;
  TSortedMap<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>,TSizedDefaultAllocator<32>,TLess<TObjectPtr<UObject_const_>_const_>_>
  *pTVar4;
  TArray<TFunction<void___cdecl(void)>,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<TSharedPtr<FUICommandList,1>,TSizedDefaultAllocator<32>_> *pTVar6;
  TSortedMap<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>,TSizedDefaultAllocator<32>,TLess<TObjectPtr<UObject_const_>_const_>_>
  *pTVar7;
  TArray<TFunction<void___cdecl(void)>,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<TSharedPtr<FUICommandList,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<TSharedPtr<FExtender,1>,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<TSharedPtr<FExtender,1>,TSizedDefaultAllocator<32>_> *pTVar11;
  TObjectPtr<UToolMenuEntryScript> this_00;
  TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *pTVar12;
  TFunction<void___cdecl(void)> *pTVar13;
  TSharedPtr<FUICommandList,1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  FUICommandList *pFVar16;
  TSharedPtr<FExtender,1> *pTVar17;
  code *pcVar18;
  FScriptContainerElement *pFVar19;
  char cVar20;
  bool bVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  FName *pFVar27;
  UToolMenu *this_01;
  UFunction *pUVar28;
  FToolMenuSection *pFVar29;
  uint uVar30;
  UToolMenu *pUVar31;
  longlong *plVar32;
  ulonglong uVar33;
  ForAnyElementType FVar34;
  ForAnyElementType FVar35;
  FName FVar36;
  FName FVar37;
  FScriptContainerElement *pFVar38;
  FToolMenuEntry *pFVar39;
  uint uVar40;
  longlong lVar41;
  ulonglong uVar42;
  FScriptContainerElement *pFVar43;
  uint uVar44;
  longlong lVar45;
  TArray<FToolMenuSection,TSizedDefaultAllocator<32>_> *pTVar46;
  FToolMenuEntry *pFVar47;
  ForAnyElementType local_368;
  uint local_360;
  uint local_35c;
  undefined1 local_358;
  undefined1 local_357;
  undefined1 local_356 [6];
  ForAnyElementType local_350;
  undefined8 local_348;
  ForAnyElementType local_340;
  undefined8 local_338;
  int local_330;
  FToolMenuOwner_u_0 local_328;
  FToolMenuOwner_u_0 local_320;
  UToolMenu *local_318;
  uint local_310;
  int local_30c;
  uint local_308;
  FName local_300;
  FName local_2f8;
  undefined2 local_2f0;
  undefined2 uStack_2ee;
  UToolMenu *local_2e8;
  TArray<FToolMenuSection,TSizedDefaultAllocator<32>_> *local_2e0;
  undefined1 local_2d8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2c0;
  ForAnyElementType FStack_2b8;
  ulonglong local_2b0;
  FToolMenuContext local_2a8;
  FToolMenuContext local_238;
  UToolMenu *local_1c8;
  FName local_1c0;
  FToolMenuContext local_1b8;
  FScriptContainerElement *local_148;
  FToolMenuEntry *local_140;
  FToolMenuInsert local_138;
  FDestructionSentinel local_128;
  FName local_110;
  FString local_108;
  FString local_f8;
  FUICommandList *local_e8;
  TReferenceControllerBase<1> *pTStack_e0;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FReadAccessScope local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  
  pUVar31 = (UToolMenu *)0x0;
  if ((param_3 == (FToolMenuSection *)0x0) && (2 < (byte)LogToolMenus._0_1_)) {
    ::FName::ToString(&param_4->Name,&local_f8);
    if ((param_4->Owner).ValueType == Name) {
      local_320 = (param_4->Owner).field0_0x0;
    }
    else {
      local_320.ValueInt64 = 0;
    }
    ::FName::ToString((FName *)&local_320.ValueName,&local_108);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogToolMenus);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  local_308 = (param_4->Blocks).ArrayNum;
  uVar33 = (ulonglong)(int)local_308;
  pFVar47 = (FToolMenuEntry *)(param_4->Blocks).AllocatorInstance.Data;
  local_368.Data = (FScriptContainerElement *)0x0;
  local_140 = pFVar47 + uVar33;
  local_360 = 0;
  local_35c = 0;
  local_350.Data = (FScriptContainerElement *)0x0;
  local_348 = 0;
  local_318 = (UToolMenu *)0x0;
  this_01 = pUVar31;
  while( true ) {
    pFVar39 = local_140;
    if ((param_4->Blocks).ArrayNum != (int)uVar33) {
      local_356[0] = 0;
      `TCheckedPointerIterator<FToolMenuEntry_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_356);
      pUVar31 = (UToolMenu *)(ulonglong)local_360;
    }
    if (pFVar47 == pFVar39) break;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar47->Construct,
               &local_88);
    if (((*(int *)&(pFVar47->Construct).field_0x10 == 0) ||
        (plVar32 = *(longlong **)&(pFVar47->Construct).field_0x8, plVar32 == (longlong *)0x0)) ||
       (cVar20 = (**(code **)(*plVar32 + 0x38))(), cVar20 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_88);
      bVar21 = FToolMenuEntry::IsScriptObjectDynamicConstruct(pFVar47);
      if (bVar21) goto LAB_142c4c88c;
      if (pFVar47->bAddedDuringRegister == false) {
        if (((local_350.Data <= pFVar47) &&
            (pFVar47 < (FToolMenuEntry *)(local_350.Data + (longlong)(int)local_348._4_4_ * 0x780)))
           && (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar21)) {
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        uVar23 = (uint)local_348;
        if ((uint)local_348 == local_348._4_4_) {
          uVar23 = UE::Core::Private::
                   ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x780,8,&local_350,(int *)((longlong)&local_348 + 4));
        }
        local_348 = CONCAT44(local_348._4_4_,uVar23 + 1);
        FVar34.Data = local_350.Data;
      }
      else {
        if (((local_368.Data <= pFVar47) &&
            (pFVar47 < (FToolMenuEntry *)(local_368.Data + (longlong)(int)local_35c * 0x780))) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar21)) {
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        if (local_360 == local_35c) {
          local_360 = UE::Core::Private::
                      ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x780,8,&local_368,(int *)&local_35c);
        }
        FVar34.Data = local_368.Data;
        uVar23 = local_360;
        local_360 = local_360 + 1;
      }
      FToolMenuEntry::FToolMenuEntry
                ((FToolMenuEntry *)((longlong)FVar34.Data + (longlong)(int)uVar23 * 0x780),pFVar47);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_88);
LAB_142c4c88c:
      if (this_01 == (UToolMenu *)0x0) {
        local_2e8 = this_01;
        pFVar27 = ::FName::FName(&local_110,L"TempAssembleMenuSection");
        this_01 = NewToolMenuObject(this,*pFVar27,(FName)0x0);
        local_318 = this_01;
        if (this_01 == (UToolMenu *)0x0) {
          bVar21 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_2961583690955619638>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolMenus\\Private\\ToolMenus.cpp"
                              ,0x2ca,"ConstructedEntries");
          if (bVar21) {
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
          goto LAB_142c4d7e7;
        }
        if (param_3 == (FToolMenuSection *)0x0) {
          local_238.ContextObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_238._1_4_ = 0;
          local_238._5_2_ = 0;
          local_238._7_1_ = 0;
          local_238.bIsEditing = false;
          local_238.ContextObjects.ArrayNum = 0;
          local_238.ContextObjects.ArrayMax = 0;
          local_238.ContextObjectCleanupFuncs.Pairs.ArrayNum = 0;
          local_238.ContextObjectCleanupFuncs.Pairs.ArrayMax = 0;
          local_238.ContextCleanupFuncs.ArrayNum = 0;
          local_238.ContextCleanupFuncs.ArrayMax = 0;
          local_238.CommandLists.ArrayNum = 0;
          local_238.CommandLists.ArrayMax = 0;
          local_238.CommandList.Object = (FUICommandList *)0x0;
          local_238.CommandList.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          local_238.Extenders.ArrayNum = 0;
          local_238.Extenders.ArrayMax = 0;
          local_238.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          local_238.ContextCleanupFuncs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_238.CommandLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_238.Extenders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FToolMenuContext::operator=(&this_01->Context,&local_238);
          FVar34.Data = local_238.Extenders.AllocatorInstance.Data;
          DestructItems<TSharedPtr<FExtender,1>,int>
                    ((TSharedPtr<FExtender,1> *)local_238.Extenders.AllocatorInstance.Data,
                     local_238.Extenders.ArrayNum);
          if ((TSharedPtr<FExtender,1> *)FVar34.Data != (TSharedPtr<FExtender,1> *)0x0) {
            FMemory::Free(FVar34.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_238.CommandList.SharedReferenceCount.ReferenceController);
          FVar34.Data = local_238.CommandLists.AllocatorInstance.Data;
          DestructItems<TSharedPtr<FUICommandList,1>,int>
                    ((TSharedPtr<FUICommandList,1> *)local_238.CommandLists.AllocatorInstance.Data,
                     local_238.CommandLists.ArrayNum);
          if ((TSharedPtr<FUICommandList,1> *)FVar34.Data != (TSharedPtr<FUICommandList,1> *)0x0) {
            FMemory::Free(FVar34.Data);
          }
          FVar34.Data = local_238.ContextCleanupFuncs.AllocatorInstance.Data;
          DestructItems<TFunction<void___cdecl(void)>,int>
                    ((TFunction<void___cdecl(void)> *)
                     local_238.ContextCleanupFuncs.AllocatorInstance.Data,
                     local_238.ContextCleanupFuncs.ArrayNum);
          if ((TFunction<void___cdecl(void)> *)FVar34.Data != (TFunction<void___cdecl(void)> *)0x0)
          {
            FMemory::Free(FVar34.Data);
          }
          FVar34.Data = local_238.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data;
          DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
                    ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
                     local_238.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data,
                     local_238.ContextObjectCleanupFuncs.Pairs.ArrayNum);
          if ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)FVar34.Data !=
              (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
            FMemory::Free(FVar34.Data);
          }
          if (local_238.ContextObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_238.ContextObjects.AllocatorInstance.Data);
          }
        }
        else {
          FToolMenuContext::operator=(&this_01->Context,&param_3->Context);
        }
      }
      local_340.Data = (FScriptContainerElement *)0x0;
      local_338 = 0;
      iVar22 = UE::Core::Private::
               ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x780,8,&local_340,(int *)((longlong)&local_338 + 4));
      local_338 = CONCAT44(local_338._4_4_,iVar22 + 1);
      FToolMenuEntry::FToolMenuEntry
                ((FToolMenuEntry *)(local_340.Data + (longlong)iVar22 * 0x780),pFVar47);
      iVar22 = (int)local_338;
      iVar25 = 0;
      while (0 < iVar22) {
        if ((iVar22 < 1) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        FVar34.Data = local_340.Data;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   (local_340.Data + 0x728),&local_70);
        if (((*(int *)(FVar34.Data + 0x738) == 0) ||
            (*(longlong **)(FVar34.Data + 0x730) == (longlong *)0x0)) ||
           (cVar20 = (**(code **)(**(longlong **)(FVar34.Data + 0x730) + 0x38))(), cVar20 == '\0'))
        {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_70);
          bVar21 = FToolMenuEntry::IsScriptObjectDynamicConstruct((FToolMenuEntry *)FVar34.Data);
          if (bVar21) goto LAB_142c4cc4b;
          if (pFVar47->bAddedDuringRegister == false) {
            if (((local_350.Data <= FVar34.Data) &&
                (FVar34.Data <
                 (FToolMenuEntry *)(local_350.Data + (longlong)(int)local_348._4_4_ * 0x780))) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar21)) {
              pcVar18 = (code *)swi(3);
              (*pcVar18)();
              return;
            }
            uVar23 = (uint)local_348;
            if ((uint)local_348 == local_348._4_4_) {
              uVar23 = UE::Core::Private::
                       ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x780,8,&local_350,(int *)((longlong)&local_348 + 4));
            }
            local_348 = CONCAT44(local_348._4_4_,uVar23 + 1);
            FVar35.Data = local_350.Data;
          }
          else {
            if (((local_368.Data <= FVar34.Data) &&
                (FVar34.Data < (FToolMenuEntry *)(local_368.Data + (longlong)(int)local_35c * 0x780)
                )) && (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar21)) {
              pcVar18 = (code *)swi(3);
              (*pcVar18)();
              return;
            }
            if (local_360 == local_35c) {
              local_360 = UE::Core::Private::
                          ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x780,8,&local_368,(int *)&local_35c);
            }
            FVar35.Data = local_368.Data;
            uVar23 = local_360;
            local_360 = local_360 + 1;
          }
          FToolMenuEntry::FToolMenuEntry
                    ((FToolMenuEntry *)((longlong)FVar35.Data + (longlong)(int)uVar23 * 0x780),
                     (FToolMenuEntry *)FVar34.Data);
          if (((int)local_338 < 1) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
          FVar34.Data = local_340.Data;
          FToolMenuEntry::~FToolMenuEntry((FToolMenuEntry *)local_340.Data);
          if ((int)local_338 + -1 != 0) {
            memmove(FVar34.Data,(FToolMenuEntry *)(FVar34.Data + 0x780),
                    (longlong)((int)local_338 + -1) * 0x780);
          }
          iVar22 = (int)local_338 + -1;
          local_338 = CONCAT44(local_338._4_4_,iVar22);
          this_01 = local_318;
        }
        else {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_70);
LAB_142c4cc4b:
          local_30c = iVar25 + 1;
          if (5000 < iVar25) {
            if ((param_4->Owner).ValueType == Name) {
              local_328 = (param_4->Owner).field0_0x0;
            }
            else {
              local_328.ValueName.Index = 0;
              local_328.ValueName.Number = 0;
            }
            if (param_2 != (UToolMenu *)0x0) {
              local_328 = *(FToolMenuOwner_u_0 *)&param_2->MenuName;
            }
            if (2 < (byte)LogToolMenus._0_1_) {
              ::FName::ToString(&pFVar47->Name,&local_b8);
              ::FName::ToString(&param_4->Name,&local_c8);
              ::FName::ToString((FName *)&local_328.ValueName,&local_d8);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogToolMenus);
              if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_d8.Data.AllocatorInstance.Data);
              }
              if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c8.Data.AllocatorInstance.Data);
              }
              if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b8.Data.AllocatorInstance.Data);
              }
            }
            iVar22 = (int)local_338;
            break;
          }
          pTVar46 = &this_01->Sections;
          piVar1 = &(this_01->Sections).ArrayMax;
          pFVar29 = (FToolMenuSection *)(pTVar46->AllocatorInstance).Data;
          iVar22 = (this_01->Sections).ArrayNum;
          local_2e0 = pTVar46;
          if ((this_01->Sections).ArrayMax < 0) {
            DestructItems<FToolMenuSection,int>(pFVar29,iVar22);
            (this_01->Sections).ArrayNum = 0;
            if (*piVar1 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x238,8,0,&pTVar46->AllocatorInstance,0,piVar1);
            }
          }
          else {
            DestructItems<FToolMenuSection,int>(pFVar29,iVar22);
            (this_01->Sections).ArrayNum = 0;
          }
          bVar21 = FToolMenuEntry::IsScriptObjectDynamicConstruct((FToolMenuEntry *)FVar34.Data);
          if (bVar21) {
            local_300.ComparisonIndex.Value = 0;
            local_300.Number = 0;
            local_2a8.bIsEditing = false;
            local_2a8.ContextObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_2a8.ContextObjects.ArrayNum = 0;
            local_2a8.ContextObjects.ArrayMax = 0;
            local_2a8.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_2a8.ContextObjectCleanupFuncs.Pairs.ArrayNum = 0;
            local_2a8.ContextObjectCleanupFuncs.Pairs.ArrayMax = 0;
            local_2a8.ContextCleanupFuncs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_2a8.ContextCleanupFuncs.ArrayNum = 0;
            local_2a8.ContextCleanupFuncs.ArrayMax = 0;
            local_2a8.CommandLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_2a8.CommandLists.ArrayNum = 0;
            local_2a8.CommandLists.ArrayMax = 0;
            local_2a8.CommandList.Object = (FUICommandList *)0x0;
            local_2a8.CommandList.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)0x0;
            local_2a8.Extenders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_2a8.Extenders.ArrayNum = 0;
            local_2a8.Extenders.ArrayMax = 0;
            if (param_3 == (FToolMenuSection *)0x0) {
              FVar36.ComparisonIndex.Value = 0;
              FVar36.Number = 0;
            }
            else {
              FVar36 = param_3->Name;
              local_300 = FVar36;
              FToolMenuContext::operator=(&local_2a8,&param_3->Context);
            }
            this_00.field0_0x0 =
                 (TObjectPtr<UToolMenuEntryScript>_u_0)
                 ((TObjectPtr<UToolMenuEntryScript>_u_0 *)(FVar34.Data + 0x38))->DebugPtr;
            local_1b8.bIsEditing = false;
            local_1b8.CommandList.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)0x0;
            local_1b8.Extenders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1b8.ContextObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1b8.ContextObjects.ArrayNum = 0;
            local_1b8.ContextObjects.ArrayMax = 0;
            local_1b8.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_1b8.ContextObjectCleanupFuncs.Pairs.ArrayNum = 0;
            local_1b8.ContextObjectCleanupFuncs.Pairs.ArrayMax = 0;
            local_1b8.ContextCleanupFuncs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1b8.ContextCleanupFuncs.ArrayNum = 0;
            local_1b8.ContextCleanupFuncs.ArrayMax = 0;
            local_1b8.CommandLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1b8.CommandLists.ArrayNum = 0;
            local_1b8.CommandLists.ArrayMax = 0;
            local_1b8.CommandList.Object = (FUICommandList *)0x0;
            local_1b8.Extenders.ArrayNum = 0;
            local_1b8.Extenders.ArrayMax = 0;
            local_1c8 = this_01;
            local_1c0 = FVar36;
            FToolMenuContext::operator=(&local_1b8,&local_2a8);
            pUVar28 = UObject::FindFunctionChecked
                                ((UObject *)this_00.field0_0x0,
                                 NAME_UToolMenuEntryScript_ConstructMenuEntry);
            (**(code **)(*(longlong *)this_00.field0_0x0 + 0x260))(this_00.field0_0x0,pUVar28);
            DestructItems<TSharedPtr<FExtender,1>,int>
                      ((TSharedPtr<FExtender,1> *)local_1b8.Extenders.AllocatorInstance.Data,
                       local_1b8.Extenders.ArrayNum);
            if ((TSharedPtr<FExtender,1> *)local_1b8.Extenders.AllocatorInstance.Data !=
                (TSharedPtr<FExtender,1> *)0x0) {
              FMemory::Free(local_1b8.Extenders.AllocatorInstance.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_1b8.CommandList.SharedReferenceCount.ReferenceController);
            DestructItems<TSharedPtr<FUICommandList,1>,int>
                      ((TSharedPtr<FUICommandList,1> *)local_1b8.CommandLists.AllocatorInstance.Data
                       ,local_1b8.CommandLists.ArrayNum);
            if ((TSharedPtr<FUICommandList,1> *)local_1b8.CommandLists.AllocatorInstance.Data !=
                (TSharedPtr<FUICommandList,1> *)0x0) {
              FMemory::Free(local_1b8.CommandLists.AllocatorInstance.Data);
            }
            DestructItems<TFunction<void___cdecl(void)>,int>
                      ((TFunction<void___cdecl(void)> *)
                       local_1b8.ContextCleanupFuncs.AllocatorInstance.Data,
                       local_1b8.ContextCleanupFuncs.ArrayNum);
            if ((TFunction<void___cdecl(void)> *)
                local_1b8.ContextCleanupFuncs.AllocatorInstance.Data !=
                (TFunction<void___cdecl(void)> *)0x0) {
              FMemory::Free(local_1b8.ContextCleanupFuncs.AllocatorInstance.Data);
            }
            DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
                      ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
                       local_1b8.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data,
                       local_1b8.ContextObjectCleanupFuncs.Pairs.ArrayNum);
            if ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
                local_1b8.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data !=
                (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
              FMemory::Free(local_1b8.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data);
            }
            if (local_1b8.ContextObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b8.ContextObjects.AllocatorInstance.Data);
            }
            DestructItems<TSharedPtr<FExtender,1>,int>
                      ((TSharedPtr<FExtender,1> *)local_2a8.Extenders.AllocatorInstance.Data,
                       local_2a8.Extenders.ArrayNum);
            if ((TSharedPtr<FExtender,1> *)local_2a8.Extenders.AllocatorInstance.Data !=
                (TSharedPtr<FExtender,1> *)0x0) {
              FMemory::Free(local_2a8.Extenders.AllocatorInstance.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_2a8.CommandList.SharedReferenceCount.ReferenceController);
            DestructItems<TSharedPtr<FUICommandList,1>,int>
                      ((TSharedPtr<FUICommandList,1> *)local_2a8.CommandLists.AllocatorInstance.Data
                       ,local_2a8.CommandLists.ArrayNum);
            if ((TSharedPtr<FUICommandList,1> *)local_2a8.CommandLists.AllocatorInstance.Data !=
                (TSharedPtr<FUICommandList,1> *)0x0) {
              FMemory::Free(local_2a8.CommandLists.AllocatorInstance.Data);
            }
            DestructItems<TFunction<void___cdecl(void)>,int>
                      ((TFunction<void___cdecl(void)> *)
                       local_2a8.ContextCleanupFuncs.AllocatorInstance.Data,
                       local_2a8.ContextCleanupFuncs.ArrayNum);
            if ((TFunction<void___cdecl(void)> *)
                local_2a8.ContextCleanupFuncs.AllocatorInstance.Data !=
                (TFunction<void___cdecl(void)> *)0x0) {
              FMemory::Free(local_2a8.ContextCleanupFuncs.AllocatorInstance.Data);
            }
            DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
                      ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
                       local_2a8.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data,
                       local_2a8.ContextObjectCleanupFuncs.Pairs.ArrayNum);
            if ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
                local_2a8.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data !=
                (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
              FMemory::Free(local_2a8.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data);
            }
            if (local_2a8.ContextObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2a8.ContextObjects.AllocatorInstance.Data);
            }
          }
          else {
            FVar37.ComparisonIndex.Value = 0;
            FVar37.Number = 0;
            FVar36 = FVar37;
            if (param_3 != (FToolMenuSection *)0x0) {
              FVar36 = param_3->Name;
              FVar37 = (FName)((ulonglong)FVar36 >> 0x20);
            }
            local_2f8.ComparisonIndex.Value = 0;
            local_2f8.Number = 0;
            local_2f0._0_1_ = Default;
            local_2f0._1_1_ = Log|Insert;
            FText::FText((FText *)local_2d8);
            local_138.Position = (EToolMenuInsertType)local_2f0;
            local_138.Fallback = local_2f0._1_1_;
            local_138._10_2_ = uStack_2ee;
            local_2d8[0x10] = false;
            local_2c0.AccessDetector.State =
                 (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
            FStack_2b8.Data = (FScriptContainerElement *)0x0;
            local_2b0 = 0;
            local_138.Name = local_2f8;
            pFVar29 = UToolMenu::AddSection
                                (this_01,(FName)((ulonglong)FVar36 & 0xffffffff |
                                                (longlong)FVar37 << 0x20),
                                 (TAttribute<FText> *)local_2d8,&local_138);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_2c0,(FWriteAccessScope *)&local_128);
            if (((int)local_2b0 != 0) && (FStack_2b8.Data != (FScriptContainerElement *)0x0)) {
              (*(code *)**(undefined8 **)FStack_2b8.Data)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&FStack_2b8,0,0,0x10);
              local_2b0 = local_2b0 & 0xffffffff00000000;
            }
            if (local_128.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_128.Accessor,&local_128);
            }
            if (FStack_2b8.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_2b8.Data);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2c0.AccessDetector);
            if ((ITextData *)local_2d8._0_8_ != (ITextData *)0x0) {
              (**(code **)((longlong)*(ITextData *)local_2d8._0_8_ + 0x10))();
            }
            pTVar2 = &(pFVar29->Context).ContextObjects;
            (pFVar29->Context).bIsEditing = (this_01->Context).bIsEditing;
            pTVar3 = &(this_01->Context).ContextObjects;
            if (pTVar2 != pTVar3) {
              iVar22 = (this_01->Context).ContextObjects.ArrayNum;
              piVar1 = &(pFVar29->Context).ContextObjects.ArrayMax;
              pFVar38 = (pTVar3->AllocatorInstance).Data;
              iVar25 = *piVar1;
              (pFVar29->Context).ContextObjects.ArrayNum = iVar22;
              if ((iVar22 == 0) && (iVar25 == 0)) {
                *piVar1 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,iVar22,iVar25,&pTVar2->AllocatorInstance,iVar22,piVar1);
                ConstructItems<TObjectPtr<UObject>,TObjectPtr<UObject>,int>
                          ((pTVar2->AllocatorInstance).Data,(TObjectPtr<UObject> *)pFVar38,iVar22);
              }
            }
            pTVar7 = &(this_01->Context).ContextObjectCleanupFuncs;
            pTVar4 = &(pFVar29->Context).ContextObjectCleanupFuncs;
            if (pTVar4 != pTVar7) {
              DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
                        ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
                         (pTVar4->Pairs).AllocatorInstance.Data,
                         (pFVar29->Context).ContextObjectCleanupFuncs.Pairs.ArrayNum);
              iVar22 = (this_01->Context).ContextObjectCleanupFuncs.Pairs.ArrayNum;
              piVar1 = &(pFVar29->Context).ContextObjectCleanupFuncs.Pairs.ArrayMax;
              pTVar12 = (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
                        (pTVar7->Pairs).AllocatorInstance.Data;
              iVar25 = *piVar1;
              (pFVar29->Context).ContextObjectCleanupFuncs.Pairs.ArrayNum = iVar22;
              if ((iVar22 == 0) && (iVar25 == 0)) {
                *piVar1 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40,0x10,iVar22,iVar25,(ForAnyElementType *)pTVar4,iVar22,piVar1);
                ConstructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
                          ((pTVar4->Pairs).AllocatorInstance.Data,pTVar12,iVar22);
              }
            }
            pTVar8 = &(this_01->Context).ContextCleanupFuncs;
            pTVar5 = &(pFVar29->Context).ContextCleanupFuncs;
            if (pTVar5 != pTVar8) {
              DestructItems<TFunction<void___cdecl(void)>,int>
                        ((TFunction<void___cdecl(void)> *)(pTVar5->AllocatorInstance).Data,
                         (pFVar29->Context).ContextCleanupFuncs.ArrayNum);
              iVar22 = (this_01->Context).ContextCleanupFuncs.ArrayNum;
              piVar1 = &(pFVar29->Context).ContextCleanupFuncs.ArrayMax;
              pTVar13 = (TFunction<void___cdecl(void)> *)(pTVar8->AllocatorInstance).Data;
              iVar25 = *piVar1;
              (pFVar29->Context).ContextCleanupFuncs.ArrayNum = iVar22;
              if ((iVar22 == 0) && (iVar25 == 0)) {
                *piVar1 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x30,0x10,iVar22,iVar25,&pTVar5->AllocatorInstance,iVar22,piVar1);
                ConstructItems<TFunction<void___cdecl(void)>,TFunction<void___cdecl(void)>,int>
                          ((pTVar5->AllocatorInstance).Data,pTVar13,iVar22);
              }
            }
            pTVar9 = &(this_01->Context).CommandLists;
            pTVar6 = &(pFVar29->Context).CommandLists;
            if (pTVar6 != pTVar9) {
              DestructItems<TSharedPtr<FUICommandList,1>,int>
                        ((TSharedPtr<FUICommandList,1> *)(pTVar6->AllocatorInstance).Data,
                         (pFVar29->Context).CommandLists.ArrayNum);
              iVar22 = (this_01->Context).CommandLists.ArrayNum;
              piVar1 = &(pFVar29->Context).CommandLists.ArrayMax;
              pTVar14 = (TSharedPtr<FUICommandList,1> *)(pTVar9->AllocatorInstance).Data;
              iVar25 = *piVar1;
              (pFVar29->Context).CommandLists.ArrayNum = iVar22;
              if ((iVar22 == 0) && (iVar25 == 0)) {
                *piVar1 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,iVar22,iVar25,&pTVar6->AllocatorInstance,iVar22,piVar1);
                ConstructItems<TSharedPtr<FUICommandList,1>,TSharedPtr<FUICommandList,1>,int>
                          ((pTVar6->AllocatorInstance).Data,pTVar14,iVar22);
              }
            }
            pTVar15 = (this_01->Context).CommandList.SharedReferenceCount.ReferenceController;
            pFVar16 = (this_01->Context).CommandList.Object;
            if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_e8 = (pFVar29->Context).CommandList.Object;
            pTStack_e0 = (pFVar29->Context).CommandList.SharedReferenceCount.ReferenceController;
            (pFVar29->Context).CommandList.Object = pFVar16;
            (pFVar29->Context).CommandList.SharedReferenceCount.ReferenceController = pTVar15;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_e0);
            pTVar10 = &(this_01->Context).Extenders;
            pTVar11 = &(pFVar29->Context).Extenders;
            if (pTVar11 != pTVar10) {
              DestructItems<TSharedPtr<FExtender,1>,int>
                        ((TSharedPtr<FExtender,1> *)(pTVar11->AllocatorInstance).Data,
                         (pFVar29->Context).Extenders.ArrayNum);
              iVar22 = (this_01->Context).Extenders.ArrayNum;
              piVar1 = &(pFVar29->Context).Extenders.ArrayMax;
              pTVar17 = (TSharedPtr<FExtender,1> *)(pTVar10->AllocatorInstance).Data;
              iVar25 = *piVar1;
              (pFVar29->Context).Extenders.ArrayNum = iVar22;
              if ((iVar22 == 0) && (iVar25 == 0)) {
                *piVar1 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,iVar22,iVar25,&pTVar11->AllocatorInstance,iVar22,piVar1);
                ConstructItems<TSharedPtr<FExtender,1>,TSharedPtr<FExtender,1>,int>
                          ((pTVar11->AllocatorInstance).Data,pTVar17,iVar22);
              }
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       (FVar34.Data + 0x728),&local_58);
            if (*(int *)(FVar34.Data + 0x738) == 0) {
              plVar32 = (longlong *)0x0;
            }
            else {
              plVar32 = *(longlong **)(FVar34.Data + 0x730);
            }
            (**(code **)(*plVar32 + 0x60))(plVar32,pFVar29);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_58);
            pTVar46 = local_2e0;
          }
          iVar22 = 0;
          if (((int)local_338 < 1) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
          FVar34.Data = local_340.Data;
          FToolMenuEntry::~FToolMenuEntry((FToolMenuEntry *)local_340.Data);
          if ((int)local_338 + -1 != 0) {
            memmove(FVar34.Data,(FToolMenuEntry *)(FVar34.Data + 0x780),
                    (longlong)((int)local_338 + -1) * 0x780);
          }
          local_338 = CONCAT44(local_338._4_4_,(int)local_338 + -1);
          local_310 = pTVar46->ArrayNum;
          uVar33 = (ulonglong)(int)local_310;
          pFVar43 = (pTVar46->AllocatorInstance).Data;
          pFVar38 = pFVar43 + 0x18;
          local_148 = pFVar43 + uVar33 * 0x238;
          while( true ) {
            pFVar19 = local_148;
            local_330 = iVar22;
            if (pTVar46->ArrayNum != (int)uVar33) {
              local_358 = 0;
              `TCheckedPointerIterator<FToolMenuSection,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_358);
            }
            if (pFVar43 == pFVar19) break;
            lVar41 = *(longlong *)pFVar38;
            iVar22 = *(int *)(pFVar38 + 8);
            pFVar27 = (FName *)(lVar41 + 0x24);
            lVar45 = lVar41 + (longlong)iVar22 * 0x780;
            while( true ) {
              if (*(int *)(pFVar38 + 8) != iVar22) {
                local_357 = 0;
                `TCheckedPointerIterator<FToolMenuEntry,int,0>::operator!='::__l2::<lambda_1>::
                operator()(&local_357);
              }
              if (lVar41 == lVar45) break;
              if ((char)pFVar27[1].ComparisonIndex.Value == '\0') {
                *pFVar27 = (pFVar47->InsertPosition).Name;
                pFVar27[1].ComparisonIndex.Value = *(uint *)&(pFVar47->InsertPosition).Position;
              }
              lVar41 = lVar41 + 0x780;
              pFVar27 = pFVar27 + 0xf0;
            }
            if (((FScriptContainerElement *)&local_340 == pFVar38) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(const void*)this != (const void*)&Items",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x767,L""), bVar21)) {
              pcVar18 = (code *)swi(3);
              (*pcVar18)();
              return;
            }
            iVar25 = *(int *)(pFVar38 + 8);
            iVar24 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x780,8,iVar25,&local_340,(int *)&local_338,
                                (int *)((longlong)&local_338 + 4));
            iVar22 = local_330;
            lVar41 = (longlong)local_330;
            memmove(local_340.Data + lVar41 * 0x780 + (longlong)iVar25 * 0x780,
                    local_340.Data + lVar41 * 0x780,(longlong)(iVar24 - local_330) * 0x780);
            ConstructItems<FToolMenuEntry,FToolMenuEntry,int>
                      (local_340.Data + lVar41 * 0x780,*(FToolMenuEntry **)pFVar38,iVar25);
            iVar22 = iVar22 + *(int *)(pFVar38 + 8);
            pFVar43 = pFVar43 + 0x238;
            pFVar38 = pFVar38 + 0x238;
            uVar33 = (ulonglong)local_310;
            pTVar46 = local_2e0;
          }
          this_01 = local_318;
          iVar22 = (int)local_338;
          iVar25 = local_30c;
        }
      }
      DestructItems<FToolMenuEntry,int>((FToolMenuEntry *)local_340.Data,iVar22);
      this_01 = local_318;
      if ((FToolMenuEntry *)local_340.Data != (FToolMenuEntry *)0x0) {
        FMemory::Free(local_340.Data);
        this_01 = local_318;
      }
    }
    pUVar31 = (UToolMenu *)(ulonglong)local_360;
    pFVar47 = pFVar47 + 1;
    uVar33 = (ulonglong)local_308;
  }
  if (this_01 != (UToolMenu *)0x0) {
    UToolMenu::Empty(this_01);
LAB_142c4d7e7:
    pUVar31 = (UToolMenu *)(ulonglong)local_360;
  }
  iVar22 = (uint)local_348;
  if ((uint)local_348 != 0) {
    iVar25 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x780,8,(uint)local_348,&local_368,(int *)&local_360,(int *)&local_35c);
    ConstructItems<FToolMenuEntry,FToolMenuEntry,int>
              (local_368.Data + (longlong)iVar25 * 0x780,(FToolMenuEntry *)local_350.Data,iVar22);
    pUVar31 = (UToolMenu *)(ulonglong)local_360;
  }
  if (param_3 != (FToolMenuSection *)0x0) {
    uVar23 = (uint)pUVar31;
    while (0 < (int)uVar23) {
      uVar42 = 0;
      uVar33 = uVar42;
      if ((int)pUVar31 < 1) {
LAB_142c4dad5:
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar21) {
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
      }
      else {
        do {
          uVar40 = (uint)uVar42;
          uVar44 = ~uVar40 >> 0x1f;
          uVar23 = 0;
          if ((int)uVar40 < (int)pUVar31) {
            uVar23 = uVar44;
          }
          if ((uVar23 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
          pFVar47 = (FToolMenuEntry *)(local_368.Data + uVar33);
          if (pFVar47->Name != (FName)0x0) {
            uVar23 = FToolMenuSection::IndexOfBlock(param_3,pFVar47->Name);
            if (uVar23 != 0xffffffff) {
              uVar30 = ~uVar23 >> 0x1f;
              iVar22 = (param_3->Blocks).ArrayNum;
              if ((pFVar47->InsertPosition).Position == Default) {
                uVar26 = 0;
                if ((int)uVar23 < iVar22) {
                  uVar26 = uVar30;
                }
                if ((uVar26 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar18 = (code *)swi(3);
                  (*pcVar18)();
                  return;
                }
                FToolMenuEntry::operator=
                          ((FToolMenuEntry *)
                           ((param_3->Blocks).AllocatorInstance.Data + (longlong)(int)uVar23 * 0x780
                           ),pFVar47);
                uVar23 = 0;
                if ((int)uVar40 < (int)local_360) {
                  uVar23 = uVar44;
                }
                if ((uVar23 == 0) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar21)) {
                  pcVar18 = (code *)swi(3);
                  (*pcVar18)();
                  return;
                }
                pFVar47 = (FToolMenuEntry *)(local_368.Data + (longlong)(int)uVar40 * 0x780);
                FToolMenuEntry::~FToolMenuEntry(pFVar47);
                iVar22 = (local_360 - uVar40) + -1;
                if (iVar22 != 0) {
                  memmove(pFVar47,pFVar47 + 1,(longlong)iVar22 * 0x780);
                }
                local_360 = local_360 - 1;
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x780,8,&local_368,local_360,(int *)&local_35c);
                goto LAB_142c4de74;
              }
              uVar26 = 0;
              if ((int)uVar23 < iVar22) {
                uVar26 = uVar30;
              }
              if ((uVar26 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar18 = (code *)swi(3);
                (*pcVar18)();
                return;
              }
              pFVar39 = (FToolMenuEntry *)
                        ((param_3->Blocks).AllocatorInstance.Data + (longlong)(int)uVar23 * 0x780);
              FToolMenuEntry::~FToolMenuEntry(pFVar39);
              iVar22 = (param_3->Blocks).ArrayNum + ~uVar23;
              if (iVar22 != 0) {
                memmove(pFVar39,pFVar39 + 1,(longlong)iVar22 * 0x780);
              }
              piVar1 = &(param_3->Blocks).ArrayNum;
              *piVar1 = *piVar1 + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x780,8,&(param_3->Blocks).AllocatorInstance,(param_3->Blocks).ArrayNum,
                         &(param_3->Blocks).ArrayMax);
            }
          }
          iVar22 = FToolMenuSection::FindBlockInsertIndex(param_3,pFVar47);
          if (iVar22 != -1) {
            pFVar39 = (FToolMenuEntry *)(param_3->Blocks).AllocatorInstance.Data;
            if (((pFVar39 <= pFVar47) && (pFVar47 < pFVar39 + (param_3->Blocks).ArrayMax)) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar21)) {
              pcVar18 = (code *)swi(3);
              (*pcVar18)();
              return;
            }
            iVar25 = (param_3->Blocks).ArrayNum;
            piVar1 = &(param_3->Blocks).ArrayMax;
            if (iVar25 == *piVar1) {
              iVar25 = UE::Core::Private::
                       ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x780,8,&(param_3->Blocks).AllocatorInstance,piVar1);
            }
            pFVar38 = (param_3->Blocks).AllocatorInstance.Data;
            (param_3->Blocks).ArrayNum = iVar25 + 1;
            pFVar38 = pFVar38 + (longlong)iVar22 * 0x780;
            memmove(pFVar38 + 0x780,pFVar38,(longlong)(iVar25 - iVar22) * 0x780);
            FToolMenuEntry::FToolMenuEntry
                      ((FToolMenuEntry *)
                       ((param_3->Blocks).AllocatorInstance.Data + (longlong)iVar22 * 0x780),pFVar47
                      );
            uVar23 = 0;
            if ((int)uVar40 < (int)local_360) {
              uVar23 = uVar44;
            }
            if ((uVar23 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar18 = (code *)swi(3);
              (*pcVar18)();
              return;
            }
            pFVar47 = (FToolMenuEntry *)(local_368.Data + (longlong)(int)uVar40 * 0x780);
            FToolMenuEntry::~FToolMenuEntry(pFVar47);
            iVar22 = (local_360 - uVar40) + -1;
            if (iVar22 != 0) {
              memmove(pFVar47,pFVar47 + 1,(longlong)iVar22 * 0x780);
            }
            local_360 = local_360 - 1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x780,8,&local_368,local_360,(int *)&local_35c);
            goto LAB_142c4de74;
          }
          pUVar31 = (UToolMenu *)(ulonglong)local_360;
          uVar42 = (ulonglong)(uVar40 + 1);
          uVar33 = uVar33 + 0x780;
        } while ((int)(uVar40 + 1) < (int)local_360);
        if ((int)local_360 < 1) goto LAB_142c4dad5;
      }
      FVar34.Data = local_368.Data;
      if ((((byte)local_368.Data[0x2d] & Log) != None) && (2 < (byte)LogToolMenus._0_1_)) {
        ::FName::ToString((FName *)local_368.Data,&local_98);
        ::FName::ToString((FName *)(FVar34.Data + 0x24),&local_a8);
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)&PTR_u_Menu_item_not_f_1509bcd78,
                   (FLogCategoryBase *)&LogToolMenus);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
      if (((byte)FVar34.Data[0x2d] & Insert) == None) break;
      pFVar47 = (FToolMenuEntry *)(param_3->Blocks).AllocatorInstance.Data;
      if (((pFVar47 <= FVar34.Data) && (FVar34.Data < pFVar47 + (param_3->Blocks).ArrayMax)) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar21)) {
        pcVar18 = (code *)swi(3);
        (*pcVar18)();
        return;
      }
      iVar22 = (param_3->Blocks).ArrayNum;
      piVar1 = &(param_3->Blocks).ArrayMax;
      if (iVar22 == *piVar1) {
        iVar22 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x780,8,&(param_3->Blocks).AllocatorInstance,piVar1);
      }
      (param_3->Blocks).ArrayNum = iVar22 + 1;
      FToolMenuEntry::FToolMenuEntry
                ((FToolMenuEntry *)
                 ((param_3->Blocks).AllocatorInstance.Data + (longlong)iVar22 * 0x780),
                 (FToolMenuEntry *)FVar34.Data);
      if (((int)local_360 < 1) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar18 = (code *)swi(3);
        (*pcVar18)();
        return;
      }
      FVar34.Data = local_368.Data;
      FToolMenuEntry::~FToolMenuEntry((FToolMenuEntry *)local_368.Data);
      if (local_360 - 1 != 0) {
        memmove(FVar34.Data,(FToolMenuEntry *)(FVar34.Data + 0x780),
                (longlong)(int)(local_360 - 1) * 0x780);
      }
      local_360 = local_360 - 1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x780,8,&local_368,local_360,(int *)&local_35c);
LAB_142c4de74:
      pUVar31 = (UToolMenu *)(ulonglong)local_360;
      uVar23 = local_360;
    }
  }
  DestructItems<FToolMenuEntry,int>((FToolMenuEntry *)local_350.Data,(uint)local_348);
  if ((FToolMenuEntry *)local_350.Data != (FToolMenuEntry *)0x0) {
    FMemory::Free(local_350.Data);
  }
  DestructItems<FToolMenuEntry,int>((FToolMenuEntry *)local_368.Data,local_360);
  if ((FToolMenuEntry *)local_368.Data != (FToolMenuEntry *)0x0) {
    FMemory::Free(local_368.Data);
  }
  return;
}

// AssignSetTimerForNextTickDelegate @ 142c4def0

void __thiscall
UToolMenus::AssignSetTimerForNextTickDelegate
          (UToolMenus *this,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->SetTimerForNextTickDelegate,param_1);
  return;
}

// BeginDestroy @ 142c4df10

void __thiscall UToolMenus::BeginDestroy(UToolMenus *this)

{
  if (Singleton == this) {
    if ((InternalStartupCallbackHandle.bIsSet) && (InternalStartupCallbackHandle.TypedValue.ID != 0)
       ) {
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &FCoreDelegates::OnPostEngineInit,InternalStartupCallbackHandle.TypedValue);
      InternalStartupCallbackHandle.TypedValue.ID = 0;
    }
    bHasShutDown = true;
    Singleton = (UToolMenus *)0x0;
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// CalculateToolbarVisibility @ 142c4e120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TAttribute<EVisibility> * __cdecl
UToolMenus::CalculateToolbarVisibility
          (TAttribute<EVisibility> *__return_storage_ptr__,UToolMenu *param_1,
          FToolMenuSection *param_2,FToolMenuEntry *param_3,bool param_4,bool param_5)

{
  longlong *this;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  uchar uVar1;
  UToolMenuEntryScript *this_01;
  void *pvVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  char cVar6;
  TAttribute<EVisibility> *pTVar7;
  longlong lVar8;
  FToolMenuVisibilityChoice *pFVar9;
  TDelegateBase<FNotThreadSafeDelegateMode> *pTVar10;
  FUIAction *pFVar11;
  ForElementType<FToolMenuVisibilityChoice> FVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  ForElementType<FToolMenuVisibilityChoice> FVar15;
  int iVar16;
  ulonglong uVar17;
  TDelegateBase<FNotThreadSafeDelegateMode> *pTVar18;
  undefined1 auStackY_308 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2b8;
  FDelegateAllocation local_2b0;
  undefined1 local_2a0 [8];
  undefined1 local_298 [24];
  TSharedPtr<FUICommandList_const_,1> local_280;
  undefined1 local_270 [24];
  undefined1 local_258 [24];
  undefined1 local_240 [24];
  undefined1 local_228 [16];
  int local_218;
  FDestructionSentinel local_208;
  FDestructionSentinel local_1f0;
  FDestructionSentinel local_1d8;
  FDelegateAllocation *local_1c0;
  FReadAccessScope local_1b8;
  FReadAccessScope local_1a0;
  ForElementType<FToolMenuVisibilityChoice> local_188;
  int local_158;
  int local_154;
  undefined1 local_150 [16];
  void *pvStack_140;
  ulonglong local_138;
  byte local_130;
  undefined1 local_128 [16];
  void *pvStack_118;
  longlong local_110;
  byte local_108;
  undefined1 local_100 [16];
  void *pvStack_f0;
  ulonglong local_e8;
  byte local_e0;
  ForElementType<FToolMenuVisibilityChoice> local_d8;
  int local_a8;
  int local_a4;
  TVariant<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
  local_a0;
  FToolMenuVisibilityChoice local_78;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_308;
  pTVar18 = (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0;
  local_154 = 1;
  pFVar9 = &param_2->Visibility;
  local_158 = 0;
  uVar1 = (param_2->Visibility).Value.TypeIndex;
  pTVar10 = (TDelegateBase<FNotThreadSafeDelegateMode> *)pFVar9;
  if (uVar1 != '\0') {
    pTVar10 = pTVar18;
  }
  local_188.SecondaryData = (ForElementType<FToolMenuVisibilityChoice>)0x0;
  if (pTVar10 == (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
    pTVar10 = (TDelegateBase<FNotThreadSafeDelegateMode> *)pFVar9;
    if (uVar1 != '\x01') {
      pTVar10 = pTVar18;
    }
    if (pTVar10 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
      cVar6 = pTVar10->field_0x1;
      goto LAB_142c4e1d4;
    }
    pTVar10 = (TDelegateBase<FNotThreadSafeDelegateMode> *)pFVar9;
    if (uVar1 != '\x02') {
      pTVar10 = pTVar18;
    }
    if (pTVar10 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
      cVar6 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound(pTVar10);
      goto LAB_142c4e1d4;
    }
  }
  else {
    cVar6 = pTVar10->field_0x1;
LAB_142c4e1d4:
    if (cVar6 != '\0') {
      FVar12 = (ForElementType<FToolMenuVisibilityChoice>)&local_188;
      if (local_188.SecondaryData != (ForElementType<FToolMenuVisibilityChoice>)0x0) {
        FVar12 = local_188.SecondaryData;
      }
      if ((ulonglong)FVar12 <= pFVar9) {
        FVar12 = (ForElementType<FToolMenuVisibilityChoice>)&local_188;
        if (local_188.SecondaryData != (ForElementType<FToolMenuVisibilityChoice>)0x0) {
          FVar12 = local_188.SecondaryData;
        }
        if ((pFVar9 < (FToolMenuVisibilityChoice *)((longlong)FVar12 + (longlong)local_154 * 0x28))
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TAttribute<EVisibility> *)(*pcVar3)();
          return pTVar7;
        }
      }
      if (local_158 == local_154) {
        local_158 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FToolMenuVisibilityChoice>_>
                              (0x828,&local_188,&local_154);
      }
      FVar12 = (ForElementType<FToolMenuVisibilityChoice>)&local_188;
      if (local_188.SecondaryData != (ForElementType<FToolMenuVisibilityChoice>)0x0) {
        FVar12 = local_188.SecondaryData;
      }
      lVar8 = (longlong)local_158;
      local_158 = local_158 + 1;
      TVariant<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
      ::
      TVariant<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
                ((TVariant<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)((longlong)FVar12 + lVar8 * 0x28),&pFVar9->Value);
    }
  }
  if (param_4) {
    local_150._0_2_ = 0x19;
    local_138 = 0;
    local_150._8_8_ = 0;
    pvStack_140 = (void *)0x0;
    local_130 = '\0';
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_150 + 8));
    if (pvStack_140 != (void *)0x0) {
      FMemory::Free(pvStack_140);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)(local_150 + 8));
    local_150[0] = (param_3->ShowInToolbarTopLevel).Value;
    local_150[1] = (param_3->ShowInToolbarTopLevel).bIsSet;
    local_150._8_8_ = 0;
    pvStack_140 = (void *)0x0;
    local_138 = local_138 & 0xffffffff00000000;
    TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)(local_150 + 8),
               &(param_3->ShowInToolbarTopLevel).Getter);
    this_01 = (param_3->ScriptObject).field0_0x0.DebugPtr;
    local_130 = 1;
    if (this_01 != (UToolMenuEntryScript *)0x0) {
      UToolMenuEntryScript::CreateShowInToolbarTopLevelAttribute
                (this_01,(TAttribute<bool> *)local_2a0,&param_1->Context);
      if (local_2a0[1] != false) {
        local_100._0_2_ = 0x19;
        local_e8 = 0;
        local_100._8_8_ = 0;
        pvStack_f0 = (void *)0x0;
        local_e0 = '\0';
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_100 + 8));
        if (pvStack_f0 != (void *)0x0) {
          FMemory::Free(pvStack_f0);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)(local_100 + 8));
        local_100._8_8_ = 0;
        pvStack_f0 = (void *)0x0;
        local_e8 = local_e8 & 0xffffffff00000000;
        TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>
                  ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)(local_100 + 8),
                   (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_298);
        local_e0 = 1;
        pFVar9 = UE::ToolMenus::Private::CombineVisibility
                           (&local_78,(FToolMenuVisibilityChoice *)local_100,
                            (FToolMenuVisibilityChoice *)local_150);
        FToolMenuVisibilityChoice::operator=((FToolMenuVisibilityChoice *)local_150,pFVar9);
        if ((2 < local_78.Value.TypeIndex) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TAttribute<EVisibility> *)(*pcVar3)();
          return pTVar7;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[local_78.Value.TypeIndex])(&local_78);
        uVar17 = (ulonglong)local_e0;
        if ((2 < local_e0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TAttribute<EVisibility> *)(*pcVar3)();
          return pTVar7;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar17])(local_100);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_298);
      if ((void *)local_298._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_298._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_298);
    }
    pTVar10 = (TDelegateBase<FNotThreadSafeDelegateMode> *)local_150;
    if (local_130 != 0) {
      pTVar10 = pTVar18;
    }
    if (pTVar10 == (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
      pTVar10 = (TDelegateBase<FNotThreadSafeDelegateMode> *)local_150;
      if (local_130 != 1) {
        pTVar10 = pTVar18;
      }
      if (pTVar10 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
        cVar6 = pTVar10->field_0x1;
        goto LAB_142c4e599;
      }
      pTVar10 = (TDelegateBase<FNotThreadSafeDelegateMode> *)local_150;
      if (local_130 != 2) {
        pTVar10 = pTVar18;
      }
      if (pTVar10 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar10,&local_1b8);
        if (((*(int *)&pTVar10->field_0x10 == 0) ||
            (*(longlong **)&pTVar10->field_0x8 == (longlong *)0x0)) ||
           (cVar6 = (**(code **)(**(longlong **)&pTVar10->field_0x8 + 0x38))(), cVar6 == '\0')) {
          cVar6 = '\0';
        }
        else {
          cVar6 = '\x01';
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_1b8);
        goto LAB_142c4e599;
      }
    }
    else {
      cVar6 = pTVar10->field_0x1;
LAB_142c4e599:
      if (cVar6 != '\0') {
        FVar12 = (ForElementType<FToolMenuVisibilityChoice>)&local_188;
        if (local_188.SecondaryData != (ForElementType<FToolMenuVisibilityChoice>)0x0) {
          FVar12 = local_188.SecondaryData;
        }
        if ((ulonglong)FVar12 <= local_150) {
          FVar12 = (ForElementType<FToolMenuVisibilityChoice>)&local_188;
          if (local_188.SecondaryData != (ForElementType<FToolMenuVisibilityChoice>)0x0) {
            FVar12 = local_188.SecondaryData;
          }
          if (((FToolMenuVisibilityChoice *)local_150 <
               (FToolMenuVisibilityChoice *)((longlong)FVar12 + (longlong)local_154 * 0x28)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TAttribute<EVisibility> *)(*pcVar3)();
            return pTVar7;
          }
        }
        if (local_158 == local_154) {
          local_158 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FToolMenuVisibilityChoice>_>
                                (0x828,&local_188,&local_154);
        }
        bVar4 = local_130;
        uVar17 = (ulonglong)local_130;
        lVar8 = (longlong)local_158;
        FVar12 = (ForElementType<FToolMenuVisibilityChoice>)&local_188;
        if (local_188.SecondaryData != (ForElementType<FToolMenuVisibilityChoice>)0x0) {
          FVar12 = local_188.SecondaryData;
        }
        local_158 = local_158 + 1;
        ((uchar *)((longlong)FVar12 + 0x20))[lVar8 * 0x28] = local_130;
        pFVar9 = (FToolMenuVisibilityChoice *)((longlong)FVar12 + lVar8 * 0x28);
        if ((2 < bVar4) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xec,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TAttribute<EVisibility> *)(*pcVar3)();
          return pTVar7;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                      ::__l2::CopyConstructors)[uVar17] ==
            UE::Core::Private::TCopyConstructorCaller<TAttribute<bool>_>::Construct) {
          this = &(pFVar9->Value)._padding_;
          *(undefined1 *)&(pFVar9->Value)._padding_ = local_150[0];
          *(undefined1 *)((longlong)&(pFVar9->Value)._padding_ + 1) = local_150[1];
          *this = 0;
          (pFVar9->Value)._padding_ = 0;
          *(undefined4 *)&(pFVar9->Value)._padding_ = 0;
          TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
          CopyFrom<FDefaultDelegateUserPolicy>
                    ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)this,
                     (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)(local_150 + 8));
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                      ::__l2::CopyConstructors)[uVar17])(pFVar9,local_150);
        }
      }
    }
    uVar17 = (ulonglong)local_130;
    if ((2 < local_130) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TAttribute<EVisibility> *)(*pcVar3)();
      return pTVar7;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar17] ==
        UE::Core::Private::TDestructorCaller<TAttribute<bool>_>::Destruct) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_150 + 8));
      if (pvStack_140 != (void *)0x0) {
        FMemory::Free(pvStack_140);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(local_150 + 8));
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar17])(local_150);
    }
  }
  pFVar9 = &param_3->Visibility;
  uVar1 = (param_3->Visibility).Value.TypeIndex;
  pTVar10 = (TDelegateBase<FNotThreadSafeDelegateMode> *)pFVar9;
  if (uVar1 != '\0') {
    pTVar10 = pTVar18;
  }
  if (pTVar10 == (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
    pTVar10 = (TDelegateBase<FNotThreadSafeDelegateMode> *)pFVar9;
    if (uVar1 != '\x01') {
      pTVar10 = pTVar18;
    }
    if (pTVar10 == (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
      pTVar10 = (TDelegateBase<FNotThreadSafeDelegateMode> *)pFVar9;
      if (uVar1 != '\x02') {
        pTVar10 = pTVar18;
      }
      if (pTVar10 == (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) goto LAB_142c4e915;
      cVar6 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound(pTVar10);
    }
    else {
      cVar6 = pTVar10->field_0x1;
    }
  }
  else {
    cVar6 = pTVar10->field_0x1;
  }
  if (cVar6 != '\0') {
    FVar12 = (ForElementType<FToolMenuVisibilityChoice>)&local_188;
    if (local_188.SecondaryData != (ForElementType<FToolMenuVisibilityChoice>)0x0) {
      FVar12 = local_188.SecondaryData;
    }
    if ((ulonglong)FVar12 <= pFVar9) {
      FVar12 = (ForElementType<FToolMenuVisibilityChoice>)&local_188;
      if (local_188.SecondaryData != (ForElementType<FToolMenuVisibilityChoice>)0x0) {
        FVar12 = local_188.SecondaryData;
      }
      if ((pFVar9 < (FToolMenuVisibilityChoice *)((longlong)FVar12 + (longlong)local_154 * 0x28)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TAttribute<EVisibility> *)(*pcVar3)();
        return pTVar7;
      }
    }
    if (local_158 == local_154) {
      local_158 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FToolMenuVisibilityChoice>_>
                            (0x828,&local_188,&local_154);
    }
    FVar12 = (ForElementType<FToolMenuVisibilityChoice>)&local_188;
    if (local_188.SecondaryData != (ForElementType<FToolMenuVisibilityChoice>)0x0) {
      FVar12 = local_188.SecondaryData;
    }
    lVar8 = (longlong)local_158;
    local_158 = local_158 + 1;
    TVariant<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
    ::
    TVariant<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
              ((TVariant<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)((longlong)FVar12 + lVar8 * 0x28),&pFVar9->Value);
  }
LAB_142c4e915:
  if (param_5) {
    if (((param_3->Command).Object != (FUICommandInfo *)0x0) &&
       (param_3->bCommandIsKeybindOnly == false)) {
      local_280.Object = (FUICommandList *)0x0;
      local_280.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar11 = FToolMenuEntry::GetActionForCommand(param_3,&param_1->Context,&local_280);
      if (pFVar11 != (FUIAction *)0x0) {
        bVar5 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                          ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                           &pFVar11->IsActionVisibleDelegate);
        if (bVar5) {
          FToolMenuVisibilityChoice::FToolMenuVisibilityChoice
                    ((FToolMenuVisibilityChoice *)&local_a0,&pFVar11->IsActionVisibleDelegate);
          FVar12 = (ForElementType<FToolMenuVisibilityChoice>)&local_188;
          if (local_188.SecondaryData != (ForElementType<FToolMenuVisibilityChoice>)0x0) {
            FVar12 = local_188.SecondaryData;
          }
          if ((ulonglong)FVar12 <= &local_a0) {
            FVar12 = (ForElementType<FToolMenuVisibilityChoice>)&local_188;
            if (local_188.SecondaryData != (ForElementType<FToolMenuVisibilityChoice>)0x0) {
              FVar12 = local_188.SecondaryData;
            }
            if ((&local_a0 <
                 (TVariant<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
                  *)((longlong)FVar12 + (longlong)local_154 * 0x28)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar3 = (code *)swi(3);
              pTVar7 = (TAttribute<EVisibility> *)(*pcVar3)();
              return pTVar7;
            }
          }
          if (local_158 == local_154) {
            local_158 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FToolMenuVisibilityChoice>_>
                                  (0x828,&local_188,&local_154);
          }
          lVar8 = (longlong)local_158;
          FVar12 = (ForElementType<FToolMenuVisibilityChoice>)&local_188;
          if (local_188.SecondaryData != (ForElementType<FToolMenuVisibilityChoice>)0x0) {
            FVar12 = local_188.SecondaryData;
          }
          local_158 = local_158 + 1;
          TVariant<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
          ::
          TVariant<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
                    ((TVariant<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>
                      *)((longlong)FVar12 + lVar8 * 0x28),&local_a0);
          FToolMenuVisibilityChoice::~FToolMenuVisibilityChoice
                    ((FToolMenuVisibilityChoice *)&local_a0);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_280.SharedReferenceCount.ReferenceController);
    }
    if ((param_3->ToolBarData).ActionOverride.bIsSet == false) {
      ConvertUIAction((FUIAction *)local_270,param_3,&param_1->Context);
    }
    else {
      ConvertUIAction((FUIAction *)local_270,&(param_3->ToolBarData).ActionOverride.TypedValue,
                      &param_1->Context);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_228,&local_1a0);
    if (((local_218 == 0) || ((longlong *)local_228._8_8_ == (longlong *)0x0)) ||
       (cVar6 = (**(code **)(*(longlong *)local_228._8_8_ + 0x38))(), cVar6 == '\0')) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_1a0);
    if (bVar5) {
      local_128._0_2_ = 0x19;
      local_110 = 0;
      local_128._8_8_ = 0;
      pvStack_118 = (void *)0x0;
      local_108 = '\0';
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_128 + 8));
      if (pvStack_118 != (void *)0x0) {
        FMemory::Free(pvStack_118);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(local_128 + 8));
      local_128._0_8_ = (atomic<unsigned___int64>)0x0;
      local_128._8_8_ = (void *)0x0;
      pvStack_118 = (void *)((ulonglong)pvStack_118 & 0xffffffff00000000);
      TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_128,
                 (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_228);
      local_108 = 2;
      FVar12 = (ForElementType<FToolMenuVisibilityChoice>)&local_188;
      if (local_188.SecondaryData != (ForElementType<FToolMenuVisibilityChoice>)0x0) {
        FVar12 = local_188.SecondaryData;
      }
      if ((ulonglong)FVar12 <= local_128) {
        FVar12 = (ForElementType<FToolMenuVisibilityChoice>)&local_188;
        if (local_188.SecondaryData != (ForElementType<FToolMenuVisibilityChoice>)0x0) {
          FVar12 = local_188.SecondaryData;
        }
        if (((FToolMenuVisibilityChoice *)local_128 <
             (FToolMenuVisibilityChoice *)((longlong)FVar12 + (longlong)local_154 * 0x28)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TAttribute<EVisibility> *)(*pcVar3)();
          return pTVar7;
        }
      }
      if (local_158 == local_154) {
        local_158 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FToolMenuVisibilityChoice>_>
                              (0x828,&local_188,&local_154);
      }
      bVar4 = local_108;
      uVar17 = (ulonglong)local_108;
      lVar8 = (longlong)local_158;
      FVar12 = (ForElementType<FToolMenuVisibilityChoice>)&local_188;
      if (local_188.SecondaryData != (ForElementType<FToolMenuVisibilityChoice>)0x0) {
        FVar12 = local_188.SecondaryData;
      }
      local_158 = local_158 + 1;
      ((uchar *)((longlong)FVar12 + 0x20))[lVar8 * 0x28] = local_108;
      this_00 = (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)
                ((longlong)FVar12 + lVar8 * 0x28);
      if ((2 < bVar4) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xec,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TAttribute<EVisibility> *)(*pcVar3)();
        return pTVar7;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[uVar17] ==
          UE::Core::Private::
          TCopyConstructorCaller<TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::
          Construct) {
        *(undefined8 *)&this_00->field_0x0 = 0;
        *(undefined8 *)&this_00->field_0x8 = 0;
        *(undefined4 *)&this_00->field_0x10 = 0;
        TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>
                  (this_00,(TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_128);
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[uVar17])();
      }
      uVar17 = (ulonglong)local_108;
      if ((2 < local_108) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TAttribute<EVisibility> *)(*pcVar3)();
        return pTVar7;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar17] ==
          UE::Core::Private::
          TDestructorCaller<TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct) {
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_128);
        if ((void *)local_128._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_128._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_128);
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TAttribute<EVisibility>,TAttribute<bool>,TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar17])();
      }
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_228);
    if ((longlong *)local_228._8_8_ != (longlong *)0x0) {
      FMemory::Free((void *)local_228._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_228);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_240);
    if ((void *)local_240._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_240._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_240);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_258);
    if ((void *)local_258._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_258._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_258);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_270);
    if ((void *)local_270._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_270._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_270);
  }
  iVar16 = local_158;
  if (local_158 == 0) {
    __return_storage_ptr__->Value = (TEnumAsByte<EVisibility::Private>)0x19;
    __return_storage_ptr__->bIsSet = false;
    *(undefined8 *)&(__return_storage_ptr__->Getter).field_0x10 = 0;
    FVar12 = (ForElementType<FToolMenuVisibilityChoice>)&local_188;
    if (local_188.SecondaryData != (ForElementType<FToolMenuVisibilityChoice>)0x0) {
      FVar12 = local_188.SecondaryData;
    }
    *(undefined8 *)&__return_storage_ptr__->Getter = 0;
    *(undefined8 *)&(__return_storage_ptr__->Getter).field_0x8 = 0;
    iVar16 = 0;
  }
  else {
    if (local_158 == 1) {
      FVar12 = (ForElementType<FToolMenuVisibilityChoice>)&local_188;
      if (local_188.SecondaryData != (ForElementType<FToolMenuVisibilityChoice>)0x0) {
        FVar12 = local_188.SecondaryData;
      }
      FToolMenuVisibilityChoice::ToVisibilityAttribute
                ((FToolMenuVisibilityChoice *)FVar12,__return_storage_ptr__);
    }
    else {
      local_d8.SecondaryData = (ForElementType<FToolMenuVisibilityChoice>)0x0;
      FVar12 = (ForElementType<FToolMenuVisibilityChoice>)&local_188;
      if (local_188.SecondaryData != (ForElementType<FToolMenuVisibilityChoice>)0x0) {
        FVar12 = local_188.SecondaryData;
      }
      local_a8 = local_158;
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FToolMenuVisibilityChoice>_>
                (0x28,8,local_158,0,&local_d8,local_158,&local_a4);
      FVar15 = (ForElementType<FToolMenuVisibilityChoice>)&local_d8;
      if (local_d8.SecondaryData != (ForElementType<FToolMenuVisibilityChoice>)0x0) {
        FVar15 = local_d8.SecondaryData;
      }
      ConstructItems<FToolMenuVisibilityChoice,FToolMenuVisibilityChoice,int>
                ((void *)FVar15,(FToolMenuVisibilityChoice *)FVar12,iVar16);
      local_2b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_2b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_2b0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_2b8,(FWriteAccessScope *)&local_1d8);
      local_1c0 = &local_2b0;
      puVar13 = UE::Core::Private::DelegateAllocate(0x50,&local_2b0);
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = &
                   ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar14 = FDelegateHandle::GenerateNewID();
        puVar13[2] = uVar14;
        *puVar13 = &TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::CalculateToolbarVisibility'::`2'::<lambda_2>_>
                    ::_vftable_;
        puVar13[8] = 0;
        if (local_d8.SecondaryData == (ForElementType<FToolMenuVisibilityChoice>)0x0) {
          memmove(puVar13 + 3,&local_d8,0x28);
        }
        if ((void *)puVar13[8] != (void *)0x0) {
          FMemory::Free((void *)puVar13[8]);
        }
        *(ForElementType<FToolMenuVisibilityChoice> *)(puVar13 + 8) = local_d8.SecondaryData;
        local_d8.SecondaryData = (ForElementType<FToolMenuVisibilityChoice>)0x0;
        *(int *)(puVar13 + 9) = local_a8;
        *(int *)((longlong)puVar13 + 0x4c) = local_a4;
        local_a8 = 0;
        local_a4 = 1;
      }
      if (local_1d8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d8.Accessor,&local_1d8);
      }
      __return_storage_ptr__->Value = (TEnumAsByte<EVisibility::Private>)0x19;
      __return_storage_ptr__->bIsSet = true;
      *(undefined8 *)&__return_storage_ptr__->Getter = 0;
      *(undefined8 *)&(__return_storage_ptr__->Getter).field_0x8 = 0;
      *(undefined4 *)&(__return_storage_ptr__->Getter).field_0x10 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_2b8,(FWriteAccessScope *)&local_208);
      pvVar2 = *(void **)&(__return_storage_ptr__->Getter).field_0x8;
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
      *(ForElementType<TAlignedBytes<16,16>_> *)&(__return_storage_ptr__->Getter).field_0x8 =
           local_2b0.DelegateAllocator;
      *(int *)&(__return_storage_ptr__->Getter).field_0x10 = local_2b0.DelegateSize;
      local_2b0.DelegateSize = 0;
      local_2b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      if (local_208.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_208.Accessor,&local_208);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_2b8,(FWriteAccessScope *)&local_1f0);
      if ((local_2b0.DelegateSize != 0) &&
         (local_2b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_2b0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_2b0,0,0,0x10);
        local_2b0.DelegateSize = 0;
      }
      if (local_1f0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1f0.Accessor,&local_1f0);
      }
      if (local_2b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_2b0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2b8.AccessDetector);
      FVar12 = (ForElementType<FToolMenuVisibilityChoice>)&local_d8;
      if (local_d8.SecondaryData != (ForElementType<FToolMenuVisibilityChoice>)0x0) {
        FVar12 = local_d8.SecondaryData;
      }
      DestructItems<FToolMenuVisibilityChoice,int>((FToolMenuVisibilityChoice *)FVar12,local_a8);
      if (local_d8.SecondaryData != (ForElementType<FToolMenuVisibilityChoice>)0x0) {
        FMemory::Free((void *)local_d8.SecondaryData);
      }
    }
    FVar12 = (ForElementType<FToolMenuVisibilityChoice>)&local_188;
    iVar16 = local_158;
    if (local_188.SecondaryData != (ForElementType<FToolMenuVisibilityChoice>)0x0) {
      FVar12 = local_188.SecondaryData;
    }
  }
  DestructItems<FToolMenuVisibilityChoice,int>((FToolMenuVisibilityChoice *)FVar12,iVar16);
  if (local_188.SecondaryData != (ForElementType<FToolMenuVisibilityChoice>)0x0) {
    FMemory::Free((void *)local_188.SecondaryData);
  }
  return __return_storage_ptr__;
}

// CanSafelyRouteCall @ 142c4f300

bool __cdecl UToolMenus::CanSafelyRouteCall(void)

{
  uint *puVar1;
  FTlsAutoCleanup *pFVar2;
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *local_10;
  
  puVar1 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar2 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar1);
  return *(char *)(pFVar2 + 4) == '\0';
}

// CleanupStaleWidgets @ 142c4f430

void __thiscall UToolMenus::CleanupStaleWidgets(UToolMenus *this)

{
  ForAnyElementType *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 local_a8 [32];
  longlong local_88;
  TSet<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>,FDefaultSetAllocator>
  *pTStack_80;
  longlong *local_78;
  undefined1 auStack_70 [16];
  uint uStack_60;
  uint uStack_5c;
  longlong local_58;
  TSet<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>,FDefaultSetAllocator>
  *pTStack_50;
  TSet<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>,FDefaultSetAllocator>
  *local_48;
  char local_40;
  char cStack_3f;
  
  bVar5 = false;
  TSet<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_a8,
             (TSet<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>,FDefaultSetAllocator>
              *)&this->GeneratedMenuWidgets);
  local_40 = '\0';
  cStack_3f = '\0';
  stack0xffffffffffffff98 = local_a8._16_16_;
  local_78 = (longlong *)local_a8._0_8_;
  auStack_70._0_8_ = local_a8._8_8_;
  local_58 = local_88;
  pTStack_50 = pTStack_80;
  uVar8 = local_a8._24_8_ >> 0x20;
  local_48 = (TSet<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>,FDefaultSetAllocator>
              *)&this->GeneratedMenuWidgets;
  if (local_a8._28_4_ < *(int *)(local_a8._16_8_ + 0x18)) {
    do {
      lVar11 = (longlong)(int)uVar8 * 0x20 + *local_78;
      if ((*(longlong *)(lVar11 + 8) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = *(ForAnyElementType **)(lVar11 + 8);
      for (uVar9 = 0; (-1 < (int)uVar9 && ((int)uVar9 < *(int *)&pFVar1[1].Data)); uVar9 = uVar9 + 1
          ) {
        if (((int)uVar9 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar10 = pFVar1->Data;
        lVar12 = (longlong)(int)uVar9 * 0x10;
        if ((*(longlong *)(pFVar10 + lVar12) == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = *(longlong *)(pFVar10 + lVar12);
        if (((*(longlong *)(lVar2 + 8) == 0) || (lVar2 = *(longlong *)(lVar2 + 0x10), lVar2 == 0))
           || (*(int *)(lVar2 + 8) < 1)) {
          bVar5 = true;
          uVar6 = 0;
          if ((int)uVar9 < *(int *)&pFVar1[1].Data) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar10 = pFVar1->Data + lVar12;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<1> **)(pFVar10 + 8));
          iVar7 = *(int *)&pFVar1[1].Data + ~uVar9;
          if (iVar7 != 0) {
            memmove(pFVar10,pFVar10 + 0x10,(longlong)iVar7 << 4);
          }
          *(int *)&pFVar1[1].Data = *(int *)&pFVar1[1].Data + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,pFVar1,*(int *)&pFVar1[1].Data,(int *)((longlong)&pFVar1[1].Data + 4));
          uVar9 = uVar9 - 1;
        }
      }
      if ((*(longlong *)(lVar11 + 8) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(int *)(*(longlong *)(lVar11 + 8) + 8) == 0) {
        bVar5 = true;
        TSet<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_50,uStack_5c);
        local_40 = '\x01';
      }
      uStack_60 = uStack_60 & ~auStack_70._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_70);
      uVar8 = (ulonglong)uStack_5c;
    } while ((int)uStack_5c < *(int *)(auStack_70._8_8_ + 0x18));
    if ((local_40 != '\0') && (cStack_3f != '\0')) {
      uVar9 = *(int *)&(local_48->Elements).field_0x8 - *(int *)&(local_48->Elements).field_0x34;
      if (uVar9 < 4) {
        iVar7 = 1;
      }
      else {
        uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar7 = 1 << ((byte)lVar11 & 0x1f);
      }
      if (((0 < (int)uVar9) && (local_48->HashSize < iVar7)) || (iVar7 < local_48->HashSize)) {
        local_48->HashSize = iVar7;
        TSet<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>,FDefaultSetAllocator>
        ::Rehash(local_48);
      }
    }
    if (((bVar5) && (this->bCleanupStaleWidgetsNextTickGC != false)) &&
       (bVar5 = (*IsAsyncLoading)(), !bVar5)) {
      CollectGarbage(RF_NoFlags,true);
    }
  }
  return;
}

// CleanupStaleWidgetsNextTick @ 142c4f7d0

void __thiscall UToolMenus::CleanupStaleWidgetsNextTick(UToolMenus *this,bool param_1)

{
  this->bCleanupStaleWidgetsNextTick = true;
  if (param_1) {
    this->bCleanupStaleWidgetsNextTickGC = true;
  }
  SetNextTickTimer(this);
  return;
}

// CollectHierarchy @ 142c4f910

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UToolMenu_*,TSizedDefaultAllocator<32>_> * __thiscall
UToolMenus::CollectHierarchy
          (UToolMenus *this,TArray<UToolMenu_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FName param_1,
          TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
          *param_2)

{
  longlong lVar1;
  TObjectPtr<UToolMenu>_u_0 *pTVar2;
  undefined1 *puVar3;
  FName FVar4;
  TObjectPtr<UToolMenu>_u_0 TVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  TObjectPtr<UToolMenu> *pTVar11;
  TArray<UToolMenu_*,TSizedDefaultAllocator<32>_> *pTVar12;
  FName *pFVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  FName *pFVar16;
  ForAnyElementType FVar17;
  FScriptContainerElement *pFVar18;
  FName *pFVar19;
  FName local_res18;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *local_res20;
  undefined1 local_b8 [8];
  ForAnyElementType local_b0;
  undefined8 local_a8;
  ForAnyElementType local_a0;
  undefined8 local_98;
  FName local_90;
  TObjectPtr<UToolMenu>_u_0 local_88;
  FName local_80;
  undefined8 local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  
  pFVar16 = (FName *)0x0;
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_a8 = 0;
  local_98 = 0;
  pFVar13 = pFVar16;
  pFVar19 = pFVar16;
  local_res18 = param_1;
  local_res20 = param_2;
  do {
    iVar10 = (int)pFVar13;
    local_90 = param_1;
    if (param_1 == (FName)0x0) {
      if (0 < iVar10 / 2) {
        pFVar18 = local_b0.Data + (longlong)(iVar10 + -1) * 8;
        do {
          uVar6 = *(undefined8 *)(local_b0.Data + (longlong)pFVar16 * 8);
          *(undefined8 *)(local_b0.Data + (longlong)pFVar16 * 8) = *(undefined8 *)pFVar18;
          pFVar16 = (FName *)((longlong)&(pFVar16->ComparisonIndex).Value + 1);
          *(undefined8 *)pFVar18 = uVar6;
          pFVar18 = pFVar18 + -8;
        } while ((longlong)pFVar16 < (longlong)(iVar10 / 2));
        iVar10 = (int)local_a8;
      }
      (__return_storage_ptr__->AllocatorInstance).Data = local_b0.Data;
      __return_storage_ptr__->ArrayMax = local_a8._4_4_;
      local_a8 = 0;
      local_b0.Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = iVar10;
      if ((FName *)local_a0.Data != (FName *)0x0) {
        FMemory::Free(local_a0.Data);
      }
joined_r0x000142c4fdf2:
      if ((TObjectPtr<UToolMenu>_u_0 *)local_b0.Data != (TObjectPtr<UToolMenu>_u_0 *)0x0) {
        FMemory::Free(local_b0.Data);
      }
      return __return_storage_ptr__;
    }
    for (FVar17.Data = local_a0.Data; local_80 = param_1,
        (FName *)FVar17.Data != (FName *)(local_a0.Data + (longlong)(int)pFVar19 * 8);
        FVar17.Data = FVar17.Data + 8) {
      if (*(FName *)FVar17.Data == param_1) goto LAB_142c4fb03;
    }
    uVar9 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    if (*(int *)&(this->MenuSubstitutionsDuringGenerate).field_0x8 !=
        *(int *)&(this->MenuSubstitutionsDuringGenerate).field_0x34) {
      puVar3 = *(undefined1 **)&(this->MenuSubstitutionsDuringGenerate).field_0x40;
      puVar14 = &(this->MenuSubstitutionsDuringGenerate).field_0x38;
      if (puVar3 != (undefined1 *)0x0) {
        puVar14 = puVar3;
      }
      iVar10 = *(int *)(puVar14 +
                       (ulonglong)
                       (*(int *)&(this->MenuSubstitutionsDuringGenerate).field_0x48 - 1U &
                       param_1.Number + uVar9) * 4);
      if (iVar10 != -1) {
        do {
          lVar1 = *(longlong *)&this->MenuSubstitutionsDuringGenerate + (longlong)iVar10 * 0x18;
          if (*(FName *)(*(longlong *)&this->MenuSubstitutionsDuringGenerate +
                        (longlong)iVar10 * 0x18) == param_1) {
            pFVar13 = (FName *)(lVar1 + 8);
            if (lVar1 == 0) {
              pFVar13 = pFVar16;
            }
            param_2 = local_res20;
            if (pFVar13 != (FName *)0x0) {
              iVar10 = (int)local_a8;
              uVar15 = (ulonglong)(int)local_a8;
              pTVar2 = (TObjectPtr<UToolMenu>_u_0 *)(local_b0.Data + uVar15 * 8);
              FVar17.Data = local_b0.Data;
              goto LAB_142c4fa30;
            }
            break;
          }
          iVar10 = *(int *)(lVar1 + 0x10);
        } while (iVar10 != -1);
      }
    }
LAB_142c4fb03:
    pTVar11 = TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
              ::Find((TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
                      *)&this->Menus,local_80);
    if (pTVar11 == (TObjectPtr<UToolMenu> *)0x0) {
      local_88.DebugPtr = (UToolMenu *)0x0;
LAB_142c4fce1:
      if (2 < (byte)LogToolMenus._0_1_) {
        ::FName::ToString(&local_res18,&local_50);
        ::FName::ToString(&local_80,&local_60);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogToolMenus);
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
      }
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = 0;
      __return_storage_ptr__->ArrayMax = 0;
      if ((FName *)local_a0.Data != (FName *)0x0) {
        FMemory::Free(local_a0.Data);
      }
      goto joined_r0x000142c4fdf2;
    }
    TVar5.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar11->field0_0x0).DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar5.DebugPtr != (UToolMenu *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
    }
    local_88.ObjectPtr.field0_0x0 = TVar5.ObjectPtr.field0_0x0;
    if (TVar5.DebugPtr == (UToolMenu *)0x0) goto LAB_142c4fce1;
    for (FVar17.Data = local_b0.Data;
        (TObjectPtr<UToolMenu>_u_0 *)FVar17.Data !=
        (TObjectPtr<UToolMenu>_u_0 *)(local_b0.Data + (longlong)(int)local_a8 * 8);
        FVar17.Data = FVar17.Data + 8) {
      if (*(UToolMenu **)FVar17.Data == TVar5.DebugPtr) {
        if (2 < (byte)LogToolMenus._0_1_) {
          ::FName::ToString(&local_res18,&local_70);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogToolMenus);
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
        }
        (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        __return_storage_ptr__->ArrayNum = 0;
        __return_storage_ptr__->ArrayMax = 0;
        if ((FName *)local_a0.Data != (FName *)0x0) {
          FMemory::Free(local_a0.Data);
        }
        goto joined_r0x000142c4fdf2;
      }
    }
    iVar10 = (int)local_a8;
    if ((local_b0.Data <= &local_88) &&
       (&local_88 < (TObjectPtr<UToolMenu>_u_0 *)(local_b0.Data + (longlong)local_a8._4_4_ * 8))) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TArray<UToolMenu_*,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
        return pTVar12;
      }
      iVar10 = (int)local_a8;
    }
    if (iVar10 == local_a8._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_b0,(int *)((longlong)&local_a8 + 4));
    }
    local_a8 = CONCAT44(local_a8._4_4_,iVar10 + 1U);
    ((TObjectPtr<UToolMenu>_u_0 *)(local_b0.Data + (longlong)iVar10 * 8))->DebugPtr =
         (UToolMenu *)local_88;
    if ((local_88.DebugPtr)->bRegistered == false) {
      pFVar13 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                        *)param_2,local_90);
      if (pFVar13 == (FName *)0x0) {
        pFVar13 = (FName *)(local_a8 & 0xffffffff);
        param_1.ComparisonIndex.Value = 0;
        param_1.Number = 0;
        pFVar19 = (FName *)(local_98 & 0xffffffff);
        local_78 = 0;
      }
      else {
        param_1 = *pFVar13;
        pFVar13 = (FName *)(local_a8 & 0xffffffff);
        pFVar19 = (FName *)(local_98 & 0xffffffff);
      }
    }
    else {
      param_1 = (local_88.DebugPtr)->MenuParent;
      pFVar13 = (FName *)(ulonglong)(iVar10 + 1U);
      pFVar19 = (FName *)(local_98 & 0xffffffff);
    }
  } while( true );
LAB_142c4fa30:
  if ((int)uVar15 != iVar10) {
    local_b8[0] = 0;
    `TCheckedPointerIterator<UToolMenu_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_b8)
    ;
    uVar15 = local_a8 & 0xffffffff;
  }
  FVar4 = *pFVar13;
  if ((TObjectPtr<UToolMenu>_u_0 *)FVar17.Data == pTVar2) {
    local_80 = FVar4;
    if (((local_a0.Data <= &local_90) &&
        (&local_90 < (FName *)(local_a0.Data + (longlong)local_98._4_4_ * 8))) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TArray<UToolMenu_*,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
      return pTVar12;
    }
    iVar10 = (int)local_98;
    if ((int)local_98 == local_98._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&local_a0,(int *)((longlong)&local_98 + 4));
    }
    local_98 = CONCAT44(local_98._4_4_,iVar10 + 1);
    *(FName *)(local_a0.Data + (longlong)iVar10 * 8) = local_90;
    param_2 = local_res20;
    goto LAB_142c4fb03;
  }
  param_2 = local_res20;
  if ((*(UToolMenu **)FVar17.Data)->MenuName == FVar4) goto LAB_142c4fb03;
  FVar17.Data = FVar17.Data + 8;
  goto LAB_142c4fa30;
}

// CollectHierarchy @ 142c4fe20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<UToolMenu_*,TSizedDefaultAllocator<32>_> * __thiscall
UToolMenus::CollectHierarchy
          (UToolMenus *this,TArray<UToolMenu_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FName param_1)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  void *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_3c = 0x80;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_34 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  local_38 = 0xffffffff;
  CollectHierarchy(this,__return_storage_ptr__,param_1,
                   (TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                    *)local_68);
  local_20 = 0;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// ConvertScriptObjectToUIAction @ 142c50860

FUIAction * __cdecl
UToolMenus::ConvertScriptObjectToUIAction
          (FUIAction *__return_storage_ptr__,UToolMenuEntryScript *param_1,FToolMenuContext *param_2
          )

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FName *pFVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FUIAction *pFVar8;
  UObject *this;
  UFunction *pUVar9;
  int *piVar10;
  ulonglong uVar11;
  FWeakObjectPtr local_res8;
  UToolMenuEntryScript *local_res10;
  UToolMenuEntryScript *local_res20;
  FDestructionSentinel local_228;
  undefined1 *local_210;
  FDestructionSentinel local_208;
  undefined1 *local_1f0;
  FDestructionSentinel local_1e8;
  undefined1 *local_1d0;
  FDestructionSentinel local_1c8;
  undefined1 *local_1b0;
  FName local_1a8;
  FName local_1a0;
  FName local_198;
  FName local_190;
  FWeakObjectPtr local_188;
  FToolMenuContext local_180;
  FWeakObjectPtr local_118;
  FToolMenuContext local_110;
  FWeakObjectPtr local_a8;
  FToolMenuContext local_a0;
  
  FUIAction::FUIAction(__return_storage_ptr__);
  if (param_1 == (UToolMenuEntryScript *)0x0) {
    return __return_storage_ptr__;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  uVar11 = (ulonglong)_tls_index;
  plVar1 = (longlong *)param_1->_padding_;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x9d4c) < ::_TSS0)
  {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar5 = ::FName::FName(&local_1a8,7,L"Execute",FNAME_Add);
      ExecuteName = *pFVar5;
      _Init_thread_footer(&::_TSS0);
    }
  }
  cVar3 = (**(code **)(*plVar1 + 0x3d8))(plVar1,ExecuteName);
  if (cVar3 != '\0') {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
               (FWriteAccessScope *)&local_228);
    local_210 = &(__return_storage_ptr__->ExecuteAction).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x90,(FDelegateAllocation *)local_210);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__UFToolMenuContext____6B_
      ;
      FToolMenuContext::FToolMenuContext((FToolMenuContext *)(puVar6 + 1),param_2);
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[0xe] = uVar7;
      *puVar6 = &
                ___7__TBaseUFunctionDelegateInstance_VUToolMenuEntryScript____A6AXXZUFDefaultDelegateUserPolicy__UFToolMenuContext____6B_
      ;
      *(FName *)(puVar6 + 0x10) = ExecuteName;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      puVar6[0x11] = 0;
      local_res20 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 0x11),(FObjectPtr)&local_res20);
      if (ExecuteName == (FName)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFunctionName != NAME_None",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x56,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FUIAction *)(*pcVar2)();
          return pFVar8;
        }
      }
      this = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar6 + 0x11));
      pUVar9 = UObject::FindFunctionChecked(this,ExecuteName);
      puVar6[0xf] = pUVar9;
    }
    if (local_228.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_228.Accessor,&local_228);
    }
  }
  piVar10 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x9d4c);
  if (*piVar10 < ::_TSS1) {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      pFVar5 = ::FName::FName(&local_1a0,10,L"CanExecute",FNAME_Add);
      CanExecuteName = *pFVar5;
      _Init_thread_footer(&::_TSS1);
    }
  }
  cVar3 = (**(code **)(*plVar1 + 0x3d8))(plVar1,CanExecuteName);
  if (cVar3 != '\0') {
    local_188 = local_res8;
    FToolMenuContext::FToolMenuContext(&local_180,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &__return_storage_ptr__->CanExecuteAction,(FWriteAccessScope *)&local_208);
    local_1f0 = &(__return_storage_ptr__->CanExecuteAction).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x88,(FDelegateAllocation *)local_1f0);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertScriptObjectToUIAction'::`11'::<lambda_1>_>
                 ::_vftable_;
      *(FWeakObjectPtr *)(puVar6 + 3) = local_188;
      FToolMenuContext::FToolMenuContext((FToolMenuContext *)(puVar6 + 4),&local_180);
    }
    if (local_208.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_208.Accessor,&local_208);
    }
    FToolMenuContext::~FToolMenuContext(&local_180);
  }
  if (*piVar10 < ::_TSS2) {
    _Init_thread_header(&::_TSS2);
    if (::_TSS2 == -1) {
      pFVar5 = ::FName::FName(&local_198,0xd,L"GetCheckState",FNAME_Add);
      GetCheckStateName = *pFVar5;
      _Init_thread_footer(&::_TSS2);
    }
  }
  cVar3 = (**(code **)(*plVar1 + 0x3d8))(plVar1,GetCheckStateName);
  if (cVar3 != '\0') {
    local_118 = local_res8;
    FToolMenuContext::FToolMenuContext(&local_110,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &__return_storage_ptr__->GetActionCheckState,(FWriteAccessScope *)&local_1e8);
    local_1d0 = &(__return_storage_ptr__->GetActionCheckState).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x88,(FDelegateAllocation *)local_1d0);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertScriptObjectToUIAction'::`14'::<lambda_2>_>
                 ::_vftable_;
      *(FWeakObjectPtr *)(puVar6 + 3) = local_118;
      FToolMenuContext::FToolMenuContext((FToolMenuContext *)(puVar6 + 4),&local_110);
    }
    if (local_1e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e8.Accessor,&local_1e8);
    }
    FToolMenuContext::~FToolMenuContext(&local_110);
  }
  if (*piVar10 < ::_TSS3) {
    _Init_thread_header(&::_TSS3);
    if (::_TSS3 == -1) {
      pFVar5 = ::FName::FName(&local_190,9,L"IsVisible",FNAME_Add);
      IsVisibleName = *pFVar5;
      _Init_thread_footer(&::_TSS3);
    }
  }
  cVar3 = (**(code **)(*plVar1 + 0x3d8))(plVar1,IsVisibleName);
  if (cVar3 != '\0') {
    local_a8 = local_res8;
    FToolMenuContext::FToolMenuContext(&local_a0,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &__return_storage_ptr__->IsActionVisibleDelegate,(FWriteAccessScope *)&local_1c8);
    local_1b0 = &(__return_storage_ptr__->IsActionVisibleDelegate).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x88,(FDelegateAllocation *)local_1b0);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertScriptObjectToUIAction'::`17'::<lambda_3>_>
                 ::_vftable_;
      *(FWeakObjectPtr *)(puVar6 + 3) = local_a8;
      FToolMenuContext::FToolMenuContext((FToolMenuContext *)(puVar6 + 4),&local_a0);
    }
    if (local_1c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c8.Accessor,&local_1c8);
    }
    FToolMenuContext::~FToolMenuContext(&local_a0);
  }
  return __return_storage_ptr__;
}

// ConvertUIAction @ 142c50df0

FUIAction * __cdecl
UToolMenus::ConvertUIAction
          (FUIAction *__return_storage_ptr__,FToolDynamicUIAction *param_1,FToolMenuContext *param_2
          )

{
  bool bVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FReadAccessScope local_d8;
  FDestructionSentinel local_c0;
  undefined1 *local_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a0;
  undefined8 local_98;
  undefined8 local_90;
  FToolMenuContext local_88;
  
  FUIAction::FUIAction(__return_storage_ptr__);
  bVar1 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)param_1);
  if (bVar1) {
    local_a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_d8);
    local_98 = *(undefined8 *)&(param_1->ExecuteAction).field_0x8;
    local_90 = *(undefined8 *)&(param_1->ExecuteAction).field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_d8);
    FToolMenuContext::FToolMenuContext(&local_88,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
               (FWriteAccessScope *)&local_c0);
    local_a8 = &(__return_storage_ptr__->ExecuteAction).field_0x8;
    puVar2 = UE::Core::Private::DelegateAllocate(0x98,(FDelegateAllocation *)local_a8);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertUIAction'::`5'::<lambda_1>_>
                 ::_vftable_;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_a0,&local_d8);
      puVar2[4] = local_98;
      puVar2[5] = local_90;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d8);
      FToolMenuContext::FToolMenuContext((FToolMenuContext *)(puVar2 + 6),&local_88);
    }
    if (local_c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
    }
    FToolMenuContext::~FToolMenuContext(&local_88);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
  }
  bVar1 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&param_1->CanExecuteAction);
  if (bVar1) {
    local_a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->CanExecuteAction,
               &local_d8);
    local_98 = *(undefined8 *)&(param_1->CanExecuteAction).field_0x8;
    local_90 = *(undefined8 *)&(param_1->CanExecuteAction).field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_d8);
    FToolMenuContext::FToolMenuContext(&local_88,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &__return_storage_ptr__->CanExecuteAction,(FWriteAccessScope *)&local_c0);
    local_a8 = &(__return_storage_ptr__->CanExecuteAction).field_0x8;
    puVar2 = UE::Core::Private::DelegateAllocate(0x98,(FDelegateAllocation *)local_a8);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertUIAction'::`8'::<lambda_2>_>
                 ::_vftable_;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_a0,&local_d8);
      puVar2[4] = local_98;
      puVar2[5] = local_90;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d8);
      FToolMenuContext::FToolMenuContext((FToolMenuContext *)(puVar2 + 6),&local_88);
    }
    if (local_c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
    }
    FToolMenuContext::~FToolMenuContext(&local_88);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
  }
  bVar1 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&param_1->GetActionCheckState);
  if (bVar1) {
    local_a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->GetActionCheckState,&local_d8);
    local_98 = *(undefined8 *)&(param_1->GetActionCheckState).field_0x8;
    local_90 = *(undefined8 *)&(param_1->GetActionCheckState).field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_d8);
    FToolMenuContext::FToolMenuContext(&local_88,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &__return_storage_ptr__->GetActionCheckState,(FWriteAccessScope *)&local_c0);
    local_a8 = &(__return_storage_ptr__->GetActionCheckState).field_0x8;
    puVar2 = UE::Core::Private::DelegateAllocate(0x98,(FDelegateAllocation *)local_a8);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertUIAction'::`11'::<lambda_3>_>
                 ::_vftable_;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_a0,&local_d8);
      puVar2[4] = local_98;
      puVar2[5] = local_90;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d8);
      FToolMenuContext::FToolMenuContext((FToolMenuContext *)(puVar2 + 6),&local_88);
    }
    if (local_c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
    }
    FToolMenuContext::~FToolMenuContext(&local_88);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
  }
  bVar1 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                     &param_1->IsActionVisibleDelegate);
  if (bVar1) {
    local_a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->IsActionVisibleDelegate,&local_d8);
    local_98 = *(undefined8 *)&(param_1->IsActionVisibleDelegate).field_0x8;
    local_90 = *(undefined8 *)&(param_1->IsActionVisibleDelegate).field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_d8);
    FToolMenuContext::FToolMenuContext(&local_88,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &__return_storage_ptr__->IsActionVisibleDelegate,(FWriteAccessScope *)&local_c0);
    local_a8 = &(__return_storage_ptr__->IsActionVisibleDelegate).field_0x8;
    puVar2 = UE::Core::Private::DelegateAllocate(0x98,(FDelegateAllocation *)local_a8);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertUIAction'::`14'::<lambda_4>_>
                 ::_vftable_;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                (&local_a0,&local_d8);
      puVar2[4] = local_98;
      puVar2[5] = local_90;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d8);
      FToolMenuContext::FToolMenuContext((FToolMenuContext *)(puVar2 + 6),&local_88);
    }
    if (local_c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
    }
    FToolMenuContext::~FToolMenuContext(&local_88);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
  }
  return __return_storage_ptr__;
}

// ConvertUIAction @ 142c51210

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FUIAction * __cdecl
UToolMenus::ConvertUIAction
          (FUIAction *__return_storage_ptr__,FToolMenuEntry *param_1,FToolMenuContext *param_2)

{
  TOptional<FToolUIAction> *pTVar1;
  TOptional<FToolDynamicUIAction> *pTVar2;
  int iVar3;
  UToolMenuEntryScript *pUVar4;
  longlong *plVar5;
  FName FVar6;
  char cVar7;
  int iVar8;
  FUIAction *pFVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  FDestructionSentinel local_b0;
  FDelegateAllocation *local_98;
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  EUIActionRepeatMode local_30;
  
  FUIAction::FUIAction(__return_storage_ptr__);
  pUVar4 = (param_1->ScriptObject).field0_0x0.DebugPtr;
  if (pUVar4 == (UToolMenuEntryScript *)0x0) {
    if (((param_1->Action).ToolAction.bIsSet == false) ||
       (pTVar1 = &(param_1->Action).ToolAction, pTVar1 == (TOptional<FToolUIAction> *)0x0)) {
      if (((param_1->Action).DynamicToolAction.bIsSet == false) ||
         (pTVar2 = &(param_1->Action).DynamicToolAction,
         pTVar2 == (TOptional<FToolDynamicUIAction> *)0x0)) {
        if (((param_1->Action).Action.bIsSet == false) ||
           (&param_1->Action == (FToolUIActionChoice *)0x0)) {
          FUIAction::FUIAction((FUIAction *)local_90);
        }
        else {
          FUIAction::FUIAction((FUIAction *)local_90,(FUIAction *)&param_1->Action);
        }
      }
      else {
        ConvertUIAction((FUIAction *)local_90,&pTVar2->TypedValue,param_2);
      }
    }
    else {
      ConvertUIAction((FUIAction *)local_90,&pTVar1->TypedValue,param_2);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &__return_storage_ptr__->CanExecuteAction,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_78);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &__return_storage_ptr__->GetActionCheckState,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_60);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &__return_storage_ptr__->IsActionVisibleDelegate,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
  }
  else {
    pFVar9 = ConvertScriptObjectToUIAction((FUIAction *)local_90,pUVar4,param_2);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)pFVar9);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &__return_storage_ptr__->CanExecuteAction,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->CanExecuteAction);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &__return_storage_ptr__->GetActionCheckState,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->GetActionCheckState);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &__return_storage_ptr__->IsActionVisibleDelegate,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->IsActionVisibleDelegate);
    local_30 = pFVar9->RepeatMode;
  }
  __return_storage_ptr__->RepeatMode = local_30;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
  if ((void *)local_48._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_48._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_60);
  if ((void *)local_60._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_60._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_60);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_78);
  if ((void *)local_78._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_78._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
  if ((void *)local_90._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_90._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FReadAccessScope *)&local_b0);
  if (((*(int *)&(__return_storage_ptr__->ExecuteAction).field_0x10 == 0) ||
      (plVar5 = *(longlong **)&(__return_storage_ptr__->ExecuteAction).field_0x8,
      plVar5 == (longlong *)0x0)) || (cVar7 = (**(code **)(*plVar5 + 0x38))(), cVar7 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_b0);
    iVar3 = (param_1->StringExecuteAction).String.Data.ArrayNum;
    iVar8 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar8 = 0;
    }
    if (0 < iVar8) {
      FVar6 = param_1->Name;
      local_c8 = (undefined1  [8])0x0;
      local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_c0.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
                 (FWriteAccessScope *)&local_b0);
      local_98 = &local_c0;
      puVar10 = UE::Core::Private::DelegateAllocate(0xa8,&local_c0);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &
                   ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__UFToolMenuStringCommand__VFName__UFToolMenuContext____6B_
        ;
        *(EToolMenuStringCommandType *)(puVar10 + 1) = (param_1->StringExecuteAction).Type;
        *(FName *)((longlong)puVar10 + 0xc) = (param_1->StringExecuteAction).CustomType;
        ::FString::FString((FString *)(puVar10 + 3),&(param_1->StringExecuteAction).String);
        *(FName *)(puVar10 + 5) = FVar6;
        FToolMenuContext::FToolMenuContext((FToolMenuContext *)(puVar10 + 6),param_2);
        uVar11 = FDelegateHandle::GenerateNewID();
        puVar10[0x13] = uVar11;
        *puVar10 = &
                   ___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__UFToolMenuStringCommand__VFName__UFToolMenuContext____6B_
        ;
        puVar10[0x14] = ExecuteStringCommand;
      }
      if (local_b0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
                 (FWriteAccessScope *)&local_b0);
      if ((local_c0.DelegateSize != 0) &&
         (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_c0,0,0,0x10);
        local_c0.DelegateSize = 0;
      }
      if (local_b0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
      }
      if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_c0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_c8);
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_b0);
  }
  return __return_storage_ptr__;
}

// ConvertUIAction @ 142c51580

FUIAction * __cdecl
UToolMenus::ConvertUIAction
          (FUIAction *__return_storage_ptr__,FToolUIAction *param_1,FToolMenuContext *param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FDestructionSentinel local_b8;
  undefined1 *local_a0;
  undefined1 local_98 [24];
  FToolMenuContext local_80;
  
  FUIAction::FUIAction(__return_storage_ptr__);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FReadAccessScope *)&local_b8);
  if ((*(int *)&(param_1->ExecuteAction).field_0x10 == 0) ||
     (plVar1 = *(longlong **)&(param_1->ExecuteAction).field_0x8, plVar1 == (longlong *)0x0)) {
LAB_142c515dc:
    bVar2 = false;
  }
  else {
    cVar3 = (**(code **)(*plVar1 + 0x38))();
    if (cVar3 == '\0') goto LAB_142c515dc;
    bVar2 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_b8);
  if (bVar2) {
    TDelegate<void___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy> *)
               local_98,&param_1->ExecuteAction);
    FToolMenuContext::FToolMenuContext(&local_80,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
               (FWriteAccessScope *)&local_b8);
    local_a0 = &(__return_storage_ptr__->ExecuteAction).field_0x8;
    puVar4 = UE::Core::Private::DelegateAllocate(0x98,(FDelegateAllocation *)local_a0);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertUIAction'::`5'::<lambda_1>_>
                 ::_vftable_;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar4 + 3),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
      FToolMenuContext::FToolMenuContext((FToolMenuContext *)(puVar4 + 6),&local_80);
    }
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    FToolMenuContext::~FToolMenuContext(&local_80);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
    if ((void *)local_98._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_98._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_98);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->CanExecuteAction,
             (FReadAccessScope *)&local_b8);
  if ((*(int *)&(param_1->CanExecuteAction).field_0x10 == 0) ||
     (plVar1 = *(longlong **)&(param_1->CanExecuteAction).field_0x8, plVar1 == (longlong *)0x0)) {
LAB_142c516cb:
    bVar2 = false;
  }
  else {
    cVar3 = (**(code **)(*plVar1 + 0x38))();
    if (cVar3 == '\0') goto LAB_142c516cb;
    bVar2 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_b8);
  if (bVar2) {
    TDelegate<bool___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<bool___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<bool___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy> *)
               local_98,&param_1->CanExecuteAction);
    FToolMenuContext::FToolMenuContext(&local_80,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &__return_storage_ptr__->CanExecuteAction,(FWriteAccessScope *)&local_b8);
    local_a0 = &(__return_storage_ptr__->CanExecuteAction).field_0x8;
    puVar4 = UE::Core::Private::DelegateAllocate(0x98,(FDelegateAllocation *)local_a0);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertUIAction'::`8'::<lambda_2>_>
                 ::_vftable_;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar4 + 3),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
      FToolMenuContext::FToolMenuContext((FToolMenuContext *)(puVar4 + 6),&local_80);
    }
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    FToolMenuContext::~FToolMenuContext(&local_80);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
    if ((void *)local_98._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_98._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_98);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->GetActionCheckState
             ,(FReadAccessScope *)&local_b8);
  if ((*(int *)&(param_1->GetActionCheckState).field_0x10 == 0) ||
     (plVar1 = *(longlong **)&(param_1->GetActionCheckState).field_0x8, plVar1 == (longlong *)0x0))
  {
LAB_142c517be:
    bVar2 = false;
  }
  else {
    cVar3 = (**(code **)(*plVar1 + 0x38))();
    if (cVar3 == '\0') goto LAB_142c517be;
    bVar2 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_b8);
  if (bVar2) {
    TDelegate<enum_ECheckBoxState___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<enum_ECheckBoxState___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>
              (local_98,&param_1->GetActionCheckState);
    FToolMenuContext::FToolMenuContext(&local_80,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &__return_storage_ptr__->GetActionCheckState,(FWriteAccessScope *)&local_b8);
    local_a0 = &(__return_storage_ptr__->GetActionCheckState).field_0x8;
    puVar4 = UE::Core::Private::DelegateAllocate(0x98,(FDelegateAllocation *)local_a0);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &TBaseFunctorDelegateInstance<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertUIAction'::`11'::<lambda_3>_>
                 ::_vftable_;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar4 + 3),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
      FToolMenuContext::FToolMenuContext((FToolMenuContext *)(puVar4 + 6),&local_80);
    }
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    FToolMenuContext::~FToolMenuContext(&local_80);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
    if ((void *)local_98._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_98._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_98);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &param_1->IsActionVisibleDelegate,(FReadAccessScope *)&local_b8);
  if ((*(int *)&(param_1->IsActionVisibleDelegate).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(param_1->IsActionVisibleDelegate).field_0x8,
     plVar1 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar1 + 0x38))();
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_142c518b2;
    }
  }
  bVar2 = false;
LAB_142c518b2:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_b8);
  if (bVar2) {
    TDelegate<bool___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<bool___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<bool___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy> *)
               local_98,&param_1->IsActionVisibleDelegate);
    FToolMenuContext::FToolMenuContext(&local_80,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &__return_storage_ptr__->IsActionVisibleDelegate,(FWriteAccessScope *)&local_b8);
    local_a0 = &(__return_storage_ptr__->IsActionVisibleDelegate).field_0x8;
    puVar4 = UE::Core::Private::DelegateAllocate(0x98,(FDelegateAllocation *)local_a0);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &TBaseFunctorDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertUIAction'::`14'::<lambda_4>_>
                 ::_vftable_;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar4 + 3),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
      FToolMenuContext::FToolMenuContext((FToolMenuContext *)(puVar4 + 6),&local_80);
    }
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    FToolMenuContext::~FToolMenuContext(&local_80);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
    if ((void *)local_98._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_98._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_98);
  }
  return __return_storage_ptr__;
}

// ConvertUIAction @ 142c519a0

FUIAction * __cdecl
UToolMenus::ConvertUIAction
          (FUIAction *__return_storage_ptr__,FToolUIActionChoice *param_1,FToolMenuContext *param_2)

{
  if (((param_1->ToolAction).bIsSet != false) &&
     (&param_1->ToolAction != (TOptional<FToolUIAction> *)0x0)) {
    ConvertUIAction(__return_storage_ptr__,&(param_1->ToolAction).TypedValue,param_2);
    return __return_storage_ptr__;
  }
  if (((param_1->DynamicToolAction).bIsSet != false) &&
     (&param_1->DynamicToolAction != (TOptional<FToolDynamicUIAction> *)0x0)) {
    ConvertUIAction(__return_storage_ptr__,&(param_1->DynamicToolAction).TypedValue,param_2);
    return __return_storage_ptr__;
  }
  if ((param_1->Action).bIsSet != false) {
    FUIAction::FUIAction(__return_storage_ptr__,(FUIAction *)param_1);
    return __return_storage_ptr__;
  }
  FUIAction::FUIAction(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ConvertWidgetChoice @ 142c51a20

TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
UToolMenus::ConvertWidgetChoice
          (UToolMenus *this,
          TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
          *__return_storage_ptr__,FNewToolMenuChoice *param_1,FToolMenuContext *param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FDestructionSentinel local_b8;
  undefined1 *local_a0;
  undefined1 local_98 [8];
  ForAnyElementType local_90;
  int local_88;
  FToolMenuContext local_80;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->NewToolMenuWidget,
             (FReadAccessScope *)&local_b8);
  if (((*(int *)&(param_1->NewToolMenuWidget).field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(param_1->NewToolMenuWidget).field_0x8, plVar2 == (longlong *)0x0))
     || (cVar3 = (**(code **)(*plVar2 + 0x38))(), cVar3 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_b8);
  if (bVar4) {
    local_98 = (undefined1  [8])0x0;
    local_90.Data = (FScriptContainerElement *)0x0;
    local_88 = 0;
    TDelegate<TSharedRef<SWidget,1>___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<TSharedRef<SWidget,1>___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>
                *)local_98,&param_1->NewToolMenuWidget);
    FToolMenuContext::FToolMenuContext(&local_80,param_2);
    puVar1 = &__return_storage_ptr__->field_0x8;
    *(undefined8 *)puVar1 = 0;
    *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
    *(undefined8 *)__return_storage_ptr__ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
               (FWriteAccessScope *)&local_b8);
    local_a0 = puVar1;
    puVar5 = UE::Core::Private::DelegateAllocate(0x98,(FDelegateAllocation *)puVar1);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &
                ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertWidgetChoice'::`5'::<lambda_1>_>
                 ::_vftable_;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar5 + 3),
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
      FToolMenuContext::FToolMenuContext((FToolMenuContext *)(puVar5 + 6),&local_80);
    }
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    FToolMenuContext::~FToolMenuContext(&local_80);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_98,
               (FWriteAccessScope *)&local_b8);
    if ((local_88 != 0) && (local_90.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_90.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_90,0,0,0x10);
      local_88 = 0;
    }
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    if (local_90.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_98);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->NewToolMenu,
               (FReadAccessScope *)&local_b8);
    if (((*(int *)&(param_1->NewToolMenu).field_0x10 == 0) ||
        (plVar2 = *(longlong **)&(param_1->NewToolMenu).field_0x8, plVar2 == (longlong *)0x0)) ||
       (cVar3 = (**(code **)(*plVar2 + 0x38))(), cVar3 == '\0')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_b8);
    puVar1 = &__return_storage_ptr__->field_0x8;
    local_a0 = puVar1;
    if (bVar4) {
      local_98 = (undefined1  [8])0x0;
      local_90.Data = (FScriptContainerElement *)0x0;
      local_88 = 0;
      TDelegate<void___cdecl(UToolMenu_*),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(UToolMenu_*),FDefaultDelegateUserPolicy> *)local_98,
                 &param_1->NewToolMenu);
      FToolMenuContext::FToolMenuContext(&local_80,param_2);
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)puVar1 = 0;
      *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
                 (FWriteAccessScope *)&local_b8);
      puVar5 = UE::Core::Private::DelegateAllocate(0x98,(FDelegateAllocation *)puVar1);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &
                  ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar5[2] = uVar6;
        *puVar5 = &TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertWidgetChoice'::`9'::<lambda_2>_>
                   ::_vftable_;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar5 + 3),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
        FToolMenuContext::FToolMenuContext((FToolMenuContext *)(puVar5 + 6),&local_80);
      }
      if (local_b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
      }
      FToolMenuContext::~FToolMenuContext(&local_80);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_98,
                 (FWriteAccessScope *)&local_b8);
      if ((local_88 != 0) && (local_90.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_90.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_90,0,0,0x10);
        local_88 = 0;
      }
      if (local_b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
      }
      if (local_90.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_98);
    }
    else {
      bVar4 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->NewMenuLegacy);
      if (bVar4) {
        local_98 = (undefined1  [8])0x0;
        local_90.Data = (FScriptContainerElement *)0x0;
        local_88 = 0;
        TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>
                  ((TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)local_98,
                   &param_1->NewMenuLegacy);
        FToolMenuContext::FToolMenuContext(&local_80,param_2);
        *(undefined8 *)__return_storage_ptr__ = 0;
        *(undefined8 *)puVar1 = 0;
        *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
                   (FWriteAccessScope *)&local_b8);
        puVar5 = UE::Core::Private::DelegateAllocate(0x98,(FDelegateAllocation *)puVar1);
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = &
                    ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar6 = FDelegateHandle::GenerateNewID();
          puVar5[2] = uVar6;
          *puVar5 = &TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::ConvertWidgetChoice'::`13'::<lambda_3>_>
                     ::_vftable_;
          TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar5 + 3),
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
          FToolMenuContext::FToolMenuContext((FToolMenuContext *)(puVar5 + 6),&local_80);
        }
        if (local_b8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
        }
        FToolMenuContext::~FToolMenuContext(&local_80);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_98,
                   (FWriteAccessScope *)&local_b8);
        if ((local_88 != 0) && (local_90.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_90.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_90,0,0,0x10);
          local_88 = 0;
        }
        if (local_b8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
        }
        if (local_90.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_98);
      }
      else {
        *(undefined8 *)__return_storage_ptr__ = 0;
        *(undefined8 *)puVar1 = 0;
        *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
        TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>(__return_storage_ptr__,&param_1->OnGetContent);
      }
    }
  }
  return __return_storage_ptr__;
}

// CurrentOwner @ 142c562d0

FToolMenuOwner * __thiscall
UToolMenus::CurrentOwner(UToolMenus *this,FToolMenuOwner *__return_storage_ptr__)

{
  FToolMenuOwner_u_0 *pFVar1;
  int iVar2;
  code *pcVar3;
  FToolMenuOwner_u_0 FVar4;
  bool bVar5;
  FToolMenuOwner *pFVar6;
  uint uVar7;
  
  iVar2 = (this->OwnerStack).ArrayNum;
  if (iVar2 < 1) {
    (__return_storage_ptr__->field0_0x0).ValueInt64 = 0;
    __return_storage_ptr__->ValueType = None;
    return __return_storage_ptr__;
  }
  uVar7 = 0;
  if ((int)(iVar2 - 1U) < iVar2) {
    uVar7 = ~(iVar2 - 1U) >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FToolMenuOwner *)(*pcVar3)();
      return pFVar6;
    }
  }
  pFVar1 = (FToolMenuOwner_u_0 *)
           ((this->OwnerStack).AllocatorInstance.Data +
           (longlong)(this->OwnerStack).ArrayNum * 0x10 + -0x10);
  FVar4 = pFVar1[1];
  __return_storage_ptr__->field0_0x0 = *pFVar1;
  *(FToolMenuOwner_u_0 *)&__return_storage_ptr__->ValueType = FVar4;
  return __return_storage_ptr__;
}

// ExecuteStringCommand @ 142c58a50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UToolMenus::ExecuteStringCommand
          (FToolMenuStringCommand *param_1,FName param_2,FToolMenuContext *param_3)

{
  EToolMenuStringCommandType EVar1;
  FName FVar2;
  longlong lVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  UToolMenus *pUVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  FName *pFVar14;
  FModuleManager *this;
  TDelegateBase<FNotThreadSafeDelegateMode> *pTVar15;
  int iVar16;
  undefined1 *puVar17;
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  int *piVar18;
  longlong lVar19;
  FName local_res8;
  FName local_res20;
  FString local_78;
  FDestructionSentinel local_68;
  FReadAccessScope local_50;
  
  iVar12 = (param_1->String).Data.ArrayNum;
  pTVar15 = (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0;
  iVar16 = iVar12 + -1;
  if (iVar12 == 0) {
    iVar16 = 0;
  }
  if (0 < iVar16) {
    piVar18 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c);
    if ((*piVar18 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&CommandName,"Command");
      _Init_thread_footer(&::_TSS0);
    }
    if ((*piVar18 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&PythonName,"Python");
      _Init_thread_footer(&::_TSS1);
    }
    EVar1 = param_1->Type;
    local_res8 = CommandName;
    if ((EVar1 != Command) && (local_res8 = PythonName, EVar1 != Python)) {
      if (EVar1 == Custom) {
        local_res8 = param_1->CustomType;
      }
      else {
        local_res8.ComparisonIndex.Value = 0;
        local_res8.Number = 0;
      }
    }
    if ((Singleton == (UToolMenus *)0x0) && (bHasShutDown == false)) {
      pFVar14 = ::FName::FName(&local_res20,"ToolMenus");
      FVar2 = *pFVar14;
      this = FModuleManager::Get();
      FModuleManager::LoadModuleChecked(this,FVar2);
      Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
    }
    FVar2 = local_res8;
    pUVar7 = Singleton;
    uVar11 = ::GetTypeHash(local_res8.ComparisonIndex.Value);
    if (*(int *)&(pUVar7->StringCommandHandlers).field_0x8 !=
        *(int *)&(pUVar7->StringCommandHandlers).field_0x34) {
      puVar17 = *(undefined1 **)&(pUVar7->StringCommandHandlers).field_0x40;
      if (puVar17 == (undefined1 *)0x0) {
        puVar17 = &(pUVar7->StringCommandHandlers).field_0x38;
      }
      iVar12 = *(int *)(puVar17 +
                       (ulonglong)
                       (*(int *)&(pUVar7->StringCommandHandlers).field_0x48 - 1U &
                       FVar2.Number + uVar11) * 4);
      if (iVar12 != -1) {
        do {
          lVar19 = *(longlong *)&pUVar7->StringCommandHandlers + (longlong)iVar12 * 0x28;
          if (*(FName *)(*(longlong *)&pUVar7->StringCommandHandlers + (longlong)iVar12 * 0x28) ==
              FVar2) {
            this_00 = (TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar19 + 8);
            if (lVar19 == 0) {
              this_00 = pTVar15;
            }
            if (this_00 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
              bVar8 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound(this_00);
              if (bVar8) {
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                          ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                           &local_50);
                if (*(int *)&this_00->field_0x10 != 0) {
                  pTVar15 = *(TDelegateBase<FNotThreadSafeDelegateMode> **)&this_00->field_0x8;
                }
                (**(code **)(*(longlong *)pTVar15 + 0x60))(pTVar15,&param_1->String,param_3);
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
                ~FReadAccessScope(&local_50);
              }
              goto LAB_142c58c6b;
            }
            break;
          }
          iVar12 = *(int *)(lVar19 + 0x20);
        } while (iVar12 != -1);
      }
    }
    if (2 < (byte)LogToolMenus._0_1_) {
      ::FName::ToString(&local_res8,&local_78);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogToolMenus);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
LAB_142c58c6b:
    FVar2 = local_res8;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pUVar7->OnStringCommandExecuted,(FWriteAccessScope *)&local_68);
    puVar17 = &(pUVar7->OnStringCommandExecuted).field_0x1c;
    *(int *)puVar17 = *(int *)puVar17 + 1;
    bVar8 = false;
    uVar11 = *(int *)&(pUVar7->OnStringCommandExecuted).field_0x10 - 1;
    if (-1 < (int)uVar11) {
      lVar19 = (longlong)(int)uVar11 << 4;
      bVar8 = false;
      do {
        uVar13 = 0;
        if ((int)uVar11 < *(int *)&(pUVar7->OnStringCommandExecuted).field_0x10) {
          uVar13 = ~uVar11 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar3 = *(longlong *)&(pUVar7->OnStringCommandExecuted).field_0x8;
        if (((*(int *)(lVar3 + 8 + lVar19) == 0) ||
            (plVar4 = *(longlong **)(lVar3 + lVar19), plVar4 == (longlong *)0x0)) ||
           (cVar10 = (**(code **)(*plVar4 + 0x68))(plVar4,param_2,FVar2), cVar10 == '\0')) {
          bVar8 = true;
        }
        lVar19 = lVar19 + -0x10;
        uVar11 = uVar11 - 1;
      } while (-1 < (int)uVar11);
    }
    puVar17 = &(pUVar7->OnStringCommandExecuted).field_0x1c;
    *(int *)puVar17 = *(int *)puVar17 + -1;
    if (bVar8) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pUVar7->OnStringCommandExecuted,false);
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
  }
  pFVar5 = (param_1->String).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  FToolMenuContext::~FToolMenuContext(param_3);
  return;
}

// ExtendMenu @ 142c58e30

UToolMenu * __thiscall UToolMenus::ExtendMenu(UToolMenus *this,FName param_1)

{
  int iVar1;
  TObjectPtr<UToolMenu> TVar2;
  TObjectPtr<UToolMenu> *pTVar3;
  TObjectPtr<UToolMenu>_u_0 *pTVar4;
  FName *pFVar5;
  UToolMenu *pUVar6;
  longlong lVar7;
  longlong lVar8;
  TPairInitializer<FName_const_&,TObjectPtr<UToolMenu>_&&> local_res8;
  UToolMenu *local_res18 [2];
  TObjectPtr<UToolMenu> **local_38;
  UToolMenu **local_30;
  
  local_res8.Value = (TObjectPtr<UToolMenu> *)param_1;
  pTVar4 = &TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
            ::Find((TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
                    *)&this->Menus,param_1)->field0_0x0;
  if (pTVar4 != (TObjectPtr<UToolMenu>_u_0 *)0x0) {
    TVar2.field0_0x0 = (TObjectPtr<UToolMenu>_u_0)pTVar4->DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (TVar2.field0_0x0 == (UToolMenu *)0x0) goto LAB_142c58f02;
      UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
    }
    if (TVar2.field0_0x0 != (UToolMenu *)0x0) {
      *(undefined1 *)((longlong)TVar2.field0_0x0 + 0x109) = 0;
      lVar8 = *(longlong *)((longlong)TVar2.field0_0x0 + 0xd0);
      iVar1 = *(int *)((longlong)TVar2.field0_0x0 + 0xd8);
      lVar7 = (longlong)iVar1 * 0x238 + lVar8;
      while( true ) {
        if (*(int *)((longlong)TVar2.field0_0x0 + 0xd8) != iVar1) {
          `TCheckedPointerIterator<FToolMenuSection,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res8);
        }
        if (lVar8 == lVar7) break;
        *(undefined1 *)(lVar8 + 0x230) = *(undefined1 *)((longlong)TVar2.field0_0x0 + 0x109);
        lVar8 = lVar8 + 0x238;
      }
      if (this->bSuppressRefreshWidgetsRequests != false) {
        return (UToolMenu *)TVar2.field0_0x0;
      }
      this->bRefreshWidgetsNextTick = true;
      SetNextTickTimer(this);
      return (UToolMenu *)TVar2.field0_0x0;
    }
  }
LAB_142c58f02:
  pTVar3 = local_res8.Value;
  pFVar5 = ::FName::FName((FName *)&local_res8,L"RegisteredMenu");
  pUVar6 = NewToolMenuObject(this,*pFVar5,(FName)pTVar3);
  pUVar6->bRegistered = false;
  pUVar6->bIsRegistering = false;
  local_res18[0] = pUVar6;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  local_38 = &local_res8.Value;
  local_30 = local_res18;
  TSet<TTuple<FName,TObjectPtr<UToolMenu>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,TObjectPtr<UToolMenu>_&&>_>
            ((TSet<TTuple<FName,TObjectPtr<UToolMenu>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>,FDefaultSetAllocator>
              *)&this->Menus,&local_res8,(bool *)&local_38);
  return pUVar6;
}

// ExtractChildBlocksFromSubMenu @ 142c58f90

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
UToolMenus::ExtractChildBlocksFromSubMenu
          (UToolMenus *this,UToolMenu *param_1,FToolMenuEntry *param_2,
          TArray<UE::ToolMenus::FSubBlockReference,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  UToolMenu *pUVar3;
  UToolMenu *pUVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_a8 [8];
  ForAnyElementType local_a0;
  int local_98;
  longlong local_90;
  UToolMenu *local_88;
  UToolMenu *local_80;
  FScriptContainerElement *local_78;
  longlong local_70;
  FDestructionSentinel local_68;
  FReadAccessScope local_50;
  
  this_00 = ConvertWidgetChoice(this,(TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
                                      *)local_a8,
                                &(param_2->ToolBarData).ComboButtonContextMenuGenerator,
                                &param_1->Context);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_50);
  if (((*(int *)&this_00->field_0x10 == 0) || (*(longlong **)&this_00->field_0x8 == (longlong *)0x0)
      ) || (cVar5 = (**(code **)(**(longlong **)&this_00->field_0x8 + 0x38))(), cVar5 == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
             (FWriteAccessScope *)&local_68);
  if ((local_98 != 0) && (local_a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a0,0,0,0x10);
    local_98 = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (local_a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a8);
  if ((((param_2->Type == ToolBarComboButton) ||
       ((param_2->Type == MenuEntry && ((param_2->SubMenuData).bIsSubMenu != false)))) && (!bVar6))
     && ((local_88 = GenerateSubMenu(this,param_1,param_2->Name), local_88 != (UToolMenu *)0x0 &&
         (uVar12 = (local_88->Sections).ArrayNum - 1, -1 < (int)uVar12)))) {
    lVar9 = (longlong)(int)uVar12 * 0x238;
    do {
      pUVar3 = local_88;
      uVar10 = 0;
      if ((int)uVar12 < (local_88->Sections).ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      local_90 = lVar9;
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar4 = local_88;
      pFVar13 = (pUVar3->Sections).AllocatorInstance.Data + lVar9;
      uVar10 = *(int *)(pFVar13 + 0x20) - 1;
      if (-1 < (int)uVar10) {
        lVar11 = (longlong)(int)uVar10 * 0x780;
        do {
          uVar7 = 0;
          if ((int)uVar10 < *(int *)(pFVar13 + 0x20)) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = (param_3->AllocatorInstance).Data;
          local_70 = *(longlong *)(pFVar13 + 0x18) + lVar11;
          local_80 = pUVar4;
          local_78 = pFVar13;
          if (((pFVar1 <= (FScriptContainerElement *)&local_80) &&
              ((FScriptContainerElement *)&local_80 < pFVar1 + (longlong)param_3->ArrayMax * 0x18))
             && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar8 = param_3->ArrayNum;
          if (iVar8 == param_3->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          param_3->ArrayNum = iVar8 + 1;
          lVar11 = lVar11 + -0x780;
          uVar10 = uVar10 - 1;
          pFVar1 = (param_3->AllocatorInstance).Data + (longlong)iVar8 * 0x18;
          *(UToolMenu **)pFVar1 = local_80;
          *(FScriptContainerElement **)(pFVar1 + 8) = local_78;
          *(longlong *)(pFVar1 + 0x10) = local_70;
          lVar9 = local_90;
        } while (-1 < (int)uVar10);
      }
      uVar12 = uVar12 - 1;
      lVar9 = lVar9 + -0x238;
    } while (-1 < (int)uVar12);
  }
  return;
}

// FindContext @ 142c59f40

UObject * __cdecl UToolMenus::FindContext(FToolMenuContext *param_1,UClass *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UObject *pUVar4;
  FScriptContainerElement *pFVar5;
  undefined1 auStackX_8 [8];
  
  pFVar5 = (param_1->ContextObjects).AllocatorInstance.Data;
  iVar2 = (param_1->ContextObjects).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->ContextObjects).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UObject>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_8);
    }
    if (pFVar5 == pFVar1) break;
    pUVar4 = *(UObject **)pFVar5;
    if (pUVar4 != (UObject *)0x0) {
      iVar3 = (int)param_2->_padding_;
      if ((iVar3 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
          &param_2->_padding_)) {
        return pUVar4;
      }
    }
    pFVar5 = pFVar5 + 8;
  }
  return (UObject *)0x0;
}

// FindMenu @ 142c5a860

UToolMenu * __thiscall UToolMenus::FindMenu(UToolMenus *this,FName param_1)

{
  TObjectPtr<UToolMenu> TVar1;
  TObjectPtr<UToolMenu>_u_0 *pTVar2;
  
  pTVar2 = &TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
            ::Find((TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
                    *)&this->Menus,param_1)->field0_0x0;
  if (pTVar2 != (TObjectPtr<UToolMenu>_u_0 *)0x0) {
    TVar1.field0_0x0 = (TObjectPtr<UToolMenu>_u_0)pTVar2->DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar1.field0_0x0 != (UToolMenu *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
    }
    return (UToolMenu *)TVar1.field0_0x0;
  }
  return (UToolMenu *)0x0;
}

// FindMenuCustomization @ 142c5a920

FCustomizedToolMenu * __thiscall UToolMenus::FindMenuCustomization(UToolMenus *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FCustomizedToolMenu *pFVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->CustomizedMenus).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->CustomizedMenus).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FCustomizedToolMenu *)(*pcVar1)();
        return pFVar4;
      }
      if (*(FName *)((this->CustomizedMenus).AllocatorInstance.Data + lVar6) == param_1) {
        uVar3 = 0;
        if ((int)uVar5 < (this->CustomizedMenus).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FCustomizedToolMenu *)(*pcVar1)();
          return pFVar4;
        }
        return (FCustomizedToolMenu *)
               ((this->CustomizedMenus).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x208);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x208;
    } while ((int)uVar5 < (this->CustomizedMenus).ArrayNum);
  }
  return (FCustomizedToolMenu *)0x0;
}

// FindMenuCustomizationIndex @ 142c5aa40

int __thiscall UToolMenus::FindMenuCustomizationIndex(UToolMenus *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (0 < (this->CustomizedMenus).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->CustomizedMenus).ArrayNum) {
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
      if (*(FName *)((this->CustomizedMenus).AllocatorInstance.Data + lVar5) == param_1) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x208;
    } while ((int)uVar6 < (this->CustomizedMenus).ArrayNum);
  }
  return -1;
}

// FindMenuProfile @ 142c5abb0

FToolMenuProfile * __thiscall
UToolMenus::FindMenuProfile(UToolMenus *this,FName param_1,FName param_2)

{
  FToolMenuProfileMap *this_00;
  FToolMenuProfile *pFVar1;
  
  this_00 = TMapBase<FName,FToolMenuProfileMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfileMap,0>_>
            ::Find((TMapBase<FName,FToolMenuProfileMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfileMap,0>_>
                    *)&this->MenuProfiles,param_1);
  if (this_00 != (FToolMenuProfileMap *)0x0) {
    pFVar1 = TMapBase<FName,FToolMenuProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfile,0>_>
             ::Find((TMapBase<FName,FToolMenuProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfile,0>_>
                     *)this_00,param_2);
    return pFVar1;
  }
  return (FToolMenuProfile *)0x0;
}

// FindRuntimeMenuCustomization @ 142c5adc0

FCustomizedToolMenu * __thiscall
UToolMenus::FindRuntimeMenuCustomization(UToolMenus *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FCustomizedToolMenu *pFVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->RuntimeCustomizedMenus).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->RuntimeCustomizedMenus).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FCustomizedToolMenu *)(*pcVar1)();
        return pFVar4;
      }
      if (*(FName *)((this->RuntimeCustomizedMenus).AllocatorInstance.Data + lVar6) == param_1) {
        uVar3 = 0;
        if ((int)uVar5 < (this->RuntimeCustomizedMenus).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FCustomizedToolMenu *)(*pcVar1)();
          return pFVar4;
        }
        return (FCustomizedToolMenu *)
               ((this->RuntimeCustomizedMenus).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x208
               );
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x208;
    } while ((int)uVar5 < (this->RuntimeCustomizedMenus).ArrayNum);
  }
  return (FCustomizedToolMenu *)0x0;
}

// FindRuntimeMenuProfile @ 142c5aee0

FToolMenuProfile * __thiscall
UToolMenus::FindRuntimeMenuProfile(UToolMenus *this,FName param_1,FName param_2)

{
  FToolMenuProfileMap *this_00;
  FToolMenuProfile *pFVar1;
  
  this_00 = TMapBase<FName,FToolMenuProfileMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfileMap,0>_>
            ::Find((TMapBase<FName,FToolMenuProfileMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfileMap,0>_>
                    *)&this->RuntimeMenuProfiles,param_1);
  if (this_00 != (FToolMenuProfileMap *)0x0) {
    pFVar1 = TMapBase<FName,FToolMenuProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfile,0>_>
             ::Find((TMapBase<FName,FToolMenuProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfile,0>_>
                     *)this_00,param_2);
    return pFVar1;
  }
  return (FToolMenuProfile *)0x0;
}

// FindSubMenuToGenerateWith @ 142c5afa0

UToolMenu * __thiscall
UToolMenus::FindSubMenuToGenerateWith(UToolMenus *this,FName param_1,FName param_2)

{
  UToolMenu *pUVar1;
  TObjectPtr<UToolMenu> TVar2;
  FString *pFVar3;
  FString *pFVar4;
  TObjectPtr<UToolMenu> *pTVar5;
  TObjectPtr<UToolMenu>_u_0 *pTVar6;
  ForAnyElementType FVar7;
  FName local_res10;
  FName local_res20;
  FName local_68;
  FString local_60;
  FString local_50;
  FString local_40;
  FString local_30;
  
  do {
    if (param_1 == (FName)0x0) {
      return (UToolMenu *)0x0;
    }
    local_res10 = param_2;
    local_res20 = param_1;
    pFVar3 = ::FName::ToString(&local_res10,&local_30);
    pFVar4 = ::FName::ToString(&local_res20,&local_40);
    ::FString::ConcatFC(&local_50,pFVar4,L".");
    ::FString::ConcatFF(&local_60,&local_50,pFVar3);
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_60.Data.ArrayNum != 0) {
      FVar7.Data = local_60.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_68,(wchar_t *)FVar7.Data);
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    pTVar5 = TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
             ::Find((TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
                     *)&this->Menus,local_68);
    if (pTVar5 != (TObjectPtr<UToolMenu> *)0x0) {
      pUVar1 = (pTVar5->field0_0x0).DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar1 != (UToolMenu *)0x0) {
          return pUVar1;
        }
      }
      else if (pUVar1 != (UToolMenu *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
        return pUVar1;
      }
    }
    pTVar6 = &TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
              ::Find((TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
                      *)&this->Menus,param_1)->field0_0x0;
    if ((pTVar6 == (TObjectPtr<UToolMenu>_u_0 *)0x0) ||
       (TVar2.field0_0x0 = (TObjectPtr<UToolMenu>_u_0)pTVar6->DebugPtr,
       TVar2.field0_0x0 == (UToolMenu *)0x0)) {
      param_1.ComparisonIndex.Value = 0;
      param_1.Number = 0;
    }
    else {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
      }
      param_1 = *(FName *)((longlong)TVar2.field0_0x0 + 0x30);
    }
  } while( true );
}

// GenerateMenu @ 142c5b220

UToolMenu * __thiscall
UToolMenus::GenerateMenu(UToolMenus *this,FName param_1,FToolMenuContext *param_2)

{
  TArray<UToolMenu_*,TSizedDefaultAllocator<32>_> *pTVar1;
  UToolMenu *pUVar2;
  TArray<UToolMenu_*,TSizedDefaultAllocator<32>_> local_18;
  
  pTVar1 = CollectHierarchy(this,&local_18,param_1);
  pUVar2 = GenerateMenuFromHierarchy(this,pTVar1,param_2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return pUVar2;
}

// GenerateMenuAsBuilder @ 142c5b280

UToolMenu * __thiscall
UToolMenus::GenerateMenuAsBuilder(UToolMenus *this,UToolMenu *param_1,FToolMenuContext *param_2)

{
  code *pcVar1;
  bool bVar2;
  UToolMenu *pUVar3;
  int iVar4;
  longlong lVar5;
  UToolMenu *local_28;
  UToolMenu *local_20;
  TArray<UToolMenu_*,TSizedDefaultAllocator<32>_> local_18;
  
  CollectHierarchy(this,&local_18,param_1->MenuName);
  iVar4 = local_18.ArrayNum;
  lVar5 = (longlong)local_18.ArrayNum;
  if (local_18.ArrayNum < 1) {
    local_20 = param_1;
    if (((local_18.AllocatorInstance.Data <= (FScriptContainerElement *)&local_20) &&
        ((FScriptContainerElement *)&local_20 <
         local_18.AllocatorInstance.Data + (longlong)local_18.ArrayMax * 8)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UToolMenu *)(*pcVar1)();
      return pUVar3;
    }
    if (local_18.ArrayNum == local_18.ArrayMax) {
      local_18.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_18.AllocatorInstance,&local_18.ArrayMax);
    }
    *(UToolMenu **)(local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 8) = local_20;
    local_18.ArrayNum = local_18.ArrayNum + 1;
  }
  else {
    local_28 = param_1;
    if (((local_18.AllocatorInstance.Data <= (FScriptContainerElement *)&local_28) &&
        ((FScriptContainerElement *)&local_28 <
         local_18.AllocatorInstance.Data + (longlong)local_18.ArrayMax * 8)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UToolMenu *)(*pcVar1)();
      return pUVar3;
    }
    if (local_18.ArrayNum == local_18.ArrayMax) {
      local_18.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_18.AllocatorInstance,&local_18.ArrayMax);
    }
    iVar4 = local_18.ArrayNum - iVar4;
    lVar5 = lVar5 * 8 + -8;
    local_18.ArrayNum = local_18.ArrayNum + 1;
    memmove(local_18.AllocatorInstance.Data + lVar5 + 8,local_18.AllocatorInstance.Data + lVar5,
            (longlong)(iVar4 + 1) << 3);
    *(UToolMenu **)(local_18.AllocatorInstance.Data + lVar5) = local_28;
  }
  pUVar3 = GenerateMenuFromHierarchy(this,&local_18,param_2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return pUVar3;
}

// GenerateMenuFromHierarchy @ 142c5b470

UToolMenu * __thiscall
UToolMenus::GenerateMenuFromHierarchy
          (UToolMenus *this,TArray<UToolMenu_*,TSizedDefaultAllocator<32>_> *param_1,
          FToolMenuContext *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FName *pFVar7;
  UToolMenu *pUVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [16];
  undefined8 local_res20;
  FName local_38 [2];
  
  local_res20 = 0;
  pFVar7 = ::FName::FName(local_38,L"GeneratedMenuFromHierarchy");
  pUVar8 = NewToolMenuObject(this,*pFVar7,(FName)0x0);
  iVar2 = param_1->ArrayNum;
  if (0 < iVar2) {
    uVar6 = 0;
    if ((int)(iVar2 - 1U) < iVar2) {
      uVar6 = ~(iVar2 - 1U) >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pUVar8 = (UToolMenu *)(*pcVar4)();
        return pUVar8;
      }
    }
    FVar3 = *(FName *)(*(longlong *)
                        ((param_1->AllocatorInstance).Data + (longlong)param_1->ArrayNum * 8 + -8) +
                      0x28);
    if (param_1->ArrayNum < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pUVar8 = (UToolMenu *)(*pcVar4)();
        return pUVar8;
      }
    }
    UToolMenu::InitGeneratedCopy
              (pUVar8,*(UToolMenu **)(param_1->AllocatorInstance).Data,FVar3,param_2);
    pFVar9 = (param_1->AllocatorInstance).Data;
    iVar2 = param_1->ArrayNum;
    pFVar1 = pFVar9 + (longlong)iVar2 * 8;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        `TCheckedPointerIterator<UToolMenu_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar9 == pFVar1) goto LAB_142c5b5a5;
      if ((*(longlong *)pFVar9 != 0) && (*(char *)(*(longlong *)pFVar9 + 0x10a) == '\0')) break;
      pFVar9 = pFVar9 + 8;
    }
    pUVar8->bExtendersEnabled = false;
LAB_142c5b5a5:
    AssembleMenuHierarchy(this,pUVar8,param_1);
  }
  return pUVar8;
}

// GenerateMenuOrSubMenuForEdit @ 142c5b5d0

UToolMenu * __thiscall UToolMenus::GenerateMenuOrSubMenuForEdit(UToolMenus *this,UToolMenu *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<UToolMenu_*,TSizedDefaultAllocator<32>_> *pTVar4;
  UToolMenu *pUVar5;
  UToolMenu *pUVar6;
  uint uVar7;
  longlong lVar8;
  TArray<UToolMenu_const_*,TSizedDefaultAllocator<32>_> local_b8;
  FToolMenuContext local_a8;
  TArray<UToolMenu_*,TSizedDefaultAllocator<32>_> local_38;
  TArray<UToolMenu_*,TSizedDefaultAllocator<32>_> local_28;
  
  FToolMenuContext::FToolMenuContext(&local_a8,&param_1->Context);
  local_a8.bIsEditing = true;
  if ((param_1->SubMenuParent).field0_0x0.DebugPtr == (UToolMenu *)0x0) {
    pTVar4 = CollectHierarchy(this,&local_38,param_1->MenuName);
    pUVar5 = GenerateMenuFromHierarchy(this,pTVar4,&local_a8);
  }
  else {
    UToolMenu::GetSubMenuChain(param_1,&local_b8);
    if (local_b8.ArrayNum < 1) {
      local_38.AllocatorInstance.Data = local_b8.AllocatorInstance.Data;
      pUVar5 = (UToolMenu *)0x0;
    }
    else {
      pTVar4 = CollectHierarchy(this,&local_28,
                                *(FName *)(*(longlong *)local_b8.AllocatorInstance.Data + 0x28));
      pUVar6 = GenerateMenuFromHierarchy(this,pTVar4,&local_a8);
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      uVar7 = 1;
      local_38.AllocatorInstance.Data = local_b8.AllocatorInstance.Data;
      pUVar5 = pUVar6;
      if (1 < local_b8.ArrayNum) {
        lVar8 = 8;
        do {
          uVar3 = 0;
          if ((int)uVar7 < local_b8.ArrayNum) {
            uVar3 = ~uVar7 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            pUVar5 = (UToolMenu *)(*pcVar1)();
            return pUVar5;
          }
          pUVar6 = GenerateSubMenu(this,pUVar6,
                                   *(FName *)(*(longlong *)(local_b8.AllocatorInstance.Data + lVar8)
                                             + 0xe8));
          local_38.AllocatorInstance.Data = local_b8.AllocatorInstance.Data;
          pUVar5 = (UToolMenu *)0x0;
          if (pUVar6 == (UToolMenu *)0x0) break;
          uVar7 = uVar7 + 1;
          lVar8 = lVar8 + 8;
          pUVar5 = pUVar6;
        } while ((int)uVar7 < local_b8.ArrayNum);
      }
    }
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  DestructItems<TSharedPtr<FExtender,1>,int>
            ((TSharedPtr<FExtender,1> *)local_a8.Extenders.AllocatorInstance.Data,
             local_a8.Extenders.ArrayNum);
  if ((TSharedPtr<FExtender,1> *)local_a8.Extenders.AllocatorInstance.Data !=
      (TSharedPtr<FExtender,1> *)0x0) {
    FMemory::Free(local_a8.Extenders.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.CommandList.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FUICommandList,1>,int>
            ((TSharedPtr<FUICommandList,1> *)local_a8.CommandLists.AllocatorInstance.Data,
             local_a8.CommandLists.ArrayNum);
  if ((TSharedPtr<FUICommandList,1> *)local_a8.CommandLists.AllocatorInstance.Data !=
      (TSharedPtr<FUICommandList,1> *)0x0) {
    FMemory::Free(local_a8.CommandLists.AllocatorInstance.Data);
  }
  DestructItems<TFunction<void___cdecl(void)>,int>
            ((TFunction<void___cdecl(void)> *)local_a8.ContextCleanupFuncs.AllocatorInstance.Data,
             local_a8.ContextCleanupFuncs.ArrayNum);
  if ((TFunction<void___cdecl(void)> *)local_a8.ContextCleanupFuncs.AllocatorInstance.Data !=
      (TFunction<void___cdecl(void)> *)0x0) {
    FMemory::Free(local_a8.ContextCleanupFuncs.AllocatorInstance.Data);
  }
  DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
            ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
             local_a8.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data,
             local_a8.ContextObjectCleanupFuncs.Pairs.ArrayNum);
  if ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
      local_a8.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data !=
      (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
    FMemory::Free(local_a8.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data);
  }
  if (local_a8.ContextObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ContextObjects.AllocatorInstance.Data);
  }
  return pUVar5;
}

// GenerateSubMenu @ 142c5b7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

UToolMenu * __thiscall
UToolMenus::GenerateSubMenu(UToolMenus *this,UToolMenu *param_1,FName param_2)

{
  FName *pFVar1;
  FScriptContainerElement *pFVar2;
  TObjectPtr<UToolMenu> TVar3;
  code *pcVar4;
  UToolMenu *pUVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UToolMenu *pUVar9;
  FToolMenuEntry *pFVar10;
  TObjectPtr<UToolMenu> *pTVar11;
  FName FVar12;
  TObjectPtr<UToolMenu>_u_0 *pTVar13;
  TArray<UToolMenu_*,TSizedDefaultAllocator<32>_> *pTVar14;
  longlong *plVar15;
  ulonglong uVar16;
  uint uVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  FName FVar20;
  FName *pFVar21;
  ulonglong uVar22;
  undefined1 auStackY_1c8 [32];
  ForAnyElementType local_178;
  int local_170;
  int local_16c;
  TArray<UToolMenu_*,TSizedDefaultAllocator<32>_> local_168;
  bool local_158;
  ForAnyElementType local_150;
  undefined8 local_148;
  UToolMenu *local_140;
  undefined1 local_138;
  undefined1 local_137;
  undefined1 local_136 [6];
  UToolMenus *local_130;
  FName local_128;
  ForAnyElementType local_120;
  int local_118;
  int local_114;
  undefined1 local_110 [12];
  undefined8 local_104;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined1 local_e8 [8];
  FName local_e0;
  FName local_d8;
  TArray<UToolMenu_*,TSizedDefaultAllocator<32>_> local_d0;
  TArray<UToolMenu_*,TSizedDefaultAllocator<32>_> local_c0;
  FReadAccessScope local_b0;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator> local_98
  ;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if ((param_1 != (UToolMenu *)0x0) && (param_2 != (FName)0x0)) {
    local_130 = this;
    JoinMenuPaths((FName)&local_128,param_1->MenuName);
    uVar17 = 0;
    if (0 < (param_1->Sections).ArrayNum) {
      do {
        uVar7 = 0;
        if ((int)uVar17 < (param_1->Sections).ArrayNum) {
          uVar7 = ~uVar17 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pUVar9 = (UToolMenu *)(*pcVar4)();
          return pUVar9;
        }
        pFVar10 = FToolMenuSection::FindEntry
                            ((FToolMenuSection *)
                             ((param_1->Sections).AllocatorInstance.Data +
                             (longlong)(int)uVar17 * 0x238),param_2);
        if (pFVar10 != (FToolMenuEntry *)0x0) {
          local_158 = this->bSuppressRefreshWidgetsRequests;
          this->bSuppressRefreshWidgetsRequests = true;
          FVar12 = param_1->MenuName;
          local_118 = 0;
          local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_168.ArrayNum = 0;
          local_168.ArrayMax = 0;
          local_120.Data = (FScriptContainerElement *)0x0;
          local_114 = 0;
          local_178.Data = (FScriptContainerElement *)0x0;
          local_170 = 0;
          local_16c = 0;
          goto LAB_142c5b942;
        }
        uVar17 = uVar17 + 1;
      } while ((int)uVar17 < (param_1->Sections).ArrayNum);
    }
  }
  return (UToolMenu *)0x0;
LAB_142c5b942:
  FVar20.ComparisonIndex.Value = 0;
  FVar20.Number = 0;
  if (FVar12 != (FName)0x0) {
    if (local_118 == local_114) {
      local_118 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&local_120,&local_114);
    }
    pFVar21 = (FName *)(local_120.Data + (longlong)local_118 * 0x20);
    local_118 = local_118 + 1;
    DefaultConstructItems<_UToolMenus::GenerateSubMenu_::__l9::FMenuHierarchyInfo,int>(pFVar21,1);
    *pFVar21 = FVar12;
    pTVar11 = TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
              ::Find((TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
                      *)&this->Menus,FVar12);
    if (((pTVar11 != (TObjectPtr<UToolMenu> *)0x0) &&
        (FVar20 = (FName)(pTVar11->field0_0x0).DebugPtr,
        UE::GC::GIsIncrementalReachabilityPending != false)) && (FVar20 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)FVar20);
    }
    pFVar21[2] = FVar20;
    FVar12 = JoinMenuPaths((FName)local_e8,FVar12);
    FVar12 = *(FName *)FVar12;
    pFVar21[1] = FVar12;
    pTVar13 = &TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
               ::Find((TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
                       *)&this->Menus,FVar12)->field0_0x0;
    if (pTVar13 == (TObjectPtr<UToolMenu>_u_0 *)0x0) {
      pFVar21[3].ComparisonIndex = 0;
      pFVar21[3].Number = 0;
    }
    else {
      TVar3.field0_0x0 = (TObjectPtr<UToolMenu>_u_0)pTVar13->DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar3.field0_0x0 != (UToolMenu *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar3.field0_0x0);
      }
      this = local_130;
      ((TObjectPtr<UToolMenu>_u_0 *)(pFVar21 + 3))->DebugPtr = (UToolMenu *)TVar3.field0_0x0;
      pFVar1 = pFVar21 + 3;
      if (TVar3.field0_0x0 != (UToolMenu *)0x0) {
        if (*(char *)((longlong)TVar3.field0_0x0 + 0x108) != '\0') {
          if (local_170 == 0) {
            pTVar14 = CollectHierarchy(local_130,&local_d0,pFVar21[1]);
            if (&local_168 != pTVar14) {
              if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_168.AllocatorInstance.Data);
              }
              local_168.AllocatorInstance.Data = (pTVar14->AllocatorInstance).Data;
              (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
              local_168.ArrayNum = pTVar14->ArrayNum;
              local_168.ArrayMax = pTVar14->ArrayMax;
              pTVar14->ArrayNum = 0;
              pTVar14->ArrayMax = 0;
            }
            if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d0.AllocatorInstance.Data);
            }
          }
          else {
            if (((local_178.Data <= pFVar1) &&
                (pFVar1 < (FName *)(local_178.Data + (longlong)local_16c * 8))) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              pUVar9 = (UToolMenu *)(*pcVar4)();
              return pUVar9;
            }
            if (local_170 == local_16c) {
              local_170 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x808,&local_178,&local_16c);
            }
            *(FName *)(local_178.Data + (longlong)local_170 * 8) = *pFVar1;
            this = local_130;
            local_170 = local_170 + 1;
          }
          goto LAB_142c5bbf0;
        }
        if (((local_178.Data <= pFVar1) &&
            (pFVar1 < (FName *)(local_178.Data + (longlong)local_16c * 8))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          pUVar9 = (UToolMenu *)(*pcVar4)();
          return pUVar9;
        }
        if (local_170 == local_16c) {
          local_170 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_178,&local_16c);
        }
        *(FName *)(local_178.Data + (longlong)local_170 * 8) = *pFVar1;
        local_170 = local_170 + 1;
      }
    }
    FVar12.ComparisonIndex.Value = 0;
    FVar12.Number = 0;
    this = local_130;
    if (pFVar21[2] != (FName)0x0) {
      FVar12 = *(FName *)((longlong)pFVar21[2] + 0x30);
    }
    goto LAB_142c5b942;
  }
LAB_142c5bbf0:
  uVar16 = 0;
  if (0 < local_170) {
    local_98.Elements._0_8_ = 0;
    local_98.Elements._8_8_ = 0;
    local_98.Elements._32_8_ = 0;
    local_98.Elements._40_4_ = 0;
    local_98.Elements._44_4_ = 0x80;
    local_98.Elements._48_4_ = 0xffffffff;
    local_98.Elements._52_4_ = 0;
    local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_98.HashSize = 0;
    uVar22 = uVar16;
    if (0 < local_170 + -1) {
      do {
        uVar17 = (uint)uVar16;
        uVar19 = uVar17 + 1;
        uVar7 = 0;
        if ((int)uVar19 < local_170) {
          uVar7 = ~uVar19 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pUVar9 = (UToolMenu *)(*pcVar4)();
          return pUVar9;
        }
        local_104 = *(undefined8 *)(*(longlong *)(local_178.Data + uVar22 + 8) + 0x28);
        uVar7 = 0;
        if ((int)uVar17 < local_170) {
          uVar7 = ~uVar17 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pUVar9 = (UToolMenu *)(*pcVar4)();
          return pUVar9;
        }
        local_110._4_8_ = *(undefined8 *)(*(longlong *)(local_178.Data + uVar22) + 0x28);
        local_f8 = (undefined8 *)(local_110 + 4);
        local_f0 = &local_104;
        TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<FName_&&,FName_&&>_>
                  (&local_98,(TPairInitializer<FName_&&,FName_&&> *)local_110,(bool *)&local_f8);
        uVar16 = (ulonglong)uVar19;
        uVar22 = uVar22 + 8;
      } while ((int)uVar19 < local_170 + -1);
    }
    if ((local_170 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pUVar9 = (UToolMenu *)(*pcVar4)();
      return pUVar9;
    }
    this = local_130;
    pTVar14 = CollectHierarchy(local_130,&local_c0,
                               *(FName *)((longlong)*(FName *)local_178.Data + 0x28),
                               (TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                                *)&local_98);
    if (&local_168 != pTVar14) {
      if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.AllocatorInstance.Data);
      }
      local_168.AllocatorInstance.Data = (pTVar14->AllocatorInstance).Data;
      (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_168.ArrayNum = pTVar14->ArrayNum;
      local_168.ArrayMax = pTVar14->ArrayMax;
      pTVar14->ArrayNum = 0;
      pTVar14->ArrayMax = 0;
    }
    if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.AllocatorInstance.Data);
    }
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
  }
  if ((FName *)local_178.Data != (FName *)0x0) {
    FMemory::Free(local_178.Data);
  }
  if (local_120.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data);
  }
  local_150.Data = (FScriptContainerElement *)0x0;
  local_148 = 0;
  bVar6 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                     &(pFVar10->SubMenuData).ConstructMenu.NewToolMenu);
  FVar12 = local_128;
  if (bVar6) {
    pFVar21 = ::FName::FName(&local_e0,L"TempGenerateSubMenu");
    local_140 = NewToolMenuObject(this,*pFVar21,FVar12);
    if (((local_150.Data <= (FScriptContainerElement *)&local_140) &&
        ((FScriptContainerElement *)&local_140 < local_150.Data + (longlong)(int)local_148._4_4_ * 8
        )) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pUVar9 = (UToolMenu *)(*pcVar4)();
      return pUVar9;
    }
    iVar8 = (int)local_148;
    if ((int)local_148 == local_148._4_4_) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_150,(int *)((longlong)&local_148 + 4));
    }
    local_148 = CONCAT44(local_148._4_4_,iVar8 + 1);
    *(UToolMenu **)(local_150.Data + (longlong)iVar8 * 8) = local_140;
    FToolMenuContext::operator=(&local_140->Context,&param_1->Context);
    pUVar9 = local_140;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pUVar5 = local_140;
    (pUVar9->SubMenuParent).field0_0x0.DebugPtr = param_1;
    local_140->SubMenuSourceEntryName = param_2;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(pFVar10->SubMenuData).ConstructMenu.NewToolMenu,&local_b0);
    if (*(int *)&(pFVar10->SubMenuData).ConstructMenu.NewToolMenu.field_0x10 == 0) {
      plVar15 = (longlong *)0x0;
    }
    else {
      plVar15 = *(longlong **)&(pFVar10->SubMenuData).ConstructMenu.NewToolMenu.field_0x8;
    }
    (**(code **)(*plVar15 + 0x60))(plVar15,pUVar5);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_b0);
    local_140->MenuName = local_128;
    if (((local_168.AllocatorInstance.Data <= (FScriptContainerElement *)&local_140) &&
        ((FScriptContainerElement *)&local_140 <
         local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pUVar9 = (UToolMenu *)(*pcVar4)();
      return pUVar9;
    }
    iVar8 = local_168.ArrayNum;
    if (local_168.ArrayNum == local_168.ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_168.AllocatorInstance,&local_168.ArrayMax);
    }
    local_168.ArrayNum = iVar8 + 1;
    memmove(local_168.AllocatorInstance.Data + 8,local_168.AllocatorInstance.Data,
            (longlong)iVar8 << 3);
    *(UToolMenu **)local_168.AllocatorInstance.Data = local_140;
  }
  FVar12 = local_128;
  if (local_168.ArrayNum < 1) {
    iVar8 = (int)local_148;
    uVar16 = (ulonglong)(int)local_148;
    pFVar2 = local_150.Data + uVar16 * 8;
    FVar18.Data = local_150.Data;
    while( true ) {
      if ((int)uVar16 != iVar8) {
        `TCheckedPointerIterator<UToolMenu_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_136);
      }
      if (FVar18.Data == pFVar2) break;
      UToolMenu::Empty(*(UToolMenu **)FVar18.Data);
      uVar16 = local_148 & 0xffffffff;
      FVar18.Data = FVar18.Data + 8;
    }
    uVar16 = local_148 >> 0x20;
    local_148 = local_148 & 0xffffffff00000000;
    if ((int)uVar16 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&local_150,0,(int *)((longlong)&local_148 + 4));
    }
    pUVar9 = (UToolMenu *)0x0;
  }
  else {
    pFVar21 = ::FName::FName(&local_d8,L"GeneratedSubMenu");
    pUVar9 = NewToolMenuObject(this,*pFVar21,FVar12);
    if ((local_168.ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pUVar9 = (UToolMenu *)(*pcVar4)();
      return pUVar9;
    }
    UToolMenu::InitGeneratedCopy
              (pUVar9,*(UToolMenu **)local_168.AllocatorInstance.Data,local_128,&param_1->Context);
    iVar8 = local_168.ArrayNum;
    uVar16 = (ulonglong)local_168.ArrayNum;
    pFVar2 = local_168.AllocatorInstance.Data + uVar16 * 8;
    FVar18.Data = local_168.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar16 != iVar8) {
        `TCheckedPointerIterator<UToolMenu_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_138);
        uVar16 = local_168._8_8_ & 0xffffffff;
      }
      if (FVar18.Data == pFVar2) goto LAB_142c5c0f5;
      if ((*(longlong *)FVar18.Data != 0) && (*(char *)(*(longlong *)FVar18.Data + 0x10a) == '\0'))
      break;
      FVar18.Data = FVar18.Data + 8;
    }
    pUVar9->bExtendersEnabled = false;
LAB_142c5c0f5:
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    this = local_130;
    (pUVar9->SubMenuParent).field0_0x0.DebugPtr = param_1;
    pUVar9->SubMenuSourceEntryName = param_2;
    AssembleMenuHierarchy(local_130,pUVar9,&local_168);
    iVar8 = (int)local_148;
    uVar16 = (ulonglong)(int)local_148;
    pFVar2 = local_150.Data + uVar16 * 8;
    FVar18.Data = local_150.Data;
    while( true ) {
      if ((int)uVar16 != iVar8) {
        `TCheckedPointerIterator<UToolMenu_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_137);
      }
      if (FVar18.Data == pFVar2) break;
      UToolMenu::Empty(*(UToolMenu **)FVar18.Data);
      uVar16 = local_148 & 0xffffffff;
      FVar18.Data = FVar18.Data + 8;
    }
    bVar6 = local_148._4_4_ != 0;
    local_148 = (ulonglong)local_148._4_4_ << 0x20;
    if (bVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&local_150,0,(int *)((longlong)&local_148 + 4));
    }
  }
  if (local_150.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data);
  }
  if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  this->bSuppressRefreshWidgetsRequests = local_158;
  return pUVar9;
}

// GenerateToolbarComboButtonMenu @ 142c5c3b0

TSharedRef<SWidget,1> * __thiscall
UToolMenus::GenerateToolbarComboButtonMenu
          (UToolMenus *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TWeakObjectPtr<UToolMenu,FWeakObjectPtr> param_1,FName param_2)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  UToolMenu *pUVar3;
  FWeakObjectPtr local_res18 [2];
  
  local_res18[0] = param_1.WeakPtr;
  pUVar3 = (UToolMenu *)FWeakObjectPtr::Get(local_res18);
  pUVar3 = GenerateSubMenu(this,pUVar3,param_2);
  if (pUVar3 != (UToolMenu *)0x0) {
    GenerateWidget(this,__return_storage_ptr__,pUVar3);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GenerateWidget @ 142c5c450

TSharedRef<SWidget,1> * __thiscall
UToolMenus::GenerateWidget
          (UToolMenus *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TArray<UToolMenu_*,TSizedDefaultAllocator<32>_> *param_1,FToolMenuContext *param_2)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  UToolMenu *pUVar3;
  
  if (param_1->ArrayNum == 0) {
    __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
    FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  else {
    pUVar3 = GenerateMenuFromHierarchy(this,param_1,param_2);
    GenerateWidget(this,__return_storage_ptr__,pUVar3);
  }
  return __return_storage_ptr__;
}

// GenerateWidget @ 142c5c4d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UToolMenus::GenerateWidget
          (UToolMenus *this,TSharedRef<SWidget,1> *__return_storage_ptr__,UToolMenu *param_1)

{
  int *piVar1;
  atomic<int> *paVar2;
  TDelegate<TSharedRef<SWidget,1>___cdecl(TSharedRef<SMultiBoxWidget,1>_const_&,FMultiBlock_const_&,TSharedRef<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  EMultiBoxType EVar3;
  bool bVar4;
  longlong *plVar5;
  FGeneratedToolMenuWidgets *pFVar6;
  longlong *plVar7;
  code *pcVar8;
  FSharedReferencer<1> FVar9;
  FSharedReferencer<1> FVar10;
  char cVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  ISlateStyle *pIVar15;
  UToolMenu *pUVar16;
  TSharedRef<FExtender,1> *pTVar17;
  TSharedRef<FMultiBox,1> *pTVar18;
  TSharedPtr<FExtender,1> *pTVar19;
  TSharedPtr<FGeneratedToolMenuWidgets,1> *pTVar20;
  TSharedRef<SWidget,1> *pTVar21;
  FName *pFVar22;
  FName FVar23;
  FName FVar24;
  UClass *pUVar25;
  UObject *pUVar26;
  ulonglong uVar27;
  longlong lVar28;
  TDelegate<TSharedRef<SWidget,1>___cdecl(TSharedRef<SMultiBoxWidget,1>_const_&,FMultiBlock_const_&,TSharedRef<SWidget,1>_const_&),FDefaultDelegateUserPolicy>
  *this_01;
  TReferenceControllerBase<1> *pTVar29;
  FScriptContainerElement *pFVar30;
  FScriptContainerElement *pFVar31;
  TReferenceControllerBase<1> *pTVar32;
  FScriptContainerElement *pFVar33;
  longlong lVar34;
  TReferenceControllerBase<1> *pTVar35;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  SWidget *local_6f8;
  FSharedReferencer<1> FStack_6f0;
  TReferenceControllerBase<1> *local_6e8;
  TReferenceControllerBase<1> *pTStack_6e0;
  UToolMenu *local_6d8;
  undefined1 local_6d0 [8];
  ForAnyElementType local_6c8;
  int local_6c0;
  TSharedPtr<FGeneratedToolMenuWidgets,1> local_6b8;
  FName local_6a8;
  UToolMenu *local_6a0;
  undefined8 local_698;
  FSharedReferencer<1> local_690;
  TSharedRef<SWidget,1> local_688;
  undefined8 local_678;
  FSharedReferencer<1> local_670;
  TSharedRef<SWidget,1> local_668;
  undefined8 local_658;
  FSharedReferencer<1> local_650;
  TSharedRef<SWidget,1> local_648;
  undefined8 local_638;
  FSharedReferencer<1> local_630;
  TSharedRef<SWidget,1> local_628;
  TSharedPtr<FExtender,1> local_618;
  TSharedPtr<FUICommandList_const_,1> local_608;
  TSharedPtr<FExtender,1> local_5f8;
  TSharedPtr<FUICommandList_const_,1> local_5e8;
  TSharedPtr<FUICommandList_const_,1> local_5d8;
  TSharedPtr<FUICommandList_const_,1> local_5c8;
  FDestructionSentinel local_5b8;
  undefined1 local_598 [24];
  ForAnyElementType local_580;
  int local_578;
  ForAnyElementType local_570;
  int local_568;
  bool local_548;
  TSharedRef<FExtender,1> local_538;
  TSharedRef<FMultiBox,1> local_528;
  TSharedRef<FExtender,1> local_518;
  undefined1 local_508 [32];
  FReadAccessScope local_4e8;
  TSharedPtr<FExtender,1> local_4d0;
  TSharedPtr<FExtender,1> local_4c0;
  undefined1 local_4b0 [344];
  undefined1 local_358 [392];
  undefined1 local_1d0 [400];
  
  this->bCleanupStaleWidgetsNextTick = true;
  SetNextTickTimer(this);
  if (param_1->StyleSetName == (FName)0x0) {
    pIVar15 = FAppStyle::Get();
  }
  else {
    pIVar15 = FSlateStyleRegistry::FindSlateStyle(&param_1->StyleSetName);
    if (pIVar15 == (ISlateStyle *)0x0) {
      local_6a0 = param_1;
      `UToolMenu::GetStyleSet'::__l5::<lambda_1>::operator()(&local_6a0);
    }
  }
  pUVar16 = (UToolMenu *)pIVar15;
  if (pIVar15 == (ISlateStyle *)0x0) {
    local_6d8 = (UToolMenu *)pIVar15;
    pUVar16 = (UToolMenu *)FAppStyle::Get();
  }
  local_6f8 = (SWidget *)0x0;
  FStack_6f0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_6d8 = pUVar16;
  cVar11 = (**(code **)(param_1->_padding_ + 0x2b0))(param_1);
  EVar3 = param_1->MenuType;
  if (cVar11 == '\0') {
    if (EVar3 == Menu) {
      FVar24 = param_1->MenuName;
      bVar12 = param_1->bSearchable;
      bVar4 = param_1->bCloseSelfOnly;
      pTVar17 = FExtender::Combine(&local_518,&(param_1->Context).Extenders);
      local_5f8.Object = pTVar17->Object;
      local_5f8.SharedReferenceCount.ReferenceController =
           (pTVar17->SharedReferenceCount).ReferenceController;
      if (local_5f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_5f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_5f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_518.SharedReferenceCount.ReferenceController);
      local_5e8.Object = (param_1->Context).CommandList.Object;
      local_5e8.SharedReferenceCount.ReferenceController =
           (param_1->Context).CommandList.SharedReferenceCount.ReferenceController;
      if (local_5e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_5e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_5e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FMenuBuilder::FMenuBuilder
                ((FMenuBuilder *)local_1d0,param_1->bShouldCloseWindowAfterMenuSelection,&local_5e8,
                 &local_5f8,bVar4,(ISlateStyle *)pUVar16,bVar12,FVar24,true);
      if ((pIVar15 != (ISlateStyle *)0x0) && (param_1->StyleName != (FName)0x0)) {
        FMultiBoxBuilder::SetStyle
                  ((FMultiBoxBuilder *)local_1d0,(ISlateStyle *)pUVar16,&param_1->StyleName);
      }
      local_1d0[0x50] = param_1->bExtendersEnabled;
      PopulateMenuBuilder(this,(FMenuBuilder *)local_1d0,param_1);
      FMenuBuilder::MakeWidget
                ((FMenuBuilder *)local_1d0,&local_668,
                 (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
                  *)0x0,param_1->MaxHeight);
      local_670.ReferenceController = local_668.SharedReferenceCount.ReferenceController;
      if (local_668.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_668.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_668.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_6f8 = local_668.Object;
      local_678 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_6f0,&local_670);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_670.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_668.SharedReferenceCount.ReferenceController);
      FMenuBuilder::~FMenuBuilder((FMenuBuilder *)local_1d0);
    }
    else if (EVar3 == MenuBar) {
      FVar24 = param_1->MenuName;
      pTVar19 = FToolMenuContext::GetAllExtenders(&param_1->Context,&local_4d0);
      local_5d8.Object = (param_1->Context).CommandList.Object;
      local_5d8.SharedReferenceCount.ReferenceController =
           (param_1->Context).CommandList.SharedReferenceCount.ReferenceController;
      if (local_5d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_5d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_5d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FMenuBarBuilder::FMenuBarBuilder
                ((FMenuBarBuilder *)local_598,&local_5d8,pTVar19,(ISlateStyle *)pUVar16,FVar24);
      if ((pIVar15 != (ISlateStyle *)0x0) && (param_1->StyleName != (FName)0x0)) {
        FMultiBoxBuilder::SetStyle
                  ((FMultiBoxBuilder *)local_598,(ISlateStyle *)pUVar16,&param_1->StyleName);
      }
      local_548 = param_1->bExtendersEnabled;
      PopulateMenuBarBuilder(this,(FMenuBarBuilder *)local_598,param_1);
      FMultiBoxBuilder::MakeWidget
                ((FMultiBoxBuilder *)local_598,&local_648,
                 (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
                  *)0x0);
      local_650.ReferenceController = local_648.SharedReferenceCount.ReferenceController;
      if (local_648.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_648.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_648.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_6f8 = local_648.Object;
      local_658 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_6f0,&local_650);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_650.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_648.SharedReferenceCount.ReferenceController);
      local_598._0_8_ = &___7FMultiBoxBuilder__6B_;
      DestructItems<TSharedPtr<FExtender,1>,int>
                ((TSharedPtr<FExtender,1> *)local_570.Data,local_568);
      if ((TSharedPtr<FExtender,1> *)local_570.Data != (TSharedPtr<FExtender,1> *)0x0) {
        FMemory::Free(local_570.Data);
      }
      DestructItems<TSharedPtr<FUICommandList_const_,1>,int>
                ((TSharedPtr<FUICommandList_const_,1> *)local_580.Data,local_578);
      if ((TSharedPtr<FUICommandList_const_,1> *)local_580.Data !=
          (TSharedPtr<FUICommandList_const_,1> *)0x0) {
        FMemory::Free(local_580.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_598._16_8_);
    }
    else if (((byte)(EVar3 - ToolBar) < 4) || ((byte)(EVar3 - SlimHorizontalUniformToolBar) < 2)) {
      bVar12 = param_1->bToolBarForceSmallIcons;
      pTVar19 = FToolMenuContext::GetAllExtenders(&param_1->Context,&local_4c0);
      local_5c8.Object = (param_1->Context).CommandList.Object;
      FVar24 = param_1->MenuName;
      local_5c8.SharedReferenceCount.ReferenceController =
           (param_1->Context).CommandList.SharedReferenceCount.ReferenceController;
      if (local_5c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_5c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_5c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FToolBarBuilder::FToolBarBuilder
                ((FToolBarBuilder *)local_4b0,param_1->MenuType,&local_5c8,
                 (FMultiBoxCustomization)FVar24,pTVar19,bVar12);
      local_4b0[0x50] = param_1->bExtendersEnabled;
      FToolBarBuilder::SetIsFocusable((FToolBarBuilder *)local_4b0,param_1->bToolBarIsFocusable);
      FToolBarBuilder::SetAllowWrapButton
                ((FToolBarBuilder *)local_4b0,&param_1->bAllowToolBarWrapButton);
      if ((pIVar15 != (ISlateStyle *)0x0) && (param_1->StyleName != (FName)0x0)) {
        FMultiBoxBuilder::SetStyle
                  ((FMultiBoxBuilder *)local_4b0,(ISlateStyle *)pUVar16,&param_1->StyleName);
      }
      PopulateToolBarBuilder(this,(FToolBarBuilder *)local_4b0,param_1);
      FMultiBoxBuilder::MakeWidget
                ((FMultiBoxBuilder *)local_4b0,&local_628,
                 (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
                  *)0x0);
      local_630.ReferenceController = local_628.SharedReferenceCount.ReferenceController;
      if (local_628.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_628.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_628.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_6f8 = local_628.Object;
      local_638 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_6f0,&local_630);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_630.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_628.SharedReferenceCount.ReferenceController);
      FToolBarBuilder::~FToolBarBuilder((FToolBarBuilder *)local_4b0);
    }
  }
  else {
    if (((EVar3 == ToolBar) || ((byte)(EVar3 - VerticalToolBar) < 3)) ||
       ((byte)(EVar3 - SlimHorizontalUniformToolBar) < 2)) {
      local_6a8.ComparisonIndex.Value = (param_1->Sections).ArrayNum;
      uVar27 = (ulonglong)(int)local_6a8.ComparisonIndex.Value;
      pFVar33 = (param_1->Sections).AllocatorInstance.Data;
      pFVar30 = pFVar33 + 0x20;
      pFVar31 = pFVar33 + uVar27 * 0x238;
      while( true ) {
        if ((param_1->Sections).ArrayNum != (int)uVar27) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FToolMenuSection,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        pUVar16 = local_6d8;
        if (pFVar33 == pFVar31) break;
        iVar14 = *(int *)pFVar30;
        lVar28 = *(longlong *)(pFVar30 + -8);
        lVar34 = (longlong)iVar14 * 0x780 + lVar28;
        while( true ) {
          if (*(int *)pFVar30 != iVar14) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<FToolMenuEntry,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res20);
          }
          if (lVar28 == lVar34) break;
          if (*(char *)(lVar28 + 0x18) == '\x06') {
            *(undefined1 *)(lVar28 + 0x18) = 4;
            lVar28 = lVar28 + 0x780;
          }
          else {
            if ((*(char *)(lVar28 + 0x18) == '\a') &&
               (*(undefined1 *)(lVar28 + 0x18) = 4, *(char *)(lVar28 + 400) != '\0')) {
              *(undefined1 *)(lVar28 + 0x48) = 1;
            }
            lVar28 = lVar28 + 0x780;
          }
        }
        uVar27 = (ulonglong)local_6a8.ComparisonIndex.Value;
        pFVar33 = pFVar33 + 0x238;
        pFVar30 = pFVar30 + 0x238;
      }
    }
    FVar24 = param_1->MenuName;
    bVar12 = param_1->bSearchable;
    bVar4 = param_1->bCloseSelfOnly;
    pTVar17 = FExtender::Combine(&local_538,&(param_1->Context).Extenders);
    local_618.Object = pTVar17->Object;
    local_618.SharedReferenceCount.ReferenceController =
         (pTVar17->SharedReferenceCount).ReferenceController;
    if (local_618.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_618.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_618.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_538.SharedReferenceCount.ReferenceController);
    local_608.Object = (param_1->Context).CommandList.Object;
    local_608.SharedReferenceCount.ReferenceController =
         (param_1->Context).CommandList.SharedReferenceCount.ReferenceController;
    if (local_608.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_608.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_608.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FMenuBuilder::FMenuBuilder
              ((FMenuBuilder *)local_358,param_1->bShouldCloseWindowAfterMenuSelection,&local_608,
               &local_618,bVar4,(ISlateStyle *)pUVar16,bVar12,FVar24,true);
    local_358[0x50] = param_1->bExtendersEnabled;
    PopulateMenuBuilder(this,(FMenuBuilder *)local_358,param_1);
    this_00 = &param_1->ModifyBlockWidgetAfterMake;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FReadAccessScope *)(local_508 + 8));
    if (((*(int *)&(param_1->ModifyBlockWidgetAfterMake).field_0x10 == 0) ||
        (plVar5 = *(longlong **)&(param_1->ModifyBlockWidgetAfterMake).field_0x8,
        plVar5 == (longlong *)0x0)) || (cVar11 = (**(code **)(*plVar5 + 0x38))(), cVar11 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_508 + 8));
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)(local_508 + 8));
      pTVar18 = FMultiBoxBuilder::GetMultiBox((FMultiBoxBuilder *)local_358,&local_528);
      this_01 = &pTVar18->Object->ModifyBlockWidgetAfterMake;
      if (this_00 != this_01) {
        local_6d0 = (undefined1  [8])0x0;
        local_6c8.Data = (FScriptContainerElement *)0x0;
        local_6c0 = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_4e8);
        if ((*(int *)&(param_1->ModifyBlockWidgetAfterMake).field_0x10 != 0) &&
           (plVar5 = *(longlong **)&(param_1->ModifyBlockWidgetAfterMake).field_0x8,
           plVar5 != (longlong *)0x0)) {
          (**(code **)(*plVar5 + 0x50))(plVar5,local_6d0);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_4e8);
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_01,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6d0);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6d0,
                   (FWriteAccessScope *)&local_5b8);
        if ((local_6c0 != 0) && (local_6c8.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)local_6c8.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_6c8,0,0,0x10);
          local_6c0 = 0;
        }
        if (local_5b8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5b8.Accessor,&local_5b8);
        }
        if (local_6c8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6c8.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_6d0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_528.SharedReferenceCount.ReferenceController);
    }
    FMenuBuilder::MakeWidget
              ((FMenuBuilder *)local_358,&local_688,
               (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
                *)0x0);
    local_690.ReferenceController = local_688.SharedReferenceCount.ReferenceController;
    if (local_688.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_688.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_688.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_6f8 = local_688.Object;
    local_698 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_6f0,&local_690);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_690.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_688.SharedReferenceCount.ReferenceController);
    FMenuBuilder::~FMenuBuilder((FMenuBuilder *)local_358);
  }
  pTVar32 = (TReferenceControllerBase<1> *)0x0;
  FVar24 = param_1->MenuName;
  uVar13 = ::GetTypeHash(FVar24.ComparisonIndex.Value);
  pTVar20 = TMapBase<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>_>
            ::FindOrAddImpl<FName_const_&>
                      ((TMapBase<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>_>
                        *)&this->GeneratedMenuWidgets,FVar24.Number + uVar13,&param_1->MenuName);
  if (pTVar20->Object == (FGeneratedToolMenuWidgets *)0x0) {
    local_6b8.SharedReferenceCount.ReferenceController = ::operator_new(0x20);
    if (local_6b8.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_6b8.Object = (FGeneratedToolMenuWidgets *)___xmm_00000000000000000000000000000010;
      pTVar35 = (TReferenceControllerBase<1> *)&DAT_00000010;
      local_6b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
      pTVar29 = pTVar32;
    }
    else {
      (local_6b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      pTVar35 = local_6b8.SharedReferenceCount.ReferenceController + 1;
      (local_6b8.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (local_6b8.SharedReferenceCount.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFGeneratedToolMenuWidgets___00_SharedPointerInternals__6B_
      ;
      local_6b8.SharedReferenceCount.ReferenceController[1]._padding_ = 0;
      local_6b8.SharedReferenceCount.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
      local_6b8.SharedReferenceCount.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
      if ((pTVar35 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        pTVar21 = (TSharedRef<SWidget,1> *)(*pcVar8)();
        return pTVar21;
      }
      LOCK();
      (local_6b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_6b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      pTVar29 = local_6b8.SharedReferenceCount.ReferenceController;
      local_6b8.Object = (FGeneratedToolMenuWidgets *)pTVar35;
    }
    if (pTVar20 != &local_6b8) {
      pTVar20->Object = (FGeneratedToolMenuWidgets *)pTVar35;
      local_6b8.Object = (FGeneratedToolMenuWidgets *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&pTVar20->SharedReferenceCount,&local_6b8.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6b8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar29);
    if ((pTVar20->Object == (FGeneratedToolMenuWidgets *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      pTVar21 = (TSharedRef<SWidget,1> *)(*pcVar8)();
      return pTVar21;
    }
  }
  pFVar6 = pTVar20->Object;
  pTStack_6e0 = ::operator_new(0x30);
  if (pTStack_6e0 == (TReferenceControllerBase<1> *)0x0) {
    local_6e8 = ___xmm_00000000000000000000000000000010;
    pTStack_6e0 = _UNK_150651568;
  }
  else {
    pTStack_6e0->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_6e0->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_6e0->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFGeneratedToolMenuWidget___00_SharedPointerInternals__6B_
    ;
    pTStack_6e0[1]._padding_ = 0;
    pTStack_6e0[1].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_6e0[1].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_6e0[2]._padding_ = 0;
    pTStack_6e0[2].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_6e0[2].WeakReferenceCount = (atomic<int>)0x0;
    if ((pTStack_6e0 + 1 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      pTVar21 = (TSharedRef<SWidget,1> *)(*pcVar8)();
      return pTVar21;
    }
    LOCK();
    pTStack_6e0->SharedReferenceCount = (atomic<int>)((int)pTStack_6e0->SharedReferenceCount + 1);
    UNLOCK();
    pTVar32 = pTStack_6e0;
    local_6e8 = pTStack_6e0 + 1;
  }
  pFVar30 = (pFVar6->Instances).AllocatorInstance.Data;
  if (((pFVar30 <= (FScriptContainerElement *)&local_6e8) &&
      ((FScriptContainerElement *)&local_6e8 <
       pFVar30 + (longlong)(pFVar6->Instances).ArrayMax * 0x10)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar8 = (code *)swi(3);
    pTVar21 = (TSharedRef<SWidget,1> *)(*pcVar8)();
    return pTVar21;
  }
  iVar14 = (pFVar6->Instances).ArrayNum;
  piVar1 = &(pFVar6->Instances).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,(ForAnyElementType *)pFVar6,piVar1);
  }
  (pFVar6->Instances).ArrayNum = iVar14 + 1;
  pFVar30 = (pFVar6->Instances).AllocatorInstance.Data + (longlong)iVar14 * 0x10;
  *(TReferenceControllerBase<1> **)pFVar30 = local_6e8;
  *(TReferenceControllerBase<1> **)(pFVar30 + 8) = pTStack_6e0;
  pTStack_6e0 = (TReferenceControllerBase<1> *)0x0;
  local_6e8 = (TReferenceControllerBase<1> *)0x0;
  if ((*(longlong *)pFVar30 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    pTVar21 = (TSharedRef<SWidget,1> *)(*pcVar8)();
    return pTVar21;
  }
  plVar5 = *(longlong **)pFVar30;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_6e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32);
  local_6d8 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)(plVar5 + 3),(FObjectPtr)&local_6d8);
  pFVar22 = ::FName::FName(&local_6a8,"MenuForRefresh");
  FVar24 = *pFVar22;
  FVar23 = (FName)StaticClass();
  FVar24 = MakeUniqueObjectName
                     ((UObject *)local_508,(UClass *)this,FVar23,FVar24.ComparisonIndex.Value.Value)
  ;
  FVar24 = *(FName *)FVar24;
  pUVar25 = UToolMenu::StaticClass();
  pUVar26 = DuplicateObject_Internal(pUVar25,(UObject *)param_1,(UObject *)this,FVar24);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar26 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar26);
  }
  *plVar5 = (longlong)pUVar26;
  pUVar26[1].field_0x21 = 1;
  FToolMenuContext::operator=((FToolMenuContext *)(*plVar5 + 0x68),&param_1->Context);
  FVar10.ReferenceController = FStack_6f0.ReferenceController;
  *(FName *)(*plVar5 + 0x10c) = param_1->StyleSetName;
  *(FName *)(*plVar5 + 0x38) = param_1->StyleName;
  if (local_6f8 == (SWidget *)0x0) {
    __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
    FVar9 = SNullWidget::NullWidget.SharedReferenceCount;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(FVar9.ReferenceController)->SharedReferenceCount;
      *paVar2 = (atomic<int>)((int)*paVar2 + 1);
      UNLOCK();
    }
  }
  else {
    plVar5[1] = (longlong)local_6f8;
    if (FStack_6f0.ReferenceController != (TReferenceControllerBase<1> *)plVar5[2]) {
      if (FStack_6f0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FStack_6f0.ReferenceController)->WeakReferenceCount =
             (atomic<int>)((int)(FStack_6f0.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar7 = (longlong *)plVar5[2];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      plVar5[2] = (longlong)FVar10.ReferenceController;
    }
    __return_storage_ptr__->Object = local_6f8;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar10.ReferenceController;
    if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar10.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((__return_storage_ptr__->Object == (SWidget *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      pTVar21 = (TSharedRef<SWidget,1> *)(*pcVar8)();
      return pTVar21;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  return __return_storage_ptr__;
}

// GenerateWidget @ 142c5d0e0

TSharedRef<SWidget,1> * __thiscall
UToolMenus::GenerateWidget
          (UToolMenus *this,TSharedRef<SWidget,1> *__return_storage_ptr__,FName param_1,
          FToolMenuContext *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<UToolMenu_*,TSizedDefaultAllocator<32>_> *pTVar4;
  UToolMenu *pUVar5;
  TSharedRef<SWidget,1> *pTVar6;
  UToolMenu *local_88;
  FToolMenuContext local_80;
  TArray<UToolMenu_*,TSizedDefaultAllocator<32>_> local_18;
  
  TMulticastDelegate<void___cdecl(FName,FToolMenuContext_const_&),FDefaultDelegateUserPolicy>::
  Broadcast(&this->OnPreGenerateWidget,param_1,param_2);
  pTVar4 = CollectHierarchy(this,&local_18,param_1);
  pUVar5 = GenerateMenuFromHierarchy(this,pTVar4,param_2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  GenerateWidget(this,__return_storage_ptr__,pUVar5);
  local_80.bIsEditing = false;
  local_80.ContextObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ContextObjects.ArrayNum = 0;
  local_80.ContextObjects.ArrayMax = 0;
  local_80.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ContextObjectCleanupFuncs.Pairs.ArrayNum = 0;
  local_80.ContextObjectCleanupFuncs.Pairs.ArrayMax = 0;
  local_80.ContextCleanupFuncs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ContextCleanupFuncs.ArrayNum = 0;
  local_80.ContextCleanupFuncs.ArrayMax = 0;
  local_80.CommandLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.CommandLists.ArrayNum = 0;
  local_80.CommandLists.ArrayMax = 0;
  local_80.Extenders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.Extenders.ArrayNum = 0;
  local_80.Extenders.ArrayMax = 0;
  local_80.CommandList.Object = (FUICommandList *)0x0;
  local_80.CommandList.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  if (pUVar5 != (UToolMenu *)0x0) {
    local_88 = pUVar5;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    if ((local_80.ContextObjects.AllocatorInstance.Data <= (FScriptContainerElement *)&local_88) &&
       ((FScriptContainerElement *)&local_88 <
        local_80.ContextObjects.AllocatorInstance.Data +
        (longlong)local_80.ContextObjects.ArrayMax * 8)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TSharedRef<SWidget,1> *)(*pcVar1)();
        return pTVar6;
      }
    }
    iVar3 = local_80.ContextObjects.ArrayNum;
    if (local_80.ContextObjects.ArrayNum == local_80.ContextObjects.ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_80.ContextObjects.AllocatorInstance,
                         &local_80.ContextObjects.ArrayMax);
    }
    local_80.ContextObjects.ArrayNum = iVar3 + 1;
    *(UToolMenu **)(local_80.ContextObjects.AllocatorInstance.Data + (longlong)iVar3 * 8) = local_88
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_88 != (UToolMenu *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_88);
    }
  }
  TMulticastDelegate<void___cdecl(FName,FToolMenuContext_const_&),FDefaultDelegateUserPolicy>::
  Broadcast(&this->OnPostGenerateWidget,param_1,&local_80);
  DestructItems<TSharedPtr<FExtender,1>,int>
            ((TSharedPtr<FExtender,1> *)local_80.Extenders.AllocatorInstance.Data,
             local_80.Extenders.ArrayNum);
  if ((TSharedPtr<FExtender,1> *)local_80.Extenders.AllocatorInstance.Data !=
      (TSharedPtr<FExtender,1> *)0x0) {
    FMemory::Free(local_80.Extenders.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.CommandList.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FUICommandList,1>,int>
            ((TSharedPtr<FUICommandList,1> *)local_80.CommandLists.AllocatorInstance.Data,
             local_80.CommandLists.ArrayNum);
  if ((TSharedPtr<FUICommandList,1> *)local_80.CommandLists.AllocatorInstance.Data !=
      (TSharedPtr<FUICommandList,1> *)0x0) {
    FMemory::Free(local_80.CommandLists.AllocatorInstance.Data);
  }
  DestructItems<TFunction<void___cdecl(void)>,int>
            ((TFunction<void___cdecl(void)> *)local_80.ContextCleanupFuncs.AllocatorInstance.Data,
             local_80.ContextCleanupFuncs.ArrayNum);
  if ((TFunction<void___cdecl(void)> *)local_80.ContextCleanupFuncs.AllocatorInstance.Data !=
      (TFunction<void___cdecl(void)> *)0x0) {
    FMemory::Free(local_80.ContextCleanupFuncs.AllocatorInstance.Data);
  }
  DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
            ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
             local_80.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data,
             local_80.ContextObjectCleanupFuncs.Pairs.ArrayNum);
  if ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
      local_80.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data !=
      (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
    FMemory::Free(local_80.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data);
  }
  if (local_80.ContextObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.ContextObjects.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Get @ 142c5d560

UToolMenus * __cdecl UToolMenus::Get(void)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this;
  FName local_res8 [4];
  
  if ((Singleton == (UToolMenus *)0x0) && (!bHasShutDown)) {
    pFVar2 = ::FName::FName(local_res8,"ToolMenus");
    FVar1 = *pFVar2;
    this = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this,FVar1);
    Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
  }
  return Singleton;
}

// GetDisplayUIExtensionPoints @ 142c5ded0

bool __thiscall UToolMenus::GetDisplayUIExtensionPoints(UToolMenus *this)

{
  char cVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->ShouldDisplayExtensionPoints,&local_28);
  if (((*(int *)&(this->ShouldDisplayExtensionPoints).field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(this->ShouldDisplayExtensionPoints).field_0x8,
      plVar2 == (longlong *)0x0)) || (cVar1 = (**(code **)(*plVar2 + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    return false;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->ShouldDisplayExtensionPoints,&local_28);
  if (*(int *)&(this->ShouldDisplayExtensionPoints).field_0x10 == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = *(longlong **)&(this->ShouldDisplayExtensionPoints).field_0x8;
  }
  cVar1 = (**(code **)(*plVar2 + 0x60))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (cVar1 == '\0') {
    return false;
  }
  return true;
}

// GetEditMenusMode @ 142c5df60

bool __thiscall UToolMenus::GetEditMenusMode(UToolMenus *this)

{
  return this->bEditMenusMode;
}

// GetPrivateStaticClass @ 142c5f980

UClass * __cdecl UToolMenus::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolMenus.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolMenus",L"ToolMenus",
               &Z_Registration_Info_UClass_UToolMenus.InnerSingleton,StaticRegisterNativesUToolMenus
               ,0x378,8,CLASS_Intrinsic,CASTCLASS_None,L"EditorPerProjectUserSettings",
               InternalConstructor<UToolMenus>,InternalVTableHelperCtorCaller<UToolMenus>,local_res8
               ,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolMenus.InnerSingleton;
}

// HandleNextTick @ 142c60ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UToolMenus::HandleNextTick(UToolMenus *this)

{
  ulonglong uVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  byte bVar6;
  longlong lVar7;
  int iVar8;
  uint *puVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  FName *pFVar12;
  uint uVar13;
  TSharedPtr<FGeneratedToolMenuWidget,1> *pTVar14;
  undefined1 auStackY_148 [32];
  undefined1 local_108;
  undefined1 local_107;
  bool local_106;
  ForAnyElementType local_100;
  int local_f8;
  int local_f4;
  longlong *local_f0;
  uint uStack_e8;
  uint uStack_e4;
  TBitArray<FDefaultBitArrayAllocator> *local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  uint local_d0;
  uint uStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  int local_c0;
  int local_bc;
  longlong *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_50;
  int local_40 [2];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if ((this->bCleanupStaleWidgetsNextTick == false) && (this->bRefreshWidgetsNextTick == false)) {
    this->bNextTickTimerIsSet = false;
  }
  else {
    CleanupStaleWidgets(this);
    this->bCleanupStaleWidgetsNextTick = false;
    this->bCleanupStaleWidgetsNextTickGC = false;
    if (this->bRefreshWidgetsNextTick != false) {
      local_88._8_4_ = 0;
      local_106 = this->bSuppressRefreshWidgetsRequests;
      this->bSuppressRefreshWidgetsRequests = true;
      local_88._0_8_ = 0;
      local_88._8_8_ = 0;
      local_68 = (uint *)0x0;
      local_60 = 0;
      local_5c = 0x80;
      local_58 = 0xffffffff;
      local_54 = 0;
      local_50.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_40[0] = 0;
      if ((TMap<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>_>
           *)local_88 != &this->GeneratedMenuWidgets) {
        UE::Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  (&local_50,local_40,
                   (ForElementType<FSetElementId> *)&(this->GeneratedMenuWidgets).field_0x38,
                   *(int *)&(this->GeneratedMenuWidgets).field_0x48);
        TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,
                    (TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->GeneratedMenuWidgets);
      }
      uVar13 = local_60;
      uStack_e8 = 0;
      uStack_e4 = 1;
      uStack_d4 = uStack_e8;
      local_d0 = uStack_e8;
      if (local_60 != 0) {
        puVar9 = (uint *)(local_88 + 0x10);
        if (local_68 != (uint *)0x0) {
          puVar9 = local_68;
        }
        uVar11 = *puVar9;
        local_d0 = 0;
        uStack_e8 = 0;
        while (uVar11 == 0) {
          lVar7 = (longlong)(int)uStack_e8;
          local_d0 = local_d0 + 0x20;
          uStack_e8 = uStack_e8 + 1;
          uStack_d4 = local_60;
          if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_e8)
          goto LAB_142c60c3f;
          uVar11 = puVar9[lVar7 + 1];
        }
        uStack_e4 = -uVar11 & uVar11;
        uVar1 = (ulonglong)uStack_e4 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        local_c0 = (int)lVar7;
        uStack_d4 = (local_d0 - 1) + local_c0;
        if ((int)local_60 < (int)uStack_d4) {
          uStack_d4 = local_60;
        }
      }
LAB_142c60c3f:
      iStack_c8 = local_88._8_4_ - local_54;
      local_f0 = (longlong *)local_88;
      local_e0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
      uStack_d8 = 0xffffffff;
      TStack_b0.CurrentBitIndex = uStack_d4;
      TStack_b0.UnvisitedBitMask = 0xffffffff;
      uVar11 = local_60 & 0xffffffe0;
      TStack_b0._padding_ = CONCAT44(uStack_e4,uStack_e8);
      iVar8 = (int)local_60 >> 5;
      TStack_b0._28_4_ = uStack_d4;
      TStack_b0.BaseBitIndex = local_d0;
      uStack_90 = CONCAT44(uStack_c4,iStack_c8);
      bVar6 = (byte)local_60;
      uStack_cc = uStack_d4;
      local_b8 = local_f0;
      TStack_b0.Array = local_e0;
      if (((int)local_60 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar13 != local_60) {
        puVar9 = (uint *)(local_88 + 0x10);
        if (local_68 != (uint *)0x0) {
          puVar9 = local_68;
        }
        uVar13 = -1 << (bVar6 & 0x1f) & puVar9[iVar8];
        while (uVar13 == 0) {
          lVar7 = (longlong)iVar8;
          uVar11 = uVar11 + 0x20;
          iVar8 = iVar8 + 1;
          uVar13 = local_60;
          if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
          goto LAB_142c60d42;
          uVar13 = puVar9[lVar7 + 1];
        }
        uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar7 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        local_bc = (int)lVar7;
        uVar13 = local_bc + -1 + uVar11;
        if ((int)local_60 < (int)uVar13) {
          uVar13 = local_60;
        }
      }
LAB_142c60d42:
      while( true ) {
        plVar4 = local_b8;
        if ((int)local_b8[1] - *(int *)((longlong)local_b8 + 0x34) != (int)uStack_90) {
          local_108 = 0;
          `TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_108);
        }
        bVar5 = local_106;
        if (((TStack_b0.CurrentBitIndex == uVar13) &&
            (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
           (plVar4 == (longlong *)local_88)) break;
        pFVar12 = (FName *)((longlong)TStack_b0.CurrentBitIndex * 0x20 + *plVar4);
        if ((pFVar12[1] == (FName)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_100.Data = (FScriptContainerElement *)0x0;
        iVar8 = *(int *)((longlong)pFVar12[1] + 8);
        pTVar14 = *(TSharedPtr<FGeneratedToolMenuWidget,1> **)pFVar12[1];
        local_f8 = iVar8;
        if (iVar8 == 0) {
          local_f4 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar8,0,&local_100,iVar8,&local_f4);
          ConstructItems<TSharedPtr<FGeneratedToolMenuWidget,1>,TSharedPtr<FGeneratedToolMenuWidget,1>,int>
                    (local_100.Data,pTVar14,iVar8);
        }
        iVar8 = local_f8;
        pTVar14 = (TSharedPtr<FGeneratedToolMenuWidget,1> *)
                  (local_100.Data + (longlong)local_f8 * 0x10);
        FVar10.Data = local_100.Data;
        while( true ) {
          if (local_f8 != iVar8) {
            local_107 = 0;
            `TCheckedPointerIterator<TSharedPtr<FGeneratedToolMenuWidget,1>,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_107);
          }
          if ((TSharedPtr<FGeneratedToolMenuWidget,1> *)FVar10.Data == pTVar14) break;
          if ((((TSharedPtr<FGeneratedToolMenuWidget,1> *)FVar10.Data)->Object ==
               (FGeneratedToolMenuWidget *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((((((TSharedPtr<FGeneratedToolMenuWidget,1> *)FVar10.Data)->Object->Widget).Object !=
                (SWidget *)0x0) &&
              (pTVar2 = (((TSharedPtr<FGeneratedToolMenuWidget,1> *)FVar10.Data)->Object->Widget).
                        WeakReferenceCount.ReferenceController,
              pTVar2 != (TReferenceControllerBase<1> *)0x0)) &&
             (0 < (int)pTVar2->SharedReferenceCount)) {
            if ((((TSharedPtr<FGeneratedToolMenuWidget,1> *)FVar10.Data)->Object ==
                 (FGeneratedToolMenuWidget *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x44d,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            RefreshMenuWidget(this,*pFVar12,
                              ((TSharedPtr<FGeneratedToolMenuWidget,1> *)FVar10.Data)->Object);
          }
          FVar10.Data = FVar10.Data + 0x10;
        }
        DestructItems<TSharedPtr<FGeneratedToolMenuWidget,1>,int>
                  ((TSharedPtr<FGeneratedToolMenuWidget,1> *)local_100.Data,local_f8);
        if ((TSharedPtr<FGeneratedToolMenuWidget,1> *)local_100.Data !=
            (TSharedPtr<FGeneratedToolMenuWidget,1> *)0x0) {
          FMemory::Free(local_100.Data);
        }
        TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
      }
      this->bRefreshWidgetsNextTick = false;
      local_40[0] = 0;
      if (local_50.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_50.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_88);
      this->bSuppressRefreshWidgetsRequests = bVar5;
    }
    this->bNextTickTimerIsSet = false;
  }
  return;
}

// IsMenuRegistered @ 142c63720

bool __thiscall UToolMenus::IsMenuRegistered(UToolMenus *this,FName param_1)

{
  TObjectPtr<UToolMenu>_u_0 *pTVar1;
  
  pTVar1 = &TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
            ::Find((TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
                    *)&this->Menus,param_1)->field0_0x0;
  if (((pTVar1 != (TObjectPtr<UToolMenu>_u_0 *)0x0) && (pTVar1->DebugPtr != (UToolMenu *)0x0)) &&
     (*(char *)((longlong)pTVar1->DebugPtr + 0x108) != '\0')) {
    return true;
  }
  return false;
}

// IsToolMenuUIEnabled @ 142c63bf0

bool __cdecl UToolMenus::IsToolMenuUIEnabled(void)

{
  return false;
}

// JoinMenuPaths @ 142c63d70

FName __cdecl UToolMenus::JoinMenuPaths(FName param_1,FName param_2)

{
  FString *pFVar1;
  FString *pFVar2;
  ForAnyElementType FVar3;
  FName local_res10;
  FName local_res18 [2];
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_res10 = param_2;
  pFVar1 = ::FName::ToString(local_res18,&local_18);
  pFVar2 = ::FName::ToString(&local_res10,&local_28);
  ::FString::ConcatFC(&local_38,pFVar2,L".");
  ::FString::ConcatFF(&local_48,&local_38,pFVar1);
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar3.Data = local_48.Data.AllocatorInstance.Data;
  }
  ::FName::FName((FName *)param_1,(wchar_t *)FVar3.Data);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return param_1;
}

// ListAllParents @ 142c63e40

/* WARNING: Removing unreachable block (ram,0x000142c63e8c) */

void __thiscall
UToolMenus::ListAllParents
          (UToolMenus *this,FName param_1,TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  TArray<UToolMenu_*,TSizedDefaultAllocator<32>_> local_38;
  
  CollectHierarchy(this,&local_38,param_1);
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar6.Data = local_38.AllocatorInstance.Data;
  do {
    if (FVar6.Data == pFVar1) {
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      return;
    }
    pFVar2 = (param_2->AllocatorInstance).Data;
    pFVar7 = (FScriptContainerElement *)(*(longlong *)FVar6.Data + 0x28);
    if ((pFVar2 <= pFVar7) && (pFVar7 < pFVar2 + (longlong)param_2->ArrayMax * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&param_2->AllocatorInstance,&param_2->ArrayMax);
      param_2->ArrayNum = iVar5;
    }
    param_2->ArrayNum = iVar5 + 1;
    FVar6.Data = FVar6.Data + 8;
    *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = *(undefined8 *)pFVar7
    ;
  } while( true );
}

// ModifyEntryForEditDialog @ 142c64f70

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl UToolMenus::ModifyEntryForEditDialog(FToolMenuEntry *param_1)

{
  bool bVar1;
  
  if (param_1->Type == ToolBarButton) {
    param_1->Type = MenuEntry;
    return;
  }
  if ((param_1->Type == ToolBarComboButton) &&
     (bVar1 = (param_1->ToolBarData).bSimpleComboBox, param_1->Type = MenuEntry, bVar1 != false)) {
    (param_1->SubMenuData).bIsSubMenu = true;
  }
  return;
}

// NewToolMenuObject @ 142c64fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UToolMenu * __thiscall UToolMenus::NewToolMenuObject(UToolMenus *this,FName param_1,FName param_2)

{
  FName FVar1;
  UClass *pUVar2;
  UToolMenu *pUVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  FVar1 = (FName)StaticClass();
  local_b8 = 0;
  MakeUniqueObjectName
            ((UObject *)&local_a8,(UClass *)this,FVar1,param_1.ComparisonIndex.Value.Value);
  if (local_a8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar2 = UToolMenu::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._16_4_ = local_a8.ComparisonIndex.Value;
  local_98._20_4_ = local_a8.Number;
  local_98._24_4_ = RF_NoFlags;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = this;
  pUVar3 = (UToolMenu *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98)
  ;
  if (local_98._64_8_ == 0) {
    pUVar3->MenuName = param_2;
  }
  else {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
    pUVar3->MenuName = param_2;
  }
  return pUVar3;
}

// PopOwner @ 142c65530

void __thiscall UToolMenus::PopOwner(UToolMenus *this,FToolMenuOwner *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  if ((this->OwnerStack).ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar2 = (this->OwnerStack).ArrayNum;
  pFVar1 = (this->OwnerStack).AllocatorInstance.Data + (longlong)iVar2 * 0x10 + -0x10;
  lVar4 = *(longlong *)pFVar1;
  lVar5 = *(longlong *)(pFVar1 + 8);
  (this->OwnerStack).ArrayNum = iVar2 + -1;
  if (((param_1->field0_0x0).ValueInt64 != lVar4) || (param_1->ValueType != (EValueType)lVar5)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("PoppedOwner == InOwner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolMenus\\Private\\ToolMenus.cpp"
                       ,0xdbc,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// PopulateMenuBarBuilder @ 142c660e0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UToolMenus::PopulateMenuBarBuilder(UToolMenus *this,FMenuBarBuilder *param_1,UToolMenu *param_2)

{
  FName FVar1;
  longlong *plVar2;
  code *pcVar3;
  FWeakObjectPtr FVar4;
  longlong lVar5;
  FName FVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  FName *pFVar12;
  FText *pFVar13;
  FText *pFVar14;
  FTextFormat *pFVar15;
  TSharedRef<FMultiBox,1> *pTVar16;
  ulonglong uVar17;
  FToolMenuEntry *pFVar18;
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  FToolMenuEntry *pFVar19;
  undefined1 local_res8 [8];
  FBaseMenuBuilder *local_res10;
  uint local_res18;
  uint local_res20;
  undefined1 local_348 [8];
  FDelegateAllocation local_340;
  FWeakObjectPtr local_330;
  FWeakObjectPtr local_328;
  undefined8 local_320;
  undefined8 local_318;
  FName local_310;
  FToolMenuEntry *local_308;
  longlong local_300;
  FName local_2f8;
  FName local_2f0;
  undefined1 local_2e8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2d0;
  ForAnyElementType FStack_2c8;
  ulonglong local_2c0;
  undefined1 local_2b8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2a0;
  ForAnyElementType FStack_298;
  ulonglong local_290;
  undefined1 local_288 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_270;
  ForAnyElementType FStack_268;
  ulonglong local_260;
  undefined1 local_258 [8];
  undefined1 local_250 [8];
  void *pvStack_248;
  undefined8 local_240;
  undefined1 local_238 [8];
  FDelegateAllocation local_230;
  UToolMenu *local_220;
  UToolMenus *local_218;
  FScriptContainerElement *local_210;
  UToolMenu *local_208;
  FDestructionSentinel local_200;
  FDestructionSentinel local_1e8;
  FDestructionSentinel local_1d0;
  FDestructionSentinel local_1b8;
  FDestructionSentinel local_1a0;
  FDelegateAllocation *local_188;
  FDestructionSentinel local_180;
  FDelegateAllocation *local_168;
  undefined1 local_160 [24];
  undefined1 local_148 [24];
  undefined1 local_130 [24];
  undefined1 local_118 [32];
  FReadAccessScope local_f8;
  FReadAccessScope local_e0;
  FReadAccessScope local_c8;
  TSharedRef<FMultiBox,1> local_b0;
  FText local_a0;
  FText local_90;
  FText local_80;
  FName local_70;
  FTextFormat local_68;
  FText local_58;
  
  local_res18 = 0;
  local_res10 = (FBaseMenuBuilder *)param_1;
  if (0 < (param_2->Sections).ArrayNum) {
    local_300 = 0;
    do {
      lVar5 = local_300;
      uVar9 = 0;
      if ((int)local_res18 < (param_2->Sections).ArrayNum) {
        uVar9 = ~local_res18 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_210 = (param_2->Sections).AllocatorInstance.Data + lVar5 + 0x18;
      local_res20 = *(uint *)(local_210 + 8);
      uVar17 = (ulonglong)(int)local_res20;
      pFVar19 = *(FToolMenuEntry **)local_210;
      this_00 = &(pFVar19->SubMenuData).ConstructMenu.OnGetContent;
      pFVar18 = pFVar19 + uVar17;
      local_308 = pFVar18;
      while( true ) {
        if (*(int *)(local_210 + 8) != (int)uVar17) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FToolMenuEntry_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar19 == pFVar18) break;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_f8);
        if (((*(int *)&this_00->field_0x10 == 0) ||
            (*(longlong **)&this_00->field_0x8 == (longlong *)0x0)) ||
           (cVar8 = (**(code **)(**(longlong **)&this_00->field_0x8 + 0x38))(), cVar8 == '\0')) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_f8);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(this_00 + 3),
                     &local_e0);
          if (((*(int *)&this_00[3].field_0x10 == 0) ||
              (*(longlong **)&this_00[3].field_0x8 == (longlong *)0x0)) ||
             (cVar8 = (**(code **)(**(longlong **)&this_00[3].field_0x8 + 0x38))(), cVar8 == '\0'))
          {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_e0);
            FVar1 = pFVar19->Name;
            local_310.ComparisonIndex.Value = 0;
            local_310.Number = 0;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)param_2);
            }
            local_330.ObjectIndex = 0;
            local_330.ObjectSerialNumber = 0;
            local_220 = param_2;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)param_2);
            }
            FWeakObjectPtr::operator=(&local_330,(FObjectPtr)&local_220);
            local_348 = (undefined1  [8])0x0;
            local_340.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
            local_340.DelegateSize = 0;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_348,
                       (FWriteAccessScope *)&local_1a0);
            local_188 = &local_340;
            puVar10 = UE::Core::Private::DelegateAllocate(0x7b0,&local_340);
            if (puVar10 != (undefined8 *)0x0) {
              *puVar10 = &
                         ___7__TCommonDelegateInstanceState___A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUToolMenu__UFWeakObjectPtr____UFToolMenuEntry__VFName____6B_
              ;
              *(FWeakObjectPtr *)(puVar10 + 1) = local_330;
              FToolMenuEntry::FToolMenuEntry((FToolMenuEntry *)(puVar10 + 2),pFVar19);
              *(FName *)(puVar10 + 0xf2) = pFVar19->Name;
              uVar11 = FDelegateHandle::GenerateNewID();
              puVar10[0xf3] = uVar11;
              *puVar10 = &
                         ___7__TBaseUObjectMethodDelegateInstance__0A_VUToolMenus____A6AXAEAVFMenuBuilder___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUToolMenu__UFWeakObjectPtr____UFToolMenuEntry__VFName____6B_
              ;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (this != (UToolMenus *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)this);
              }
              puVar10[0xf4] = 0;
              local_218 = this;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (this != (UToolMenus *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)this);
              }
              FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 0xf4),(FObjectPtr)&local_218);
              puVar10[0xf5] = PopulateSubMenu;
              param_1 = (FMenuBarBuilder *)local_res10;
            }
            if (local_1a0.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a0.Accessor,&local_1a0);
            }
            FMenuBarBuilder::AddPullDownMenu
                      (param_1,(TAttribute<FText> *)&this_00[0x2e].field_0x10,
                       (TAttribute<FText> *)&this_00[0x30].field_0x10,
                       (TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)
                       local_348,FVar1,local_310);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_348,
                       (FWriteAccessScope *)&local_1d0);
            if ((local_340.DelegateSize != 0) &&
               (local_340.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
              (*(code *)**(undefined8 **)local_340.DelegateAllocator)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&local_340,0,0,0x10);
              local_340.DelegateSize = 0;
            }
            if (local_1d0.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1d0.Accessor,&local_1d0);
            }
            if (local_340.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free((void *)local_340.DelegateAllocator);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_348);
            pFVar18 = local_308;
          }
          else {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_e0);
            local_318 = 0;
            FMenuBarBuilder::AddPullDownMenu
                      (param_1,(TAttribute<FText> *)&this_00[0x2e].field_0x10,
                       (TAttribute<FText> *)&this_00[0x30].field_0x10,
                       (TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)
                       (this_00 + 3),pFVar19->Name,(FName)0x0);
            pFVar18 = local_308;
          }
        }
        else {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_f8);
          local_320 = 0;
          FMenuBarBuilder::AddPullDownMenu
                    (param_1,(TAttribute<FText> *)&this_00[0x2e].field_0x10,
                     (TAttribute<FText> *)&this_00[0x30].field_0x10,this_00,pFVar19->Name,(FName)0x0
                    );
        }
        pFVar19 = pFVar19 + 1;
        uVar17 = (ulonglong)local_res20;
        this_00 = this_00 + 0x50;
      }
      local_res18 = local_res18 + 1;
      local_300 = local_300 + 0x238;
    } while ((int)local_res18 < (param_2->Sections).ArrayNum);
  }
  cVar8 = (**(code **)(param_2->_padding_ + 0x2b0))(param_2);
  if ((this->bEditMenusMode != false) && (cVar8 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->EditMenuDelegate,
               &local_c8);
    if ((*(int *)&(this->EditMenuDelegate).field_0x10 == 0) ||
       ((plVar2 = *(longlong **)&(this->EditMenuDelegate).field_0x8, plVar2 == (longlong *)0x0 ||
        (cVar8 = (**(code **)(*plVar2 + 0x38))(), cVar8 == '\0')))) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_c8);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_c8);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      local_328.ObjectIndex = 0;
      local_328.ObjectSerialNumber = 0;
      local_208 = param_2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      FWeakObjectPtr::operator=(&local_328,(FObjectPtr)&local_208);
      local_2f8 = param_2->MenuName;
      local_258[0] = (TEnumAsByte<EVisibility::Private>)0x19;
      local_258[1] = false;
      local_240 = 0;
      local_250 = (undefined1  [8])0x0;
      pvStack_248 = (void *)0x0;
      FText::FText((FText *)local_288);
      local_288[0x10] = false;
      local_260 = 0;
      local_2f0.ComparisonIndex.Value = 0;
      local_2f0.Number = 0;
      local_270.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_268.Data = (FScriptContainerElement *)0x0;
      pFVar12 = ::FName::FName(&local_70,"MenuName");
      FVar6 = local_2f8;
      FVar4 = local_328;
      FVar1 = *pFVar12;
      local_238 = (undefined1  [8])0x0;
      local_230.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_230.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_238,
                 (FWriteAccessScope *)&local_180);
      local_168 = &local_230;
      puVar10 = UE::Core::Private::DelegateAllocate(0x28,&local_230);
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar11 = FDelegateHandle::GenerateNewID();
        puVar10[2] = uVar11;
        *puVar10 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::PopulateMenuBarBuilder'::`20'::<lambda_1>_>
                    ::_vftable_;
        *(FName *)(puVar10 + 3) = FVar6;
        *(FWeakObjectPtr *)(puVar10 + 4) = FVar4;
      }
      if (local_180.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_180.Accessor,&local_180);
      }
      FUIAction::FUIAction
                ((FUIAction *)local_160,
                 (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_238,
                 RepeatDisabled);
      pFVar13 = FText::FromName(&local_58,&local_2f8);
      pFVar14 = FText::AsLocalizable_Advanced_LocText
                          (&local_a0,L"ToolMenuSubsystem",L"EditMenuBar_ToolTip",L"Edit Menu: {0}");
      pFVar15 = FTextFormat::FTextFormat(&local_68,pFVar14,Default);
      pFVar13 = FText::Format<FText>(&local_90,pFVar15,pFVar13);
      FText::FText((FText *)local_2b8,pFVar13);
      local_2b8[0x10] = true;
      local_290 = 0;
      local_2a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_298.Data = (FScriptContainerElement *)0x0;
      pFVar13 = FText::AsLocalizable_Advanced_LocText
                          (&local_80,L"ToolMenuSubsystem",L"EditMenuBar_Label",L"Edit Menu");
      FText::FText((FText *)local_2e8,pFVar13);
      local_2e8[0x10] = true;
      local_2c0 = 0;
      local_2d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_2c8.Data = (FScriptContainerElement *)0x0;
      FBaseMenuBuilder::AddMenuEntry
                ((FBaseMenuBuilder *)param_1,(TAttribute<FText> *)local_2e8,
                 (TAttribute<FText> *)local_2b8,&this->EditMenuIcon,(FUIAction *)local_160,FVar1,
                 Button,local_2f0,(TAttribute<FText> *)local_288,
                 (TAttribute<EVisibility> *)local_258);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_2d0,(FWriteAccessScope *)&local_1e8);
      if (((int)local_2c0 != 0) && (FStack_2c8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_2c8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2c8,0,0,0x10);
        local_2c0 = local_2c0 & 0xffffffff00000000;
      }
      if (local_1e8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e8.Accessor,&local_1e8);
      }
      if (FStack_2c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_2c8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2d0.AccessDetector);
      if ((ITextData *)local_2e8._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_2e8._0_8_ + 0x10))();
      }
      if (local_80.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_2a0,(FWriteAccessScope *)&local_200);
      if (((int)local_290 != 0) && (FStack_298.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_298.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_298,0,0,0x10);
        local_290 = local_290 & 0xffffffff00000000;
      }
      if (local_200.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_200.Accessor,&local_200);
      }
      if (FStack_298.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_298.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2a0.AccessDetector);
      if ((ITextData *)local_2b8._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_2b8._0_8_ + 0x10))();
      }
      if (local_90.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
      }
      if (local_a0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_118);
      if ((void *)local_118._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_118._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_118);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_130);
      if ((void *)local_130._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_130._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_130);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_148);
      if ((void *)local_148._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_148._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_148);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_160);
      if ((void *)local_160._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_160._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_160);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_270,(FWriteAccessScope *)&local_1b8);
      if (((int)local_260 != 0) && (FStack_268.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_268.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_268,0,0,0x10);
        local_260 = local_260 & 0xffffffff00000000;
      }
      if (local_1b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b8.Accessor,&local_1b8);
      }
      if (FStack_268.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_268.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_270.AccessDetector);
      if ((ITextData *)local_288._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_288._0_8_ + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_250);
      if (pvStack_248 != (void *)0x0) {
        FMemory::Free(pvStack_248);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_250);
    }
  }
  pTVar16 = FMultiBoxBuilder::GetMultiBox((FMultiBoxBuilder *)param_1,&local_b0);
  AddReferencedContextObjects(this,pTVar16,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.SharedReferenceCount.ReferenceController);
  return;
}

// PopulateMenuBuilder @ 142c66a80

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UToolMenus::PopulateMenuBuilder(UToolMenus *this,FMenuBuilder *param_1,UToolMenu *param_2)

{
  TAttribute<FText> *this_00;
  int iVar1;
  FName FVar2;
  longlong *plVar3;
  FMultiBox *pFVar4;
  code *pcVar5;
  FWeakObjectPtr FVar6;
  FName FVar7;
  longlong lVar8;
  char cVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  FName *pFVar13;
  undefined8 *puVar14;
  ulong64 uVar15;
  FText *pFVar16;
  FText *pFVar17;
  FTextFormat *pFVar18;
  TSharedRef<FMultiBox,1> *pTVar19;
  longlong *plVar20;
  FToolMenuEntry *pFVar21;
  FToolMenuSection *pFVar22;
  uint uVar23;
  FToolMenuEntry *pFVar24;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FWeakObjectPtr local_638;
  FText local_630;
  FName local_620;
  FName local_618;
  longlong local_610;
  undefined1 local_608 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_5f0;
  ForAnyElementType FStack_5e8;
  ulonglong local_5e0;
  undefined1 local_5d8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_5c0;
  ForAnyElementType FStack_5b8;
  ulonglong local_5b0;
  undefined1 local_5a8 [8];
  undefined1 local_5a0 [8];
  void *pvStack_598;
  undefined8 local_590;
  undefined1 local_588 [8];
  FDelegateAllocation local_580;
  undefined1 local_570 [8];
  UToolMenu *local_568;
  UToolMenu *local_560;
  undefined1 local_558 [24];
  undefined1 local_540 [8];
  void *pvStack_538;
  undefined8 local_530;
  undefined1 local_528 [24];
  undefined1 local_510 [8];
  void *pvStack_508;
  undefined8 local_500;
  FText local_4f8;
  FDestructionSentinel local_4e8;
  FDestructionSentinel local_4d0;
  FDestructionSentinel local_4b8;
  FDestructionSentinel local_4a0;
  FDelegateAllocation *local_488;
  undefined1 local_480 [8];
  undefined1 local_478 [24];
  undefined1 local_460 [8];
  undefined1 local_458 [24];
  FName local_440;
  FText local_438;
  FText local_428;
  FText local_418;
  FReadAccessScope local_408;
  FReadAccessScope local_3f0;
  TSharedRef<FMultiBox,1> local_3d8;
  TSharedRef<FMultiBox,1> local_3c8;
  FText local_3b8;
  undefined1 local_3a8 [184];
  undefined1 local_2f0 [8];
  void *pvStack_2e8;
  undefined8 local_2e0;
  bool local_2d8;
  bool local_2d6;
  FReadAccessScope local_2d0;
  FReadAccessScope local_2b8;
  undefined1 local_2a0 [208];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1d0;
  ForAnyElementType FStack_1c8;
  ulonglong local_1c0;
  FTextFormat local_1b8;
  FText local_1a8;
  undefined1 local_198 [208];
  undefined1 local_c8 [8];
  void *pvStack_c0;
  undefined8 local_b8;
  FUIAction local_b0;
  
  param_1->bSearchable = param_2->bSearchable;
  cVar9 = (**(code **)(param_2->_padding_ + 0x2b0))(param_2);
  if (((this->bEditMenusMode != false) && (cVar9 == '\0')) &&
     (bVar10 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                         ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->EditMenuDelegate),
     bVar10)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_638.ObjectIndex = 0;
    local_638.ObjectSerialNumber = 0;
    local_568 = param_2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_638,(FObjectPtr)&local_568);
    local_620 = param_2->MenuName;
    local_5a8[0] = (TEnumAsByte<EVisibility::Private>)0x19;
    local_5a8[1] = false;
    local_590 = 0;
    local_5a0 = (undefined1  [8])0x0;
    pvStack_598 = (void *)0x0;
    FText::FText((FText *)local_5d8);
    local_5d8[0x10] = false;
    local_5b0 = 0;
    local_618.ComparisonIndex.Value = 0;
    local_618.Number = 0;
    local_5c0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_5b8.Data = (FScriptContainerElement *)0x0;
    pFVar13 = ::FName::FName(&local_440,"MenuName");
    FVar7 = local_620;
    FVar6 = local_638;
    FVar2 = *pFVar13;
    local_588 = (undefined1  [8])0x0;
    local_580.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_580.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_588,
               (FWriteAccessScope *)&local_4a0);
    local_488 = &local_580;
    puVar14 = UE::Core::Private::DelegateAllocate(0x28,&local_580);
    if (puVar14 != (undefined8 *)0x0) {
      *puVar14 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar15 = FDelegateHandle::GenerateNewID();
      puVar14[2] = uVar15;
      *puVar14 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::PopulateMenuBuilder'::`5'::<lambda_1>_>
                  ::_vftable_;
      *(FName *)(puVar14 + 3) = FVar7;
      *(FWeakObjectPtr *)(puVar14 + 4) = FVar6;
    }
    if (local_4a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4a0.Accessor,&local_4a0);
    }
    FUIAction::FUIAction
              (&local_b0,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_588,
               RepeatDisabled);
    pFVar16 = FText::AsLocalizable_Advanced_LocText
                        (&local_418,L"ToolMenuSubsystem",L"EditMenu_ToolTip",L"Open menu editor");
    FText::FText((FText *)local_558,pFVar16);
    local_558[0x10] = true;
    local_530 = 0;
    local_540 = (undefined1  [8])0x0;
    pvStack_538 = (void *)0x0;
    pFVar16 = FText::FromName(&local_1a8,&local_620);
    pFVar17 = FText::AsLocalizable_Advanced_LocText
                        (&local_428,L"ToolMenuSubsystem",L"EditMenu_Label",L"Edit Menu: {0}");
    pFVar18 = FTextFormat::FTextFormat(&local_1b8,pFVar17,Default);
    pFVar16 = FText::Format<FText>(&local_438,pFVar18,pFVar16);
    FText::FText((FText *)local_528,pFVar16);
    local_528[0x10] = true;
    local_500 = 0;
    local_510 = (undefined1  [8])0x0;
    pvStack_508 = (void *)0x0;
    FBaseMenuBuilder::AddMenuEntry
              ((FBaseMenuBuilder *)param_1,(TAttribute<FText> *)local_528,
               (TAttribute<FText> *)local_558,&this->EditMenuIcon,&local_b0,FVar2,Button,local_618,
               (TAttribute<FText> *)local_5d8,(TAttribute<EVisibility> *)local_5a8);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_510);
    if (pvStack_508 != (void *)0x0) {
      FMemory::Free(pvStack_508);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_510);
    if ((ITextData *)local_528._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_528._0_8_ + 0x10))();
    }
    if (local_438.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_438.TextData.Reference + 0x10))();
    }
    if (local_428.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_428.TextData.Reference + 0x10))();
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_540);
    if (pvStack_538 != (void *)0x0) {
      FMemory::Free(pvStack_538);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_540);
    if ((ITextData *)local_558._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_558._0_8_ + 0x10))();
    }
    if (local_418.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_418.TextData.Reference + 0x10))();
    }
    FUIAction::~FUIAction(&local_b0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_5c0,(FWriteAccessScope *)&local_4d0);
    if (((int)local_5b0 != 0) && (FStack_5b8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_5b8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_5b8,0,0,0x10);
      local_5b0 = local_5b0 & 0xffffffff00000000;
    }
    if (local_4d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4d0.Accessor,&local_4d0);
    }
    if (FStack_5b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_5b8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_5c0.AccessDetector);
    if ((ITextData *)local_5d8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_5d8._0_8_ + 0x10))();
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5a0);
    if (pvStack_598 != (void *)0x0) {
      FMemory::Free(pvStack_598);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_5a0);
  }
  uVar23 = 0;
  if (0 < (param_2->Sections).ArrayNum) {
    local_610 = 0;
    do {
      lVar8 = local_610;
      plVar20 = (longlong *)0x0;
      uVar12 = 0;
      if ((int)uVar23 < (param_2->Sections).ArrayNum) {
        uVar12 = ~uVar23 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar22 = (FToolMenuSection *)((param_2->Sections).AllocatorInstance.Data + lVar8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(pFVar22->Construct).NewToolMenuDelegateLegacy,&local_408);
      if (((*(int *)&(pFVar22->Construct).NewToolMenuDelegateLegacy.field_0x10 == 0) ||
          (plVar3 = *(longlong **)&(pFVar22->Construct).NewToolMenuDelegateLegacy.field_0x8,
          plVar3 == (longlong *)0x0)) || (cVar11 = (**(code **)(*plVar3 + 0x38))(), cVar11 == '\0'))
      {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_408);
        this_00 = &pFVar22->Label;
        if (cVar9 == '\0') {
          FMenuEntryResizeParams::FMenuEntryResizeParams
                    ((FMenuEntryResizeParams *)local_2a0,&pFVar22->ResizeParams);
          local_2a0[200] = true;
          local_1c0 = 0;
          local_1d0.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          FStack_1c8.Data = (FScriptContainerElement *)0x0;
          FToolMenuVisibilityChoice::ToVisibilityAttribute
                    (&pFVar22->Visibility,(TAttribute<EVisibility> *)local_460);
          FMenuBuilder::BeginSection
                    (param_1,pFVar22->Name,this_00,(TAttribute<EVisibility> *)local_460,
                     (TAttribute<FMenuEntryResizeParams> *)local_2a0);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_458);
          if ((void *)local_458._8_8_ != (void *)0x0) {
            FMemory::Free((void *)local_458._8_8_);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_458);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_1d0,(FWriteAccessScope *)&local_4e8);
          if (((int)local_1c0 != 0) && (FStack_1c8.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_1c8.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_1c8,0,0,0x10);
            local_1c0 = local_1c0 & 0xffffffff00000000;
          }
          if (local_4e8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4e8.Accessor,&local_4e8);
          }
          if (FStack_1c8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_1c8.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1d0.AccessDetector);
          FMenuEntryResizeParams::~FMenuEntryResizeParams((FMenuEntryResizeParams *)local_2a0);
        }
        else {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &(pFVar22->Label).Getter,&local_3f0);
          if (((*(int *)&(pFVar22->Label).Getter.field_0x10 == 0) ||
              (plVar3 = *(longlong **)&(pFVar22->Label).Getter.field_0x8, plVar3 == (longlong *)0x0)
              ) || (cVar11 = (**(code **)(*plVar3 + 0x38))(), cVar11 == '\0')) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_3f0);
          }
          else {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_3f0);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &(pFVar22->Label).Getter,&local_2b8);
            if (*(int *)&(pFVar22->Label).Getter.field_0x10 != 0) {
              plVar20 = *(longlong **)&(pFVar22->Label).Getter.field_0x8;
            }
            (**(code **)(*plVar20 + 0x60))(plVar20,&local_4f8);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_2b8);
            FText::operator=(&this_00->Value,&local_4f8);
            if (local_4f8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_4f8.TextData.Reference + 0x10))();
            }
          }
          local_630.TextData.Reference = (this_00->Value).TextData.Reference;
          if (local_630.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_630.TextData.Reference + 8))
                      (local_630.TextData.Reference,local_res20);
          }
          local_630.Flags = (pFVar22->Label).Value.Flags;
          bVar10 = FText::IsEmpty(&local_630);
          if (bVar10) {
            pFVar16 = FText::FromName(&local_3b8,(FName *)pFVar22);
            FText::operator=(&local_630,pFVar16);
            if (local_3b8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_3b8.TextData.Reference + 0x10))();
            }
          }
          FMenuEntryResizeParams::FMenuEntryResizeParams
                    ((FMenuEntryResizeParams *)local_198,&pFVar22->ResizeParams);
          local_198[200] = true;
          local_b8 = 0;
          local_c8 = (undefined1  [8])0x0;
          pvStack_c0 = (void *)0x0;
          FToolMenuVisibilityChoice::ToVisibilityAttribute
                    (&pFVar22->Visibility,(TAttribute<EVisibility> *)local_480);
          local_608._0_8_ = local_630.TextData.Reference;
          if (local_630.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_630.TextData.Reference + 8))
                      (local_630.TextData.Reference,local_570);
          }
          local_608._8_4_ = local_630.Flags;
          local_608[0x10] = true;
          local_5e0 = 0;
          local_5f0.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          FStack_5e8.Data = (FScriptContainerElement *)0x0;
          FMenuBuilder::BeginSection
                    (param_1,pFVar22->Name,(TAttribute<FText> *)local_608,
                     (TAttribute<EVisibility> *)local_480,
                     (TAttribute<FMenuEntryResizeParams> *)local_198);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_5f0,(FWriteAccessScope *)&local_4b8);
          if (((int)local_5e0 != 0) && (FStack_5e8.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_5e8.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_5e8,0,0,0x10);
            local_5e0 = local_5e0 & 0xffffffff00000000;
          }
          if (local_4b8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4b8.Accessor,&local_4b8);
          }
          if (FStack_5e8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_5e8.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_5f0.AccessDetector);
          if ((ITextData *)local_608._0_8_ != (ITextData *)0x0) {
            (**(code **)((longlong)*(ITextData *)local_608._0_8_ + 0x10))();
          }
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_478);
          if ((void *)local_478._8_8_ != (void *)0x0) {
            FMemory::Free((void *)local_478._8_8_);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_478);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
          if (pvStack_c0 != (void *)0x0) {
            FMemory::Free(pvStack_c0);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_c8);
          FMenuEntryResizeParams::~FMenuEntryResizeParams((FMenuEntryResizeParams *)local_198);
          if (local_630.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_630.TextData.Reference + 0x10))();
          }
        }
        iVar1 = (pFVar22->Blocks).ArrayNum;
        pFVar21 = (FToolMenuEntry *)(pFVar22->Blocks).AllocatorInstance.Data;
        pFVar24 = pFVar21 + iVar1;
        while( true ) {
          if ((pFVar22->Blocks).ArrayNum != iVar1) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<FToolMenuEntry,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res18);
          }
          if (pFVar21 == pFVar24) break;
          local_3a8._32_8_ = pFVar21->Name;
          local_3a8._0_8_ = param_1;
          local_3a8._8_8_ = param_2;
          local_3a8._16_8_ = pFVar22;
          local_3a8._24_8_ = pFVar21;
          FUIAction::FUIAction((FUIAction *)(local_3a8 + 0x28));
          local_3a8._144_8_ = (SWidget *)0x0;
          local_3a8._152_8_ = (TReferenceControllerBase<1> *)0x0;
          FText::FText((FText *)(local_3a8 + 0xa0));
          local_3a8[0xb0] = false;
          local_2e0 = 0;
          local_2f0 = (undefined1  [8])0x0;
          pvStack_2e8 = (void *)0x0;
          local_2d8 = true;
          local_2d6 = (bool)(**(code **)(param_2->_padding_ + 0x2b0))(param_2);
          FPopulateMenuBuilderWithToolMenuEntry::Populate
                    ((FPopulateMenuBuilderWithToolMenuEntry *)local_3a8);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f0);
          if (pvStack_2e8 != (void *)0x0) {
            FMemory::Free(pvStack_2e8);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_2f0);
          if ((ITextData *)local_3a8._160_8_ != (ITextData *)0x0) {
            (**(code **)((longlong)*(ITextData *)local_3a8._160_8_ + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_3a8._152_8_);
          FUIAction::~FUIAction((FUIAction *)(local_3a8 + 0x28));
          pFVar21 = pFVar21 + 1;
        }
        FMenuBuilder::EndSection(param_1);
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_408);
        if (cVar9 == '\0') {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &(pFVar22->Construct).NewToolMenuDelegateLegacy,&local_2d0);
          if (*(int *)&(pFVar22->Construct).NewToolMenuDelegateLegacy.field_0x10 != 0) {
            plVar20 = *(longlong **)&(pFVar22->Construct).NewToolMenuDelegateLegacy.field_0x8;
          }
          (**(code **)(*plVar20 + 0x60))(plVar20,param_1,param_2);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_2d0);
        }
      }
      uVar23 = uVar23 + 1;
      local_610 = local_610 + 0x238;
    } while ((int)uVar23 < (param_2->Sections).ArrayNum);
  }
  pTVar19 = FMultiBoxBuilder::GetMultiBox((FMultiBoxBuilder *)param_1,&local_3c8);
  pFVar4 = pTVar19->Object;
  local_560 = param_2;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&(pFVar4->WeakToolMenu).WeakPtr,(FObjectPtr)&local_560);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3c8.SharedReferenceCount.ReferenceController);
  pTVar19 = FMultiBoxBuilder::GetMultiBox((FMultiBoxBuilder *)param_1,&local_3d8);
  AddReferencedContextObjects(this,pTVar19,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3d8.SharedReferenceCount.ReferenceController);
  return;
}

// PopulateSubMenu @ 142c67580

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
UToolMenus::PopulateSubMenu
          (UToolMenus *this,FMenuBuilder *param_1,TWeakObjectPtr<UToolMenu,FWeakObjectPtr> param_2,
          FToolMenuEntry *param_3,FName param_4)

{
  TOptional<FName> *pTVar1;
  UToolMenu *pUVar2;
  ISlateStyle *pIVar3;
  FName *pFVar4;
  FWeakObjectPtr local_res18 [2];
  
  local_res18[0] = param_2.WeakPtr;
  pUVar2 = (UToolMenu *)FWeakObjectPtr::Get(local_res18);
  pUVar2 = GenerateSubMenu(this,pUVar2,param_4);
  if (pUVar2 != (UToolMenu *)0x0) {
    *(bool *)&param_1->_padding_ = pUVar2->bExtendersEnabled;
    pIVar3 = FMultiBoxBuilder::GetStyleSet((FMultiBoxBuilder *)param_1);
    if ((param_3->SubMenuData).Style.StyleSet.bIsSet != false) {
      pIVar3 = (param_3->SubMenuData).Style.StyleSet.TypedValue;
    }
    pTVar1 = &(param_3->SubMenuData).Style.StyleName;
    pFVar4 = FMultiBoxBuilder::GetStyleName((FMultiBoxBuilder *)param_1);
    if ((pTVar1->field0_0x0).TypedValue.ComparisonIndex.Value != 0xffffffff) {
      pFVar4 = (FName *)pTVar1;
    }
    FMultiBoxBuilder::SetStyle((FMultiBoxBuilder *)param_1,pIVar3,pFVar4);
    PopulateMenuBuilder(this,param_1,pUVar2);
  }
  FToolMenuEntry::~FToolMenuEntry(param_3);
  return;
}

// PopulateSubMenuWithoutName @ 142c67650

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
UToolMenus::PopulateSubMenuWithoutName
          (UToolMenus *this,FMenuBuilder *param_1,TWeakObjectPtr<UToolMenu,FWeakObjectPtr> param_2,
          FToolMenuEntry *param_3)

{
  TDelegate<void___cdecl(UToolMenu_*),FDefaultDelegateUserPolicy> *this_00;
  char cVar1;
  UToolMenu *pUVar2;
  FName *pFVar3;
  UToolMenu *pUVar4;
  longlong *plVar5;
  FWeakObjectPtr local_res18 [2];
  FReadAccessScope local_60;
  FName local_48 [2];
  
  local_res18[0] = param_2.WeakPtr;
  pUVar2 = (UToolMenu *)FWeakObjectPtr::Get(local_res18);
  if (pUVar2 != (UToolMenu *)0x0) {
    this_00 = &(param_3->SubMenuData).ConstructMenu.NewToolMenu;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_60);
    if (((*(int *)&(param_3->SubMenuData).ConstructMenu.NewToolMenu.field_0x10 == 0) ||
        (plVar5 = *(longlong **)&(param_3->SubMenuData).ConstructMenu.NewToolMenu.field_0x8,
        plVar5 == (longlong *)0x0)) || (cVar1 = (**(code **)(*plVar5 + 0x38))(), cVar1 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_60);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_60);
      plVar5 = (longlong *)0x0;
      pFVar3 = ::FName::FName(local_48,L"SubMenuWithoutName");
      pUVar4 = NewToolMenuObject(this,*pFVar3,(FName)0x0);
      FToolMenuContext::operator=(&pUVar4->Context,&pUVar2->Context);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      (pUVar4->SubMenuParent).field0_0x0.DebugPtr = pUVar2;
      (pUVar4->SubMenuSourceEntryName).ComparisonIndex = 0;
      (pUVar4->SubMenuSourceEntryName).Number = 0;
      ApplyStyleToBuilder(this,param_1,&(param_3->SubMenuData).Style);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_60);
      if (*(int *)&(param_3->SubMenuData).ConstructMenu.NewToolMenu.field_0x10 != 0) {
        plVar5 = *(longlong **)&(param_3->SubMenuData).ConstructMenu.NewToolMenu.field_0x8;
      }
      (**(code **)(*plVar5 + 0x60))(plVar5,pUVar4);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_60);
      (pUVar4->MenuName).ComparisonIndex = 0;
      (pUVar4->MenuName).Number = 0;
      PopulateMenuBuilder(this,param_1,pUVar4);
    }
  }
  FToolMenuEntry::~FToolMenuEntry(param_3);
  return;
}

// PopulateToolBarBuilder @ 142c677c0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
UToolMenus::PopulateToolBarBuilder(UToolMenus *this,FToolBarBuilder *param_1,UToolMenu *param_2)

{
  byte *pbVar1;
  FName FVar2;
  FToolMenuSection *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  EToolMenuSectionAlign EVar6;
  float fVar7;
  FWeakObjectPtr FVar8;
  SSpacer *this_00;
  FSharedReferencer<1> FVar9;
  char cVar10;
  bool bVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  TAttribute<FText> *pTVar15;
  FText *pFVar16;
  FName *pFVar17;
  undefined8 *puVar18;
  ulong64 uVar19;
  FArguments *pFVar20;
  TSharedRef<FMultiBox,1> *pTVar21;
  longlong lVar22;
  longlong *plVar23;
  uint uVar24;
  FName FVar25;
  EToolMenuSectionAlign EVar26;
  int iVar27;
  FToolMenuEntry *pFVar28;
  FIdentityFunctor local_res8;
  ForAnyElementType local_c28;
  int local_c20;
  int iStack_c1c;
  T0RequiredArgs local_c18 [4];
  uint local_c14;
  undefined1 local_c10 [4];
  FLLMScope local_c0c;
  FScriptContainerElement *local_c08;
  FName local_c00;
  undefined4 local_bf8;
  undefined1 local_bf4;
  undefined1 local_bf0 [8];
  ForAnyElementType FStack_be8;
  ulonglong local_be0;
  FWeakObjectPtr local_bd8;
  undefined2 local_bd0;
  undefined1 local_bc8 [8];
  ForAnyElementType FStack_bc0;
  ulonglong local_bb8;
  undefined2 local_bb0;
  undefined1 local_ba8 [8];
  ForAnyElementType FStack_ba0;
  ulonglong local_b98;
  float local_b90;
  undefined1 local_b8c;
  undefined1 local_b88 [8];
  ForAnyElementType FStack_b80;
  ulonglong local_b78;
  undefined1 local_b70 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b68;
  ForAnyElementType FStack_b60;
  ulonglong local_b58;
  undefined1 local_b50 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b48;
  ForAnyElementType FStack_b40;
  ulonglong local_b38;
  undefined1 local_b30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b28;
  ForAnyElementType FStack_b20;
  ulonglong local_b18;
  undefined1 local_b10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b08;
  ForAnyElementType FStack_b00;
  ulonglong local_af8;
  int local_af0;
  bool local_aec;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_ae8;
  ForAnyElementType FStack_ae0;
  ulonglong local_ad8;
  undefined1 local_ad0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_ac8;
  ForAnyElementType FStack_ac0;
  ulonglong local_ab8;
  bool local_aaf;
  bool local_aad;
  bool local_aa8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_aa0;
  ForAnyElementType FStack_a98;
  ulonglong local_a90;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> local_a88;
  FName local_a70;
  longlong local_a68;
  FName local_a60;
  undefined1 local_a58 [80];
  undefined1 local_a08 [8];
  void *pvStack_a00;
  undefined8 local_9f8;
  float local_9f0;
  bool local_9ec;
  undefined1 local_9e8 [8];
  void *pvStack_9e0;
  undefined8 local_9d8;
  FOptionalSize local_9d0;
  bool local_9cc;
  undefined1 local_9c8 [8];
  void *pvStack_9c0;
  undefined8 local_9b8;
  FOptionalSize local_9b0;
  bool local_9ac;
  undefined1 local_9a8 [8];
  void *pvStack_9a0;
  undefined8 local_998;
  undefined1 local_990 [8];
  FDelegateAllocation local_988;
  undefined1 local_978 [8];
  undefined1 local_970 [8];
  void *pvStack_968;
  undefined8 local_960;
  undefined1 local_958 [8];
  undefined1 local_950 [8];
  void *pvStack_948;
  undefined8 local_940;
  undefined1 local_938 [8];
  undefined1 local_930 [8];
  void *pvStack_928;
  undefined8 local_920;
  FWrappingParams local_918;
  UToolMenu *local_8b0;
  FName local_8a8;
  FMemScope local_8a0;
  TAttribute<EVisibility> local_898;
  TAttribute<EVisibility> local_878;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> local_858;
  TSharedRef<SWidget,1> local_840;
  undefined1 local_830 [40];
  undefined1 local_808 [8];
  void *pvStack_800;
  undefined8 local_7f8;
  FDestructionSentinel local_7f0;
  FDestructionSentinel local_7d8;
  FDestructionSentinel local_7c0;
  FDestructionSentinel local_7a8;
  FDestructionSentinel local_790;
  FDestructionSentinel local_778;
  FDestructionSentinel local_760;
  FDestructionSentinel local_748;
  TAttribute<FText> local_730;
  TAttribute<FText> local_700;
  FDestructionSentinel local_6d0;
  FDestructionSentinel local_6b8;
  FDestructionSentinel local_6a0;
  FDestructionSentinel local_688;
  FDestructionSentinel local_670;
  FDelegateAllocation *local_658;
  FReadAccessScope local_650;
  TSharedRef<FMultiBox,1> local_638;
  FText local_628;
  FText local_618;
  TSharedPtr<FToolBarButtonBlock,1> local_608;
  FName local_5f8;
  FReadAccessScope local_5f0;
  undefined1 local_5d8 [208];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_508;
  ForAnyElementType FStack_500;
  ulonglong local_4f8;
  undefined1 local_4f0 [208];
  undefined1 local_420 [8];
  void *pvStack_418;
  undefined8 local_410;
  undefined1 local_408 [208];
  undefined1 local_338 [8];
  void *pvStack_330;
  undefined8 local_328;
  FUIAction local_320;
  TAttribute<FText> local_2b8;
  undefined1 local_288 [528];
  undefined1 local_78 [56];
  
  if (((this->bEditMenusMode != false) &&
      (cVar10 = (**(code **)(param_2->_padding_ + 0x2b0))(param_2), cVar10 == '\0')) &&
     (bVar11 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                         ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->EditMenuDelegate),
     bVar11)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_bd8.ObjectIndex = 0;
    local_bd8.ObjectSerialNumber = 0;
    local_8b0 = param_2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_bd8,(FObjectPtr)&local_8b0);
    FVar25 = param_2->MenuName;
    memset(local_b70,0,200);
    local_af0 = 0;
    local_b58 = 0;
    local_b38 = 0;
    local_b18 = 0;
    local_af8 = 0;
    local_ad8 = 0;
    local_ab8 = 0;
    local_a90 = 0;
    local_b68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_b60.Data = (FScriptContainerElement *)0x0;
    local_b50[0] = false;
    local_b50[1] = false;
    local_b48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_b40.Data = (FScriptContainerElement *)0x0;
    local_b30[0] = false;
    local_b30[1] = false;
    local_b28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_b20.Data = (FScriptContainerElement *)0x0;
    local_b10[0] = false;
    local_b10[1] = false;
    local_b08.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_b00.Data = (FScriptContainerElement *)0x0;
    local_aec = false;
    local_ae8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_ae0.Data = (FScriptContainerElement *)0x0;
    local_ad0[0] = Preferred;
    local_ad0[1] = false;
    local_ac8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_ac0.Data = (FScriptContainerElement *)0x0;
    local_aaf = false;
    local_aad = false;
    local_aa8 = false;
    local_aa0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_a98.Data = (FScriptContainerElement *)0x0;
    FToolBarBuilder::BeginSection
              (param_1,FVar25,true,(TAttribute<FMenuEntryResizeParams> *)local_b70);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_aa0,(FWriteAccessScope *)&local_748);
    if (((int)local_a90 != 0) && (FStack_a98.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_a98.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a98,0,0,0x10);
      local_a90 = local_a90 & 0xffffffff00000000;
    }
    if (local_748.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_748.Accessor,&local_748);
    }
    if (FStack_a98.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_a98.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_aa0.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_ac8,(FWriteAccessScope *)&local_6d0);
    if (((int)local_ab8 != 0) && (FStack_ac0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_ac0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_ac0,0,0,0x10);
      local_ab8 = local_ab8 & 0xffffffff00000000;
    }
    if (local_6d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6d0.Accessor,&local_6d0);
    }
    if (FStack_ac0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_ac0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_ac8.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_ae8,(FWriteAccessScope *)&local_6b8);
    if (((int)local_ad8 != 0) && (FStack_ae0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_ae0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_ae0,0,0,0x10);
      local_ad8 = local_ad8 & 0xffffffff00000000;
    }
    if (local_6b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6b8.Accessor,&local_6b8);
    }
    if (FStack_ae0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_ae0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_ae8.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_b08,(FWriteAccessScope *)&local_6a0);
    if (((int)local_af8 != 0) && (FStack_b00.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_b00.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b00,0,0,0x10);
      local_af8 = local_af8 & 0xffffffff00000000;
    }
    if (local_6a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6a0.Accessor,&local_6a0);
    }
    if (FStack_b00.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_b00.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b08.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_b28,(FWriteAccessScope *)&local_688);
    if (((int)local_b18 != 0) && (FStack_b20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_b20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b20,0,0,0x10);
      local_b18 = local_b18 & 0xffffffff00000000;
    }
    if (local_688.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_688.Accessor,&local_688);
    }
    if (FStack_b20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_b20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b28.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_b48,(FWriteAccessScope *)&local_7f0);
    if (((int)local_b38 != 0) && (FStack_b40.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_b40.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b40,0,0,0x10);
      local_b38 = local_b38 & 0xffffffff00000000;
    }
    if (local_7f0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7f0.Accessor,&local_7f0);
    }
    if (FStack_b40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_b40.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b48.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_b68,(FWriteAccessScope *)&local_7d8);
    if (((int)local_b58 != 0) && (FStack_b60.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_b60.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b60,0,0,0x10);
      local_b58 = local_b58 & 0xffffffff00000000;
    }
    if (local_7d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7d8.Accessor,&local_7d8);
    }
    if (FStack_b60.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_b60.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b68.AccessDetector);
    memset(local_5d8,0,200);
    FMenuEntryResizeParams::FMenuEntryResizeParams((FMenuEntryResizeParams *)local_5d8);
    local_5d8[200] = false;
    local_4f8 = 0;
    local_508.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_500.Data = (FScriptContainerElement *)0x0;
    pTVar15 = TAttribute<FText>::TAttribute<FText>(&local_2b8);
    local_830._0_8_ = (this->EditToolbarIcon).StyleSetName;
    local_830._8_8_ = (this->EditToolbarIcon).StyleName;
    local_898.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
    local_898.bIsSet = false;
    local_a60.ComparisonIndex.Value = 0;
    local_a60.Number = 0;
    local_898.Getter._0_8_ = 0;
    local_898.Getter._8_8_ = 0;
    local_830._16_8_ = (this->EditToolbarIcon).SmallStyleName;
    local_830._24_8_ = (this->EditToolbarIcon).StatusOverlayStyleName;
    local_898.Getter._16_8_ = 0;
    local_830[0x20] = true;
    local_808 = (undefined1  [8])0x0;
    pvStack_800 = (void *)0x0;
    local_7f8 = 0;
    pFVar16 = FText::AsLocalizable_Advanced_LocText
                        (&local_628,L"ToolMenuSubsystem",L"EditMenu_ToolTip",L"Open menu editor");
    FText::FText(&local_700.Value,pFVar16);
    local_700.bIsSet = true;
    local_700.Getter._16_8_ = 0;
    local_700.Getter._0_8_ = 0;
    local_700.Getter._8_8_ = 0;
    pFVar16 = FText::AsLocalizable_Advanced_LocText
                        (&local_618,L"ToolMenuSubsystem",L"EditMenu",L"Edit Menu");
    FText::FText(&local_730.Value,pFVar16);
    local_730.bIsSet = true;
    local_730.Getter._16_8_ = 0;
    local_730.Getter._0_8_ = 0;
    local_730.Getter._8_8_ = 0;
    pFVar17 = ::FName::FName(&local_5f8,"MenuName");
    FVar8 = local_bd8;
    FVar2 = *pFVar17;
    local_990 = (undefined1  [8])0x0;
    local_988.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_988.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_990,
               (FWriteAccessScope *)&local_670);
    local_658 = &local_988;
    puVar18 = UE::Core::Private::DelegateAllocate(0x28,&local_988);
    if (puVar18 != (undefined8 *)0x0) {
      *puVar18 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar19 = FDelegateHandle::GenerateNewID();
      puVar18[2] = uVar19;
      *puVar18 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::PopulateToolBarBuilder'::`5'::<lambda_1>_>
                  ::_vftable_;
      *(FName *)(puVar18 + 3) = FVar25;
      *(FWeakObjectPtr *)(puVar18 + 4) = FVar8;
    }
    if (local_670.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_670.Accessor,&local_670);
    }
    FUIAction::FUIAction
              (&local_320,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_990,
               RepeatDisabled);
    FToolBarBuilder::AddToolBarButton
              (param_1,&local_608,&local_320,FVar2,&local_730,&local_700,
               (TAttribute<FSlateIcon> *)local_830,Button,local_a60,&local_898,pTVar15,
               (TAttribute<FMenuEntryResizeParams> *)local_5d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_608.SharedReferenceCount.ReferenceController);
    FUIAction::~FUIAction(&local_320);
    TAttribute<FText>::~TAttribute<FText>(&local_730);
    if (local_618.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_618.TextData.Reference + 0x10))();
    }
    TAttribute<FText>::~TAttribute<FText>(&local_700);
    if (local_628.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_628.TextData.Reference + 0x10))();
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_808);
    if (pvStack_800 != (void *)0x0) {
      FMemory::Free(pvStack_800);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_808);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_508,(FWriteAccessScope *)&local_7c0);
    if (((int)local_4f8 != 0) && (FStack_500.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_500.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_500,0,0,0x10);
      local_4f8 = local_4f8 & 0xffffffff00000000;
    }
    if (local_7c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7c0.Accessor,&local_7c0);
    }
    if (FStack_500.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_500.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_508.AccessDetector);
    FMenuEntryResizeParams::~FMenuEntryResizeParams((FMenuEntryResizeParams *)local_5d8);
    FToolBarBuilder::EndSection(param_1);
  }
  uVar24 = 0;
  uVar13 = (param_2->Sections).ArrayNum;
  local_c28.Data = (FScriptContainerElement *)0x0;
  local_c20 = 0;
  iStack_c1c = 0;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (0 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar13,&local_c28,0,&iStack_c1c);
  }
  if (0 < (param_2->Sections).ArrayNum) {
    do {
      uVar13 = 0;
      if ((int)uVar24 < (param_2->Sections).ArrayNum) {
        uVar13 = ~uVar24 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_c08 = (param_2->Sections).AllocatorInstance.Data + (longlong)(int)uVar24 * 0x238;
      if (((local_c28.Data <= (FScriptContainerElement *)&local_c08) &&
          ((FScriptContainerElement *)&local_c08 < local_c28.Data + (longlong)iStack_c1c * 8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_c20 == iStack_c1c) {
        local_c20 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_c28,&iStack_c1c);
      }
      lVar22 = (longlong)local_c20;
      uVar24 = uVar24 + 1;
      local_c20 = local_c20 + 1;
      *(FScriptContainerElement **)(local_c28.Data + lVar22 * 8) = local_c08;
    } while ((int)uVar24 < (param_2->Sections).ArrayNum);
  }
  local_res8 = SUB81(this,0);
  AlgoImpl::
  StableSortInternal<FToolMenuSection_*,FIdentityFunctor,TDereferenceWrapper<FToolMenuSection_*,_UToolMenus::PopulateToolBarBuilder_::__l2::<lambda_2>_>_>
            ((FToolMenuSection **)local_c28.Data,local_c20,local_res8,(<lambda_2> *)local_c10);
  fVar7 = __real_38d1b717;
  EVar26 = First;
  EVar6 = First;
  local_c14 = 0;
  if (0 < local_c20) {
    local_a68 = 0;
    do {
      lVar22 = local_a68;
      uVar13 = local_c14;
      uVar24 = 0;
      if ((int)local_c14 < local_c20) {
        uVar24 = ~local_c14 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = *(FToolMenuSection **)(local_c28.Data + lVar22);
      if (((pFVar3->Alignment != EVar26) && ((byte)(pFVar3->Alignment - Middle) < 2)) &&
         (0 < (int)uVar13)) {
        local_9d0.Size = FOptionalSize::Unspecified;
        local_9f8 = 0;
        local_9d8 = 0;
        local_9b8 = 0;
        local_998 = 0;
        local_b78 = 0;
        local_9b0.Size = FOptionalSize::Unspecified;
        local_b90 = fVar7;
        local_a58._72_4_ = fVar7;
        local_a58[0] = false;
        local_a58[0xc] = false;
        local_a58[0x1c] = false;
        local_a58[0x24] = false;
        local_a58[0x2c] = false;
        local_a58[0x34] = false;
        local_a08 = (undefined1  [8])0x0;
        pvStack_a00 = (void *)0x0;
        local_9f0 = 0.0;
        local_9ec = false;
        local_9e8 = (undefined1  [8])0x0;
        pvStack_9e0 = (void *)0x0;
        local_9cc = false;
        local_9c8 = (undefined1  [8])0x0;
        pvStack_9c0 = (void *)0x0;
        local_9ac = false;
        local_9a8 = (undefined1  [8])0x0;
        pvStack_9a0 = (void *)0x0;
        local_a58._4_4_ = HAlign_Right;
        local_a58._16_4_ = SizeRule_Stretch;
        local_a58[0x14] = true;
        local_a58._56_4_ = 0.0001;
        local_a58[0x3c] = true;
        local_a58._64_4_ = 0.0001;
        local_a58[0x44] = true;
        local_b8c = 1;
        local_b88 = (undefined1  [8])0x0;
        FStack_b80.Data = (FScriptContainerElement *)0x0;
        local_a58[0x4c] = true;
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a08,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_b88);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_b88,
                   (FWriteAccessScope *)&local_7a8);
        if (((int)local_b78 != 0) && (FStack_b80.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_b80.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b80,0,0,0x10)
          ;
          local_b78 = local_b78 & 0xffffffff00000000;
        }
        if (local_7a8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7a8.Accessor,&local_7a8);
        }
        if (FStack_b80.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_b80.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_b88);
        local_bf8 = 0x38d1b717;
        local_be0 = 0;
        local_bf4 = 1;
        local_bf0 = (undefined1  [8])0x0;
        FStack_be8.Data = (FScriptContainerElement *)0x0;
        local_9ac = true;
        local_9b0.Size = 0.0001;
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_9a8,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_bf0);
        local_9d0.Size = local_9b0.Size;
        local_9cc = local_9ac;
        TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>
                  ((TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *)local_9c8,
                   (TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *)local_9a8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_bf0,
                   (FWriteAccessScope *)&local_790);
        if (((int)local_be0 != 0) && (FStack_be8.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_be8.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_be8,0,0,0x10)
          ;
          local_be0 = local_be0 & 0xffffffff00000000;
        }
        if (local_790.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_790.Accessor,&local_790);
        }
        if (FStack_be8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_be8.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_bf0);
        local_978._0_4_ = 0;
        local_960 = 0;
        local_940 = 0;
        local_920 = 0;
        local_918.Allow.Getter._16_8_ = 0;
        local_918.Priority.Getter._16_8_ = 0;
        local_918.Mode.Getter._16_8_ = 0;
        local_b98 = 0;
        local_978[4] = false;
        local_970 = (undefined1  [8])0x0;
        pvStack_968 = (void *)0x0;
        local_958[0] = false;
        local_958[1] = false;
        local_950 = (undefined1  [8])0x0;
        pvStack_948 = (void *)0x0;
        local_918.Allow.Value = false;
        local_918.Allow.bIsSet = false;
        local_930 = (undefined1  [8])0x0;
        pvStack_928 = (void *)0x0;
        local_918.Priority.Value = 0;
        local_918.Allow.Getter._0_8_ = 0;
        local_918.Allow.Getter._8_8_ = 0;
        local_918.Priority.bIsSet = false;
        local_918.Priority.Getter._0_8_ = 0;
        local_918.Priority.Getter._8_8_ = 0;
        local_918.Mode.Value = Preferred;
        local_918.Mode.bIsSet = false;
        local_918.Mode.Getter._0_8_ = 0;
        local_918.Mode.Getter._8_8_ = 0;
        local_918.VerticalOverflowBehavior.bIsSet = false;
        local_918.ForceNewLine.bIsSet = false;
        local_bb0 = 0x100;
        local_ba8 = (undefined1  [8])0x0;
        FStack_ba0.Data = (FScriptContainerElement *)0x0;
        local_938[0] = false;
        local_938[1] = true;
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_930,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_ba8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_ba8,
                   (FWriteAccessScope *)&local_778);
        if (((int)local_b98 != 0) && (FStack_ba0.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_ba0.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_ba0,0,0,0x10)
          ;
          local_b98 = local_b98 & 0xffffffff00000000;
        }
        if (local_778.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_778.Accessor,&local_778);
        }
        if (FStack_ba0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_ba0.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_ba8);
        local_bd0 = 0x100;
        local_bb8 = 0;
        local_958[0] = false;
        local_958[1] = true;
        local_bc8 = (undefined1  [8])0x0;
        FStack_bc0.Data = (FScriptContainerElement *)0x0;
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_950,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_bc8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_bc8,
                   (FWriteAccessScope *)&local_760);
        if (((int)local_bb8 != 0) && (FStack_bc0.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_bc0.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_bc0,0,0,0x10)
          ;
          local_bb8 = local_bb8 & 0xffffffff00000000;
        }
        if (local_760.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_760.Accessor,&local_760);
        }
        if (FStack_bc0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_bc0.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_bc8);
        FMenuEntryResizeParams::FMenuEntryResizeParams
                  ((FMenuEntryResizeParams *)local_4f0,(FMenuEntryResizeParams *)local_978);
        local_4f0[200] = true;
        local_410 = 0;
        local_878.Getter._16_8_ = 0;
        local_420 = (undefined1  [8])0x0;
        pvStack_418 = (void *)0x0;
        local_878.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
        local_878.bIsSet = false;
        local_878.Getter._0_8_ = 0;
        local_878.Getter._8_8_ = 0;
        local_858._16_8_ = 0;
        local_858._0_8_ = 0;
        local_858._8_8_ = 0;
        local_a70.ComparisonIndex.Value = 0;
        local_a70.Number = 0;
        pFVar20 = SSpacer::FArguments::FArguments((FArguments *)local_288);
        FLLMScope::FLLMScope
                  (&local_c0c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
        local_8a8 = LLMTagDeclaration_UI_Slate.UniqueName;
        FMemScope::FMemScope(&local_8a0,&local_8a8,true);
        TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::
        TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>
                  (&local_a88,"SSpacer",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolMenus\\Private\\ToolMenus.cpp"
                   ,0x8c2,local_c18);
        FMemScope::~FMemScope(&local_8a0);
        FLLMScope::~FLLMScope(&local_c0c);
        this_00 = local_a88._Widget.Object;
        if ((local_a88._Widget.Object == (SSpacer *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        SWidget::SWidgetConstruct((SWidget *)this_00,(FSlateBaseNamedArgs *)pFVar20);
        SSpacer::Construct(this_00,pFVar20);
        if ((this_00 == (SSpacer *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((this_00->_padding_ & 0x10) == 0) {
          cVar10 = (**(code **)(this_00->_padding_ + 0x228))(this_00);
          bVar12 = 0;
          if (cVar10 != '\0') goto LAB_142c688bc;
        }
        else {
LAB_142c688bc:
          bVar12 = 0x20;
        }
        *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ & 0xdf;
        *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ | bVar12;
        if ((this_00 == (SSpacer *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pbVar1 = (byte *)((longlong)&this_00->_padding_ + 1);
        *pbVar1 = *pbVar1 | 4;
        if ((this_00 == (SSpacer *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x416,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar9.ReferenceController = local_a88._Widget.SharedReferenceCount.ReferenceController;
        local_a88._Widget.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_a88._Widget.Object = (SSpacer *)0x0;
        if ((this_00 == (SSpacer *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x26c,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_840.Object = (SWidget *)this_00;
        local_840.SharedReferenceCount.ReferenceController = FVar9.ReferenceController;
        if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar9.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar9.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FToolBarBuilder::AddWidget
                  (param_1,&local_840,(FMenuEntryStyleParams *)local_a58,local_a70,false,&local_858,
                   &local_878,(TAttribute<FMenuEntryResizeParams> *)local_4f0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar9.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_78);
        if ((void *)local_78._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_78._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_78);
        FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_288);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_420);
        if (pvStack_418 != (void *)0x0) {
          FMemory::Free(pvStack_418);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_420);
        FMenuEntryResizeParams::~FMenuEntryResizeParams((FMenuEntryResizeParams *)local_4f0);
        FMenuEntryResizeParams::FWrappingParams::~FWrappingParams(&local_918);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_930);
        if (pvStack_928 != (void *)0x0) {
          FMemory::Free(pvStack_928);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_930);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_950);
        if (pvStack_948 != (void *)0x0) {
          FMemory::Free(pvStack_948);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_950);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_970);
        if (pvStack_968 != (void *)0x0) {
          FMemory::Free(pvStack_968);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_970);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_9a8);
        if (pvStack_9a0 != (void *)0x0) {
          FMemory::Free(pvStack_9a0);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_9a8);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_9c8);
        if (pvStack_9c0 != (void *)0x0) {
          FMemory::Free(pvStack_9c0);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_9c8);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_9e8);
        if (pvStack_9e0 != (void *)0x0) {
          FMemory::Free(pvStack_9e0);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_9e8);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a08);
        if (pvStack_a00 != (void *)0x0) {
          FMemory::Free(pvStack_a00);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_a08);
        EVar26 = EVar6;
      }
      plVar23 = (longlong *)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(pFVar3->Construct).NewToolBarDelegateLegacy,&local_650);
      if (((*(int *)&(pFVar3->Construct).NewToolBarDelegateLegacy.field_0x10 == 0) ||
          (plVar4 = *(longlong **)&(pFVar3->Construct).NewToolBarDelegateLegacy.field_0x8,
          plVar4 == (longlong *)0x0)) || (cVar10 = (**(code **)(*plVar4 + 0x38))(), cVar10 == '\0'))
      {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_650);
        iVar14 = local_c20 + -1;
        if ((pFVar3->Alignment == EVar26) || (pFVar3->Alignment == Default)) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
        if ((param_2->bSeparateSections == false) || (bVar11)) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
        FMenuEntryResizeParams::FMenuEntryResizeParams
                  ((FMenuEntryResizeParams *)local_408,&pFVar3->ResizeParams);
        local_408[200] = true;
        local_328 = 0;
        local_338 = (undefined1  [8])0x0;
        pvStack_330 = (void *)0x0;
        FToolBarBuilder::BeginSection
                  (param_1,pFVar3->Name,bVar11,(TAttribute<FMenuEntryResizeParams> *)local_408);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_338);
        if (pvStack_330 != (void *)0x0) {
          FMemory::Free(pvStack_330);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_338);
        FMenuEntryResizeParams::~FMenuEntryResizeParams((FMenuEntryResizeParams *)local_408);
        iVar27 = (pFVar3->Blocks).ArrayNum;
        local_c00.ComparisonIndex.Value = 0;
        local_c00.Number = 0;
        FVar25.ComparisonIndex.Value = 0;
        FVar25.Number = 0;
        FVar2 = local_c00;
        if (0 < iVar27) {
          lVar22 = 0;
          do {
            uVar24 = (uint)plVar23;
            uVar13 = 0;
            if ((int)uVar24 < iVar27) {
              uVar13 = ~uVar24 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar28 = (FToolMenuEntry *)((pFVar3->Blocks).AllocatorInstance.Data + lVar22);
            if (((int)uVar24 < iVar27 + -1) || ((int)local_c14 < iVar14)) {
              bVar11 = false;
            }
            else {
              bVar11 = true;
            }
            FVar2 = (pFVar28->ToolBarData).BlockGroupName;
            if (FVar2 != FVar25) {
              if (FVar25 != (FName)0x0) {
                FToolBarBuilder::EndBlockGroup(param_1);
              }
              if (FVar2 != (FName)0x0) {
                FToolBarBuilder::BeginBlockGroup(param_1);
              }
            }
            PopulateToolBarBuilderWithEntry(this,param_1,param_2,pFVar3,pFVar28,false,bVar11);
            iVar27 = (pFVar3->Blocks).ArrayNum;
            plVar23 = (longlong *)(ulonglong)(uVar24 + 1);
            lVar22 = lVar22 + 0x780;
            FVar25 = FVar2;
            uVar13 = local_c14;
          } while ((int)(uVar24 + 1) < iVar27);
        }
        local_c00 = FVar2;
        if (local_c00 != (FName)0x0) {
          FToolBarBuilder::EndBlockGroup(param_1);
        }
        FToolBarBuilder::EndSection(param_1);
        EVar26 = pFVar3->Alignment;
        EVar6 = EVar26;
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_650);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(pFVar3->Construct).NewToolBarDelegateLegacy,&local_5f0);
        if (*(int *)&(pFVar3->Construct).NewToolBarDelegateLegacy.field_0x10 != 0) {
          plVar23 = *(longlong **)&(pFVar3->Construct).NewToolBarDelegateLegacy.field_0x8;
        }
        (**(code **)(*plVar23 + 0x60))(plVar23,param_1);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_5f0);
      }
      local_c14 = uVar13 + 1;
      local_a68 = local_a68 + 8;
    } while ((int)local_c14 < local_c20);
  }
  pTVar21 = FMultiBoxBuilder::GetMultiBox((FMultiBoxBuilder *)param_1,&local_638);
  AddReferencedContextObjects(this,pTVar21,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_638.SharedReferenceCount.ReferenceController);
  if (local_c28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c28.Data);
  }
  return;
}

// PopulateToolBarBuilderWithEntry @ 142c68e90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UToolMenus::PopulateToolBarBuilderWithEntry
          (UToolMenus *this,FToolBarBuilder *param_1,UToolMenu *param_2,FToolMenuSection *param_3,
          FToolMenuEntry *param_4,bool param_5,bool param_6)

{
  TDelegate<void___cdecl(FToolBarBuilder_&,UToolMenu_*),FDefaultDelegateUserPolicy> *this_00;
  EMultiBlockType EVar1;
  EUserInterfaceActionType EVar2;
  ITextData *pIVar3;
  FToolMenuEntry *this_01;
  FToolMenuEntry *this_02;
  TRefCountPtr<ITextData> TVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  FString *pFVar8;
  FName FVar9;
  FUICommandInfo *pFVar10;
  FText *pFVar11;
  TSharedRef<SWidget,1> *pTVar12;
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *pTVar13;
  undefined8 *puVar14;
  ulong64 uVar15;
  FUIAction *pFVar16;
  TSharedRef<FUICommandList_const_,1> *pTVar17;
  FToolBarButtonBlock *pFVar18;
  TAttribute<FText> *pTVar19;
  TAttribute<FText> *pTVar20;
  FToolMenuEntryOptionsDropdownData *pFVar21;
  FToolMenuEntryOptionsDropdownData *pFVar22;
  FName FVar23;
  FMRSWRecursiveAccessDetector *this_03;
  ForAnyElementType FVar24;
  FName FVar25;
  UToolMenu *pUVar26;
  longlong *plVar27;
  FText local_1018;
  undefined1 local_1008;
  undefined1 local_1000 [8];
  ForAnyElementType FStack_ff8;
  ulonglong local_ff0;
  undefined1 local_fe8 [8];
  ForAnyElementType local_fe0;
  int local_fd8;
  undefined1 local_fd0 [8];
  undefined1 local_fc8 [24];
  undefined2 local_fb0;
  undefined1 local_fa8 [8];
  ForAnyElementType FStack_fa0;
  ulonglong local_f98;
  undefined1 local_f90 [8];
  ForAnyElementType local_f88;
  int local_f80;
  TSharedPtr<SWidget,1> local_f78;
  undefined1 local_f68 [8];
  FDelegateAllocation local_f60;
  undefined8 local_f50;
  TSharedPtr<FUICommandList_const_,1> local_f48;
  undefined1 local_f38 [4];
  undefined1 local_f34 [4];
  undefined1 local_f30 [4];
  undefined1 local_f2c [4];
  undefined1 local_f28 [8];
  FName local_f20;
  FName local_f18;
  FString local_f10;
  undefined8 local_f00;
  FSharedReferencer<1> local_ef8;
  SWidget *local_ef0;
  TReferenceControllerBase<1> *local_ee8;
  undefined8 local_ee0;
  FSharedReferencer<1> local_ed8;
  TAttribute<EVisibility> local_ed0;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> local_eb0;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> local_e98;
  TAttribute<FText> local_e80;
  ISlateStyle *local_e50;
  FName local_e48;
  TSharedPtr<SWidget,1> local_e38;
  SWidget *local_e28;
  TReferenceControllerBase<1> *pTStack_e20;
  TSharedRef<FMultiBox,1> local_e18;
  TSharedPtr<FToolBarButtonBlock,1> local_e08;
  FString local_df8;
  ISlateStyle *local_de8;
  FName local_de0;
  TSharedRef<FMultiBox,1> local_dd8;
  TSharedPtr<FUICommandInfo_const_,1> local_dc8;
  ISlateStyle *local_db8;
  FName local_db0;
  TSharedPtr<SWidget,1> local_da8;
  SWidget *local_d98;
  TReferenceControllerBase<1> *pTStack_d90;
  TSharedRef<FMultiBox,1> local_d88;
  TAttribute<EMenuPlacement> local_d78;
  TAttribute<EMenuPlacement> local_d58;
  TSharedPtr<FToolBarButtonBlock,1> local_d38;
  FDestructionSentinel local_d28;
  FDestructionSentinel local_d10;
  FDestructionSentinel local_cf8;
  FDestructionSentinel local_ce0;
  undefined1 local_cc8 [24];
  FDestructionSentinel local_cb0;
  FDestructionSentinel local_c98;
  FDestructionSentinel local_c80;
  FDestructionSentinel local_c68;
  undefined1 local_c50 [24];
  undefined1 local_c38 [24];
  undefined1 local_c20 [24];
  undefined1 local_c08 [32];
  FDestructionSentinel local_be8;
  FDelegateAllocation *local_bd0;
  TAttribute<FText> local_bc8;
  TAttribute<FText> local_b98;
  TAttribute<FText> local_b68;
  TAttribute<FText> local_b38;
  TAttribute<FText> local_b08;
  FString local_ad8;
  TSharedPtr<FToolBarButtonBlock,1> local_ac8;
  FString local_ab8;
  undefined1 local_aa8 [8];
  TAttribute<EVisibility> local_aa0;
  TAttribute<EVisibility> local_a80;
  TAttribute<EVisibility> local_a60;
  TAttribute<EVisibility> local_a40;
  TAttribute<EVisibility> local_a20;
  TAttribute<EVisibility> local_a00;
  FString local_9e0;
  FText local_9d0;
  TSharedRef<SWidget,1> local_9c0;
  FString local_9b0;
  FReadAccessScope local_9a0;
  FReadAccessScope local_988;
  FString local_970;
  FString local_960;
  undefined1 local_950 [8];
  undefined1 local_948 [32];
  undefined1 local_928 [24];
  undefined1 local_910 [8];
  undefined1 local_908 [24];
  FWrappingParams local_8f0;
  undefined1 local_888 [24];
  undefined1 local_870 [24];
  undefined1 local_858 [24];
  undefined1 local_840 [24];
  FReadAccessScope local_828;
  FReadAccessScope local_810;
  FReadAccessScope local_7f8;
  FReadAccessScope local_7e0;
  FReadAccessScope local_7c8;
  undefined1 local_7b0 [40];
  undefined1 local_788 [24];
  undefined1 local_770 [208];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_6a0;
  ForAnyElementType FStack_698;
  ulonglong local_690;
  undefined1 local_688 [208];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_5b8;
  ForAnyElementType FStack_5b0;
  ulonglong local_5a8;
  undefined1 local_5a0 [208];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_4d0;
  ForAnyElementType FStack_4c8;
  ulonglong local_4c0;
  undefined1 local_4b8 [208];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3e8;
  ForAnyElementType FStack_3e0;
  ulonglong local_3d8;
  TSharedRef<SWidget,1> local_3d0;
  TSharedRef<FUICommandList_const_,1> local_3c0;
  undefined1 local_3b0 [208];
  undefined1 local_2e0 [8];
  void *pvStack_2d8;
  undefined8 local_2d0;
  undefined1 local_2c8 [208];
  undefined1 local_1f8 [8];
  void *pvStack_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0 [208];
  undefined1 local_110 [8];
  void *pvStack_108;
  undefined8 local_100;
  FMenuEntryStyleParams local_f8;
  undefined8 uStack_30;
  
  this_02 = param_4;
  uStack_30 = 0x142c68eb5;
  this_00 = &(param_4->ToolBarData).ConstructLegacy;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_9a0);
  if (((*(int *)&(this_02->ToolBarData).ConstructLegacy.field_0x10 != 0) &&
      (plVar27 = *(longlong **)&(this_02->ToolBarData).ConstructLegacy.field_0x8,
      plVar27 != (longlong *)0x0)) && (cVar5 = (**(code **)(*plVar27 + 0x38))(), cVar5 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_9a0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_810);
    if (*(int *)&(this_02->ToolBarData).ConstructLegacy.field_0x10 == 0) {
      plVar27 = (longlong *)0x0;
    }
    else {
      plVar27 = *(longlong **)&(this_02->ToolBarData).ConstructLegacy.field_0x8;
    }
    (**(code **)(*plVar27 + 0x60))(plVar27,param_1,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_810);
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_9a0);
  cVar5 = param_5;
  FVar9 = (this_02->ToolBarData).StyleNameOverride;
  if (FVar9 == (FName)0x0) {
    FVar9 = this_02->StyleNameOverride;
  }
  FVar23.ComparisonIndex.Value = 0;
  FVar23.Number = 0;
  if (param_5 != false) {
    if (FVar9 == (FName)0x0) {
      local_f50 = 0;
      FVar25 = FVar23;
      pUVar26 = param_2;
      while (FVar25 == (FName)0x0) {
        pUVar26 = (pUVar26->SubMenuParent).field0_0x0.DebugPtr;
        if (pUVar26 == (UToolMenu *)0x0) goto LAB_142c69065;
        FVar25 = pUVar26->StyleName;
      }
      FVar9 = ISlateStyle::Join((FName)local_aa8,(char *)FVar25);
      FVar9 = *(FName *)FVar9;
    }
    else {
      local_f20 = FVar9;
      ::FString::FString(&local_df8,".Raised");
      pFVar8 = ::FName::ToString(&local_f20,&local_9e0);
      ::FString::ConcatFF(&local_f10,pFVar8,&local_df8);
      FVar24.Data = (FScriptContainerElement *)L"";
      if (local_f10.Data.ArrayNum != 0) {
        FVar24.Data = local_f10.Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_f18,(wchar_t *)FVar24.Data);
      if (local_f10.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f10.Data.AllocatorInstance.Data);
      }
      if (local_9e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_9e0.Data.AllocatorInstance.Data);
      }
      FVar9 = local_f18;
      if (local_df8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_df8.Data.AllocatorInstance.Data);
        FVar9 = local_f18;
      }
    }
  }
LAB_142c69065:
  FToolBarBuilder::BeginStyleOverride(param_1,FVar9);
  CalculateToolbarVisibility
            ((TAttribute<EVisibility> *)local_fd0,param_2,param_3,this_02,(bool)cVar5,false);
  if ((this_02->ToolBarData).ActionOverride.bIsSet == false) {
    ConvertUIAction((FUIAction *)local_c50,this_02,&param_2->Context);
  }
  else {
    ConvertUIAction((FUIAction *)local_c50,&(this_02->ToolBarData).ActionOverride.TypedValue,
                    &param_2->Context);
  }
  FText::FText(&local_1018);
  TVar4.Reference = local_1018.TextData.Reference;
  local_1008 = 0;
  local_ff0 = 0;
  local_1000 = (undefined1  [8])0x0;
  FStack_ff8.Data = (FScriptContainerElement *)0x0;
  if ((this_02->ToolBarData).LabelOverride.bIsSet == false) {
    if ((((this_02->Icon).bIsSet == false) &&
        ((((this_02->Command).Object == (FUICommandInfo *)0x0 ||
          (pFVar10 = TSharedPtr<FUICommandInfo_const_,1>::operator->(&this_02->Command),
          (pFVar10->Icon).StyleSetName == (FName)0x0)) || ((pFVar10->Icon).StyleName == (FName)0x0))
        )) || ((bool)cVar5 == false)) goto LAB_142c69146;
    pFVar11 = FText::FText(&local_9d0);
    FText::FText(&local_e80.Value,pFVar11);
    local_e80.bIsSet = true;
    local_e80.Getter._16_8_ = 0;
    local_e80.Getter._0_8_ = 0;
    local_e80.Getter._8_8_ = 0;
    FText::operator=(&local_1018,&local_e80.Value);
    local_1008 = local_e80.bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1000,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_e80.Getter);
    TAttribute<FText>::~TAttribute<FText>(&local_e80);
    if (local_9d0.TextData.Reference == (ITextData *)0x0) goto LAB_142c69146;
    (**(code **)((longlong)*local_9d0.TextData.Reference + 0x10))();
    FMenuEntryResizeParams::FMenuEntryResizeParams
              ((FMenuEntryResizeParams *)local_950,&(this_02->ToolBarData).ResizeParams);
LAB_142c69162:
    if ((this_02->ToolBarData).ResizeParams.VisibleInOverflow.bIsSet == false) {
      local_fb0 = 0x100;
      local_f98 = 0;
      local_910[0] = false;
      local_910[1] = true;
      local_fa8 = (undefined1  [8])0x0;
      FStack_fa0.Data = (FScriptContainerElement *)0x0;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_908,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_fa8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_fa8,
                 (FWriteAccessScope *)&local_cf8);
      if (((int)local_f98 != 0) && (FStack_fa0.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_fa0.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_fa0,0,0,0x10);
        local_f98 = local_f98 & 0xffffffff00000000;
      }
      if (local_cf8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_cf8.Accessor,&local_cf8);
      }
      if (FStack_fa0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_fa0.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_fa8);
    }
  }
  else {
    pIVar3 = (this_02->ToolBarData).LabelOverride.Value.TextData.Reference;
    if (local_1018.TextData.Reference != pIVar3) {
      local_1018.TextData.Reference = pIVar3;
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&param_4);
      }
      if (TVar4.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar4.Reference + 0x10))(TVar4.Reference);
      }
    }
    local_1018.Flags = (this_02->ToolBarData).LabelOverride.Value.Flags;
    local_1008 = (this_02->ToolBarData).LabelOverride.bIsSet;
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_1000,
               &(this_02->ToolBarData).LabelOverride.Getter);
    cVar5 = param_5;
LAB_142c69146:
    FMenuEntryResizeParams::FMenuEntryResizeParams
              ((FMenuEntryResizeParams *)local_950,&(this_02->ToolBarData).ResizeParams);
    if (cVar5 != '\0') goto LAB_142c69162;
  }
  EVar1 = this_02->Type;
  if (EVar1 == ToolBarButton) {
LAB_142c69c48:
    if (((this_02->Command).Object == (FUICommandInfo *)0x0) ||
       (this_02->bCommandIsKeybindOnly != false)) {
      this_01 = (FToolMenuEntry *)(this_02->ScriptObject).field0_0x0.DebugPtr;
      param_4 = this_01;
      if (this_01 == (FToolMenuEntry *)0x0) {
        FMenuEntryResizeParams::FMenuEntryResizeParams
                  ((FMenuEntryResizeParams *)local_2c8,(FMenuEntryResizeParams *)local_950);
        local_1e8 = 0;
        local_2c8[200] = true;
        local_b38.Value.TextData.Reference = local_1018.TextData.Reference;
        local_1f8 = (undefined1  [8])0x0;
        pvStack_1f0 = (void *)0x0;
        if (local_1018.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1018.TextData.Reference + 8))
                    (local_1018.TextData.Reference,local_f2c);
        }
        local_b38.Value.Flags = local_1018.Flags;
        local_b38.bIsSet = (bool)local_1008;
        local_b38.Getter._0_8_ = 0;
        local_b38.Getter._8_8_ = 0;
        local_b38.Getter._16_4_ = 0;
        TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>
                  (&local_b38.Getter,
                   (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_1000);
        local_a20.Value.Value.Value = local_fd0[0];
        local_a20.bIsSet = local_fd0[1];
        TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
        TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
                  (&local_a20.Getter,
                   (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_fc8);
        FToolBarBuilder::AddToolBarButton
                  (param_1,&local_e08,(FUIAction *)local_c50,this_02->Name,&this_02->Label,
                   &this_02->ToolTip,&this_02->Icon,this_02->UserInterfaceActionType,
                   this_02->TutorialHighlightName,&local_a20,&local_b38,
                   (TAttribute<FMenuEntryResizeParams> *)local_2c8);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f8);
        if (pvStack_1f0 != (void *)0x0) {
          FMemory::Free(pvStack_1f0);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_1f8);
        FMenuEntryResizeParams::~FMenuEntryResizeParams((FMenuEntryResizeParams *)local_2c8);
        bVar7 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                          ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_02->MakeCustomWidget);
        if (bVar7) {
          FMultiBoxBuilder::GetMultiBox((FMultiBoxBuilder *)param_1,&local_e18);
          local_e50 = (local_e18.Object)->StyleSet;
          local_e48 = (local_e18.Object)->StyleName;
          pFVar18 = TSharedPtr<FToolBarButtonBlock,1>::operator->(&local_e08);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &this_02->MakeCustomWidget,&local_828);
          if (*(int *)&(this_02->MakeCustomWidget).field_0x10 != 0) {
            FVar23.ComparisonIndex.Value = *(uint *)&(this_02->MakeCustomWidget).field_0x8;
            FVar23.Number = *(uint *)&(this_02->MakeCustomWidget).field_0xc;
          }
          (**(code **)(*(longlong *)FVar23 + 0x60))(FVar23,&local_e28,&param_2->Context,&local_e50);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_828);
          local_e38.Object = local_e28;
          local_e38.SharedReferenceCount.ReferenceController = pTStack_e20;
          if (pTStack_e20 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_e20->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_e20->SharedReferenceCount + 1);
            UNLOCK();
          }
          FToolBarButtonBlock::SetCustomWidget(pFVar18,&local_e38);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_e38.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_e20);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_e18.SharedReferenceCount.ReferenceController);
        }
        goto LAB_142c6a525;
      }
      UToolMenuEntryScript::CreateIconAttribute
                ((UToolMenuEntryScript *)this_01,(TAttribute<FSlateIcon> *)local_7b0,
                 &param_2->Context);
      FMenuEntryResizeParams::FMenuEntryResizeParams
                ((FMenuEntryResizeParams *)local_4b8,(FMenuEntryResizeParams *)local_950);
      local_3d8 = 0;
      local_4b8[200] = true;
      local_b68.Value.TextData.Reference = local_1018.TextData.Reference;
      local_3e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_3e0.Data = (FScriptContainerElement *)0x0;
      if (local_1018.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1018.TextData.Reference + 8))
                  (local_1018.TextData.Reference,local_f30);
      }
      local_b68.Value.Flags = local_1018.Flags;
      local_b68.bIsSet = (bool)local_1008;
      local_b68.Getter._0_8_ = 0;
      local_b68.Getter._8_8_ = 0;
      local_b68.Getter._16_4_ = 0;
      TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                (&local_b68.Getter,
                 (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_1000);
      local_a40.Value.Value.Value = local_fd0[0];
      local_a40.bIsSet = local_fd0[1];
      TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
                (&local_a40.Getter,
                 (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_fc8);
      FVar9 = this_02->TutorialHighlightName;
      EVar2 = this_02->UserInterfaceActionType;
      pTVar19 = UToolMenuEntryScript::CreateToolTipAttribute
                          ((UToolMenuEntryScript *)this_01,(TAttribute<FText> *)local_858,
                           &param_2->Context);
      pTVar20 = UToolMenuEntryScript::CreateLabelAttribute
                          ((UToolMenuEntryScript *)param_4,(TAttribute<FText> *)local_888,
                           &param_2->Context);
      FToolBarBuilder::AddToolBarButton
                (param_1,&local_ac8,(FUIAction *)local_c50,
                 (FName)(param_4->ScriptObject).field0_0x0.ObjectPtr.field0_0x0,pTVar20,pTVar19,
                 (TAttribute<FSlateIcon> *)local_7b0,EVar2,FVar9,&local_a40,&local_b68,
                 (TAttribute<FMenuEntryResizeParams> *)local_4b8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_ac8.SharedReferenceCount.ReferenceController);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_870);
      if ((void *)local_870._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_870._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_870);
      if ((ITextData *)local_888._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_888._0_8_ + 0x10))();
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_840);
      if ((void *)local_840._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_840._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_840);
      if ((ITextData *)local_858._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_858._0_8_ + 0x10))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_3e8,(FWriteAccessScope *)&local_c68);
      if (((int)local_3d8 != 0) && (FStack_3e0.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_3e0.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3e0,0,0,0x10);
        local_3d8 = local_3d8 & 0xffffffff00000000;
      }
      if (local_c68.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c68.Accessor,&local_c68);
      }
      if (FStack_3e0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_3e0.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3e8.AccessDetector);
      FMenuEntryResizeParams::~FMenuEntryResizeParams((FMenuEntryResizeParams *)local_4b8);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_788);
      if ((void *)local_788._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_788._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_788);
    }
    else {
      local_f48.Object = (FUICommandList *)0x0;
      local_f48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      bVar7 = false;
      pFVar16 = FToolMenuEntry::GetActionForCommand(this_02,&param_2->Context,&local_f48);
      if ((pFVar16 == (FUIAction *)0x0) || (local_f48.Object == (FUICommandList *)0x0)) {
        if (5 < (byte)LogToolMenus._0_1_) {
          ::FName::ToString(&param_2->MenuName,&local_ad8);
          ::FName::ToString(&this_02->Name,&local_ab8);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogToolMenus);
          if (local_ab8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_ab8.Data.AllocatorInstance.Data);
          }
          if (local_ad8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_ad8.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        pTVar17 = TSharedPtr<FUICommandList_const_,1>::ToSharedRef(&local_f48,&local_3c0);
        FMultiBoxBuilder::PushCommandList((FMultiBoxBuilder *)param_1,pTVar17);
        bVar7 = true;
      }
      FMenuEntryResizeParams::FMenuEntryResizeParams
                ((FMenuEntryResizeParams *)local_5a0,(FMenuEntryResizeParams *)local_950);
      local_4c0 = 0;
      local_5a0[200] = true;
      local_b98.Value.TextData.Reference = local_1018.TextData.Reference;
      local_4d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_4c8.Data = (FScriptContainerElement *)0x0;
      if (local_1018.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1018.TextData.Reference + 8))
                  (local_1018.TextData.Reference,local_f34);
      }
      local_b98.Value.Flags = local_1018.Flags;
      local_b98.bIsSet = (bool)local_1008;
      local_b98.Getter._0_8_ = 0;
      local_b98.Getter._8_8_ = 0;
      local_b98.Getter._16_4_ = 0;
      TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                (&local_b98.Getter,
                 (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_1000);
      local_a60.Value.Value.Value = local_fd0[0];
      local_a60.bIsSet = local_fd0[1];
      TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
                (&local_a60.Getter,
                 (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_fc8);
      local_dc8.Object = (this_02->Command).Object;
      FVar9 = this_02->TutorialHighlightName;
      FVar25 = this_02->Name;
      local_dc8.SharedReferenceCount.ReferenceController =
           (this_02->Command).SharedReferenceCount.ReferenceController;
      local_e98._16_8_ = 0;
      local_e98._0_8_ = 0;
      local_e98._8_8_ = 0;
      if (local_dc8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_dc8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_dc8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FToolBarBuilder::AddToolBarButton
                (param_1,&local_d38,&local_dc8,FVar25,&this_02->Label,&this_02->ToolTip,
                 &this_02->Icon,FVar9,&local_e98,&local_a60,&local_b98,
                 (TAttribute<FMenuEntryResizeParams> *)local_5a0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_4d0,(FWriteAccessScope *)&local_c98);
      if (((int)local_4c0 != 0) && (FStack_4c8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_4c8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4c8,0,0,0x10);
        local_4c0 = local_4c0 & 0xffffffff00000000;
      }
      if (local_c98.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c98.Accessor,&local_c98);
      }
      if (FStack_4c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_4c8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_4d0.AccessDetector);
      FMenuEntryResizeParams::~FMenuEntryResizeParams((FMenuEntryResizeParams *)local_5a0);
      bVar6 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_02->MakeCustomWidget);
      if (bVar6) {
        FMultiBoxBuilder::GetMultiBox((FMultiBoxBuilder *)param_1,&local_d88);
        local_db8 = (local_d88.Object)->StyleSet;
        local_db0 = (local_d88.Object)->StyleName;
        pFVar18 = TSharedPtr<FToolBarButtonBlock,1>::operator->(&local_d38);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this_02->MakeCustomWidget,&local_7c8);
        if (*(int *)&(this_02->MakeCustomWidget).field_0x10 != 0) {
          FVar23.ComparisonIndex.Value = *(uint *)&(this_02->MakeCustomWidget).field_0x8;
          FVar23.Number = *(uint *)&(this_02->MakeCustomWidget).field_0xc;
        }
        (**(code **)(*(longlong *)FVar23 + 0x60))(FVar23,&local_d98,&param_2->Context,&local_db8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_7c8);
        local_da8.Object = local_d98;
        local_da8.SharedReferenceCount.ReferenceController = pTStack_d90;
        if (pTStack_d90 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_d90->SharedReferenceCount =
               (atomic<int>)((int)pTStack_d90->SharedReferenceCount + 1);
          UNLOCK();
        }
        FToolBarButtonBlock::SetCustomWidget(pFVar18,&local_da8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_da8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_d90);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d88.SharedReferenceCount.ReferenceController);
      }
      if (bVar7) {
        FMultiBoxBuilder::PopCommandList((FMultiBoxBuilder *)param_1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d38.SharedReferenceCount.ReferenceController);
      local_e08.SharedReferenceCount.ReferenceController =
           local_f48.SharedReferenceCount.ReferenceController;
LAB_142c6a525:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e08.SharedReferenceCount.ReferenceController);
    }
    if ((this_02->ToolBarData).OptionsDropdownData.Object ==
        (FToolMenuEntryOptionsDropdownData *)0x0) goto LAB_142c6a789;
    pFVar21 = TSharedPtr<FToolMenuEntryOptionsDropdownData,1>::operator->
                        (&(this_02->ToolBarData).OptionsDropdownData);
    ConvertWidgetChoice(this,(TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
                              *)local_f90,&pFVar21->MenuContentGenerator,&param_2->Context);
    FMenuEntryResizeParams::FMenuEntryResizeParams
              ((FMenuEntryResizeParams *)local_1e0,(FMenuEntryResizeParams *)local_950);
    local_1e0[200] = true;
    param_4 = (FToolMenuEntry *)CONCAT71(param_4._1_7_,this_02->UserInterfaceActionType);
    local_d58.Value = (this_02->ToolBarData).PlacementOverride.Value;
    local_d58.bIsSet = (this_02->ToolBarData).PlacementOverride.bIsSet;
    local_110 = (undefined1  [8])0x0;
    pvStack_108 = (void *)0x0;
    local_100 = 0;
    local_d58.Getter._0_8_ = 0;
    local_d58.Getter._8_8_ = 0;
    local_d58.Getter._16_4_ = 0;
    TDelegate<enum_EMenuPlacement___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              (&local_d58.Getter,&(this_02->ToolBarData).PlacementOverride.Getter);
    local_b08.Value.TextData.Reference = local_1018.TextData.Reference;
    if (local_1018.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1018.TextData.Reference + 8))
                (local_1018.TextData.Reference,local_f28);
    }
    local_b08.Value.Flags = local_1018.Flags;
    local_b08.bIsSet = (bool)local_1008;
    local_b08.Getter._0_8_ = 0;
    local_b08.Getter._8_8_ = 0;
    local_b08.Getter._16_4_ = 0;
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&local_b08.Getter,
               (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_1000);
    local_a00.Value.Value.Value = local_fd0[0];
    local_a00.bIsSet = local_fd0[1];
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
              (&local_a00.Getter,
               (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_fc8);
    FVar9 = this_02->TutorialHighlightName;
    pFVar21 = TSharedPtr<FToolMenuEntryOptionsDropdownData,1>::operator->
                        (&(this_02->ToolBarData).OptionsDropdownData);
    pFVar22 = TSharedPtr<FToolMenuEntryOptionsDropdownData,1>::operator->
                        (&(this_02->ToolBarData).OptionsDropdownData);
    FToolBarBuilder::AddComboButton
              (param_1,&pFVar22->Action,
               (TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *)
               local_f90,&this_02->Label,&pFVar21->ToolTip,&this_02->Icon,true,FVar9,&local_a00,
               &local_b08,&local_d58,(EUserInterfaceActionType)param_4,
               (TAttribute<FMenuEntryResizeParams> *)local_1e0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_110);
    if (pvStack_108 != (void *)0x0) {
      FMemory::Free(pvStack_108);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_110);
    FMenuEntryResizeParams::~FMenuEntryResizeParams((FMenuEntryResizeParams *)local_1e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f90,
               (FWriteAccessScope *)&local_d28);
    if ((local_f80 != 0) && (local_f88.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_f88.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_f88,0,0,0x10);
      local_f80 = 0;
    }
    if (local_d28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d28.Accessor,&local_d28);
    }
    if (local_f88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f88.Data);
    }
    this_03 = (FMRSWRecursiveAccessDetector *)local_f90;
  }
  else {
    if (EVar1 == MenuEntry) {
      if ((this_02->SubMenuData).bIsSubMenu == false) goto LAB_142c69c48;
    }
    else if (EVar1 != ToolBarComboButton) {
      if (EVar1 == Separator) {
        memset(local_770,0,200);
        FMenuEntryResizeParams::FMenuEntryResizeParams((FMenuEntryResizeParams *)local_770);
        local_770[200] = false;
        local_690 = 0;
        local_ed0.Getter._16_8_ = 0;
        local_6a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0
        ;
        FStack_698.Data = (FScriptContainerElement *)0x0;
        local_ed0.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)0x19;
        local_ed0.bIsSet = false;
        local_ed0.Getter._0_8_ = 0;
        local_ed0.Getter._8_8_ = 0;
        FToolBarBuilder::AddSeparator
                  (param_1,this_02->Name,&local_ed0,(TAttribute<FMenuEntryResizeParams> *)local_770)
        ;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_6a0,(FWriteAccessScope *)&local_ce0);
        if (((int)local_690 != 0) && (FStack_698.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_698.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_698,0,0,0x10)
          ;
          local_690 = local_690 & 0xffffffff00000000;
        }
        if (local_ce0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_ce0.Accessor,&local_ce0);
        }
        if (FStack_698.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_698.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_6a0.AccessDetector);
        FMenuEntryResizeParams::~FMenuEntryResizeParams((FMenuEntryResizeParams *)local_770);
        goto LAB_142c6a789;
      }
      if (EVar1 != Widget) {
        if (2 < (byte)LogToolMenus._0_1_) {
          UEnum::GetValueAsString<enum_EMultiBlockType>(&local_960,EVar1);
          ::FName::ToString(&this_02->Name,&local_970);
          ::FName::ToString(&param_2->MenuName,&local_9b0);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogToolMenus);
          if (local_9b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_9b0.Data.AllocatorInstance.Data);
          }
          if (local_970.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_970.Data.AllocatorInstance.Data);
          }
          if (local_960.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_960.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_142c6a789;
      }
      local_f78.Object = (SWidget *)0x0;
      local_f78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      bVar7 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_02->MakeCustomWidget);
      if (bVar7) {
        FMultiBoxBuilder::GetMultiBox((FMultiBoxBuilder *)param_1,&local_dd8);
        local_de8 = (local_dd8.Object)->StyleSet;
        local_de0 = (local_dd8.Object)->StyleName;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this_02->MakeCustomWidget,&local_7f8);
        if (*(int *)&(this_02->MakeCustomWidget).field_0x10 != 0) {
          FVar23.ComparisonIndex.Value = *(uint *)&(this_02->MakeCustomWidget).field_0x8;
          FVar23.Number = *(uint *)&(this_02->MakeCustomWidget).field_0xc;
        }
        (**(code **)(*(longlong *)FVar23 + 0x60))(FVar23,&local_ef0,&param_2->Context,&local_de8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_7f8);
        local_ef8.ReferenceController = local_ee8;
        if (local_ee8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_ee8->SharedReferenceCount = (atomic<int>)((int)local_ee8->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_f78.Object = local_ef0;
        local_f00 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_f78.SharedReferenceCount,&local_ef8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_ef8.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_ee8);
LAB_142c6960e:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_dd8.SharedReferenceCount.ReferenceController);
      }
      else {
        bVar7 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                          ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_02->MakeWidget);
        if (bVar7) {
          pTVar12 = TDelegate<TSharedRef<SWidget,1>___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>
                    ::Execute(&this_02->MakeWidget,&local_9c0,&param_2->Context);
          local_ed8.ReferenceController = (pTVar12->SharedReferenceCount).ReferenceController;
          local_f78.Object = pTVar12->Object;
          if (local_ed8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_ed8.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_ed8.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_ee0 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_f78.SharedReferenceCount,&local_ed8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_ed8.ReferenceController);
          local_dd8.SharedReferenceCount.ReferenceController =
               local_9c0.SharedReferenceCount.ReferenceController;
          goto LAB_142c6960e;
        }
      }
      FMenuEntryStyleParams::FMenuEntryStyleParams(&local_f8,&(this_02->WidgetData).StyleParams);
      local_f8.HorizontalAlignment = HAlign_Fill;
      if (local_f8.VerticalAlignment.bIsSet == false) {
        local_f8.VerticalAlignment.TypedValue = VAlign_Fill;
        local_f8.VerticalAlignment.bIsSet = true;
      }
      FMenuEntryResizeParams::FMenuEntryResizeParams
                ((FMenuEntryResizeParams *)local_688,(FMenuEntryResizeParams *)local_950);
      local_688[200] = true;
      local_aa0.Value.Value.Value = local_fd0[0];
      local_aa0.bIsSet = local_fd0[1];
      local_5b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_5b0.Data = (FScriptContainerElement *)0x0;
      local_5a8 = 0;
      TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
                (&local_aa0.Getter,
                 (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_fc8);
      bVar7 = (this_02->WidgetData).bSearchable;
      FVar9 = this_02->TutorialHighlightName;
      local_eb0._16_8_ = 0;
      local_eb0._0_8_ = 0;
      local_eb0._8_8_ = 0;
      pTVar12 = TSharedPtr<SWidget,1>::ToSharedRef(&local_f78,&local_3d0);
      FToolBarBuilder::AddWidget
                (param_1,pTVar12,&local_f8,FVar9,bVar7,&local_eb0,&local_aa0,
                 (TAttribute<FMenuEntryResizeParams> *)local_688);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_5b8,(FWriteAccessScope *)&local_d10);
      if (((int)local_5a8 != 0) && (FStack_5b0.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_5b0.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_5b0,0,0,0x10);
        local_5a8 = local_5a8 & 0xffffffff00000000;
      }
      if (local_d10.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d10.Accessor,&local_d10);
      }
      if (FStack_5b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_5b0.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_5b8.AccessDetector);
      FMenuEntryResizeParams::~FMenuEntryResizeParams((FMenuEntryResizeParams *)local_688);
      FMenuEntryStyleParams::~FMenuEntryStyleParams(&local_f8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f78.SharedReferenceCount.ReferenceController);
      goto LAB_142c6a789;
    }
    bVar7 = false;
    ConvertWidgetChoice(this,(TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
                              *)local_fe8,&(this_02->ToolBarData).ComboButtonContextMenuGenerator,
                        &param_2->Context);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_fe8,&local_988);
    if (((local_fd8 == 0) || (local_fe0.Data == (FScriptContainerElement *)0x0)) ||
       (cVar5 = (**(code **)(*(longlong *)local_fe0.Data + 0x38))(), cVar5 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_988);
      bVar6 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                         &(this_02->SubMenuData).ConstructMenu.NewToolMenu);
      if (!bVar6) {
        pTVar13 = ConvertWidgetChoice(this,(TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
                                            *)local_cc8,&(this_02->SubMenuData).ConstructMenu,
                                      &param_2->Context);
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_fe8,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar13);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_cc8);
        if ((void *)local_cc8._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_cc8._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_cc8);
      }
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_988);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_fe8,&local_7e0);
    if (((local_fd8 == 0) || (local_fe0.Data == (FScriptContainerElement *)0x0)) ||
       (cVar5 = (**(code **)(*(longlong *)local_fe0.Data + 0x38))(), cVar5 == '\0')) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_7e0);
    if (!bVar6) {
      FVar9 = FVar23;
      if (param_2 != (UToolMenu *)0x0) {
        UObjectBase::AddRef((UObjectBase *)param_2);
        FVar9 = (FName)param_2;
      }
      FVar25 = this_02->Name;
      local_f68 = (undefined1  [8])0x0;
      local_f60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_f60.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f68,
                 (FWriteAccessScope *)&local_be8);
      local_bd0 = &local_f60;
      puVar14 = UE::Core::Private::DelegateAllocate(0x30,&local_f60);
      if (puVar14 != (undefined8 *)0x0) {
        *puVar14 = &
                   ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar15 = FDelegateHandle::GenerateNewID();
        puVar14[2] = uVar15;
        *puVar14 = &TBaseFunctorDelegateInstance<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::PopulateToolBarBuilderWithEntry'::`89'::<lambda_2>_>
                    ::_vftable_;
        *(FName *)(puVar14 + 4) = FVar9;
        *(FName *)(puVar14 + 5) = FVar25;
        puVar14[3] = this;
        FVar9 = FVar23;
      }
      if (local_be8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_be8.Accessor,&local_be8);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_fe8,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_f68);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f68);
      if (local_f60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_f60.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_f68);
      if (FVar9 != (FName)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject((UObject *)FVar9);
      }
      bVar7 = true;
    }
    FMenuEntryResizeParams::FMenuEntryResizeParams
              ((FMenuEntryResizeParams *)local_3b0,(FMenuEntryResizeParams *)local_950);
    EVar2 = this_02->UserInterfaceActionType;
    local_3b0[200] = true;
    local_d78.Value = (this_02->ToolBarData).PlacementOverride.Value;
    local_d78.bIsSet = (this_02->ToolBarData).PlacementOverride.bIsSet;
    local_2e0 = (undefined1  [8])0x0;
    pvStack_2d8 = (void *)0x0;
    local_2d0 = 0;
    local_d78.Getter._0_8_ = 0;
    local_d78.Getter._8_8_ = 0;
    local_d78.Getter._16_4_ = 0;
    TDelegate<enum_EMenuPlacement___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              (&local_d78.Getter,&(this_02->ToolBarData).PlacementOverride.Getter);
    local_bc8.Value.TextData.Reference = local_1018.TextData.Reference;
    if (local_1018.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1018.TextData.Reference + 8))
                (local_1018.TextData.Reference,local_f38);
    }
    local_bc8.Value.Flags = local_1018.Flags;
    local_bc8.bIsSet = (bool)local_1008;
    local_bc8.Getter._0_8_ = 0;
    local_bc8.Getter._8_8_ = 0;
    local_bc8.Getter._16_4_ = 0;
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&local_bc8.Getter,
               (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_1000);
    local_a80.Value.Value.Value = local_fd0[0];
    local_a80.bIsSet = local_fd0[1];
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
              (&local_a80.Getter,
               (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_fc8);
    FToolBarBuilder::AddComboButton
              (param_1,(FUIAction *)local_c50,
               (TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *)
               local_fe8,&this_02->Label,&this_02->ToolTip,&this_02->Icon,
               (this_02->ToolBarData).bSimpleComboBox,this_02->TutorialHighlightName,&local_a80,
               &local_bc8,&local_d78,EVar2,(TAttribute<FMenuEntryResizeParams> *)local_3b0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2e0);
    if (pvStack_2d8 != (void *)0x0) {
      FMemory::Free(pvStack_2d8);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2e0);
    FMenuEntryResizeParams::~FMenuEntryResizeParams((FMenuEntryResizeParams *)local_3b0);
    if ((bVar7) && (param_5 == false)) {
      PopulateToolBarBuilderWithTopLevelChildren(this,param_1,param_2,this_02,(bool)(param_6 ^ 1));
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_fe8,
               (FWriteAccessScope *)&local_cb0);
    if ((local_fd8 != 0) && (local_fe0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_fe0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_fe0,0,0,0x10);
      local_fd8 = 0;
    }
    if (local_cb0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_cb0.Accessor,&local_cb0);
    }
    if (local_fe0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_fe0.Data);
    }
    this_03 = (FMRSWRecursiveAccessDetector *)local_fe8;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_03);
LAB_142c6a789:
  FToolBarBuilder::EndStyleOverride(param_1);
  FMenuEntryResizeParams::FWrappingParams::~FWrappingParams(&local_8f0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_908);
  if ((void *)local_908._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_908._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_908);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_928);
  if ((void *)local_928._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_928._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_928);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_948);
  if ((void *)local_948._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_948._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_948);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1000,
             (FWriteAccessScope *)&local_c80);
  if (((int)local_ff0 != 0) && (FStack_ff8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_ff8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_ff8,0,0,0x10);
    local_ff0 = local_ff0 & 0xffffffff00000000;
  }
  if (local_c80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c80.Accessor,&local_c80);
  }
  if (FStack_ff8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_ff8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1000);
  if (local_1018.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1018.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c08);
  if ((void *)local_c08._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c08._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c08);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c20);
  if ((void *)local_c20._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c20._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c20);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c38);
  if ((void *)local_c38._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c38._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c38);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c50);
  if ((void *)local_c50._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c50._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c50);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_fc8);
  if ((void *)local_fc8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_fc8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_fc8);
  return;
}

// PopulateToolBarBuilderWithTopLevelChildren @ 142c6a990

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UToolMenus::PopulateToolBarBuilderWithTopLevelChildren
          (UToolMenus *this,FToolBarBuilder *param_1,UToolMenu *param_2,FToolMenuEntry *param_3,
          bool param_4)

{
  UToolMenuEntryScript *this_00;
  longlong *plVar1;
  UToolMenu *pUVar2;
  FToolMenuEntry *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  TAttribute<bool> *pTVar15;
  TSharedRef<TArray<TAttribute<EVisibility>,TSizedDefaultAllocator<32>_>,1> *pTVar16;
  TReferenceControllerBase<1> *pTVar17;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *pTVar18;
  undefined8 *puVar19;
  ulong64 uVar20;
  ISlateStyle *pIVar21;
  FToolBarStyle *pFVar22;
  FArguments *pFVar23;
  TSharedRef<SSpacer,1> *pTVar24;
  uint uVar25;
  FName FVar26;
  FToolMenuSection *pFVar27;
  uint uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  FName FVar31;
  FName FVar32;
  ulonglong uVar33;
  TArray<TAttribute<EVisibility>,TSizedDefaultAllocator<32>_> *pTVar34;
  uint uVar35;
  FNameEntryId FVar36;
  FName FVar37;
  ForAnyElementType local_4a38;
  undefined8 local_4a30;
  ForAnyElementType local_4a28;
  undefined8 local_4a20;
  T0RequiredArgs local_4a18 [8];
  ForAnyElementType local_4a10;
  undefined8 local_4a08;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_4a00;
  FDelegateAllocation local_49f8;
  TArray<TAttribute<EVisibility>,TSizedDefaultAllocator<32>_> local_49e8;
  TArray<UE::ToolMenus::FSubBlockReference,TSizedDefaultAllocator<32>_> local_49d8;
  undefined4 local_49c8 [2];
  TArray<TAttribute<EVisibility>,TSizedDefaultAllocator<32>_> *local_49c0;
  FSharedReferencer<1> local_49b8;
  undefined1 local_49b0 [8];
  ForAnyElementType local_49a8;
  int local_49a0;
  FToolMenuSection *local_4998;
  undefined8 local_4990;
  undefined4 local_4988;
  undefined1 local_4984;
  undefined1 local_4980 [8];
  ForAnyElementType FStack_4978;
  ulonglong local_4970;
  undefined2 local_4968;
  undefined1 local_4960 [8];
  ForAnyElementType FStack_4958;
  ulonglong local_4950;
  undefined1 local_4948 [8];
  undefined1 local_4940 [24];
  undefined2 local_4928;
  undefined1 local_4920 [8];
  ForAnyElementType FStack_4918;
  ulonglong local_4910;
  undefined1 local_4908 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_4900;
  ForAnyElementType FStack_48f8;
  ulonglong local_48f0;
  UToolMenu *local_48e8;
  undefined8 local_48e0;
  FToolMenuEntry *local_48d8;
  longlong local_48d0;
  FName local_48c8;
  undefined2 local_48c0;
  undefined1 local_48b8 [8];
  void *pvStack_48b0;
  int local_48a8;
  char local_48a0;
  char local_489f;
  undefined1 local_4898 [24];
  undefined1 local_4880 [80];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_4830;
  ForAnyElementType FStack_4828;
  ulonglong local_4820;
  float local_4818;
  bool local_4814;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_4810;
  ForAnyElementType FStack_4808;
  ulonglong local_4800;
  FOptionalSize local_47f8;
  bool local_47f4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_47f0;
  ForAnyElementType FStack_47e8;
  ulonglong local_47e0;
  FOptionalSize local_47d8;
  bool local_47d4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_47d0;
  ForAnyElementType FStack_47c8;
  ulonglong local_47c0;
  undefined8 local_47b8;
  FSharedReferencer<1> local_47b0;
  undefined2 local_47a8;
  undefined1 local_47a0 [24];
  <lambda_1> local_4788;
  undefined1 local_4768 [8];
  undefined1 local_4760 [8];
  void *pvStack_4758;
  undefined8 local_4750;
  undefined1 local_4748 [8];
  undefined1 local_4740 [8];
  void *pvStack_4738;
  undefined8 local_4730;
  undefined1 local_4728 [8];
  undefined1 local_4720 [8];
  void *pvStack_4718;
  undefined8 local_4710;
  FWrappingParams local_4708;
  UToolMenu *local_46a0;
  FMemScope local_4698;
  FName local_4690;
  undefined1 local_4688 [8];
  undefined1 local_4680 [8];
  void *pvStack_4678;
  undefined8 local_4670;
  undefined1 local_4668 [8];
  undefined1 local_4660 [8];
  void *pvStack_4658;
  undefined8 local_4650;
  undefined1 local_4648 [8];
  undefined1 local_4640 [8];
  void *pvStack_4638;
  undefined8 local_4630;
  FWrappingParams local_4628;
  double local_45c0;
  undefined8 uStack_45b8;
  undefined1 local_45b0;
  undefined1 local_45a8 [8];
  void *pvStack_45a0;
  undefined8 local_4598;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> local_4590;
  TSharedRef<SWidget,1> local_4578;
  FDestructionSentinel local_4568;
  FDestructionSentinel local_4550;
  FDestructionSentinel local_4538;
  FDestructionSentinel local_4520;
  FDestructionSentinel local_4508;
  FDestructionSentinel local_44f0;
  FDestructionSentinel local_44d8;
  FDestructionSentinel local_44c0;
  undefined1 local_44a8 [24];
  FDestructionSentinel local_4490;
  FDestructionSentinel local_4478;
  FDestructionSentinel local_4460;
  FDestructionSentinel local_4448;
  FDelegateAllocation *local_4430;
  FReadAccessScope local_4428;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> local_4410;
  TSharedRef<SSpacer,1> local_43f8;
  TSharedRef<TArray<TAttribute<EVisibility>,TSizedDefaultAllocator<32>_>,1> local_43e8;
  FString local_43d8;
  FString local_43c8;
  undefined1 local_43b8 [8];
  undefined1 local_43b0 [24];
  TAttribute<EVisibility> local_4398;
  TAttribute<EVisibility> local_4378;
  FString local_4358;
  undefined1 local_4348 [208];
  undefined1 local_4278 [8];
  void *pvStack_4270;
  undefined8 local_4268;
  undefined1 local_4260 [208];
  undefined1 local_4190 [8];
  void *pvStack_4188;
  undefined8 local_4180;
  undefined1 local_4178 [528];
  undefined1 local_3f68 [32];
  FToolBarStyle local_3f48;
  undefined8 uStack_48;
  
  uStack_48 = 0x142c6a9c2;
  uVar29 = 0;
  local_49c8[0] = 0;
  local_49d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_49d8.ArrayNum = 0;
  local_49d8.ArrayMax = 0;
  ExtractChildBlocksFromSubMenu(this,param_2,param_3,&local_49d8);
  local_4a38.Data = (FScriptContainerElement *)0x0;
  local_4a30 = 0;
  uVar30 = uVar29;
  uVar33 = uVar29;
  if (0 < local_49d8.ArrayNum) {
    do {
      if (local_49d8.ArrayNum < 1) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar30 = local_4a30 & 0xffffffff;
      }
      lVar14 = (longlong)local_49d8.ArrayNum;
      local_48e8 = *(UToolMenu **)(local_49d8.AllocatorInstance.Data + lVar14 * 0x18 + -0x18);
      local_48e0 = *(undefined8 *)(local_49d8.AllocatorInstance.Data + lVar14 * 0x18 + -0x10);
      local_48d8 = *(FToolMenuEntry **)(local_49d8.AllocatorInstance.Data + lVar14 * 0x18 + -8);
      iVar11 = (local_49d8.ArrayNum - (local_49d8.ArrayNum + -1)) + -1;
      iVar12 = local_49d8.ArrayNum;
      if (iVar11 != 0) {
        memmove(local_49d8.AllocatorInstance.Data + (longlong)(local_49d8.ArrayNum + -1) * 0x18,
                local_49d8.AllocatorInstance.Data + (longlong)(local_49d8.ArrayNum + -1) * 0x18 +
                0x18,(longlong)iVar11 * 0x18);
        uVar30 = local_4a30 & 0xffffffff;
        iVar12 = local_49d8.ArrayNum;
      }
      pFVar3 = local_48d8;
      pUVar2 = local_48e8;
      uVar35 = (int)uVar33 + 1;
      uVar33 = (ulonglong)uVar35;
      local_49d8.ArrayNum = iVar12 + -1;
      if (5000 < (int)uVar35) {
        if (2 < (byte)LogToolMenus._0_1_) {
          ::FName::ToString(&local_48d8->Name,&local_43d8);
          ::FName::ToString(&pUVar2->MenuName,&local_43c8);
          ::FName::ToString(&param_2->MenuName,&local_4358);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogToolMenus);
          if (local_4358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4358.Data.AllocatorInstance.Data);
          }
          if (local_43c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_43c8.Data.AllocatorInstance.Data);
          }
          if (local_43d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_43d8.Data.AllocatorInstance.Data);
          }
          uVar30 = local_4a30 & 0xffffffff;
        }
        break;
      }
      this_00 = (local_48d8->ScriptObject).field0_0x0.DebugPtr;
      if (this_00 == (UToolMenuEntryScript *)0x0) {
        uVar35 = (uint)uVar29 | 2;
        local_4908[0] = false;
        local_4908[1] = false;
        pTVar15 = (TAttribute<bool> *)local_4908;
        local_48f0 = 0;
        local_4900.AccessDetector.State =
             (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        FStack_48f8.Data = (FScriptContainerElement *)0x0;
      }
      else {
        uVar35 = (uint)uVar29 | 1;
        pTVar15 = UToolMenuEntryScript::CreateShowInToolbarTopLevelAttribute
                            (this_00,(TAttribute<bool> *)local_43b8,&param_2->Context);
      }
      local_48a0 = pTVar15->Value;
      local_489f = pTVar15->bIsSet;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4898,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar15->Getter);
      if ((uVar35 & 2) != 0) {
        uVar35 = uVar35 & 0xfffffffd;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_4900,(FWriteAccessScope *)&local_4490);
        if (((int)local_48f0 != 0) && (FStack_48f8.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_48f8.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&FStack_48f8,0,0,0x10);
          local_48f0 = local_48f0 & 0xffffffff00000000;
        }
        if (local_4490.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4490.Accessor,&local_4490);
        }
        if (FStack_48f8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_48f8.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_4900.AccessDetector);
      }
      if ((uVar35 & 1) != 0) {
        uVar35 = uVar35 & 0xfffffffe;
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_43b0);
        if ((void *)local_43b0._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_43b0._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_43b0);
      }
      uVar29 = (ulonglong)uVar35;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(pFVar3->ShowInToolbarTopLevel).Getter,&local_4428);
      if (((*(int *)&(pFVar3->ShowInToolbarTopLevel).Getter.field_0x10 == 0) ||
          (plVar1 = *(longlong **)&(pFVar3->ShowInToolbarTopLevel).Getter.field_0x8,
          plVar1 == (longlong *)0x0)) || (cVar9 = (**(code **)(*plVar1 + 0x38))(), cVar9 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_4428);
        bVar8 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                          ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4898);
        if (bVar8) goto LAB_142c6ac64;
        if (((pFVar3->ShowInToolbarTopLevel).bIsSet == false) && (bVar8 = false, local_489f == '\0')
           ) goto LAB_142c6ac66;
        bVar8 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                          ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                           &(pFVar3->ShowInToolbarTopLevel).Getter);
        if (bVar8) {
          bVar8 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::Execute
                            (&(pFVar3->ShowInToolbarTopLevel).Getter);
          (pFVar3->ShowInToolbarTopLevel).Value = bVar8;
        }
        if ((pFVar3->ShowInToolbarTopLevel).Value == false) {
          bVar8 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4898);
          if (bVar8) {
            local_48a0 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::Execute
                                   ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)
                                    local_4898);
          }
          if (local_48a0 != '\0') goto LAB_142c6ac74;
          goto LAB_142c6ac6a;
        }
LAB_142c6ac74:
        if (((local_4a38.Data <= (FScriptContainerElement *)&local_48e8) &&
            ((FScriptContainerElement *)&local_48e8 <
             local_4a38.Data + (longlong)local_4a30._4_4_ * 0x18)) &&
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
        iVar12 = (int)local_4a30;
        if ((int)local_4a30 == local_4a30._4_4_) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&local_4a38,(int *)((longlong)&local_4a30 + 4));
        }
        lVar14 = (longlong)iVar12;
        local_4a30 = CONCAT44(local_4a30._4_4_,iVar12 + 1);
        *(UToolMenu **)(local_4a38.Data + lVar14 * 0x18) = local_48e8;
        *(undefined8 *)(local_4a38.Data + lVar14 * 0x18 + 8) = local_48e0;
        *(FToolMenuEntry **)(local_4a38.Data + lVar14 * 0x18 + 0x10) = local_48d8;
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_4428);
LAB_142c6ac64:
        bVar8 = true;
LAB_142c6ac66:
        if (bVar8) goto LAB_142c6ac74;
LAB_142c6ac6a:
        if (pFVar3->Type == Separator) goto LAB_142c6ac74;
      }
      ExtractChildBlocksFromSubMenu(this,pUVar2,pFVar3,&local_49d8);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4898);
      if ((void *)local_4898._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_4898._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_4898);
      uVar30 = local_4a30 & 0xffffffff;
    } while (0 < local_49d8.ArrayNum);
    uVar29 = uVar30;
    iVar12 = (int)uVar30;
    while (0 < iVar12) {
      if ((int)uVar29 < 1) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar29 = local_4a30 & 0xffffffff;
      }
      iVar12 = (int)uVar29;
      if ((char)(*(UToolMenu **)(local_4a38.Data + 0x10))->_padding_ != '\x05') {
        if (0 < iVar12) goto LAB_142c6b010;
        break;
      }
      if (iVar12 < 1) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar12 = (int)local_4a30;
      }
      if (iVar12 + -1 != 0) {
        memmove(local_4a38.Data,local_4a38.Data + 0x18,(longlong)(iVar12 + -1) * 0x18);
        iVar12 = (int)local_4a30;
      }
      local_4a30 = CONCAT44(local_4a30._4_4_,iVar12 + -1);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,&local_4a38,iVar12 + -1,(int *)((longlong)&local_4a30 + 4));
      uVar29 = local_4a30 & 0xffffffff;
      iVar12 = (int)local_4a30;
    }
  }
  goto LAB_142c6b13f;
  while( true ) {
    uVar25 = iVar12 - 1;
    uVar35 = 0;
    if ((int)uVar25 < iVar12) {
      uVar35 = ~uVar25 >> 0x1f;
    }
    if (uVar35 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar12 = (int)local_4a30;
    }
    iVar11 = (iVar12 - uVar25) + -1;
    if (iVar11 != 0) {
      memmove(local_4a38.Data + (longlong)(int)uVar25 * 0x18,
              local_4a38.Data + (longlong)(int)uVar25 * 0x18 + 0x18,(longlong)iVar11 * 0x18);
      iVar12 = (int)local_4a30;
    }
    local_4a30 = CONCAT44(local_4a30._4_4_,iVar12 + -1);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,&local_4a38,iVar12 + -1,(int *)((longlong)&local_4a30 + 4));
    uVar29 = local_4a30 & 0xffffffff;
    if ((int)local_4a30 < 1) break;
LAB_142c6b010:
    uVar25 = (int)uVar29 - 1;
    uVar35 = 0;
    if ((int)uVar25 < (int)uVar29) {
      uVar35 = ~uVar25 >> 0x1f;
    }
    if (uVar35 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar29 = local_4a30 & 0xffffffff;
    }
    iVar12 = (int)uVar29;
    if (*(char *)(*(longlong *)(local_4a38.Data + (longlong)(int)uVar25 * 0x18 + 0x10) + 0x18) !=
        '\x05') break;
  }
LAB_142c6b13f:
  uVar30 = 0;
  uVar35 = 1;
  iVar12 = (int)uVar29;
  if (1 < iVar12) {
    lVar14 = 0x18;
    uVar33 = uVar30;
    do {
      uVar28 = (uint)uVar30;
      uVar25 = 0;
      if ((int)uVar35 < (int)uVar29) {
        uVar25 = ~uVar35 >> 0x1f;
      }
      if (uVar25 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar29 = local_4a30 & 0xffffffff;
      }
      cVar9 = *(char *)(*(longlong *)(local_4a38.Data + lVar14 + 0x10) + 0x18);
      uVar25 = 0;
      if ((int)uVar28 < (int)uVar29) {
        uVar25 = ~uVar28 >> 0x1f;
      }
      if (uVar25 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar29 = local_4a30 & 0xffffffff;
      }
      uVar25 = uVar35;
      if ((cVar9 == '\x05') &&
         (*(char *)(*(longlong *)(local_4a38.Data + uVar33 + 0x10) + 0x18) == '\x05')) {
        uVar28 = uVar28 - 1;
        uVar25 = uVar35 - 1;
        lVar14 = lVar14 + -0x18;
        uVar33 = uVar33 - 0x18;
        uVar13 = 0;
        if ((int)uVar35 < (int)uVar29) {
          uVar13 = ~uVar35 >> 0x1f;
        }
        iVar12 = (int)uVar29;
        if (uVar13 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar12 = (int)local_4a30;
        }
        iVar11 = (iVar12 - uVar35) + -1;
        if (iVar11 != 0) {
          memmove(local_4a38.Data + (longlong)(int)uVar35 * 0x18,
                  local_4a38.Data + (longlong)(int)uVar35 * 0x18 + 0x18,(longlong)iVar11 * 0x18);
          iVar12 = (int)local_4a30;
        }
        local_4a30 = CONCAT44(local_4a30._4_4_,iVar12 + -1);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&local_4a38,iVar12 + -1,(int *)((longlong)&local_4a30 + 4));
        uVar29 = local_4a30 & 0xffffffff;
      }
      uVar35 = uVar25 + 1;
      uVar30 = (ulonglong)(uVar28 + 1);
      lVar14 = lVar14 + 0x18;
      uVar33 = uVar33 + 0x18;
      iVar12 = (int)uVar29;
    } while ((int)uVar35 < iVar12);
  }
  if (iVar12 != 0) {
    FVar32.ComparisonIndex.Value = 0;
    FVar32.Number = 0;
    local_4a28.Data = (FScriptContainerElement *)0x0;
    local_4a20 = 0;
    local_49e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_49e8.ArrayNum = 0;
    local_49e8.ArrayMax = 0;
    pTVar16 = MakeShared<TArray<TAttribute<EVisibility>,TSizedDefaultAllocator<32>_>,1>(&local_43e8)
    ;
    local_49c0 = pTVar16->Object;
    local_49b8.ReferenceController = (pTVar16->SharedReferenceCount).ReferenceController;
    if (local_49b8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_49b8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_49b8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_43e8.SharedReferenceCount.ReferenceController);
    bVar8 = false;
    if (((int)local_4a30 < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_4990 = 0;
    FVar26 = (FName)(*(UToolMenu **)(local_4a38.Data + 8))->_padding_;
    if (0 < (int)local_4a30) {
      local_48d0 = 0;
      FVar31 = FVar32;
      FVar37 = FVar32;
      do {
        lVar14 = local_48d0;
        FVar36 = FVar37.ComparisonIndex.Value;
        uVar25 = ~FVar36.Value >> 0x1f;
        uVar35 = 0;
        if ((int)FVar36.Value < (int)local_4a30) {
          uVar35 = uVar25;
        }
        if ((uVar35 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pUVar2 = *(UToolMenu **)(local_4a38.Data + lVar14);
        uVar35 = 0;
        if ((int)FVar36.Value < (int)local_4a30) {
          uVar35 = uVar25;
        }
        if ((uVar35 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_4998 = *(FToolMenuSection **)(local_4a38.Data + lVar14 + 8);
        uVar35 = 0;
        if ((int)FVar36.Value < (int)local_4a30) {
          uVar35 = uVar25;
        }
        if ((uVar35 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = *(FToolMenuEntry **)(local_4a38.Data + lVar14 + 0x10);
        if (bVar8) {
          if ((local_4998->Name != FVar26) || (pFVar3->Type == Separator)) {
            if ((local_49c0 == (TArray<TAttribute<EVisibility>,TSizedDefaultAllocator<32>_> *)0x0)
               && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x44d,L""), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pTVar34 = local_49c0;
            if ((&local_49e8 == local_49c0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(void*)this != (void*)&Source",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x96e,L""), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar12 = pTVar34->ArrayNum;
            if (iVar12 != 0) {
              iVar11 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x20,8,iVar12,&local_49e8.AllocatorInstance,&local_49e8.ArrayNum,
                                  &local_49e8.ArrayMax);
              ConstructItems<TAttribute<EVisibility>,TAttribute<EVisibility>,int>
                        (local_49e8.AllocatorInstance.Data + (longlong)iVar11 * 0x20,
                         (TAttribute<EVisibility> *)(pTVar34->AllocatorInstance).Data,iVar12);
            }
            pTVar17 = ::operator_new(0x20);
            if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
              pTVar34 = (TArray<TAttribute<EVisibility>,TSizedDefaultAllocator<32>_> *)&DAT_00000010
              ;
              local_47b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            }
            else {
              pTVar17->SharedReferenceCount = (atomic<int>)0x1;
              pTVar34 = (TArray<TAttribute<EVisibility>,TSizedDefaultAllocator<32>_> *)(pTVar17 + 1)
              ;
              pTVar17->WeakReferenceCount = (atomic<int>)0x1;
              pTVar17->_padding_ =
                   (longlong)
                   &
                   ___7__TIntrusiveReferenceController_V__TArray_V__TAttribute_UEVisibility____V__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
              ;
              pTVar17[1]._padding_ = 0;
              pTVar17[1].SharedReferenceCount = (atomic<int>)0x0;
              pTVar17[1].WeakReferenceCount = (atomic<int>)0x0;
              if ((pTVar34 == (TArray<TAttribute<EVisibility>,TSizedDefaultAllocator<32>_> *)0x0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InObject != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x246,L""), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              LOCK();
              pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
              UNLOCK();
              local_47b0.ReferenceController = pTVar17;
            }
            FVar7.ReferenceController = local_47b0.ReferenceController;
            local_47b8 = 0;
            local_49c0 = pTVar34;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&local_49b8,&local_47b0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_47b0.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar7.ReferenceController);
            local_4788.Previous.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            TArray<TAttribute<EVisibility>,TSizedDefaultAllocator<32>_>::
            CopyToEmpty<TAttribute<EVisibility>,int>
                      (&local_4788.Previous,
                       (TAttribute<EVisibility> *)local_49e8.AllocatorInstance.Data,
                       local_49e8.ArrayNum,0);
            local_4788.Next.Object = local_49c0;
            local_4788.Next.SharedReferenceCount.ReferenceController =
                 local_49b8.ReferenceController;
            if (local_49b8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_49b8.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(local_49b8.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            pTVar18 = TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
                      CreateLambda<_UToolMenus::PopulateToolBarBuilderWithTopLevelChildren_::__l45::<lambda_1>_>
                                ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)
                                 local_44a8,&local_4788);
            local_47a8 = 0x119;
            TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_47a0,
                       (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar18);
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_44a8);
            if ((void *)local_44a8._8_8_ != (void *)0x0) {
              FMemory::Free((void *)local_44a8._8_8_);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_44a8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_4788.Next.SharedReferenceCount.ReferenceController);
            DestructItems<TAttribute<EVisibility>,int>
                      ((TAttribute<EVisibility> *)local_4788.Previous.AllocatorInstance.Data,
                       local_4788.Previous.ArrayNum);
            if ((TAttribute<EVisibility> *)local_4788.Previous.AllocatorInstance.Data !=
                (TAttribute<EVisibility> *)0x0) {
              FMemory::Free(local_4788.Previous.AllocatorInstance.Data);
            }
            local_4688._0_4_ = 0;
            local_4670 = 0;
            local_4650 = 0;
            local_4630 = 0;
            local_4628.Allow.Getter._16_8_ = 0;
            local_4628.Priority.Getter._16_8_ = 0;
            local_4628.Mode.Getter._16_8_ = 0;
            local_4910 = 0;
            local_4688[4] = false;
            local_4680 = (undefined1  [8])0x0;
            pvStack_4678 = (void *)0x0;
            local_4668[0] = false;
            local_4668[1] = false;
            local_4660 = (undefined1  [8])0x0;
            pvStack_4658 = (void *)0x0;
            local_4628.Allow.Value = false;
            local_4628.Allow.bIsSet = false;
            local_4640 = (undefined1  [8])0x0;
            pvStack_4638 = (void *)0x0;
            local_4628.Priority.Value = 0;
            local_4628.Allow.Getter._0_8_ = 0;
            local_4628.Allow.Getter._8_8_ = 0;
            local_4628.Priority.bIsSet = false;
            local_4628.Priority.Getter._0_8_ = 0;
            local_4628.Priority.Getter._8_8_ = 0;
            local_4628.Mode.Value = Preferred;
            local_4628.Mode.bIsSet = false;
            local_4628.Mode.Getter._0_8_ = 0;
            local_4628.Mode.Getter._8_8_ = 0;
            local_4628.VerticalOverflowBehavior.bIsSet = false;
            local_4628.ForceNewLine.bIsSet = false;
            local_4928 = 0x100;
            local_4920 = (undefined1  [8])0x0;
            FStack_4918.Data = (FScriptContainerElement *)0x0;
            local_4648[0] = false;
            local_4648[1] = true;
            TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4640,
                       (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4920);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4920,
                       (FWriteAccessScope *)&local_44c0);
            if (((int)local_4910 != 0) && (FStack_4918.Data != (FScriptContainerElement *)0x0)) {
              (*(code *)**(undefined8 **)FStack_4918.Data)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&FStack_4918,0,0,0x10);
              local_4910 = local_4910 & 0xffffffff00000000;
            }
            if (local_44c0.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_44c0.Accessor,&local_44c0);
            }
            if (FStack_4918.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_4918.Data);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_4920);
            FMenuEntryResizeParams::FMenuEntryResizeParams
                      ((FMenuEntryResizeParams *)local_4348,(FMenuEntryResizeParams *)local_4688);
            local_4348[200] = true;
            local_4398.Value.Value.Value =
                 (TEnumAsByte<EVisibility::Private>)
                 (TEnumAsByte<EVisibility::Private>)local_47a8._0_1_;
            local_4398.bIsSet = (bool)local_47a8._1_1_;
            local_4278 = (undefined1  [8])0x0;
            pvStack_4270 = (void *)0x0;
            local_4268 = 0;
            TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
            TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
                      (&local_4398.Getter,
                       (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_47a0
                      );
            FToolBarBuilder::AddSeparator
                      (param_1,(FName)0x0,&local_4398,
                       (TAttribute<FMenuEntryResizeParams> *)local_4348);
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4278);
            if (pvStack_4270 != (void *)0x0) {
              FMemory::Free(pvStack_4270);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_4278);
            FMenuEntryResizeParams::~FMenuEntryResizeParams((FMenuEntryResizeParams *)local_4348);
            bVar8 = false;
            FMenuEntryResizeParams::FWrappingParams::~FWrappingParams(&local_4628);
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4640);
            if (pvStack_4638 != (void *)0x0) {
              FMemory::Free(pvStack_4638);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_4640);
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4660);
            if (pvStack_4658 != (void *)0x0) {
              FMemory::Free(pvStack_4658);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_4660);
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4680);
            if (pvStack_4678 != (void *)0x0) {
              FMemory::Free(pvStack_4678);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_4680);
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_47a0);
            if ((void *)local_47a0._8_8_ != (void *)0x0) {
              FMemory::Free((void *)local_47a0._8_8_);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_47a0);
            goto LAB_142c6b9ab;
          }
LAB_142c6b9b6:
          pFVar27 = local_4998;
          FVar32 = (pFVar3->ToolBarData).BlockGroupName;
          if (FVar32 != FVar31) {
            if (FVar31 != (FName)0x0) {
              FToolBarBuilder::EndBlockGroup(param_1);
            }
            if (FVar32 != (FName)0x0) {
              FToolBarBuilder::BeginBlockGroup(param_1);
            }
          }
          PopulateToolBarBuilderWithEntry(this,param_1,pUVar2,pFVar27,pFVar3,true,false);
          bVar8 = true;
          CalculateToolbarVisibility
                    ((TAttribute<EVisibility> *)local_4948,pUVar2,pFVar27,pFVar3,true,true);
          if ((local_49c0 == (TArray<TAttribute<EVisibility>,TSizedDefaultAllocator<32>_> *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar34 = local_49c0;
          pFVar4 = (local_49c0->AllocatorInstance).Data;
          if (((pFVar4 <= (FScriptContainerElement *)local_4948) &&
              ((FScriptContainerElement *)local_4948 <
               pFVar4 + (longlong)local_49c0->ArrayMax * 0x20)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar12 = pTVar34->ArrayNum;
          if (iVar12 == pTVar34->ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,&pTVar34->AllocatorInstance,&pTVar34->ArrayMax);
          }
          pTVar34->ArrayNum = iVar12 + 1;
          pFVar4 = (pTVar34->AllocatorInstance).Data;
          lVar14 = (longlong)iVar12 * 0x20;
          pFVar4[lVar14] = (FScriptContainerElement)local_4948[0];
          pFVar4[lVar14 + 1] = local_4948[1];
          TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
          TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
                    ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)
                     (pFVar4 + lVar14 + 8),
                     (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_4940);
          if (param_4) {
            if (((local_4a28.Data <= (TAttribute<EVisibility> *)local_4948) &&
                ((FScriptContainerElement *)local_4948 <
                 local_4a28.Data + (longlong)local_4a20._4_4_ * 0x20)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar12 = (int)local_4a20;
            if ((int)local_4a20 == local_4a20._4_4_) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x820,&local_4a28,(int *)((longlong)&local_4a20 + 4));
            }
            local_4a20 = CONCAT44(local_4a20._4_4_,iVar12 + 1);
            lVar14 = (longlong)iVar12 * 0x20;
            local_4a28.Data[lVar14].field_0x0 = local_4948[0];
            local_4a28.Data[lVar14 + 1] = local_4948[1];
            TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
            TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
                      ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)
                       (local_4a28.Data + lVar14 + 8),
                       (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_4940
                      );
          }
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4940);
          if ((void *)local_4940._8_8_ != (void *)0x0) {
            FMemory::Free((void *)local_4940._8_8_);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_4940);
        }
        else {
LAB_142c6b9ab:
          pFVar27 = local_4998;
          FVar32 = FVar31;
          if (pFVar3->Type != Separator) goto LAB_142c6b9b6;
        }
        FVar37.ComparisonIndex.Value = FVar36.Value + 1;
        FVar37.Number = 0;
        FVar26 = pFVar27->Name;
        local_48d0 = local_48d0 + 0x18;
        FVar31 = FVar32;
      } while ((int)FVar37.ComparisonIndex.Value < (int)local_4a30);
    }
    if (FVar32 != (FName)0x0) {
      FToolBarBuilder::EndBlockGroup(param_1);
    }
    FVar6.Data = local_4a28.Data;
    if (param_4) {
      iVar12 = (int)local_4a20;
      local_4820 = 0;
      local_4800 = 0;
      local_47e0 = 0;
      local_47c0 = 0;
      local_47f8.Size = FOptionalSize::Unspecified;
      local_47d8.Size = FOptionalSize::Unspecified;
      local_4880[0] = false;
      local_4880._4_4_ = HAlign_Fill;
      local_4880[0xc] = false;
      local_4880[0x14] = false;
      local_4880[0x1c] = false;
      local_4880[0x24] = false;
      local_4880[0x2c] = false;
      local_4880[0x34] = false;
      local_4880[0x3c] = false;
      local_4880[0x44] = false;
      local_4880._72_4_ = 0.0;
      local_4880[0x4c] = false;
      local_4818 = 0.0;
      local_4814 = false;
      local_47f4 = false;
      local_47d4 = false;
      local_48c8.ComparisonIndex.Value = 0;
      local_48c8.Number = 0;
      local_49b0 = (undefined1  [8])0x0;
      local_49a8.Data = (FScriptContainerElement *)0x0;
      local_49a0 = 0;
      local_4a10.Data = (FScriptContainerElement *)0x0;
      local_4a08 = CONCAT44(local_4a08._4_4_,(int)local_4a20);
      local_4830.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_4828.Data = (FScriptContainerElement *)0x0;
      local_4810.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_4808.Data = (FScriptContainerElement *)0x0;
      local_47f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_47e8.Data = (FScriptContainerElement *)0x0;
      local_47d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_47c8.Data = (FScriptContainerElement *)0x0;
      if ((int)local_4a20 == 0) {
        local_4a08 = local_4a20 & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,(int)local_4a20,0,&local_4a10,(int)local_4a20,
                   (int *)((longlong)&local_4a08 + 4));
        ConstructItems<TAttribute<EVisibility>,TAttribute<EVisibility>,int>
                  (local_4a10.Data,(TAttribute<EVisibility> *)FVar6.Data,iVar12);
      }
      local_4a00.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_49f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_49f8.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_4a00,(FWriteAccessScope *)&local_4448);
      local_4430 = &local_49f8;
      puVar19 = UE::Core::Private::DelegateAllocate(0x28,&local_49f8);
      if (puVar19 != (undefined8 *)0x0) {
        *puVar19 = &
                   ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar20 = FDelegateHandle::GenerateNewID();
        puVar19[2] = uVar20;
        *puVar19 = &TBaseFunctorDelegateInstance<EVisibility___cdecl(void),FDefaultDelegateUserPolicy,`UToolMenus::PopulateToolBarBuilderWithTopLevelChildren'::`66'::<lambda_2>_>
                    ::_vftable_;
        puVar19[3] = 0;
        puVar19[3] = local_4a10.Data;
        local_4a10.Data = (FScriptContainerElement *)0x0;
        *(int *)(puVar19 + 4) = (int)local_4a08;
        *(undefined4 *)((longlong)puVar19 + 0x24) = local_4a08._4_4_;
        local_4a08 = 0;
      }
      if (local_4448.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4448.Accessor,&local_4448);
      }
      local_48c0 = 0x119;
      local_48b8 = (undefined1  [8])0x0;
      pvStack_48b0 = (void *)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_4a00,(FWriteAccessScope *)&local_44d8);
      if (pvStack_48b0 != (void *)0x0) {
        FMemory::Free(pvStack_48b0);
      }
      pvStack_48b0 = (void *)local_49f8.DelegateAllocator;
      local_48a8 = local_49f8.DelegateSize;
      local_49f8.DelegateSize = 0;
      local_49f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      if (local_44d8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_44d8.Accessor,&local_44d8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_4a00,(FWriteAccessScope *)&local_4478);
      if ((local_49f8.DelegateSize != 0) &&
         (local_49f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_49f8.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_49f8,0,0,0x10);
        local_49f8.DelegateSize = 0;
      }
      if (local_4478.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4478.Accessor,&local_4478);
      }
      if (local_49f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_49f8.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_4a00.AccessDetector);
      DestructItems<TAttribute<EVisibility>,int>
                ((TAttribute<EVisibility> *)local_4a10.Data,(int)local_4a08);
      if ((TAttribute<EVisibility> *)local_4a10.Data != (TAttribute<EVisibility> *)0x0) {
        FMemory::Free(local_4a10.Data);
      }
      local_4768._0_4_ = 0;
      local_4750 = 0;
      local_4730 = 0;
      local_4710 = 0;
      local_4708.Allow.Getter._16_8_ = 0;
      local_4708.Priority.Getter._16_8_ = 0;
      local_4708.Mode.Getter._16_8_ = 0;
      local_4950 = 0;
      local_4768[4] = false;
      local_4760 = (undefined1  [8])0x0;
      pvStack_4758 = (void *)0x0;
      local_4748[0] = false;
      local_4748[1] = false;
      local_4740 = (undefined1  [8])0x0;
      pvStack_4738 = (void *)0x0;
      local_4708.Allow.Value = false;
      local_4708.Allow.bIsSet = false;
      local_4720 = (undefined1  [8])0x0;
      pvStack_4718 = (void *)0x0;
      local_4708.Priority.Value = 0;
      local_4708.Allow.Getter._0_8_ = 0;
      local_4708.Allow.Getter._8_8_ = 0;
      local_4708.Priority.bIsSet = false;
      local_4708.Priority.Getter._0_8_ = 0;
      local_4708.Priority.Getter._8_8_ = 0;
      local_4708.Mode.Value = Preferred;
      local_4708.Mode.bIsSet = false;
      local_4708.Mode.Getter._0_8_ = 0;
      local_4708.Mode.Getter._8_8_ = 0;
      local_4708.VerticalOverflowBehavior.bIsSet = false;
      local_4708.ForceNewLine.bIsSet = false;
      local_4968 = 0x100;
      local_4960 = (undefined1  [8])0x0;
      FStack_4958.Data = (FScriptContainerElement *)0x0;
      local_4728[0] = false;
      local_4728[1] = true;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4720,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4960);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4960,
                 (FWriteAccessScope *)&local_4460);
      if (((int)local_4950 != 0) && (FStack_4958.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_4958.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4958,0,0,0x10);
        local_4950 = local_4950 & 0xffffffff00000000;
      }
      if (local_4460.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4460.Accessor,&local_4460);
      }
      if (FStack_4958.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_4958.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_4960);
      local_4988 = 0xffffff9c;
      local_4970 = 0;
      local_4984 = 1;
      local_4980 = (undefined1  [8])0x0;
      FStack_4978.Data = (FScriptContainerElement *)0x0;
      local_4768._0_4_ = -100;
      local_4768[4] = true;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4760,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4980);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4980,
                 (FWriteAccessScope *)&local_4568);
      if (((int)local_4970 != 0) && (FStack_4978.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_4978.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4978,0,0,0x10);
        local_4970 = local_4970 & 0xffffffff00000000;
      }
      if (local_4568.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4568.Accessor,&local_4568);
      }
      if (FStack_4978.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_4978.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_4980);
      FVar32 = param_3->StyleNameOverride;
      if (FVar32 == (FName)0x0) {
        FVar32 = param_2->StyleName;
      }
      if (param_2->StyleSetName == (FName)0x0) {
        pIVar21 = FAppStyle::Get();
      }
      else {
        pIVar21 = FSlateStyleRegistry::FindSlateStyle(&param_2->StyleSetName);
        if (pIVar21 == (ISlateStyle *)0x0) {
          local_46a0 = param_2;
          `UToolMenu::GetStyleSet'::__l5::<lambda_1>::operator()(&local_46a0);
        }
      }
      pFVar22 = (FToolBarStyle *)
                (**(code **)((longlong)*pIVar21 + 0xa0))(pIVar21,FToolBarStyle::TypeName,FVar32,0,1)
      ;
      if (pFVar22 == (FToolBarStyle *)0x0) {
        pFVar22 = FToolBarStyle::GetDefault();
      }
      FToolBarStyle::FToolBarStyle(&local_3f48,pFVar22);
      FMenuEntryResizeParams::FMenuEntryResizeParams
                ((FMenuEntryResizeParams *)local_4260,(FMenuEntryResizeParams *)local_4768);
      local_4260[200] = true;
      local_4378.Value.Value.Value =
           (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)local_48c0._0_1_;
      local_4378.bIsSet = (bool)local_48c0._1_1_;
      local_4190 = (undefined1  [8])0x0;
      pvStack_4188 = (void *)0x0;
      local_4180 = 0;
      TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
                (&local_4378.Getter,
                 (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_48b8);
      local_4590._0_8_ = 0;
      local_4590._8_8_ = 0;
      local_4590._16_4_ = 0;
      TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                (&local_4590,
                 (TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)local_49b0);
      pFVar23 = SSpacer::FArguments::FArguments((FArguments *)local_4178);
      local_45b0 = 1;
      local_45a8 = (undefined1  [8])0x0;
      pvStack_45a0 = (void *)0x0;
      local_4598 = 0;
      local_45c0 = (double)local_3f48.RaisedChildrenRightPadding;
      uStack_45b8 = 0;
      (pFVar23->_Size).Value.field0_0x0._s_0.X = local_45c0;
      (pFVar23->_Size).Value.field0_0x0._s_0.Y = 0.0;
      (pFVar23->_Size).bIsSet = true;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar23->_Size).Getter,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_45a8);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_45a8);
      if (pvStack_45a0 != (void *)0x0) {
        FMemory::Free(pvStack_45a0);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_45a8);
      FLLMScope::FLLMScope
                ((FLLMScope *)local_49c8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,
                 true);
      local_4690 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_4698,&local_4690,true);
      TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>
                (&local_4410,"SSpacer",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolMenus\\Private\\ToolMenus.cpp"
                 ,0x753,local_4a18);
      FMemScope::~FMemScope(&local_4698);
      FLLMScope::~FLLMScope((FLLMScope *)local_49c8);
      pTVar24 = TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::operator<<=
                          (&local_4410,&local_43f8,pFVar23);
      local_4578.Object = (SWidget *)pTVar24->Object;
      local_4578.SharedReferenceCount.ReferenceController =
           (pTVar24->SharedReferenceCount).ReferenceController;
      if (local_4578.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_4578.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_4578.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FToolBarBuilder::AddWidget
                (param_1,&local_4578,(FMenuEntryStyleParams *)local_4880,local_48c8,false,
                 &local_4590,&local_4378,(TAttribute<FMenuEntryResizeParams> *)local_4260);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_43f8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4410._Widget.SharedReferenceCount.ReferenceController);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3f68);
      if ((void *)local_3f68._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_3f68._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_3f68);
      FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_4178);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4190);
      if (pvStack_4188 != (void *)0x0) {
        FMemory::Free(pvStack_4188);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_4190);
      FMenuEntryResizeParams::~FMenuEntryResizeParams((FMenuEntryResizeParams *)local_4260);
      FToolBarStyle::~FToolBarStyle(&local_3f48);
      FMenuEntryResizeParams::FWrappingParams::~FWrappingParams(&local_4708);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4720);
      if (pvStack_4718 != (void *)0x0) {
        FMemory::Free(pvStack_4718);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_4720);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4740);
      if (pvStack_4738 != (void *)0x0) {
        FMemory::Free(pvStack_4738);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_4740);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4760);
      if (pvStack_4758 != (void *)0x0) {
        FMemory::Free(pvStack_4758);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_4760);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_48b8);
      if ((ForElementType<TAlignedBytes<16,16>_>)pvStack_48b0 !=
          (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free(pvStack_48b0);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_48b8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_49b0,
                 (FWriteAccessScope *)&local_4550);
      if ((local_49a0 != 0) && (local_49a8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_49a8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_49a8,0,0,0x10);
        local_49a0 = 0;
      }
      if (local_4550.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4550.Accessor,&local_4550);
      }
      if (local_49a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_49a8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_49b0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_47d0,(FWriteAccessScope *)&local_4538);
      if (((int)local_47c0 != 0) && (FStack_47c8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_47c8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_47c8,0,0,0x10);
        local_47c0 = local_47c0 & 0xffffffff00000000;
      }
      if (local_4538.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4538.Accessor,&local_4538);
      }
      if (FStack_47c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_47c8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_47d0.AccessDetector);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_47f0,(FWriteAccessScope *)&local_4520);
      if (((int)local_47e0 != 0) && (FStack_47e8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_47e8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_47e8,0,0,0x10);
        local_47e0 = local_47e0 & 0xffffffff00000000;
      }
      if (local_4520.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4520.Accessor,&local_4520);
      }
      if (FStack_47e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_47e8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_47f0.AccessDetector);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_4810,(FWriteAccessScope *)&local_4508);
      if (((int)local_4800 != 0) && (FStack_4808.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_4808.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4808,0,0,0x10);
        local_4800 = local_4800 & 0xffffffff00000000;
      }
      if (local_4508.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4508.Accessor,&local_4508);
      }
      if (FStack_4808.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_4808.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_4810.AccessDetector);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_4830,(FWriteAccessScope *)&local_44f0);
      if (((int)local_4820 != 0) && (FStack_4828.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_4828.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_4828,0,0,0x10);
        local_4820 = local_4820 & 0xffffffff00000000;
      }
      if (local_44f0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_44f0.Accessor,&local_44f0);
      }
      if (FStack_4828.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_4828.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_4830.AccessDetector);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_49b8.ReferenceController);
    DestructItems<TAttribute<EVisibility>,int>
              ((TAttribute<EVisibility> *)local_49e8.AllocatorInstance.Data,local_49e8.ArrayNum);
    if ((TAttribute<EVisibility> *)local_49e8.AllocatorInstance.Data !=
        (TAttribute<EVisibility> *)0x0) {
      FMemory::Free(local_49e8.AllocatorInstance.Data);
    }
    DestructItems<TAttribute<EVisibility>,int>
              ((TAttribute<EVisibility> *)local_4a28.Data,(int)local_4a20);
    if ((TAttribute<EVisibility> *)local_4a28.Data != (TAttribute<EVisibility> *)0x0) {
      FMemory::Free(local_4a28.Data);
    }
  }
  if (local_4a38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a38.Data);
  }
  if (local_49d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_49d8.AllocatorInstance.Data);
  }
  return;
}

// PrivateStartupCallback @ 142c6c870

void __cdecl UToolMenus::PrivateStartupCallback(void)

{
  if ((InternalStartupCallbackHandle.bIsSet) && (InternalStartupCallbackHandle.TypedValue.ID != 0))
  {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnPostEngineInit,InternalStartupCallbackHandle.TypedValue);
    InternalStartupCallbackHandle.TypedValue.ID = 0;
  }
  return;
}

// PushOwner @ 142c6c8b0

void __thiscall UToolMenus::PushOwner(UToolMenus *this,FToolMenuOwner *param_1)

{
  int *piVar1;
  TArray<FToolMenuOwner,TSizedDefaultAllocator<32>_> *pTVar2;
  FToolMenuOwner_u_0 *pFVar3;
  FToolMenuOwner *pFVar4;
  code *pcVar5;
  FToolMenuOwner_u_0 FVar6;
  FToolMenuOwner_u_0 FVar7;
  bool bVar8;
  int iVar9;
  
  pTVar2 = &this->OwnerStack;
  pFVar4 = (FToolMenuOwner *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar4 <= param_1) && (param_1 < pFVar4 + (this->OwnerStack).ArrayMax)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar9 = (this->OwnerStack).ArrayNum;
  piVar1 = &(this->OwnerStack).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  FVar6 = param_1->field0_0x0;
  FVar7 = *(FToolMenuOwner_u_0 *)&param_1->ValueType;
  (this->OwnerStack).ArrayNum = iVar9 + 1;
  pFVar3 = (FToolMenuOwner_u_0 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x10);
  *pFVar3 = FVar6;
  pFVar3[1] = FVar7;
  return;
}

// RefreshAllWidgets @ 142c6c970

void __thiscall UToolMenus::RefreshAllWidgets(UToolMenus *this)

{
  if (this->bSuppressRefreshWidgetsRequests == false) {
    this->bRefreshWidgetsNextTick = true;
    SetNextTickTimer(this);
    return;
  }
  return;
}

// RefreshMenuWidget @ 142c6c990

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

bool __thiscall
UToolMenus::RefreshMenuWidget(UToolMenus *this,FName param_1,FGeneratedToolMenuWidget *param_2)

{
  EMultiBoxType EVar1;
  bool bVar2;
  UToolMenu *pUVar3;
  FName FVar4;
  code *pcVar5;
  atomic<int> aVar6;
  undefined1 uVar7;
  atomic<int> aVar8;
  UObject *pUVar9;
  TArray<UToolMenu_*,TSizedDefaultAllocator<32>_> *pTVar10;
  TObjectPtr<UToolMenu>_u_0 TVar11;
  ISlateStyle *pIVar12;
  ISlateStyle *pIVar13;
  TSharedRef<FExtender,1> *pTVar14;
  TSharedRef<FMultiBox,1> *pTVar15;
  TSharedPtr<FExtender,1> *pTVar16;
  TReferenceControllerBase<1> *pTVar17;
  SMultiBoxWidget *this_00;
  bool bVar18;
  TObjectPtr<UToolMenu>_u_0 local_438;
  TSharedPtr<FExtender,1> local_430;
  TSharedPtr<FUICommandList_const_,1> local_420;
  TSharedPtr<FUICommandList_const_,1> local_410;
  TSharedPtr<FUICommandList_const_,1> local_400;
  undefined1 local_3e8 [24];
  ForAnyElementType local_3d0;
  int local_3c8;
  ForAnyElementType local_3c0;
  int local_3b8;
  bool local_398;
  TArray<UToolMenu_*,TSizedDefaultAllocator<32>_> local_388;
  TSharedRef<FExtender,1> local_378;
  TSharedRef<FMultiBox,1> local_368;
  TSharedPtr<FExtender,1> local_358;
  TSharedRef<FMultiBox,1> local_348;
  TSharedPtr<FExtender,1> local_338;
  TSharedRef<FMultiBox,1> local_328;
  undefined1 local_318 [344];
  undefined1 local_1c0 [392];
  
  if ((((param_2->Widget).Object == (SWidget *)0x0) ||
      (pTVar17 = (param_2->Widget).WeakReferenceCount.ReferenceController,
      pTVar17 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar17->SharedReferenceCount < 1)) {
    return false;
  }
  ((param_2->GeneratedMenu).field0_0x0.DebugPtr)->bShouldCleanupContextOnDestroy = false;
  pUVar9 = FWeakObjectPtr::Get(&(param_2->OriginalMenu).WeakPtr);
  if (pUVar9 != (UObject *)0x0) {
    pUVar9[1].field_0x21 = 0;
  }
  pUVar3 = (param_2->GeneratedMenu).field0_0x0.DebugPtr;
  pTVar10 = CollectHierarchy(this,&local_388,param_1);
  TVar11.DebugPtr = GenerateMenuFromHierarchy(this,pTVar10,&pUVar3->Context);
  if (local_388.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_388.AllocatorInstance.Data);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar11.DebugPtr != (UToolMenu *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)TVar11.DebugPtr);
  }
  (param_2->GeneratedMenu).field0_0x0.DebugPtr = (UToolMenu *)TVar11;
  if ((TVar11.DebugPtr)->StyleSetName == (FName)0x0) {
    pIVar12 = FAppStyle::Get();
  }
  else {
    pIVar12 = FSlateStyleRegistry::FindSlateStyle(&(TVar11.DebugPtr)->StyleSetName);
    if (pIVar12 == (ISlateStyle *)0x0) {
      local_438.DebugPtr = TVar11.DebugPtr;
      `UToolMenu::GetStyleSet'::__l5::<lambda_1>::operator()(&local_438);
    }
  }
  pIVar13 = pIVar12;
  if (pIVar12 == (ISlateStyle *)0x0) {
    pIVar13 = FAppStyle::Get();
  }
  pTVar17 = (param_2->Widget).WeakReferenceCount.ReferenceController;
  this_00 = (SMultiBoxWidget *)0x0;
  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
    aVar6 = pTVar17->SharedReferenceCount;
    do {
      if (aVar6 == (atomic<int>)0x0) {
        pTVar17 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142c6cab4;
      }
      LOCK();
      aVar8 = pTVar17->SharedReferenceCount;
      bVar18 = aVar6 == aVar8;
      if (bVar18) {
        pTVar17->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
        aVar8 = aVar6;
      }
      UNLOCK();
      aVar6 = aVar8;
    } while (!bVar18);
    this_00 = (SMultiBoxWidget *)(param_2->Widget).Object;
    if (this_00 != (SMultiBoxWidget *)0x0) goto LAB_142c6cb05;
  }
LAB_142c6cab4:
  bVar18 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x416,L"");
  if (bVar18) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  bVar18 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x26c,L"");
  if (bVar18) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
LAB_142c6cb05:
  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  EVar1 = (TVar11.DebugPtr)->MenuType;
  if (EVar1 == Menu) {
    bVar18 = (TVar11.DebugPtr)->bSearchable;
    bVar2 = (TVar11.DebugPtr)->bCloseSelfOnly;
    pTVar14 = FExtender::Combine(&local_378,&((TVar11.DebugPtr)->Context).Extenders);
    local_430.Object = pTVar14->Object;
    local_430.SharedReferenceCount.ReferenceController =
         (pTVar14->SharedReferenceCount).ReferenceController;
    if (local_430.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_430.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_430.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_378.SharedReferenceCount.ReferenceController);
    local_420.Object = ((TVar11.DebugPtr)->Context).CommandList.Object;
    local_420.SharedReferenceCount.ReferenceController =
         ((TVar11.DebugPtr)->Context).CommandList.SharedReferenceCount.ReferenceController;
    if (local_420.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_420.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_420.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FMenuBuilder::FMenuBuilder
              ((FMenuBuilder *)local_1c0,(TVar11.DebugPtr)->bShouldCloseWindowAfterMenuSelection,
               &local_420,&local_430,bVar2,pIVar13,bVar18,(FName)0x0,true);
    local_1c0[0x50] = (TVar11.DebugPtr)->bExtendersEnabled;
    if ((pIVar12 != (ISlateStyle *)0x0) && ((TVar11.DebugPtr)->StyleName != (FName)0x0)) {
      FMultiBoxBuilder::SetStyle
                ((FMultiBoxBuilder *)local_1c0,pIVar13,&(TVar11.DebugPtr)->StyleName);
    }
    PopulateMenuBuilder(this,(FMenuBuilder *)local_1c0,TVar11.DebugPtr);
    pTVar15 = FMultiBoxBuilder::GetMultiBox((FMultiBoxBuilder *)local_1c0,&local_368);
    SMultiBoxWidget::SetMultiBox(this_00,pTVar15);
    FMenuBuilder::~FMenuBuilder((FMenuBuilder *)local_1c0);
  }
  else if (EVar1 == MenuBar) {
    pTVar16 = FToolMenuContext::GetAllExtenders(&(TVar11.DebugPtr)->Context,&local_358);
    local_410.Object = ((TVar11.DebugPtr)->Context).CommandList.Object;
    local_410.SharedReferenceCount.ReferenceController =
         ((TVar11.DebugPtr)->Context).CommandList.SharedReferenceCount.ReferenceController;
    if (local_410.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_410.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_410.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FMenuBarBuilder::FMenuBarBuilder
              ((FMenuBarBuilder *)local_3e8,&local_410,pTVar16,pIVar13,(FName)0x0);
    local_398 = (TVar11.DebugPtr)->bExtendersEnabled;
    if ((pIVar12 != (ISlateStyle *)0x0) && ((TVar11.DebugPtr)->StyleName != (FName)0x0)) {
      FMultiBoxBuilder::SetStyle
                ((FMultiBoxBuilder *)local_3e8,pIVar13,&(TVar11.DebugPtr)->StyleName);
    }
    PopulateMenuBarBuilder(this,(FMenuBarBuilder *)local_3e8,TVar11.DebugPtr);
    pTVar15 = FMultiBoxBuilder::GetMultiBox((FMultiBoxBuilder *)local_3e8,&local_348);
    SMultiBoxWidget::SetMultiBox(this_00,pTVar15);
    local_3e8._0_8_ = &___7FMultiBoxBuilder__6B_;
    DestructItems<TSharedPtr<FExtender,1>,int>((TSharedPtr<FExtender,1> *)local_3c0.Data,local_3b8);
    if ((TSharedPtr<FExtender,1> *)local_3c0.Data != (TSharedPtr<FExtender,1> *)0x0) {
      FMemory::Free(local_3c0.Data);
    }
    DestructItems<TSharedPtr<FUICommandList_const_,1>,int>
              ((TSharedPtr<FUICommandList_const_,1> *)local_3d0.Data,local_3c8);
    if ((TSharedPtr<FUICommandList_const_,1> *)local_3d0.Data !=
        (TSharedPtr<FUICommandList_const_,1> *)0x0) {
      FMemory::Free(local_3d0.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_3e8._16_8_);
  }
  else if (((byte)(EVar1 - ToolBar) < 4) || ((byte)(EVar1 - SlimHorizontalUniformToolBar) < 2)) {
    bVar18 = (TVar11.DebugPtr)->bToolBarForceSmallIcons;
    pTVar16 = FToolMenuContext::GetAllExtenders(&(TVar11.DebugPtr)->Context,&local_338);
    local_400.Object = ((TVar11.DebugPtr)->Context).CommandList.Object;
    FVar4 = (TVar11.DebugPtr)->MenuName;
    local_400.SharedReferenceCount.ReferenceController =
         ((TVar11.DebugPtr)->Context).CommandList.SharedReferenceCount.ReferenceController;
    if (local_400.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_400.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_400.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FToolBarBuilder::FToolBarBuilder
              ((FToolBarBuilder *)local_318,(TVar11.DebugPtr)->MenuType,&local_400,
               (FMultiBoxCustomization)FVar4,pTVar16,bVar18);
    local_318[0x50] = (TVar11.DebugPtr)->bExtendersEnabled;
    FToolBarBuilder::SetIsFocusable
              ((FToolBarBuilder *)local_318,(TVar11.DebugPtr)->bToolBarIsFocusable);
    FToolBarBuilder::SetAllowWrapButton
              ((FToolBarBuilder *)local_318,&(TVar11.DebugPtr)->bAllowToolBarWrapButton);
    if ((pIVar12 != (ISlateStyle *)0x0) && ((TVar11.DebugPtr)->StyleName != (FName)0x0)) {
      FMultiBoxBuilder::SetStyle
                ((FMultiBoxBuilder *)local_318,pIVar13,&(TVar11.DebugPtr)->StyleName);
    }
    PopulateToolBarBuilder(this,(FToolBarBuilder *)local_318,TVar11.DebugPtr);
    pTVar15 = FMultiBoxBuilder::GetMultiBox((FMultiBoxBuilder *)local_318,&local_328);
    SMultiBoxWidget::SetMultiBox(this_00,pTVar15);
    FToolBarBuilder::~FToolBarBuilder((FToolBarBuilder *)local_318);
  }
  SMultiBoxWidget::BuildMultiBoxWidget(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  return true;
}

// RefreshMenuWidget @ 142c6ce70

bool __thiscall UToolMenus::RefreshMenuWidget(UToolMenus *this,FName param_1)

{
  uint uVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_> *pTVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  TReferenceControllerBase<1> *pTVar12;
  int iVar13;
  int iVar14;
  TSharedPtr<FGeneratedToolMenuWidget,1> *pTVar15;
  longlong lVar16;
  int iVar17;
  ForAnyElementType FVar18;
  bool local_res18;
  undefined1 local_res20 [8];
  ForAnyElementType local_58;
  uint local_50;
  int local_4c [3];
  
  local_res18 = false;
  pTVar7 = TSet<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>,FDefaultSetAllocator>
                   *)&this->GeneratedMenuWidgets,param_1);
  bVar5 = false;
  if (pTVar7 == (TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_> *)0x0) {
    pTVar12 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar12 = *(TReferenceControllerBase<1> **)&pTVar7->field_0x10;
    puVar2 = *(ulonglong **)&pTVar7->field_0x8;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (puVar2 != (ulonglong *)0x0) {
      local_58.Data = (FScriptContainerElement *)0x0;
      uVar1 = (uint)puVar2[1];
      pTVar15 = (TSharedPtr<FGeneratedToolMenuWidget,1> *)*puVar2;
      local_50 = uVar1;
      if (uVar1 == 0) {
        local_4c[0] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,uVar1,0,&local_58,uVar1,local_4c);
        ConstructItems<TSharedPtr<FGeneratedToolMenuWidget,1>,TSharedPtr<FGeneratedToolMenuWidget,1>,int>
                  (local_58.Data,pTVar15,uVar1);
      }
      uVar1 = local_50;
      uVar8 = (ulonglong)(int)local_50;
      pTVar15 = (TSharedPtr<FGeneratedToolMenuWidget,1> *)(local_58.Data + uVar8 * 0x10);
      FVar18.Data = local_58.Data;
      while( true ) {
        if (local_50 != (uint)uVar8) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<TSharedPtr<FGeneratedToolMenuWidget,1>,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_res20);
        }
        if ((TSharedPtr<FGeneratedToolMenuWidget,1> *)FVar18.Data == pTVar15) break;
        if ((((TSharedPtr<FGeneratedToolMenuWidget,1> *)FVar18.Data)->Object ==
             (FGeneratedToolMenuWidget *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        bVar5 = RefreshMenuWidget(this,param_1,
                                  ((TSharedPtr<FGeneratedToolMenuWidget,1> *)FVar18.Data)->Object);
        if (bVar5) {
          uVar8 = (ulonglong)uVar1;
          FVar18.Data = FVar18.Data + 0x10;
          local_res18 = true;
        }
        else {
          if ((((TSharedPtr<FGeneratedToolMenuWidget,1> *)*puVar2 <= FVar18.Data) &&
              (FVar18.Data <
               (TSharedPtr<FGeneratedToolMenuWidget,1> *)*puVar2 + *(int *)((longlong)puVar2 + 0xc))
              ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          lVar10 = (longlong)(int)puVar2[1];
          if ((int)puVar2[1] != 0) {
            plVar3 = (longlong *)*puVar2;
            iVar17 = 0;
            lVar16 = 0;
            bVar5 = (FGeneratedToolMenuWidget *)*plVar3 !=
                    ((TSharedPtr<FGeneratedToolMenuWidget,1> *)FVar18.Data)->Object;
            iVar13 = 0;
            do {
              lVar16 = lVar16 + 1;
              iVar14 = iVar13 + 1;
              if (lVar16 < lVar10) {
                plVar9 = plVar3 + lVar16 * 2;
                do {
                  if (bVar5 != ((FGeneratedToolMenuWidget *)*plVar9 !=
                               ((TSharedPtr<FGeneratedToolMenuWidget,1> *)FVar18.Data)->Object))
                  break;
                  iVar14 = iVar14 + 1;
                  lVar16 = lVar16 + 1;
                  plVar9 = plVar9 + 2;
                } while (lVar16 < lVar10);
              }
              iVar11 = iVar14 - iVar13;
              if (bVar5 == false) {
                DestructItems<TSharedPtr<FGeneratedToolMenuWidget,1>,int>
                          ((TSharedPtr<FGeneratedToolMenuWidget,1> *)(plVar3 + (longlong)iVar13 * 2)
                           ,iVar11);
              }
              else {
                if (iVar17 != iVar13) {
                  memmove(plVar3 + (longlong)iVar17 * 2,plVar3 + (longlong)iVar13 * 2,
                          (longlong)iVar11 << 4);
                }
                iVar17 = iVar17 + iVar11;
              }
              bVar5 = (bool)(bVar5 ^ 1);
              iVar13 = iVar14;
            } while (lVar16 < lVar10);
            *(int *)(puVar2 + 1) = iVar17;
          }
          uVar8 = (ulonglong)uVar1;
          FVar18.Data = FVar18.Data + 0x10;
        }
      }
      DestructItems<TSharedPtr<FGeneratedToolMenuWidget,1>,int>
                ((TSharedPtr<FGeneratedToolMenuWidget,1> *)local_58.Data,local_50);
      bVar5 = local_res18;
      if ((TSharedPtr<FGeneratedToolMenuWidget,1> *)local_58.Data !=
          (TSharedPtr<FGeneratedToolMenuWidget,1> *)0x0) {
        FMemory::Free(local_58.Data);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return bVar5;
}

// RegisterMenu @ 142c6d1a0

/* WARNING: Enum "Type": Some values do not have unique names */

UToolMenu * __thiscall
UToolMenus::RegisterMenu
          (UToolMenus *this,FName param_1,FName param_2,EMultiBoxType param_3,bool param_4)

{
  int iVar1;
  UToolMenu *pUVar2;
  FToolMenuOwner_u_0 FVar3;
  EValueType EVar4;
  undefined7 uVar5;
  TObjectPtr<UToolMenu> *pTVar6;
  FToolMenuOwner *pFVar7;
  FName *pFVar8;
  TObjectPtr<UToolMenu>_u_0 TVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  TPairInitializer<FName_const_&,TObjectPtr<UToolMenu>_&&> local_res8;
  TObjectPtr<UToolMenu>_u_0 local_48;
  FToolMenuOwner_u_0 local_40;
  TObjectPtr<UToolMenu>_u_0 *local_38;
  
  local_res8.Value = (TObjectPtr<UToolMenu> *)param_1;
  pTVar6 = TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
           ::Find((TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
                   *)&this->Menus,param_1);
  if (pTVar6 != (TObjectPtr<UToolMenu> *)0x0) {
    pUVar2 = (pTVar6->field0_0x0).DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar2 == (UToolMenu *)0x0) goto LAB_142c6d2df;
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    if (pUVar2 != (UToolMenu *)0x0) {
      if (pUVar2->bRegistered == false) {
        pUVar2->MenuParent = param_2;
        pUVar2->MenuType = param_3;
        pFVar7 = CurrentOwner(this,(FToolMenuOwner *)&local_40.ValueName);
        FVar3 = pFVar7->field0_0x0;
        EVar4 = pFVar7->ValueType;
        uVar5 = *(undefined7 *)&pFVar7->field_0x9;
        pUVar2->bRegistered = true;
        pUVar2->bIsRegistering = true;
        (pUVar2->MenuOwner).field0_0x0 = FVar3;
        (pUVar2->MenuOwner).ValueType = EVar4;
        *(undefined7 *)&(pUVar2->MenuOwner).field_0x9 = uVar5;
        iVar1 = (pUVar2->Sections).ArrayNum;
        pFVar11 = (pUVar2->Sections).AllocatorInstance.Data;
        pFVar10 = pFVar11 + (longlong)iVar1 * 0x238;
        while( true ) {
          if ((pUVar2->Sections).ArrayNum != iVar1) {
            `TCheckedPointerIterator<FToolMenuSection,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_res8);
          }
          if (pFVar11 == pFVar10) break;
          pFVar11[0x230] = (FScriptContainerElement)pUVar2->bIsRegistering;
          pFVar11 = pFVar11 + 0x238;
        }
        return pUVar2;
      }
      if (!param_4) {
        return pUVar2;
      }
      if ((byte)LogToolMenus._0_1_ < 3) {
        return pUVar2;
      }
      ::FName::ToString((FName *)&local_res8.Value,(FString *)&local_40.ValueName);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogToolMenus);
      if ((void *)local_40.ValueInt64 == (void *)0x0) {
        return pUVar2;
      }
      FMemory::Free((void *)local_40);
      return pUVar2;
    }
  }
LAB_142c6d2df:
  pTVar6 = local_res8.Value;
  pFVar8 = ::FName::FName((FName *)&local_res8,L"RegisteredMenu");
  TVar9.DebugPtr = NewToolMenuObject(this,*pFVar8,(FName)pTVar6);
  pTVar6 = local_res8.Value;
  pFVar7 = CurrentOwner(this,(FToolMenuOwner *)&local_40.ValueName);
  FVar3 = pFVar7->field0_0x0;
  EVar4 = pFVar7->ValueType;
  uVar5 = *(undefined7 *)&pFVar7->field_0x9;
  (TVar9.DebugPtr)->MenuName = (FName)pTVar6;
  (TVar9.DebugPtr)->MenuParent = param_2;
  ((TVar9.DebugPtr)->MenuOwner).field0_0x0 = FVar3;
  ((FToolMenuOwner *)((longlong)TVar9 + 0x58))->ValueType = EVar4;
  *(undefined7 *)&((FToolMenuOwner *)((longlong)TVar9 + 0x58))->field_0x9 = uVar5;
  (TVar9.DebugPtr)->MenuType = param_3;
  *(bool *)((longlong)TVar9 + 0x108) = true;
  *(bool *)((longlong)TVar9 + 0x109) = true;
  local_48.DebugPtr = TVar9.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)TVar9.DebugPtr);
  }
  local_40.ValueInt64 = (long64)&local_res8.Value;
  local_38 = &local_48;
  TSet<TTuple<FName,TObjectPtr<UToolMenu>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,TObjectPtr<UToolMenu>_&&>_>
            ((TSet<TTuple<FName,TObjectPtr<UToolMenu>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>,FDefaultSetAllocator>
              *)&this->Menus,&local_res8,(bool *)&local_40);
  return TVar9.DebugPtr;
}

// RegisterStartupCallback @ 142c6d3c0

FDelegateHandle __cdecl
UToolMenus::RegisterStartupCallback
          (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  ulong64 *puVar4;
  ulong64 uVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &StartupCallbacks,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&stack0x00000018);
  if (InternalStartupCallbackHandle.bIsSet != false) goto LAB_142c6d633;
  uVar5 = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar2[3] = PrivateStartupCallback;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FCoreDelegates::OnPostEngineInit,(FWriteAccessScope *)&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if ((local_60.DelegateSize == 0) ||
     (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
LAB_142c6d593:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))();
    if (cVar1 == '\0') goto LAB_142c6d593;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnPostEngineInit,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar4 = (ulong64 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res20);
      uVar5 = *puVar4;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    if (FCoreDelegates::OnPostEngineInit._16_4_ == FCoreDelegates::OnPostEngineInit._20_4_) {
      FCoreDelegates::OnPostEngineInit._16_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,(ForAnyElementType *)&FCoreDelegates::OnPostEngineInit.field_0x8,
                      (int *)&FCoreDelegates::OnPostEngineInit.field_0x14);
    }
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             ((longlong)(int)FCoreDelegates::OnPostEngineInit._16_4_ * 0x10 +
             FCoreDelegates::OnPostEngineInit._8_8_);
    FCoreDelegates::OnPostEngineInit._16_4_ = FCoreDelegates::OnPostEngineInit._16_4_ + 1;
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  InternalStartupCallbackHandle.bIsSet = true;
  InternalStartupCallbackHandle.TypedValue.ID = uVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
LAB_142c6d633:
  *(undefined8 *)param_1 = local_res18;
  return (FDelegateHandle)(ulong64)param_1;
}

// RegisterStringCommandHandler @ 142c6d650

void __thiscall
UToolMenus::RegisterStringCommandHandler
          (UToolMenus *this,FName param_1,
          TDelegate<void___cdecl(FString_const_&,FToolMenuContext_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  TPairInitializer<FName_const_&,TDelegate<void___cdecl(FString_const_&,FToolMenuContext_const_&),FDefaultDelegateUserPolicy>_const_&>
  local_res8 [2];
  TDelegate<void___cdecl(FString_const_&,FToolMenuContext_const_&),FDefaultDelegateUserPolicy>
  **local_18;
  TDelegate<void___cdecl(FString_const_&,FToolMenuContext_const_&),FDefaultDelegateUserPolicy>
  *local_10;
  
  local_18 = &local_res8[0].Value;
  local_res8[0].Value =
       (TDelegate<void___cdecl(FString_const_&,FToolMenuContext_const_&),FDefaultDelegateUserPolicy>
        *)param_1;
  local_10 = param_2;
  TSet<TTuple<FName,TDelegate<void___cdecl(FString_const_&,FToolMenuContext_const_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FName,TDelegate<void___cdecl(FString_const_&,FToolMenuContext_const_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FName_const_&,TDelegate<void___cdecl(FString_const_&,FToolMenuContext_const_&),FDefaultDelegateUserPolicy>_const_&>_>
            ((TSet<TTuple<FName,TDelegate<void___cdecl(FString_const_&,FToolMenuContext_const_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FName,TDelegate<void___cdecl(FString_const_&,FToolMenuContext_const_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
              *)&this->StringCommandHandlers,local_res8,(bool *)&local_18);
  return;
}

// RemoveAllCustomizations @ 142c6e640

void __thiscall UToolMenus::RemoveAllCustomizations(UToolMenus *this)

{
  int *piVar1;
  int iVar2;
  FCustomizedToolMenu *pFVar3;
  
  piVar1 = &(this->CustomizedMenus).ArrayMax;
  pFVar3 = (FCustomizedToolMenu *)(this->CustomizedMenus).AllocatorInstance.Data;
  iVar2 = (this->CustomizedMenus).ArrayNum;
  if (-1 < (this->CustomizedMenus).ArrayMax) {
    DestructItems<FCustomizedToolMenu,int>(pFVar3,iVar2);
    (this->CustomizedMenus).ArrayNum = 0;
    return;
  }
  DestructItems<FCustomizedToolMenu,int>(pFVar3,iVar2);
  (this->CustomizedMenus).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x208,8,0,&(this->CustomizedMenus).AllocatorInstance,0,piVar1);
  }
  return;
}

// RemoveCustomization @ 142c6e9f0

void __thiscall UToolMenus::RemoveCustomization(UToolMenus *this,FName param_1)

{
  int *piVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FToolMenuProfile *this_00;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  
  uVar8 = 0;
  if (0 < (this->CustomizedMenus).ArrayNum) {
    lVar7 = 0;
    do {
      uVar9 = ~uVar8 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar8 < (this->CustomizedMenus).ArrayNum) {
        uVar5 = uVar9;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(FName *)((this->CustomizedMenus).AllocatorInstance.Data + lVar7) == param_1) {
        if (uVar8 == 0xffffffff) {
          return;
        }
        uVar5 = 0;
        if ((int)uVar8 < (this->CustomizedMenus).ArrayNum) {
          uVar5 = uVar9;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_00 = (FToolMenuProfile *)
                  ((this->CustomizedMenus).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x208);
        pvVar2 = *(void **)&this_00[1].Entries.field_0x48;
        if (pvVar2 != (void *)0x0) {
          FMemory::Free(pvVar2);
        }
        *(undefined4 *)&this_00[1].Entries.field_0x40 = 0;
        pvVar2 = *(void **)&this_00[1].Entries.field_0x38;
        if (pvVar2 != (void *)0x0) {
          FMemory::Free(pvVar2);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuNameArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuNameArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FName,FCustomizedToolMenuNameArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(this_00 + 1));
        FToolMenuProfile::~FToolMenuProfile(this_00);
        iVar6 = (this->CustomizedMenus).ArrayNum + ~uVar8;
        if (iVar6 != 0) {
          memmove(this_00,&this_00[1].Sections.field_0x8,(longlong)iVar6 * 0x208);
        }
        piVar1 = &(this->CustomizedMenus).ArrayNum;
        *piVar1 = *piVar1 + -1;
        return;
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x208;
    } while ((int)uVar8 < (this->CustomizedMenus).ArrayNum);
  }
  return;
}

// RemoveEntry @ 142c6ee90

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall UToolMenus::RemoveEntry(UToolMenus *this,FName param_1,FName param_2,FName param_3)

{
  TObjectPtr<UToolMenu> this_00;
  FName *pFVar1;
  TObjectPtr<UToolMenu>_u_0 *pTVar2;
  FToolMenuSection *pFVar3;
  longlong lVar4;
  FName *pFVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  
  pTVar2 = &TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
            ::Find((TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
                    *)&this->Menus,param_1)->field0_0x0;
  if ((pTVar2 != (TObjectPtr<UToolMenu>_u_0 *)0x0) &&
     (this_00.field0_0x0 = (TObjectPtr<UToolMenu>_u_0)pTVar2->DebugPtr,
     this_00.field0_0x0 != (UToolMenu *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00.field0_0x0);
    }
    pFVar3 = UToolMenu::FindSection((UToolMenu *)this_00.field0_0x0,param_2);
    if ((pFVar3 != (FToolMenuSection *)0x0) &&
       (iVar7 = (pFVar3->Blocks).ArrayNum, lVar4 = (longlong)iVar7, iVar7 != 0)) {
      iVar10 = 0;
      pFVar1 = (FName *)(pFVar3->Blocks).AllocatorInstance.Data;
      bVar11 = *pFVar1 != param_3;
      lVar9 = 0;
      iVar7 = 0;
      do {
        lVar9 = lVar9 + 1;
        iVar8 = iVar7 + 1;
        if (lVar9 < lVar4) {
          pFVar5 = pFVar1 + lVar9 * 0xf0;
          do {
            if (bVar11 != (*pFVar5 != param_3)) break;
            iVar8 = iVar8 + 1;
            lVar9 = lVar9 + 1;
            pFVar5 = pFVar5 + 0xf0;
          } while (lVar9 < lVar4);
        }
        iVar6 = iVar8 - iVar7;
        if (bVar11 == false) {
          DestructItems<FToolMenuEntry,int>
                    ((FToolMenuEntry *)(pFVar1 + (longlong)iVar7 * 0xf0),iVar6);
        }
        else {
          if (iVar10 != iVar7) {
            memmove(pFVar1 + (longlong)iVar10 * 0xf0,pFVar1 + (longlong)iVar7 * 0xf0,
                    (longlong)iVar6 * 0x780);
          }
          iVar10 = iVar10 + iVar6;
        }
        bVar11 = (bool)(bVar11 ^ 1);
        iVar7 = iVar8;
      } while (lVar9 < lVar4);
      (pFVar3->Blocks).ArrayNum = iVar10;
    }
  }
  return;
}

// RemoveMenu @ 142c6f030

void __thiscall UToolMenus::RemoveMenu(UToolMenus *this,FName param_1)

{
  uint uVar1;
  FName local_res8;
  FName local_res10;
  
  if (*(int *)&(this->Menus).field_0x8 != *(int *)&(this->Menus).field_0x34) {
    local_res8 = param_1;
    local_res10 = param_1;
    uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    TSet<TTuple<FName,TObjectPtr<UToolMenu>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,TObjectPtr<UToolMenu>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>,FDefaultSetAllocator>
                         *)&this->Menus,local_res10.Number + uVar1,&local_res8);
  }
  return;
}

// RemoveMenuEntryObject @ 142c6f130

bool __cdecl UToolMenus::RemoveMenuEntryObject(UToolMenuEntryScript *param_1)

{
  FName FVar1;
  TObjectPtr<UToolMenu> this;
  FName *pFVar2;
  FModuleManager *this_00;
  TObjectPtr<UToolMenu>_u_0 *pTVar3;
  FName local_res8;
  
  if ((Singleton == (UToolMenus *)0x0) && (!bHasShutDown)) {
    pFVar2 = ::FName::FName(&local_res8,"ToolMenus");
    FVar1 = *pFVar2;
    this_00 = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this_00,FVar1);
    Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
  }
  pTVar3 = &TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
            ::Find((TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
                    *)&Singleton->Menus,(param_1->Data).Menu)->field0_0x0;
  if ((pTVar3 != (TObjectPtr<UToolMenu>_u_0 *)0x0) &&
     (this.field0_0x0 = (TObjectPtr<UToolMenu>_u_0)pTVar3->DebugPtr,
     this.field0_0x0 != (UToolMenu *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this.field0_0x0);
    }
    UToolMenu::RemoveMenuEntryObject((UToolMenu *)this.field0_0x0,param_1);
    return true;
  }
  return false;
}

// RemoveSection @ 142c6f300

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall UToolMenus::RemoveSection(UToolMenus *this,FName param_1,FName param_2)

{
  TObjectPtr<UToolMenu> TVar1;
  FName *pFVar2;
  TObjectPtr<UToolMenu>_u_0 *pTVar3;
  longlong lVar4;
  FName *pFVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  pTVar3 = &TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
            ::Find((TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
                    *)&this->Menus,param_1)->field0_0x0;
  if ((pTVar3 != (TObjectPtr<UToolMenu>_u_0 *)0x0) &&
     (TVar1.field0_0x0 = (TObjectPtr<UToolMenu>_u_0)pTVar3->DebugPtr,
     TVar1.field0_0x0 != (UToolMenu *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
    }
    lVar4 = (longlong)*(int *)((longlong)TVar1.field0_0x0 + 0xd8);
    if (*(int *)((longlong)TVar1.field0_0x0 + 0xd8) != 0) {
      pFVar2 = *(FName **)((longlong)TVar1.field0_0x0 + 0xd0);
      iVar9 = 0;
      bVar11 = *pFVar2 != param_2;
      lVar8 = 0;
      iVar6 = 0;
      do {
        lVar8 = lVar8 + 1;
        iVar7 = iVar6 + 1;
        if (lVar8 < lVar4) {
          pFVar5 = pFVar2 + lVar8 * 0x47;
          do {
            if (bVar11 != (*pFVar5 != param_2)) break;
            iVar7 = iVar7 + 1;
            lVar8 = lVar8 + 1;
            pFVar5 = pFVar5 + 0x47;
          } while (lVar8 < lVar4);
        }
        iVar10 = iVar7 - iVar6;
        if (bVar11 == false) {
          DestructItems<FToolMenuSection,int>
                    ((FToolMenuSection *)(pFVar2 + (longlong)iVar6 * 0x47),iVar10);
        }
        else {
          if (iVar9 != iVar6) {
            memmove(pFVar2 + (longlong)iVar9 * 0x47,pFVar2 + (longlong)iVar6 * 0x47,
                    (longlong)iVar10 * 0x238);
          }
          iVar9 = iVar9 + iVar10;
        }
        bVar11 = (bool)(bVar11 ^ 1);
        iVar6 = iVar7;
      } while (lVar8 < lVar4);
      *(int *)((longlong)TVar1.field0_0x0 + 0xd8) = iVar9;
    }
  }
  return;
}

// RemoveSubstitutionDuringGenerate @ 142c6f470

void __thiscall UToolMenus::RemoveSubstitutionDuringGenerate(UToolMenus *this,FName param_1)

{
  TMap<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>_>
  *this_00;
  FName FVar1;
  FGeneratedToolMenuWidgets *pFVar2;
  code *pcVar3;
  FGeneratedToolMenuWidgets *pFVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FName *pFVar8;
  TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_> *pTVar9;
  int iVar10;
  TReferenceControllerBase<1> *pTVar11;
  undefined1 *puVar12;
  FName local_res8;
  FName local_res10;
  TSharedPtr<FGeneratedToolMenuWidgets,1> local_48;
  
  local_res10 = param_1;
  pFVar8 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
           Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                 *)&this->MenuSubstitutionsDuringGenerate,param_1);
  if (pFVar8 == (FName *)0x0) {
    return;
  }
  FVar1 = *pFVar8;
  this_00 = &this->GeneratedMenuWidgets;
  pTVar9 = TSet<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>,FDefaultSetAllocator>
                   *)this_00,FVar1);
  if (pTVar9 == (TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_> *)0x0) {
    local_48.Object = (FGeneratedToolMenuWidgets *)0x0;
    local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    goto LAB_142c6f686;
  }
  local_48.Object = *(FGeneratedToolMenuWidgets **)&pTVar9->field_0x8;
  local_48.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&pTVar9->field_0x10;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_48.Object == (FGeneratedToolMenuWidgets *)0x0) goto LAB_142c6f686;
  pTVar9 = TSet<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>,FDefaultSetAllocator>
                   *)this_00,local_res10);
  if (pTVar9 == (TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_> *)0x0) {
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
LAB_142c6f5d6:
    TMapBase<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>_>
    ::Emplace<FName_const_&,TSharedPtr<FGeneratedToolMenuWidgets,1>_const_&>
              ((TMapBase<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>_>
                *)this_00,&local_res10,&local_48);
  }
  else {
    pTVar11 = *(TReferenceControllerBase<1> **)&pTVar9->field_0x10;
    pFVar2 = *(FGeneratedToolMenuWidgets **)&pTVar9->field_0x8;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar2 == (FGeneratedToolMenuWidgets *)0x0) goto LAB_142c6f5d6;
    if ((local_48.Object == (FGeneratedToolMenuWidgets *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar4 = local_48.Object;
    if ((pFVar2 == local_48.Object) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar10 = (pFVar4->Instances).ArrayNum;
    if (iVar10 != 0) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,iVar10,(ForAnyElementType *)pFVar2,&(pFVar2->Instances).ArrayNum,
                         &(pFVar2->Instances).ArrayMax);
      ConstructItems<TSharedPtr<FGeneratedToolMenuWidget,1>,TSharedPtr<FGeneratedToolMenuWidget,1>,int>
                ((pFVar2->Instances).AllocatorInstance.Data + (longlong)iVar6 * 0x10,
                 (TSharedPtr<FGeneratedToolMenuWidget,1> *)
                 (pFVar4->Instances).AllocatorInstance.Data,iVar10);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  if (*(int *)&(this->GeneratedMenuWidgets).field_0x8 !=
      *(int *)&(this->GeneratedMenuWidgets).field_0x34) {
    uVar7 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    puVar12 = *(undefined1 **)&(this->GeneratedMenuWidgets).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->GeneratedMenuWidgets).field_0x38;
    }
    iVar10 = *(int *)(puVar12 +
                     ((longlong)*(int *)&(this->GeneratedMenuWidgets).field_0x48 - 1U &
                     (longlong)(int)(FVar1.Number + uVar7)) * 4);
    if (iVar10 != -1) {
      do {
        if (*(FName *)((longlong)iVar10 * 0x20 + *(longlong *)&this_00->field_0x0) == FVar1) {
          TSet<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FGeneratedToolMenuWidgets,1>,0>,FDefaultSetAllocator>
                           *)this_00,iVar10);
          break;
        }
        iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + *(longlong *)&this_00->field_0x0);
      } while (iVar10 != -1);
    }
  }
LAB_142c6f686:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  FVar1 = local_res10;
  local_res8 = local_res10;
  if (*(int *)&(this->MenuSubstitutionsDuringGenerate).field_0x8 !=
      *(int *)&(this->MenuSubstitutionsDuringGenerate).field_0x34) {
    uVar7 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    RemoveImpl<FName>((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                       *)&this->MenuSubstitutionsDuringGenerate,FVar1.Number + uVar7,&local_res8);
  }
  this->bCleanupStaleWidgetsNextTick = true;
  SetNextTickTimer(this);
  return;
}

// SaveCustomizations @ 142c6f9e0

void __thiscall UToolMenus::SaveCustomizations(UToolMenus *this)

{
  UObject::SaveConfig((UObject *)this,0x4000,(wchar_t *)0x0,GConfig,true);
  return;
}

// SetEditMenusMode @ 142c700b0

void __thiscall UToolMenus::SetEditMenusMode(UToolMenus *this,bool param_1)

{
  if ((this->bEditMenusMode != param_1) &&
     (this->bEditMenusMode = param_1, this->bSuppressRefreshWidgetsRequests == false)) {
    this->bRefreshWidgetsNextTick = true;
    SetNextTickTimer(this);
    return;
  }
  return;
}

// SetNextTickTimer @ 142c705e0

void __thiscall UToolMenus::SetNextTickTimer(UToolMenus *this)

{
  char cVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  if (this->bNextTickTimerIsSet == false) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->SetTimerForNextTickDelegate,&local_28);
    if ((*(int *)&(this->SetTimerForNextTickDelegate).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(this->SetTimerForNextTickDelegate).field_0x8,
       plVar2 != (longlong *)0x0)) {
      cVar1 = (**(code **)(*plVar2 + 0x38))();
      if (cVar1 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_28);
        this->bNextTickTimerIsSet = true;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->SetTimerForNextTickDelegate,&local_28);
        if (*(int *)&(this->SetTimerForNextTickDelegate).field_0x10 == 0) {
          plVar2 = (longlong *)0x0;
        }
        else {
          plVar2 = *(longlong **)&(this->SetTimerForNextTickDelegate).field_0x8;
        }
        (**(code **)(*plVar2 + 0x60))();
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return;
}

// SetSectionLabel @ 142c70680

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
UToolMenus::SetSectionLabel(UToolMenus *this,FName param_1,FName param_2,FText *param_3)

{
  ITextData *pIVar1;
  UToolMenu *this_00;
  FToolMenuSection *pFVar2;
  undefined1 local_res20 [8];
  FDestructionSentinel local_68;
  FText local_50;
  bool local_40;
  undefined1 local_38 [8];
  ForAnyElementType FStack_30;
  ulonglong local_28;
  
  local_50.TextData.Reference = (param_3->TextData).Reference;
  if (local_50.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50.TextData.Reference + 8))
              (local_50.TextData.Reference,local_res20);
  }
  local_50.Flags = param_3->Flags;
  local_40 = true;
  local_28 = 0;
  local_38 = (undefined1  [8])0x0;
  FStack_30.Data = (FScriptContainerElement *)0x0;
  this_00 = ExtendMenu(this,param_1);
  pFVar2 = UToolMenu::FindOrAddSection(this_00,param_2);
  FText::operator=(&(pFVar2->Label).Value,&local_50);
  (pFVar2->Label).bIsSet = local_40;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar2->Label).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
             (FWriteAccessScope *)&local_68);
  if (((int)local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
    local_28 = local_28 & 0xffffffff00000000;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (FStack_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  if (local_50.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
  }
  pIVar1 = (param_3->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return;
}

// SetSectionPosition @ 142c707c0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
UToolMenus::SetSectionPosition
          (UToolMenus *this,FName param_1,FName param_2,FName param_3,EToolMenuInsertType param_4)

{
  UToolMenu *this_00;
  FToolMenuSection *pFVar1;
  undefined4 local_10;
  
  this_00 = ExtendMenu(this,param_1);
  pFVar1 = UToolMenu::FindOrAddSection(this_00,param_2);
  (pFVar1->InsertPosition).Name = param_3;
  (pFVar1->InsertPosition).Position = param_4;
  (pFVar1->InsertPosition).Fallback = 3;
  *(undefined2 *)&(pFVar1->InsertPosition).field_0xa = local_10._2_2_;
  return;
}

// SplitMenuPath @ 142c70d10

bool __cdecl UToolMenus::SplitMenuPath(FName param_1,FName *param_2,FName *param_3)

{
  bool bVar1;
  FString *this;
  ForAnyElementType FVar2;
  FName local_res8;
  FName local_res20;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (param_1 != (FName)0x0) {
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_res8 = param_1;
    this = ::FName::ToString(&local_res8,&local_28);
    ::FString::FString(&local_38,L".");
    bVar1 = ::FString::Split(this,&local_38,&local_48,&local_58,CaseSensitive,FromEnd);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar1) {
      FVar2.Data = (FScriptContainerElement *)L"";
      if (local_48.Data.ArrayNum != 0) {
        FVar2.Data = local_48.Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_res20,(wchar_t *)FVar2.Data);
      FVar2.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar2.Data = local_58.Data.AllocatorInstance.Data;
      }
      *param_2 = local_res20;
      ::FName::FName(&local_res20,(wchar_t *)FVar2.Data);
      *param_3 = local_res20;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      return true;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// StaticRegisterNativesUToolMenus @ 142c70ff0

void __cdecl UToolMenus::StaticRegisterNativesUToolMenus(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x10;
  local_18.DataPtr = Z_Construct_UClass_UToolMenus_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UnRegisterStartupCallback @ 142c732e0

void __cdecl UToolMenus::UnRegisterStartupCallback(void *param_1)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&StartupCallbacks,param_1);
  return;
}

// UnRegisterStartupCallback @ 142c73300

void __cdecl UToolMenus::UnRegisterStartupCallback(FDelegateHandle param_1)

{
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &StartupCallbacks,param_1);
  return;
}

// UnregisterOwnerByName @ 142c735e0

void __thiscall UToolMenus::UnregisterOwnerByName(UToolMenus *this,FName param_1)

{
  FToolMenuOwner_u_0 local_18;
  longlong lStack_10;
  
  if (param_1 == (FName)0x0) {
    lStack_10 = (ulonglong)lStack_10._1_7_ << 8;
  }
  else {
    lStack_10 = CONCAT71(lStack_10._1_7_,2);
  }
  local_18 = (FToolMenuOwner_u_0)param_1;
  UnregisterOwnerInternal(this,(FToolMenuOwner *)&local_18.ValueName);
  return;
}

// UnregisterOwnerInternal @ 142c73630

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall UToolMenus::UnregisterOwnerInternal(UToolMenus *this,FToolMenuOwner *param_1)

{
  TMap<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
  *pTVar1;
  undefined1 *puVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint in_EAX;
  EValueType *pEVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  FReadAccessScope *this_00;
  FToolMenuSection *this_01;
  uint uVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined1 *puVar20;
  uint *puVar21;
  EValueType EVar22;
  int iVar23;
  longlong lVar24;
  undefined1 local_res18 [8];
  uint local_res20;
  int local_258;
  undefined1 local_250 [8];
  ForAnyElementType local_248;
  int local_240;
  undefined1 local_238 [8];
  ForAnyElementType FStack_230;
  int local_228;
  undefined1 local_220 [8];
  ForAnyElementType FStack_218;
  int local_210;
  int local_200;
  uint uStack_1fc;
  undefined1 *puStack_1f8;
  uint local_1f0;
  uint uStack_1ec;
  uint uStack_1e8;
  undefined4 uStack_1e4;
  longlong local_1e0;
  TMap<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
  *local_1d8;
  int iStack_1d0;
  uint uStack_1cc;
  undefined1 *local_1c8;
  undefined4 uStack_1c0;
  int iStack_1bc;
  int local_1b8;
  int iStack_1b4;
  int iStack_1b0;
  undefined4 uStack_1ac;
  int local_1a8;
  int local_1a4;
  FToolMenuOwner_u_0 local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  TMap<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
  *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_178;
  undefined8 uStack_158;
  FDestructionSentinel local_150;
  FDestructionSentinel local_138;
  FDestructionSentinel local_120;
  TMap<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
  *local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  int local_e0;
  undefined4 uStack_dc;
  FReadAccessScope local_d8;
  FReadAccessScope local_c0;
  FReadAccessScope local_a8;
  TMap<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
  *local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  uint uStack_78;
  uint uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  FToolMenuOwner local_60;
  
  if (((param_1->field0_0x0).ValueInt64 != 0) || (param_1->ValueType != None)) {
    local_res20 = in_EAX & 0xffffff00;
    uStack_1cc = 1;
    iStack_1d0 = 0;
    pTVar1 = &this->Menus;
    puVar2 = &(this->Menus).field_0x10;
    iVar10 = *(int *)&(this->Menus).field_0x28;
    local_1b8 = 0;
    iStack_1bc = local_1b8;
    if (iVar10 != 0) {
      puVar21 = *(uint **)&(this->Menus).field_0x20;
      if (puVar21 == (uint *)0x0) {
        puVar21 = (uint *)puVar2;
      }
      uVar18 = *puVar21;
      local_1b8 = 0;
      while (uVar18 == 0) {
        lVar11 = (longlong)iStack_1d0;
        local_1b8 = local_1b8 + 0x20;
        iStack_1d0 = iStack_1d0 + 1;
        iStack_1bc = iVar10;
        if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1d0)
        goto LAB_142c73734;
        uVar18 = puVar21[lVar11 + 1];
      }
      uStack_1cc = -uVar18 & uVar18;
      uVar16 = (ulonglong)uStack_1cc * 2 + 1;
      lVar11 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_1a8 = (int)lVar11;
      iStack_1bc = local_1b8 + -1 + local_1a8;
      if (iVar10 < iStack_1bc) {
        iStack_1bc = iVar10;
      }
    }
LAB_142c73734:
    uVar18 = *(uint *)&(this->Menus).field_0x28;
    bVar8 = (byte)uVar18 & 0x1f;
    iStack_1b0 = *(int *)&(this->Menus).field_0x8 - *(int *)&(this->Menus).field_0x34;
    uVar17 = uVar18 & 0xffffffe0;
    iVar23 = (int)uVar18 >> 5;
    uStack_1fc = 1 << bVar8;
    uVar13 = -1 << bVar8;
    uStack_1c0 = 0xffffffff;
    TStack_178._padding_ = CONCAT44(uStack_1cc,iStack_1d0);
    TStack_178.CurrentBitIndex = iStack_1bc;
    TStack_178.UnvisitedBitMask = 0xffffffff;
    TStack_178._28_4_ = iStack_1bc;
    TStack_178.BaseBitIndex = local_1b8;
    uStack_158 = CONCAT44(uStack_1ac,iStack_1b0);
    local_200 = iVar23;
    puStack_1f8 = puVar2;
    local_1f0 = uVar13;
    uStack_1ec = uVar18;
    uStack_1e8 = uVar17;
    local_1d8 = pTVar1;
    local_1c8 = puVar2;
    iStack_1b4 = iStack_1bc;
    local_180 = pTVar1;
    TStack_178.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar18 < 0) || (iVar10 < (int)uVar18)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar3 = *(uint *)&(this->Menus).field_0x28;
    if (uVar18 != uVar3) {
      puVar20 = *(undefined1 **)&(this->Menus).field_0x20;
      if (puVar20 == (undefined1 *)0x0) {
        puVar20 = puVar2;
      }
      uVar13 = uVar13 & *(uint *)(puVar20 + (longlong)iVar23 * 4);
      while (uVar13 == 0) {
        uStack_1e8 = uVar17 + 0x20;
        local_200 = iVar23 + 1;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < local_200)
        goto LAB_142c73878;
        uVar13 = *(uint *)(puVar20 + (longlong)iVar23 * 4 + 4);
        local_1f0 = 0xffffffff;
        uVar17 = uStack_1e8;
        iVar23 = local_200;
      }
      uStack_1fc = -uVar13 & uVar13;
      uVar16 = (ulonglong)uStack_1fc * 2 + 1;
      lVar11 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_1a4 = (int)lVar11;
      uStack_1ec = local_1a4 + -1 + uVar17;
      if ((int)uVar3 < (int)uStack_1ec) {
LAB_142c73878:
        uStack_1ec = uVar3;
      }
    }
    uStack_100 = CONCAT44(uStack_1fc,local_200);
    uStack_f0 = CONCAT44(uStack_1ec,local_1f0);
    uStack_e8 = CONCAT44(uStack_1e4,uStack_1e8);
    local_e0 = *(int *)&(this->Menus).field_0x8 - *(int *)&(this->Menus).field_0x34;
    uStack_f8 = puStack_1f8;
    puVar2 = uStack_f8;
    uStack_f8._0_4_ = SUB84(puStack_1f8,0);
    uStack_f8._4_4_ = (undefined4)((ulonglong)puStack_1f8 >> 0x20);
    uStack_68 = CONCAT44(uStack_dc,local_e0);
    local_80 = (undefined4)uStack_f8;
    uStack_7c = uStack_f8._4_4_;
    uStack_78 = local_1f0;
    uStack_74 = uStack_1ec;
    local_108 = pTVar1;
    uStack_f8 = puVar2;
    local_90 = pTVar1;
    uStack_88 = uStack_100;
    local_70 = uStack_e8;
    while( true ) {
      pTVar1 = local_180;
      if (*(int *)&local_180->field_0x8 - *(int *)&local_180->field_0x34 != (int)uStack_158) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UToolMenu>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_178.CurrentBitIndex == uStack_74) &&
          (TStack_178.Array == (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(uStack_7c,local_80))
          ) && (pTVar1 == local_90)) break;
      lVar11 = *(longlong *)(*(longlong *)pTVar1 + 8 + (longlong)TStack_178.CurrentBitIndex * 0x18);
      uVar18 = *(int *)(lVar11 + 0xd8) - 1;
      local_188 = lVar11;
      if (-1 < (int)uVar18) {
        uVar16 = (ulonglong)local_res20;
        lVar24 = (longlong)(int)uVar18 * 0x238;
        do {
          uVar13 = 0;
          if ((int)uVar18 < *(int *)(lVar11 + 0xd8)) {
            uVar13 = ~uVar18 >> 0x1f;
          }
          local_1e0 = lVar24;
          if ((uVar13 == 0) &&
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
          local_190 = *(longlong *)(lVar11 + 0xd0) + lVar24;
          if (((param_1->field0_0x0).ValueInt64 != 0) ||
             ((char)*(undefined8 *)&param_1->ValueType != '\0')) {
            local_60 = *param_1;
            iVar10 = *(int *)(local_190 + 0x20);
            lVar12 = (longlong)iVar10;
            if (iVar10 != 0) {
              local_198 = *(longlong *)(local_190 + 0x18);
              local_1a0 = local_60.field0_0x0;
              iVar23 = 0;
              local_258 = 0;
              iVar14 = 0;
              lVar11 = 0;
              EVar22 = local_60.ValueType;
              if ((local_1a0.ValueInt64 == *(longlong *)(local_198 + 8)) &&
                 (EVar22 == *(EValueType *)(local_198 + 0x10))) {
                bVar8 = 0;
              }
              else {
                bVar8 = 1;
              }
              do {
                lVar11 = lVar11 + 1;
                iVar15 = iVar14 + 1;
                if (lVar11 < lVar12) {
                  pEVar7 = (EValueType *)(lVar11 * 0x780 + 0x10 + local_198);
                  do {
                    if ((local_1a0.ValueInt64 == *(undefined8 *)(pEVar7 + -8)) &&
                       (EVar22 == *pEVar7)) {
                      bVar9 = 0;
                    }
                    else {
                      bVar9 = 1;
                    }
                    iVar23 = local_258;
                    if (bVar8 != bVar9) break;
                    iVar15 = iVar15 + 1;
                    lVar11 = lVar11 + 1;
                    pEVar7 = pEVar7 + 0x780;
                  } while (lVar11 < lVar12);
                }
                iVar19 = iVar15 - iVar14;
                if (bVar8 == 0) {
                  DestructItems<FToolMenuEntry,int>
                            ((FToolMenuEntry *)((longlong)iVar14 * 0x780 + local_198),iVar19);
                }
                else {
                  if (iVar23 != iVar14) {
                    memmove((void *)((longlong)iVar23 * 0x780 + local_198),
                            (void *)((longlong)iVar14 * 0x780 + local_198),(longlong)iVar19 * 0x780)
                    ;
                  }
                  iVar23 = iVar23 + iVar19;
                  local_258 = iVar23;
                }
                bVar8 = bVar8 ^ 1;
                iVar14 = iVar15;
              } while (lVar11 < lVar12);
              iVar10 = iVar10 - local_258;
              uVar16 = (ulonglong)local_res20;
              *(int *)(local_190 + 0x20) = local_258;
              lVar11 = local_188;
              lVar24 = local_1e0;
            }
            uVar16 = uVar16 & 0xff;
            if (0 < iVar10) {
              uVar16 = 1;
            }
            local_res20 = (uint)uVar16;
          }
          lVar12 = local_190;
          if (((param_1->field0_0x0).ValueInt64 == *(longlong *)(local_190 + 8)) &&
             (param_1->ValueType == *(EValueType *)(local_190 + 0x10))) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_190 + 0x100)
                       ,&local_d8);
            if ((*(int *)(lVar12 + 0x110) == 0) ||
               ((*(longlong **)(lVar12 + 0x108) == (longlong *)0x0 ||
                (cVar6 = (**(code **)(**(longlong **)(lVar12 + 0x108) + 0x38))(), cVar6 == '\0'))))
            {
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_d8);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar12 + 0x118),
                         &local_c0);
              if ((*(int *)(lVar12 + 0x128) != 0) &&
                 ((*(longlong **)(lVar12 + 0x120) != (longlong *)0x0 &&
                  (cVar6 = (**(code **)(**(longlong **)(lVar12 + 0x120) + 0x38))(), cVar6 != '\0')))
                 ) {
                this_00 = &local_c0;
                goto LAB_142c73c23;
              }
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_c0);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar12 + 0x130),
                         &local_a8);
              if (((*(int *)(lVar12 + 0x140) != 0) &&
                  (*(longlong **)(lVar12 + 0x138) != (longlong *)0x0)) &&
                 (cVar6 = (**(code **)(**(longlong **)(lVar12 + 0x138) + 0x38))(), cVar6 != '\0')) {
                this_00 = &local_a8;
                goto LAB_142c73c23;
              }
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_a8);
            }
            else {
              this_00 = &local_d8;
LAB_142c73c23:
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(this_00);
              local_250 = (undefined1  [8])0x0;
              local_248.Data = (FScriptContainerElement *)0x0;
              local_240 = 0;
              local_238 = (undefined1  [8])0x0;
              FStack_230.Data = (FScriptContainerElement *)0x0;
              local_228 = 0;
              local_220 = (undefined1  [8])0x0;
              FStack_218.Data = (FScriptContainerElement *)0x0;
              local_210 = 0;
              TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar12 + 0x100),
                         (TDelegateBase<FNotThreadSafeDelegateMode> *)local_250);
              TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar12 + 0x118),
                         (TDelegateBase<FNotThreadSafeDelegateMode> *)local_238);
              TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar12 + 0x130),
                         (TDelegateBase<FNotThreadSafeDelegateMode> *)local_220);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_220,
                         (FWriteAccessScope *)&local_150);
              if ((local_210 != 0) && (FStack_218.Data != (FScriptContainerElement *)0x0)) {
                (*(code *)**(undefined8 **)FStack_218.Data)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&FStack_218,0,0,0x10);
                local_210 = 0;
              }
              if (local_150.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_150.Accessor,&local_150);
              }
              if (FStack_218.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_218.Data);
              }
              FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                        ((FMRSWRecursiveAccessDetector *)local_220);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_238,
                         (FWriteAccessScope *)&local_138);
              if ((local_228 != 0) && (FStack_230.Data != (FScriptContainerElement *)0x0)) {
                (*(code *)**(undefined8 **)FStack_230.Data)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&FStack_230,0,0,0x10);
                local_228 = 0;
              }
              if (local_138.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
              }
              if (FStack_230.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_230.Data);
              }
              FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                        ((FMRSWRecursiveAccessDetector *)local_238);
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_250,
                         (FWriteAccessScope *)&local_120);
              if ((local_240 != 0) && (local_248.Data != (FScriptContainerElement *)0x0)) {
                (*(code *)**(undefined8 **)local_248.Data)();
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_248,0,0,0x10);
                local_240 = 0;
              }
              if (local_120.bDestroyed == false) {
                FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_120.Accessor,&local_120);
              }
              if (local_248.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_248.Data);
              }
              FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                        ((FMRSWRecursiveAccessDetector *)local_250);
              uVar16 = CONCAT71((int7)(uVar16 >> 8),1);
              local_res20 = (uint)uVar16;
            }
            if (*(longlong *)(lVar12 + 0xa0) != 0) {
              uVar16 = CONCAT71((int7)(uVar16 >> 8),1);
              *(undefined8 *)(lVar12 + 0xa0) = 0;
              local_res20 = (uint)uVar16;
            }
            if (*(int *)(lVar12 + 0x20) == 0) {
              uVar13 = 0;
              if ((int)uVar18 < *(int *)(lVar11 + 0xd8)) {
                uVar13 = ~uVar18 >> 0x1f;
              }
              if ((uVar13 == 0) &&
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
              this_01 = (FToolMenuSection *)
                        ((ulonglong)uVar18 * 0x238 + *(longlong *)(lVar11 + 0xd0));
              FToolMenuSection::~FToolMenuSection(this_01);
              iVar10 = ~uVar18 + *(int *)(lVar11 + 0xd8);
              if (iVar10 != 0) {
                memmove(this_01,this_01 + 1,(longlong)iVar10 * 0x238);
              }
              *(int *)(lVar11 + 0xd8) = *(int *)(lVar11 + 0xd8) + -1;
              uVar16 = CONCAT71((int7)(uVar16 >> 8),1);
              local_res20 = (uint)uVar16;
            }
          }
          uVar18 = uVar18 - 1;
          lVar24 = lVar24 + -0x238;
          local_1e0 = lVar24;
        } while (-1 < (int)uVar18);
      }
      TStack_178.UnvisitedBitMask = TStack_178.UnvisitedBitMask & ~TStack_178._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_178);
    }
    if (((char)local_res20 != '\0') && (this->bSuppressRefreshWidgetsRequests == false)) {
      this->bRefreshWidgetsNextTick = true;
      SetNextTickTimer(this);
    }
  }
  return;
}

// UnregisterPrivateStartupCallback @ 142c73f50

void __cdecl UToolMenus::UnregisterPrivateStartupCallback(void)

{
  if ((InternalStartupCallbackHandle.bIsSet) && (InternalStartupCallbackHandle.TypedValue.ID != 0))
  {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnPostEngineInit,InternalStartupCallbackHandle.TypedValue);
    InternalStartupCallbackHandle.TypedValue.ID = 0;
  }
  return;
}

// UnregisterRuntimeMenuCustomizationOwner @ 142c73f90

void __thiscall UToolMenus::UnregisterRuntimeMenuCustomizationOwner(UToolMenus *this,FName param_1)

{
  uint uVar1;
  int iVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  FName FVar7;
  ulonglong uVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  FName local_res10;
  undefined1 local_res18 [16];
  
  if (param_1 != (FName)0x0) {
    uVar1 = (this->RuntimeCustomizedMenus).ArrayNum;
    uVar8 = (ulonglong)(int)uVar1;
    pFVar10 = (this->RuntimeCustomizedMenus).AllocatorInstance.Data;
    bVar5 = false;
    pFVar14 = pFVar10 + 0xb0;
    pFVar11 = pFVar10 + uVar8 * 0x208;
    local_res10 = param_1;
    while( true ) {
      if ((this->RuntimeCustomizedMenus).ArrayNum != (int)uVar8) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FCustomizedToolMenu,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar10 == pFVar11) break;
      bVar6 = FNamePermissionList::UnregisterOwner((FNamePermissionList *)(pFVar14 + 8),local_res10)
      ;
      if (bVar6) {
        bVar5 = true;
      }
      if (((*(FName **)(pFVar14 + -8) <= &local_res10) &&
          (&local_res10 < *(FName **)(pFVar14 + -8) + *(int *)(pFVar14 + 4))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar2 = *(int *)pFVar14;
      if (iVar2 != 0) {
        pFVar3 = *(FName **)(pFVar14 + -8);
        iVar15 = 0;
        lVar9 = 0;
        bVar6 = *pFVar3 != local_res10;
        FVar7 = local_res10;
        iVar12 = 0;
        do {
          iVar13 = iVar12;
          do {
            lVar9 = lVar9 + 1;
            iVar13 = iVar13 + 1;
            if (iVar2 <= lVar9) break;
          } while (bVar6 == (pFVar3[lVar9] != FVar7));
          if (bVar6 != false) {
            if (iVar15 != iVar12) {
              memmove(pFVar3 + iVar15,pFVar3 + iVar12,(longlong)(iVar13 - iVar12) << 3);
              FVar7 = local_res10;
            }
            iVar15 = iVar15 + (iVar13 - iVar12);
          }
          bVar6 = (bool)(bVar6 ^ 1);
          iVar12 = iVar13;
        } while (lVar9 < iVar2);
        *(int *)pFVar14 = iVar15;
        if (0 < iVar2 - iVar15) {
          bVar5 = true;
        }
      }
      pFVar10 = pFVar10 + 0x208;
      uVar8 = (ulonglong)uVar1;
      pFVar14 = pFVar14 + 0x208;
    }
    if ((bVar5) && (this->bSuppressRefreshWidgetsRequests == false)) {
      this->bRefreshWidgetsNextTick = true;
      SetNextTickTimer(this);
    }
  }
  return;
}

// UnregisterRuntimeMenuProfileOwner @ 142c74200

void __thiscall UToolMenus::UnregisterRuntimeMenuProfileOwner(UToolMenus *this,FName param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  TMap<FName,FToolMenuProfileMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfileMap,0>_>
  *pTVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  int iVar5;
  FName *pFVar6;
  code *pcVar7;
  bool bVar8;
  TMap<FName,FToolMenuProfileMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfileMap,0>_>
  *pTVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  FName FVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  undefined1 *puVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  int iVar23;
  uint *puVar24;
  FName local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_178;
  uint local_174;
  undefined4 uStack_13c;
  undefined4 uStack_d4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  TMap<FName,FToolMenuProfileMap,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FToolMenuProfileMap,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  if (param_1 != (FName)0x0) {
    iVar20 = 0;
    pTVar2 = &this->RuntimeMenuProfiles;
    iVar23 = 0;
    puVar3 = &(this->RuntimeMenuProfiles).field_0x10;
    iVar5 = *(int *)&(this->RuntimeMenuProfiles).field_0x28;
    bVar8 = false;
    uVar11 = 1;
    iVar12 = 0;
    if (iVar5 != 0) {
      puVar24 = *(uint **)&(this->RuntimeMenuProfiles).field_0x20;
      if (puVar24 == (uint *)0x0) {
        puVar24 = (uint *)puVar3;
      }
      uVar18 = *puVar24;
      while (uVar18 == 0) {
        lVar15 = (longlong)iVar20;
        iVar23 = iVar23 + 0x20;
        iVar20 = iVar20 + 1;
        iVar12 = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_142c742ce;
        uVar18 = puVar24[lVar15 + 1];
      }
      uVar11 = -uVar18 & uVar18;
      uVar4 = (ulonglong)uVar11 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar12 = iVar23 + -1 + (int)lVar15;
      if (iVar5 < iVar12) {
        iVar12 = iVar5;
      }
    }
LAB_142c742ce:
    local_174 = *(uint *)&(this->RuntimeMenuProfiles).field_0x28;
    uVar18 = local_174 & 0xffffffe0;
    TStack_98._padding_ = CONCAT44(uVar11,iVar20);
    TStack_98.CurrentBitIndex = iVar12;
    TStack_98.UnvisitedBitMask = 0xffffffff;
    iVar20 = (int)local_174 >> 5;
    TStack_98._28_4_ = local_54;
    TStack_98.BaseBitIndex = iVar23;
    uStack_78 = CONCAT44(uStack_13c,
                         *(int *)&(this->RuntimeMenuProfiles).field_0x8 -
                         *(int *)&(this->RuntimeMenuProfiles).field_0x34);
    local_res10 = param_1;
    local_a0 = pTVar2;
    TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
    if ((((int)local_174 < 0) || (iVar5 < (int)local_174)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar11 = *(uint *)&(this->RuntimeMenuProfiles).field_0x28;
    if (local_174 != uVar11) {
      puVar21 = *(undefined1 **)&(this->RuntimeMenuProfiles).field_0x20;
      if (puVar21 == (undefined1 *)0x0) {
        puVar21 = puVar3;
      }
      uVar19 = -1 << ((byte)local_174 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar20 * 4);
      while (uVar19 == 0) {
        lVar15 = (longlong)iVar20;
        uVar18 = uVar18 + 0x20;
        iVar20 = iVar20 + 1;
        local_174 = uVar11;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
        goto LAB_142c743f1;
        uVar19 = *(uint *)(puVar21 + lVar15 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
      lVar15 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      local_174 = (int)lVar15 + -1 + uVar18;
      if ((int)uVar11 < (int)local_174) {
        local_174 = uVar11;
      }
    }
LAB_142c743f1:
    while( true ) {
      pTVar9 = local_a0;
      if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FToolMenuProfileMap>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_98.CurrentBitIndex == local_174) &&
          (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pTVar9 == pTVar2)
         ) break;
      iVar20 = 0;
      iVar23 = 0;
      lVar15 = (longlong)TStack_98.CurrentBitIndex * 0x60 + *(longlong *)pTVar9;
      uVar11 = 1;
      iVar5 = *(int *)(lVar15 + 0x30);
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar15 + 0x18);
      iVar13 = 0;
      if (iVar5 != 0) {
        pTVar22 = pTVar1;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar15 + 0x28) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar22 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar15 + 0x28);
        }
        uVar18 = *(uint *)(pTVar22->AllocatorInstance).InlineData;
        while (uVar18 == 0) {
          lVar16 = (longlong)iVar20;
          iVar23 = iVar23 + 0x20;
          iVar20 = iVar20 + 1;
          iVar13 = iVar5;
          if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_142c744cd;
          uVar18 = *(uint *)((pTVar22->AllocatorInstance).InlineData + lVar16 * 4 + 4);
        }
        uVar11 = -uVar18 & uVar18;
        uVar4 = (ulonglong)uVar11 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar13 = iVar23 + -1 + (int)lVar16;
        if (iVar5 < iVar13) {
          iVar13 = iVar5;
        }
      }
LAB_142c744cd:
      uVar18 = *(uint *)(lVar15 + 0x30);
      uVar19 = uVar18 & 0xffffffe0;
      TStack_c8._padding_ = CONCAT44(uVar11,iVar20);
      TStack_c8.CurrentBitIndex = iVar13;
      TStack_c8.UnvisitedBitMask = 0xffffffff;
      iVar20 = (int)uVar18 >> 5;
      TStack_c8._28_4_ = iVar12;
      TStack_c8.BaseBitIndex = iVar23;
      uStack_a8 = CONCAT44(uStack_d4,*(int *)(lVar15 + 0x10) - *(int *)(lVar15 + 0x3c));
      TStack_c8.Array = pTVar1;
      if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar11 = *(uint *)(lVar15 + 0x30);
      local_178 = uVar18;
      if (uVar18 != uVar11) {
        pTVar22 = pTVar1;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar15 + 0x28) !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar22 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar15 + 0x28);
        }
        uVar18 = -1 << ((byte)uVar18 & 0x1f) &
                 *(uint *)((pTVar22->AllocatorInstance).InlineData + (longlong)iVar20 * 4);
        while (uVar18 == 0) {
          lVar16 = (longlong)iVar20;
          uVar19 = uVar19 + 0x20;
          iVar20 = iVar20 + 1;
          uVar18 = uVar11;
          local_178 = uVar11;
          if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
          goto LAB_142c745e1;
          uVar18 = *(uint *)((pTVar22->AllocatorInstance).InlineData + lVar16 * 4 + 4);
        }
        uVar4 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        uVar18 = (int)lVar16 + -1 + uVar19;
        local_178 = uVar18;
        if ((int)uVar11 < (int)uVar18) {
          uVar18 = uVar11;
          local_178 = uVar11;
        }
      }
LAB_142c745e1:
      while( true ) {
        if (*(int *)(lVar15 + 0x10) - *(int *)(lVar15 + 0x3c) != (int)uStack_a8) {
          local_res20[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FName,FToolMenuProfile>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if ((TStack_c8.CurrentBitIndex == uVar18) && (TStack_c8.Array == pTVar1)) break;
        lVar16 = *(longlong *)(lVar15 + 8) + (longlong)TStack_c8.CurrentBitIndex * 0x1b8;
        bVar10 = FNamePermissionList::UnregisterOwner
                           ((FNamePermissionList *)(lVar16 + 0xc0),local_res10);
        if (bVar10) {
          bVar8 = true;
        }
        if (((*(FName **)(lVar16 + 0xb0) <= &local_res10) &&
            (&local_res10 < *(FName **)(lVar16 + 0xb0) + *(int *)(lVar16 + 0xbc))) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar5 = *(int *)(lVar16 + 0xb8);
        if (iVar5 != 0) {
          pFVar6 = *(FName **)(lVar16 + 0xb0);
          iVar20 = 0;
          lVar17 = 0;
          bVar10 = *pFVar6 != local_res10;
          FVar14 = local_res10;
          iVar23 = 0;
          do {
            iVar13 = iVar23;
            do {
              lVar17 = lVar17 + 1;
              iVar13 = iVar13 + 1;
              if (iVar5 <= lVar17) break;
            } while (bVar10 == (pFVar6[lVar17] != FVar14));
            if (bVar10 != false) {
              if (iVar20 != iVar23) {
                memmove(pFVar6 + iVar20,pFVar6 + iVar23,(longlong)(iVar13 - iVar23) << 3);
                FVar14 = local_res10;
              }
              iVar20 = iVar20 + (iVar13 - iVar23);
            }
            bVar10 = (bool)(bVar10 ^ 1);
            iVar23 = iVar13;
          } while (lVar17 < iVar5);
          *(int *)(lVar16 + 0xb8) = iVar20;
          uVar18 = local_178;
          if (0 < iVar5 - iVar20) {
            bVar8 = true;
          }
        }
        TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
      }
      TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
    }
    if ((bVar8) && (this->bSuppressRefreshWidgetsRequests == false)) {
      this->bRefreshWidgetsNextTick = true;
      SetNextTickTimer(this);
    }
  }
  return;
}

// UnregisterStringCommandHandler @ 142c74830

void __thiscall UToolMenus::UnregisterStringCommandHandler(UToolMenus *this,FName param_1)

{
  uint uVar1;
  FName local_res8;
  FName local_res10;
  
  if (*(int *)&(this->StringCommandHandlers).field_0x8 !=
      *(int *)&(this->StringCommandHandlers).field_0x34) {
    local_res8 = param_1;
    local_res10 = param_1;
    uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    TSet<TTuple<FName,TDelegate<void___cdecl(FString_const_&,FToolMenuContext_const_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FName,TDelegate<void___cdecl(FString_const_&,FToolMenuContext_const_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,TDelegate<void___cdecl(FString_const_&,FToolMenuContext_const_&),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FName,TDelegate<void___cdecl(FString_const_&,FToolMenuContext_const_&),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
                         *)&this->StringCommandHandlers,local_res10.Number + uVar1,&local_res8);
  }
  return;
}

// execAddMenuEntryObject @ 142c75980

void __cdecl UToolMenus::execAddMenuEntryObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
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
  bVar2 = AddMenuEntryObject(local_res10);
  *(bool *)param_3 = bVar2;
  return;
}

// execExtendMenu @ 142c76760

void __cdecl UToolMenus::execExtendMenu(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UToolMenu *pUVar2;
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
  pUVar2 = ExtendMenu((UToolMenus *)param_1,local_res10);
  *(UToolMenu **)param_3 = pUVar2;
  return;
}

// execFindContext @ 142c76a00

void __cdecl UToolMenus::execFindContext(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  FToolMenuContext *this;
  UClass *local_res10;
  FToolMenuContext local_88;
  
  local_88.bIsEditing = false;
  local_88.ContextObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ContextObjects.ArrayNum = 0;
  local_88.ContextObjects.ArrayMax = 0;
  local_88.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ContextObjectCleanupFuncs.Pairs.ArrayNum = 0;
  local_88.ContextObjectCleanupFuncs.Pairs.ArrayMax = 0;
  local_88.ContextCleanupFuncs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ContextCleanupFuncs.ArrayNum = 0;
  local_88.ContextCleanupFuncs.ArrayMax = 0;
  local_88.CommandLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.CommandLists.ArrayNum = 0;
  local_88.CommandLists.ArrayMax = 0;
  local_88.CommandList.Object = (FUICommandList *)0x0;
  local_88.CommandList.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  local_88.Extenders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Extenders.ArrayNum = 0;
  local_88.Extenders.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res10 = (UClass *)0x0;
  this = &local_88;
  if ((FToolMenuContext *)param_2->MostRecentPropertyAddress != (FToolMenuContext *)0x0) {
    this = (FToolMenuContext *)param_2->MostRecentPropertyAddress;
  }
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
  pUVar2 = FToolMenuContext::FindByClass(this,local_res10);
  *(UObject **)param_3 = pUVar2;
  DestructItems<TSharedPtr<FExtender,1>,int>
            ((TSharedPtr<FExtender,1> *)local_88.Extenders.AllocatorInstance.Data,
             local_88.Extenders.ArrayNum);
  if ((TSharedPtr<FExtender,1> *)local_88.Extenders.AllocatorInstance.Data !=
      (TSharedPtr<FExtender,1> *)0x0) {
    FMemory::Free(local_88.Extenders.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.CommandList.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FUICommandList,1>,int>
            ((TSharedPtr<FUICommandList,1> *)local_88.CommandLists.AllocatorInstance.Data,
             local_88.CommandLists.ArrayNum);
  if ((TSharedPtr<FUICommandList,1> *)local_88.CommandLists.AllocatorInstance.Data !=
      (TSharedPtr<FUICommandList,1> *)0x0) {
    FMemory::Free(local_88.CommandLists.AllocatorInstance.Data);
  }
  DestructItems<TFunction<void___cdecl(void)>,int>
            ((TFunction<void___cdecl(void)> *)local_88.ContextCleanupFuncs.AllocatorInstance.Data,
             local_88.ContextCleanupFuncs.ArrayNum);
  if ((TFunction<void___cdecl(void)> *)local_88.ContextCleanupFuncs.AllocatorInstance.Data !=
      (TFunction<void___cdecl(void)> *)0x0) {
    FMemory::Free(local_88.ContextCleanupFuncs.AllocatorInstance.Data);
  }
  DestructItems<TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_>,int>
            ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
             local_88.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data,
             local_88.ContextObjectCleanupFuncs.Pairs.ArrayNum);
  if ((TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)
      local_88.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data !=
      (TTuple<TObjectPtr<UObject>,TFunction<void___cdecl(UObject_*)>_> *)0x0) {
    FMemory::Free(local_88.ContextObjectCleanupFuncs.Pairs.AllocatorInstance.Data);
  }
  if (local_88.ContextObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.ContextObjects.AllocatorInstance.Data);
  }
  return;
}

// execFindMenu @ 142c76ba0

void __cdecl UToolMenus::execFindMenu(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TObjectPtr<UToolMenu> TVar2;
  TObjectPtr<UToolMenu>_u_0 *pTVar3;
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
  pTVar3 = &TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
            ::Find((TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
                    *)&param_1[8].field_0x18,local_res8)->field0_0x0;
  if (pTVar3 != (TObjectPtr<UToolMenu>_u_0 *)0x0) {
    TVar2.field0_0x0 = (TObjectPtr<UToolMenu>_u_0)pTVar3->DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar2.field0_0x0 != (UToolMenu *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
    }
    *(TObjectPtr<UToolMenu>_u_0 *)param_3 = TVar2.field0_0x0;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGet @ 142c76c70

void __cdecl UToolMenus::execGet(UObject *param_1,FFrame *param_2,void *param_3)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this;
  FName local_res10 [3];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((Singleton == (UToolMenus *)0x0) && (bHasShutDown == false)) {
    pFVar2 = ::FName::FName(local_res10,"ToolMenus");
    FVar1 = *pFVar2;
    this = FModuleManager::Get();
    FModuleManager::LoadModuleChecked(this,FVar1);
    Singleton = UE::ToolMenus::Private::CreateToolMenusInstance();
    *(UToolMenus **)param_3 = Singleton;
    return;
  }
  *(UToolMenus **)param_3 = Singleton;
  return;
}

// execIsMenuRegistered @ 142c77d40

void __cdecl UToolMenus::execIsMenuRegistered(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TObjectPtr<UToolMenu>_u_0 *pTVar2;
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
  pTVar2 = &TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
            ::Find((TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
                    *)&param_1[8].field_0x18,local_res8)->field0_0x0;
  if (((pTVar2 == (TObjectPtr<UToolMenu>_u_0 *)0x0) || (pTVar2->DebugPtr == (UToolMenu *)0x0)) ||
     (*(char *)((longlong)pTVar2->DebugPtr + 0x108) == '\0')) {
    *(undefined1 *)param_3 = 0;
  }
  else {
    *(undefined1 *)param_3 = 1;
  }
  return;
}

// execRefreshAllWidgets @ 142c783c0

void __cdecl UToolMenus::execRefreshAllWidgets(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_1[0x16].field_0x5 == '\0') {
    param_1[0x16].field_0x1 = 1;
    SetNextTickTimer((UToolMenus *)param_1);
    return;
  }
  return;
}

// execRefreshMenuWidget @ 142c78400

void __cdecl UToolMenus::execRefreshMenuWidget(UObject *param_1,FFrame *param_2,void *param_3)

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
  bVar2 = RefreshMenuWidget((UToolMenus *)param_1,local_res10);
  *(bool *)param_3 = bVar2;
  return;
}

// execRegisterMenu @ 142c784a0

void __cdecl UToolMenus::execRegisterMenu(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UToolMenu *pUVar2;
  EMultiBoxType local_res10 [8];
  int local_res18 [2];
  FName local_res20;
  FName local_28 [2];
  
  local_28[0].ComparisonIndex.Value = 0;
  local_28[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
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
  local_res10[0] = MenuBar;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = RegisterMenu((UToolMenus *)param_1,local_28[0],local_res20,local_res10[0],
                        local_res18[0] != 0);
  *(UToolMenu **)param_3 = pUVar2;
  return;
}

// execRemoveEntry @ 142c78640

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl UToolMenus::execRemoveEntry(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  TObjectPtr<UToolMenu> this;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  FName FVar5;
  TObjectPtr<UToolMenu>_u_0 *pTVar6;
  FToolMenuSection *pFVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  bool bVar15;
  longlong local_res8;
  FName local_res10;
  FName local_res20;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  FVar5 = local_res10;
  lVar4 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar6 = &TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
            ::Find((TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
                    *)&param_1[8].field_0x18,local_res20)->field0_0x0;
  if ((pTVar6 != (TObjectPtr<UToolMenu>_u_0 *)0x0) &&
     (this.field0_0x0 = (TObjectPtr<UToolMenu>_u_0)pTVar6->DebugPtr,
     this.field0_0x0 != (UToolMenu *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this.field0_0x0);
    }
    pFVar7 = UToolMenu::FindSection((UToolMenu *)this.field0_0x0,FVar5);
    if ((pFVar7 != (FToolMenuSection *)0x0) &&
       (iVar11 = (pFVar7->Blocks).ArrayNum, lVar8 = (longlong)iVar11, iVar11 != 0)) {
      iVar14 = 0;
      pFVar3 = (pFVar7->Blocks).AllocatorInstance.Data;
      bVar15 = *(longlong *)pFVar3 != lVar4;
      lVar13 = 0;
      iVar11 = 0;
      do {
        lVar13 = lVar13 + 1;
        iVar12 = iVar11 + 1;
        if (lVar13 < lVar8) {
          pFVar9 = pFVar3 + lVar13 * 0x780;
          do {
            if (bVar15 != (*(longlong *)pFVar9 != lVar4)) break;
            iVar12 = iVar12 + 1;
            lVar13 = lVar13 + 1;
            pFVar9 = pFVar9 + 0x780;
          } while (lVar13 < lVar8);
        }
        iVar10 = iVar12 - iVar11;
        if (bVar15 == false) {
          DestructItems<FToolMenuEntry,int>
                    ((FToolMenuEntry *)(pFVar3 + (longlong)iVar11 * 0x780),iVar10);
        }
        else {
          if (iVar14 != iVar11) {
            memmove(pFVar3 + (longlong)iVar14 * 0x780,pFVar3 + (longlong)iVar11 * 0x780,
                    (longlong)iVar10 * 0x780);
          }
          iVar14 = iVar14 + iVar10;
        }
        bVar15 = (bool)(bVar15 ^ 1);
        iVar11 = iVar12;
      } while (lVar13 < lVar8);
      (pFVar7->Blocks).ArrayNum = iVar14;
    }
  }
  return;
}

// execRemoveMenu @ 142c78880

void __cdecl UToolMenus::execRemoveMenu(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  uint uVar3;
  FName local_res8;
  FName local_res10;
  
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
  FVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res10 = local_res8;
  if (*(int *)&param_1[8].field_0x20 != *(int *)&param_1[9].field_0x24) {
    uVar3 = ::GetTypeHash(local_res8.ComparisonIndex);
    TSet<TTuple<FName,TObjectPtr<UToolMenu>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,TObjectPtr<UToolMenu>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>,FDefaultSetAllocator>
                         *)&param_1[8].field_0x18,FVar2.Number + uVar3,&local_res10);
  }
  return;
}

// execRemoveMenuEntryObject @ 142c789d0

void __cdecl UToolMenus::execRemoveMenuEntryObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
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
  bVar2 = RemoveMenuEntryObject(local_res10);
  *(bool *)param_3 = bVar2;
  return;
}

// execRemoveSection @ 142c78a60

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl UToolMenus::execRemoveSection(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TObjectPtr<UToolMenu> TVar2;
  longlong *plVar3;
  longlong lVar4;
  TObjectPtr<UToolMenu>_u_0 *pTVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  longlong local_res8;
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
  lVar4 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar5 = &TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
            ::Find((TMapBase<FName,TObjectPtr<UToolMenu>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UToolMenu>,0>_>
                    *)&param_1[8].field_0x18,local_res10)->field0_0x0;
  if (pTVar5 != (TObjectPtr<UToolMenu>_u_0 *)0x0) {
    TVar2.field0_0x0 = (TObjectPtr<UToolMenu>_u_0)pTVar5->DebugPtr;
    if (TVar2.field0_0x0 != (UToolMenu *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
      }
      lVar6 = (longlong)*(int *)((longlong)TVar2.field0_0x0 + 0xd8);
      if (*(int *)((longlong)TVar2.field0_0x0 + 0xd8) != 0) {
        plVar3 = *(longlong **)((longlong)TVar2.field0_0x0 + 0xd0);
        iVar11 = 0;
        bVar13 = *plVar3 != lVar4;
        lVar10 = 0;
        iVar8 = 0;
        do {
          lVar10 = lVar10 + 1;
          iVar9 = iVar8 + 1;
          if (lVar10 < lVar6) {
            plVar7 = plVar3 + lVar10 * 0x47;
            do {
              if (bVar13 != (*plVar7 != lVar4)) break;
              iVar9 = iVar9 + 1;
              lVar10 = lVar10 + 1;
              plVar7 = plVar7 + 0x47;
            } while (lVar10 < lVar6);
          }
          iVar12 = iVar9 - iVar8;
          if (bVar13 == false) {
            DestructItems<FToolMenuSection,int>
                      ((FToolMenuSection *)(plVar3 + (longlong)iVar8 * 0x47),iVar12);
          }
          else {
            if (iVar11 != iVar8) {
              memmove(plVar3 + (longlong)iVar11 * 0x47,plVar3 + (longlong)iVar8 * 0x47,
                      (longlong)iVar12 * 0x238);
            }
            iVar11 = iVar11 + iVar12;
          }
          bVar13 = (bool)(bVar13 ^ 1);
          iVar8 = iVar9;
        } while (lVar10 < lVar6);
        *(int *)((longlong)TVar2.field0_0x0 + 0xd8) = iVar11;
      }
    }
  }
  return;
}

// execSetSectionLabel @ 142c79260

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl UToolMenus::execSetSectionLabel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FName FVar3;
  FName FVar4;
  TRefCountPtr<ITextData> TVar5;
  UToolMenu *this;
  FToolMenuSection *pFVar6;
  undefined1 local_res10 [8];
  FName local_res20;
  FName local_88;
  FText local_80;
  FDestructionSentinel local_70;
  FText local_58;
  bool local_48;
  undefined1 local_40 [8];
  ForAnyElementType FStack_38;
  ulonglong local_30;
  
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  FNameProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  FText::FText(&local_80);
  FTextProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  TVar5.Reference = local_80.TextData.Reference;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_80.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_80.TextData.Reference + 8))
              (local_80.TextData.Reference,local_res10);
  }
  FVar4 = local_88;
  FVar3 = local_res20;
  local_58.TextData.Reference = TVar5.Reference;
  if (TVar5.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar5.Reference + 8))(TVar5.Reference,local_res10);
  }
  local_58.Flags = local_80.Flags;
  local_30 = 0;
  local_48 = true;
  local_40 = (undefined1  [8])0x0;
  FStack_38.Data = (FScriptContainerElement *)0x0;
  this = ExtendMenu((UToolMenus *)param_1,FVar4);
  pFVar6 = UToolMenu::FindOrAddSection(this,FVar3);
  FText::operator=(&(pFVar6->Label).Value,&local_58);
  (pFVar6->Label).bIsSet = local_48;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->Label).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_40,
             (FWriteAccessScope *)&local_70);
  if (((int)local_30 != 0) && (FStack_38.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_38.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_38,0,0,0x10);
    local_30 = local_30 & 0xffffffff00000000;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  if (FStack_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_40);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (TVar5.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar5.Reference + 0x10))(TVar5.Reference);
  }
  if (local_80.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
  }
  return;
}

// execSetSectionPosition @ 142c79490

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __cdecl UToolMenus::execSetSectionPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  UToolMenu *this;
  FToolMenuSection *pFVar3;
  undefined1 local_res10 [16];
  FName local_res20;
  FName local_38;
  FName local_30;
  FName local_28;
  undefined4 local_20;
  
  local_30.ComparisonIndex.Value = 0;
  local_30.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
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
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FVar2 = local_res20;
  local_20 = CONCAT22(local_20._2_2_,0x300);
  local_28 = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_20 = CONCAT31(local_20._1_3_,local_res10[0]);
  this = ExtendMenu((UToolMenus *)param_1,local_30);
  pFVar3 = UToolMenu::FindOrAddSection(this,FVar2);
  (pFVar3->InsertPosition).Name = local_28;
  (pFVar3->InsertPosition).Position = (undefined1)local_20;
  (pFVar3->InsertPosition).Fallback = local_20._1_1_;
  *(undefined2 *)&(pFVar3->InsertPosition).field_0xa = local_20._2_2_;
  return;
}

// execUnregisterOwnerByName @ 142c79d30

void __cdecl UToolMenus::execUnregisterOwnerByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong local_res10 [3];
  FToolMenuOwner_u_0 local_18;
  longlong lStack_10;
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == 0) {
    lStack_10 = (ulonglong)lStack_10._1_7_ << 8;
  }
  else {
    lStack_10 = CONCAT71(lStack_10._1_7_,2);
  }
  local_18.ValueInt64 = local_res10[0];
  UnregisterOwnerInternal((UToolMenus *)param_1,(FToolMenuOwner *)&local_18.ValueName);
  return;
}

