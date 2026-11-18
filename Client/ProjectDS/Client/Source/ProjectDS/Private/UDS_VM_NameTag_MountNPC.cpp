// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// StaticClass @ 14b788a90

UClass * __cdecl UDS_VM_NameTag_MountNPC::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NameTag_MountNPC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NameTag_MountNPC",
               &Z_Registration_Info_UClass_UDS_VM_NameTag_MountNPC.InnerSingleton,
               StaticRegisterNativesUDS_VM_NameTag_MountNPC,400,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_NameTag_MountNPC>,
               InternalVTableHelperCtorCaller<UDS_VM_NameTag_MountNPC>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NameTag_MountNPC.InnerSingleton;
}

// UDS_VM_NameTag_MountNPC @ 14b78c390

UDS_VM_NameTag_MountNPC * __thiscall
UDS_VM_NameTag_MountNPC::UDS_VM_NameTag_MountNPC
          (UDS_VM_NameTag_MountNPC *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->NameVisibility = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NameTag_MountNPC__6B_;
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  this->OwnerEntityID = 0;
  this->DriverEntityId = 0;
  (this->NametagData).ID_PlayerNameColor = 0;
  (this->NametagData).ID_NameColor = 0;
  this->bIsHitEventActivated = false;
  this->bIsUserFocused = false;
  this->bIsMount = false;
  this->bIsMountAirDismount = false;
  this->bIsMainPlayerMount = false;
  (this->Name).StringTableType = None;
  (this->Name).StringTableID = 0;
  (this->Name).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Name).StringEnumTableNameID.Number = 0;
  (this->Name).DateTime.Ticks = 0;
  (this->Name).TimeSpan.Ticks = 0;
  (this->Name).TimeExpressionType = None;
  (this->Name).IsExpression = false;
  (this->Name).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).UniqueString.Data.ArrayNum = 0;
  (this->Name).UniqueString.Data.ArrayMax = 0;
  (this->Name).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).FormatArgs.ArrayNum = 0;
  (this->Name).FormatArgs.ArrayMax = 0;
  this->NameStyleID = 0;
  this->NameAlpha = 0.0;
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
  this->TitleStyleID = 0;
  this->TitleAlpha = 0.0;
  this->FunctionIconID = 0;
  this->TitleVisibility = Collapsed;
  this->FunctionIconVisibility = Collapsed;
  return this;
}

// UDS_VM_NameTag_MountNPC @ 14b78c4c0

UDS_VM_NameTag_MountNPC * __thiscall
UDS_VM_NameTag_MountNPC::UDS_VM_NameTag_MountNPC
          (UDS_VM_NameTag_MountNPC *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->NameVisibility = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NameTag_MountNPC__6B_;
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  this->OwnerEntityID = 0;
  this->DriverEntityId = 0;
  (this->NametagData).ID_PlayerNameColor = 0;
  (this->NametagData).ID_NameColor = 0;
  this->bIsHitEventActivated = false;
  this->bIsUserFocused = false;
  this->bIsMount = false;
  this->bIsMountAirDismount = false;
  this->bIsMainPlayerMount = false;
  (this->Name).StringTableType = None;
  (this->Name).StringTableID = 0;
  (this->Name).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Name).StringEnumTableNameID.Number = 0;
  (this->Name).DateTime.Ticks = 0;
  (this->Name).TimeSpan.Ticks = 0;
  (this->Name).TimeExpressionType = None;
  (this->Name).IsExpression = false;
  (this->Name).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).UniqueString.Data.ArrayNum = 0;
  (this->Name).UniqueString.Data.ArrayMax = 0;
  (this->Name).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).FormatArgs.ArrayNum = 0;
  (this->Name).FormatArgs.ArrayMax = 0;
  this->NameStyleID = 0;
  this->NameAlpha = 0.0;
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
  this->TitleStyleID = 0;
  this->TitleAlpha = 0.0;
  this->FunctionIconID = 0;
  this->TitleVisibility = Collapsed;
  this->FunctionIconVisibility = Collapsed;
  return this;
}

// ~UDS_VM_NameTag_MountNPC @ 14b78dd70

void __thiscall UDS_VM_NameTag_MountNPC::~UDS_VM_NameTag_MountNPC(UDS_VM_NameTag_MountNPC *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NameTag_MountNPC__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Title).FormatArgs.AllocatorInstance.Data,
             (this->Title).FormatArgs.ArrayNum);
  pFVar1 = (this->Title).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Title).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Name).FormatArgs.AllocatorInstance.Data,
             (this->Name).FormatArgs.ArrayNum);
  pFVar1 = (this->Name).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Name).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b78fab0

IClassDescriptor * __thiscall
UDS_VM_NameTag_MountNPC::GetFieldNotificationDescriptor(UDS_VM_NameTag_MountNPC *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_NameTag_MountNPC::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b78fe30

UClass * __cdecl UDS_VM_NameTag_MountNPC::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NameTag_MountNPC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NameTag_MountNPC",
               &Z_Registration_Info_UClass_UDS_VM_NameTag_MountNPC.InnerSingleton,
               StaticRegisterNativesUDS_VM_NameTag_MountNPC,400,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_NameTag_MountNPC>,
               InternalVTableHelperCtorCaller<UDS_VM_NameTag_MountNPC>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NameTag_MountNPC.InnerSingleton;
}

// GetTickableTickType @ 14b790a30

ETickableTickType __thiscall
UDS_VM_NameTag_MountNPC::GetTickableTickType(UDS_VM_NameTag_MountNPC *this)

{
  return Conditional;
}

// IsUpdate @ 14b790a60

bool __thiscall UDS_VM_NameTag_MountNPC::IsUpdate(UDS_VM_NameTag_MountNPC *this)

{
  return true;
}

// StaticRegisterNativesUDS_VM_NameTag_MountNPC @ 14b790a80

void __cdecl UDS_VM_NameTag_MountNPC::StaticRegisterNativesUDS_VM_NameTag_MountNPC(void)

{
  return;
}

// BindModel @ 14c002330

void __thiscall UDS_VM_NameTag_MountNPC::BindModel(UDS_VM_NameTag_MountNPC *this)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_MountEvent *pUVar3;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10 [2];
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  bVar1 = TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>::UEOpEquals
                    (&this->OwnerActor,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    TMulticastDelegateRegistration<void___cdecl(bool_const_&),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_NameTag_MountNPC>
              ((TMulticastDelegateRegistration<void___cdecl(bool_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar2[0x21].field_0x8,(UDS_VM_NameTag_MountNPC *)(local_res10 + 1),
               (pmf_272966d1 *)this);
    pUVar2 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    TMulticastDelegateRegistration<void___cdecl(UDS_TriggerComponent_*,bool),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_NameTag_MountNPC>
              ((TMulticastDelegateRegistration<void___cdecl(UDS_TriggerComponent_*,bool),FDefaultDelegateUserPolicy>
                *)&pUVar2[0x27].field_0x8,(UDS_VM_NameTag_MountNPC *)(local_res10 + 1),
               (pmf_eb3fd5e7 *)this);
  }
  UDS_CharStateData::GetData((ulong64)local_res10);
  bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)local_res10,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_NameTag_MountNPC>
              ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                *)&pUVar2[7].field_0x20,(UDS_VM_NameTag_MountNPC *)(local_res10 + 1),
               (pmf_bf832f3c *)this);
  }
  UDS_CharStateData::GetData((ulong64)&local_res8);
  bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_res8,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x20,this);
    pUVar2 = FWeakObjectPtr::Get(&local_res8);
    TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_NameTag_MountNPC>
              ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                *)&pUVar2[7].field_0x20,(UDS_VM_NameTag_MountNPC *)(local_res10 + 1),
               (pmf_bf832f3c *)this);
  }
  if (this->bIsMainPlayerMount == true) {
    pUVar3 = UDS_MountEvent::GetEvent();
    if (pUVar3 != (UDS_MountEvent *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->UpdateMountListDel,
                 this);
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddUObject<UDS_VM_NameTag_MountNPC>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &pUVar3->UpdateMountListDel,(UDS_VM_NameTag_MountNPC *)(local_res10 + 1),
                 (pmf_541f1891 *)this);
    }
  }
  return;
}

// OnChangeUserFocused @ 14c025800

void __thiscall
UDS_VM_NameTag_MountNPC::OnChangeUserFocused(UDS_VM_NameTag_MountNPC *this,bool *param_1)

{
  this->bIsUserFocused = *param_1;
  return;
}

// OnCharStateChanged @ 14c025d80

void __thiscall
UDS_VM_NameTag_MountNPC::OnCharStateChanged
          (UDS_VM_NameTag_MountNPC *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  bool bVar1;
  bool bVar2;
  UDS_CharStateData *pUVar3;
  FWeakObjectPtr local_res10 [2];
  EDS_CharState local_res20;
  EDS_CharDetailState local_18 [4];
  
  local_res10[0] = param_1.WeakPtr;
  pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
  local_res20 = Mount;
  bVar1 = UDS_CharStateData::HasCharState(pUVar3,&local_res20);
  if (!bVar1) {
    return;
  }
  pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
  local_res20 = CONCAT44(local_res20._4_4_,0x6d);
  bVar1 = UDS_CharStateData::HasCharDetailState(pUVar3,(EDS_CharDetailState *)&local_res20);
  if (bVar1) {
    pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
    local_18[0] = Mount_Flying;
    bVar1 = UDS_CharStateData::HasCharDetailState(pUVar3,local_18);
    if (!bVar1) goto LAB_14c025dfb;
  }
  else {
LAB_14c025dfb:
    pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
    local_18[1] = 0x1d;
    bVar1 = UDS_CharStateData::HasCharDetailState(pUVar3,local_18 + 1);
    if (!bVar1) {
      pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
      local_18[2] = 0x22;
      bVar1 = UDS_CharStateData::HasCharDetailState(pUVar3,local_18 + 2);
      if (!bVar1) {
        pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
        local_18[3] = 0x23;
        bVar2 = UDS_CharStateData::HasCharDetailState(pUVar3,local_18 + 3);
        bVar1 = false;
        if (!bVar2) goto LAB_14c025e66;
      }
    }
  }
  bVar1 = true;
LAB_14c025e66:
  this->bIsMountAirDismount = bVar1;
  RefreshName(this);
  RefreshTitle(this);
  RefreshFunctionIcon(this);
  return;
}

// OnCloseInit @ 14c0283e0

void __thiscall UDS_VM_NameTag_MountNPC::OnCloseInit(UDS_VM_NameTag_MountNPC *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[0x21].field_0x8,this);
    pUVar2 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[0x27].field_0x8,this);
  }
  UDS_ViewModelBase::OnCloseInit((UDS_ViewModelBase *)this);
  return;
}

// OnDriverCharStateChanged @ 14c029380

void __thiscall
UDS_VM_NameTag_MountNPC::OnDriverCharStateChanged
          (UDS_VM_NameTag_MountNPC *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  FName *pFVar1;
  EDS_StateTagType local_res18 [16];
  
  local_res18[0] = Mount;
  pFVar1 = &FDS_GameplayTags::GetStateTag(local_res18)->TagName;
  if ((param_2->StateTag).TagName == *pFVar1) {
    this->bIsMount = param_2->bIsStateTagOn;
    RefreshName(this);
    RefreshTitle(this);
    RefreshFunctionIcon(this);
  }
  return;
}

// OnMainPlayerMountListUpdated @ 14c02c9a0

void __thiscall UDS_VM_NameTag_MountNPC::OnMainPlayerMountListUpdated(UDS_VM_NameTag_MountNPC *this)

{
  RefreshName(this);
  RefreshTitle(this);
  RefreshFunctionIcon(this);
  return;
}

// OnSetViewModel @ 14c031220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall
UDS_VM_NameTag_MountNPC::OnSetViewModel
          (UDS_VM_NameTag_MountNPC *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  FSharedReferencer<1> *pFVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  UDS_LogManager *pUVar7;
  FDS_EntityBase *pFVar8;
  FWeakObjectPtr *this_00;
  UClass *pUVar9;
  UDS_NPCMountData *pUVar10;
  ulong64 uVar11;
  UObject *pUVar12;
  UDS_CharStateData *this_01;
  FGameplayTag *pFVar13;
  undefined1 auStackY_308 [32];
  EDS_StateTagType local_2c8 [8];
  ulong64 local_2c0;
  FWeakObjectPtr local_2b8;
  FWeakObjectPtr local_2b0;
  TSharedPtr<FDS_ViewModelContext_Entity,1> local_2a8;
  FWeakObjectPtr local_298;
  UObject *local_290;
  TSharedPtr<FDS_ViewModelContext,1> local_288;
  undefined1 local_278 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_308;
  pFVar1 = &param_1->SharedReferenceCount;
  pTVar3 = pFVar1->ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_288.Object = param_1->Object;
  local_288.SharedReferenceCount.ReferenceController = pFVar1->ReferenceController;
  if (local_288.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_288.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_288.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_Entity>(&local_2a8,&local_288);
  if (local_2a8.Object == (FDS_ViewModelContext_Entity *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1407546222683619275>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_MountNpc.cpp"
                       ,0x35,"context.IsValid()");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_268._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_268,"UDS_VM_NameTag_MountNPC::OnSetViewModel",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_268.Ptr,0x37,L"FDS_ViewModelContext_NameTag is Invalid.");
      if ((void *)local_268._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_268._padding_);
      }
    }
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1407546222683619272>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_MountNpc.cpp"
                       ,0x38,"false");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    goto LAB_14c031685;
  }
  local_2c0 = (local_2a8.Object)->EntityID;
  pFVar8 = FDS_EntityBase::GetEntityBase(&local_2c0);
  if (pFVar8 == (FDS_EntityBase *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_NameTag_MountNPC::OnSetViewModel",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_148.Ptr,0x40,L"entityBase is nullptr. EntityID : %llu");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1407546222683619263>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_MountNpc.cpp"
                       ,0x41,"false");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    goto LAB_14c031685;
  }
  UDS_NPCMountData::GetData((ulong64)&local_2b0);
  bVar6 = TWeakObjectPtr<UDS_NPCMountData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NPCMountData,FWeakObjectPtr> *)&local_2b0,(void *)0x0);
  if (bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1407546222683619256>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_MountNpc.cpp"
                       ,0x48,"false");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    goto LAB_14c031685;
  }
  this_00 = (FWeakObjectPtr *)(**(code **)(pFVar8->_padding_ + 0x150))(pFVar8,local_278);
  local_290 = FWeakObjectPtr::Get(this_00);
  if (local_290 == (UObject *)0x0) {
LAB_14c0314e9:
    local_290 = (UObject *)0x0;
  }
  else {
    pUVar9 = Z_Construct_UClass_ADS_EntityActorBase_NoRegister();
    iVar2 = (int)pUVar9->_padding_;
    if ((*(int *)(*(longlong *)&local_290->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&local_290->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar9->_padding_)) goto LAB_14c0314e9;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_290 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_290);
  }
  FWeakObjectPtr::operator=(&(this->OwnerActor).WeakPtr,(FObjectPtr)&local_290);
  bVar6 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
  if (bVar6) {
    this->OwnerEntityID = local_2c0;
    pUVar10 = (UDS_NPCMountData *)FWeakObjectPtr::Get(&local_2b0);
    uVar11 = UDS_NPCMountData::GetDriverEntityID(pUVar10);
    this->DriverEntityId = uVar11;
    pUVar12 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    this->bIsUserFocused = (bool)pUVar12[0x26].field_0x20;
    UDS_NameTagDataAsset::GetInst();
    bVar6 = FWeakObjectPtr::IsValid(&local_2b8);
    if (!bVar6) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1407546222683619240>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_MountNpc.cpp"
                         ,0x58,"pNametagAsset.IsValid()");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    bVar6 = FWeakObjectPtr::IsValid(&local_2b8);
    if (bVar6) {
      pUVar12 = FWeakObjectPtr::Get(&local_2b8);
      uVar5 = *(undefined4 *)&pUVar12[0xb].field_0xc;
      (this->NametagData).ID_PlayerNameColor = *(undefined4 *)&pUVar12[0xb].field_0x8;
      (this->NametagData).ID_NameColor = uVar5;
    }
    UDS_CharStateData::GetData((ulong64)&local_298);
    bVar6 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_298,(void *)0x0);
    if (!bVar6) {
      this_01 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_298);
      local_2c8[0] = Mount;
      pFVar13 = FDS_GameplayTags::GetStateTag(local_2c8);
      bVar6 = UDS_CharStateData::HasStateTag(this_01,pFVar13);
      this->bIsMount = bVar6;
    }
    pUVar10 = (UDS_NPCMountData *)FWeakObjectPtr::Get(&local_2b0);
    bVar6 = UDS_NPCMountData::IsMainPlayerMountData(pUVar10);
    this->bIsMainPlayerMount = bVar6;
    RefreshName(this);
    RefreshTitle(this);
    RefreshFunctionIcon(this);
  }
  else {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1407546222683619249>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_MountNpc.cpp"
                       ,0x4f,"false");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
LAB_14c031685:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (pFVar1->ReferenceController);
  return;
}

// OnTriggerOverlaped @ 14c039df0

void __thiscall
UDS_VM_NameTag_MountNPC::OnTriggerOverlaped
          (UDS_VM_NameTag_MountNPC *this,UDS_TriggerComponent *param_1,bool param_2)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  UDS_NPCDataSet *this_00;
  UObject *pUVar7;
  longlong lVar8;
  FName *pFVar9;
  FWeakObjectPtr FStackX_8;
  FName FStack_48;
  int iStack_40;
  FName FStack_38;
  int iStack_30;
  FName FStack_28;
  int iStack_20;
  FName FStack_18;
  int iStack_10;
  
  if (param_1->TriggerType != FunctionIcon) {
    return;
  }
  TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&FStackX_8);
  bVar4 = FWeakObjectPtr::IsValid(&FStackX_8);
  if (bVar4) {
    bVar4 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
    if (bVar4) {
      this_00 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&FStackX_8);
      iVar6 = UDS_NPCDataSet::GetNpcRoleTypeIconID(this_00);
      iVar3 = FFieldNotificationClassDescriptor::FunctionIconVisibility.BitNumber;
      FVar2 = FFieldNotificationClassDescriptor::FunctionIconVisibility.FieldName;
      if (iVar6 == 0) {
        if (this->FunctionIconVisibility == Collapsed) {
          return;
        }
        this->FunctionIconVisibility = Collapsed;
        iStack_40 = iVar3;
        pFVar9 = &FStack_48;
        lVar8 = this->_padding_;
        FStack_48 = FVar2;
      }
      else {
        pUVar7 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
        cVar5 = (**(code **)(*(longlong *)&pUVar7[0x11].field_0x18 + 0x188))
                          (&pUVar7[0x11].field_0x18,5);
        iVar3 = FFieldNotificationClassDescriptor::FunctionIconVisibility.BitNumber;
        FVar2 = FFieldNotificationClassDescriptor::FunctionIconVisibility.FieldName;
        if (cVar5 == '\0') {
          if (this->FunctionIconVisibility == Collapsed) {
            return;
          }
          this->FunctionIconVisibility = Collapsed;
          iStack_30 = iVar3;
          pFVar9 = &FStack_38;
          lVar8 = this->_padding_;
          FStack_38 = FVar2;
        }
        else {
          if (this->FunctionIconVisibility != SelfHitTestInvisible) {
            this->FunctionIconVisibility = SelfHitTestInvisible;
            iStack_20 = iVar3;
            FStack_28 = FVar2;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_28);
          }
          iStack_10 = FFieldNotificationClassDescriptor::FunctionIconID.BitNumber;
          FStack_18 = FFieldNotificationClassDescriptor::FunctionIconID.FieldName;
          if (this->FunctionIconID == iVar6) {
            return;
          }
          this->FunctionIconID = iVar6;
          pFVar9 = &FStack_18;
          lVar8 = this->_padding_;
        }
      }
      (**(code **)(lVar8 + 0x38))(&this->_padding_,pFVar9);
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1407546222683619034>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_MountNpc.cpp"
                       ,0x126,"false");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnUpdate @ 14c03a010

void __thiscall UDS_VM_NameTag_MountNPC::OnUpdate(UDS_VM_NameTag_MountNPC *this,float param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  code *pcVar3;
  FName FVar4;
  int iVar5;
  bool bVar6;
  UObject *pUVar7;
  float fVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  FName local_48;
  int local_40;
  FName local_38;
  int local_30;
  double local_28;
  
  bVar6 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
  if (bVar6) {
    pUVar7 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    lVar2 = *(longlong *)(pUVar7 + 0xb);
    if (lVar2 == 0) {
      uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      dVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
      local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      auVar1 = *(undefined1 (*) [16])(lVar2 + 0x210);
      uVar10 = auVar1._0_4_;
      uVar11 = auVar1._4_4_;
      dVar12 = auVar1._8_8_;
      local_28 = *(double *)(lVar2 + 0x220);
    }
    dVar9 = (double)CONCAT44(uVar11,uVar10) - ADS_CameraManager::CameraLocation.field0_0x0._s_0.X;
    fVar8 = UDS_NameTagDataAsset::GetAlphaByDistance
                      (NoneBattleNpc,Name,
                       (float)((dVar12 - ADS_CameraManager::CameraLocation.field0_0x0._s_0.Y) *
                               (dVar12 - ADS_CameraManager::CameraLocation.field0_0x0._s_0.Y) +
                               dVar9 * dVar9 +
                              (local_28 - ADS_CameraManager::CameraLocation.field0_0x0._s_0.Z) *
                              (local_28 - ADS_CameraManager::CameraLocation.field0_0x0._s_0.Z)));
    iVar5 = FFieldNotificationClassDescriptor::NameAlpha.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::NameAlpha.FieldName;
    if (fVar8 != this->NameAlpha) {
      this->NameAlpha = fVar8;
      local_40 = iVar5;
      local_48 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
    }
    local_30 = FFieldNotificationClassDescriptor::TitleAlpha.BitNumber;
    local_38 = FFieldNotificationClassDescriptor::TitleAlpha.FieldName;
    if (fVar8 != this->TitleAlpha) {
      this->TitleAlpha = fVar8;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
    }
  }
  else {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1407546222683619066>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_MountNpc.cpp"
                       ,0x106,"false");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Refresh @ 14c03da90

void __thiscall UDS_VM_NameTag_MountNPC::Refresh(UDS_VM_NameTag_MountNPC *this)

{
  RefreshName(this);
  RefreshTitle(this);
  RefreshFunctionIcon(this);
  return;
}

// RefreshFunctionIcon @ 14c03e320

void __thiscall UDS_VM_NameTag_MountNPC::RefreshFunctionIcon(UDS_VM_NameTag_MountNPC *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  UDS_NPCDataSet *this_00;
  UObject *pUVar7;
  longlong lVar8;
  FName *pFVar9;
  FWeakObjectPtr local_res8;
  FName local_48;
  int local_40;
  FName local_38;
  int local_30;
  FName local_28;
  int local_20;
  FName local_18;
  int local_10;
  
  TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_res8);
  bVar4 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar4) {
    bVar4 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
    if (bVar4) {
      this_00 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&local_res8);
      iVar6 = UDS_NPCDataSet::GetNpcRoleTypeIconID(this_00);
      iVar3 = FFieldNotificationClassDescriptor::FunctionIconVisibility.BitNumber;
      FVar2 = FFieldNotificationClassDescriptor::FunctionIconVisibility.FieldName;
      if (iVar6 == 0) {
        if (this->FunctionIconVisibility == Collapsed) {
          return;
        }
        this->FunctionIconVisibility = Collapsed;
        local_40 = iVar3;
        pFVar9 = &local_48;
        lVar8 = this->_padding_;
        local_48 = FVar2;
      }
      else {
        pUVar7 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
        cVar5 = (**(code **)(*(longlong *)&pUVar7[0x11].field_0x18 + 0x188))
                          (&pUVar7[0x11].field_0x18,5);
        iVar3 = FFieldNotificationClassDescriptor::FunctionIconVisibility.BitNumber;
        FVar2 = FFieldNotificationClassDescriptor::FunctionIconVisibility.FieldName;
        if (cVar5 == '\0') {
          if (this->FunctionIconVisibility == Collapsed) {
            return;
          }
          this->FunctionIconVisibility = Collapsed;
          local_30 = iVar3;
          pFVar9 = &local_38;
          lVar8 = this->_padding_;
          local_38 = FVar2;
        }
        else {
          if (this->FunctionIconVisibility != SelfHitTestInvisible) {
            this->FunctionIconVisibility = SelfHitTestInvisible;
            local_20 = iVar3;
            local_28 = FVar2;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
          }
          local_10 = FFieldNotificationClassDescriptor::FunctionIconID.BitNumber;
          local_18 = FFieldNotificationClassDescriptor::FunctionIconID.FieldName;
          if (this->FunctionIconID == iVar6) {
            return;
          }
          this->FunctionIconID = iVar6;
          pFVar9 = &local_18;
          lVar8 = this->_padding_;
        }
      }
      (**(code **)(lVar8 + 0x38))(&this->_padding_,pFVar9);
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1407546222683619034>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_MountNpc.cpp"
                       ,0x126,"false");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// RefreshName @ 14c03eea0

void __thiscall UDS_VM_NameTag_MountNPC::RefreshName(UDS_VM_NameTag_MountNPC *this)

{
  ulonglong uVar1;
  void *_Src;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  UObject *pUVar7;
  FDS_MountBaseTableRow *pFVar8;
  FObjectPtr_u_0 *this_00;
  UClass *pUVar9;
  FObjectPtr_u_0 FVar10;
  longlong lVar11;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  TWeakObjectPtr<UDS_NPCMountData,FWeakObjectPtr> local_res20;
  UObject *local_98;
  undefined8 local_90;
  FName local_88;
  int local_80;
  FName local_78;
  int local_70;
  FName local_68;
  int local_60;
  FName local_58;
  int local_50;
  FString local_48;
  FString local_38;
  
  local_50 = FFieldNotificationClassDescriptor::NameVisibility.BitNumber;
  local_58 = FFieldNotificationClassDescriptor::NameVisibility.FieldName;
  if ((this->bIsMount == true) || (this->bIsMountAirDismount == true)) {
    if (this->NameVisibility == Collapsed) {
      return;
    }
    this->NameVisibility = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
    return;
  }
  UDS_NPCMountData::GetData((ulong64)&local_res20);
  bVar4 = TWeakObjectPtr<UDS_NPCMountData,FWeakObjectPtr>::UEOpEquals(&local_res20,(void *)0x0);
  if (bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1407546222683619141>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_MountNpc.cpp"
                       ,0xbb,"false");
    if (!bVar4) {
      return;
    }
code_r0x00014c03f13b:
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (this->bIsMainPlayerMount == true) {
    TDS_DataSetGetter<UDS_MountDataSet>::Get((ulong64)&local_res10);
    bVar4 = TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MountDataSet,FWeakObjectPtr> *)&local_res10,(void *)0x0);
    if (bVar4) goto LAB_14c03f1fd;
    pUVar6 = FWeakObjectPtr::Get(&local_res10);
    pUVar7 = FWeakObjectPtr::Get(&local_res10);
    uVar1 = *(ulonglong *)&pUVar7[4].field_0x20;
    if (*(int *)&pUVar6[1].field_0x20 != *(int *)&pUVar6[2].field_0x24) {
      pUVar7 = *(UObject **)&pUVar6[3].field_0x8;
      if (*(UObject **)&pUVar6[3].field_0x8 == (UObject *)0x0) {
        pUVar7 = pUVar6 + 3;
      }
      iVar5 = *(int *)(&pUVar7->field_0x0 +
                      ((ulonglong)(*(int *)&pUVar6[3].field_0x10 - 1) &
                      (uVar1 >> 0x20) * 0x17 + uVar1) * 4);
      if (iVar5 != -1) {
        do {
          if (*(ulonglong *)(*(longlong *)&pUVar6[1].field_0x18 + (longlong)iVar5 * 0x18) == uVar1)
          {
            this_00 = (FObjectPtr_u_0 *)
                      TMapBase<unsigned___int64,TObjectPtr<UDS_DataBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>_>
                      ::FindChecked((TMapBase<unsigned___int64,TObjectPtr<UDS_DataBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>_>
                                     *)&pUVar6[1].field_0x18,uVar1);
            pUVar6 = (UObject *)0x0;
            if (this_00->Handle != (UObject *)0x0) {
              pUVar9 = Z_Construct_UClass_UDS_MountData_NoRegister();
              bVar4 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar9);
              if (bVar4) {
                pUVar6 = this_00->Handle;
              }
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar6);
            }
            local_res8.ObjectIndex = 0;
            local_res8.ObjectSerialNumber = 0;
            local_98 = pUVar6;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar6);
            }
            FVar10.Handle = (UObject *)&local_98;
            goto LAB_14c03eff3;
          }
          iVar5 = *(int *)(*(longlong *)&pUVar6[1].field_0x18 + 0x10 + (longlong)iVar5 * 0x18);
        } while (iVar5 != -1);
      }
    }
    FVar10.Handle = (UObject *)&local_90;
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_90 = 0;
LAB_14c03eff3:
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)FVar10);
    bVar4 = TWeakObjectPtr<UDS_MountData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MountData,FWeakObjectPtr> *)&local_res8,(void *)0x0);
    if (bVar4) goto LAB_14c03f1fd;
    pUVar6 = FWeakObjectPtr::Get(&local_res8);
    ::FString::FString(&local_38,(FString *)&pUVar6[2].field_0x20);
    if (local_38.Data.ArrayNum < 2) {
      pFVar8 = FDS_MountBaseTableRow::GetRefByEntityID(this->OwnerEntityID,true);
      FDS_Text::SetTextFromStringID(&this->Name,&pFVar8->ID_DefaultName);
    }
    else {
      pUVar6 = FWeakObjectPtr::Get(&local_res8);
      FDS_Text::SetTextFromUniqueString(&this->Name,(FString *)&pUVar6[2].field_0x20);
    }
  }
  else {
    TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_res18);
    bVar4 = FWeakObjectPtr::IsValid(&local_res18);
    if (!bVar4) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1407546222683619112>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_MountNpc.cpp"
                         ,0xd8,"false");
      if (!bVar4) {
        return;
      }
      goto code_r0x00014c03f13b;
    }
    pUVar6 = FWeakObjectPtr::Get(&local_res18);
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = *(int *)&pUVar6[5].field_0x10;
    lVar11 = (longlong)local_48.Data.ArrayNum;
    _Src = *(void **)&pUVar6[5].field_0x8;
    if (local_48.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_48.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src,lVar11 * 2);
    }
    if (local_48.Data.ArrayNum < 2) {
      pFVar8 = FDS_MountBaseTableRow::GetRefByEntityID(this->OwnerEntityID,true);
      FDS_Text::SetTextFromStringID(&this->Name,&pFVar8->ID_DefaultName);
      local_38.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    }
    else {
      FDS_Text::SetTextFromUniqueString(&this->Name,&local_48);
      local_38.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
LAB_14c03f1fd:
  iVar5 = FFieldNotificationClassDescriptor::NameVisibility.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::NameVisibility.FieldName;
  if (this->NameVisibility != SelfHitTestInvisible) {
    this->NameVisibility = SelfHitTestInvisible;
    local_80 = iVar5;
    local_88 = FVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
  }
  local_70 = FFieldNotificationClassDescriptor::Name.BitNumber;
  local_78 = FFieldNotificationClassDescriptor::Name.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  local_60 = FFieldNotificationClassDescriptor::NameStyleID.BitNumber;
  local_68 = FFieldNotificationClassDescriptor::NameStyleID.FieldName;
  iVar5 = (this->NametagData).ID_NameColor;
  if (this->NameStyleID != iVar5) {
    this->NameStyleID = iVar5;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  }
  return;
}

// RefreshTitle @ 14c03f900

void __thiscall UDS_VM_NameTag_MountNPC::RefreshTitle(UDS_VM_NameTag_MountNPC *this)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  UObject *pUVar5;
  longlong lVar6;
  FWeakObjectPtr local_res8;
  FName local_58;
  int local_50;
  FName local_48;
  int local_40;
  FName local_38;
  int local_30;
  FName local_28;
  int local_20;
  FString local_18;
  
  TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_res8);
  bVar4 = FWeakObjectPtr::IsValid(&local_res8);
  local_20 = FFieldNotificationClassDescriptor::TitleVisibility.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::TitleVisibility.FieldName;
  if (bVar4) {
    if ((this->bIsMount == true) || (this->bIsMountAirDismount == true)) {
      if (this->TitleVisibility != Collapsed) {
        this->TitleVisibility = Collapsed;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
        return;
      }
    }
    else {
      pUVar5 = FWeakObjectPtr::Get(&local_res8);
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.Data.ArrayNum = *(int *)&pUVar5[5].field_0x20;
      lVar6 = (longlong)local_18.Data.ArrayNum;
      _Src = *(void **)&pUVar5[5].field_0x18;
      if (local_18.Data.ArrayNum == 0) {
        local_18.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)&local_18,
                   local_18.Data.ArrayNum,&local_18.Data.ArrayMax);
        memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar6 * 2);
      }
      FDS_Text::SetTextFromUniqueString(&this->Title,&local_18);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      local_50 = FFieldNotificationClassDescriptor::Title.BitNumber;
      local_58 = FFieldNotificationClassDescriptor::Title.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
      iVar1 = FFieldNotificationClassDescriptor::TitleVisibility.BitNumber;
      FVar3 = FFieldNotificationClassDescriptor::TitleVisibility.FieldName;
      if (this->TitleVisibility != SelfHitTestInvisible) {
        this->TitleVisibility = SelfHitTestInvisible;
        local_40 = iVar1;
        local_48 = FVar3;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
      }
      local_30 = FFieldNotificationClassDescriptor::TitleStyleID.BitNumber;
      local_38 = FFieldNotificationClassDescriptor::TitleStyleID.FieldName;
      iVar1 = (this->NametagData).ID_PlayerNameColor;
      if (this->TitleStyleID != iVar1) {
        this->TitleStyleID = iVar1;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
      }
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1407546222683619087>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_MountNpc.cpp"
                       ,0xf1,"false");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// UnbindModel @ 14c048750

void __thiscall UDS_VM_NameTag_MountNPC::UnbindModel(UDS_VM_NameTag_MountNPC *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  
  bVar1 = TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>::UEOpEquals
                    (&this->OwnerActor,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[0x21].field_0x8,this);
    pUVar2 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[0x27].field_0x8,this);
  }
  UDS_CharStateData::GetData((ulong64)&local_res8);
  bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_res8,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x20,this);
  }
  UDS_CharStateData::GetData((ulong64)&local_res10);
  bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res10);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[7].field_0x20,this);
  }
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  return;
}

