// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 36

// StaticClass @ 14b4ae060

UClass * __cdecl UDS_HudManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_HudManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_HudManager",
               &Z_Registration_Info_UClass_UDS_HudManager.InnerSingleton,
               StaticRegisterNativesUDS_HudManager,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_HudManager>,InternalVTableHelperCtorCaller<UDS_HudManager>,
               local_res8,UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_HudManager.InnerSingleton;
}

// UDS_HudManager @ 14b4b2650

UDS_HudManager * __thiscall
UDS_HudManager::UDS_HudManager(UDS_HudManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->UIScale = 1.0;
  this->_padding_ = (longlong)&___7UDS_HudManager__6B_;
  (this->HudHideLayerGroupTypeArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HudHideLayerGroupTypeArray).ArrayNum = 0;
  (this->HudHideLayerGroupTypeArray).ArrayMax = 0;
  *(undefined8 *)&this->IsHudEditModeDelegate = 0;
  *(undefined8 *)&(this->IsHudEditModeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->IsHudEditModeDelegate).field_0x10 = 0;
  *(undefined8 *)&this->UIScaleDelegate = 0;
  *(undefined8 *)&(this->UIScaleDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->UIScaleDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnHudShowDelegate = 0;
  *(undefined8 *)&(this->OnHudShowDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnHudShowDelegate).field_0x10 = 0;
  this->bIsOpenHud = false;
  *(undefined8 *)&(this->IsHudEditModeDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->UIScaleDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->OnHudShowDelegate).field_0x18 = 2;
  return this;
}

// UDS_HudManager @ 14b4b26e0

UDS_HudManager * __thiscall
UDS_HudManager::UDS_HudManager(UDS_HudManager *this,FObjectInitializer *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->UIScale = 1.0;
  this->_padding_ = (longlong)&___7UDS_HudManager__6B_;
  (this->HudHideLayerGroupTypeArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HudHideLayerGroupTypeArray).ArrayNum = 0;
  (this->HudHideLayerGroupTypeArray).ArrayMax = 0;
  *(undefined8 *)&this->IsHudEditModeDelegate = 0;
  *(undefined8 *)&(this->IsHudEditModeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->IsHudEditModeDelegate).field_0x10 = 0;
  *(undefined8 *)&this->UIScaleDelegate = 0;
  *(undefined8 *)&(this->UIScaleDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->UIScaleDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnHudShowDelegate = 0;
  *(undefined8 *)&(this->OnHudShowDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnHudShowDelegate).field_0x10 = 0;
  this->bIsOpenHud = false;
  *(undefined8 *)&(this->IsHudEditModeDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->UIScaleDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->OnHudShowDelegate).field_0x18 = 2;
  return this;
}

// ~UDS_HudManager @ 14b4b3880

void __thiscall UDS_HudManager::~UDS_HudManager(UDS_HudManager *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDS_HudManager__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnHudShowDelegate).field_0x8,*(int *)&(this->OnHudShowDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnHudShowDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnHudShowDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->UIScaleDelegate).field_0x8,*(int *)&(this->UIScaleDelegate).field_0x10);
  pvVar1 = *(void **)&(this->UIScaleDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->UIScaleDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->IsHudEditModeDelegate).field_0x8,
             *(int *)&(this->IsHudEditModeDelegate).field_0x10);
  pvVar1 = *(void **)&(this->IsHudEditModeDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->IsHudEditModeDelegate);
  pFVar2 = (this->HudHideLayerGroupTypeArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4b7780

UClass * __cdecl UDS_HudManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_HudManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_HudManager",
               &Z_Registration_Info_UClass_UDS_HudManager.InnerSingleton,
               StaticRegisterNativesUDS_HudManager,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_HudManager>,InternalVTableHelperCtorCaller<UDS_HudManager>,
               local_res8,UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_HudManager.InnerSingleton;
}

// StaticRegisterNativesUDS_HudManager @ 14b4b8580

void __cdecl UDS_HudManager::StaticRegisterNativesUDS_HudManager(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UDS_HudManager_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetUIScale @ 14b4ba6f0

void __cdecl UDS_HudManager::execGetUIScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetUIScale((UDS_HudManager *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execOnChangedUIScaleOption @ 14b4ba730

void __cdecl
UDS_HudManager::execOnChangedUIScaleOption(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  longlong lVar2;
  int local_res10 [2];
  int local_res20 [2];
  UDS_GameOptionData *local_48;
  void *local_40;
  undefined8 local_38;
  FString local_30;
  
  local_48 = (UDS_GameOptionData *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
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
  local_40 = (void *)0x0;
  local_38 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  _Src = local_40;
  local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = (longlong)(int)local_38;
  local_30.Data.ArrayNum = (int)local_38;
  if ((int)local_38 == 0) {
    local_30.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_38,0,(ForAnyElementType *)&local_30,(int)local_38,
               &local_30.Data.ArrayMax);
    memcpy(local_30.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  OnChangedUIScaleOption((UDS_HudManager *)param_1,local_48,local_res20[0],local_res10[0],&local_30)
  ;
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  return;
}

// execOnLoadedGameOptionDeviceDelegate @ 14b4ba910

void __cdecl
UDS_HudManager::execOnLoadedGameOptionDeviceDelegate(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnLoadedGameOptionDeviceDelegate((UDS_HudManager *)param_1);
  return;
}

// execOnWindowOpenClose @ 14b4ba950

void __cdecl UDS_HudManager::execOnWindowOpenClose(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool *pbVar2;
  bool local_res10 [8];
  EDS_WindowWidget local_res20 [2];
  
  local_res20[0] = None;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pbVar2 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar2 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnWindowOpenClose((UDS_HudManager *)param_1,local_res20[0],pbVar2);
  return;
}

// execOpenHUDCallback @ 14b4baa30

void __cdecl UDS_HudManager::execOpenHUDCallback(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  longlong lVar2;
  void *local_28;
  undefined8 local_20;
  TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  _Src = local_28;
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = (longlong)(int)local_20;
  local_18.ArrayNum = (int)local_20;
  if ((int)local_20 == 0) {
    local_18.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)local_20,0,&local_18.AllocatorInstance,(int)local_20,&local_18.ArrayMax);
    memcpy(local_18.AllocatorInstance.Data,_Src,lVar2 << 3);
  }
  OpenHUDCallback((UDS_HudManager *)param_1,&local_18);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execSetUIScale @ 14b4bab40

void __cdecl UDS_HudManager::execSetUIScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetUIScale((UDS_HudManager *)param_1,local_res10[0]);
  return;
}

// BindHUDViewModel @ 14baf30d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_HudManager::BindHUDViewModel(UDS_HudManager *this,UDS_UserWidget *param_1)

{
  FName *pFVar1;
  EDS_WindowWidget EVar2;
  code *pcVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  FDS_ViewModelContext *pFVar6;
  UScriptStruct *pUVar7;
  UDS_ViewModelContextManager *pUVar8;
  ulong64 uVar9;
  UDS_DropDataSet *this_00;
  UDS_LogManager *pUVar10;
  FDS_ViewModelContext *pFVar11;
  FDS_ViewModelContext *pFVar12;
  undefined1 auStackY_998 [32];
  FWeakObjectPtr local_958;
  FWeakObjectPtr local_950;
  FWeakObjectPtr local_948;
  FWeakObjectPtr local_940;
  FWeakObjectPtr local_938;
  FWeakObjectPtr local_930;
  FWeakObjectPtr local_928;
  FWeakObjectPtr local_920;
  FWeakObjectPtr local_918;
  FWeakObjectPtr local_910;
  FWeakObjectPtr local_908;
  FWeakObjectPtr local_900;
  FWeakObjectPtr local_8f8;
  FWeakObjectPtr local_8f0;
  FWeakObjectPtr local_8e8;
  FWeakObjectPtr local_8e0;
  FWeakObjectPtr local_8d8;
  FWeakObjectPtr local_8d0;
  FWeakObjectPtr local_8c8;
  FWeakObjectPtr local_8c0;
  FWeakObjectPtr local_8b8;
  FWeakObjectPtr local_8b0;
  FWeakObjectPtr local_8a8;
  FWeakObjectPtr local_8a0;
  FWeakObjectPtr local_898;
  FWeakObjectPtr local_890;
  FWeakObjectPtr local_888 [2];
  TSharedPtr<FDS_ViewModelContext,1> local_878;
  TSharedPtr<FDS_ViewModelContext,1> local_868;
  TSharedPtr<FDS_ViewModelContext,1> local_858;
  TSharedPtr<FDS_ViewModelContext,1> local_848;
  TSharedPtr<FDS_ViewModelContext,1> local_838;
  TSharedPtr<FDS_ViewModelContext,1> local_828;
  TSharedPtr<FDS_ViewModelContext,1> local_818;
  TSharedPtr<FDS_ViewModelContext,1> local_808;
  TSharedPtr<FDS_ViewModelContext,1> local_7f8;
  TSharedPtr<FDS_ViewModelContext,1> local_7e8;
  TSharedPtr<FDS_ViewModelContext,1> local_7d8;
  UDS_UserWidget *local_7c8;
  TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> local_7c0;
  UDS_UserWidget *local_7b8;
  UDS_UserWidget *local_7b0;
  UDS_UserWidget *local_7a8;
  FWeakObjectPtr local_7a0;
  UDS_UserWidget *local_798;
  UDS_UserWidget *local_790;
  UDS_UserWidget *local_788;
  UDS_UserWidget *local_780;
  UDS_UserWidget *local_778;
  UDS_UserWidget *local_770;
  UDS_UserWidget *local_768;
  UDS_UserWidget *local_760;
  UDS_UserWidget *local_758;
  UDS_UserWidget *local_750;
  UDS_UserWidget *local_748;
  UDS_UserWidget *local_740;
  UDS_UserWidget *local_738;
  UDS_UserWidget *local_730;
  UDS_UserWidget *local_728;
  UDS_UserWidget *local_720;
  undefined8 local_718;
  UDS_UserWidget *local_710;
  UDS_UserWidget *local_708;
  UDS_UserWidget *local_700;
  UDS_UserWidget *local_6f8;
  FWeakObjectPtr local_6f0;
  TSharedPtr<FDS_ViewModelContext,1> local_6e8;
  TSharedPtr<FDS_ViewModelContext,1> local_6d8;
  TSharedPtr<FDS_ViewModelContext,1> local_6c8;
  TSharedPtr<FDS_ViewModelContext,1> local_6b8;
  TSharedPtr<FDS_ViewModelContext,1> local_6a8;
  TSharedPtr<FDS_ViewModelContext,1> local_698;
  TSharedPtr<FDS_ViewModelContext,1> local_688;
  TSharedPtr<FDS_ViewModelContext,1> local_678;
  TSharedPtr<FDS_ViewModelContext,1> local_668;
  TSharedPtr<FDS_ViewModelContext,1> local_658;
  TSharedPtr<FDS_ViewModelContext,1> local_648;
  TSharedPtr<FDS_ViewModelContext,1> local_638;
  TSharedPtr<FDS_ViewModelContext,1> local_628;
  TSharedPtr<FDS_ViewModelContext,1> local_618;
  TSharedPtr<FDS_ViewModelContext,1> local_608;
  TSharedPtr<FDS_ViewModelContext,1> local_5f8;
  TSharedPtr<FDS_ViewModelContext,1> local_5e8;
  TSharedPtr<FDS_ViewModelContext,1> local_5d8;
  TSharedPtr<FDS_ViewModelContext,1> local_5c8;
  TSharedPtr<FDS_ViewModelContext,1> local_5b8;
  TSharedPtr<FDS_ViewModelContext,1> local_5a8;
  TSharedPtr<FDS_ViewModelContext,1> local_598;
  TSharedPtr<FDS_ViewModelContext,1> local_588;
  TSharedPtr<FDS_ViewModelContext,1> local_578;
  TSharedPtr<FDS_ViewModelContext,1> local_568;
  TSharedPtr<FDS_ViewModelContext,1> local_558;
  TSharedPtr<FDS_ViewModelContext,1> local_548;
  TSharedPtr<FDS_ViewModelContext,1> local_538;
  TSharedPtr<FDS_ViewModelContext,1> local_528;
  TSharedPtr<FDS_ViewModelContext,1> local_518;
  TSharedPtr<FDS_ViewModelContext,1> local_508;
  TSharedPtr<FDS_ViewModelContext,1> local_4f8;
  TSharedPtr<FDS_ViewModelContext,1> local_4e8;
  TSharedPtr<FDS_ViewModelContext,1> local_4d8;
  TSharedPtr<FDS_ViewModelContext,1> local_4c8;
  TSharedPtr<FDS_ViewModelContext,1> local_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_998;
  EVar2 = param_1->MyWindowID;
  if ((int)EVar2 < 0x3ea) {
    if (EVar2 == Exp) {
      pFVar6 = ::operator_new(0x30);
      pFVar12 = (FDS_ViewModelContext *)0x0;
      pFVar11 = pFVar12;
      if (pFVar6 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar6->ViewModelTemplateKey = 0;
        *(undefined8 *)&pFVar6[1].DerivedStaticStruct = 0;
        *(undefined8 *)&pFVar6->DerivedStaticStruct = 0;
        (pFVar6->ViewModelName).ComparisonIndex = 0;
        (pFVar6->ViewModelName).Number = 0;
        pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_CharInfoData__6B_;
        pFVar6[1]._padding_ = 0;
        local_718 = 0;
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(pFVar6 + 1),(FObjectPtr)&local_718);
        *(undefined8 *)&pFVar6[1].DerivedStaticStruct = 0;
        pFVar11 = pFVar6;
      }
      pFVar6 = ::operator_new(0x20);
      if (pFVar6 != (FDS_ViewModelContext *)0x0) {
        *(atomic<int> *)&pFVar6->DerivedStaticStruct = (atomic<int>)0x1;
        *(code **)&(pFVar6->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        pFVar6->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CharInfoData__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        ((atomic<int> *)&pFVar6->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pFVar6->ViewModelTemplateKey = pFVar11;
        pFVar12 = pFVar6;
      }
      if ((pFVar11 == (FDS_ViewModelContext *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar7 = FDS_ViewModelContext_CharInfoData::StaticStruct();
      *(UScriptStruct **)&pFVar11->DerivedStaticStruct = pUVar7;
      pUVar8 = UDS_ViewModelContextManager::GetInst();
      if (pUVar8 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar12 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar12->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar12->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_6c8.Object = pFVar11;
        local_6c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar12;
        UDS_ViewModelContextManager::RegisterContext(pUVar8,&local_6c8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_6c8.SharedReferenceCount.ReferenceController);
      }
      pFVar11->ViewModelTemplateKey = Data_CharInfo;
      uVar9 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
      *(ulong64 *)&pFVar11[1].DerivedStaticStruct = uVar9;
      if (pFVar12 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar12->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar12->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_5f8.Object = pFVar11;
      local_5f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar12;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_930.ObjectIndex = 0;
      local_930.ObjectSerialNumber = 0;
      local_710 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_930,(FObjectPtr)&local_710);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_930,&local_5f8,false);
      local_838.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar12;
    }
    else if (EVar2 == MessageNotification) {
      pFVar6 = ::operator_new(0x30);
      pFVar12 = (FDS_ViewModelContext *)0x0;
      pFVar11 = pFVar12;
      if (pFVar6 != (FDS_ViewModelContext *)0x0) {
        *(undefined4 *)&pFVar6->field_0x1c = 0;
        *(undefined4 *)((longlong)&pFVar6[1]._padding_ + 1) = 0;
        *(undefined2 *)((longlong)&pFVar6[1]._padding_ + 5) = 0;
        *(undefined1 *)((longlong)&pFVar6[1]._padding_ + 7) = 0;
        ((atomic<int> *)&pFVar6[1].DerivedStaticStruct)[1] = (atomic<int>)0x0;
        *(undefined8 *)&pFVar6->DerivedStaticStruct = 0;
        (pFVar6->ViewModelName).ComparisonIndex = 0;
        (pFVar6->ViewModelName).Number = 0;
        pFVar6->ViewModelTemplateKey = None;
        *(undefined1 *)&pFVar6[1]._padding_ = 0;
        pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_Common_RequestPopup__6B_;
        *(atomic<int> *)&pFVar6[1].DerivedStaticStruct = (atomic<int>)0x0;
        pFVar11 = pFVar6;
      }
      pFVar6 = ::operator_new(0x20);
      if (pFVar6 != (FDS_ViewModelContext *)0x0) {
        *(atomic<int> *)&pFVar6->DerivedStaticStruct = (atomic<int>)0x1;
        *(code **)&(pFVar6->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        pFVar6->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_Common_RequestPopup__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        ((atomic<int> *)&pFVar6->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pFVar6->ViewModelTemplateKey = pFVar11;
        pFVar12 = pFVar6;
      }
      if ((pFVar11 == (FDS_ViewModelContext *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar7 = FDS_ViewModelContext_Common_RequestPopup::StaticStruct();
      *(UScriptStruct **)&pFVar11->DerivedStaticStruct = pUVar7;
      pUVar8 = UDS_ViewModelContextManager::GetInst();
      if (pUVar8 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar12 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar12->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar12->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_6d8.Object = pFVar11;
        local_6d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar12;
        UDS_ViewModelContextManager::RegisterContext(pUVar8,&local_6d8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_6d8.SharedReferenceCount.ReferenceController);
      }
      pFVar11->ViewModelTemplateKey = W_Common_RequestPopup;
      if (pFVar12 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar12->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar12->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_608.Object = pFVar11;
      local_608.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar12;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_940.ObjectIndex = 0;
      local_940.ObjectSerialNumber = 0;
      local_728 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_940,(FObjectPtr)&local_728);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_940,&local_608,false);
      MakeContext<FDS_ViewModelContext>(&local_858);
      if ((local_858.Object == (FDS_ViewModelContext *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (local_858.Object)->ViewModelTemplateKey = W_HUD_Notification_Message;
      local_5c8.Object = local_858.Object;
      local_5c8.SharedReferenceCount.ReferenceController =
           local_858.SharedReferenceCount.ReferenceController;
      if (local_858.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_858.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_858.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_938.ObjectIndex = 0;
      local_938.ObjectSerialNumber = 0;
      local_720 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_938,(FObjectPtr)&local_720);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_938,&local_5c8,false);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_858.SharedReferenceCount.ReferenceController);
      local_838.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar12;
    }
    else if (EVar2 == HUDTotalMenu) {
      pFVar6 = ::operator_new(0x28);
      pFVar12 = (FDS_ViewModelContext *)0x0;
      pFVar11 = pFVar12;
      if (pFVar6 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar6->field_0x1c = 0;
        *(undefined4 *)((longlong)&pFVar6[1]._padding_ + 4) = 0;
        *(undefined8 *)&pFVar6->DerivedStaticStruct = 0;
        (pFVar6->ViewModelName).ComparisonIndex = 0;
        (pFVar6->ViewModelName).Number = 0;
        pFVar6->ViewModelTemplateKey = None;
        pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_HudMenu__6B_;
        pFVar11 = pFVar6;
      }
      pFVar6 = ::operator_new(0x20);
      if (pFVar6 != (FDS_ViewModelContext *)0x0) {
        *(atomic<int> *)&pFVar6->DerivedStaticStruct = (atomic<int>)0x1;
        *(code **)&(pFVar6->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        pFVar6->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_HudMenu__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        ((atomic<int> *)&pFVar6->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pFVar6->ViewModelTemplateKey = pFVar11;
        pFVar12 = pFVar6;
      }
      if ((pFVar11 == (FDS_ViewModelContext *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar7 = FDS_ViewModelContext_HudMenu::StaticStruct();
      *(UScriptStruct **)&pFVar11->DerivedStaticStruct = pUVar7;
      pUVar8 = UDS_ViewModelContextManager::GetInst();
      if (pUVar8 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar12 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar12->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar12->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_6e8.Object = pFVar11;
        local_6e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar12;
        UDS_ViewModelContextManager::RegisterContext(pUVar8,&local_6e8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_6e8.SharedReferenceCount.ReferenceController);
      }
      pFVar11->ViewModelTemplateKey = HUD_Menu;
      *(undefined4 *)&pFVar11[1]._padding_ = 0x4e21;
      if (pFVar12 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar12->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar12->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_618.Object = pFVar11;
      local_618.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar12;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_948.ObjectIndex = 0;
      local_948.ObjectSerialNumber = 0;
      local_730 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_948,(FObjectPtr)&local_730);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_948,&local_618,false);
      local_838.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar12;
    }
    else if (EVar2 == QuestNavigation) {
      MakeContext<FDS_ViewModelContext>(&local_868);
      local_838.SharedReferenceCount.ReferenceController =
           local_868.SharedReferenceCount.ReferenceController;
      if (local_868.Object != (FDS_ViewModelContext *)0x0) {
        if ((local_868.Object == (FDS_ViewModelContext *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (local_868.Object)->ViewModelTemplateKey = QuestNavigation;
        local_5d8.Object = local_868.Object;
        local_5d8.SharedReferenceCount.ReferenceController =
             local_868.SharedReferenceCount.ReferenceController;
        if (local_868.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_868.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_868.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_950.ObjectIndex = 0;
        local_950.ObjectSerialNumber = 0;
        local_738 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(&local_950,(FObjectPtr)&local_738);
        DS_ViewModelTemplateUtil::BindViewModel
                  ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_950,&local_5d8,false);
        local_838.SharedReferenceCount.ReferenceController =
             local_868.SharedReferenceCount.ReferenceController;
      }
    }
    else {
      if (EVar2 != InstanceTrackerList) {
        return;
      }
      MakeContext<FDS_ViewModelContext>(&local_878);
      local_838.SharedReferenceCount.ReferenceController =
           local_878.SharedReferenceCount.ReferenceController;
      if (local_878.Object != (FDS_ViewModelContext *)0x0) {
        if ((local_878.Object == (FDS_ViewModelContext *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (local_878.Object)->ViewModelTemplateKey = QuestInstanceTracker;
        local_5e8.Object = local_878.Object;
        local_5e8.SharedReferenceCount.ReferenceController =
             local_878.SharedReferenceCount.ReferenceController;
        if (local_878.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_878.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_878.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_958.ObjectIndex = 0;
        local_958.ObjectSerialNumber = 0;
        local_740 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(&local_958,(FObjectPtr)&local_740);
        DS_ViewModelTemplateUtil::BindViewModel
                  ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_958,&local_5e8,false);
        local_838.SharedReferenceCount.ReferenceController =
             local_878.SharedReferenceCount.ReferenceController;
      }
    }
  }
  else {
    if (0x2716 < (int)EVar2) {
      return;
    }
    if (EVar2 == CheatKeyBtn) {
      pFVar11 = ::operator_new(0x30);
      if (pFVar11 == (FDS_ViewModelContext *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        _DAT_00000028 = 0x14b;
        local_7d8.Object = (FDS_ViewModelContext *)&DAT_00000010;
        local_7d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        *(atomic<int> *)&pFVar11->DerivedStaticStruct = (atomic<int>)0x1;
        ((atomic<int> *)&pFVar11->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        pFVar11->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFDS_ViewModelContext___00_SharedPointerInternals__6B_
        ;
        pFVar1 = &pFVar11->ViewModelName;
        *(undefined ***)&(pFVar11->ViewModelName).ComparisonIndex = &___7FDS_ViewModelContext__6B_;
        *(undefined8 *)&pFVar11[1].DerivedStaticStruct = 0;
        *(undefined8 *)&pFVar11->ViewModelTemplateKey = 0;
        pFVar11[1]._padding_ = 0;
        if ((pFVar1 == (FName *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        LOCK();
        *(atomic<int> *)&pFVar11->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar11->DerivedStaticStruct + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar11);
        if ((pFVar1 == (FName *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(atomic<int> *)&pFVar11[1].DerivedStaticStruct = (atomic<int>)0x14b;
        LOCK();
        *(atomic<int> *)&pFVar11->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar11->DerivedStaticStruct + 1);
        UNLOCK();
        local_7d8.Object = (FDS_ViewModelContext *)pFVar1;
        local_7d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar11;
      }
      FVar4.ReferenceController = local_7d8.SharedReferenceCount.ReferenceController;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_898.ObjectIndex = 0;
      local_898.ObjectSerialNumber = 0;
      local_748 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_898,(FObjectPtr)&local_748);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_898,&local_7d8,false);
      local_838.SharedReferenceCount.ReferenceController = FVar4.ReferenceController;
    }
    else {
      switch(EVar2) {
      case QuickSlot:
        MakeContext<FDS_ViewModelContext>(&local_6b8);
        pFVar11 = TSharedPtr<FDS_ViewModelContext,1>::operator->(&local_6b8);
        pFVar11->ViewModelTemplateKey = W_ItemQuickSlotList;
        local_5a8.Object = local_6b8.Object;
        local_5a8.SharedReferenceCount.ReferenceController =
             local_6b8.SharedReferenceCount.ReferenceController;
        if ((FDS_ViewModelContext *)local_6b8.SharedReferenceCount.ReferenceController !=
            (FDS_ViewModelContext *)0x0) {
          LOCK();
          (local_6b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_6b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_920.ObjectIndex = 0;
        local_920.ObjectSerialNumber = 0;
        local_700 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(&local_920,(FObjectPtr)&local_700);
        DS_ViewModelTemplateUtil::BindViewModel
                  ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_920,&local_5a8,false);
        local_838.SharedReferenceCount.ReferenceController =
             local_6b8.SharedReferenceCount.ReferenceController;
        break;
      case SkillSlot:
        MakeContext<FDS_ViewModelContext>(&local_848);
        if ((local_848.Object == (FDS_ViewModelContext *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (local_848.Object)->ViewModelTemplateKey = HUD_SkillGroup;
        local_5b8.Object = local_848.Object;
        local_5b8.SharedReferenceCount.ReferenceController =
             local_848.SharedReferenceCount.ReferenceController;
        if ((FDS_ViewModelContext *)local_848.SharedReferenceCount.ReferenceController !=
            (FDS_ViewModelContext *)0x0) {
          LOCK();
          (local_848.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_848.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_928.ObjectIndex = 0;
        local_928.ObjectSerialNumber = 0;
        local_708 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(&local_928,(FObjectPtr)&local_708);
        DS_ViewModelTemplateUtil::BindViewModel
                  ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_928,&local_5b8,false);
        local_838.SharedReferenceCount.ReferenceController =
             local_848.SharedReferenceCount.ReferenceController;
        break;
      default:
        goto switchD_14baf385a_caseD_3ec;
      case GaugeCharacter:
        MakeContext<FDS_ViewModelContext>(&local_688);
        pFVar11 = TSharedPtr<FDS_ViewModelContext,1>::operator->(&local_688);
        pFVar11->ViewModelTemplateKey = HUD_PopupCharStatus;
        local_568.Object = local_688.Object;
        local_568.SharedReferenceCount.ReferenceController =
             local_688.SharedReferenceCount.ReferenceController;
        if ((FDS_ViewModelContext *)local_688.SharedReferenceCount.ReferenceController !=
            (FDS_ViewModelContext *)0x0) {
          LOCK();
          (local_688.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_688.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_8f8.ObjectIndex = 0;
        local_8f8.ObjectSerialNumber = 0;
        local_7b0 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(&local_8f8,(FObjectPtr)&local_7b0);
        DS_ViewModelTemplateUtil::BindViewModel
                  ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_8f8,&local_568,false);
        local_838.SharedReferenceCount.ReferenceController =
             local_688.SharedReferenceCount.ReferenceController;
        break;
      case GaugeAction:
        MakeContext<FDS_ViewModelContext>(&local_808);
        local_838.SharedReferenceCount.ReferenceController =
             local_808.SharedReferenceCount.ReferenceController;
        if (local_808.Object != (FDS_ViewModelContext *)0x0) {
          pFVar11 = TSharedPtr<FDS_ViewModelContext,1>::operator->(&local_808);
          pFVar11->ViewModelTemplateKey = HUD_ActionProgress;
          local_538.Object = local_808.Object;
          local_538.SharedReferenceCount.ReferenceController =
               local_808.SharedReferenceCount.ReferenceController;
          if ((FDS_ViewModelContext *)local_808.SharedReferenceCount.ReferenceController !=
              (FDS_ViewModelContext *)0x0) {
            LOCK();
            (local_808.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_808.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          local_8e0.ObjectIndex = 0;
          local_8e0.ObjectSerialNumber = 0;
          local_790 = param_1;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          FWeakObjectPtr::operator=(&local_8e0,(FObjectPtr)&local_790);
          DS_ViewModelTemplateUtil::BindViewModel
                    ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_8e0,&local_538,false);
          local_838.SharedReferenceCount.ReferenceController =
               local_808.SharedReferenceCount.ReferenceController;
        }
        break;
      case BtnPopupSkill:
        UDS_PlayerData::GetData((ulong64)&local_890,UDS_PlayerData::MainPlayerEntityID,false);
        bVar5 = FWeakObjectPtr::IsValid(&local_890);
        if (!bVar5) {
          return;
        }
        FWeakObjectPtr::Get(&local_890);
        TDS_DataSetGetter<UDS_AbilityDataSet>::Get((ulong64)&local_6f0);
        bVar5 = FWeakObjectPtr::IsValid(&local_6f0);
        if (!bVar5) {
          return;
        }
        MakeContext<FDS_ViewModelContext>(&local_6a8);
        pFVar11 = TSharedPtr<FDS_ViewModelContext,1>::operator->(&local_6a8);
        pFVar11->ViewModelTemplateKey = HUD_PopupSkillGroup;
        local_588.Object = local_6a8.Object;
        local_588.SharedReferenceCount.ReferenceController =
             local_6a8.SharedReferenceCount.ReferenceController;
        if ((FDS_ViewModelContext *)local_6a8.SharedReferenceCount.ReferenceController !=
            (FDS_ViewModelContext *)0x0) {
          LOCK();
          (local_6a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_6a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_910.ObjectIndex = 0;
        local_910.ObjectSerialNumber = 0;
        local_7c8 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(&local_910,(FObjectPtr)&local_7c8);
        DS_ViewModelTemplateUtil::BindViewModel
                  ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_910,&local_588,false);
        local_838.SharedReferenceCount.ReferenceController =
             local_6a8.SharedReferenceCount.ReferenceController;
        break;
      case TargetInfoMain:
        UDS_PlayerData::GetData((ulong64)&local_908,UDS_PlayerData::MainPlayerEntityID,false);
        bVar5 = FWeakObjectPtr::IsValid(&local_908);
        if (!bVar5) {
          pUVar10 = UDS_LogManager::GetInst();
          if (pUVar10 != (UDS_LogManager *)0x0) {
            pUVar10 = UDS_LogManager::GetInst();
            local_4a8._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_4a8,"UDS_HudManager::BindHUDViewModel",0x20,Yes);
            UDS_LogManager::PrintLog
                      (pUVar10,1,Warning,local_4a8.Ptr,0x13b,L"mainPlayerData is invalid.");
            if ((void *)local_4a8._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_4a8._padding_);
            }
          }
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4315981432812994876>,true,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\DS_HudManager.cpp"
                             ,0x13c,"false");
          if (!bVar5) {
            return;
          }
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FWeakObjectPtr::Get(&local_908);
        UDS_CharInfoData::GetData((ulong64)&local_7c0);
        bVar5 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals(&local_7c0,(void *)0x0);
        if (bVar5) {
          pUVar10 = UDS_LogManager::GetInst();
          if (pUVar10 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar10 = UDS_LogManager::GetInst();
          FWeakObjectPtr::Get(&local_908);
          local_388._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_388,"UDS_HudManager::BindHUDViewModel",0x20,Yes);
          UDS_LogManager::PrintLog
                    (pUVar10,1,Warning,local_388.Ptr,0x144,L"mainCharInfoData is nullptr. (%d)");
          if ((void *)local_388._padding_ == (void *)0x0) {
            return;
          }
          FMemory::Free((void *)local_388._padding_);
          return;
        }
        MakeContext<FDS_ViewModelContext>(&local_698);
        pFVar11 = TSharedPtr<FDS_ViewModelContext,1>::operator->(&local_698);
        pFVar11->ViewModelTemplateKey = W_BossTargetInfo;
        local_578.Object = local_698.Object;
        local_578.SharedReferenceCount.ReferenceController =
             local_698.SharedReferenceCount.ReferenceController;
        if ((FDS_ViewModelContext *)local_698.SharedReferenceCount.ReferenceController !=
            (FDS_ViewModelContext *)0x0) {
          LOCK();
          (local_698.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_698.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_900.ObjectIndex = 0;
        local_900.ObjectSerialNumber = 0;
        local_7b8 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(&local_900,(FObjectPtr)&local_7b8);
        DS_ViewModelTemplateUtil::BindViewModel
                  ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_900,&local_578,false);
        local_838.SharedReferenceCount.ReferenceController =
             local_698.SharedReferenceCount.ReferenceController;
        break;
      case SmallTalk:
        MakeContext<FDS_ViewModelContext>(&local_7f8);
        local_838.SharedReferenceCount.ReferenceController =
             local_7f8.SharedReferenceCount.ReferenceController;
        if (local_7f8.Object != (FDS_ViewModelContext *)0x0) {
          pFVar11 = TSharedPtr<FDS_ViewModelContext,1>::operator->(&local_7f8);
          pFVar11->ViewModelTemplateKey = HUD_SmallTalk;
          local_4c8.Object = local_7f8.Object;
          local_4c8.SharedReferenceCount.ReferenceController =
               local_7f8.SharedReferenceCount.ReferenceController;
          if ((FDS_ViewModelContext *)local_7f8.SharedReferenceCount.ReferenceController !=
              (FDS_ViewModelContext *)0x0) {
            LOCK();
            (local_7f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_7f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          local_8a8.ObjectIndex = 0;
          local_8a8.ObjectSerialNumber = 0;
          local_758 = param_1;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          FWeakObjectPtr::operator=(&local_8a8,(FObjectPtr)&local_758);
          DS_ViewModelTemplateUtil::BindViewModel
                    ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_8a8,&local_4c8,false);
          local_838.SharedReferenceCount.ReferenceController =
               local_7f8.SharedReferenceCount.ReferenceController;
        }
        break;
      case DropItemNormal:
        TDS_DataSetGetter<UDS_DropDataSet>::Get((ulong64)local_888);
        bVar5 = TWeakObjectPtr<UDS_DropDataSet,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_DropDataSet,FWeakObjectPtr> *)local_888,(void *)0x0);
        if (bVar5) {
          pUVar10 = UDS_LogManager::GetInst();
          if (pUVar10 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar10 = UDS_LogManager::GetInst();
          local_268._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_268,"UDS_HudManager::BindHUDViewModel",0x20,Yes);
          UDS_LogManager::PrintLog
                    (pUVar10,1,Warning,local_268.Ptr,0x167,L"DropData is nullptr. (%d)");
          if ((void *)local_268._padding_ == (void *)0x0) {
            return;
          }
          FMemory::Free((void *)local_268._padding_);
          return;
        }
        this_00 = (UDS_DropDataSet *)FWeakObjectPtr::Get(local_888);
        UDS_DropDataSet::BindOnPacketProcessor(this_00);
        MakeContext<FDS_ViewModelContext>(&local_828);
        local_838.SharedReferenceCount.ReferenceController =
             local_828.SharedReferenceCount.ReferenceController;
        if (local_828.Object != (FDS_ViewModelContext *)0x0) {
          pFVar11 = TSharedPtr<FDS_ViewModelContext,1>::operator->(&local_828);
          pFVar11->ViewModelTemplateKey = HUD_ItemGroup;
          local_558.Object = local_828.Object;
          local_558.SharedReferenceCount.ReferenceController =
               local_828.SharedReferenceCount.ReferenceController;
          if ((FDS_ViewModelContext *)local_828.SharedReferenceCount.ReferenceController !=
              (FDS_ViewModelContext *)0x0) {
            LOCK();
            (local_828.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_828.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          local_8f0.ObjectIndex = 0;
          local_8f0.ObjectSerialNumber = 0;
          local_7a8 = param_1;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          FWeakObjectPtr::operator=(&local_8f0,(FObjectPtr)&local_7a8);
          DS_ViewModelTemplateUtil::BindViewModel
                    ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_8f0,&local_558,false);
          local_838.SharedReferenceCount.ReferenceController =
               local_828.SharedReferenceCount.ReferenceController;
        }
        break;
      case TrackerList:
        TDS_DataSetGetter<UDS_QuestDataSet>::Get((ulong64)&local_7a0);
        bVar5 = FWeakObjectPtr::IsValid(&local_7a0);
        if (!bVar5) {
          pUVar10 = UDS_LogManager::GetInst();
          if (pUVar10 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar10 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_HudManager::BindHUDViewModel",0x20,Yes);
          UDS_LogManager::PrintLog
                    (pUVar10,1,Warning,local_148.Ptr,0x17b,L"questDataSet is nullptr.");
          if ((void *)local_148._padding_ == (void *)0x0) {
            return;
          }
          FMemory::Free((void *)local_148._padding_);
          return;
        }
        MakeContext<FDS_ViewModelContext>(&local_818);
        local_838.SharedReferenceCount.ReferenceController =
             local_818.SharedReferenceCount.ReferenceController;
        if (local_818.Object != (FDS_ViewModelContext *)0x0) {
          pFVar11 = TSharedPtr<FDS_ViewModelContext,1>::operator->(&local_818);
          pFVar11->ViewModelTemplateKey = QuestTracker;
          local_548.Object = local_818.Object;
          local_548.SharedReferenceCount.ReferenceController =
               local_818.SharedReferenceCount.ReferenceController;
          if ((FDS_ViewModelContext *)local_818.SharedReferenceCount.ReferenceController !=
              (FDS_ViewModelContext *)0x0) {
            LOCK();
            (local_818.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_818.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          local_8e8.ObjectIndex = 0;
          local_8e8.ObjectSerialNumber = 0;
          local_798 = param_1;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          FWeakObjectPtr::operator=(&local_8e8,(FObjectPtr)&local_798);
          DS_ViewModelTemplateUtil::BindViewModel
                    ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_8e8,&local_548,false);
          local_838.SharedReferenceCount.ReferenceController =
               local_818.SharedReferenceCount.ReferenceController;
        }
        break;
      case MiniMap:
        MakeContext<FDS_ViewModelContext>(&local_628);
        pFVar11 = TSharedPtr<FDS_ViewModelContext,1>::operator->(&local_628);
        pFVar11->ViewModelTemplateKey = W_Minimap;
        local_4e8.Object = local_628.Object;
        local_4e8.SharedReferenceCount.ReferenceController =
             local_628.SharedReferenceCount.ReferenceController;
        if ((FDS_ViewModelContext *)local_628.SharedReferenceCount.ReferenceController !=
            (FDS_ViewModelContext *)0x0) {
          LOCK();
          (local_628.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_628.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_8b8.ObjectIndex = 0;
        local_8b8.ObjectSerialNumber = 0;
        local_768 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(&local_8b8,(FObjectPtr)&local_768);
        DS_ViewModelTemplateUtil::BindViewModel
                  ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_8b8,&local_4e8,false);
        MakeContext<FDS_ViewModelContext>(&local_638);
        pFVar11 = TSharedPtr<FDS_ViewModelContext,1>::operator->(&local_638);
        pFVar11->ViewModelTemplateKey = EnvironmentInfo;
        local_4d8.Object = local_638.Object;
        local_4d8.SharedReferenceCount.ReferenceController =
             local_638.SharedReferenceCount.ReferenceController;
        if (local_638.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_638.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_638.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_8b0.ObjectIndex = 0;
        local_8b0.ObjectSerialNumber = 0;
        local_760 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(&local_8b0,(FObjectPtr)&local_760);
        DS_ViewModelTemplateUtil::BindViewModel
                  ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_8b0,&local_4d8,false);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_638.SharedReferenceCount.ReferenceController);
        local_838.SharedReferenceCount.ReferenceController =
             local_628.SharedReferenceCount.ReferenceController;
        break;
      case Chatting:
        MakeContext<FDS_ViewModelContext>(&local_678);
        pFVar11 = TSharedPtr<FDS_ViewModelContext,1>::operator->(&local_678);
        pFVar11->ViewModelTemplateKey = Chat;
        local_528.Object = local_678.Object;
        local_528.SharedReferenceCount.ReferenceController =
             local_678.SharedReferenceCount.ReferenceController;
        if ((FDS_ViewModelContext *)local_678.SharedReferenceCount.ReferenceController !=
            (FDS_ViewModelContext *)0x0) {
          LOCK();
          (local_678.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_678.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_8d8.ObjectIndex = 0;
        local_8d8.ObjectSerialNumber = 0;
        local_788 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(&local_8d8,(FObjectPtr)&local_788);
        DS_ViewModelTemplateUtil::BindViewModel
                  ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_8d8,&local_528,false);
        local_838.SharedReferenceCount.ReferenceController =
             local_678.SharedReferenceCount.ReferenceController;
        break;
      case MyParty:
        MakeContext<FDS_ViewModelContext>(&local_668);
        pFVar11 = TSharedPtr<FDS_ViewModelContext,1>::operator->(&local_668);
        pFVar11->ViewModelTemplateKey = MyPartyGroup;
        local_518.Object = local_668.Object;
        local_518.SharedReferenceCount.ReferenceController =
             local_668.SharedReferenceCount.ReferenceController;
        if ((FDS_ViewModelContext *)local_668.SharedReferenceCount.ReferenceController !=
            (FDS_ViewModelContext *)0x0) {
          LOCK();
          (local_668.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_668.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_8d0.ObjectIndex = 0;
        local_8d0.ObjectSerialNumber = 0;
        local_780 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(&local_8d0,(FObjectPtr)&local_780);
        DS_ViewModelTemplateUtil::BindViewModel
                  ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_8d0,&local_518,false);
        local_838.SharedReferenceCount.ReferenceController =
             local_668.SharedReferenceCount.ReferenceController;
        break;
      case GroupParty:
        MakeContext<FDS_ViewModelContext>(&local_658);
        pFVar11 = TSharedPtr<FDS_ViewModelContext,1>::operator->(&local_658);
        pFVar11->ViewModelTemplateKey = OtherPartyGroup;
        local_508.Object = local_658.Object;
        local_508.SharedReferenceCount.ReferenceController =
             local_658.SharedReferenceCount.ReferenceController;
        if ((FDS_ViewModelContext *)local_658.SharedReferenceCount.ReferenceController !=
            (FDS_ViewModelContext *)0x0) {
          LOCK();
          (local_658.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_658.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_8c8.ObjectIndex = 0;
        local_8c8.ObjectSerialNumber = 0;
        local_778 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(&local_8c8,(FObjectPtr)&local_778);
        DS_ViewModelTemplateUtil::BindViewModel
                  ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_8c8,&local_508,false);
        local_838.SharedReferenceCount.ReferenceController =
             local_658.SharedReferenceCount.ReferenceController;
        break;
      case BtnParty:
        MakeContext<FDS_ViewModelContext>(&local_648);
        pFVar11 = TSharedPtr<FDS_ViewModelContext,1>::operator->(&local_648);
        pFVar11->ViewModelTemplateKey = PartyBtn;
        local_4f8.Object = local_648.Object;
        local_4f8.SharedReferenceCount.ReferenceController =
             local_648.SharedReferenceCount.ReferenceController;
        if ((FDS_ViewModelContext *)local_648.SharedReferenceCount.ReferenceController !=
            (FDS_ViewModelContext *)0x0) {
          LOCK();
          (local_648.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_648.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_8c0.ObjectIndex = 0;
        local_8c0.ObjectSerialNumber = 0;
        local_770 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(&local_8c0,(FObjectPtr)&local_770);
        DS_ViewModelTemplateUtil::BindViewModel
                  ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_8c0,&local_4f8,false);
        local_838.SharedReferenceCount.ReferenceController =
             local_648.SharedReferenceCount.ReferenceController;
        break;
      case HUDPhasingTimer:
        MakeContext<FDS_ViewModelContext>(&local_7e8);
        local_838.SharedReferenceCount.ReferenceController =
             local_7e8.SharedReferenceCount.ReferenceController;
        if (local_7e8.Object != (FDS_ViewModelContext *)0x0) {
          pFVar11 = TSharedPtr<FDS_ViewModelContext,1>::operator->(&local_7e8);
          pFVar11->ViewModelTemplateKey = HUD_Phasing;
          local_4b8.Object = local_7e8.Object;
          local_4b8.SharedReferenceCount.ReferenceController =
               local_7e8.SharedReferenceCount.ReferenceController;
          if ((FDS_ViewModelContext *)local_7e8.SharedReferenceCount.ReferenceController !=
              (FDS_ViewModelContext *)0x0) {
            LOCK();
            (local_7e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_7e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          local_8a0.ObjectIndex = 0;
          local_8a0.ObjectSerialNumber = 0;
          local_750 = param_1;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          FWeakObjectPtr::operator=(&local_8a0,(FObjectPtr)&local_750);
          DS_ViewModelTemplateUtil::BindViewModel
                    ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_8a0,&local_4b8,false);
          local_838.SharedReferenceCount.ReferenceController =
               local_7e8.SharedReferenceCount.ReferenceController;
        }
        break;
      case RingCommandQuickSlot:
        MakeContext<FDS_ViewModelContext>(&local_838);
        if ((local_838.Object == (FDS_ViewModelContext *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (local_838.Object)->ViewModelTemplateKey = HUD_RingCmd_QuickSlotList;
        local_598.Object = local_838.Object;
        local_598.SharedReferenceCount.ReferenceController =
             local_838.SharedReferenceCount.ReferenceController;
        if ((FDS_ViewModelContext *)local_838.SharedReferenceCount.ReferenceController !=
            (FDS_ViewModelContext *)0x0) {
          LOCK();
          (local_838.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_838.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_918.ObjectIndex = 0;
        local_918.ObjectSerialNumber = 0;
        local_6f8 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(&local_918,(FObjectPtr)&local_6f8);
        DS_ViewModelTemplateUtil::BindViewModel
                  ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_918,&local_598,false);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_838.SharedReferenceCount.ReferenceController);
switchD_14baf385a_caseD_3ec:
  return;
}

// CloseBossHUD @ 14bafa220

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_HudManager::CloseBossHUD(UDS_HudManager *this)

{
  UDS_WindowManager *this_00;
  float local_res10 [2];
  uint local_res18 [4];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res10[0] = 0.0;
    local_res18[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,-0x14,local_res18,local_res10);
  }
  return;
}

// CloseHUD @ 14bafa260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_HudManager::CloseHUD(UDS_HudManager *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_WindowManager *this_00;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar1 = UDS_GameInstance::GetIsDungeonPlayBuild();
  if (bVar1) {
    UDS_DungeonPlayBuild_DebugScreen::ShowWidget(false);
  }
  if (this->bIsOpenHud == false) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_HudManager::CloseHUD",0x18,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0xbc,L"HUD is already closed.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this_00 = UDS_WindowManager::GetInst();
    if (this_00 != (UDS_WindowManager *)0x0) {
      this->bIsOpenHud = false;
      (this->HudHideLayerGroupTypeArray).ArrayNum = 0;
      if ((this->HudHideLayerGroupTypeArray).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&(this->HudHideLayerGroupTypeArray).AllocatorInstance,0,
                   &(this->HudHideLayerGroupTypeArray).ArrayMax);
      }
      UDS_WindowManager::CloseWindowGroup(this_00,HUD);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this_00->WindowOpenCloseDelegate,this);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this_00->CloseAllWindowDelegate,this);
    }
  }
  return;
}

// Created @ 14bb01520

void __thiscall UDS_HudManager::Created(UDS_HudManager *this)

{
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

// Destroyed @ 14bb02e80

void __thiscall UDS_HudManager::Destroyed(UDS_HudManager *this)

{
  return;
}

// GetInst @ 14bb0ba20

UDS_HudManager * __cdecl UDS_HudManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_HudManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_HudManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_HudManager_NoRegister();
  pUVar3 = (UDS_HudManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_HudManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_HudManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_HudManager *)0x0;
}

// GetTopHudHideWindowLayerGroupType @ 14bb10c00

EDS_WindowLayerGroupType __thiscall
UDS_HudManager::GetTopHudHideWindowLayerGroupType(UDS_HudManager *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement FVar5;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->HudHideLayerGroupTypeArray).AllocatorInstance.Data;
  iVar3 = (this->HudHideLayerGroupTypeArray).ArrayNum;
  pFVar1 = pFVar4 + iVar3;
  FVar2 = (FScriptContainerElement)0x0;
  while( true ) {
    FVar5 = FVar2;
    if ((this->HudHideLayerGroupTypeArray).ArrayNum != iVar3) {
      `TCheckedPointerIterator<enum_EDS_WindowLayerGroupType,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    FVar2 = *pFVar4;
    pFVar4 = pFVar4 + 1;
    if ((byte)FVar2 <= (byte)FVar5) {
      FVar2 = FVar5;
    }
  }
  return (EDS_WindowLayerGroupType)FVar5;
}

// GetUIScale @ 14bb10f40

float __thiscall UDS_HudManager::GetUIScale(UDS_HudManager *this)

{
  return this->UIScale;
}

// HideHUD @ 14bb11f20

void __thiscall UDS_HudManager::HideHUD(UDS_HudManager *this,EDS_WindowLayerGroupType param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  EDS_WindowLayerGroupType local_res8 [8];
  
  bVar2 = UDS_GameInstance::GetIsDungeonPlayBuild();
  if (bVar2) {
    UDS_DungeonPlayBuild_DebugScreen::ShowWidget(false);
  }
  if (this->bIsOpenHud != false) {
    iVar3 = (this->HudHideLayerGroupTypeArray).ArrayNum;
    piVar1 = &(this->HudHideLayerGroupTypeArray).ArrayMax;
    if (iVar3 == *piVar1) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,&(this->HudHideLayerGroupTypeArray).AllocatorInstance,piVar1);
    }
    (this->HudHideLayerGroupTypeArray).ArrayNum = iVar3 + 1;
    (this->HudHideLayerGroupTypeArray).AllocatorInstance.Data[iVar3] =
         (FScriptContainerElement)param_1;
    local_res8[0] = GetTopHudHideWindowLayerGroupType(this);
    TMulticastDelegate<void___cdecl(enum_EDS_WindowLayerGroupType_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&this->OnHudShowDelegate,local_res8);
  }
  return;
}

// Init @ 14bb135a0

void __thiscall UDS_HudManager::Init(UDS_HudManager *this)

{
  int iVar1;
  UDS_GameInstance *this_00;
  UClass *pUVar2;
  UDS_ManagerBase *pUVar3;
  
  this_00 = UDS_GameInstance::GetInst();
  if (this_00 == (UDS_GameInstance *)0x0) {
    return;
  }
  pUVar2 = Z_Construct_UClass_UDS_GameOptionManager_NoRegister();
  pUVar3 = UDS_GameInstance::GetManager(this_00,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_ManagerBase *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_GameOptionManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_14bb135f8;
  }
  pUVar3 = (UDS_ManagerBase *)0x0;
LAB_14bb135f8:
  if (pUVar3 != (UDS_ManagerBase *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_HudManager>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar3[2].bIsBeingDestroyed,(UDS_HudManager *)&stack0x00000010,(pmf_32104611)this);
  }
  return;
}

// IsHudWindow @ 14bb15600

bool __thiscall UDS_HudManager::IsHudWindow(UDS_HudManager *this,EDS_WindowLayerGroupType *param_1)

{
  return (byte)(*param_1 - HudUnder) < 0x17;
}

// OnChangedUIScaleOption @ 14bb1ce30

void __thiscall
UDS_HudManager::OnChangedUIScaleOption
          (UDS_HudManager *this,UDS_GameOptionData *param_1,int param_2,int param_3,FString *param_4
          )

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  
  fVar2 = (float)param_3 * __real_358637bd;
  this->UIScale = fVar2;
  TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
            (&this->UIScaleDelegate,fVar2);
  pFVar1 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// OnLoadedGameOptionDeviceDelegate @ 14bb1e900

void __thiscall UDS_HudManager::OnLoadedGameOptionDeviceDelegate(UDS_HudManager *this)

{
  bool bVar1;
  int iVar2;
  UDS_GameInstance *this_00;
  UClass *pUVar3;
  UDS_GameOptionManager *this_01;
  UObject *pUVar4;
  UDS_GameOptionData *this_02;
  float fVar5;
  FWeakObjectPtr local_res10;
  UDS_GameOptionData *local_res18 [2];
  
  this_00 = UDS_GameInstance::GetInst();
  if (this_00 == (UDS_GameInstance *)0x0) {
    return;
  }
  pUVar3 = Z_Construct_UClass_UDS_GameOptionManager_NoRegister();
  this_01 = (UDS_GameOptionManager *)UDS_GameInstance::GetManager(this_00,(FName)pUVar3->_padding_);
  if (this_01 != (UDS_GameOptionManager *)0x0) {
    pUVar3 = Z_Construct_UClass_UDS_GameOptionManager_NoRegister();
    iVar2 = (int)pUVar3->_padding_;
    if ((iVar2 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar3->_padding_)) goto LAB_14bb1e95c;
  }
  this_01 = (UDS_GameOptionManager *)0x0;
LAB_14bb1e95c:
  if (this_01 != (UDS_GameOptionManager *)0x0) {
    local_res18[0] = UDS_GameOptionManager::GetGameOptionData(this_01,HudScale);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res18[0] != (UDS_GameOptionData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res18[0] != (UDS_GameOptionData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
    bVar1 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar1) {
      pUVar4 = FWeakObjectPtr::Get(&local_res10);
      TMulticastDelegateRegistration<void___cdecl(UDS_GameOptionData_*,int,int,FString),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_HudManager>
                ((TMulticastDelegateRegistration<void___cdecl(UDS_GameOptionData_*,int,int,FString),FDefaultDelegateUserPolicy>
                  *)&pUVar4[3].field_0x18,(UDS_HudManager *)local_res18,(pmf_46542377)this);
      this_02 = (UDS_GameOptionData *)FWeakObjectPtr::Get(&local_res10);
      iVar2 = UDS_GameOptionData::GetGameOptionValue(this_02,0);
      fVar5 = (float)iVar2 * __real_358637bd;
      this->UIScale = fVar5;
      TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
                (&this->UIScaleDelegate,fVar5);
    }
  }
  return;
}

// OnOpenBossHUD @ 14bb1f110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_HudManager::OnOpenBossHUD(UDS_HudManager *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_1a8 [32];
  FWeakObjectPtr local_178 [2];
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  UDS_UserWidget *local_158 [2];
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (param_1 == (UDS_UserWidget *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_HudManager::OnOpenBossHUD",0x1d,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x252,L"InWidget is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    MakeContext<FDS_ViewModelContext>(&local_168);
    if (local_168.Object == (FDS_ViewModelContext *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (local_168.Object)->ViewModelTemplateKey = W_NpcBossAI;
    local_148.Object = local_168.Object;
    local_148.SharedReferenceCount.ReferenceController =
         local_168.SharedReferenceCount.ReferenceController;
    if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_178[0].ObjectIndex = 0;
    local_178[0].ObjectSerialNumber = 0;
    local_158[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(local_178,(FObjectPtr)local_158);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_178[0],&local_148,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_168.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnWindowOpenClose @ 14bb252c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_HudManager::OnWindowOpenClose(UDS_HudManager *this,EDS_WindowWidget param_1,bool *param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  undefined1 auStackY_178 [32];
  EDS_WindowLayerGroupType local_148 [8];
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    UDS_WindowManager::GetWindowInfo(this_00,(EDS_WindowWidget)&local_140);
    bVar2 = FWeakObjectPtr::IsValid(&local_140);
    if (bVar2) {
      pUVar5 = FWeakObjectPtr::Get(&local_140);
      if (*(char *)(pUVar5 + 2) == '\x18') {
        if (*param_2 == false) {
          ShowHUD(this,HudWindowUpper9);
        }
        else {
          bVar2 = UDS_GameInstance::GetIsDungeonPlayBuild();
          if (bVar2) {
            UDS_DungeonPlayBuild_DebugScreen::ShowWidget(false);
          }
          if (this->bIsOpenHud != false) {
            iVar3 = (this->HudHideLayerGroupTypeArray).ArrayNum;
            piVar1 = &(this->HudHideLayerGroupTypeArray).ArrayMax;
            if (iVar3 == *piVar1) {
              iVar3 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x101,&(this->HudHideLayerGroupTypeArray).AllocatorInstance,piVar1)
              ;
            }
            (this->HudHideLayerGroupTypeArray).ArrayNum = iVar3 + 1;
            (this->HudHideLayerGroupTypeArray).AllocatorInstance.Data[iVar3] =
                 (FScriptContainerElement)0x17;
            local_148[0] = GetTopHudHideWindowLayerGroupType(this);
            TMulticastDelegate<void___cdecl(enum_EDS_WindowLayerGroupType_const_&),FDefaultDelegateUserPolicy>
            ::Broadcast(&this->OnHudShowDelegate,local_148);
          }
        }
      }
    }
    else {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_HudManager::OnWindowOpenClose",0x21,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x21d,L"windowInfo is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
  }
  return;
}

// OpenBossHUD @ 14bb25450

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_HudManager::OpenBossHUD(UDS_HudManager *this)

{
  UDS_WindowManager *this_00;
  undefined8 *puVar1;
  ulong64 uVar2;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar3;
  UDS_HudManager *local_res10;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_HudManager____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_HudManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar1[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_HudManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res10);
      puVar1[4] = OnOpenBossHUD;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    pTVar3 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &local_40,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_58);
    UDS_WindowManager::OpenWindow(this_00,-0x14,pTVar3);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  return;
}

// OpenHUD @ 14bb25c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_HudManager::OpenHUD(UDS_HudManager *this)

{
  bool bVar1;
  EDS_AccountAuthority EVar2;
  UDS_LogManager *pUVar3;
  FDS_AuthData *this_00;
  UDS_WindowManager *this_01;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegate<void___cdecl(TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
  *pTVar6;
  undefined1 auStackY_1b8 [32];
  undefined1 local_188 [8];
  FDelegateAllocation local_180;
  undefined1 local_170 [16];
  FMRSWRecursiveAccessDetector *local_160;
  char local_158;
  FDelegateAllocation *local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  bVar1 = UDS_GameInstance::GetIsDungeonPlayBuild();
  if (bVar1) {
    UDS_DungeonPlayBuild_DebugScreen::ShowWidget(true);
  }
  if (this->bIsOpenHud == false) {
    this_00 = TDS_Singleton<FDS_AuthData>::GetInst();
    EVar2 = FDS_AuthData::GetAccountAuthority(this_00);
    if ((EVar2 != GmInvisible) &&
       (this_01 = UDS_WindowManager::GetInst(), this_01 != (UDS_WindowManager *)0x0)) {
      local_188 = (undefined1  [8])0x0;
      local_180.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_180.DelegateSize = 0;
      this->bIsOpenHud = true;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
                 (FWriteAccessScope *)(local_170 + 8));
      local_150 = &local_180;
      puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_180);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &
                  ___7__TCommonDelegateInstanceState___A6AXV__TArray_PEAVUDS_UserWidget__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar5 = FDelegateHandle::GenerateNewID();
        puVar4[2] = uVar5;
        *puVar4 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_HudManager____A6AXV__TArray_PEAVUDS_UserWidget__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar4[3] = 0;
        local_170._0_8_ = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)local_170);
        puVar4[4] = OpenHUDCallback;
      }
      if (local_158 == '\0') {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  (local_160,(FDestructionSentinel *)(local_170 + 8));
      }
      pTVar6 = TDelegate<void___cdecl(TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
               ::
               TDelegate<void___cdecl(TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
                         ((TDelegate<void___cdecl(TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
                           *)(local_170 + 8),
                          (TDelegate<void___cdecl(TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
                           *)local_188);
      UDS_WindowManager::OpenWindowGroup(this_01,HUD,pTVar6);
      TMulticastDelegateRegistration<void___cdecl(enum_EDS_WindowWidget,bool_const_&),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_HudManager>
                (&this_01->WindowOpenCloseDelegate,(UDS_HudManager *)local_170,(pmf_e6a43388)this);
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddUObject<UDS_HudManager>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &this_01->CloseAllWindowDelegate,(UDS_HudManager *)local_170,(pmf_32104611)this);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
                 (FWriteAccessScope *)(local_170 + 8));
      if ((local_180.DelegateSize != 0) &&
         (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_180.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_180,0,0,0x10);
        local_180.DelegateSize = 0;
      }
      if (local_158 == '\0') {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  (local_160,(FDestructionSentinel *)(local_170 + 8));
      }
      if (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_180.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_188);
    }
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_HudManager::OpenHUD",0x17,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x68,L"HUD is already open.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  return;
}

// OpenHUDCallback @ 14bb25ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_HudManager::OpenHUDCallback
          (UDS_HudManager *this,TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UDS_GameInstance *pUVar4;
  UClass *pUVar5;
  UDS_LogManager *pUVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStackY_198 [32];
  undefined1 local_168 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  iVar1 = param_1->ArrayNum;
  pFVar7 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar7 + (longlong)iVar1 * 8;
LAB_14bb25f47:
  do {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<UDS_UserWidget_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_168);
    }
    if (pFVar7 == pFVar3) {
      pFVar3 = (param_1->AllocatorInstance).Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      return;
    }
    if (*(UDS_UserWidget **)pFVar7 == (UDS_UserWidget *)0x0) {
      pUVar4 = UDS_GameInstance::GetInst();
      if (pUVar4 != (UDS_GameInstance *)0x0) {
        pUVar5 = Z_Construct_UClass_UDS_LogManager_NoRegister();
        pUVar6 = (UDS_LogManager *)UDS_GameInstance::GetManager(pUVar4,(FName)pUVar5->_padding_);
        if (pUVar6 == (UDS_LogManager *)0x0) {
LAB_14bb25fb8:
          pUVar6 = (UDS_LogManager *)0x0;
        }
        else {
          pUVar5 = Z_Construct_UClass_UDS_LogManager_NoRegister();
          iVar2 = (int)pUVar5->_padding_;
          if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar2) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
              &pUVar5->_padding_)) goto LAB_14bb25fb8;
        }
        if (pUVar6 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_GameInstance::GetInst();
          if (pUVar4 == (UDS_GameInstance *)0x0) {
LAB_14bb2600d:
            pUVar6 = (UDS_LogManager *)0x0;
          }
          else {
            pUVar5 = Z_Construct_UClass_UDS_LogManager_NoRegister();
            pUVar6 = (UDS_LogManager *)UDS_GameInstance::GetManager(pUVar4,(FName)pUVar5->_padding_)
            ;
            if (pUVar6 == (UDS_LogManager *)0x0) goto LAB_14bb2600d;
            pUVar5 = Z_Construct_UClass_UDS_LogManager_NoRegister();
            iVar2 = (int)pUVar5->_padding_;
            if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar2) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
                &pUVar5->_padding_)) goto LAB_14bb2600d;
          }
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_HudManager::OpenHUDCallback",0x1f,Yes);
          UDS_LogManager::PrintLog
                    (pUVar6,1,Warning,local_158.Ptr,0x20d,L"contentsWidget is nullptr.");
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
            pFVar7 = pFVar7 + 8;
            goto LAB_14bb25f47;
          }
        }
      }
    }
    else {
      BindHUDViewModel(this,*(UDS_UserWidget **)pFVar7);
    }
    pFVar7 = pFVar7 + 8;
  } while( true );
}

// PresetExport @ 14bb28100

void __thiscall UDS_HudManager::PresetExport(UDS_HudManager *this)

{
  return;
}

// PresetImport @ 14bb28110

void __thiscall UDS_HudManager::PresetImport(UDS_HudManager *this)

{
  return;
}

// Reset @ 14bb32bb0

void __thiscall UDS_HudManager::Reset(UDS_HudManager *this)

{
  int iVar1;
  bool bVar2;
  UDS_GameInstance *this_00;
  UClass *pUVar3;
  UDS_GameOptionManager *this_01;
  UObject *pUVar4;
  FWeakObjectPtr local_res10;
  UDS_GameOptionData *local_res18 [2];
  
  this_00 = UDS_GameInstance::GetInst();
  if (this_00 == (UDS_GameInstance *)0x0) {
    return;
  }
  pUVar3 = Z_Construct_UClass_UDS_GameOptionManager_NoRegister();
  this_01 = (UDS_GameOptionManager *)UDS_GameInstance::GetManager(this_00,(FName)pUVar3->_padding_);
  if (this_01 != (UDS_GameOptionManager *)0x0) {
    pUVar3 = Z_Construct_UClass_UDS_GameOptionManager_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14bb32c0c;
  }
  this_01 = (UDS_GameOptionManager *)0x0;
LAB_14bb32c0c:
  if (this_01 != (UDS_GameOptionManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this_01->LoadedGameOptionDeviceDelegate,this);
    local_res18[0] = UDS_GameOptionManager::GetGameOptionData(this_01,HudScale);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res18[0] != (UDS_GameOptionData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res18[0] != (UDS_GameOptionData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18[0]);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
    bVar2 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar2) {
      pUVar4 = FWeakObjectPtr::Get(&local_res10);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[3].field_0x18,this);
    }
  }
  return;
}

// SetUIScale @ 14bb37d90

void __thiscall UDS_HudManager::SetUIScale(UDS_HudManager *this,float param_1)

{
  this->UIScale = param_1;
  TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
            (&this->UIScaleDelegate,param_1);
  return;
}

// ShowHUD @ 14bb38050

void __thiscall UDS_HudManager::ShowHUD(UDS_HudManager *this,EDS_WindowLayerGroupType param_1)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement FVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  FScriptContainerElement local_res8 [8];
  FScriptContainerElement local_res10;
  undefined1 local_res18 [8];
  
  local_res10 = (FScriptContainerElement)param_1;
  bVar4 = UDS_GameInstance::GetIsDungeonPlayBuild();
  if (bVar4) {
    UDS_DungeonPlayBuild_DebugScreen::ShowWidget(true);
  }
  if (this->bIsOpenHud != false) {
    lVar12 = (longlong)(this->HudHideLayerGroupTypeArray).ArrayNum;
    uVar8 = 0;
    if (0 < lVar12) {
      lVar11 = 0;
      do {
        uVar13 = ~uVar8 >> 0x1f;
        uVar5 = 0;
        if ((int)uVar8 < (this->HudHideLayerGroupTypeArray).ArrayNum) {
          uVar5 = uVar13;
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
        if ((this->HudHideLayerGroupTypeArray).AllocatorInstance.Data[lVar11] == local_res10) {
          if (-1 < (int)uVar8) {
            uVar5 = 0;
            if ((int)uVar8 < (this->HudHideLayerGroupTypeArray).ArrayNum) {
              uVar5 = uVar13;
            }
            if ((uVar5 == 0) &&
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
            pFVar6 = (this->HudHideLayerGroupTypeArray).AllocatorInstance.Data + (int)uVar8;
            iVar7 = (this->HudHideLayerGroupTypeArray).ArrayNum + ~uVar8;
            if (iVar7 != 0) {
              memmove(pFVar6,pFVar6 + 1,(longlong)iVar7);
            }
            piVar1 = &(this->HudHideLayerGroupTypeArray).ArrayNum;
            *piVar1 = *piVar1 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,&(this->HudHideLayerGroupTypeArray).AllocatorInstance,
                       (this->HudHideLayerGroupTypeArray).ArrayNum,
                       &(this->HudHideLayerGroupTypeArray).ArrayMax);
          }
          break;
        }
        uVar8 = uVar8 + 1;
        lVar11 = lVar11 + 1;
      } while (lVar11 < lVar12);
    }
    pFVar9 = (this->HudHideLayerGroupTypeArray).AllocatorInstance.Data;
    iVar7 = (this->HudHideLayerGroupTypeArray).ArrayNum;
    pFVar6 = pFVar9 + iVar7;
    FVar2 = (FScriptContainerElement)0x0;
    while( true ) {
      FVar10 = FVar2;
      if ((this->HudHideLayerGroupTypeArray).ArrayNum != iVar7) {
        `TCheckedPointerIterator<enum_EDS_WindowLayerGroupType,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res18);
      }
      if (pFVar9 == pFVar6) break;
      FVar2 = *pFVar9;
      pFVar9 = pFVar9 + 1;
      if ((byte)FVar2 <= (byte)FVar10) {
        FVar2 = FVar10;
      }
    }
    local_res8[0] = FVar10;
    TMulticastDelegate<void___cdecl(enum_EDS_WindowLayerGroupType_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&this->OnHudShowDelegate,(EDS_WindowLayerGroupType *)local_res8);
  }
  return;
}

// Update @ 14bb3f030

void __thiscall UDS_HudManager::Update(UDS_HudManager *this,float *param_1)

{
  return;
}

