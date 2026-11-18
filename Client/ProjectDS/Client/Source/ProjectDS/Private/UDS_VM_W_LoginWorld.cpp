// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 38

// SetClick_APIServerSelect_WrapperImpl @ 14b748f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_W_LoginWorld::SetClick_APIServerSelect_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  char cVar2;
  UDS_WindowManager *this;
  FDS_AuthData *pFVar3;
  UObject *pUVar4;
  UDS_GameInstance *this_00;
  UDS_LogManager *pUVar5;
  UDS_SyncServer *this_01;
  undefined8 *puVar6;
  ulong64 uVar7;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar8;
  undefined1 auStackY_1e8 [32];
  uint uVar9;
  wchar_t *pwVar10;
  FWeakObjectPtr FStack_1b8;
  float afStack_1b0 [2];
  FWeakObjectPtr FStack_1a8;
  undefined1 auStack_1a0 [8];
  FDelegateAllocation FStack_198;
  code *pcStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  bool bStack_178;
  FDestructionSentinel FStack_168;
  FDelegateAllocation *pFStack_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_148;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  this = UDS_WindowManager::GetInst();
  if (this != (UDS_WindowManager *)0x0) {
    pFVar3 = TDS_Singleton<FDS_AuthData>::GetInst();
    if (pFVar3->PlayerUID == 0) {
      UDS_WindowManager::GetWindowInfo(this,(EDS_WindowWidget)&FStack_1a8);
      bVar1 = FWeakObjectPtr::IsValid(&FStack_1a8);
      if (bVar1) {
        pUVar4 = FWeakObjectPtr::Get(&FStack_1a8);
        cVar2 = (**(code **)(*(longlong *)pUVar4 + 0x2c8))(pUVar4);
        if (cVar2 == '\0') {
          pcStack_188 = OnOpenWidget;
          uStack_180 = 0;
          auStack_1a0 = (undefined1  [8])0x0;
          FStack_198.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          FStack_198.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_1a0,
                     (FWriteAccessScope *)&FStack_168);
          pFStack_150 = &FStack_198;
          puVar6 = UE::Core::Private::DelegateAllocate(0x30,&FStack_198);
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = &
                      ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar7 = FDelegateHandle::GenerateNewID();
            puVar6[2] = uVar7;
            *puVar6 = &
                      ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_LoginWorld____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
              UE::GC::MarkAsReachable(param_1);
            }
            puVar6[3] = 0;
            FStack_1b8 = (FWeakObjectPtr)param_1;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
              UE::GC::MarkAsReachable(param_1);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&FStack_1b8);
            puVar6[4] = pcStack_188;
            puVar6[5] = CONCAT44(uStack_17c,uStack_180);
          }
          if (FStack_168.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_168.Accessor,&FStack_168);
          }
          pTVar8 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                   TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                             ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                               *)&pcStack_188,
                              (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                               *)auStack_1a0);
          UDS_WindowManager::OpenWindow(this,APIServerList,pTVar8);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_1a0,
                     (FWriteAccessScope *)&pcStack_188);
          if ((FStack_198.DelegateSize != 0) &&
             (FStack_198.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)FStack_198.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&FStack_198,0,0,0x10);
            FStack_198.DelegateSize = 0;
          }
          if (bStack_178 == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                      ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_17c,uStack_180),
                       (FDestructionSentinel *)&pcStack_188);
          }
          if (FStack_198.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)FStack_198.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)auStack_1a0);
        }
        else {
          FStack_1b8 = (FWeakObjectPtr)((ulonglong)FStack_1b8 & 0xffffffff00000000);
          afStack_1b0[0] = 0.0;
          UDS_WindowManager::CloseWindow
                    (this,APIServerList,(uint *)afStack_1b0,(float *)&FStack_1b8);
        }
      }
    }
    else {
      UDS_WindowManager::GetWindowInfo(this,(EDS_WindowWidget)&FStack_1a8);
      bVar1 = FWeakObjectPtr::IsValid(&FStack_1a8);
      if (bVar1) {
        pUVar4 = FWeakObjectPtr::Get(&FStack_1a8);
        cVar2 = (**(code **)(*(longlong *)pUVar4 + 0x2c8))(pUVar4);
        if (cVar2 == '\0') {
          this_00 = UDS_GameInstance::GetInst();
          if (this_00 == (UDS_GameInstance *)0x0) {
            pUVar5 = UDS_LogManager::GetInst();
            if (pUVar5 == (UDS_LogManager *)0x0) {
              return;
            }
            pUVar5 = UDS_LogManager::GetInst();
            TStack_148._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&TStack_148,"UDS_VM_W_LoginWorld::OnClick_APIServerSelect",0x2c,Yes);
            pwVar10 = L"OnClick_WorldSelect gameInst is nullptr.";
            uVar9 = 0x7e;
          }
          else {
            UDS_GameInstance::GetServerInfoObject(this_00);
            bVar1 = FWeakObjectPtr::IsValid(&FStack_1b8);
            if (bVar1) {
              this_01 = (UDS_SyncServer *)FWeakObjectPtr::Get(&FStack_1b8);
              UDS_SyncServer::OpenWorldInfoWidget(this_01);
              return;
            }
            pUVar5 = UDS_LogManager::GetInst();
            if (pUVar5 == (UDS_LogManager *)0x0) {
              return;
            }
            pUVar5 = UDS_LogManager::GetInst();
            TStack_148._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&TStack_148,"UDS_VM_W_LoginWorld::OnClick_APIServerSelect",0x2c,Yes);
            pwVar10 = L"OnClick_WorldSelect syncServer is not valid.";
            uVar9 = 0x84;
          }
          UDS_LogManager::PrintLog(pUVar5,1,Warning,TStack_148.Ptr,uVar9,pwVar10);
          if ((void *)TStack_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_148._padding_);
          }
        }
        else {
          afStack_1b0[0] = 0.0;
          FStack_1b8 = (FWeakObjectPtr)((ulonglong)(uint)FStack_1b8.ObjectSerialNumber << 0x20);
          UDS_WindowManager::CloseWindow(this,ServerList,(uint *)&FStack_1b8,afStack_1b0);
        }
      }
    }
  }
  return;
}

// SetVisibility_APIServerSelect_WrapperImpl @ 14b748f30

void __cdecl
UDS_VM_W_LoginWorld::SetVisibility_APIServerSelect_WrapperImpl(void *param_1,void *param_2)

{
  SetVisibility_APIServerSelect(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetVisibility_WorldSelect_WrapperImpl @ 14b748f40

void __cdecl UDS_VM_W_LoginWorld::SetVisibility_WorldSelect_WrapperImpl(void *param_1,void *param_2)

{
  SetVisibility_WorldSelect(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetVisibility_WorldMaintenance_WrapperImpl @ 14b748f50

void __cdecl
UDS_VM_W_LoginWorld::SetVisibility_WorldMaintenance_WrapperImpl(void *param_1,void *param_2)

{
  SetVisibility_WorldMaintenance(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetShowWorldName_WrapperImpl @ 14b748f60

void __cdecl UDS_VM_W_LoginWorld::SetShowWorldName_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 local_res8 [8];
  FText local_18;
  
  local_18.TextData.Reference = *(ITextData **)param_2;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res8);
  }
  local_18.Flags = *(uint *)((longlong)param_2 + 8);
  SetShowWorldName(param_1,&local_18);
  return;
}

// SetVersionText_WrapperImpl @ 14b748fb0

void __cdecl UDS_VM_W_LoginWorld::SetVersionText_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 local_res8 [8];
  FText local_18;
  
  local_18.TextData.Reference = *(ITextData **)param_2;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res8);
  }
  local_18.Flags = *(uint *)((longlong)param_2 + 8);
  SetVersionText(param_1,&local_18);
  return;
}

// SetWorldStateText_WrapperImpl @ 14b749000

void __cdecl UDS_VM_W_LoginWorld::SetWorldStateText_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 local_res8 [8];
  FText local_18;
  
  local_18.TextData.Reference = *(ITextData **)param_2;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res8);
  }
  local_18.Flags = *(uint *)((longlong)param_2 + 8);
  SetWorldStateText(param_1,&local_18);
  return;
}

// SetWorldStateColor_WrapperImpl @ 14b749050

void __cdecl UDS_VM_W_LoginWorld::SetWorldStateColor_WrapperImpl(void *param_1,void *param_2)

{
  FLinearColor_u_0 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  SetWorldStateColor(param_1,(FLinearColor *)&local_18._s_0);
  return;
}

// SetWorldStateTextColor_WrapperImpl @ 14b749080

void __cdecl UDS_VM_W_LoginWorld::SetWorldStateTextColor_WrapperImpl(void *param_1,void *param_2)

{
  FLinearColor_u_0 local_28;
  undefined4 local_18;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  local_18 = *(undefined4 *)((longlong)param_2 + 0x10);
  SetWorldStateTextColor(param_1,(FSlateColor *)&local_28._s_0);
  return;
}

// StaticClass @ 14b7490b0

UClass * __cdecl UDS_VM_W_LoginWorld::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_LoginWorld.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_LoginWorld",
               &Z_Registration_Info_UClass_UDS_VM_W_LoginWorld.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_LoginWorld,0x120,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_LoginWorld>,
               InternalVTableHelperCtorCaller<UDS_VM_W_LoginWorld>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_LoginWorld.InnerSingleton;
}

// UDS_VM_W_LoginWorld @ 14b74c560

UDS_VM_W_LoginWorld * __thiscall
UDS_VM_W_LoginWorld::UDS_VM_W_LoginWorld(UDS_VM_W_LoginWorld *this,FVTableHelper *param_1)

{
  FLinearColor FVar1;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->Click_APIServerSelect)._padding_ = '\0';
  (this->Click_APIServerSelect).bIsCustomSelected = false;
  (this->Click_APIServerSelect).bIsLacked = false;
  (this->Click_APIServerSelect).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_LoginWorld__6B_;
  *(undefined8 *)&(this->Click_APIServerSelect).Delegate = 0;
  *(undefined8 *)&(this->Click_APIServerSelect).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->Click_APIServerSelect).Delegate.field_0x10 = 0;
  FText::FText(&this->ShowWorldName);
  FText::FText(&this->VersionText);
  FText::FText(&this->WorldStateText);
  (this->WorldStateColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  FVar1 = FLinearColor::White;
  (this->WorldStateTextColor).ColorUseRule = UseColor_Specified;
  (this->WorldStateTextColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  this->ConnectStateSwitcher = 0;
  return this;
}

// UDS_VM_W_LoginWorld @ 14b74c620

UDS_VM_W_LoginWorld * __thiscall
UDS_VM_W_LoginWorld::UDS_VM_W_LoginWorld(UDS_VM_W_LoginWorld *this,FObjectInitializer *param_1)

{
  FLinearColor FVar1;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->Click_APIServerSelect)._padding_ = '\0';
  (this->Click_APIServerSelect).bIsCustomSelected = false;
  (this->Click_APIServerSelect).bIsLacked = false;
  (this->Click_APIServerSelect).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_LoginWorld__6B_;
  *(undefined8 *)&(this->Click_APIServerSelect).Delegate = 0;
  *(undefined8 *)&(this->Click_APIServerSelect).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->Click_APIServerSelect).Delegate.field_0x10 = 0;
  FText::FText(&this->ShowWorldName);
  FText::FText(&this->VersionText);
  FText::FText(&this->WorldStateText);
  (this->WorldStateColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  FVar1 = FLinearColor::White;
  (this->WorldStateTextColor).ColorUseRule = UseColor_Specified;
  (this->WorldStateTextColor).SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  this->ConnectStateSwitcher = 0;
  return this;
}

// ~UDS_VM_W_LoginWorld @ 14b74eb00

void __thiscall UDS_VM_W_LoginWorld::~UDS_VM_W_LoginWorld(UDS_VM_W_LoginWorld *this)

{
  ITextData *pIVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_LoginWorld__6B_;
  pIVar1 = (this->WorldStateText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->VersionText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->ShowWorldName).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Click_APIServerSelect).Delegate);
  pvVar2 = *(void **)&(this->Click_APIServerSelect).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Click_APIServerSelect).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b7510f0

IClassDescriptor * __thiscall
UDS_VM_W_LoginWorld::GetFieldNotificationDescriptor(UDS_VM_W_LoginWorld *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_LoginWorld::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b751780

UClass * __cdecl UDS_VM_W_LoginWorld::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_LoginWorld.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_LoginWorld",
               &Z_Registration_Info_UClass_UDS_VM_W_LoginWorld.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_LoginWorld,0x120,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_LoginWorld>,
               InternalVTableHelperCtorCaller<UDS_VM_W_LoginWorld>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_LoginWorld.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_LoginWorld @ 14b752310

void __cdecl UDS_VM_W_LoginWorld::StaticRegisterNativesUDS_VM_W_LoginWorld(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_LoginWorld_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnOpenWidget @ 14b7536b0

void __cdecl UDS_VM_W_LoginWorld::execOnOpenWidget(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_UserWidget *local_res10;
  
  local_res10 = (UDS_UserWidget *)0x0;
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
  OnOpenWidget((UDS_VM_W_LoginWorld *)param_1,local_res10);
  return;
}

// execOnStateChangeServerIndex @ 14b753930

void __cdecl
UDS_VM_W_LoginWorld::execOnStateChangeServerIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnStateChangeServerIndex((UDS_VM_W_LoginWorld *)param_1);
  return;
}

// BindModel @ 14c002df0

void __thiscall UDS_VM_W_LoginWorld::BindModel(UDS_VM_W_LoginWorld *this)

{
  UDS_LoginEvent *pUVar1;
  FDS_AuthData *pFVar2;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_LoginEvent::GetEvent();
  if (pUVar1 != (UDS_LoginEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnServerInfoChanged,
               this);
    TMulticastDelegateRegistration<void___cdecl(FDS_ServerInfo_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_W_LoginWorld>
              ((TMulticastDelegateRegistration<void___cdecl(FDS_ServerInfo_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar1->OnServerInfoChanged,(UDS_VM_W_LoginWorld *)&stack0x00000010,
               (pmf_5a99835b *)this);
  }
  pFVar2 = TDS_Singleton<FDS_AuthData>::GetInst();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_VM_W_LoginWorld>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pFVar2->OnStateChangedServerChangeDelegate,(UDS_VM_W_LoginWorld *)&stack0x00000010,
             (pmf_e44b5e6a *)this);
  return;
}

// OnCheckStateChanged @ 14c025e90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_LoginWorld::OnCheckStateChanged(UDS_VM_W_LoginWorld *this,FDS_ServerInfo *param_1)

{
  FScriptContainerElement *pFVar1;
  UDS_WindowManager *this_00;
  FString *pFVar2;
  FText *pFVar3;
  float local_res10 [2];
  uint local_res18 [4];
  FString local_28;
  FText local_18;
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res10[0] = 0.0;
    local_res18[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,APIServerList,local_res18,local_res10);
  }
  pFVar2 = ::FString::FString(&local_28,&param_1->ServerName);
  pFVar3 = FText::FromString(&local_18,pFVar2);
  SetShowWorldName(this,pFVar3);
  pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// OnClick_APIServerSelect @ 14c026d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_LoginWorld::OnClick_APIServerSelect
          (UDS_VM_W_LoginWorld *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  char cVar2;
  UDS_WindowManager *this_00;
  FDS_AuthData *pFVar3;
  UObject *pUVar4;
  UDS_GameInstance *this_01;
  UDS_LogManager *pUVar5;
  UDS_SyncServer *this_02;
  undefined8 *puVar6;
  ulong64 uVar7;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar8;
  undefined1 auStackY_1e8 [32];
  uint uVar9;
  wchar_t *pwVar10;
  FWeakObjectPtr local_1b8;
  float local_1b0 [2];
  FWeakObjectPtr local_1a8;
  undefined1 local_1a0 [8];
  FDelegateAllocation local_198;
  code *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  bool local_178;
  FDestructionSentinel local_168;
  FDelegateAllocation *local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    pFVar3 = TDS_Singleton<FDS_AuthData>::GetInst();
    if (pFVar3->PlayerUID == 0) {
      UDS_WindowManager::GetWindowInfo(this_00,(EDS_WindowWidget)&local_1a8);
      bVar1 = FWeakObjectPtr::IsValid(&local_1a8);
      if (bVar1) {
        pUVar4 = FWeakObjectPtr::Get(&local_1a8);
        cVar2 = (**(code **)(*(longlong *)pUVar4 + 0x2c8))(pUVar4);
        if (cVar2 == '\0') {
          local_188 = OnOpenWidget;
          uStack_180 = 0;
          local_1a0 = (undefined1  [8])0x0;
          local_198.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_198.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a0,
                     (FWriteAccessScope *)&local_168);
          local_150 = &local_198;
          puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_198);
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = &
                      ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar7 = FDelegateHandle::GenerateNewID();
            puVar6[2] = uVar7;
            *puVar6 = &
                      ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_LoginWorld____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this != (UDS_VM_W_LoginWorld *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            puVar6[3] = 0;
            local_1b8 = (FWeakObjectPtr)this;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this != (UDS_VM_W_LoginWorld *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_1b8);
            puVar6[4] = local_188;
            puVar6[5] = CONCAT44(uStack_17c,uStack_180);
          }
          if (local_168.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
          }
          pTVar8 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                   TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                             ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                               *)&local_188,
                              (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                               *)local_1a0);
          UDS_WindowManager::OpenWindow(this_00,APIServerList,pTVar8);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1a0,
                     (FWriteAccessScope *)&local_188);
          if ((local_198.DelegateSize != 0) &&
             (local_198.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_198.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_198,0,0,0x10);
            local_198.DelegateSize = 0;
          }
          if (local_178 == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                      ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_17c,uStack_180),
                       (FDestructionSentinel *)&local_188);
          }
          if (local_198.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_198.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_1a0);
        }
        else {
          local_1b8 = (FWeakObjectPtr)((ulonglong)local_1b8 & 0xffffffff00000000);
          local_1b0[0] = 0.0;
          UDS_WindowManager::CloseWindow
                    (this_00,APIServerList,(uint *)local_1b0,(float *)&local_1b8);
        }
      }
    }
    else {
      UDS_WindowManager::GetWindowInfo(this_00,(EDS_WindowWidget)&local_1a8);
      bVar1 = FWeakObjectPtr::IsValid(&local_1a8);
      if (bVar1) {
        pUVar4 = FWeakObjectPtr::Get(&local_1a8);
        cVar2 = (**(code **)(*(longlong *)pUVar4 + 0x2c8))(pUVar4);
        if (cVar2 == '\0') {
          this_01 = UDS_GameInstance::GetInst();
          if (this_01 == (UDS_GameInstance *)0x0) {
            pUVar5 = UDS_LogManager::GetInst();
            if (pUVar5 == (UDS_LogManager *)0x0) {
              return;
            }
            pUVar5 = UDS_LogManager::GetInst();
            local_148._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_148,"UDS_VM_W_LoginWorld::OnClick_APIServerSelect",0x2c,Yes);
            pwVar10 = L"OnClick_WorldSelect gameInst is nullptr.";
            uVar9 = 0x7e;
          }
          else {
            UDS_GameInstance::GetServerInfoObject(this_01);
            bVar1 = FWeakObjectPtr::IsValid(&local_1b8);
            if (bVar1) {
              this_02 = (UDS_SyncServer *)FWeakObjectPtr::Get(&local_1b8);
              UDS_SyncServer::OpenWorldInfoWidget(this_02);
              return;
            }
            pUVar5 = UDS_LogManager::GetInst();
            if (pUVar5 == (UDS_LogManager *)0x0) {
              return;
            }
            pUVar5 = UDS_LogManager::GetInst();
            local_148._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_148,"UDS_VM_W_LoginWorld::OnClick_APIServerSelect",0x2c,Yes);
            pwVar10 = L"OnClick_WorldSelect syncServer is not valid.";
            uVar9 = 0x84;
          }
          UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,uVar9,pwVar10);
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
        else {
          local_1b0[0] = 0.0;
          local_1b8 = (FWeakObjectPtr)((ulonglong)(uint)local_1b8.ObjectSerialNumber << 0x20);
          UDS_WindowManager::CloseWindow(this_00,ServerList,(uint *)&local_1b8,local_1b0);
        }
      }
    }
  }
  return;
}

// OnClose_WorldSelectWindow @ 14c028c30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_LoginWorld::OnClose_WorldSelectWindow(UDS_VM_W_LoginWorld *this,FDS_ServerInfo *param_1)

{
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res18[0] = 0.0;
    local_res20[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,APIServerList,local_res20,local_res18);
  }
  return;
}

// OnOpenWidget @ 14c02dd10

void __thiscall UDS_VM_W_LoginWorld::OnOpenWidget(UDS_VM_W_LoginWorld *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  FWeakObjectPtr local_res10;
  UDS_UserWidget *local_res18 [2];
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((param_1 != (UDS_UserWidget *)0x0) && (param_1->MyWindowID == APIServerList)) {
    MakeContext<FDS_ViewModelContext>(&local_28);
    if ((local_28.Object == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (local_28.Object)->ViewModelTemplateKey = W_APIServerSelect;
    local_18.Object = local_28.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_28.SharedReferenceCount.ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10,&local_18,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnSetViewModel @ 14c032590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_LoginWorld::OnSetViewModel
          (UDS_VM_W_LoginWorld *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  FName FVar4;
  int iVar5;
  ForAnyElementType _Src;
  bool bVar6;
  UDS_GameInstance *this_00;
  UDS_LogManager *pUVar7;
  FDS_StringUiTableRow *pFVar8;
  UDS_SyncServer *this_01;
  FDS_ServerInfo *pFVar9;
  FText *pFVar10;
  undefined1 auStackY_288 [32];
  uint uVar11;
  wchar_t *pwVar12;
  FString local_248;
  FName local_238;
  int local_230;
  FWeakObjectPtr local_228;
  undefined1 local_220 [8];
  FName local_218;
  int local_210;
  FName local_208;
  int local_200;
  FString local_1f8;
  FDS_ServerInfo local_1e8;
  FText local_180;
  FText local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_288;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  this_00 = UDS_GameInstance::GetInst();
  if (this_00 == (UDS_GameInstance *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) goto LAB_14c032926;
    pUVar7 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_VM_W_LoginWorld::OnSetViewModel",0x23,Yes);
    pwVar12 = L"gameInst is nullptr.";
    uVar11 = 0x1c;
LAB_14c032626:
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_158.Ptr,uVar11,pwVar12);
    local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_158._padding_;
  }
  else {
    UDS_GameInstance::GetServerInfoObject(this_00);
    bVar6 = FWeakObjectPtr::IsValid(&local_228);
    if (!bVar6) {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 == (UDS_LogManager *)0x0) goto LAB_14c032926;
      pUVar7 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_W_LoginWorld::OnSetViewModel",0x23,Yes);
      pwVar12 = L"syncServer is not valid.";
      uVar11 = 0x23;
      goto LAB_14c032626;
    }
    pFVar8 = FDS_StringUiTableRow::GetRef(0x7d4,true);
    DS_Util::GetFormatString<char_const_*>(&local_1f8,&pFVar8->Text,"0.0.1");
    this_01 = (UDS_SyncServer *)FWeakObjectPtr::Get(&local_228);
    pFVar9 = UDS_SyncServer::GetServerInfo(this_01,&local_1e8);
    pFVar10 = FText::FromString(&local_180,&pFVar9->ServerName);
    SetShowWorldName(this,pFVar10);
    if (local_1e8.GameServerIndex.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.GameServerIndex.AllocatorInstance.Data);
    }
    if (local_1e8.FrontEndServerIndex.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.FrontEndServerIndex.AllocatorInstance.Data);
    }
    if (local_1e8.ServerName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.ServerName.Data.AllocatorInstance.Data);
    }
    if (local_1e8.AiAddr.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.AiAddr.Data.AllocatorInstance.Data);
    }
    if (local_1e8.ServerAddr.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.ServerAddr.Data.AllocatorInstance.Data);
    }
    if (local_1e8.Urls.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Urls.Data.AllocatorInstance.Data);
    }
    _Src.Data = local_1f8.Data.AllocatorInstance.Data;
    local_248.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_1f8.Data.ArrayNum == 0) {
      local_248.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1f8.Data.ArrayNum,0,(ForAnyElementType *)&local_248,
                 local_1f8.Data.ArrayNum,&local_248.Data.ArrayMax);
      memcpy(local_248.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_1f8.Data.ArrayNum * 2);
    }
    pFVar10 = FText::FromString(&local_170,&local_248);
    iVar5 = FFieldNotificationClassDescriptor::VersionText.BitNumber;
    local_238 = FFieldNotificationClassDescriptor::VersionText.FieldName;
    bVar6 = FText::IdenticalTo(&this->VersionText,pFVar10,None);
    if (!bVar6) {
      pIVar2 = (pFVar10->TextData).Reference;
      pIVar3 = (this->VersionText).TextData.Reference;
      if (pIVar3 != pIVar2) {
        (this->VersionText).TextData.Reference = pIVar2;
        if (pIVar2 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_220);
        }
        if (pIVar3 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
        }
      }
      (this->VersionText).Flags = pFVar10->Flags;
      local_230 = iVar5;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_238);
    }
    pIVar2 = (pFVar10->TextData).Reference;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.Data.AllocatorInstance.Data);
    }
    iVar5 = FFieldNotificationClassDescriptor::Visibility_WorldSelect.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::Visibility_WorldSelect.FieldName;
    if (this->Visibility_WorldSelect != SelfHitTestInvisible) {
      this->Visibility_WorldSelect = SelfHitTestInvisible;
      local_210 = iVar5;
      local_218 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_218);
    }
    iVar5 = FFieldNotificationClassDescriptor::Visibility_WorldMaintenance.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::Visibility_WorldMaintenance.FieldName;
    if (this->Visibility_WorldMaintenance != Hidden) {
      this->Visibility_WorldMaintenance = Hidden;
      local_200 = iVar5;
      local_208 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_208);
    }
  }
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
LAB_14c032926:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnStateChangeServerIndex @ 14c039a10

void __thiscall UDS_VM_W_LoginWorld::OnStateChangeServerIndex(UDS_VM_W_LoginWorld *this)

{
  uint uVar1;
  int iVar2;
  ForAnyElementType _Src;
  FDS_AuthData *pFVar3;
  TMap<int,FDS_WorldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldInfo,0>_>
  *pTVar4;
  FDS_WorldInfo *pFVar5;
  FText *pFVar6;
  undefined1 *puVar7;
  bool bVar8;
  FString local_58;
  FText local_48;
  FString local_38;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  pFVar3 = TDS_Singleton<FDS_AuthData>::GetInst();
  uVar1 = pFVar3->WorldId;
  pTVar4 = UDS_SyncServer::GetWorldInfos();
  if (*(int *)&pTVar4->field_0x8 != *(int *)&pTVar4->field_0x34) {
    puVar7 = *(undefined1 **)&pTVar4->field_0x40;
    if (*(undefined1 **)&pTVar4->field_0x40 == (undefined1 *)0x0) {
      puVar7 = &pTVar4->field_0x38;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)(*(int *)&pTVar4->field_0x48 - 1U & uVar1) * 4);
    if (iVar2 != -1) {
      while (*(uint *)((longlong)iVar2 * 0x38 + *(longlong *)pTVar4) != uVar1) {
        iVar2 = *(int *)((longlong)iVar2 * 0x38 + 0x30 + *(longlong *)pTVar4);
        if (iVar2 == -1) {
          return;
        }
      }
      if (iVar2 != -1) {
        pTVar4 = UDS_SyncServer::GetWorldInfos();
        pFVar5 = TMapBase<int,FDS_WorldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldInfo,0>_>
                 ::FindChecked((TMapBase<int,FDS_WorldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldInfo,0>_>
                                *)pTVar4,uVar1);
        ::FString::FString(&local_38,&pFVar5->WorldName);
        _Src.Data = local_38.Data.AllocatorInstance.Data;
        local_28 = pFVar5->WorldType;
        local_24 = pFVar5->WorldState;
        bVar8 = local_24 == 0;
        local_20 = pFVar5->WorldId;
        local_1c = pFVar5->RegionIndex;
        local_18 = pFVar5->CharCount;
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.Data.ArrayNum = local_38.Data.ArrayNum;
        if (local_38.Data.ArrayNum == 0) {
          local_58.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_58,
                     local_38.Data.ArrayNum,&local_58.Data.ArrayMax);
          memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38.Data.ArrayNum * 2
                );
        }
        pFVar6 = FText::FromString(&local_48,&local_58);
        SetShowWorldName(this,pFVar6);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        SetWorldState(this,bVar8);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// SetShowWorldName @ 14c043630

void __thiscall UDS_VM_W_LoginWorld::SetShowWorldName(UDS_VM_W_LoginWorld *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FText *pFVar2;
  FText local_18;
  
  pFVar2 = FText::FromString(&local_18,param_1);
  SetShowWorldName(this,pFVar2);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// SetShowWorldName @ 14c043680

void __thiscall UDS_VM_W_LoginWorld::SetShowWorldName(UDS_VM_W_LoginWorld *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::ShowWorldName.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::ShowWorldName.FieldName;
  bVar5 = FText::IdenticalTo(&this->ShowWorldName,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->ShowWorldName).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->ShowWorldName).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->ShowWorldName).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  pIVar1 = (param_1->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014c043750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x10))();
    return;
  }
  return;
}

// SetVersionText @ 14c0456d0

void __thiscall UDS_VM_W_LoginWorld::SetVersionText(UDS_VM_W_LoginWorld *this,FString *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  int iVar5;
  bool bVar6;
  FText *pFVar7;
  undefined1 local_res8 [8];
  FName local_48;
  int local_40;
  FText local_38;
  
  pFVar7 = FText::FromString(&local_38,param_1);
  iVar5 = FFieldNotificationClassDescriptor::VersionText.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::VersionText.FieldName;
  bVar6 = FText::IdenticalTo(&this->VersionText,pFVar7,None);
  if (!bVar6) {
    pIVar1 = (pFVar7->TextData).Reference;
    pIVar2 = (this->VersionText).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->VersionText).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->VersionText).Flags = pFVar7->Flags;
    local_48 = FVar4;
    local_40 = iVar5;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
  }
  pIVar1 = (pFVar7->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pFVar3 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
    return;
  }
  return;
}

// SetVersionText @ 14c0457e0

void __thiscall UDS_VM_W_LoginWorld::SetVersionText(UDS_VM_W_LoginWorld *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::VersionText.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::VersionText.FieldName;
  bVar5 = FText::IdenticalTo(&this->VersionText,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->VersionText).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->VersionText).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->VersionText).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  pIVar1 = (param_1->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014c0458b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x10))();
    return;
  }
  return;
}

// SetVisibility_APIServerSelect @ 14c045a70

void __thiscall
UDS_VM_W_LoginWorld::SetVisibility_APIServerSelect
          (UDS_VM_W_LoginWorld *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Visibility_APIServerSelect.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Visibility_APIServerSelect.FieldName;
  if (this->Visibility_APIServerSelect != param_1) {
    this->Visibility_APIServerSelect = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibility_WorldMaintenance @ 14c045f50

void __thiscall
UDS_VM_W_LoginWorld::SetVisibility_WorldMaintenance
          (UDS_VM_W_LoginWorld *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Visibility_WorldMaintenance.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Visibility_WorldMaintenance.FieldName;
  if (this->Visibility_WorldMaintenance != param_1) {
    this->Visibility_WorldMaintenance = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibility_WorldSelect @ 14c045fa0

void __thiscall
UDS_VM_W_LoginWorld::SetVisibility_WorldSelect(UDS_VM_W_LoginWorld *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Visibility_WorldSelect.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Visibility_WorldSelect.FieldName;
  if (this->Visibility_WorldSelect != param_1) {
    this->Visibility_WorldSelect = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetWorldState @ 14c046950

void __thiscall UDS_VM_W_LoginWorld::SetWorldState(UDS_VM_W_LoginWorld *this,bool param_1)

{
  FLinearColor_u_0 FVar1;
  FLinearColor_u_0 FVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  FName FVar9;
  FName FVar10;
  int iVar11;
  FText *pFVar12;
  FNameEntryId FVar13;
  uint uVar14;
  FLinearColor_u_0 local_28;
  uint local_18;
  
  iVar11 = FFieldNotificationClassDescriptor::WorldStateColor.BitNumber;
  FVar9 = FFieldNotificationClassDescriptor::WorldStateColor.FieldName;
  uVar8 = FLinearColor::Green.field0_0x0._s_0.A;
  uVar7 = FLinearColor::Green.field0_0x0._s_0.B;
  uVar6 = FLinearColor::Green.field0_0x0._s_0.G;
  uVar5 = FLinearColor::Red.field0_0x0._s_0.A;
  uVar4 = FLinearColor::Red.field0_0x0._s_0.B;
  uVar3 = FLinearColor::Red.field0_0x0._s_0.G;
  if (param_1) {
    local_28._s_0.G = FLinearColor::Green.field0_0x0._s_0.G;
    local_28._s_0.R = FLinearColor::Green.field0_0x0._s_0.R;
    local_28._s_0.B = FLinearColor::Green.field0_0x0._s_0.B;
    local_28._s_0.A = FLinearColor::Green.field0_0x0._s_0.A;
    if ((((FLinearColor::Green.field0_0x0._s_0.R != (this->WorldStateColor).field0_0x0._s_0.R) ||
         (FLinearColor::Green.field0_0x0._s_0.G != (this->WorldStateColor).field0_0x0._s_0.G)) ||
        (FLinearColor::Green.field0_0x0._s_0.B != (this->WorldStateColor).field0_0x0._s_0.B)) ||
       (FLinearColor::Green.field0_0x0._s_0.A != (this->WorldStateColor).field0_0x0._s_0.A)) {
      (this->WorldStateColor).field0_0x0._s_0.R = FLinearColor::Green.field0_0x0._s_0.R;
      (this->WorldStateColor).field0_0x0._s_0.G = (float)uVar6;
      (this->WorldStateColor).field0_0x0._s_0.B = (float)uVar7;
      (this->WorldStateColor).field0_0x0._s_0.A = (float)uVar8;
      local_28._s_0.B = (float)iVar11;
      local_28._0_8_ = FVar9;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
    pFVar12 = FText::FromString((FText *)&local_28._s_0,L"접속 가능");
    SetWorldStateText(this,pFVar12);
    local_28._s_0.B = (float)FFieldNotificationClassDescriptor::WorldStateTextColor.BitNumber;
    FVar9 = FFieldNotificationClassDescriptor::WorldStateTextColor.FieldName;
    FVar2._s_0.G = FLinearColor::Green.field0_0x0._s_0.G;
    FVar2._s_0.R = FLinearColor::Green.field0_0x0._s_0.R;
    FVar2._s_0.B = FLinearColor::Green.field0_0x0._s_0.B;
    FVar2._s_0.A = FLinearColor::Green.field0_0x0._s_0.A;
    local_18 = local_18 & 0xffffff00;
    if (((FLinearColor::Green.field0_0x0._s_0.R !=
          (this->WorldStateTextColor).SpecifiedColor.field0_0x0._s_0.R) ||
        (FLinearColor::Green.field0_0x0._s_0.G !=
         (this->WorldStateTextColor).SpecifiedColor.field0_0x0._s_0.G)) ||
       ((FLinearColor::Green.field0_0x0._s_0.B !=
         (this->WorldStateTextColor).SpecifiedColor.field0_0x0._s_0.B ||
        ((FLinearColor::Green.field0_0x0._s_0.A !=
          (this->WorldStateTextColor).SpecifiedColor.field0_0x0._s_0.A ||
         ((this->WorldStateTextColor).ColorUseRule != UseColor_Specified)))))) {
      (this->WorldStateTextColor).SpecifiedColor.field0_0x0 = FVar2;
      (this->WorldStateTextColor).ColorUseRule = (undefined1)local_18;
      FVar10 = FFieldNotificationClassDescriptor::WorldStateTextColor.FieldName;
      (this->WorldStateTextColor).ColorTableId = local_18._1_1_;
      *(undefined2 *)&(this->WorldStateTextColor).field_0x12 = local_18._2_2_;
      FFieldNotificationClassDescriptor::WorldStateTextColor.FieldName.ComparisonIndex =
           FVar9.ComparisonIndex.Value;
      FFieldNotificationClassDescriptor::WorldStateTextColor.FieldName.Number = FVar9.Number;
      local_28._s_0.R =
           (float)FFieldNotificationClassDescriptor::WorldStateTextColor.FieldName.ComparisonIndex.
                  Value;
      local_28._s_0.G =
           (float)FFieldNotificationClassDescriptor::WorldStateTextColor.FieldName.Number;
      FFieldNotificationClassDescriptor::WorldStateTextColor.FieldName = FVar10;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
    local_28._s_0.B =
         (float)FFieldNotificationClassDescriptor::Visibility_WorldMaintenance.BitNumber;
    FVar9 = FFieldNotificationClassDescriptor::Visibility_WorldMaintenance.FieldName;
    if (this->Visibility_WorldMaintenance != Hidden) {
      this->Visibility_WorldMaintenance = Hidden;
      FVar10 = FFieldNotificationClassDescriptor::Visibility_WorldMaintenance.FieldName;
      FFieldNotificationClassDescriptor::Visibility_WorldMaintenance.FieldName.ComparisonIndex =
           FVar9.ComparisonIndex.Value;
      FFieldNotificationClassDescriptor::Visibility_WorldMaintenance.FieldName.Number = FVar9.Number
      ;
      local_28._s_0.R =
           (float)FFieldNotificationClassDescriptor::Visibility_WorldMaintenance.FieldName.
                  ComparisonIndex.Value;
      local_28._s_0.G =
           (float)FFieldNotificationClassDescriptor::Visibility_WorldMaintenance.FieldName.Number;
      FFieldNotificationClassDescriptor::Visibility_WorldMaintenance.FieldName = FVar10;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
    local_28._s_0.B = (float)FFieldNotificationClassDescriptor::ConnectStateSwitcher.BitNumber;
    FVar13 = FFieldNotificationClassDescriptor::ConnectStateSwitcher.FieldName.ComparisonIndex.Value
    ;
    uVar14 = FFieldNotificationClassDescriptor::ConnectStateSwitcher.FieldName.Number;
    if (this->ConnectStateSwitcher == 0) {
      return;
    }
    this->ConnectStateSwitcher = 0;
  }
  else {
    local_28._s_0.G = FLinearColor::Red.field0_0x0._s_0.G;
    local_28._s_0.R = FLinearColor::Red.field0_0x0._s_0.R;
    local_28._s_0.B = FLinearColor::Red.field0_0x0._s_0.B;
    local_28._s_0.A = FLinearColor::Red.field0_0x0._s_0.A;
    if ((((FLinearColor::Red.field0_0x0._s_0.R != (this->WorldStateColor).field0_0x0._s_0.R) ||
         (FLinearColor::Red.field0_0x0._s_0.G != (this->WorldStateColor).field0_0x0._s_0.G)) ||
        (FLinearColor::Red.field0_0x0._s_0.B != (this->WorldStateColor).field0_0x0._s_0.B)) ||
       (FLinearColor::Red.field0_0x0._s_0.A != (this->WorldStateColor).field0_0x0._s_0.A)) {
      (this->WorldStateColor).field0_0x0._s_0.R = FLinearColor::Red.field0_0x0._s_0.R;
      (this->WorldStateColor).field0_0x0._s_0.G = (float)uVar3;
      (this->WorldStateColor).field0_0x0._s_0.B = (float)uVar4;
      (this->WorldStateColor).field0_0x0._s_0.A = (float)uVar5;
      local_28._s_0.B = (float)iVar11;
      local_28._0_8_ = FVar9;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
    pFVar12 = FText::FromString((FText *)&local_28._s_0,L"점검중");
    SetWorldStateText(this,pFVar12);
    local_28._s_0.B = (float)FFieldNotificationClassDescriptor::WorldStateTextColor.BitNumber;
    FVar9 = FFieldNotificationClassDescriptor::WorldStateTextColor.FieldName;
    FVar1._s_0.G = FLinearColor::Red.field0_0x0._s_0.G;
    FVar1._s_0.R = FLinearColor::Red.field0_0x0._s_0.R;
    FVar1._s_0.B = FLinearColor::Red.field0_0x0._s_0.B;
    FVar1._s_0.A = FLinearColor::Red.field0_0x0._s_0.A;
    local_18 = local_18 & 0xffffff00;
    if (((FLinearColor::Red.field0_0x0._s_0.R !=
          (this->WorldStateTextColor).SpecifiedColor.field0_0x0._s_0.R) ||
        (FLinearColor::Red.field0_0x0._s_0.G !=
         (this->WorldStateTextColor).SpecifiedColor.field0_0x0._s_0.G)) ||
       ((FLinearColor::Red.field0_0x0._s_0.B !=
         (this->WorldStateTextColor).SpecifiedColor.field0_0x0._s_0.B ||
        ((FLinearColor::Red.field0_0x0._s_0.A !=
          (this->WorldStateTextColor).SpecifiedColor.field0_0x0._s_0.A ||
         ((this->WorldStateTextColor).ColorUseRule != UseColor_Specified)))))) {
      (this->WorldStateTextColor).SpecifiedColor.field0_0x0 = FVar1;
      (this->WorldStateTextColor).ColorUseRule = (undefined1)local_18;
      FVar10 = FFieldNotificationClassDescriptor::WorldStateTextColor.FieldName;
      (this->WorldStateTextColor).ColorTableId = local_18._1_1_;
      *(undefined2 *)&(this->WorldStateTextColor).field_0x12 = local_18._2_2_;
      FFieldNotificationClassDescriptor::WorldStateTextColor.FieldName.ComparisonIndex =
           FVar9.ComparisonIndex.Value;
      FFieldNotificationClassDescriptor::WorldStateTextColor.FieldName.Number = FVar9.Number;
      local_28._s_0.R =
           (float)FFieldNotificationClassDescriptor::WorldStateTextColor.FieldName.ComparisonIndex.
                  Value;
      local_28._s_0.G =
           (float)FFieldNotificationClassDescriptor::WorldStateTextColor.FieldName.Number;
      FFieldNotificationClassDescriptor::WorldStateTextColor.FieldName = FVar10;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
    local_28._s_0.B =
         (float)FFieldNotificationClassDescriptor::Visibility_WorldMaintenance.BitNumber;
    FVar9 = FFieldNotificationClassDescriptor::Visibility_WorldMaintenance.FieldName;
    if (this->Visibility_WorldMaintenance != Visible) {
      this->Visibility_WorldMaintenance = Visible;
      FVar10 = FFieldNotificationClassDescriptor::Visibility_WorldMaintenance.FieldName;
      FFieldNotificationClassDescriptor::Visibility_WorldMaintenance.FieldName.ComparisonIndex =
           FVar9.ComparisonIndex.Value;
      FFieldNotificationClassDescriptor::Visibility_WorldMaintenance.FieldName.Number = FVar9.Number
      ;
      local_28._s_0.R =
           (float)FFieldNotificationClassDescriptor::Visibility_WorldMaintenance.FieldName.
                  ComparisonIndex.Value;
      local_28._s_0.G =
           (float)FFieldNotificationClassDescriptor::Visibility_WorldMaintenance.FieldName.Number;
      FFieldNotificationClassDescriptor::Visibility_WorldMaintenance.FieldName = FVar10;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
    local_28._s_0.B = (float)FFieldNotificationClassDescriptor::ConnectStateSwitcher.BitNumber;
    FVar13 = FFieldNotificationClassDescriptor::ConnectStateSwitcher.FieldName.ComparisonIndex.Value
    ;
    uVar14 = FFieldNotificationClassDescriptor::ConnectStateSwitcher.FieldName.Number;
    if (this->ConnectStateSwitcher == 1) {
      return;
    }
    this->ConnectStateSwitcher = 1;
  }
  local_28._0_8_ = CONCAT44(uVar14,FVar13.Value);
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  return;
}

// SetWorldStateColor @ 14c046d10

void __thiscall
UDS_VM_W_LoginWorld::SetWorldStateColor(UDS_VM_W_LoginWorld *this,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FName local_18;
  int local_10;
  
  if (((((param_1->field0_0x0)._s_0.R != (this->WorldStateColor).field0_0x0._s_0.R) ||
       ((param_1->field0_0x0)._s_0.G != (this->WorldStateColor).field0_0x0._s_0.G)) ||
      ((param_1->field0_0x0)._s_0.B != (this->WorldStateColor).field0_0x0._s_0.B)) ||
     ((param_1->field0_0x0)._s_0.A != (this->WorldStateColor).field0_0x0._s_0.A)) {
    fVar1 = (param_1->field0_0x0)._s_0.G;
    fVar2 = (param_1->field0_0x0)._s_0.B;
    fVar3 = (param_1->field0_0x0)._s_0.A;
    local_10 = FFieldNotificationClassDescriptor::WorldStateColor.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::WorldStateColor.FieldName;
    (this->WorldStateColor).field0_0x0._s_0.R = (param_1->field0_0x0)._s_0.R;
    (this->WorldStateColor).field0_0x0._s_0.G = fVar1;
    (this->WorldStateColor).field0_0x0._s_0.B = fVar2;
    (this->WorldStateColor).field0_0x0._s_0.A = fVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetWorldStateText @ 14c046d90

void __thiscall UDS_VM_W_LoginWorld::SetWorldStateText(UDS_VM_W_LoginWorld *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FText *pFVar2;
  FText local_18;
  
  pFVar2 = FText::FromString(&local_18,param_1);
  SetWorldStateText(this,pFVar2);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// SetWorldStateText @ 14c046de0

void __thiscall UDS_VM_W_LoginWorld::SetWorldStateText(UDS_VM_W_LoginWorld *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::WorldStateText.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::WorldStateText.FieldName;
  bVar5 = FText::IdenticalTo(&this->WorldStateText,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->WorldStateText).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->WorldStateText).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->WorldStateText).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  pIVar1 = (param_1->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014c046eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x10))();
    return;
  }
  return;
}

// SetWorldStateTextColor @ 14c046ec0

void __thiscall
UDS_VM_W_LoginWorld::SetWorldStateTextColor(UDS_VM_W_LoginWorld *this,FSlateColor *param_1)

{
  ESlateColorStylingMode EVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  EStyleColor EVar5;
  undefined2 uVar6;
  FName local_18;
  int local_10;
  
  if (((((param_1->SpecifiedColor).field0_0x0._s_0.R !=
         (this->WorldStateTextColor).SpecifiedColor.field0_0x0._s_0.R) ||
       ((param_1->SpecifiedColor).field0_0x0._s_0.G !=
        (this->WorldStateTextColor).SpecifiedColor.field0_0x0._s_0.G)) ||
      ((param_1->SpecifiedColor).field0_0x0._s_0.B !=
       (this->WorldStateTextColor).SpecifiedColor.field0_0x0._s_0.B)) ||
     ((((param_1->SpecifiedColor).field0_0x0._s_0.A !=
        (this->WorldStateTextColor).SpecifiedColor.field0_0x0._s_0.A ||
       (EVar1 = (this->WorldStateTextColor).ColorUseRule, EVar1 != param_1->ColorUseRule)) ||
      ((EVar1 == UseColor_ColorTable &&
       ((this->WorldStateTextColor).ColorTableId != param_1->ColorTableId)))))) {
    EVar1 = param_1->ColorUseRule;
    EVar5 = param_1->ColorTableId;
    uVar6 = *(undefined2 *)&param_1->field_0x12;
    fVar2 = (param_1->SpecifiedColor).field0_0x0._s_0.G;
    fVar3 = (param_1->SpecifiedColor).field0_0x0._s_0.B;
    fVar4 = (param_1->SpecifiedColor).field0_0x0._s_0.A;
    local_10 = FFieldNotificationClassDescriptor::WorldStateTextColor.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::WorldStateTextColor.FieldName;
    (this->WorldStateTextColor).SpecifiedColor.field0_0x0._s_0.R =
         (param_1->SpecifiedColor).field0_0x0._s_0.R;
    (this->WorldStateTextColor).SpecifiedColor.field0_0x0._s_0.G = fVar2;
    (this->WorldStateTextColor).SpecifiedColor.field0_0x0._s_0.B = fVar3;
    (this->WorldStateTextColor).SpecifiedColor.field0_0x0._s_0.A = fVar4;
    (this->WorldStateTextColor).ColorUseRule = EVar1;
    (this->WorldStateTextColor).ColorTableId = EVar5;
    *(undefined2 *)&(this->WorldStateTextColor).field_0x12 = uVar6;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14c048a10

void __thiscall UDS_VM_W_LoginWorld::UnbindModel(UDS_VM_W_LoginWorld *this)

{
  UDS_LoginEvent *pUVar1;
  FDS_AuthData *pFVar2;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_LoginEvent::GetEvent();
  if (pUVar1 != (UDS_LoginEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnServerInfoChanged,
               this);
  }
  pFVar2 = TDS_Singleton<FDS_AuthData>::GetInst();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &pFVar2->OnStateChangedServerChangeDelegate,this);
  return;
}

