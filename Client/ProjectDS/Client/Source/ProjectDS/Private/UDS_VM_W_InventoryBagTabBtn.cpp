// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// SetClickEvent_WrapperImpl @ 14b73d7e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl UDS_VM_W_InventoryBagTabBtn::SetClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  UObject *pUVar1;
  UDS_ModelBase *this;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  longlong *plVar6;
  undefined1 auStackY_e8 [32];
  FWeakObjectPtr FStack_b8;
  FWeakObjectPtr FStack_b0;
  UObject *pUStack_a8;
  UObject *pUStack_a0;
  undefined1 auStack_98 [128];
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if (*(longlong *)((longlong)param_1 + 0xa0) == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5443113965204799466>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_InventoryBagTabBtn.cpp"
                       ,0x16,"false");
    if (!bVar3) {
      return;
    }
  }
  else {
    pUVar4 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = Z_Construct_UClass_UDS_ModelEventBase_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)auStack_98,pUVar5);
    auStack_98._8_8_ = pUVar4;
    pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_98);
    if (auStack_98._64_8_ != 0) {
      plVar6 = (longlong *)(auStack_98 + 0x50);
      if ((longlong *)auStack_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)auStack_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar4 != (UObject *)0x0) goto LAB_14c02647f;
    }
    else if (pUVar4 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar4);
LAB_14c02647f:
      pUVar1 = *(UObject **)((longlong)param_1 + 0xa0);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar1 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar1);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar1);
        }
      }
      FStack_b8.ObjectIndex = 0;
      FStack_b8.ObjectSerialNumber = 0;
      pUStack_a8 = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      FWeakObjectPtr::operator=(&FStack_b8,(FObjectPtr)&pUStack_a8);
      *(int *)&pUVar4[1].field_0x0 = FStack_b8.ObjectIndex;
      *(int *)&pUVar4[1].field_0x4 = FStack_b8.ObjectSerialNumber;
      this = *(UDS_ModelBase **)((longlong)param_1 + 0xa0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (UE::GC::MarkAsReachable(pUVar4), UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      FStack_b0.ObjectIndex = 0;
      FStack_b0.ObjectSerialNumber = 0;
      pUStack_a0 = pUVar4;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      FWeakObjectPtr::operator=(&FStack_b0,(FObjectPtr)&pUStack_a0);
      UDS_ModelBase::UpdateModel(this,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)FStack_b0);
      return;
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5443113965204799463>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_InventoryBagTabBtn.cpp"
                       ,0x19,"false");
    if (!bVar3) {
      return;
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// SetEventMouseEnter_WrapperImpl @ 14b73d7f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_InventoryBagTabBtn::SetEventMouseEnter_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  undefined8 *puVar1;
  ulong64 uVar2;
  void *apvStackX_18 [2];
  uint uStack_5c;
  undefined1 auStack_58 [8];
  FDelegateAllocation FStack_50;
  FDestructionSentinel FStack_40;
  FDelegateAllocation *pFStack_28;
  
  this = UDS_WindowManager::GetInst();
  if (this != (UDS_WindowManager *)0x0) {
    auStack_58 = (undefined1  [8])0x0;
    FStack_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    FStack_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_58,
               (FWriteAccessScope *)&FStack_40);
    pFStack_28 = &FStack_50;
    puVar1 = UE::Core::Private::DelegateAllocate(0x30,&FStack_50);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_InventoryBagTabBtn____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
        UE::GC::MarkAsReachable(param_1);
      }
      puVar1[3] = 0;
      apvStackX_18[0] = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
        UE::GC::MarkAsReachable(param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)apvStackX_18);
      puVar1[4] = OnOpenTabNameTooltip;
      puVar1[5] = (ulonglong)uStack_5c << 0x20;
    }
    if (FStack_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_40.Accessor,&FStack_40);
    }
    UDS_WindowManager::OpenWindow
              (this,CommonTextTooltip,
               (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)auStack_58);
  }
  return;
}

// SetEventMouseLeave_WrapperImpl @ 14b73d800

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_InventoryBagTabBtn::SetEventMouseLeave_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  float afStackX_18 [2];
  uint auStackX_20 [2];
  
  this = UDS_WindowManager::GetInst();
  if (this != (UDS_WindowManager *)0x0) {
    afStackX_18[0] = 0.0;
    auStackX_20[0] = 0;
    UDS_WindowManager::CloseWindow(this,CommonTextTooltip,auStackX_20,afStackX_18);
  }
  return;
}

// StaticClass @ 14b73d810

UClass * __cdecl UDS_VM_W_InventoryBagTabBtn::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_InventoryBagTabBtn.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_InventoryBagTabBtn",
               &Z_Registration_Info_UClass_UDS_VM_W_InventoryBagTabBtn.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_InventoryBagTabBtn,0x2f0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_InventoryBagTabBtn>,
               InternalVTableHelperCtorCaller<UDS_VM_W_InventoryBagTabBtn>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_InventoryBagTabBtn.InnerSingleton;
}

// UDS_VM_W_InventoryBagTabBtn @ 14b741710

UDS_VM_W_InventoryBagTabBtn * __thiscall
UDS_VM_W_InventoryBagTabBtn::UDS_VM_W_InventoryBagTabBtn
          (UDS_VM_W_InventoryBagTabBtn *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ClickEvent)._padding_ = '\0';
  (this->ClickEvent).bIsCustomSelected = false;
  (this->ClickEvent).bIsLacked = false;
  (this->ClickEvent).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_InventoryBagTabBtn__6B_;
  *(undefined8 *)&(this->ClickEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickEvent).Delegate.field_0x10 = 0;
  (this->EventMouseEnter).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseEnter).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseEnter).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseEnter).KeyEvent);
  (this->EventMouseLeave).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseLeave).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseLeave).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseLeave).KeyEvent);
  return this;
}

// UDS_VM_W_InventoryBagTabBtn @ 14b7417d0

UDS_VM_W_InventoryBagTabBtn * __thiscall
UDS_VM_W_InventoryBagTabBtn::UDS_VM_W_InventoryBagTabBtn
          (UDS_VM_W_InventoryBagTabBtn *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ClickEvent)._padding_ = '\0';
  (this->ClickEvent).bIsCustomSelected = false;
  (this->ClickEvent).bIsLacked = false;
  (this->ClickEvent).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_InventoryBagTabBtn__6B_;
  *(undefined8 *)&(this->ClickEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickEvent).Delegate.field_0x10 = 0;
  (this->EventMouseEnter).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseEnter).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseEnter).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseEnter).KeyEvent);
  (this->EventMouseLeave).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseLeave).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseLeave).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseLeave).KeyEvent);
  return this;
}

// ~UDS_VM_W_InventoryBagTabBtn @ 14b742d60

void __thiscall
UDS_VM_W_InventoryBagTabBtn::~UDS_VM_W_InventoryBagTabBtn(UDS_VM_W_InventoryBagTabBtn *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_InventoryBagTabBtn__6B_;
  FKeyEvent::~FKeyEvent(&(this->EventMouseLeave).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseLeave).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseEnter).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseEnter).PointerEvent);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickEvent).Delegate);
  pvVar1 = *(void **)&(this->ClickEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickEvent).Delegate);
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b744dc0

IClassDescriptor * __thiscall
UDS_VM_W_InventoryBagTabBtn::GetFieldNotificationDescriptor(UDS_VM_W_InventoryBagTabBtn *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_InventoryBagTabBtn::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b7455c0

UClass * __cdecl UDS_VM_W_InventoryBagTabBtn::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_InventoryBagTabBtn.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_InventoryBagTabBtn",
               &Z_Registration_Info_UClass_UDS_VM_W_InventoryBagTabBtn.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_InventoryBagTabBtn,0x2f0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_InventoryBagTabBtn>,
               InternalVTableHelperCtorCaller<UDS_VM_W_InventoryBagTabBtn>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_InventoryBagTabBtn.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_InventoryBagTabBtn @ 14b745cc0

void __cdecl UDS_VM_W_InventoryBagTabBtn::StaticRegisterNativesUDS_VM_W_InventoryBagTabBtn(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_InventoryBagTabBtn_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execIsRedDotState @ 14b747240

void __cdecl
UDS_VM_W_InventoryBagTabBtn::execIsRedDotState(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsRedDotState((UDS_VM_W_InventoryBagTabBtn *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsSelected @ 14b747280

void __cdecl
UDS_VM_W_InventoryBagTabBtn::execIsSelected(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsSelected((UDS_VM_W_InventoryBagTabBtn *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execTabIconID @ 14b747b40

void __cdecl
UDS_VM_W_InventoryBagTabBtn::execTabIconID(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = TabIconID((UDS_VM_W_InventoryBagTabBtn *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execTabName @ 14b747b80

void __cdecl
UDS_VM_W_InventoryBagTabBtn::execTabName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = TabName((UDS_VM_W_InventoryBagTabBtn *)param_1,&local_58);
  FDS_Text::operator=(param_3,pFVar1);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// IsRedDotState @ 14c022b10

bool __thiscall UDS_VM_W_InventoryBagTabBtn::IsRedDotState(UDS_VM_W_InventoryBagTabBtn *this)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  FName FVar7;
  FString *pFVar8;
  undefined1 local_res8 [8];
  
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    FVar7 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagTabBtnData>
                      ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_InventoryBagTabBtnData)local_res8);
    uVar2 = *(undefined8 *)FVar7;
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar8 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar1 + 0x40),uVar6 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar7);
    if ((pFVar8->Data).ArrayNum != 0) {
      bVar4 = FToBoolHelper::FromCStringWide((wchar_t *)(pFVar8->Data).AllocatorInstance.Data);
      return bVar4;
    }
    bVar4 = FToBoolHelper::FromCStringWide(L"");
    return bVar4;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5443113965204799406>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_InventoryBagTabBtn.cpp"
                     ,0x52,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  return false;
}

// IsSelected @ 14c0238a0

bool __thiscall UDS_VM_W_InventoryBagTabBtn::IsSelected(UDS_VM_W_InventoryBagTabBtn *this)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  FName FVar7;
  FString *pFVar8;
  undefined1 local_res8 [8];
  
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    FVar7 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagTabBtnData>
                      ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_InventoryBagTabBtnData)local_res8);
    uVar2 = *(undefined8 *)FVar7;
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar8 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar1 + 0x40),uVar6 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar7);
    if ((pFVar8->Data).ArrayNum != 0) {
      bVar4 = FToBoolHelper::FromCStringWide((wchar_t *)(pFVar8->Data).AllocatorInstance.Data);
      return bVar4;
    }
    bVar4 = FToBoolHelper::FromCStringWide(L"");
    return bVar4;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5443113965204799412>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_InventoryBagTabBtn.cpp"
                     ,0x4c,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  return false;
}

// OnClickEvent @ 14c026390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_W_InventoryBagTabBtn::OnClickEvent
          (UDS_VM_W_InventoryBagTabBtn *this,FDS_ButtonEventField *param_1)

{
  UObject *pUVar1;
  UDS_ModelBase *this_00;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  longlong *plVar6;
  undefined1 auStackY_e8 [32];
  FWeakObjectPtr local_b8;
  FWeakObjectPtr local_b0;
  UObject *local_a8;
  UObject *local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if (this->_padding_ == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5443113965204799466>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_InventoryBagTabBtn.cpp"
                       ,0x16,"false");
    if (!bVar3) {
      return;
    }
  }
  else {
    pUVar4 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = Z_Construct_UClass_UDS_ModelEventBase_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar5);
    local_98._8_8_ = pUVar4;
    pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar4 != (UObject *)0x0) goto LAB_14c02647f;
    }
    else if (pUVar4 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar4);
LAB_14c02647f:
      pUVar1 = (UObject *)this->_padding_;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar1 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar1);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar1);
        }
      }
      local_b8.ObjectIndex = 0;
      local_b8.ObjectSerialNumber = 0;
      local_a8 = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      FWeakObjectPtr::operator=(&local_b8,(FObjectPtr)&local_a8);
      *(int *)&pUVar4[1].field_0x0 = local_b8.ObjectIndex;
      *(int *)&pUVar4[1].field_0x4 = local_b8.ObjectSerialNumber;
      this_00 = (UDS_ModelBase *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (UE::GC::MarkAsReachable(pUVar4), UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      local_b0.ObjectIndex = 0;
      local_b0.ObjectSerialNumber = 0;
      local_a0 = pUVar4;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_a0);
      UDS_ModelBase::UpdateModel
                (this_00,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_b0);
      return;
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5443113965204799463>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_InventoryBagTabBtn.cpp"
                       ,0x19,"false");
    if (!bVar3) {
      return;
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// OnEventMouseEnter @ 14c0295e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_InventoryBagTabBtn::OnEventMouseEnter
          (UDS_VM_W_InventoryBagTabBtn *this,FDS_WidgetPointerEventField *param_1)

{
  UDS_WindowManager *this_00;
  undefined8 *puVar1;
  ulong64 uVar2;
  UDS_VM_W_InventoryBagTabBtn *local_res18 [2];
  uint uStack_5c;
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
    puVar1 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_InventoryBagTabBtn____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_W_InventoryBagTabBtn *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar1[3] = 0;
      local_res18[0] = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_W_InventoryBagTabBtn *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)local_res18);
      puVar1[4] = OnOpenTabNameTooltip;
      puVar1[5] = (ulonglong)uStack_5c << 0x20;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    UDS_WindowManager::OpenWindow
              (this_00,CommonTextTooltip,
               (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)local_58);
  }
  return;
}

// OnEventMouseLeave @ 14c029730

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_InventoryBagTabBtn::OnEventMouseLeave
          (UDS_VM_W_InventoryBagTabBtn *this,FDS_WidgetPointerEventField *param_1)

{
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res18[0] = 0.0;
    local_res20[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,CommonTextTooltip,local_res20,local_res18);
  }
  return;
}

// OnOpenTabNameTooltip @ 14c02da80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_W_InventoryBagTabBtn::OnOpenTabNameTooltip
          (UDS_VM_W_InventoryBagTabBtn *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  FDS_Text *pFVar5;
  undefined8 *puVar6;
  TVector2<double> *pTVar7;
  longlong *plVar8;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr local_168;
  FWeakObjectPtr local_160;
  UDS_UserWidget *local_158;
  UDS_UserWidget *local_150;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  FName local_138;
  FName local_130;
  undefined1 local_128 [8];
  TReferenceControllerBase<1> *local_120;
  TVector2<double>_u_0 local_118;
  TVector2<double> local_108;
  FDS_Text local_f8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (param_1 == (UDS_UserWidget *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5443113965204799438>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_InventoryBagTabBtn.cpp"
                       ,0x32,"false");
    if (!bVar2) {
      return;
    }
  }
  else {
    pUVar3 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar3,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = Z_Construct_UClass_UDS_ModelBase_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar4);
    local_a8._8_8_ = pUVar3;
    pUVar3 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar8 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar3 != (UObject *)0x0) goto LAB_14c02db57;
    }
    else if (pUVar3 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar3);
LAB_14c02db57:
      pFVar5 = FDS_DataContainer::GetData<FDS_Text,enum_EDS_InventoryBagTabBtnData>
                         ((FDS_DataContainer *)(this->_padding_ + 0x40),&local_f8,TabName);
      FDS_DataContainer::SetData<FDS_Text,enum_EDS_TextData>
                ((FDS_DataContainer *)&pUVar3[1].field_0x18,Text,pFVar5);
      pcVar1 = *(code **)(*(longlong *)pUVar3 + 0x308);
      ::FName::FName(&local_138,L"");
      ::FName::FName(&local_130,L"");
      puVar6 = (undefined8 *)(*pcVar1)(pUVar3,local_128);
      local_148.Object = (FDS_ViewModelContext *)*puVar6;
      local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar6[1];
      if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_168.ObjectIndex = 0;
      local_168.ObjectSerialNumber = 0;
      local_158 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_168,(FObjectPtr)&local_158);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_168,&local_148,false);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_120)
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_160.ObjectIndex = 0;
      local_160.ObjectSerialNumber = 0;
      local_150 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_160,(FObjectPtr)&local_150);
      local_118._s_0.X = 0.0;
      local_118._s_0.Y = 0.0;
      pTVar7 = DS_Util::TransformTooltipPositionOnMouse
                         (&local_108,(TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_160,
                          (TVector2<double> *)&local_118._s_0,None);
      UDS_UserWidget::OnSetWindowPosition(param_1,pTVar7);
      return;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5443113965204799435>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_InventoryBagTabBtn.cpp"
                       ,0x35,"false");
    if (!bVar2) {
      return;
    }
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// TabIconID @ 14c047c70

int __thiscall UDS_VM_W_InventoryBagTabBtn::TabIconID(UDS_VM_W_InventoryBagTabBtn *this)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FName FVar7;
  FString *pFVar8;
  undefined1 local_res8 [8];
  
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    FVar7 = FDS_DataContainer::TransformIndexToName<enum_EDS_InventoryBagTabBtnData>
                      ((FDS_DataContainer *)(lVar1 + 0x40),(EDS_InventoryBagTabBtnData)local_res8);
    uVar2 = *(undefined8 *)FVar7;
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
    pFVar8 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)(lVar1 + 0x40),uVar6 + (int)((ulonglong)uVar2 >> 0x20),(FName *)FVar7);
    if ((pFVar8->Data).ArrayNum != 0) {
      iVar5 = _wtoi((wchar_t *)(pFVar8->Data).AllocatorInstance.Data);
      return iVar5;
    }
    iVar5 = _wtoi(L"");
    return iVar5;
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5443113965204799418>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_InventoryBagTabBtn.cpp"
                     ,0x46,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  return 0;
}

// TabName @ 14c047d30

FDS_Text * __thiscall
UDS_VM_W_InventoryBagTabBtn::TabName
          (UDS_VM_W_InventoryBagTabBtn *this,FDS_Text *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FDS_Text *pFVar3;
  
  if (this->_padding_ != 0) {
    FDS_DataContainer::GetData<FDS_Text,enum_EDS_InventoryBagTabBtnData>
              ((FDS_DataContainer *)(this->_padding_ + 0x40),__return_storage_ptr__,TabName);
    return __return_storage_ptr__;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5443113965204799424>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_InventoryBagTabBtn.cpp"
                     ,0x40,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDS_Text *)(*pcVar1)();
    return pFVar3;
  }
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  return __return_storage_ptr__;
}

// UpdateView @ 14c04f710

void __thiscall
UDS_VM_W_InventoryBagTabBtn::UpdateView
          (UDS_VM_W_InventoryBagTabBtn *this,
          TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  plVar1 = &this->_padding_;
  local_10 = FFieldNotificationClassDescriptor::TabName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TabName.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::TabIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TabIconID.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::IsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSelected.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::IsRedDotState.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsRedDotState.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

