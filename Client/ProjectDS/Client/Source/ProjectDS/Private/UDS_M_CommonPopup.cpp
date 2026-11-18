// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 45

// StaticClass @ 14b509b90

UClass * __cdecl UDS_M_CommonPopup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_CommonPopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_CommonPopup",
               &Z_Registration_Info_UClass_UDS_M_CommonPopup.InnerSingleton,
               StaticRegisterNativesUDS_M_CommonPopup,0x410,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_CommonPopup>,
               InternalVTableHelperCtorCaller<UDS_M_CommonPopup>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_CommonPopup.InnerSingleton;
}

// UDS_M_CommonPopup @ 14b5102c0

UDS_M_CommonPopup * __thiscall
UDS_M_CommonPopup::UDS_M_CommonPopup(UDS_M_CommonPopup *this,FVTableHelper *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_CommonPopup__6B_;
  *(undefined8 *)&this->OnEventDelegateItemSlot01 = 0;
  *(undefined8 *)&(this->OnEventDelegateItemSlot01).field_0x8 = 0;
  *(undefined4 *)&(this->OnEventDelegateItemSlot01).field_0x10 = 0;
  *(undefined8 *)&this->OnEventDelegateItemSlot02 = 0;
  *(undefined8 *)&(this->OnEventDelegateItemSlot02).field_0x8 = 0;
  *(undefined4 *)&(this->OnEventDelegateItemSlot02).field_0x10 = 0;
  (this->Title).StringTableType = None;
  (this->Title).StringTableID = 0;
  (this->Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Title).StringEnumTableNameID.Number = 0;
  (this->Title).DateTime.Ticks = 0;
  (this->Title).TimeSpan.Ticks = 0;
  (this->Title).TimeExpressionType = None;
  (this->Title).IsExpression = false;
  (this->Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Title).UniqueString.Data.ArrayNum = 0;
  (this->Title).UniqueString.Data.ArrayMax = 0;
  (this->Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Title).FormatArgs.ArrayNum = 0;
  (this->Title).FormatArgs.ArrayMax = 0;
  (this->MainContent).StringTableType = None;
  (this->MainContent).StringTableID = 0;
  (this->MainContent).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MainContent).StringEnumTableNameID.Number = 0;
  (this->MainContent).DateTime.Ticks = 0;
  (this->MainContent).TimeSpan.Ticks = 0;
  (this->MainContent).TimeExpressionType = None;
  (this->MainContent).IsExpression = false;
  (this->MainContent).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MainContent).UniqueString.Data.ArrayNum = 0;
  (this->MainContent).UniqueString.Data.ArrayMax = 0;
  (this->MainContent).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MainContent).FormatArgs.ArrayNum = 0;
  (this->MainContent).FormatArgs.ArrayMax = 0;
  (this->SubContent01).StringTableType = None;
  (this->SubContent01).StringTableID = 0;
  (this->SubContent01).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SubContent01).StringEnumTableNameID.Number = 0;
  (this->SubContent01).DateTime.Ticks = 0;
  (this->SubContent01).TimeSpan.Ticks = 0;
  (this->SubContent01).TimeExpressionType = None;
  (this->SubContent01).IsExpression = false;
  (this->SubContent01).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubContent01).UniqueString.Data.ArrayNum = 0;
  (this->SubContent01).UniqueString.Data.ArrayMax = 0;
  (this->SubContent01).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubContent01).FormatArgs.ArrayNum = 0;
  (this->SubContent01).FormatArgs.ArrayMax = 0;
  (this->SubContent02).StringTableType = None;
  (this->SubContent02).StringTableID = 0;
  (this->SubContent02).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SubContent02).StringEnumTableNameID.Number = 0;
  (this->SubContent02).DateTime.Ticks = 0;
  (this->SubContent02).TimeSpan.Ticks = 0;
  (this->SubContent02).TimeExpressionType = None;
  (this->SubContent02).IsExpression = false;
  (this->SubContent02).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubContent02).UniqueString.Data.ArrayNum = 0;
  (this->SubContent02).UniqueString.Data.ArrayMax = 0;
  (this->SubContent02).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubContent02).FormatArgs.ArrayNum = 0;
  (this->SubContent02).FormatArgs.ArrayMax = 0;
  this->SelectedItemSlotPopupContext = None;
  *(undefined8 *)&this->DelegateMap = 0;
  *(undefined8 *)&(this->DelegateMap).field_0x8 = 0;
  *(undefined8 *)&(this->DelegateMap).field_0x20 = 0;
  *(undefined4 *)&(this->DelegateMap).field_0x28 = 0;
  *(undefined4 *)&(this->DelegateMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DelegateMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DelegateMap).field_0x34 = 0;
  *(undefined8 *)&(this->DelegateMap).field_0x40 = 0;
  *(undefined4 *)&(this->DelegateMap).field_0x48 = 0;
  *(undefined8 *)&this->ModelMap = 0;
  *(undefined8 *)&(this->ModelMap).field_0x8 = 0;
  *(undefined8 *)&(this->ModelMap).field_0x20 = 0;
  *(undefined4 *)&(this->ModelMap).field_0x28 = 0;
  *(undefined4 *)&(this->ModelMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ModelMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ModelMap).field_0x34 = 0;
  *(undefined8 *)&(this->ModelMap).field_0x40 = 0;
  *(undefined4 *)&(this->ModelMap).field_0x48 = 0;
  *(undefined8 *)&this->ContextMap = 0;
  *(undefined8 *)&(this->ContextMap).field_0x8 = 0;
  *(undefined8 *)&(this->ContextMap).field_0x20 = 0;
  *(undefined4 *)&(this->ContextMap).field_0x28 = 0;
  *(undefined4 *)&(this->ContextMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ContextMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ContextMap).field_0x34 = 0;
  *(undefined8 *)&(this->ContextMap).field_0x40 = 0;
  *(undefined4 *)&(this->ContextMap).field_0x48 = 0;
  return this;
}

// UDS_M_CommonPopup @ 14b510510

UDS_M_CommonPopup * __thiscall
UDS_M_CommonPopup::UDS_M_CommonPopup(UDS_M_CommonPopup *this,FObjectInitializer *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_CommonPopup__6B_;
  *(undefined8 *)&this->OnEventDelegateItemSlot01 = 0;
  *(undefined8 *)&(this->OnEventDelegateItemSlot01).field_0x8 = 0;
  *(undefined4 *)&(this->OnEventDelegateItemSlot01).field_0x10 = 0;
  *(undefined8 *)&this->OnEventDelegateItemSlot02 = 0;
  *(undefined8 *)&(this->OnEventDelegateItemSlot02).field_0x8 = 0;
  *(undefined4 *)&(this->OnEventDelegateItemSlot02).field_0x10 = 0;
  (this->Title).StringTableType = None;
  (this->Title).StringTableID = 0;
  (this->Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Title).StringEnumTableNameID.Number = 0;
  (this->Title).DateTime.Ticks = 0;
  (this->Title).TimeSpan.Ticks = 0;
  (this->Title).TimeExpressionType = None;
  (this->Title).IsExpression = false;
  (this->Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Title).UniqueString.Data.ArrayNum = 0;
  (this->Title).UniqueString.Data.ArrayMax = 0;
  (this->Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Title).FormatArgs.ArrayNum = 0;
  (this->Title).FormatArgs.ArrayMax = 0;
  (this->MainContent).StringTableType = None;
  (this->MainContent).StringTableID = 0;
  (this->MainContent).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MainContent).StringEnumTableNameID.Number = 0;
  (this->MainContent).DateTime.Ticks = 0;
  (this->MainContent).TimeSpan.Ticks = 0;
  (this->MainContent).TimeExpressionType = None;
  (this->MainContent).IsExpression = false;
  (this->MainContent).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MainContent).UniqueString.Data.ArrayNum = 0;
  (this->MainContent).UniqueString.Data.ArrayMax = 0;
  (this->MainContent).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MainContent).FormatArgs.ArrayNum = 0;
  (this->MainContent).FormatArgs.ArrayMax = 0;
  (this->SubContent01).StringTableType = None;
  (this->SubContent01).StringTableID = 0;
  (this->SubContent01).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SubContent01).StringEnumTableNameID.Number = 0;
  (this->SubContent01).DateTime.Ticks = 0;
  (this->SubContent01).TimeSpan.Ticks = 0;
  (this->SubContent01).TimeExpressionType = None;
  (this->SubContent01).IsExpression = false;
  (this->SubContent01).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubContent01).UniqueString.Data.ArrayNum = 0;
  (this->SubContent01).UniqueString.Data.ArrayMax = 0;
  (this->SubContent01).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubContent01).FormatArgs.ArrayNum = 0;
  (this->SubContent01).FormatArgs.ArrayMax = 0;
  (this->SubContent02).StringTableType = None;
  (this->SubContent02).StringTableID = 0;
  (this->SubContent02).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SubContent02).StringEnumTableNameID.Number = 0;
  (this->SubContent02).DateTime.Ticks = 0;
  (this->SubContent02).TimeSpan.Ticks = 0;
  (this->SubContent02).TimeExpressionType = None;
  (this->SubContent02).IsExpression = false;
  (this->SubContent02).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubContent02).UniqueString.Data.ArrayNum = 0;
  (this->SubContent02).UniqueString.Data.ArrayMax = 0;
  (this->SubContent02).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubContent02).FormatArgs.ArrayNum = 0;
  (this->SubContent02).FormatArgs.ArrayMax = 0;
  this->SelectedItemSlotPopupContext = None;
  *(undefined8 *)&this->DelegateMap = 0;
  *(undefined8 *)&(this->DelegateMap).field_0x8 = 0;
  *(undefined8 *)&(this->DelegateMap).field_0x20 = 0;
  *(undefined4 *)&(this->DelegateMap).field_0x28 = 0;
  *(undefined4 *)&(this->DelegateMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DelegateMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DelegateMap).field_0x34 = 0;
  *(undefined8 *)&(this->DelegateMap).field_0x40 = 0;
  *(undefined4 *)&(this->DelegateMap).field_0x48 = 0;
  *(undefined8 *)&this->ModelMap = 0;
  *(undefined8 *)&(this->ModelMap).field_0x8 = 0;
  *(undefined8 *)&(this->ModelMap).field_0x20 = 0;
  *(undefined4 *)&(this->ModelMap).field_0x28 = 0;
  *(undefined4 *)&(this->ModelMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ModelMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ModelMap).field_0x34 = 0;
  *(undefined8 *)&(this->ModelMap).field_0x40 = 0;
  *(undefined4 *)&(this->ModelMap).field_0x48 = 0;
  *(undefined8 *)&this->ContextMap = 0;
  *(undefined8 *)&(this->ContextMap).field_0x8 = 0;
  *(undefined8 *)&(this->ContextMap).field_0x20 = 0;
  *(undefined4 *)&(this->ContextMap).field_0x28 = 0;
  *(undefined4 *)&(this->ContextMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ContextMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ContextMap).field_0x34 = 0;
  *(undefined8 *)&(this->ContextMap).field_0x40 = 0;
  *(undefined4 *)&(this->ContextMap).field_0x48 = 0;
  return this;
}

// ~UDS_M_CommonPopup @ 14b5129b0

void __thiscall UDS_M_CommonPopup::~UDS_M_CommonPopup(UDS_M_CommonPopup *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDS_M_CommonPopup__6B_;
  *(undefined4 *)&(this->ContextMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ContextMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_CommonPopupContext,TSharedPtr<FDS_ViewModelContext,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_CommonPopupContext,TSharedPtr<FDS_ViewModelContext,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ContextMap);
  *(undefined4 *)&(this->ModelMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ModelMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ModelMap);
  *(undefined4 *)&(this->DelegateMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DelegateMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_CommonPopupContext,TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_CommonPopupContext,TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->DelegateMap);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->SubContent02).FormatArgs.AllocatorInstance.Data,
             (this->SubContent02).FormatArgs.ArrayNum);
  pFVar2 = (this->SubContent02).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SubContent02).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->SubContent01).FormatArgs.AllocatorInstance.Data,
             (this->SubContent01).FormatArgs.ArrayNum);
  pFVar2 = (this->SubContent01).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SubContent01).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->MainContent).FormatArgs.AllocatorInstance.Data,
             (this->MainContent).FormatArgs.ArrayNum);
  pFVar2 = (this->MainContent).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->MainContent).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Title).FormatArgs.AllocatorInstance.Data,
             (this->Title).FormatArgs.ArrayNum);
  pFVar2 = (this->Title).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Title).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnEventDelegateItemSlot02);
  pvVar1 = *(void **)&(this->OnEventDelegateItemSlot02).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnEventDelegateItemSlot02);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnEventDelegateItemSlot01);
  pvVar1 = *(void **)&(this->OnEventDelegateItemSlot01).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnEventDelegateItemSlot01);
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b515300

UClass * __cdecl UDS_M_CommonPopup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_CommonPopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_CommonPopup",
               &Z_Registration_Info_UClass_UDS_M_CommonPopup.InnerSingleton,
               StaticRegisterNativesUDS_M_CommonPopup,0x410,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_CommonPopup>,
               InternalVTableHelperCtorCaller<UDS_M_CommonPopup>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_CommonPopup.InnerSingleton;
}

// StaticRegisterNativesUDS_M_CommonPopup @ 14b516bd0

void __cdecl UDS_M_CommonPopup::StaticRegisterNativesUDS_M_CommonPopup(void)

{
  return;
}

// CloseCommonPopup @ 14bceb770

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_M_CommonPopup::CloseCommonPopup(UDS_M_CommonPopup *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_WindowManager *this_00;
  float local_res10 [2];
  uint local_res18 [4];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2381052233073557436>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_CommonPopup.cpp"
                       ,0x44,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    local_res10[0] = 0.0;
    local_res18[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,PopupCommon,local_res18,local_res10);
  }
  return;
}

// GetMainContent @ 14bcf9000

FDS_Text * __thiscall
UDS_M_CommonPopup::GetMainContent(UDS_M_CommonPopup *this,FDS_Text *__return_storage_ptr__)

{
  FDS_Text::FDS_Text(__return_storage_ptr__,&this->MainContent);
  return __return_storage_ptr__;
}

// GetProgressValue @ 14bcf9c90

float __thiscall UDS_M_CommonPopup::GetProgressValue(UDS_M_CommonPopup *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FWeakObjectPtr *this_00;
  UObject *pUVar4;
  UClass *pUVar5;
  undefined1 *puVar6;
  int iVar7;
  float fVar8;
  
  if (*(int *)&(this->ModelMap).field_0x8 != *(int *)&(this->ModelMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->ModelMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->ModelMap).field_0x38;
    }
    iVar7 = *(int *)(puVar6 + (ulonglong)(*(int *)&(this->ModelMap).field_0x48 - 1U & 6) * 4);
    if (iVar7 != -1) {
      lVar1 = *(longlong *)&this->ModelMap;
      do {
        if (*(char *)(lVar1 + (longlong)iVar7 * 0x14) == '\x06') {
          this_00 = &TMapBase<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>,0>_>
                     ::FindChecked(&this->ModelMap,Progress)->WeakPtr;
          pUVar4 = FWeakObjectPtr::Get(this_00);
          if (pUVar4 != (UObject *)0x0) {
            pUVar5 = Z_Construct_UClass_UDS_M_CommonProgress_NoRegister();
            iVar7 = (int)pUVar5->_padding_;
            if ((iVar7 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar7 * 8) ==
                &pUVar5->_padding_)) goto LAB_14bcf9d5f;
          }
          pUVar4 = (UObject *)0x0;
LAB_14bcf9d5f:
          return *(float *)&pUVar4[0xb].field_0x20;
        }
        iVar7 = *(int *)(lVar1 + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2381052233073557144>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_CommonPopup.cpp"
                     ,0x168,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    fVar8 = (float)(*pcVar2)();
    return fVar8;
  }
  return 0.0;
}

// GetSelectedItemSlotPopupContext @ 14bcfba00

EDS_CommonPopupContext __thiscall
UDS_M_CommonPopup::GetSelectedItemSlotPopupContext(UDS_M_CommonPopup *this)

{
  return this->SelectedItemSlotPopupContext;
}

// GetSliderCount @ 14bcfbbb0

int __thiscall UDS_M_CommonPopup::GetSliderCount(UDS_M_CommonPopup *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FWeakObjectPtr *this_00;
  UDS_M_CommonQuantityControl *this_01;
  UClass *pUVar5;
  undefined1 *puVar6;
  float fVar7;
  
  if (*(int *)&(this->ModelMap).field_0x8 != *(int *)&(this->ModelMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->ModelMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->ModelMap).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)(*(int *)&(this->ModelMap).field_0x48 - 1U & 5) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&this->ModelMap;
      do {
        if (*(char *)(lVar1 + (longlong)iVar4 * 0x14) == '\x05') {
          this_00 = &TMapBase<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>,0>_>
                     ::FindChecked(&this->ModelMap,Slider)->WeakPtr;
          this_01 = (UDS_M_CommonQuantityControl *)FWeakObjectPtr::Get(this_00);
          if (this_01 != (UDS_M_CommonQuantityControl *)0x0) {
            pUVar5 = Z_Construct_UClass_UDS_M_CommonQuantityControl_NoRegister();
            iVar4 = (int)pUVar5->_padding_;
            if ((iVar4 <= *(int *)(*(longlong *)&this_01->field_0x10 + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&this_01->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
                &pUVar5->_padding_)) goto LAB_14bcfbc7e;
          }
          this_01 = (UDS_M_CommonQuantityControl *)0x0;
LAB_14bcfbc7e:
          fVar7 = UDS_M_CommonQuantityControl::GetQuantity(this_01);
          return (int)fVar7;
        }
        iVar4 = *(int *)(lVar1 + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2381052233073557152>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_CommonPopup.cpp"
                     ,0x160,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  return 0;
}

// GetSubContent01 @ 14bcfd180

FDS_Text * __thiscall
UDS_M_CommonPopup::GetSubContent01(UDS_M_CommonPopup *this,FDS_Text *__return_storage_ptr__)

{
  FDS_Text::FDS_Text(__return_storage_ptr__,&this->SubContent01);
  return __return_storage_ptr__;
}

// GetSubContent02 @ 14bcfd1b0

FDS_Text * __thiscall
UDS_M_CommonPopup::GetSubContent02(UDS_M_CommonPopup *this,FDS_Text *__return_storage_ptr__)

{
  FDS_Text::FDS_Text(__return_storage_ptr__,&this->SubContent02);
  return __return_storage_ptr__;
}

// GetTitle @ 14bcfeaa0

FDS_Text * __thiscall
UDS_M_CommonPopup::GetTitle(UDS_M_CommonPopup *this,FDS_Text *__return_storage_ptr__)

{
  FDS_Text::FDS_Text(__return_storage_ptr__,&this->Title);
  return __return_storage_ptr__;
}

// IsContext @ 14bd055e0

bool __thiscall UDS_M_CommonPopup::IsContext(UDS_M_CommonPopup *this,EDS_CommonPopupContext param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (*(int *)&(this->ContextMap).field_0x8 != *(int *)&(this->ContextMap).field_0x34) {
    puVar2 = *(undefined1 **)&(this->ContextMap).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->ContextMap).field_0x38;
    }
    iVar1 = *(int *)(puVar2 + ((ulonglong)(*(int *)&(this->ContextMap).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar1 != -1) {
      do {
        if (*(EDS_CommonPopupContext *)((longlong)iVar1 * 0x20 + *(longlong *)&this->ContextMap) ==
            param_1) goto LAB_14bd0564b;
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + 0x18 + *(longlong *)&this->ContextMap);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_14bd0564b:
  return iVar1 != -1;
}

// IsModel @ 14bd05da0

bool __thiscall UDS_M_CommonPopup::IsModel(UDS_M_CommonPopup *this,EDS_CommonPopupContext param_1)

{
  longlong lVar1;
  int iVar2;
  FWeakObjectPtr *this_00;
  UObject *pUVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->ModelMap).field_0x8 != *(int *)&(this->ModelMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->ModelMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ModelMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + ((ulonglong)(*(int *)&(this->ModelMap).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->ModelMap;
      do {
        if (*(EDS_CommonPopupContext *)(lVar1 + (longlong)iVar2 * 0x14) == param_1) {
          this_00 = &TMapBase<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>,0>_>
                     ::FindChecked(&this->ModelMap,param_1)->WeakPtr;
          pUVar3 = FWeakObjectPtr::Get(this_00);
          return pUVar3 != (UObject *)0x0;
        }
        iVar2 = *(int *)(lVar1 + 0xc + (longlong)iVar2 * 0x14);
      } while (iVar2 != -1);
    }
  }
  return false;
}

// IsVisibleAsset @ 14bd069a0

bool __thiscall UDS_M_CommonPopup::IsVisibleAsset(UDS_M_CommonPopup *this)

{
  bool bVar1;
  
  bVar1 = IsModel(this,Asset01);
  if (!bVar1) {
    bVar1 = IsModel(this,Asset02);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// IsVisibleButton @ 14bd069e0

bool __thiscall UDS_M_CommonPopup::IsVisibleButton(UDS_M_CommonPopup *this)

{
  bool bVar1;
  
  bVar1 = IsContext(this,ButtonCancel);
  if (!bVar1) {
    bVar1 = IsContext(this,ButtonConfirm);
    if (!bVar1) {
      bVar1 = IsContext(this,ButtonFunction);
      if (!bVar1) {
        return false;
      }
    }
  }
  return true;
}

// IsVisibleCheckText @ 14bd06a30

bool __thiscall UDS_M_CommonPopup::IsVisibleCheckText(UDS_M_CommonPopup *this)

{
  bool bVar1;
  
  bVar1 = IsModel(this,CheckText);
  return bVar1;
}

// IsVisibleItemSlot @ 14bd06a40

bool __thiscall UDS_M_CommonPopup::IsVisibleItemSlot(UDS_M_CommonPopup *this)

{
  bool bVar1;
  
  bVar1 = IsModel(this,ItemSlot01);
  if (!bVar1) {
    bVar1 = IsContext(this,ItemSlot02);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// IsVisibleProgress @ 14bd06a80

bool __thiscall UDS_M_CommonPopup::IsVisibleProgress(UDS_M_CommonPopup *this)

{
  bool bVar1;
  
  bVar1 = IsModel(this,Progress);
  return bVar1;
}

// IsVisibleSlider @ 14bd06a90

bool __thiscall UDS_M_CommonPopup::IsVisibleSlider(UDS_M_CommonPopup *this)

{
  bool bVar1;
  
  bVar1 = IsModel(this,Slider);
  return bVar1;
}

// OnClickedButton @ 14bd0ae20

void __thiscall
UDS_M_CommonPopup::OnClickedButton
          (UDS_M_CommonPopup *this,FDS_ButtonEventField *param_1,int param_2)

{
  OnEvent(this,(EDS_CommonPopupContext)param_2);
  return;
}

// OnEvent @ 14bd0ce90

void __thiscall UDS_M_CommonPopup::OnEvent(UDS_M_CommonPopup *this,EDS_CommonPopupContext param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  FWeakObjectPtr FVar4;
  int iVar5;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *this_00;
  undefined1 *puVar6;
  FWeakObjectPtr local_res8;
  UDS_M_CommonPopup *local_res18 [2];
  FReadAccessScope local_38;
  
  if (*(int *)&(this->DelegateMap).field_0x8 != *(int *)&(this->DelegateMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->DelegateMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->DelegateMap).field_0x38;
    }
    iVar5 = *(int *)(puVar6 + ((ulonglong)(*(int *)&(this->DelegateMap).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)&this->DelegateMap;
      do {
        if (*(EDS_CommonPopupContext *)(lVar1 + (longlong)iVar5 * 0x28) == param_1) {
          this_00 = TMapBase<enum_EDS_CommonPopupContext,TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CommonPopupContext,TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>,0>_>
                    ::FindChecked(&this->DelegateMap,param_1);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this != (UDS_M_CommonPopup *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          local_res8.ObjectIndex = 0;
          local_res8.ObjectSerialNumber = 0;
          local_res18[0] = this;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this != (UDS_M_CommonPopup *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
          FVar4 = local_res8;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_38);
          if ((*(int *)&this_00->field_0x10 != 0) &&
             (plVar2 = *(longlong **)&this_00->field_0x8, plVar2 != (longlong *)0x0)) {
            (**(code **)(*plVar2 + 0x68))(plVar2,FVar4);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_38);
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x20 + (longlong)iVar5 * 0x28);
      } while (iVar5 != -1);
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = (UDS_M_CommonPopup *)0x0;
  pcVar3 = *(code **)(this->_padding_ + 0x2e0);
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  (*pcVar3)(this,local_res8,0);
  return;
}

// OnItemSlotEvent @ 14bd0eaf0

void __thiscall
UDS_M_CommonPopup::OnItemSlotEvent
          (UDS_M_CommonPopup *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1,
          EDS_CommonPopupContext param_2)

{
  OnEvent(this,param_2);
  return;
}

// OnPopupOpened @ 14bd0fbb0

void __thiscall UDS_M_CommonPopup::OnPopupOpened(UDS_M_CommonPopup *this,UDS_UserWidget *param_1)

{
  undefined1 *puVar1;
  TMap<EDS_CommonPopupContext,TSharedPtr<FDS_ViewModelContext,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_CommonPopupContext,TSharedPtr<FDS_ViewModelContext,1>,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<EDS_CommonPopupContext,TSharedPtr<FDS_ViewModelContext,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_CommonPopupContext,TSharedPtr<FDS_ViewModelContext,1>,0>_>
  *pTVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res10 [8];
  int local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_c8;
  TMap<EDS_CommonPopupContext,TSharedPtr<FDS_ViewModelContext,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_CommonPopupContext,TSharedPtr<FDS_ViewModelContext,1>,0>_>
  *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  UDS_UserWidget *local_90;
  UDS_UserWidget *local_88;
  TMap<EDS_CommonPopupContext,TSharedPtr<FDS_ViewModelContext,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_CommonPopupContext,TSharedPtr<FDS_ViewModelContext,1>,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  TSharedPtr<FDS_ViewModelContext,1> local_50;
  
  if (param_1 == (UDS_UserWidget *)0x0) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2381052233073557450>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_CommonPopup.cpp"
                       ,0x36,"false");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    pcVar6 = *(code **)(this->_padding_ + 0x2e8);
    *(undefined4 *)&this->_padding_ = 0x198;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    iVar12 = 0;
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_90 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_90);
    (*pcVar6)(this,local_res20);
    puVar1 = &(this->ContextMap).field_0x10;
    iVar4 = *(int *)&(this->ContextMap).field_0x28;
    pTVar2 = &this->ContextMap;
    uStack_b4 = 1;
    local_a0 = 0;
    iStack_a4 = local_a0;
    if (iVar4 != 0) {
      puVar14 = *(uint **)&(this->ContextMap).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)puVar1;
      }
      uVar11 = *puVar14;
      local_a0 = 0;
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar12;
        local_a0 = local_a0 + 0x20;
        iVar12 = iVar12 + 1;
        iStack_a4 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14bd0fd0e;
        uVar11 = puVar14[lVar9 + 1];
      }
      uStack_b4 = -uVar11 & uVar11;
      uVar3 = (ulonglong)uStack_b4 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_res18 = (int)lVar9;
      iStack_a4 = local_res18 + -1 + local_a0;
      if (iVar4 < iStack_a4) {
        iStack_a4 = iVar4;
      }
    }
LAB_14bd0fd0e:
    iStack_98 = *(int *)&(this->ContextMap).field_0x8 - *(int *)&(this->ContextMap).field_0x34;
    uVar11 = *(uint *)&(this->ContextMap).field_0x28;
    uStack_a8 = 0xffffffff;
    uVar15 = uVar11 & 0xffffffe0;
    TStack_78._padding_ = CONCAT44(uStack_b4,iVar12);
    TStack_78.CurrentBitIndex = iStack_a4;
    TStack_78.UnvisitedBitMask = 0xffffffff;
    iVar10 = (int)uVar11 >> 5;
    TStack_78._28_4_ = iStack_a4;
    TStack_78.BaseBitIndex = local_a0;
    uStack_58 = CONCAT44(uStack_94,iStack_98);
    local_c0 = pTVar2;
    iStack_b8 = iVar12;
    local_b0 = puVar1;
    iStack_9c = iStack_a4;
    local_80 = pTVar2;
    TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar11 < 0) || (iVar4 < (int)uVar11)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar5 = *(uint *)&(this->ContextMap).field_0x28;
    if (uVar11 != uVar5) {
      puVar13 = *(undefined1 **)&(this->ContextMap).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar10;
        uVar15 = uVar15 + 0x20;
        iVar10 = iVar10 + 1;
        uVar11 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
        goto LAB_14bd0fe20;
        uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar11 = (int)lVar9 + -1 + uVar15;
      if ((int)uVar5 < (int)uVar11) {
        uVar11 = uVar5;
      }
    }
LAB_14bd0fe20:
    while( true ) {
      pTVar7 = local_80;
      if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
        `TSparseArray<TSparseSetElement<TTuple<enum_EDS_CommonPopupContext,TSharedPtr<FDS_ViewModelContext,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_78.CurrentBitIndex == uVar11) &&
          (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2)
         ) break;
      lVar9 = (longlong)TStack_78.CurrentBitIndex * 0x20 + *(longlong *)pTVar7;
      local_50.Object = *(FDS_ViewModelContext **)(lVar9 + 8);
      local_50.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(lVar9 + 0x10);
      if (local_50.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_c8.ObjectIndex = 0;
      local_c8.ObjectSerialNumber = 0;
      local_88 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_c8,(FObjectPtr)&local_88);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_c8,&local_50,false);
      TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
    }
  }
  return;
}

// OnQuantityChangeEvent @ 14bd0ff10

void __thiscall UDS_M_CommonPopup::OnQuantityChangeEvent(UDS_M_CommonPopup *this,int *param_1)

{
  OnEvent(this,Slider);
  return;
}

// OnUpdateModel @ 14bd11810

void __thiscall
UDS_M_CommonPopup::OnUpdateModel
          (UDS_M_CommonPopup *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  EDS_CommonPopupContext EVar4;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  pUVar2 = FWeakObjectPtr::Get(local_res10);
  if (pUVar2 == (UObject *)0x0) {
LAB_14bd1185b:
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    if (pUVar2 != (UObject *)0x0) {
      pUVar3 = Z_Construct_UClass_UDS_ModelEventCommonProgress_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        EVar4 = Progress;
        goto LAB_14bd118d4;
      }
    }
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 1));
    if (pUVar2 == (UObject *)0x0) goto LAB_14bd118dc;
    pUVar3 = Z_Construct_UClass_UDS_M_Common_Check_Text_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_14bd118dc;
    EVar4 = CheckText;
  }
  else {
    pUVar3 = Z_Construct_UClass_UDS_ModelEventCommonQuantityControl_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_14bd1185b;
    EVar4 = Slider;
  }
LAB_14bd118d4:
  OnEvent(this,EVar4);
LAB_14bd118dc:
  TMulticastDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
               *)&this->_padding_,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_res10[0])
  ;
  return;
}

// OpenCommonPopup @ 14bd14b10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_M_CommonPopup::OpenCommonPopup(UDS_M_CommonPopup *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_WindowManager *this_00;
  undefined8 *puVar3;
  ulong64 uVar4;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar5;
  UDS_M_CommonPopup *local_res10;
  undefined1 local_88 [8];
  FDelegateAllocation local_80;
  FDestructionSentinel local_70;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> local_58;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2381052233073557458>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_CommonPopup.cpp"
                       ,0x2e,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    local_88 = (undefined1  [8])0x0;
    local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_80.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_80;
    puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_80);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_M_CommonPopup____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_M_CommonPopup *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar3[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_M_CommonPopup *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res10);
      puVar3[4] = OnPopupOpened;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    pTVar5 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       (&local_58,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_88);
    UDS_WindowManager::OpenWindow(this_00,PopupCommon,pTVar5);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
               (FWriteAccessScope *)&local_70);
    if ((local_80.DelegateSize != 0) &&
       (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_80.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_80,0,0,0x10);
      local_80.DelegateSize = 0;
    }
    if (local_70.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
    }
    if (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_80.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_88);
  }
  return;
}

// SetAsset @ 14bd1da60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_M_CommonPopup::SetAsset
          (UDS_M_CommonPopup *this,EDS_CommonPopupContext param_1,int param_2,int param_3,
          int param_4,bool param_5)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  UDS_ModelBase *pUVar6;
  FName *pFVar7;
  longlong *plVar8;
  wchar_t *pwVar9;
  undefined1 *puVar10;
  EDS_CommonPopupContext local_res10 [8];
  undefined1 auStackY_118 [32];
  FWeakObjectPtr local_e8;
  TPairInitializer<EDS_CommonPopupContext_const_&,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>_&&>
  local_e0;
  EDS_CommonPopupContext *local_d0;
  FWeakObjectPtr *local_c8;
  FName local_c0;
  FName local_b8 [2];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_res10[0] = param_1;
  if (*(int *)&(this->ModelMap).field_0x8 != *(int *)&(this->ModelMap).field_0x34) {
    puVar10 = *(undefined1 **)&(this->ModelMap).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->ModelMap).field_0x38;
    }
    iVar4 = *(int *)(puVar10 +
                    ((ulonglong)(*(int *)&(this->ModelMap).field_0x48 - 1) & (ulonglong)param_1) * 4
                    );
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&this->ModelMap;
      do {
        if (*(EDS_CommonPopupContext *)(lVar1 + (longlong)iVar4 * 0x14) == param_1) {
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2381052233073557287>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_CommonPopup.cpp"
                             ,0xd9,"false");
          if (!bVar3) {
            return;
          }
          goto code_r0x00014bd1db7a;
        }
        iVar4 = *(int *)(lVar1 + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = Z_Construct_UClass_UDS_M_CommonAsset_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar5);
  local_a8._8_8_ = this;
  pUVar6 = (UDS_ModelBase *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar8 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (pUVar6 == (UDS_ModelBase *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2381052233073557284>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_CommonPopup.cpp"
                       ,0xdc,"false");
    if (!bVar3) {
      return;
    }
code_r0x00014bd1db7a:
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(int *)&pUVar6[1]._padding_ = param_4;
  *(bool *)((longlong)&pUVar6[1]._padding_ + 4) = param_5;
  *(int *)&pUVar6[1]._padding_ = param_2;
  *(int *)((longlong)&pUVar6[1]._padding_ + 4) = param_3;
  pUVar6->IsDirty = true;
  pUVar6->ViewModelTemplateKey = W_CommonAsset;
  UDS_ModelBase::AddChildModelInternal((UDS_ModelBase *)this,pUVar6);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  local_e8.ObjectIndex = 0;
  local_e8.ObjectSerialNumber = 0;
  local_e0.Value = (TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr> *)pUVar6;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  FWeakObjectPtr::operator=(&local_e8,(FObjectPtr)&local_e0.Value);
  local_d0 = local_res10;
  local_c8 = &local_e8;
  TSet<TTuple<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_EDS_CommonPopupContext_const_&,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>_&&>_>
            (&this->ModelMap,&local_e0,(bool *)&local_d0);
  if (local_res10[0] == Asset01) {
    pwVar9 = L"DS_VM_CommonAsset1";
    pFVar7 = local_b8;
  }
  else {
    if (local_res10[0] != Asset02) goto LAB_14bd1dc9c;
    pwVar9 = L"DS_VM_CommonAsset2";
    pFVar7 = &local_c0;
  }
  pFVar7 = ::FName::FName(pFVar7,pwVar9);
  pUVar6->ViewModelName = *pFVar7;
LAB_14bd1dc9c:
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// SetButton @ 14bd1dce0

void __thiscall
UDS_M_CommonPopup::SetButton
          (UDS_M_CommonPopup *this,EDS_CommonPopupContext param_1,EDS_StringTableType param_2,
          int param_3,bool param_4)

{
  longlong lVar1;
  code *pcVar2;
  EDS_CommonPopupContext EVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  UDS_ModelBase *pUVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  FName *pFVar10;
  char *pcVar11;
  undefined1 *puVar12;
  TPairInitializer<EDS_CommonPopupContext_const_&,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>_&&>
  local_res8;
  FWeakObjectPtr local_108;
  UDS_M_CommonPopup *local_100;
  UDS_ModelBase *local_f8;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_f0;
  TSharedPtr<FDS_ViewModelContext,1> local_e0;
  TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr> **local_d0;
  FWeakObjectPtr *local_c8;
  FDS_Text local_c0;
  FDestructionSentinel local_70;
  undefined1 *local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  local_res8.Value._0_1_ = param_1;
  if (*(int *)&(this->ModelMap).field_0x8 != *(int *)&(this->ModelMap).field_0x34) {
    puVar12 = *(undefined1 **)&(this->ModelMap).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->ModelMap).field_0x38;
    }
    iVar5 = *(int *)(puVar12 +
                    ((ulonglong)(*(int *)&(this->ModelMap).field_0x48 - 1) & (ulonglong)param_1) * 4
                    );
    if (iVar5 != -1) {
      lVar1 = *(longlong *)&this->ModelMap;
      do {
        if (*(EDS_CommonPopupContext *)(lVar1 + (longlong)iVar5 * 0x14) == param_1) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2381052233073557362>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_CommonPopup.cpp"
                             ,0x8e,"false");
          if (!bVar4) {
            return;
          }
          goto code_r0x00014bd1dd9b;
        }
        iVar5 = *(int *)(lVar1 + 0xc + (longlong)iVar5 * 0x14);
      } while (iVar5 != -1);
    }
  }
  pUVar6 = GetTransientPackageAsObject();
  pUVar7 = (UDS_ModelBase *)NewObject<UDS_M_CommonIconTextButton>(pUVar6);
  if (pUVar7 == (UDS_ModelBase *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2381052233073557359>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_CommonPopup.cpp"
                       ,0x91,"false");
    if (!bVar4) {
      return;
    }
code_r0x00014bd1dd9b:
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_c0.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_c0.StringEnumTableNameID.Number = 0;
  local_c0.TimeExpressionType = None;
  local_c0.IsExpression = false;
  local_c0.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.UniqueString.Data.ArrayNum = 0;
  local_c0.UniqueString.Data.ArrayMax = 0;
  local_c0.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.FormatArgs.ArrayNum = 0;
  local_c0.FormatArgs.ArrayMax = 0;
  local_c0.DateTime.Ticks = 0;
  local_c0.TimeSpan.Ticks = 0;
  local_c0.StringTableType = param_2;
  local_c0.StringTableID = (longlong)param_3;
  FDS_DataContainer::SetData<FDS_Text,enum_EDS_CommonIconTextButtonData>
            (&pUVar7->DataContainer,ButtonText,&local_c0);
  FDS_DataContainer::SetData<bool,enum_EDS_CommonIconTextButtonData>
            (&pUVar7->DataContainer,IsDisabled,param_4);
  puVar8 = (undefined8 *)(**(code **)(pUVar7->_padding_ + 0x310))(pUVar7,local_38);
  local_e0.Object = (FDS_ViewModelContext *)*puVar8;
  local_e0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar8[1];
  if (local_e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_CommonIconTextButton>(&local_f0,&local_e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  if ((local_f0.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EVar3 = (EDS_CommonPopupContext)local_res8.Value;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(local_f0.Object)->OnClickDelegate,(FWriteAccessScope *)&local_70);
  local_58 = &((local_f0.Object)->OnClickDelegate).field_0x8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_58);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy__H__6B_
    ;
    *(uint *)(puVar8 + 1) = (uint)EVar3;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_M_CommonPopup____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy__H__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_M_CommonPopup *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar8[3] = 0;
    local_100 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_M_CommonPopup *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_100);
    puVar8[4] = OnClickedButton;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  if ((EDS_CommonPopupContext)local_res8.Value == ButtonCancel) {
    pcVar11 = "DS_VM_CommonIconTextButtonCancel";
    pFVar10 = &local_40;
  }
  else if ((EDS_CommonPopupContext)local_res8.Value == ButtonConfirm) {
    pcVar11 = "DS_VM_CommonIconTextButtonConfirm";
    pFVar10 = &local_48;
  }
  else {
    if ((EDS_CommonPopupContext)local_res8.Value != ButtonFunction) goto LAB_14bd1df9c;
    pcVar11 = "DS_VM_CommonIconTextButtonFunction";
    pFVar10 = &local_50;
  }
  pFVar10 = ::FName::FName(pFVar10,pcVar11);
  pUVar7->ViewModelName = *pFVar10;
LAB_14bd1df9c:
  UDS_ModelBase::AddChildModelInternal((UDS_ModelBase *)this,pUVar7);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  local_108.ObjectIndex = 0;
  local_108.ObjectSerialNumber = 0;
  local_f8 = pUVar7;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  FWeakObjectPtr::operator=(&local_108,(FObjectPtr)&local_f8);
  local_d0 = &local_res8.Value;
  local_c8 = &local_108;
  TSet<TTuple<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_EDS_CommonPopupContext_const_&,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>_&&>_>
            (&this->ModelMap,&local_res8,(bool *)&local_d0);
  *(undefined1 *)&this->_padding_ = 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f0.SharedReferenceCount.ReferenceController);
  return;
}

// SetCheckText @ 14bd1e3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_M_CommonPopup::SetCheckText(UDS_M_CommonPopup *this,long64 param_1,bool param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UClass *pUVar7;
  UDS_ModelBase *pUVar8;
  FName FVar9;
  FString *pFVar10;
  undefined1 *puVar11;
  longlong *plVar12;
  int iVar13;
  undefined1 auStackY_158 [32];
  undefined1 local_128 [8];
  FString local_120;
  FString local_110;
  FWeakObjectPtr local_100;
  TPairInitializer<EDS_CommonPopupContext_&&,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>_&&>
  local_f8;
  undefined1 *local_e8;
  FWeakObjectPtr *local_e0;
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (*(int *)&(this->ModelMap).field_0x8 != *(int *)&(this->ModelMap).field_0x34) {
    puVar11 = *(undefined1 **)&(this->ModelMap).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->ModelMap).field_0x38;
    }
    iVar13 = *(int *)(puVar11 + (ulonglong)(*(int *)&(this->ModelMap).field_0x48 - 1U & 9) * 4);
    if (iVar13 != -1) {
      lVar1 = *(longlong *)&this->ModelMap;
      do {
        if (*(char *)(lVar1 + (longlong)iVar13 * 0x14) == '\t') {
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2381052233073557258>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_CommonPopup.cpp"
                             ,0xf6,"false");
          if (!bVar5) {
            return;
          }
          goto code_r0x00014bd1e4bd;
        }
        iVar13 = *(int *)(lVar1 + 0xc + (longlong)iVar13 * 0x14);
      } while (iVar13 != -1);
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar7 = Z_Construct_UClass_UDS_M_Common_Check_Text_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar7);
  local_c8._8_8_ = this;
  pUVar8 = (UDS_ModelBase *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar12 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (pUVar8 == (UDS_ModelBase *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2381052233073557255>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_CommonPopup.cpp"
                       ,0xf9,"false");
    if (bVar5) {
code_r0x00014bd1e4bd:
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    ::FString::PrintfImpl(&local_120,L"%lld");
    FVar9 = FDS_DataContainer::TransformIndexToName<enum_EDS_CommonCheckTextData>
                      (&pUVar8->DataContainer,(EDS_CommonCheckTextData)local_d8);
    uVar2 = *(undefined8 *)FVar9;
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar10 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)&pUVar8->DataContainer,uVar6 + (int)((ulonglong)uVar2 >> 0x20),
                         (FName *)FVar9);
    if (pFVar10 != &local_120) {
      pFVar3 = (pFVar10->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar10->Data).AllocatorInstance.Data = local_120.Data.AllocatorInstance.Data;
      local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar10->Data).ArrayNum = local_120.Data.ArrayNum;
      (pFVar10->Data).ArrayMax = local_120.Data.ArrayMax;
      local_120.Data.ArrayNum = 0;
      local_120.Data.ArrayMax = 0;
    }
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_110,L"%d");
    FVar9 = FDS_DataContainer::TransformIndexToName<enum_EDS_CommonCheckTextData>
                      (&pUVar8->DataContainer,(EDS_CommonCheckTextData)local_d0);
    uVar2 = *(undefined8 *)FVar9;
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar10 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)&pUVar8->DataContainer,uVar6 + (int)((ulonglong)uVar2 >> 0x20),
                         (FName *)FVar9);
    if (pFVar10 != &local_110) {
      pFVar3 = (pFVar10->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar10->Data).AllocatorInstance.Data = local_110.Data.AllocatorInstance.Data;
      local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar10->Data).ArrayNum = local_110.Data.ArrayNum;
      (pFVar10->Data).ArrayMax = local_110.Data.ArrayMax;
      local_110.Data.ArrayNum = 0;
      local_110.Data.ArrayMax = 0;
    }
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    FDS_DataContainer::SetData<bool,enum_EDS_CommonCheckTextData>
              (&pUVar8->DataContainer,CheckValue,param_2);
    UDS_ModelBase::AddChildModelInternal((UDS_ModelBase *)this,pUVar8);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    local_100.ObjectIndex = 0;
    local_100.ObjectSerialNumber = 0;
    local_f8.Value = (TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr> *)pUVar8;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    FWeakObjectPtr::operator=(&local_100,(FObjectPtr)&local_f8.Value);
    local_e8 = local_128;
    local_128[0] = 9;
    local_e0 = &local_100;
    TSet<TTuple<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<enum_EDS_CommonPopupContext_&&,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>_&&>_>
              (&this->ModelMap,&local_f8,(bool *)&local_e8);
    *(undefined1 *)&this->_padding_ = 1;
  }
  return;
}

// SetDelegate @ 14bd1f0c0

void __thiscall
UDS_M_CommonPopup::SetDelegate
          (UDS_M_CommonPopup *this,EDS_CommonPopupContext param_1,
          TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
          *param_2)

{
  TMap<EDS_CommonPopupContext,TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_CommonPopupContext,TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>,0>_>
  *this_00;
  longlong *plVar1;
  int iVar2;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *this_01;
  undefined1 *puVar3;
  TKeyInitializer<EDS_CommonPopupContext_const_&> local_res8;
  EDS_CommonPopupContext local_res10 [8];
  EDS_CommonPopupContext *local_res18;
  undefined1 local_48 [8];
  ForAnyElementType local_40;
  int local_38;
  FDestructionSentinel local_30;
  
  this_00 = &this->DelegateMap;
  local_res10[0] = param_1;
  if (*(int *)&(this->DelegateMap).field_0x8 != *(int *)&(this->DelegateMap).field_0x34) {
    puVar3 = *(undefined1 **)&(this->DelegateMap).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->DelegateMap).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + ((ulonglong)(*(int *)&(this->DelegateMap).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar2 != -1) {
      do {
        if (*(EDS_CommonPopupContext *)(*(longlong *)this_00 + (longlong)iVar2 * 0x28) == param_1)
        goto LAB_14bd1f145;
        iVar2 = *(int *)(*(longlong *)this_00 + 0x20 + (longlong)iVar2 * 0x28);
      } while (iVar2 != -1);
    }
  }
  local_res18 = local_res10;
  TSet<TTuple<enum_EDS_CommonPopupContext,TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_CommonPopupContext,TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<enum_EDS_CommonPopupContext_const_&>_>
            (this_00,&local_res8,(bool *)&local_res18);
LAB_14bd1f145:
  this_01 = TMapBase<enum_EDS_CommonPopupContext,TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CommonPopupContext,TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>,0>_>
            ::FindChecked(this_00,local_res10[0]);
  if (param_2 != this_01) {
    local_48 = (undefined1  [8])0x0;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
               (FReadAccessScope *)&local_30);
    if ((*(int *)&param_2->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_2->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_48);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_30);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_01,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_30);
    if ((local_38 != 0) && (local_40.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_40.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_30.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
    }
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_48);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// SetItemSlot @ 14bd1fe40

void __thiscall
UDS_M_CommonPopup::SetItemSlot
          (UDS_M_CommonPopup *this,EDS_CommonPopupContext param_1,int param_2,int param_3,
          int param_4,int param_5,EDS_ItemSlotStateType param_6)

{
  longlong lVar1;
  UDS_M_ItemImplBase *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TObjectPtr<UDS_M_ItemImplBase> TVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FName *pFVar8;
  wchar_t *pwVar9;
  undefined1 *puVar10;
  TPairInitializer<EDS_CommonPopupContext_const_&,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>_&&>
  local_res8;
  FWeakObjectPtr local_c8;
  UDS_M_CommonPopup *local_c0;
  UDS_M_CommonPopup *local_b8;
  UDS_M_ItemImplBase *local_b0;
  TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr> **local_a8;
  FWeakObjectPtr *local_a0;
  FDestructionSentinel local_98;
  undefined1 *local_80;
  FDestructionSentinel local_78;
  undefined1 *local_60;
  undefined1 local_58 [8];
  FName local_50;
  FName local_48 [2];
  
  local_res8.Value._0_1_ = param_1;
  if (*(int *)&(this->ModelMap).field_0x8 != *(int *)&(this->ModelMap).field_0x34) {
    puVar10 = *(undefined1 **)&(this->ModelMap).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->ModelMap).field_0x38;
    }
    iVar4 = *(int *)(puVar10 +
                    ((ulonglong)(*(int *)&(this->ModelMap).field_0x48 - 1) & (ulonglong)param_1) * 4
                    );
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&this->ModelMap;
      do {
        if (*(EDS_CommonPopupContext *)(lVar1 + (longlong)iVar4 * 0x14) == param_1) {
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2381052233073557395>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_CommonPopup.cpp"
                             ,0x6d,"false");
          if (!bVar3) {
            return;
          }
          goto code_r0x00014bd1fef1;
        }
        iVar4 = *(int *)(lVar1 + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  TVar5 = DS_ItemDataUtil::CreateItemModel((EDS_ItemSlotStateType)local_58,(uint)param_6);
  this_00 = *(UDS_M_ItemImplBase **)TVar5.field0_0x0;
  if (this_00 == (UDS_M_ItemImplBase *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2381052233073557392>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_CommonPopup.cpp"
                       ,0x70,"false");
    if (!bVar3) {
      return;
    }
code_r0x00014bd1fef1:
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UDS_M_ItemImplBase::SetQuantity(this_00,param_5);
  UDS_M_ItemImplBase::SetSubtract(this_00,false);
  if ((EDS_CommonPopupContext)local_res8.Value == ItemSlot01) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnEventDelegateItemSlot01,(FWriteAccessScope *)&local_78);
    local_60 = &(this->OnEventDelegateItemSlot01).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_60);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__W4EDS_CommonPopupContext____6B_
      ;
      *(EDS_CommonPopupContext *)(puVar6 + 1) = (EDS_CommonPopupContext)local_res8.Value;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_M_CommonPopup____A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__W4EDS_CommonPopupContext____6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_M_CommonPopup *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_b8 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_M_CommonPopup *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_b8);
      puVar6[4] = OnItemSlotEvent;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    UDS_ModelBase::AddUpdateModelDelegate((UDS_ModelBase *)this_00,&this->OnEventDelegateItemSlot01)
    ;
    pwVar9 = L"DS_VM_Item1";
    pFVar8 = local_48;
  }
  else {
    if ((EDS_CommonPopupContext)local_res8.Value != ItemSlot02) goto LAB_14bd2012d;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnEventDelegateItemSlot02,(FWriteAccessScope *)&local_98);
    local_80 = &(this->OnEventDelegateItemSlot02).field_0x8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_80);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__W4EDS_CommonPopupContext____6B_
      ;
      *(EDS_CommonPopupContext *)(puVar6 + 1) = (EDS_CommonPopupContext)local_res8.Value;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_M_CommonPopup____A6AXU__TWeakObjectPtr_VUDS_ModelEventBase__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy__W4EDS_CommonPopupContext____6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_M_CommonPopup *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar6[3] = 0;
      local_c0 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_M_CommonPopup *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_c0);
      puVar6[4] = OnItemSlotEvent;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    UDS_ModelBase::AddUpdateModelDelegate((UDS_ModelBase *)this_00,&this->OnEventDelegateItemSlot02)
    ;
    pwVar9 = L"DS_VM_Item2";
    pFVar8 = &local_50;
  }
  pFVar8 = ::FName::FName(pFVar8,pwVar9);
  this_00->_padding_ = (longlong)*pFVar8;
LAB_14bd2012d:
  UDS_ModelBase::AddChildModelInternal((UDS_ModelBase *)this,(UDS_ModelBase *)this_00);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  local_c8.ObjectIndex = 0;
  local_c8.ObjectSerialNumber = 0;
  local_b0 = this_00;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  FWeakObjectPtr::operator=(&local_c8,(FObjectPtr)&local_b0);
  local_a8 = &local_res8.Value;
  local_a0 = &local_c8;
  TSet<TTuple<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_EDS_CommonPopupContext_const_&,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>_&&>_>
            (&this->ModelMap,&local_res8,(bool *)&local_a8);
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// SetMainContent @ 14bd20210

void __thiscall UDS_M_CommonPopup::SetMainContent(UDS_M_CommonPopup *this,FDS_Text *param_1)

{
  FScriptContainerElement *pFVar1;
  
  FDS_Text::operator=(&this->MainContent,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(param_1->FormatArgs).AllocatorInstance.Data,
             (param_1->FormatArgs).ArrayNum);
  pFVar1 = (param_1->FormatArgs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->UniqueString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// SetProgress @ 14bd205f0

void __thiscall UDS_M_CommonPopup::SetProgress(UDS_M_CommonPopup *this,float param_1,FText *param_2)

{
  uint uVar1;
  longlong lVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  code *pcVar5;
  bool bVar6;
  UDS_M_CommonProgress *pUVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  undefined1 local_68 [4];
  undefined1 local_64 [20];
  undefined1 *local_50;
  undefined1 *local_48;
  
  if (*(int *)&(this->ModelMap).field_0x8 != *(int *)&(this->ModelMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->ModelMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->ModelMap).field_0x38;
    }
    iVar8 = *(int *)(puVar9 + (ulonglong)(*(int *)&(this->ModelMap).field_0x48 - 1U & 6) * 4);
    if (iVar8 != -1) {
      lVar2 = *(longlong *)&this->ModelMap;
      do {
        if (*(char *)(lVar2 + (longlong)iVar8 * 0x14) == '\x06') {
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2381052233073557325>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_CommonPopup.cpp"
                             ,0xb3,"false");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pIVar4 = (param_2->TextData).Reference;
          if (pIVar4 == (ITextData *)0x0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x00014bd206f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((longlong)*pIVar4 + 0x10))();
          return;
        }
        iVar8 = *(int *)(lVar2 + 0xc + (longlong)iVar8 * 0x14);
      } while (iVar8 != -1);
    }
  }
  pUVar7 = NewObject<UDS_M_CommonProgress>((UObject *)this);
  if (pUVar7 == (UDS_M_CommonProgress *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2381052233073557322>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_CommonPopup.cpp"
                       ,0xb6,"false");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    pIVar4 = (param_2->TextData).Reference;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res20);
    }
    uVar1 = param_2->Flags;
    pUVar7->ProgressValue = param_1;
    pIVar3 = (pUVar7->ProgressText).TextData.Reference;
    if (pIVar3 != pIVar4) {
      (pUVar7->ProgressText).TextData.Reference = pIVar4;
      if (pIVar4 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_68);
      }
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
      }
    }
    (pUVar7->ProgressText).Flags = uVar1;
    pUVar7->bIsTickable = false;
    *(undefined1 *)&pUVar7->_padding_ = 1;
    if (pIVar4 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    }
    *(undefined4 *)&pUVar7->_padding_ = 0x19b;
    UDS_ModelBase::AddChildModelInternal((UDS_ModelBase *)this,(UDS_ModelBase *)pUVar7);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    local_64._4_8_ = 0;
    local_64._12_8_ = pUVar7;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)(local_64 + 4),(FObjectPtr)((longlong)local_64 + 0xc));
    local_50 = local_res8;
    local_res8[0] = 6;
    local_48 = local_64 + 4;
    TSet<TTuple<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<enum_EDS_CommonPopupContext_&&,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>_&&>_>
              (&this->ModelMap,
               (TPairInitializer<EDS_CommonPopupContext_&&,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>_&&>
                *)local_64,(bool *)&local_50);
    *(undefined1 *)&this->_padding_ = 1;
  }
  pIVar4 = (param_2->TextData).Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  return;
}

// SetProgressTime @ 14bd209b0

void __thiscall
UDS_M_CommonPopup::SetProgressTime
          (UDS_M_CommonPopup *this,double param_1,double param_2,bool param_3,
          EDS_TimeExpression param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  UDS_M_CommonProgress *this_00;
  int iVar4;
  undefined1 *puVar5;
  undefined1 local_res8 [8];
  TPairInitializer<EDS_CommonPopupContext_&&,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>_&&>
  local_58;
  UDS_M_CommonProgress *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  if (*(int *)&(this->ModelMap).field_0x8 != *(int *)&(this->ModelMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->ModelMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->ModelMap).field_0x38;
    }
    iVar4 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->ModelMap).field_0x48 - 1U & 6) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&this->ModelMap;
      do {
        if (*(char *)(lVar1 + (longlong)iVar4 * 0x14) == '\x06') {
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2381052233073557312>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_CommonPopup.cpp"
                             ,0xc0,"false");
          if (!bVar3) {
            return;
          }
          goto code_r0x00014bd20a66;
        }
        iVar4 = *(int *)(lVar1 + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  this_00 = NewObject<UDS_M_CommonProgress>((UObject *)this);
  if (this_00 == (UDS_M_CommonProgress *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2381052233073557309>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_CommonPopup.cpp"
                       ,0xc3,"false");
    if (bVar3) {
code_r0x00014bd20a66:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    this_00->EndTime = param_2;
    this_00->StartTime = param_1;
    this_00->bIsRemainTime = param_3;
    this_00->IntervalTime = param_2 - param_1;
    this_00->TimeFormat = param_4;
    if (param_2 - param_1 <= 0.0) {
      this_00->bIsTickable = false;
    }
    else {
      this_00->bIsTickable = true;
      UDS_M_CommonProgress::UpdateRemainTime(this_00,false);
    }
    *(undefined4 *)&this_00->_padding_ = 0x19b;
    UDS_ModelBase::AddChildModelInternal((UDS_ModelBase *)this,(UDS_ModelBase *)this_00);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    local_58._4_8_ = 0;
    local_48 = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)((longlong)&local_58.Key + 4),(FObjectPtr)&local_48)
    ;
    local_40 = local_res8;
    local_res8[0] = 6;
    local_38 = (undefined1 *)((longlong)&local_58.Key + 4);
    TSet<TTuple<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<enum_EDS_CommonPopupContext_&&,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>_&&>_>
              (&this->ModelMap,&local_58,(bool *)&local_40);
    *(undefined1 *)&this->_padding_ = 1;
  }
  return;
}

// SetSelectedItemSlotType @ 14bd21110

void __thiscall
UDS_M_CommonPopup::SetSelectedItemSlotType(UDS_M_CommonPopup *this,EDS_CommonPopupContext param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  TMap<EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>,0>_>
  *this_00;
  FWeakObjectPtr *pFVar3;
  UDS_M_ItemImplBase *pUVar4;
  UClass *pUVar5;
  undefined1 *puVar6;
  int iVar7;
  
  this_00 = &this->ModelMap;
  this->SelectedItemSlotPopupContext = param_1;
  puVar1 = &(this->ModelMap).field_0x38;
  puVar2 = &(this->ModelMap).field_0x48;
  if (*(int *)&(this->ModelMap).field_0x8 != *(int *)&(this->ModelMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->ModelMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = puVar1;
    }
    iVar7 = *(int *)(puVar6 + (ulonglong)(*(int *)puVar2 - 1U & 3) * 4);
    if (iVar7 != -1) {
      do {
        if (*(char *)(*(longlong *)this_00 + (longlong)iVar7 * 0x14) == '\x03') {
          if (iVar7 != -1) {
            pFVar3 = &TMapBase<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>,0>_>
                      ::FindChecked(this_00,ItemSlot01)->WeakPtr;
            pUVar4 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(pFVar3);
            if (pUVar4 != (UDS_M_ItemImplBase *)0x0) {
              pUVar5 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
              iVar7 = (int)pUVar5->_padding_;
              if ((iVar7 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
                  &pUVar5->_padding_)) {
                UDS_M_ItemImplBase::SetSelected
                          (pUVar4,this->SelectedItemSlotPopupContext == ItemSlot01);
              }
            }
          }
          break;
        }
        iVar7 = *(int *)(*(longlong *)this_00 + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  if (*(int *)&(this->ModelMap).field_0x8 != *(int *)&(this->ModelMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->ModelMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = puVar1;
    }
    iVar7 = *(int *)(puVar6 + (ulonglong)(*(int *)puVar2 - 1U & 4) * 4);
    if (iVar7 != -1) {
      do {
        if (*(char *)(*(longlong *)this_00 + (longlong)iVar7 * 0x14) == '\x04') {
          pFVar3 = &TMapBase<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>,0>_>
                    ::FindChecked(this_00,ItemSlot02)->WeakPtr;
          pUVar4 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(pFVar3);
          if (pUVar4 != (UDS_M_ItemImplBase *)0x0) {
            pUVar5 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
            iVar7 = (int)pUVar5->_padding_;
            if ((iVar7 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
                &pUVar5->_padding_)) {
              UDS_M_ItemImplBase::SetSelected
                        (pUVar4,this->SelectedItemSlotPopupContext == ItemSlot02);
            }
          }
          break;
        }
        iVar7 = *(int *)(*(longlong *)this_00 + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// SetSlider @ 14bd21300

void __thiscall
UDS_M_CommonPopup::SetSlider
          (UDS_M_CommonPopup *this,int param_1,int param_2,int param_3,FText *param_4,int param_5)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  UDS_ModelBase *pUVar4;
  FString *pFVar5;
  int iVar6;
  ITextData *pIVar7;
  undefined1 *puVar8;
  undefined1 local_res8 [8];
  undefined1 local_74 [20];
  FText local_60;
  undefined1 *local_50;
  undefined1 *local_48;
  FString local_40;
  
  if (*(int *)&(this->ModelMap).field_0x8 != *(int *)&(this->ModelMap).field_0x34) {
    puVar8 = *(undefined1 **)&(this->ModelMap).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->ModelMap).field_0x38;
    }
    iVar6 = *(int *)(puVar8 + (ulonglong)(*(int *)&(this->ModelMap).field_0x48 - 1U & 5) * 4);
    if (iVar6 != -1) {
      lVar1 = *(longlong *)&this->ModelMap;
      do {
        if (*(char *)(lVar1 + (longlong)iVar6 * 0x14) == '\x05') {
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2381052233073557299>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_CommonPopup.cpp"
                             ,0xcd,"false");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pIVar7 = (param_4->TextData).Reference;
          if (pIVar7 == (ITextData *)0x0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x00014bd21412. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((longlong)*pIVar7 + 0x10))();
          return;
        }
        iVar6 = *(int *)(lVar1 + 0xc + (longlong)iVar6 * 0x14);
      } while (iVar6 != -1);
    }
  }
  pUVar4 = (UDS_ModelBase *)NewObject<UDS_M_CommonQuantityControl>((UObject *)this);
  if (pUVar4 == (UDS_ModelBase *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2381052233073557296>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_CommonPopup.cpp"
                       ,0xd0,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar7 = (param_4->TextData).Reference;
  }
  else {
    local_60.TextData.Reference = (param_4->TextData).Reference;
    if (local_60.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_60.TextData.Reference + 8))();
    }
    local_60.Flags = param_4->Flags;
    FDS_DataContainer::SetData<float,enum_EDS_CommonQuantityControlData>
              (&pUVar4->DataContainer,MinValue,(float)param_1);
    FDS_DataContainer::SetData<float,enum_EDS_CommonQuantityControlData>
              (&pUVar4->DataContainer,MaxValue,(float)param_2);
    FDS_DataContainer::SetData<float,enum_EDS_CommonQuantityControlData>
              (&pUVar4->DataContainer,Quantity,(float)param_3);
    FDS_DataContainer::SetData<float,enum_EDS_CommonQuantityControlData>
              (&pUVar4->DataContainer,StepQuantity,(float)param_5);
    pFVar5 = FText::ToString(&local_60);
    pFVar5 = ::FString::FString(&local_40,pFVar5);
    FDS_DataContainer::SetData<FString,enum_EDS_CommonQuantityControlData>
              (&pUVar4->DataContainer,QuantityName,pFVar5);
    pUVar4->IsDirty = true;
    if (local_60.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
    }
    UDS_ModelBase::AddChildModelInternal((UDS_ModelBase *)this,pUVar4);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    local_74._4_8_ = 0;
    local_74._12_8_ = pUVar4;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    FWeakObjectPtr::operator=
              ((FWeakObjectPtr *)(local_74 + 4),(FObjectPtr)((longlong)local_74 + 0xc));
    local_50 = local_res8;
    local_res8[0] = 5;
    local_48 = local_74 + 4;
    TSet<TTuple<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<enum_EDS_CommonPopupContext_&&,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>_&&>_>
              (&this->ModelMap,
               (TPairInitializer<EDS_CommonPopupContext_&&,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>_&&>
                *)local_74,(bool *)&local_50);
    *(undefined1 *)&this->_padding_ = 1;
    pIVar7 = (param_4->TextData).Reference;
  }
  if (pIVar7 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar7 + 0x10))();
  }
  return;
}

// SetSubContent01 @ 14bd21fa0

void __thiscall UDS_M_CommonPopup::SetSubContent01(UDS_M_CommonPopup *this,FDS_Text *param_1)

{
  FScriptContainerElement *pFVar1;
  
  FDS_Text::operator=(&this->SubContent01,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(param_1->FormatArgs).AllocatorInstance.Data,
             (param_1->FormatArgs).ArrayNum);
  pFVar1 = (param_1->FormatArgs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->UniqueString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// SetSubContent02 @ 14bd22000

void __thiscall UDS_M_CommonPopup::SetSubContent02(UDS_M_CommonPopup *this,FDS_Text *param_1)

{
  FScriptContainerElement *pFVar1;
  
  FDS_Text::operator=(&this->SubContent02,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(param_1->FormatArgs).AllocatorInstance.Data,
             (param_1->FormatArgs).ArrayNum);
  pFVar1 = (param_1->FormatArgs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->UniqueString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// SetTitle @ 14bd229d0

void __thiscall UDS_M_CommonPopup::SetTitle(UDS_M_CommonPopup *this,FDS_Text *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FDS_ViewModelContext *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  UScriptStruct *pUVar7;
  UDS_ViewModelContextManager *this_00;
  TSharedPtr<FDS_ViewModelContext,1> *pTVar8;
  int iVar9;
  TReferenceControllerBase<1> *pTVar10;
  undefined1 *puVar11;
  undefined1 local_res8 [8];
  TPairInitializer<EDS_CommonPopupContext_&&,TSharedPtr<FDS_ViewModelContext,1>_&&> local_res18;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  FDS_ViewModelContext *local_68;
  TReferenceControllerBase<1> *local_60;
  TSharedPtr<FDS_ViewModelContext_PopupTitle,1> local_58;
  undefined1 *local_48;
  FDS_ViewModelContext **local_40;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  
  if (*(int *)&(this->ContextMap).field_0x8 != *(int *)&(this->ContextMap).field_0x34) {
    puVar11 = *(undefined1 **)&(this->ContextMap).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->ContextMap).field_0x38;
    }
    iVar9 = *(int *)(puVar11 + (ulonglong)(*(int *)&(this->ContextMap).field_0x48 - 1U & 1) * 4);
    if (iVar9 != -1) {
      lVar1 = *(longlong *)&this->ContextMap;
      do {
        if (*(char *)((longlong)iVar9 * 0x20 + lVar1) == '\x01') goto LAB_14bd22bdc;
        iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + lVar1);
      } while (iVar9 != -1);
    }
  }
  pFVar5 = ::operator_new(0x70);
  if (pFVar5 == (FDS_ViewModelContext *)0x0) {
    pFVar5 = (FDS_ViewModelContext *)0x0;
  }
  else {
    *(undefined4 *)&pFVar5->field_0x1c = 0;
    *(undefined4 *)((longlong)&pFVar5[1]._padding_ + 1) = 0;
    *(undefined2 *)((longlong)&pFVar5[1]._padding_ + 5) = 0;
    *(undefined1 *)((longlong)&pFVar5[1]._padding_ + 7) = 0;
    *(undefined2 *)((longlong)&pFVar5[2].DerivedStaticStruct + 5) = 0;
    *(undefined1 *)((longlong)&pFVar5[2].DerivedStaticStruct + 7) = 0;
    pFVar5->_padding_ = (longlong)&___7FDS_ViewModelContext_PopupTitle__6B_;
    pFVar5->DerivedStaticStruct = (UStruct *)0x0;
    (pFVar5->ViewModelName).ComparisonIndex = 0;
    (pFVar5->ViewModelName).Number = 0;
    pFVar5->ViewModelTemplateKey = None;
    *(undefined1 *)&pFVar5[1]._padding_ = 0;
    pFVar5[1].DerivedStaticStruct = (UStruct *)0x0;
    pFVar5[1].ViewModelName.ComparisonIndex = 0;
    pFVar5[1].ViewModelName.Number = 0;
    *(undefined8 *)&pFVar5[1].ViewModelTemplateKey = 0;
    pFVar5[2]._padding_ = 0;
    *(undefined4 *)&pFVar5[2].DerivedStaticStruct = 0;
    *(undefined1 *)((longlong)&pFVar5[2].DerivedStaticStruct + 4) = 0;
    pFVar5[2].ViewModelName.ComparisonIndex = 0;
    pFVar5[2].ViewModelName.Number = 0;
    *(undefined8 *)&pFVar5[2].ViewModelTemplateKey = 0;
    pFVar5[3]._padding_ = 0;
    pFVar5[3].DerivedStaticStruct = (UStruct *)0x0;
  }
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = ::operator_new(0x20);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)ViewModelContextDeleter;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_PopupTitle__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    *(FDS_ViewModelContext **)&pTVar6[1].SharedReferenceCount = pFVar5;
    pTVar10 = pTVar6;
  }
  if ((pFVar5 == (FDS_ViewModelContext *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar7 = FDS_ViewModelContext_PopupTitle::StaticStruct();
  pFVar5->DerivedStaticStruct = (UStruct *)pUVar7;
  this_00 = UDS_ViewModelContextManager::GetInst();
  if (this_00 != (UDS_ViewModelContextManager *)0x0) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_78.Object = pFVar5;
    local_78.SharedReferenceCount.ReferenceController = pTVar10;
    UDS_ViewModelContextManager::RegisterContext(this_00,&local_78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48 = local_res8;
  local_res8[0] = 1;
  local_40 = &local_68;
  local_68 = pFVar5;
  local_60 = pTVar10;
  TSet<TTuple<enum_EDS_CommonPopupContext,TSharedPtr<FDS_ViewModelContext,1>_>,TDefaultMapHashableKeyFuncs<enum_EDS_CommonPopupContext,TSharedPtr<FDS_ViewModelContext,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_CommonPopupContext_&&,TSharedPtr<FDS_ViewModelContext,1>_&&>_>
            (&this->ContextMap,&local_res18,(bool *)&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
LAB_14bd22bdc:
  pTVar8 = TMapBase<enum_EDS_CommonPopupContext,TSharedPtr<FDS_ViewModelContext,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CommonPopupContext,TSharedPtr<FDS_ViewModelContext,1>,0>_>
           ::FindChecked(&this->ContextMap,Title);
  local_38.Object = pTVar8->Object;
  local_38.SharedReferenceCount.ReferenceController =
       (pTVar8->SharedReferenceCount).ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_PopupTitle>(&local_58,&local_38);
  if (local_58.Object == (FDS_ViewModelContext_PopupTitle *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2381052233073557423>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_CommonPopup.cpp"
                       ,0x51,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    *(undefined4 *)&(local_58.Object)->_padding_ = 0x195;
    FDS_Text::operator=(&(local_58.Object)->Title,param_1);
    *(undefined1 *)&this->_padding_ = 1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(param_1->FormatArgs).AllocatorInstance.Data,
             (param_1->FormatArgs).ArrayNum);
  pFVar2 = (param_1->FormatArgs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_1->UniqueString).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// UpdateAssetValue1 @ 14bd26d10

void __thiscall
UDS_M_CommonPopup::UpdateAssetValue1
          (UDS_M_CommonPopup *this,EDS_CommonPopupContext param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FWeakObjectPtr *this_00;
  UObject *pUVar5;
  UClass *pUVar6;
  undefined1 *puVar7;
  
  if (*(int *)&(this->ModelMap).field_0x8 != *(int *)&(this->ModelMap).field_0x34) {
    puVar7 = *(undefined1 **)&(this->ModelMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->ModelMap).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + ((ulonglong)(*(int *)&(this->ModelMap).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&this->ModelMap;
      do {
        if (*(EDS_CommonPopupContext *)(lVar1 + (longlong)iVar4 * 0x14) == param_1) {
          this_00 = &TMapBase<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>,0>_>
                     ::FindChecked(&this->ModelMap,param_1)->WeakPtr;
          pUVar5 = FWeakObjectPtr::Get(this_00);
          if (pUVar5 != (UObject *)0x0) {
            pUVar6 = Z_Construct_UClass_UDS_M_CommonAsset_NoRegister();
            iVar4 = (int)pUVar6->_padding_;
            if ((iVar4 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
                &pUVar6->_padding_)) goto LAB_14bd26df3;
          }
          pUVar5 = (UObject *)0x0;
LAB_14bd26df3:
          *(int *)&pUVar5[10].field_0x1c = param_2;
          pUVar5[5].field_0x18 = 1;
          *(undefined1 *)&this->_padding_ = 1;
          return;
        }
        iVar4 = *(int *)(lVar1 + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2381052233073557198>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_CommonPopup.cpp"
                     ,0x132,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// UpdateProgress @ 14bd28860

void __thiscall
UDS_M_CommonPopup::UpdateProgress(UDS_M_CommonPopup *this,float param_1,FText *param_2)

{
  uint uVar1;
  longlong lVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  code *pcVar5;
  bool bVar6;
  FWeakObjectPtr *this_00;
  UObject *pUVar7;
  UClass *pUVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  FWeakObjectPtr local_48;
  undefined8 local_40 [3];
  
  if (*(int *)&(this->ModelMap).field_0x8 != *(int *)&(this->ModelMap).field_0x34) {
    puVar10 = *(undefined1 **)&(this->ModelMap).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->ModelMap).field_0x38;
    }
    iVar9 = *(int *)(puVar10 + (ulonglong)(*(int *)&(this->ModelMap).field_0x48 - 1U & 6) * 4);
    if (iVar9 != -1) {
      lVar2 = *(longlong *)&this->ModelMap;
      do {
        if (*(char *)(lVar2 + (longlong)iVar9 * 0x14) == '\x06') {
          this_00 = &TMapBase<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>,0>_>
                     ::FindChecked(&this->ModelMap,Progress)->WeakPtr;
          pUVar7 = FWeakObjectPtr::Get(this_00);
          if (pUVar7 == (UObject *)0x0) {
LAB_14bd28963:
            pUVar7 = (UObject *)0x0;
          }
          else {
            pUVar8 = Z_Construct_UClass_UDS_M_CommonProgress_NoRegister();
            iVar9 = (int)pUVar8->_padding_;
            if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar9) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar9 * 8) !=
                &pUVar8->_padding_)) goto LAB_14bd28963;
          }
          pIVar3 = (param_2->TextData).Reference;
          if (pIVar3 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
          }
          uVar1 = param_2->Flags;
          *(float *)&pUVar7[0xb].field_0x20 = param_1;
          pIVar4 = *(ITextData **)&pUVar7[0xb].field_0x10;
          if (pIVar4 != pIVar3) {
            *(ITextData **)&pUVar7[0xb].field_0x10 = pIVar3;
            if (pIVar3 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res20);
            }
            if (pIVar4 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
            }
          }
          *(uint *)&pUVar7[0xb].field_0x18 = uVar1;
          lVar2 = *(longlong *)pUVar7;
          pUVar7[5].field_0x18 = 1;
          local_48.ObjectIndex = 0;
          local_48.ObjectSerialNumber = 0;
          local_40[0] = 0;
          pcVar5 = *(code **)(lVar2 + 0x2e0);
          FWeakObjectPtr::operator=(&local_48,(FObjectPtr)local_40);
          (*pcVar5)(pUVar7,local_48,0);
          if (pIVar3 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
          }
          *(undefined1 *)&this->_padding_ = 1;
          goto LAB_14bd288f3;
        }
        iVar9 = *(int *)(lVar2 + 0xc + (longlong)iVar9 * 0x14);
      } while (iVar9 != -1);
    }
  }
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2381052233073557189>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_CommonPopup.cpp"
                     ,0x13b,"false");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14bd288f3:
  pIVar3 = (param_2->TextData).Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  return;
}

// UpdateSlider @ 14bd298f0

void __thiscall
UDS_M_CommonPopup::UpdateSlider(UDS_M_CommonPopup *this,int param_1,int param_2,int param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FWeakObjectPtr *this_00;
  UDS_M_CommonQuantityControl *this_01;
  UClass *pUVar4;
  FText *pFVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 local_res8 [8];
  FText local_28;
  
  if (*(int *)&(this->ModelMap).field_0x8 != *(int *)&(this->ModelMap).field_0x34) {
    puVar7 = *(undefined1 **)&(this->ModelMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->ModelMap).field_0x38;
    }
    iVar6 = *(int *)(puVar7 + (ulonglong)(*(int *)&(this->ModelMap).field_0x48 - 1U & 5) * 4);
    if (iVar6 != -1) {
      lVar1 = *(longlong *)&this->ModelMap;
      do {
        if (*(char *)(lVar1 + (longlong)iVar6 * 0x14) == '\x05') {
          this_00 = &TMapBase<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>,0>_>
                     ::FindChecked(&this->ModelMap,Slider)->WeakPtr;
          this_01 = (UDS_M_CommonQuantityControl *)FWeakObjectPtr::Get(this_00);
          if (this_01 != (UDS_M_CommonQuantityControl *)0x0) {
            pUVar4 = Z_Construct_UClass_UDS_M_CommonQuantityControl_NoRegister();
            iVar6 = (int)pUVar4->_padding_;
            if ((iVar6 <= *(int *)(*(longlong *)&this_01->field_0x10 + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&this_01->field_0x10 + 0x30) + (longlong)iVar6 * 8) ==
                &pUVar4->_padding_)) goto LAB_14bd299dc;
          }
          this_01 = (UDS_M_CommonQuantityControl *)0x0;
LAB_14bd299dc:
          pFVar5 = FText::GetEmpty();
          local_28.TextData.Reference = (pFVar5->TextData).Reference;
          if (local_28.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_28.TextData.Reference + 8))
                      (local_28.TextData.Reference,local_res8);
          }
          local_28.Flags = pFVar5->Flags;
          UDS_M_CommonQuantityControl::Set
                    (this_01,(float)param_3,(float)param_1,(float)param_2,__real_3f800000,&local_28)
          ;
          *(undefined1 *)&this->_padding_ = 1;
          return;
        }
        iVar6 = *(int *)(lVar1 + 0xc + (longlong)iVar6 * 0x14);
      } while (iVar6 != -1);
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2381052233073557180>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_CommonPopup.cpp"
                     ,0x144,"false");
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

