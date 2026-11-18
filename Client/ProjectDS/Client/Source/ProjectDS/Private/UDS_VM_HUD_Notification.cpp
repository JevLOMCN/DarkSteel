// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// SetNotificationListVisibility_WrapperImpl @ 14b6756a0

void __cdecl
UDS_VM_HUD_Notification::SetNotificationListVisibility_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0xb8) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::NotificationListVisibility.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::NotificationListVisibility.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetNotificationIconVisibility_WrapperImpl @ 14b6756b0

void __cdecl
UDS_VM_HUD_Notification::SetNotificationIconVisibility_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0xb9) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::NotificationIconVisibility.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::NotificationIconVisibility.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b6756c0

UClass * __cdecl UDS_VM_HUD_Notification::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_Notification.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_Notification",
               &Z_Registration_Info_UClass_UDS_VM_HUD_Notification.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_Notification,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_HUD_Notification>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_Notification>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_Notification.InnerSingleton;
}

// UDS_VM_HUD_Notification @ 14b6794d0

UDS_VM_HUD_Notification * __thiscall
UDS_VM_HUD_Notification::UDS_VM_HUD_Notification
          (UDS_VM_HUD_Notification *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->NotificationIconVisibility = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_Notification__6B_;
  (this->NotificationIconViewModel).field0_0x0.DebugPtr = (UDS_VM_HUD_Notification_Icon *)0x0;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  return this;
}

// UDS_VM_HUD_Notification @ 14b679530

UDS_VM_HUD_Notification * __thiscall
UDS_VM_HUD_Notification::UDS_VM_HUD_Notification
          (UDS_VM_HUD_Notification *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->NotificationIconVisibility = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_Notification__6B_;
  (this->NotificationIconViewModel).field0_0x0.DebugPtr = (UDS_VM_HUD_Notification_Icon *)0x0;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  return this;
}

// ~UDS_VM_HUD_Notification @ 14b67b250

void __thiscall UDS_VM_HUD_Notification::~UDS_VM_HUD_Notification(UDS_VM_HUD_Notification *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_Notification__6B_;
  pFVar1 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b67db10

IClassDescriptor * __thiscall
UDS_VM_HUD_Notification::GetFieldNotificationDescriptor(UDS_VM_HUD_Notification *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_HUD_Notification::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b67e2f0

UClass * __cdecl UDS_VM_HUD_Notification::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_Notification.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_Notification",
               &Z_Registration_Info_UClass_UDS_VM_HUD_Notification.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_Notification,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_HUD_Notification>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_Notification>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_Notification.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_HUD_Notification @ 14b67f140

void __cdecl UDS_VM_HUD_Notification::StaticRegisterNativesUDS_VM_HUD_Notification(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_HUD_Notification_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnNotificationInfoChanged @ 14b6805d0

void __cdecl
UDS_VM_HUD_Notification::execOnNotificationInfoChanged
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
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
  pTVar2 = &local_18;
  if ((TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress
      != (TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnNotificationInfoChanged((UDS_VM_HUD_Notification *)param_1,pTVar2);
  DestructItems<FDS_NotificationData,int>
            ((FDS_NotificationData *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FDS_NotificationData *)local_18.AllocatorInstance.Data != (FDS_NotificationData *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// BindModel @ 14bf40550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_HUD_Notification::BindModel(UDS_VM_HUD_Notification *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_NotificationManager *pUVar3;
  FName *pFVar4;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148;
  FName local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  local_140 = (FName)UDS_NotificationManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_140 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_140);
  }
  local_148.ObjectIndex = 0;
  local_148.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_140 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_140);
  }
  FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_140);
  bVar1 = TWeakObjectPtr<UDS_NotificationManager,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NotificationManager,FWeakObjectPtr> *)&local_148,
                     (void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_HUD_Notification::BindModel",0x22,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x34,L"notificationManager is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pUVar3 = (UDS_NotificationManager *)FWeakObjectPtr::Get(&local_148);
    UDS_NotificationManager::UnBindNotificationInfoDelegate(pUVar3,(UObject *)this);
    pUVar3 = (UDS_NotificationManager *)FWeakObjectPtr::Get(&local_148);
    pFVar4 = ::FName::FName(&local_140,"OnNotificationInfoChanged");
    UDS_NotificationManager::BindNotificationInfoDelegate(pUVar3,(UObject *)this,*pFVar4);
  }
  return;
}

// InitViewModel @ 14bf5a2c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_HUD_Notification::InitViewModel(UDS_VM_HUD_Notification *this)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_HUD_Notification_Icon *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->NotificationIconViewModel).field0_0x0.DebugPtr == (UDS_VM_HUD_Notification_Icon *)0x0)
  {
    local_a8.ComparisonIndex.Value = 0;
    local_a8.Number = 0;
    pUVar3 = Z_Construct_UClass_UDS_VM_HUD_Notification_Icon_NoRegister();
    FVar1 = local_a8;
    if (local_a8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar4 = Z_Construct_UClass_UDS_VM_HUD_Notification_Icon_NoRegister();
    CheckIsClassChildOf_Internal(pUVar4,pUVar3);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar3);
    FVar2 = local_a8;
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
    local_a8.Number = FVar1.Number;
    local_98._16_4_ = local_a8.ComparisonIndex.Value;
    local_98._20_4_ = local_a8.Number;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_a8 = FVar2;
    local_98._8_8_ = this;
    pUVar5 = (UDS_VM_HUD_Notification_Icon *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_HUD_Notification_Icon *)0x0) {
      *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_HUD_Notification_Icon *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->NotificationIconViewModel).field0_0x0.DebugPtr = pUVar5;
  }
  return;
}

// OnChangeNotificationListVisibility @ 14bf5f190

void __thiscall
UDS_VM_HUD_Notification::OnChangeNotificationListVisibility(UDS_VM_HUD_Notification *this)

{
  FName local_18;
  int local_10;
  
  this->NotificationListVisibility = this->NotificationListVisibility != Collapsed;
  local_10 = FFieldNotificationClassDescriptor::NotificationListVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::NotificationListVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnNotificationInfoChanged @ 14bf64f60

void __thiscall
UDS_VM_HUD_Notification::OnNotificationInfoChanged
          (UDS_VM_HUD_Notification *this,
          TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FDS_TextFormatArg *pFVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  undefined4 uVar8;
  ESlateVisibility EVar9;
  bool bVar10;
  UObject *pUVar11;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  UScriptStruct *pUVar14;
  UDS_ViewModelContextManager *this_01;
  undefined8 *puVar15;
  ulong64 uVar16;
  ulonglong uVar17;
  FDS_ViewModelContext *pFVar18;
  FScriptContainerElement *pFVar19;
  undefined1 local_res18 [8];
  uint local_res20;
  UDS_VM_HUD_Notification *local_100;
  UDS_UserObjectListItem *local_f8;
  FDS_EntryBindingEventField *local_f0;
  FScriptContainerElement *local_e8;
  longlong *local_e0;
  FName local_d8;
  int local_d0;
  FName local_c8;
  int local_c0;
  FName local_b8;
  int local_b0;
  FName local_a8;
  int local_a0;
  TSharedPtr<FDS_ViewModelContext,1> local_98;
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  FDestructionSentinel local_68;
  UStruct **local_50;
  
  iVar3 = param_1->ArrayNum;
  plVar2 = &this->_padding_;
  EVar9 = SelfHitTestInvisible;
  if (iVar3 == 0) {
    EVar9 = Collapsed;
  }
  this->NotificationIconVisibility = EVar9;
  local_d0 = FFieldNotificationClassDescriptor::NotificationIconVisibility.BitNumber;
  local_d8 = FFieldNotificationClassDescriptor::NotificationIconVisibility.FieldName;
  local_e0 = plVar2;
  (**(code **)(*plVar2 + 0x38))(plVar2,&local_d8);
  local_f0 = &this->EntryBindingEventField;
  FDS_EntryBindingEventField::Reset(local_f0);
  if (iVar3 == 0) {
    this->NotificationListVisibility = Collapsed;
    local_c0 = FFieldNotificationClassDescriptor::NotificationListVisibility.BitNumber;
    local_c8 = FFieldNotificationClassDescriptor::NotificationListVisibility.FieldName;
    (**(code **)(*plVar2 + 0x38))(plVar2,&local_c8);
    local_b0 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
    local_b8 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
    (**(code **)(*plVar2 + 0x38))(plVar2,&local_b8);
    return;
  }
  local_res20 = param_1->ArrayNum;
  uVar17 = (ulonglong)(int)local_res20;
  uVar8 = local_78.SharedReferenceCount.ReferenceController._4_4_;
  pFVar19 = (param_1->AllocatorInstance).Data;
  local_e8 = pFVar19 + uVar17 * 0x58;
  while( true ) {
    pFVar7 = local_e8;
    pFVar18 = (FDS_ViewModelContext *)0x0;
    if (param_1->ArrayNum != (int)uVar17) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FDS_NotificationData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar19 == pFVar7) break;
    pUVar11 = GetTransientPackageAsObject();
    this_00 = NewObject<UDS_UserObjectListItem>(pUVar11);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UDS_UserObjectListItem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pFVar12 = ::operator_new(0x90);
    if (pFVar12 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar12->ViewModelTemplateKey = 0;
      *(undefined8 *)&pFVar12[1].ViewModelName.Number = 0;
      *(undefined4 *)&pFVar12[1].field_0x1c = 0;
      *(undefined4 *)((longlong)&pFVar12[2]._padding_ + 1) = 0;
      *(undefined2 *)((longlong)&pFVar12[2]._padding_ + 5) = 0;
      *(undefined1 *)((longlong)&pFVar12[2]._padding_ + 7) = 0;
      *(undefined2 *)((longlong)&pFVar12[3].DerivedStaticStruct + 5) = 0;
      *(undefined1 *)((longlong)&pFVar12[3].DerivedStaticStruct + 7) = 0;
      (pFVar12->ViewModelName).ComparisonIndex = 0;
      (pFVar12->ViewModelName).Number = 0;
      pFVar12->_padding_ = (longlong)&___7FDS_ViewModelContext_NotificationInfo__6B_;
      pFVar12->DerivedStaticStruct = (UStruct *)0x0;
      pFVar12[1]._padding_ = 0;
      pFVar12[1].DerivedStaticStruct = (UStruct *)0x0;
      pFVar12[1].ViewModelName.ComparisonIndex.Value = 0;
      *(undefined1 *)&pFVar12[2]._padding_ = 0;
      pFVar12[2].DerivedStaticStruct = (UStruct *)0x0;
      pFVar12[2].ViewModelName.ComparisonIndex = 0;
      pFVar12[2].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar12[2].ViewModelTemplateKey = 0;
      pFVar12[3]._padding_ = 0;
      *(undefined4 *)&pFVar12[3].DerivedStaticStruct = 0;
      *(undefined1 *)((longlong)&pFVar12[3].DerivedStaticStruct + 4) = 0;
      pFVar12[3].ViewModelName.ComparisonIndex = 0;
      pFVar12[3].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar12[3].ViewModelTemplateKey = 0;
      pFVar12[4]._padding_ = 0;
      pFVar12[4].DerivedStaticStruct = (UStruct *)0x0;
      pFVar18 = pFVar12;
    }
    pTVar13 = ::operator_new(0x20);
    if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
      pTVar13 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      *(FDS_ViewModelContext **)&pTVar13[1].SharedReferenceCount = pFVar18;
      pTVar13[1]._padding_ = (longlong)ViewModelContextDeleter;
      pTVar13->SharedReferenceCount = (atomic<int>)0x1;
      pTVar13->WeakReferenceCount = (atomic<int>)0x1;
      pTVar13->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_NotificationInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
    }
    if ((pFVar18 == (FDS_ViewModelContext *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pUVar14 = FDS_ViewModelContext_NotificationInfo::StaticStruct();
    pFVar18->DerivedStaticStruct = (UStruct *)pUVar14;
    this_01 = UDS_ViewModelContextManager::GetInst();
    if (this_01 != (UDS_ViewModelContextManager *)0x0) {
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_98.Object = pFVar18;
      local_98.SharedReferenceCount.ReferenceController = pTVar13;
      UDS_ViewModelContextManager::RegisterContext(this_01,&local_98);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
    }
    uStack_80 = 0;
    local_88 = OnChangeNotificationListVisibility;
    uStack_7c = uVar8;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pFVar18 + 1),
               (FWriteAccessScope *)&local_68);
    local_50 = &pFVar18[1].DerivedStaticStruct;
    puVar15 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_50);
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar16 = FDelegateHandle::GenerateNewID();
      puVar15[2] = uVar16;
      *puVar15 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_HUD_Notification____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar15[3] = 0;
      local_100 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar15 + 3),(FObjectPtr)&local_100);
      puVar15[4] = local_88;
      puVar15[5] = CONCAT44(uStack_7c,uStack_80);
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    pFVar18->ViewModelTemplateKey = W_HUD_Notification_Message_Slot;
    *(FScriptContainerElement *)&pFVar18[1].ViewModelTemplateKey = *pFVar19;
    *(FScriptContainerElement *)&pFVar18[2]._padding_ = pFVar19[8];
    pFVar18[2].DerivedStaticStruct = *(UStruct **)(pFVar19 + 0x10);
    pFVar18[2].ViewModelName = *(FName *)(pFVar19 + 0x18);
    *(undefined8 *)&pFVar18[2].ViewModelTemplateKey = *(undefined8 *)(pFVar19 + 0x20);
    pFVar18[3]._padding_ = *(longlong *)(pFVar19 + 0x28);
    *(undefined4 *)&pFVar18[3].DerivedStaticStruct = *(undefined4 *)(pFVar19 + 0x30);
    *(FScriptContainerElement *)((longlong)&pFVar18[3].DerivedStaticStruct + 4) = pFVar19[0x34];
    ::FString::operator=((FString *)&pFVar18[3].ViewModelName,(FString *)(pFVar19 + 0x38));
    pFVar12 = pFVar18 + 4;
    if (pFVar12 != (FDS_ViewModelContext *)(pFVar19 + 0x48)) {
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)pFVar12->_padding_,*(int *)&pFVar18[4].DerivedStaticStruct);
      iVar3 = *(int *)(pFVar19 + 0x50);
      piVar1 = (int *)((longlong)&pFVar18[4].DerivedStaticStruct + 4);
      pFVar5 = (FDS_TextFormatArg *)((FDS_ViewModelContext *)(pFVar19 + 0x48))->_padding_;
      iVar4 = *piVar1;
      *(int *)&pFVar18[4].DerivedStaticStruct = iVar3;
      if ((iVar3 == 0) && (iVar4 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,iVar3,iVar4,(ForAnyElementType *)pFVar12,iVar3,piVar1);
        ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
                  ((FScriptContainerElement *)pFVar12->_padding_,pFVar5,iVar3);
      }
    }
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_78.Object = pFVar18;
    local_78.SharedReferenceCount.ReferenceController = pTVar13;
    UDS_UserObjectListItem::AddContext(this_00,&local_78);
    local_f8 = this_00;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_00 != (UDS_UserObjectListItem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    FDS_EntryBindingEventField::Add(local_f0,(TObjectPtr<UDS_UserObjectListItem>)&local_f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    uVar17 = (ulonglong)local_res20;
    pFVar19 = pFVar19 + 0x58;
  }
  local_a0 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
  local_a8 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
  (**(code **)(*local_e0 + 0x38))(local_e0,&local_a8);
  return;
}

// OnSetViewModel @ 14bf68830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_Notification::OnSetViewModel
          (UDS_VM_HUD_Notification *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_VM_HUD_Notification_Icon *this_00;
  code *pcVar2;
  FDS_ViewModelContext_NotificationInfo *pFVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  UDS_NotificationManager *pUVar7;
  UDS_LogManager *pUVar8;
  undefined1 auStackY_208 [32];
  FWeakObjectPtr local_1d8 [2];
  UDS_NotificationManager *local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  UDS_VM_HUD_Notification *local_1b8 [2];
  FName local_1a8;
  int local_1a0;
  TSharedPtr<FDS_ViewModelContext_NotificationInfo,1> local_198;
  TSharedPtr<FDS_ViewModelContext,1> local_188;
  FDestructionSentinel local_178;
  undefined1 *local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  this->NotificationListVisibility = Collapsed;
  local_1a0 = FFieldNotificationClassDescriptor::NotificationListVisibility.BitNumber;
  local_1a8 = FFieldNotificationClassDescriptor::NotificationListVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1a8);
  if ((this->NotificationIconViewModel).field0_0x0.DebugPtr != (UDS_VM_HUD_Notification_Icon *)0x0)
  {
    MakeContext<FDS_ViewModelContext_NotificationInfo>(&local_198);
    pFVar3 = local_198.Object;
    if (local_198.Object == (FDS_ViewModelContext_NotificationInfo *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uStack_1c0 = 0;
    local_1c8 = (UDS_NotificationManager *)OnChangeNotificationListVisibility;
    uStack_1bc = local_188.SharedReferenceCount.ReferenceController._4_4_;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pFVar3->OnClickNotificationSlot,(FWriteAccessScope *)&local_178);
    local_160 = &(pFVar3->OnClickNotificationSlot).field_0x8;
    puVar5 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_160);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_HUD_Notification____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar5[3] = 0;
      local_1b8[0] = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)local_1b8);
      puVar5[4] = local_1c8;
      puVar5[5] = CONCAT44(uStack_1bc,uStack_1c0);
    }
    if (local_178.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
    }
    this_00 = (this->NotificationIconViewModel).field0_0x0.DebugPtr;
    local_188.Object = (FDS_ViewModelContext *)local_198.Object;
    local_188.SharedReferenceCount.ReferenceController =
         local_198.SharedReferenceCount.ReferenceController;
    if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_188);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_198.SharedReferenceCount.ReferenceController);
  }
  pUVar7 = UDS_NotificationManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (UDS_NotificationManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  local_1d8[0].ObjectIndex = 0;
  local_1d8[0].ObjectSerialNumber = 0;
  local_1c8 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (UDS_NotificationManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  FWeakObjectPtr::operator=(local_1d8,(FObjectPtr)&local_1c8);
  bVar4 = TWeakObjectPtr<UDS_NotificationManager,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NotificationManager,FWeakObjectPtr> *)local_1d8,(void *)0x0
                    );
  if (bVar4) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_HUD_Notification::OnSetViewModel",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_158.Ptr,0x26,L"notificationManager is nullptr.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    pUVar7 = (UDS_NotificationManager *)FWeakObjectPtr::Get(local_1d8);
    UDS_NotificationManager::RefreshNotificationArray(pUVar7);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetNotificationIconVisibility @ 14bf7c720

void __thiscall
UDS_VM_HUD_Notification::SetNotificationIconVisibility
          (UDS_VM_HUD_Notification *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  this->NotificationIconVisibility = *param_1;
  local_10 = FFieldNotificationClassDescriptor::NotificationIconVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::NotificationIconVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetNotificationListVisibility @ 14bf7c760

void __thiscall
UDS_VM_HUD_Notification::SetNotificationListVisibility
          (UDS_VM_HUD_Notification *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  this->NotificationListVisibility = *param_1;
  local_10 = FFieldNotificationClassDescriptor::NotificationListVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::NotificationListVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bf848d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_HUD_Notification::UnbindModel(UDS_VM_HUD_Notification *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_NotificationManager *this_00;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148;
  UDS_NotificationManager *local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  local_140 = UDS_NotificationManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_140 != (UDS_NotificationManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_140);
  }
  local_148.ObjectIndex = 0;
  local_148.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_140 != (UDS_NotificationManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_140);
  }
  FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_140);
  bVar1 = TWeakObjectPtr<UDS_NotificationManager,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NotificationManager,FWeakObjectPtr> *)&local_148,
                     (void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_HUD_Notification::UnbindModel",0x24,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x43,L"notificationManager is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this_00 = (UDS_NotificationManager *)FWeakObjectPtr::Get(&local_148);
    UDS_NotificationManager::UnBindNotificationInfoDelegate(this_00,(UObject *)this);
  }
  return;
}

