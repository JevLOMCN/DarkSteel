// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 25

// StaticClass @ 14b479d20

UClass * __cdecl UDS_ContentsController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ContentsController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ContentsController",
               &Z_Registration_Info_UClass_UDS_ContentsController.InnerSingleton,
               StaticRegisterNativesUDS_ContentsController,0x148,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ContentsController>,
               InternalVTableHelperCtorCaller<UDS_ContentsController>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ContentsController.InnerSingleton;
}

// UDS_ContentsController @ 14b47d170

UDS_ContentsController * __thiscall
UDS_ContentsController::UDS_ContentsController(UDS_ContentsController *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ContentsController__6B_;
  *(undefined8 *)&this->ViewModelTemplateKeyMap = 0;
  *(undefined8 *)&(this->ViewModelTemplateKeyMap).field_0x8 = 0;
  *(undefined8 *)&(this->ViewModelTemplateKeyMap).field_0x20 = 0;
  *(undefined4 *)&(this->ViewModelTemplateKeyMap).field_0x28 = 0;
  *(undefined4 *)&(this->ViewModelTemplateKeyMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ViewModelTemplateKeyMap).field_0x34 = 0;
  *(undefined4 *)&(this->ViewModelTemplateKeyMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ViewModelTemplateKeyMap).field_0x40 = 0;
  *(undefined4 *)&(this->ViewModelTemplateKeyMap).field_0x48 = 0;
  *(undefined8 *)&this->HistoryDataMap = 0;
  *(undefined8 *)&(this->HistoryDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->HistoryDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->HistoryDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->HistoryDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->HistoryDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HistoryDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->HistoryDataMap).field_0x48 = 0;
  (this->TabFrameWidget).field0_0x0.DebugPtr = (UDS_W_B_ContentsFrame *)0x0;
  *(undefined8 *)&this->ContentFrameDestructEvent = 0;
  *(undefined8 *)&(this->ContentFrameDestructEvent).field_0x8 = 0;
  *(undefined4 *)&(this->ContentFrameDestructEvent).field_0x10 = 0;
  *(undefined8 *)&this->ContentArgsMap = 0;
  *(undefined8 *)&(this->ContentArgsMap).field_0x8 = 0;
  *(undefined8 *)&(this->ContentArgsMap).field_0x20 = 0;
  *(undefined4 *)&(this->ContentArgsMap).field_0x28 = 0;
  *(undefined4 *)&(this->ContentArgsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ContentArgsMap).field_0x34 = 0;
  *(undefined4 *)&(this->ContentArgsMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ContentArgsMap).field_0x40 = 0;
  *(undefined4 *)&(this->ContentArgsMap).field_0x48 = 0;
  this->ArgsKey = 1;
  return this;
}

// UDS_ContentsController @ 14b47d270

UDS_ContentsController * __thiscall
UDS_ContentsController::UDS_ContentsController
          (UDS_ContentsController *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ContentsController__6B_;
  *(undefined8 *)&this->ViewModelTemplateKeyMap = 0;
  *(undefined8 *)&(this->ViewModelTemplateKeyMap).field_0x8 = 0;
  *(undefined8 *)&(this->ViewModelTemplateKeyMap).field_0x20 = 0;
  *(undefined4 *)&(this->ViewModelTemplateKeyMap).field_0x28 = 0;
  *(undefined4 *)&(this->ViewModelTemplateKeyMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ViewModelTemplateKeyMap).field_0x34 = 0;
  *(undefined4 *)&(this->ViewModelTemplateKeyMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ViewModelTemplateKeyMap).field_0x40 = 0;
  *(undefined4 *)&(this->ViewModelTemplateKeyMap).field_0x48 = 0;
  *(undefined8 *)&this->HistoryDataMap = 0;
  *(undefined8 *)&(this->HistoryDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->HistoryDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->HistoryDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->HistoryDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->HistoryDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HistoryDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->HistoryDataMap).field_0x48 = 0;
  (this->TabFrameWidget).field0_0x0.DebugPtr = (UDS_W_B_ContentsFrame *)0x0;
  *(undefined8 *)&this->ContentFrameDestructEvent = 0;
  *(undefined8 *)&(this->ContentFrameDestructEvent).field_0x8 = 0;
  *(undefined4 *)&(this->ContentFrameDestructEvent).field_0x10 = 0;
  *(undefined8 *)&this->ContentArgsMap = 0;
  *(undefined8 *)&(this->ContentArgsMap).field_0x8 = 0;
  *(undefined8 *)&(this->ContentArgsMap).field_0x20 = 0;
  *(undefined4 *)&(this->ContentArgsMap).field_0x28 = 0;
  *(undefined4 *)&(this->ContentArgsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ContentArgsMap).field_0x34 = 0;
  *(undefined4 *)&(this->ContentArgsMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ContentArgsMap).field_0x40 = 0;
  *(undefined4 *)&(this->ContentArgsMap).field_0x48 = 0;
  this->ArgsKey = 1;
  return this;
}

// ~UDS_ContentsController @ 14b47dc20

void __thiscall UDS_ContentsController::~UDS_ContentsController(UDS_ContentsController *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_ContentsController__6B_;
  *(undefined4 *)&(this->ContentArgsMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ContentArgsMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_ContentArguments>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_ContentArguments>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_ContentArguments>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ContentArgsMap);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ContentFrameDestructEvent);
  pvVar1 = *(void **)&(this->ContentFrameDestructEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ContentFrameDestructEvent);
  *(undefined4 *)&(this->HistoryDataMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->HistoryDataMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_ContentsTabFrameType,FDS_HistoryData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_ContentsTabFrameType,FDS_HistoryData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->HistoryDataMap);
  *(undefined4 *)&(this->ViewModelTemplateKeyMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ViewModelTemplateKeyMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ViewModelTemplateKeyMap);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b47ed00

UClass * __cdecl UDS_ContentsController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ContentsController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ContentsController",
               &Z_Registration_Info_UClass_UDS_ContentsController.InnerSingleton,
               StaticRegisterNativesUDS_ContentsController,0x148,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ContentsController>,
               InternalVTableHelperCtorCaller<UDS_ContentsController>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ContentsController.InnerSingleton;
}

// StaticRegisterNativesUDS_ContentsController @ 14b47f570

void __cdecl UDS_ContentsController::StaticRegisterNativesUDS_ContentsController(void)

{
  return;
}

// BindModel @ 14b8b6b00

void __thiscall UDS_ContentsController::BindModel(UDS_ContentsController *this)

{
  UDS_HistoryManager *pUVar1;
  
  pUVar1 = UDS_HistoryManager::GetInst();
  if (pUVar1 != (UDS_HistoryManager *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(FDS_HistoryData_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_ContentsController>
              ((TMulticastDelegateRegistration<void___cdecl(FDS_HistoryData_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar1->OnHistoryBackEvent,(UDS_ContentsController *)&stack0x00000010,
               (pmf_35984de9)this);
  }
  return;
}

// CloseContent @ 14b8b8be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_ContentsController::CloseContent(UDS_ContentsController *this,int *param_1)

{
  bool bVar1;
  char cVar2;
  FDS_ContentsTabFrameTableRow *pFVar3;
  UDS_LogManager *pUVar4;
  UDS_WindowManager *this_00;
  UObject *pUVar5;
  undefined1 auStackY_188 [32];
  float local_148;
  uint local_144;
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pFVar3 = FDS_ContentsTabFrameTableRow::Get((longlong)*param_1,true);
  if (pFVar3 == (FDS_ContentsTabFrameTableRow *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_ContentsController::CloseContent",0x24,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0xc6,
                 L"contentsTabFrameTableRow is nullptr. ContentsTabFrameID - %d");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else if (this->CurrentTabFrameID == *param_1) {
    this_00 = UDS_WindowManager::GetInst();
    if (this_00 != (UDS_WindowManager *)0x0) {
      UDS_WindowManager::GetWindowInfo(this_00,(EDS_WindowWidget)&local_140);
      bVar1 = FWeakObjectPtr::IsValid(&local_140);
      if (bVar1) {
        pUVar5 = FWeakObjectPtr::Get(&local_140);
        cVar2 = (**(code **)(*(longlong *)pUVar5 + 0x2c8))(pUVar5);
        if (cVar2 != '\0') {
          UDS_W_B_ContentsFrame::RemoveChildWidget((this->TabFrameWidget).field0_0x0.DebugPtr);
          local_148 = 0.0;
          local_144 = 0;
          UDS_WindowManager::CloseWindow(this_00,ContentsTabFrame,&local_144,&local_148);
        }
      }
    }
  }
  return;
}

// CloseContent @ 14b8b8d60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ContentsController::CloseContent(UDS_ContentsController *this)

{
  UDS_W_B_ContentsFrame *this_00;
  bool bVar1;
  char cVar2;
  UDS_WindowManager *this_01;
  UObject *pUVar3;
  float local_res8 [2];
  uint local_res10 [2];
  FWeakObjectPtr local_res18;
  
  if ((this->CurrentTabFrameID != None) &&
     (this_01 = UDS_WindowManager::GetInst(), this_01 != (UDS_WindowManager *)0x0)) {
    UDS_WindowManager::GetWindowInfo(this_01,(EDS_WindowWidget)&local_res18);
    bVar1 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&local_res18);
      cVar2 = (**(code **)(*(longlong *)pUVar3 + 0x2c8))(pUVar3);
      if (cVar2 != '\0') {
        this_00 = (this->TabFrameWidget).field0_0x0.DebugPtr;
        local_res8[0] = (float)this_00->ChildWindowWidget;
        UDS_UserWidget::UnbindInputAction((UDS_UserWidget *)this_00,(EDS_WindowWidget *)local_res8);
        UDS_W_B_ContentsFrame::RemoveChildWidget((this->TabFrameWidget).field0_0x0.DebugPtr);
        local_res8[0] = 0.0;
        local_res10[0] = 0;
        UDS_WindowManager::CloseWindow(this_01,ContentsTabFrame,local_res10,local_res8);
      }
    }
  }
  return;
}

// Created @ 14b8bd5a0

void __thiscall UDS_ContentsController::Created(UDS_ContentsController *this)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  UDS_ContentsController *local_res8;
  undefined4 local_res10 [2];
  TPairInitializer<EDS_WindowWidget_&&,EDS_ViewModelTemplateKey_&&> local_res18;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  local_68 = (undefined1  [8])&local_res8;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)local_res10;
  local_res10[0] = 0x179;
  local_res8._0_4_ = 0xcb;
  TSet<TTuple<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WindowWidget_&&,enum_EDS_ViewModelTemplateKey_&&>_>
            (&this->ViewModelTemplateKeyMap,&local_res18,(bool *)local_68);
  local_68 = (undefined1  [8])&local_res8;
  local_res10[0] = 0x14c;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)local_res10;
  local_res8._0_4_ = 0xe2;
  TSet<TTuple<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WindowWidget_&&,enum_EDS_ViewModelTemplateKey_&&>_>
            (&this->ViewModelTemplateKeyMap,&local_res18,(bool *)local_68);
  local_68 = (undefined1  [8])&local_res8;
  local_res10[0] = 0x7c;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)local_res10;
  local_res8._0_4_ = 0x12e;
  TSet<TTuple<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WindowWidget_&&,enum_EDS_ViewModelTemplateKey_&&>_>
            (&this->ViewModelTemplateKeyMap,&local_res18,(bool *)local_68);
  local_68 = (undefined1  [8])&local_res8;
  local_res10[0] = 0x84;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)local_res10;
  local_res8._0_4_ = 0x12d;
  TSet<TTuple<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WindowWidget_&&,enum_EDS_ViewModelTemplateKey_&&>_>
            (&this->ViewModelTemplateKeyMap,&local_res18,(bool *)local_68);
  local_68 = (undefined1  [8])&local_res8;
  local_res10[0] = 0x111;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)local_res10;
  local_res8._0_4_ = 0x3ed;
  TSet<TTuple<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WindowWidget_&&,enum_EDS_ViewModelTemplateKey_&&>_>
            (&this->ViewModelTemplateKeyMap,&local_res18,(bool *)local_68);
  local_68 = (undefined1  [8])&local_res8;
  local_res10[0] = 200;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)local_res10;
  local_res8._0_4_ = 0xd1;
  TSet<TTuple<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WindowWidget_&&,enum_EDS_ViewModelTemplateKey_&&>_>
            (&this->ViewModelTemplateKeyMap,&local_res18,(bool *)local_68);
  local_68 = (undefined1  [8])&local_res8;
  local_res10[0] = 0xd4;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)local_res10;
  local_res8._0_4_ = 0xe7;
  TSet<TTuple<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WindowWidget_&&,enum_EDS_ViewModelTemplateKey_&&>_>
            (&this->ViewModelTemplateKeyMap,&local_res18,(bool *)local_68);
  local_68 = (undefined1  [8])&local_res8;
  local_res10[0] = 0x1ba;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)local_res10;
  local_res8._0_4_ = 0xdd;
  TSet<TTuple<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WindowWidget_&&,enum_EDS_ViewModelTemplateKey_&&>_>
            (&this->ViewModelTemplateKeyMap,&local_res18,(bool *)local_68);
  local_68 = (undefined1  [8])&local_res8;
  local_res10[0] = 0xbe;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)local_res10;
  local_res8._0_4_ = 0xda;
  TSet<TTuple<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WindowWidget_&&,enum_EDS_ViewModelTemplateKey_&&>_>
            (&this->ViewModelTemplateKeyMap,&local_res18,(bool *)local_68);
  local_68 = (undefined1  [8])&local_res8;
  local_res10[0] = 0x1a1;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)local_res10;
  local_res8._0_4_ = 0x14b;
  TSet<TTuple<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WindowWidget_&&,enum_EDS_ViewModelTemplateKey_&&>_>
            (&this->ViewModelTemplateKeyMap,&local_res18,(bool *)local_68);
  local_68 = (undefined1  [8])&local_res8;
  local_res10[0] = 0x18c;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)local_res10;
  local_res8._0_4_ = 0x101;
  TSet<TTuple<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WindowWidget_&&,enum_EDS_ViewModelTemplateKey_&&>_>
            (&this->ViewModelTemplateKeyMap,&local_res18,(bool *)local_68);
  local_68 = (undefined1  [8])&local_res8;
  local_res10[0] = 0xba;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)local_res10;
  local_res8._0_4_ = 0x44c;
  TSet<TTuple<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WindowWidget_&&,enum_EDS_ViewModelTemplateKey_&&>_>
            (&this->ViewModelTemplateKeyMap,&local_res18,(bool *)local_68);
  local_68 = (undefined1  [8])&local_res8;
  local_res10[0] = 0x173;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)local_res10;
  local_res8._0_4_ = 0x15e;
  TSet<TTuple<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WindowWidget_&&,enum_EDS_ViewModelTemplateKey_&&>_>
            (&this->ViewModelTemplateKeyMap,&local_res18,(bool *)local_68);
  local_68 = (undefined1  [8])&local_res8;
  local_res10[0] = 0x8b;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)local_res10;
  local_res8._0_4_ = 0x132;
  TSet<TTuple<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WindowWidget_&&,enum_EDS_ViewModelTemplateKey_&&>_>
            (&this->ViewModelTemplateKeyMap,&local_res18,(bool *)local_68);
  local_68 = (undefined1  [8])&local_res8;
  local_res10[0] = 0x8b;
  local_res8._0_4_ = 0x133;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)local_res10;
  TSet<TTuple<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WindowWidget_&&,enum_EDS_ViewModelTemplateKey_&&>_>
            (&this->ViewModelTemplateKeyMap,&local_res18,(bool *)local_68);
  local_68 = (undefined1  [8])&local_res8;
  local_res10[0] = 0x8d;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)local_res10;
  local_res8._0_4_ = 0x134;
  TSet<TTuple<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WindowWidget_&&,enum_EDS_ViewModelTemplateKey_&&>_>
            (&this->ViewModelTemplateKeyMap,&local_res18,(bool *)local_68);
  local_68 = (undefined1  [8])&local_res8;
  local_res10[0] = 0x1d9;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)local_res10;
  local_res8._0_4_ = 0x38b;
  TSet<TTuple<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WindowWidget_&&,enum_EDS_ViewModelTemplateKey_&&>_>
            (&this->ViewModelTemplateKeyMap,&local_res18,(bool *)local_68);
  local_68 = (undefined1  [8])&local_res8;
  local_res10[0] = 0x1dc;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)local_res10;
  local_res8._0_4_ = 0x38c;
  TSet<TTuple<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WindowWidget_&&,enum_EDS_ViewModelTemplateKey_&&>_>
            (&this->ViewModelTemplateKeyMap,&local_res18,(bool *)local_68);
  local_68 = (undefined1  [8])&local_res8;
  local_res10[0] = 0x1dd;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)local_res10;
  local_res8._0_4_ = 0x17d;
  TSet<TTuple<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WindowWidget_&&,enum_EDS_ViewModelTemplateKey_&&>_>
            (&this->ViewModelTemplateKeyMap,&local_res18,(bool *)local_68);
  local_68 = (undefined1  [8])&local_res8;
  local_res10[0] = 0x16f;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)local_res10;
  local_res8._0_4_ = 0x178;
  TSet<TTuple<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WindowWidget_&&,enum_EDS_ViewModelTemplateKey_&&>_>
            (&this->ViewModelTemplateKeyMap,&local_res18,(bool *)local_68);
  local_68 = (undefined1  [8])&local_res8;
  local_res10[0] = 0x1eb;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)local_res10;
  local_res8._0_4_ = 0x155;
  TSet<TTuple<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WindowWidget_&&,enum_EDS_ViewModelTemplateKey_&&>_>
            (&this->ViewModelTemplateKeyMap,&local_res18,(bool *)local_68);
  local_68 = (undefined1  [8])&local_res8;
  local_res10[0] = 0x1f2;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)local_res10;
  local_res8._0_4_ = 0x4b1;
  TSet<TTuple<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WindowWidget_&&,enum_EDS_ViewModelTemplateKey_&&>_>
            (&this->ViewModelTemplateKeyMap,&local_res18,(bool *)local_68);
  local_68 = (undefined1  [8])&local_res8;
  local_res10[0] = 0x1f0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)local_res10;
  local_res8._0_4_ = 0x4b3;
  TSet<TTuple<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WindowWidget_&&,enum_EDS_ViewModelTemplateKey_&&>_>
            (&this->ViewModelTemplateKeyMap,&local_res18,(bool *)local_68);
  local_68 = (undefined1  [8])&local_res8;
  local_res10[0] = 0x1f1;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)local_res10;
  local_res8._0_4_ = 0x4b5;
  TSet<TTuple<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WindowWidget_&&,enum_EDS_ViewModelTemplateKey_&&>_>
            (&this->ViewModelTemplateKeyMap,&local_res18,(bool *)local_68);
  local_68 = (undefined1  [8])&local_res8;
  local_res10[0] = 0x1f6;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)local_res10;
  local_res8._0_4_ = 0x4b4;
  TSet<TTuple<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WindowWidget_&&,enum_EDS_ViewModelTemplateKey_&&>_>
            (&this->ViewModelTemplateKeyMap,&local_res18,(bool *)local_68);
  local_68 = (undefined1  [8])&local_res8;
  local_res10[0] = 500;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)local_res10;
  local_res8._0_4_ = 0x4b2;
  TSet<TTuple<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WindowWidget_&&,enum_EDS_ViewModelTemplateKey_&&>_>
            (&this->ViewModelTemplateKeyMap,&local_res18,(bool *)local_68);
  local_68 = (undefined1  [8])&local_res8;
  local_res10[0] = 0x1fe;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)local_res10;
  local_res8._0_4_ = 0x4b6;
  TSet<TTuple<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WindowWidget_&&,enum_EDS_ViewModelTemplateKey_&&>_>
            (&this->ViewModelTemplateKeyMap,&local_res18,(bool *)local_68);
  local_68 = (undefined1  [8])&local_res8;
  local_res10[0] = 0x200;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)local_res10;
  local_res8._0_4_ = 0x4b8;
  TSet<TTuple<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WindowWidget_&&,enum_EDS_ViewModelTemplateKey_&&>_>
            (&this->ViewModelTemplateKeyMap,&local_res18,(bool *)local_68);
  local_68 = (undefined1  [8])&local_res8;
  local_res10[0] = 0x201;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)local_res10;
  local_res8._0_4_ = 0x4b9;
  TSet<TTuple<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WindowWidget_&&,enum_EDS_ViewModelTemplateKey_&&>_>
            (&this->ViewModelTemplateKeyMap,&local_res18,(bool *)local_68);
  local_res10[0] = 0x203;
  local_68 = (undefined1  [8])&local_res8;
  local_res8._0_4_ = 0x4bc;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)local_res10;
  TSet<TTuple<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WindowWidget_&&,enum_EDS_ViewModelTemplateKey_&&>_>
            (&this->ViewModelTemplateKeyMap,&local_res18,(bool *)local_68);
  local_68 = (undefined1  [8])&local_res8;
  local_res10[0] = 0x205;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)local_res10;
  local_res8._0_4_ = 0x4bd;
  TSet<TTuple<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WindowWidget_&&,enum_EDS_ViewModelTemplateKey_&&>_>
            (&this->ViewModelTemplateKeyMap,&local_res18,(bool *)local_68);
  local_68 = (undefined1  [8])&local_res8;
  local_res10[0] = 5;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)local_res10;
  local_res8 = (UDS_ContentsController *)CONCAT44(local_res8._4_4_,4);
  TSet<TTuple<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_WindowWidget_&&,enum_EDS_ViewModelTemplateKey_&&>_>
            (&this->ViewModelTemplateKeyMap,&local_res18,(bool *)local_68);
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar1 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_ContentsController____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_ContentsController *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar1[3] = 0;
    local_res8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_ContentsController *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res8);
    puVar1[4] = OnDestructEvent;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ContentFrameDestructEvent,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  return;
}

// GetArgsKey @ 14b8c4270

int __thiscall UDS_ContentsController::GetArgsKey(UDS_ContentsController *this)

{
  int iVar1;
  
  iVar1 = this->ArgsKey;
  if (iVar1 == 0x7fffffff) {
    iVar1 = 1;
  }
  this->ArgsKey = iVar1 + 1;
  return iVar1;
}

// GetCurrentContentsBaseType @ 14b8c4a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

EDS_ContentsBaseType __thiscall
UDS_ContentsController::GetCurrentContentsBaseType(UDS_ContentsController *this)

{
  EDS_ContentsBaseType EVar1;
  FDS_ContentsTabFrameTableRow *pFVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = FDS_ContentsTabFrameTableRow::Get((longlong)(int)this->CurrentTabFrameID,true);
  if (pFVar2 == (FDS_ContentsTabFrameTableRow *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_ContentsController::GetCurrentContentsBaseType",0x32,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x131,
                 L"contentsTabFrameTableRow is nullptr. ContentsTabFrameID - %d");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    EVar1 = None;
  }
  else {
    EVar1 = pFVar2->ID_ContentsBase;
  }
  return EVar1;
}

// OnCloseContentEvent @ 14b8d51e0

void __thiscall
UDS_ContentsController::OnCloseContentEvent
          (UDS_ContentsController *this,EDS_ContentsTabFrameType *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  UDS_ContentManager *pUVar9;
  uint uVar10;
  longlong lVar11;
  FDestructionSentinel local_38;
  
  pUVar9 = UDS_ContentManager::GetInst();
  if (pUVar9 != (UDS_ContentManager *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar9->CloseContentEvent,
               (FWriteAccessScope *)&local_38);
    puVar1 = &(pUVar9->CloseContentEvent).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar5 = false;
    uVar10 = *(int *)&(pUVar9->CloseContentEvent).field_0x10 - 1;
    if (-1 < (int)uVar10) {
      lVar11 = (longlong)(int)uVar10 << 4;
      bVar5 = false;
      do {
        uVar8 = 0;
        if ((int)uVar10 < *(int *)&(pUVar9->CloseContentEvent).field_0x10) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar2 = *(longlong *)&(pUVar9->CloseContentEvent).field_0x8;
        if (((*(int *)(lVar11 + 8 + lVar2) == 0) ||
            (plVar3 = *(longlong **)(lVar11 + lVar2), plVar3 == (longlong *)0x0)) ||
           (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
          bVar5 = true;
        }
        lVar11 = lVar11 + -0x10;
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
    }
    puVar1 = &(pUVar9->CloseContentEvent).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar5) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar9->CloseContentEvent,
                 false);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  return;
}

// OnDestructEvent @ 14b8d5bb0

void __thiscall UDS_ContentsController::OnDestructEvent(UDS_ContentsController *this)

{
  UDS_ContentManager *pUVar1;
  EDS_ContentsTabFrameType local_res8 [8];
  
  local_res8[0] = this->CurrentTabFrameID;
  (this->TabFrameWidget).field0_0x0.DebugPtr = (UDS_W_B_ContentsFrame *)0x0;
  this->CurrentTabFrameID = None;
  this->CurrentWindowWidget = None;
  OnCloseContentEvent(this,local_res8);
  pUVar1 = UDS_ContentManager::GetInst();
  if (pUVar1 != (UDS_ContentManager *)0x0) {
    TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnOpenCloseContentFrameEvent,false);
    return;
  }
  return;
}

// OnHistoryBackEvent @ 14b8d6ee0

void __thiscall
UDS_ContentsController::OnHistoryBackEvent(UDS_ContentsController *this,FDS_HistoryData *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  EDS_ContentsTabFrameType local_res10 [2];
  FName local_res18;
  EDS_ContentsTabFrameType *local_18;
  FDS_HistoryData *local_10;
  
  if (param_1->DataType == ContentsTab) {
    ::FName::FName(&local_res18,L"EDS_ContentsTabFrameType");
    local_res10[0] = FDS_HistoryData::FindInt32(param_1,&local_res18);
    if (*(int *)&(this->HistoryDataMap).field_0x8 != *(int *)&(this->HistoryDataMap).field_0x34) {
      puVar2 = *(undefined1 **)&(this->HistoryDataMap).field_0x40;
      if (puVar2 == (undefined1 *)0x0) {
        puVar2 = &(this->HistoryDataMap).field_0x38;
      }
      iVar1 = *(int *)(puVar2 + (ulonglong)
                                (*(int *)&(this->HistoryDataMap).field_0x48 - 1U & local_res10[0]) *
                                4);
      if (iVar1 != -1) {
        do {
          if (*(uint *)((longlong)iVar1 * 0x298 + *(longlong *)&this->HistoryDataMap) ==
              local_res10[0]) {
            local_res18.ComparisonIndex.Value = local_res10[0];
            TSet<TTuple<enum_EDS_ContentsTabFrameType,FDS_HistoryData>,TDefaultMapHashableKeyFuncs<enum_EDS_ContentsTabFrameType,FDS_HistoryData,0>,FDefaultSetAllocator>
            ::RemoveImpl<enum_EDS_ContentsTabFrameType>
                      (&this->HistoryDataMap,local_res10[0],(EDS_ContentsTabFrameType *)&local_res18
                      );
            break;
          }
          iVar1 = *(int *)((longlong)iVar1 * 0x298 + 0x290 + *(longlong *)&this->HistoryDataMap);
        } while (iVar1 != -1);
      }
    }
    local_18 = local_res10;
    local_10 = param_1;
    TSet<TTuple<enum_EDS_ContentsTabFrameType,FDS_HistoryData>,TDefaultMapHashableKeyFuncs<enum_EDS_ContentsTabFrameType,FDS_HistoryData,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_ContentsTabFrameType_&,FDS_HistoryData_const_&>_>
              (&this->HistoryDataMap,
               (TPairInitializer<EDS_ContentsTabFrameType_&,FDS_HistoryData_const_&> *)&local_res18,
               (bool *)&local_18);
    local_res18.ComparisonIndex.Value = 0;
    local_res18.Number = 0;
    OpenContent(this,local_res10,(TObjectPtr<UDS_ContentArguments>)&local_res18);
  }
  return;
}

// OnInputActionToContent @ 14b8d75f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_ContentsController::OnInputActionToContent
          (UDS_ContentsController *this,EDS_KeyActionType *param_1,FDS_InputEventParams *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  FDS_ContentsTabFrameTableRow *pFVar7;
  UDS_LogManager *pUVar8;
  UDS_WindowManager *this_00;
  UObject *pUVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStackY_1c8 [32];
  FWeakObjectPtr local_188;
  FDestructionSentinel local_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if (this->CurrentTabFrameID != None) {
    pFVar7 = FDS_ContentsTabFrameTableRow::Get((longlong)(int)this->CurrentTabFrameID,true);
    if (pFVar7 == (FDS_ContentsTabFrameTableRow *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      if (pUVar8 != (UDS_LogManager *)0x0) {
        pUVar8 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_ContentsController::OnInputActionToContent",0x2e,Yes);
        UDS_LogManager::PrintLog
                  (pUVar8,1,Warning,local_168.Ptr,0x119,
                   L"contentsTabFrameTableRow is nullptr. ContentsTabFrameID - %d");
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
      }
    }
    else {
      this_00 = UDS_WindowManager::GetInst();
      if (this_00 != (UDS_WindowManager *)0x0) {
        UDS_WindowManager::GetWindowInfo(this_00,(EDS_WindowWidget)&local_188);
        bVar3 = FWeakObjectPtr::IsValid(&local_188);
        if (bVar3) {
          pUVar9 = FWeakObjectPtr::Get(&local_188);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar9[5].field_0x18
                     ,(FWriteAccessScope *)&local_180);
          *(int *)&pUVar9[6].field_0xc = *(int *)&pUVar9[6].field_0xc + 1;
          bVar3 = false;
          uVar10 = *(int *)(pUVar9 + 6) - 1;
          if (-1 < (int)uVar10) {
            lVar11 = (longlong)(int)uVar10 << 4;
            bVar3 = false;
            do {
              uVar6 = 0;
              if ((int)uVar10 < *(int *)(pUVar9 + 6)) {
                uVar6 = ~uVar10 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if (((*(int *)(*(longlong *)&pUVar9[5].field_0x20 + 8 + lVar11) == 0) ||
                  (plVar1 = *(longlong **)(*(longlong *)&pUVar9[5].field_0x20 + lVar11),
                  plVar1 == (longlong *)0x0)) ||
                 (cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1,param_2), cVar5 == '\0')) {
                bVar3 = true;
              }
              lVar11 = lVar11 + -0x10;
              uVar10 = uVar10 - 1;
            } while (-1 < (int)uVar10);
          }
          *(int *)&pUVar9[6].field_0xc = *(int *)&pUVar9[6].field_0xc + -1;
          if (bVar3) {
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar9[5].field_0x18,
                       false);
          }
          if (local_180.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_180.Accessor,&local_180);
          }
        }
      }
    }
  }
  return;
}

// OnLoadWindowCallback @ 14b8d7c40

void __thiscall
UDS_ContentsController::OnLoadWindowCallback
          (UDS_ContentsController *this,UDS_UserWidget *param_1,EDS_ContentsTabFrameType param_2,
          EDS_WindowWidget param_3,int param_4)

{
  TMap<int,TObjectPtr<UDS_ContentArguments>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ContentArguments>,0>_>
  *this_00;
  EDS_ViewModelTemplateKey EVar1;
  UDS_W_B_ContentsFrame *this_01;
  UDS_ContentArguments *pUVar2;
  code *pcVar3;
  FDS_ViewModelContext_ContentsOpen *pFVar4;
  bool bVar5;
  int iVar6;
  TObjectPtr<UDS_ContentArguments> *pTVar7;
  EDS_ViewModelTemplateKey *pEVar8;
  FDS_HistoryData *pFVar9;
  undefined1 *puVar10;
  FWeakObjectPtr FVar11;
  bool *pbVar12;
  EDS_ContentsTabFrameType EVar13;
  bool local_res10 [8];
  EDS_ContentsTabFrameType local_res18 [2];
  EDS_WindowWidget local_res20 [2];
  bool local_d8;
  bool local_d7;
  bool local_d6 [6];
  int local_d0 [2];
  int local_c8 [2];
  EDS_ContentsTabFrameType local_c0 [2];
  int local_b8 [2];
  FWeakObjectPtr local_b0;
  undefined8 local_a8;
  FWeakObjectPtr local_a0;
  FString *local_98;
  UDS_ContentArguments *local_90;
  UDS_UserWidget *local_88 [2];
  TSharedPtr<FDS_ViewModelContext_ContentsOpen,1> local_78;
  FString local_68;
  FString local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  local_res18[0] = param_2;
  local_res20[0] = param_3;
  if (param_1 == (UDS_UserWidget *)0x0) {
    ::FString::FString(&local_68,"EDS_WindowWidget");
    DS_Util::GetEnumToString(&local_58,&local_68,(longlong)(int)param_3);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    local_98 = &local_58;
    `UDS_ContentsController::OnLoadWindowCallback'::__l5::<lambda_1>::operator()(&local_98);
    local_res10[0] = false;
    OnOpenContentEvent(this,local_res18,local_res10);
    if (local_58.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
    return;
  }
  this_01 = (this->TabFrameWidget).field0_0x0.DebugPtr;
  this_00 = &this->ContentArgsMap;
  if (this_01 == (UDS_W_B_ContentsFrame *)0x0) {
    if (*(int *)&(this->ContentArgsMap).field_0x8 != *(int *)&(this->ContentArgsMap).field_0x34) {
      puVar10 = *(undefined1 **)&(this->ContentArgsMap).field_0x40;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &(this->ContentArgsMap).field_0x38;
      }
      iVar6 = *(int *)(puVar10 +
                      (ulonglong)(*(int *)&(this->ContentArgsMap).field_0x48 - 1U & param_4) * 4);
      if (iVar6 != -1) {
        do {
          if (*(int *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar6 * 0x18) == param_4) {
            local_d0[0] = param_4;
            TSet<TTuple<int,TObjectPtr<UDS_ContentArguments>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ContentArguments>,0>,FDefaultSetAllocator>
            ::RemoveImpl<int>((TSet<TTuple<int,TObjectPtr<UDS_ContentArguments>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ContentArguments>,0>,FDefaultSetAllocator>
                               *)this_00,param_4,local_d0);
            goto LAB_14b8d7d64;
          }
          iVar6 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar6 * 0x18);
        } while (iVar6 != -1);
        local_d8 = false;
        pbVar12 = &local_d8;
        goto LAB_14b8d8140;
      }
    }
LAB_14b8d7d64:
    local_d8 = false;
    pbVar12 = &local_d8;
  }
  else if (this->CurrentWindowWidget == param_3) {
    UDS_W_B_ContentsFrame::SetChildWindowWidget(this_01,param_1,param_3);
    local_a8 = 0;
    if (*(int *)&(this->ContentArgsMap).field_0x8 != *(int *)&(this->ContentArgsMap).field_0x34) {
      puVar10 = *(undefined1 **)&(this->ContentArgsMap).field_0x40;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &(this->ContentArgsMap).field_0x38;
      }
      iVar6 = *(int *)(puVar10 +
                      (ulonglong)(*(int *)&(this->ContentArgsMap).field_0x48 - 1U & param_4) * 4);
      if (iVar6 != -1) {
        do {
          if (*(int *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar6 * 0x18) == param_4) {
            pTVar7 = TMapBase<int,TObjectPtr<UDS_ContentArguments>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ContentArguments>,0>_>
                     ::FindChecked((TMapBase<int,TObjectPtr<UDS_ContentArguments>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ContentArguments>,0>_>
                                    *)this_00,param_4);
            pUVar2 = (pTVar7->field0_0x0).DebugPtr;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              if (pUVar2 != (UDS_ContentArguments *)0x0) {
                UE::GC::MarkAsReachable((UObject *)pUVar2);
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar2 != (UDS_ContentArguments *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar2);
              }
            }
            local_b0.ObjectIndex = 0;
            local_b0.ObjectSerialNumber = 0;
            local_90 = pUVar2;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar2 != (UDS_ContentArguments *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar2);
            }
            FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_90);
            FVar11 = local_b0;
            goto LAB_14b8d7e58;
          }
          iVar6 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar6 * 0x18);
        } while (iVar6 != -1);
      }
    }
    FVar11.ObjectIndex = 0;
    FVar11.ObjectSerialNumber = 0;
LAB_14b8d7e58:
    EVar13 = local_res18[0];
    if (*(int *)&(this->ViewModelTemplateKeyMap).field_0x8 !=
        *(int *)&(this->ViewModelTemplateKeyMap).field_0x34) {
      puVar10 = *(undefined1 **)&(this->ViewModelTemplateKeyMap).field_0x40;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &(this->ViewModelTemplateKeyMap).field_0x38;
      }
      iVar6 = *(int *)(puVar10 +
                      (ulonglong)
                      (*(int *)&(this->ViewModelTemplateKeyMap).field_0x48 - Login & local_res20[0])
                      * 4);
      if (iVar6 != -1) {
        do {
          if (*(EDS_WindowWidget *)
               (*(longlong *)&this->ViewModelTemplateKeyMap + (longlong)iVar6 * 0x10) ==
              local_res20[0]) {
            MakeContext<FDS_ViewModelContext_ContentsOpen>(&local_78);
            pEVar8 = TMapBase<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,0>_>
                     ::FindChecked(&this->ViewModelTemplateKeyMap,local_res20[0]);
            pFVar4 = local_78.Object;
            EVar1 = *pEVar8;
            if ((local_78.Object == (FDS_ViewModelContext_ContentsOpen *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            EVar13 = local_res18[0];
            *(EDS_ViewModelTemplateKey *)&pFVar4->_padding_ = EVar1;
            pFVar4->TabFrameID = local_res18[0];
            local_48.Object = (FDS_ViewModelContext *)local_78.Object;
            local_48.SharedReferenceCount.ReferenceController =
                 local_78.SharedReferenceCount.ReferenceController;
            (pFVar4->ContentArguments).WeakPtr = FVar11;
            if (local_78.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)param_1);
            }
            local_a0.ObjectIndex = 0;
            local_a0.ObjectSerialNumber = 0;
            local_88[0] = param_1;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)param_1);
            }
            FWeakObjectPtr::operator=(&local_a0,(FObjectPtr)local_88);
            DS_ViewModelTemplateUtil::BindViewModel
                      ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_a0,&local_48,false);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_78.SharedReferenceCount.ReferenceController);
            break;
          }
          iVar6 = *(int *)(*(longlong *)&this->ViewModelTemplateKeyMap + 8 + (longlong)iVar6 * 0x10)
          ;
        } while (iVar6 != -1);
      }
    }
    OnLoadWindowCallback_Manual
              (this,param_1,EVar13,local_res20[0],
               (TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr>)FVar11);
    EVar13 = this->CurrentTabFrameID;
    if (*(int *)&(this->HistoryDataMap).field_0x8 != *(int *)&(this->HistoryDataMap).field_0x34) {
      puVar10 = *(undefined1 **)&(this->HistoryDataMap).field_0x40;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &(this->HistoryDataMap).field_0x38;
      }
      iVar6 = *(int *)(puVar10 +
                      (ulonglong)(*(int *)&(this->HistoryDataMap).field_0x48 + ~None & EVar13) * 4);
      if (iVar6 != -1) {
        do {
          if (*(EDS_ContentsTabFrameType *)
               ((longlong)iVar6 * 0x298 + *(longlong *)&this->HistoryDataMap) == EVar13) {
            pFVar9 = TMapBase<enum_EDS_ContentsTabFrameType,FDS_HistoryData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ContentsTabFrameType,FDS_HistoryData,0>_>
                     ::FindChecked(&this->HistoryDataMap,EVar13);
            UDS_UserWidget::OnHistoryEvent(param_1,pFVar9);
            local_c0[0] = this->CurrentTabFrameID;
            if (*(int *)&(this->HistoryDataMap).field_0x8 !=
                *(int *)&(this->HistoryDataMap).field_0x34) {
              TSet<TTuple<enum_EDS_ContentsTabFrameType,FDS_HistoryData>,TDefaultMapHashableKeyFuncs<enum_EDS_ContentsTabFrameType,FDS_HistoryData,0>,FDefaultSetAllocator>
              ::RemoveImpl<enum_EDS_ContentsTabFrameType>
                        (&this->HistoryDataMap,local_c0[0],local_c0);
            }
            break;
          }
          iVar6 = *(int *)((longlong)iVar6 * 0x298 + 0x290 + *(longlong *)&this->HistoryDataMap);
        } while (iVar6 != -1);
      }
    }
    if (*(int *)&(this->ContentArgsMap).field_0x8 != *(int *)&(this->ContentArgsMap).field_0x34) {
      puVar10 = *(undefined1 **)&(this->ContentArgsMap).field_0x40;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &(this->ContentArgsMap).field_0x38;
      }
      iVar6 = *(int *)(puVar10 +
                      (ulonglong)(*(int *)&(this->ContentArgsMap).field_0x48 - 1U & param_4) * 4);
      if (iVar6 != -1) {
        do {
          if (*(int *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar6 * 0x18) == param_4) {
            local_b8[0] = param_4;
            TSet<TTuple<int,TObjectPtr<UDS_ContentArguments>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ContentArguments>,0>,FDefaultSetAllocator>
            ::RemoveImpl<int>((TSet<TTuple<int,TObjectPtr<UDS_ContentArguments>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ContentArguments>,0>,FDefaultSetAllocator>
                               *)this_00,param_4,local_b8);
            break;
          }
          iVar6 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar6 * 0x18);
        } while (iVar6 != -1);
      }
    }
    UDS_UserWidget::BindInputAction(param_1,local_res20);
    pbVar12 = local_d6;
    local_d6[0] = true;
  }
  else {
    if (*(int *)&(this->ContentArgsMap).field_0x8 != *(int *)&(this->ContentArgsMap).field_0x34) {
      puVar10 = *(undefined1 **)&(this->ContentArgsMap).field_0x40;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &(this->ContentArgsMap).field_0x38;
      }
      iVar6 = *(int *)(puVar10 +
                      (ulonglong)(*(int *)&(this->ContentArgsMap).field_0x48 - 1U & param_4) * 4);
      if (iVar6 != -1) {
        do {
          if (*(int *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar6 * 0x18) == param_4) {
            local_c8[0] = param_4;
            TSet<TTuple<int,TObjectPtr<UDS_ContentArguments>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ContentArguments>,0>,FDefaultSetAllocator>
            ::RemoveImpl<int>((TSet<TTuple<int,TObjectPtr<UDS_ContentArguments>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ContentArguments>,0>,FDefaultSetAllocator>
                               *)this_00,param_4,local_c8);
            goto LAB_14b8d7de2;
          }
          iVar6 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar6 * 0x18);
        } while (iVar6 != -1);
        local_d7 = false;
        pbVar12 = &local_d7;
        goto LAB_14b8d8140;
      }
    }
LAB_14b8d7de2:
    local_d7 = false;
    pbVar12 = &local_d7;
  }
LAB_14b8d8140:
  OnOpenContentEvent(this,local_res18,pbVar12);
  return;
}

// OnLoadWindowCallback_Manual @ 14b8d8170

void __thiscall
UDS_ContentsController::OnLoadWindowCallback_Manual
          (UDS_ContentsController *this,UDS_UserWidget *param_1,EDS_ContentsTabFrameType param_2,
          EDS_WindowWidget param_3,TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr> param_4)

{
  longlong *plVar1;
  int iVar2;
  TDelegate<void___cdecl(UDS_UserWidget_*,EDS_ContentsTabFrameType,TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *this_00;
  longlong lVar3;
  FReadAccessScope local_28;
  
  if (OnLoadWindowCallbackManualDelegate._8_4_ != OnLoadWindowCallbackManualDelegate._52_4_) {
    lVar3 = 0x154cef9f8;
    if (OnLoadWindowCallbackManualDelegate._64_8_ != 0) {
      lVar3 = OnLoadWindowCallbackManualDelegate._64_8_;
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (OnLoadWindowCallbackManualDelegate._72_4_ - Login & param_3) * 4);
    if (iVar2 != -1) {
      while (*(EDS_WindowWidget *)
              (OnLoadWindowCallbackManualDelegate._0_8_ + (longlong)iVar2 * 0x28) != param_3) {
        iVar2 = *(int *)(OnLoadWindowCallbackManualDelegate._0_8_ + 0x20 + (longlong)iVar2 * 0x28);
        if (iVar2 == -1) {
          return;
        }
      }
      this_00 = TMapBase<enum_EDS_WindowWidget,TDelegate<void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType,TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr>),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,TDelegate<void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType,TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr>),FDefaultDelegateUserPolicy>,0>_>
                ::FindChecked(&OnLoadWindowCallbackManualDelegate,param_3);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
      if ((*(int *)&this_00->field_0x10 != 0) &&
         (plVar1 = *(longlong **)&this_00->field_0x8, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x68))(plVar1,param_1,param_2,param_4.WeakPtr);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
    }
  }
  return;
}

// OnOpenCloseContentFrameEvent @ 14b8d84b0

void __thiscall
UDS_ContentsController::OnOpenCloseContentFrameEvent(UDS_ContentsController *this,bool *param_1)

{
  UDS_ContentManager *pUVar1;
  
  pUVar1 = UDS_ContentManager::GetInst();
  if (pUVar1 != (UDS_ContentManager *)0x0) {
    TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnOpenCloseContentFrameEvent,*param_1);
    return;
  }
  return;
}

// OnOpenContentEvent @ 14b8d84e0

void __thiscall
UDS_ContentsController::OnOpenContentEvent
          (UDS_ContentsController *this,EDS_ContentsTabFrameType *param_1,bool *param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  EDS_ContentsTabFrameType EVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  UDS_ContentManager *pUVar11;
  uint uVar12;
  longlong lVar13;
  FDestructionSentinel local_38;
  
  pUVar11 = UDS_ContentManager::GetInst();
  if (pUVar11 != (UDS_ContentManager *)0x0) {
    EVar3 = *param_1;
    bVar2 = *param_2;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar11->OpenContentEvent,
               (FWriteAccessScope *)&local_38);
    puVar1 = &(pUVar11->OpenContentEvent).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar7 = false;
    uVar12 = *(int *)&(pUVar11->OpenContentEvent).field_0x10 - 1;
    if (-1 < (int)uVar12) {
      lVar13 = (longlong)(int)uVar12 << 4;
      bVar7 = false;
      do {
        uVar10 = 0;
        if ((int)uVar12 < *(int *)&(pUVar11->OpenContentEvent).field_0x10) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar4 = *(longlong *)&(pUVar11->OpenContentEvent).field_0x8;
        if (((*(int *)(lVar4 + 8 + lVar13) == 0) ||
            (plVar5 = *(longlong **)(lVar4 + lVar13), plVar5 == (longlong *)0x0)) ||
           (cVar9 = (**(code **)(*plVar5 + 0x68))(plVar5,EVar3,bVar2), cVar9 == '\0')) {
          bVar7 = true;
        }
        lVar13 = lVar13 + -0x10;
        uVar12 = uVar12 - 1;
      } while (-1 < (int)uVar12);
    }
    puVar1 = &(pUVar11->OpenContentEvent).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar7) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar11->OpenContentEvent,
                 false);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  return;
}

// OnOpenWindowCallback @ 14b8d9020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_ContentsController::OnOpenWindowCallback
          (UDS_ContentsController *this,UDS_UserWidget *param_1,EDS_ContentsTabFrameType param_2,
          EDS_WindowWidget param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  FDS_ViewModelContext_ContentsFrame *pFVar3;
  bool bVar4;
  FDS_ContentsTabFrameTableRow *pFVar5;
  UDS_LogManager *pUVar6;
  UDS_WindowManager *this_00;
  UClass *pUVar7;
  UDS_ContentManager *pUVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  FSlateApplication *this_01;
  TSharedPtr<SWidget,1> *pTVar11;
  UDS_W_B_ContentsFrame *this_02;
  ESlateVisibility EVar12;
  undefined1 auStackY_258 [32];
  undefined1 local_218 [8];
  FDelegateAllocation local_210;
  FWeakObjectPtr local_200;
  UDS_UserWidget *local_1f8;
  UDS_ContentsController *local_1f0;
  TSharedPtr<FDS_ViewModelContext_ContentsFrame,1> local_1e8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_1d8;
  FDestructionSentinel local_1c0;
  FDestructionSentinel local_1a8;
  FDelegateAllocation *local_190;
  TSharedPtr<FDS_ViewModelContext,1> local_188;
  TSharedPtr<SWidget,1> local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  if (param_1 == (UDS_UserWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Contents\\DS_ContentsController.cpp"
                       ,0x13c,L"InContentsWidget is nullptr");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pFVar5 = FDS_ContentsTabFrameTableRow::Get((longlong)(int)param_2,true);
    if (pFVar5 == (FDS_ContentsTabFrameTableRow *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_ContentsController::OnOpenWindowCallback",0x2c,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Warning,local_168.Ptr,0x143,
                   L"contentsTabFrameTableRow is nullptr. ContentsTabFrameID - %d");
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
      }
    }
    else {
      this_00 = UDS_WindowManager::GetInst();
      if ((this_00 != (UDS_WindowManager *)0x0) &&
         (bVar4 = UObjectBaseUtility::IsA<UDS_W_B_ContentsFrame>((UObjectBaseUtility *)param_1),
         bVar4)) {
        this->CurrentTabFrameID = param_2;
        this->CurrentWindowWidget = param_3;
        pUVar7 = Z_Construct_UClass_UDS_W_B_ContentsFrame_NoRegister();
        iVar1 = (int)pUVar7->_padding_;
        if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
           (this_02 = (UDS_W_B_ContentsFrame *)param_1,
           (longlong *)
           *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
           &pUVar7->_padding_)) {
          this_02 = (UDS_W_B_ContentsFrame *)0x0;
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_02 != (UDS_W_B_ContentsFrame *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_02);
        }
        (this->TabFrameWidget).field0_0x0.DebugPtr = this_02;
        local_1d8._0_8_ = 0;
        local_1d8._8_8_ = 0;
        local_1d8._16_4_ = 0;
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
        CopyFrom<FDefaultDelegateUserPolicy>(&local_1d8,&this->ContentFrameDestructEvent);
        UDS_W_B_ContentsFrame::SetDestructEvent(this_02,&local_1d8);
        pUVar8 = UDS_ContentManager::GetInst();
        if (pUVar8 != (UDS_ContentManager *)0x0) {
          TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
                    ((TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
                     &pUVar8->OnOpenCloseContentFrameEvent,true);
        }
        MakeContext<FDS_ViewModelContext_ContentsFrame>(&local_1e8);
        pFVar3 = local_1e8.Object;
        if ((local_1e8.Object == (FDS_ViewModelContext_ContentsFrame *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined4 *)&pFVar3->_padding_ = 0x3d;
        pFVar3->TabFrameID = this->CurrentTabFrameID;
        local_188.Object = (FDS_ViewModelContext *)local_1e8.Object;
        local_188.SharedReferenceCount.ReferenceController =
             local_1e8.SharedReferenceCount.ReferenceController;
        EVar12 = Collapsed;
        if (pFVar5->ActiveBackgroundEvent == true) {
          EVar12 = SelfHitTestInvisible;
        }
        pFVar3->BackgroundButtonVisibility = EVar12;
        if (local_1e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_200.ObjectIndex = 0;
        local_200.ObjectSerialNumber = 0;
        local_1f8 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(&local_200,(FObjectPtr)&local_1f8);
        DS_ViewModelTemplateUtil::BindViewModel
                  ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_200,&local_188,false);
        local_218 = (undefined1  [8])0x0;
        local_210.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_210.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_218,
                   (FWriteAccessScope *)&local_1a8);
        local_190 = &local_210;
        puVar9 = UE::Core::Private::DelegateAllocate(0x30,&local_210);
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &
                    ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__W4EDS_ContentsTabFrameType__W4EDS_WindowWidget__H__6B_
          ;
          *(EDS_ContentsTabFrameType *)(puVar9 + 1) = this->CurrentTabFrameID;
          *(EDS_WindowWidget *)((longlong)puVar9 + 0xc) = this->CurrentWindowWidget;
          *(int *)(puVar9 + 2) = param_4;
          uVar10 = FDelegateHandle::GenerateNewID();
          puVar9[3] = uVar10;
          *puVar9 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_ContentsController____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__W4EDS_ContentsTabFrameType__W4EDS_WindowWidget__H__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar9[4] = 0;
          local_1f0 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 4),(FObjectPtr)&local_1f0);
          puVar9[5] = OnLoadWindowCallback;
        }
        if (local_1a8.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
        }
        UDS_WindowManager::AsyncLoadWindow
                  (this_00,this->CurrentWindowWidget,
                   (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)local_218
                  );
        this_01 = FSlateApplication::Get();
        pTVar11 = UWidget::GetCachedWidget((UWidget *)param_1,&local_178);
        FSlateApplication::SetKeyboardFocus(this_01,pTVar11,SetDirectly);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_178.SharedReferenceCount.ReferenceController);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_218,
                   (FWriteAccessScope *)&local_1c0);
        if ((local_210.DelegateSize != 0) &&
           (local_210.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_210.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_210,0,0,0x10);
          local_210.DelegateSize = 0;
        }
        if (local_1c0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c0.Accessor,&local_1c0);
        }
        if (local_210.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_210.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_218);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1e8.SharedReferenceCount.ReferenceController);
      }
    }
  }
  return;
}

// OpenContent @ 14b8dabe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UDS_ContentsController::OpenContent
          (UDS_ContentsController *this,EDS_ContentsTabFrameType *param_1,
          TObjectPtr<UDS_ContentArguments> param_2)

{
  FScriptContainerElement *pFVar1;
  EDS_WindowWidget EVar2;
  EDS_ContentsTabFrameType EVar3;
  EDS_ViewModelTemplateKey EVar4;
  longlong lVar5;
  UDS_W_B_ContentsFrame *pUVar6;
  UDS_UserWidget *pUVar7;
  code *pcVar8;
  UDS_WindowManager *this_00;
  int iVar9;
  FDS_ViewModelContext_ContentsFrame *pFVar10;
  FDS_ViewModelContext_ContentsOpen *pFVar11;
  char cVar12;
  bool bVar13;
  undefined1 uVar14;
  ESlateVisibility EVar15;
  int iVar16;
  FDS_ContentsTabFrameTableRow *pFVar17;
  UDS_LogManager *pUVar18;
  UObject *pUVar19;
  undefined8 *puVar20;
  ulong64 uVar21;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar22;
  EDS_ViewModelTemplateKey *pEVar23;
  FDS_HistoryData *pFVar24;
  int iVar25;
  undefined1 *puVar26;
  ForAnyElementType FVar27;
  TReferenceControllerBase<1> *pTVar28;
  EDS_WindowWidget EVar29;
  undefined1 auStackY_388 [32];
  EDS_ContentsTabFrameType local_348;
  undefined1 local_344;
  bool local_343 [3];
  ForAnyElementType local_340;
  int local_338;
  int local_334;
  TReferenceControllerBase<1> *local_330;
  int local_328;
  int local_324;
  undefined1 local_320 [8];
  FDelegateAllocation local_318;
  undefined1 local_308 [8];
  FDelegateAllocation local_300;
  TObjectPtr<UDS_ContentArguments>_u_0 local_2f0;
  EDS_ContentsTabFrameType local_2e8 [2];
  EDS_ContentsTabFrameType local_2e0 [2];
  FWeakObjectPtr local_2d8;
  UDS_WindowManager *local_2d0;
  FWeakObjectPtr local_2c8;
  FWeakObjectPtr local_2c0;
  FWeakObjectPtr local_2b8;
  TArray<FDS_ContentsTabFrameTableRow_const_*,TSizedDefaultAllocator<32>_> local_2b0;
  TSharedPtr<FDS_ViewModelContext_ContentsFrame,1> local_298;
  UObject *local_288;
  UDS_UserWidget *local_280;
  UObject *local_278;
  UDS_ContentsController *local_270;
  undefined1 local_268 [8];
  FWeakObjectPtr local_260;
  TSharedPtr<FDS_ViewModelContext_ContentsOpen,1> local_258;
  UDS_ContentsController *local_248;
  UDS_W_B_ContentsFrame *local_240;
  int *local_238;
  TObjectPtr<UDS_ContentArguments>_u_0 local_230;
  int *local_228;
  TObjectPtr<UDS_ContentArguments>_u_0 local_220;
  FDestructionSentinel local_218;
  FDestructionSentinel local_200;
  FDestructionSentinel local_1e8;
  FDelegateAllocation *local_1d0;
  FDestructionSentinel local_1c8;
  FDelegateAllocation *local_1b0;
  TSharedPtr<FDS_ViewModelContext,1> local_1a8;
  TSharedPtr<FDS_ViewModelContext,1> local_198;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_388;
  local_2f0 = param_2.field0_0x0;
  pFVar17 = FDS_ContentsTabFrameTableRow::Get((longlong)(int)*param_1,true);
  if (pFVar17 == (FDS_ContentsTabFrameTableRow *)0x0) {
    pUVar18 = UDS_LogManager::GetInst();
    if (pUVar18 != (UDS_LogManager *)0x0) {
      pUVar18 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_ContentsController::OpenContent",0x23,Yes);
      UDS_LogManager::PrintLog
                (pUVar18,1,Warning,local_168.Ptr,0x57,
                 L"contentsTabFrameTableRow is nullptr!! TabFrameID - %d");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
  }
  else {
    local_2d0 = UDS_WindowManager::GetInst();
    if (local_2d0 != (UDS_WindowManager *)0x0) {
      local_348 = *param_1;
      iVar25 = 0;
      EVar29 = pFVar17->ID_WindowBase;
      if ((pFVar17->SubTab == 0) && (EVar29 == None)) {
        FDS_ContentsTabFrameTableRow::GetAll(&local_2b0);
        iVar9 = local_2b0.ArrayNum;
        local_340.Data = (FScriptContainerElement *)0x0;
        local_338 = 0;
        local_334 = 0;
        pFVar1 = local_2b0.AllocatorInstance.Data + (longlong)local_2b0.ArrayNum * 8;
        FVar27.Data = local_2b0.AllocatorInstance.Data;
        while( true ) {
          iVar16 = iVar25;
          if (local_2b0.ArrayNum != iVar9) {
            local_344 = 0;
            `TCheckedPointerIterator<FDS_ContentsTabFrameTableRow_const_*,int,0>::operator!='::__l2
            ::<lambda_1>::operator()(&local_344);
            iVar16 = local_338;
          }
          if (FVar27.Data == pFVar1) break;
          lVar5 = *(longlong *)FVar27.Data;
          iVar25 = iVar16;
          if (((*(int *)(lVar5 + 0x24) == pFVar17->MenuOrder) &&
              (*(int *)(lVar5 + 0x28) == pFVar17->MainTab)) && (*(int *)(lVar5 + 0x2c) != 0)) {
            if (iVar16 == local_334) {
              iVar16 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_340,&local_334);
            }
            iVar25 = iVar16 + 1;
            *(longlong *)(local_340.Data + (longlong)iVar16 * 8) = *(longlong *)FVar27.Data;
            local_338 = iVar25;
          }
          FVar27.Data = FVar27.Data + 8;
        }
        if (local_2b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b0.AllocatorInstance.Data);
          iVar16 = local_338;
        }
        if (0 < iVar16) {
          EVar29 = *(EDS_WindowWidget *)(*(longlong *)local_340.Data + 0x40);
          local_348 = *(EDS_ContentsTabFrameType *)(*(longlong *)local_340.Data + 8);
        }
        if (local_340.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_340.Data);
        }
      }
      this_00 = local_2d0;
      if (this->CurrentTabFrameID != local_348) {
        UDS_WindowManager::GetWindowInfo(local_2d0,(EDS_WindowWidget)&local_260);
        pUVar19 = FWeakObjectPtr::Get(&local_260);
        cVar12 = (**(code **)(*(longlong *)pUVar19 + 0x2c8))(pUVar19);
        if (cVar12 == '\0') {
          local_328 = this->ArgsKey;
          local_230 = local_2f0;
          if (local_328 == 0x7fffffff) {
            local_328 = 1;
          }
          this->ArgsKey = local_328 + 1;
          local_238 = &local_328;
          TSet<TTuple<int,TObjectPtr<UDS_ContentArguments>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ContentArguments>,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<int_&,TObjectPtr<UDS_ContentArguments>_&>_>
                    ((TSet<TTuple<int,TObjectPtr<UDS_ContentArguments>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ContentArguments>,0>,FDefaultSetAllocator>
                      *)&this->ContentArgsMap,
                     (TPairInitializer<int_&,TObjectPtr<UDS_ContentArguments>_&> *)local_268,
                     (bool *)&local_238);
          local_320 = (undefined1  [8])0x0;
          local_318.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_318.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_320,
                     (FWriteAccessScope *)&local_1e8);
          local_1d0 = &local_318;
          puVar20 = UE::Core::Private::DelegateAllocate(0x30,&local_318);
          if (puVar20 != (undefined8 *)0x0) {
            *puVar20 = &
                       ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__W4EDS_ContentsTabFrameType__W4EDS_WindowWidget__H__6B_
            ;
            *(EDS_ContentsTabFrameType *)(puVar20 + 1) = local_348;
            *(EDS_WindowWidget *)((longlong)puVar20 + 0xc) = EVar29;
            *(int *)(puVar20 + 2) = local_328;
            uVar21 = FDelegateHandle::GenerateNewID();
            puVar20[3] = uVar21;
            *puVar20 = &
                       ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_ContentsController____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__W4EDS_ContentsTabFrameType__W4EDS_WindowWidget__H__6B_
            ;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            puVar20[4] = 0;
            local_248 = this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar20 + 4),(FObjectPtr)&local_248);
            puVar20[5] = OnOpenWindowCallback;
          }
          if (local_1e8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e8.Accessor,&local_1e8);
          }
          pTVar22 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                    TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                              (&local_188,
                               (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                                *)local_320);
          UDS_WindowManager::OpenWindow(this_00,ContentsTabFrame,pTVar22);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_320,
                     (FWriteAccessScope *)&local_218);
          if ((local_318.DelegateSize != 0) &&
             (local_318.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_318.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_318,0,0,0x10);
            local_318.DelegateSize = 0;
          }
          if (local_218.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_218.Accessor,&local_218);
          }
          if (local_318.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_318.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_320);
          return true;
        }
        pUVar6 = (this->TabFrameWidget).field0_0x0.DebugPtr;
        if (pUVar6 != (UDS_W_B_ContentsFrame *)0x0) {
          local_2e8[0] = this->CurrentTabFrameID;
          EVar2 = this->CurrentWindowWidget;
          this->CurrentTabFrameID = local_348;
          if (EVar29 != EVar2) {
            this->CurrentWindowWidget = EVar29;
            UDS_W_B_ContentsFrame::RemoveChildWidget(pUVar6);
          }
          OnCloseContentEvent(this,local_2e8);
          MakeContext<FDS_ViewModelContext_ContentsFrame>(&local_298);
          pFVar10 = local_298.Object;
          if ((local_298.Object == (FDS_ViewModelContext_ContentsFrame *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar13)) {
            pcVar8 = (code *)swi(3);
            uVar14 = (*pcVar8)();
            return (bool)uVar14;
          }
          *(undefined4 *)&pFVar10->_padding_ = 0x3d;
          pFVar10->TabFrameID = local_348;
          EVar15 = Collapsed;
          local_1a8.Object = (FDS_ViewModelContext *)local_298.Object;
          local_1a8.SharedReferenceCount.ReferenceController =
               local_298.SharedReferenceCount.ReferenceController;
          if (pFVar17->ActiveBackgroundEvent == true) {
            EVar15 = SelfHitTestInvisible;
          }
          pFVar10->BackgroundButtonVisibility = EVar15;
          local_330 = local_298.SharedReferenceCount.ReferenceController;
          if (local_298.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          pUVar6 = (this->TabFrameWidget).field0_0x0.DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (pUVar6 != (UDS_W_B_ContentsFrame *)0x0) {
              UE::GC::MarkAsReachable((UObject *)pUVar6);
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar6 != (UDS_W_B_ContentsFrame *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar6);
            }
          }
          local_2c8.ObjectIndex = 0;
          local_2c8.ObjectSerialNumber = 0;
          local_240 = pUVar6;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar6 != (UDS_W_B_ContentsFrame *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar6);
          }
          FWeakObjectPtr::operator=(&local_2c8,(FObjectPtr)&local_240);
          DS_ViewModelTemplateUtil::BindViewModel
                    ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_2c8,&local_1a8,false);
          if (EVar29 != EVar2) {
            local_324 = this->ArgsKey;
            if (this->ArgsKey == 0x7fffffff) {
              local_324 = 1;
            }
            this->ArgsKey = local_324 + 1;
            local_228 = &local_324;
            local_220.DebugPtr = local_2f0.DebugPtr;
            TSet<TTuple<int,TObjectPtr<UDS_ContentArguments>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ContentArguments>,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<int_&,TObjectPtr<UDS_ContentArguments>_&>_>
                      ((TSet<TTuple<int,TObjectPtr<UDS_ContentArguments>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ContentArguments>,0>,FDefaultSetAllocator>
                        *)&this->ContentArgsMap,
                       (TPairInitializer<int_&,TObjectPtr<UDS_ContentArguments>_&> *)(local_268 + 4)
                       ,(bool *)&local_228);
            local_308 = (undefined1  [8])0x0;
            local_300.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
            local_300.DelegateSize = 0;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_308,
                       (FWriteAccessScope *)&local_1c8);
            local_1b0 = &local_300;
            puVar20 = UE::Core::Private::DelegateAllocate(0x30,&local_300);
            if (puVar20 != (undefined8 *)0x0) {
              *puVar20 = &
                         ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__W4EDS_ContentsTabFrameType__W4EDS_WindowWidget__H__6B_
              ;
              *(EDS_ContentsTabFrameType *)(puVar20 + 1) = local_348;
              *(EDS_WindowWidget *)((longlong)puVar20 + 0xc) = EVar29;
              *(int *)(puVar20 + 2) = local_324;
              uVar21 = FDelegateHandle::GenerateNewID();
              puVar20[3] = uVar21;
              *puVar20 = &
                         ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_ContentsController____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__W4EDS_ContentsTabFrameType__W4EDS_WindowWidget__H__6B_
              ;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this);
              }
              puVar20[4] = 0;
              local_270 = this;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this);
              }
              FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar20 + 4),(FObjectPtr)&local_270);
              puVar20[5] = OnLoadWindowCallback;
            }
            if (local_1c8.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c8.Accessor,&local_1c8);
            }
            UDS_WindowManager::AsyncLoadWindow
                      (local_2d0,EVar29,
                       (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                       local_308);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_308,
                       (FWriteAccessScope *)&local_200);
            if ((local_300.DelegateSize != 0) &&
               (local_300.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
              (*(code *)**(undefined8 **)local_300.DelegateAllocator)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&local_300,0,0,0x10);
              local_300.DelegateSize = 0;
            }
            if (local_200.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_200.Accessor,&local_200);
            }
            if (local_300.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free((void *)local_300.DelegateAllocator);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_308);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_330);
            return true;
          }
          pTVar28 = local_330;
          if (*(int *)&(this->ViewModelTemplateKeyMap).field_0x8 !=
              *(int *)&(this->ViewModelTemplateKeyMap).field_0x34) {
            puVar26 = *(undefined1 **)&(this->ViewModelTemplateKeyMap).field_0x40;
            if (puVar26 == (undefined1 *)0x0) {
              puVar26 = &(this->ViewModelTemplateKeyMap).field_0x38;
            }
            iVar25 = *(int *)(puVar26 +
                             (ulonglong)
                             (*(int *)&(this->ViewModelTemplateKeyMap).field_0x48 - Login & EVar29)
                             * 4);
            if (iVar25 != -1) {
              do {
                if (*(EDS_WindowWidget *)
                     (*(longlong *)&this->ViewModelTemplateKeyMap + (longlong)iVar25 * 0x10) ==
                    EVar29) {
                  MakeContext<FDS_ViewModelContext_ContentsOpen>(&local_258);
                  pEVar23 = TMapBase<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,0>_>
                            ::FindChecked(&this->ViewModelTemplateKeyMap,EVar29);
                  pFVar11 = local_258.Object;
                  EVar4 = *pEVar23;
                  if ((local_258.Object == (FDS_ViewModelContext_ContentsOpen *)0x0) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar13)) {
                    pcVar8 = (code *)swi(3);
                    uVar14 = (*pcVar8)();
                    return (bool)uVar14;
                  }
                  pTVar28 = local_330;
                  *(EDS_ViewModelTemplateKey *)&pFVar11->_padding_ = EVar4;
                  pFVar11->TabFrameID = local_348;
                  pUVar19 = (UObject *)(local_2f0.DebugPtr)->_padding_;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    if (pUVar19 != (UObject *)0x0) {
                      UE::GC::MarkAsReachable(pUVar19);
                    }
                    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                       (pUVar19 != (UObject *)0x0)) {
                      UE::GC::MarkAsReachable(pUVar19);
                    }
                  }
                  local_2c0.ObjectIndex = 0;
                  local_2c0.ObjectSerialNumber = 0;
                  local_288 = pUVar19;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (pUVar19 != (UObject *)0x0)) {
                    UE::GC::MarkAsReachable(pUVar19);
                  }
                  FWeakObjectPtr::operator=(&local_2c0,(FObjectPtr)&local_288);
                  local_198.Object = (FDS_ViewModelContext *)local_258.Object;
                  local_198.SharedReferenceCount.ReferenceController =
                       local_258.SharedReferenceCount.ReferenceController;
                  (pFVar11->ContentArguments).WeakPtr = local_2c0;
                  if (local_258.SharedReferenceCount.ReferenceController !=
                      (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    (local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                         (atomic<int>)
                         ((int)(local_258.SharedReferenceCount.ReferenceController)->
                               SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  pUVar7 = ((this->TabFrameWidget).field0_0x0.DebugPtr)->ChildWidget;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (pUVar7 != (UDS_UserWidget *)0x0)) {
                    UE::GC::MarkAsReachable((UObject *)pUVar7);
                  }
                  local_2b8.ObjectIndex = 0;
                  local_2b8.ObjectSerialNumber = 0;
                  local_280 = pUVar7;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (pUVar7 != (UDS_UserWidget *)0x0)) {
                    UE::GC::MarkAsReachable((UObject *)pUVar7);
                  }
                  FWeakObjectPtr::operator=(&local_2b8,(FObjectPtr)&local_280);
                  DS_ViewModelTemplateUtil::BindViewModel
                            ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_2b8,&local_198,
                             false);
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_258.SharedReferenceCount.ReferenceController)
                  ;
                  break;
                }
                iVar25 = *(int *)(*(longlong *)&this->ViewModelTemplateKeyMap + 8 +
                                 (longlong)iVar25 * 0x10);
              } while (iVar25 != -1);
            }
          }
          pUVar19 = (UObject *)(local_2f0.DebugPtr)->_padding_;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (pUVar19 != (UObject *)0x0) {
              UE::GC::MarkAsReachable(pUVar19);
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar19);
            }
          }
          local_2d8.ObjectIndex = 0;
          local_2d8.ObjectSerialNumber = 0;
          local_278 = pUVar19;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar19);
          }
          FWeakObjectPtr::operator=(&local_2d8,(FObjectPtr)&local_278);
          OnLoadWindowCallback_Manual
                    (this,((this->TabFrameWidget).field0_0x0.DebugPtr)->ChildWidget,local_348,EVar29
                     ,(TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr>)local_2d8);
          EVar3 = this->CurrentTabFrameID;
          if (*(int *)&(this->HistoryDataMap).field_0x8 !=
              *(int *)&(this->HistoryDataMap).field_0x34) {
            puVar26 = *(undefined1 **)&(this->HistoryDataMap).field_0x40;
            if (puVar26 == (undefined1 *)0x0) {
              puVar26 = &(this->HistoryDataMap).field_0x38;
            }
            iVar25 = *(int *)(puVar26 +
                             (ulonglong)(*(int *)&(this->HistoryDataMap).field_0x48 + ~None & EVar3)
                             * 4);
            if (iVar25 != -1) {
              do {
                if (*(EDS_ContentsTabFrameType *)
                     ((longlong)iVar25 * 0x298 + *(longlong *)&this->HistoryDataMap) == EVar3) {
                  pUVar7 = ((this->TabFrameWidget).field0_0x0.DebugPtr)->ChildWidget;
                  if (pUVar7 != (UDS_UserWidget *)0x0) {
                    pFVar24 = TMapBase<enum_EDS_ContentsTabFrameType,FDS_HistoryData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ContentsTabFrameType,FDS_HistoryData,0>_>
                              ::FindChecked(&this->HistoryDataMap,EVar3);
                    UDS_UserWidget::OnHistoryEvent(pUVar7,pFVar24);
                  }
                  local_2e0[0] = this->CurrentTabFrameID;
                  if (*(int *)&(this->HistoryDataMap).field_0x8 !=
                      *(int *)&(this->HistoryDataMap).field_0x34) {
                    TSet<TTuple<enum_EDS_ContentsTabFrameType,FDS_HistoryData>,TDefaultMapHashableKeyFuncs<enum_EDS_ContentsTabFrameType,FDS_HistoryData,0>,FDefaultSetAllocator>
                    ::RemoveImpl<enum_EDS_ContentsTabFrameType>
                              (&this->HistoryDataMap,local_2e0[0],local_2e0);
                  }
                  break;
                }
                iVar25 = *(int *)((longlong)iVar25 * 0x298 + 0x290 +
                                 *(longlong *)&this->HistoryDataMap);
              } while (iVar25 != -1);
            }
          }
          local_343[0] = true;
          OnOpenContentEvent(this,&this->CurrentTabFrameID,local_343);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar28);
          return true;
        }
      }
    }
  }
  return false;
}

// Reset @ 14b8e5aa0

void __thiscall UDS_ContentsController::Reset(UDS_ContentsController *this)

{
  (this->TabFrameWidget).field0_0x0.DebugPtr = (UDS_W_B_ContentsFrame *)0x0;
  this->CurrentTabFrameID = None;
  this->CurrentWindowWidget = None;
  return;
}

// UnbindModel @ 14b8eff30

void __thiscall UDS_ContentsController::UnbindModel(UDS_ContentsController *this)

{
  UDS_HistoryManager *pUVar1;
  
  pUVar1 = UDS_HistoryManager::GetInst();
  if (pUVar1 != (UDS_HistoryManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnHistoryBackEvent,
               this);
    return;
  }
  return;
}

// operator() @ 150567000

bool __thiscall
`UDS_ContentsController::OnLoadWindowCallback'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1048277718816260459>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<1048277718816260459>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

