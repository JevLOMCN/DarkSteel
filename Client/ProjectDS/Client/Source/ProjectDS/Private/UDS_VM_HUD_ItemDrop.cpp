// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// SetAnimationFinishEvent_WrapperImpl @ 14b668b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_HUD_ItemDrop::SetAnimationFinishEvent_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  UDS_DropDataSet *this;
  UDS_DataSetBase *this_00;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr FStack_158;
  FWeakObjectPtr FStack_150;
  int iStack_148;
  int iStack_144;
  FWeakObjectPtr FStack_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  TDS_DataSetGetter<UDS_DropDataSet>::Get((ulong64)&FStack_158);
  bVar1 = FWeakObjectPtr::IsValid(&FStack_158);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&FStack_158);
    if (-1 < (*(int *)&pUVar3[3].field_0x20 - *(int *)((longlong)param_1 + 0x138)) + -1) {
      this = (UDS_DropDataSet *)FWeakObjectPtr::Get(&FStack_158);
      UDS_DropDataSet::GetDropData(this,(int)&FStack_150);
      bVar1 = FWeakObjectPtr::IsValid(&FStack_150);
      if (bVar1) {
        GetDropAnimationName(param_1,(TWeakObjectPtr<UDS_DropData,FWeakObjectPtr>)&iStack_148);
        if ((*(int *)param_2 == iStack_148) && (*(int *)((longlong)param_2 + 4) == iStack_144)) {
          TDS_DataSetGetter<UDS_DropDataSet>::Get((ulong64)&FStack_140);
          bVar1 = TWeakObjectPtr<UDS_DropDataSet,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_DropDataSet,FWeakObjectPtr> *)&FStack_140,
                             (void *)0x0);
          if (!bVar1) {
            this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&FStack_140);
            UDS_DataSetBase::RemoveData(this_00,*(ulong64 *)((longlong)param_1 + 0x140));
          }
          *(undefined8 *)((longlong)param_1 + 0x140) = 0;
          UDS_ViewModelBase::SetVisibility(param_1,Collapsed);
        }
      }
      else {
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 != (UDS_LogManager *)0x0) {
          pUVar2 = UDS_LogManager::GetInst();
          TStack_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_138,"UDS_VM_HUD_ItemDrop::OnAnimationFinish",0x26,Yes);
          UDS_LogManager::PrintLog
                    (pUVar2,1,Display,TStack_138.Ptr,0xb4,L"dropData.IsValid() == false");
          if ((void *)TStack_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_138._padding_);
          }
        }
      }
    }
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_HUD_ItemDrop::OnAnimationFinish",0x26,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Display,TStack_138.Ptr,0xa6,L"dropDataSet.IsValid() == false");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  return;
}

// StaticClass @ 14b668b70

UClass * __cdecl UDS_VM_HUD_ItemDrop::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_ItemDrop.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_ItemDrop",
               &Z_Registration_Info_UClass_UDS_VM_HUD_ItemDrop.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_ItemDrop,0x158,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_HUD_ItemDrop>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_ItemDrop>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_ItemDrop.InnerSingleton;
}

// UDS_VM_HUD_ItemDrop @ 14b66da40

UDS_VM_HUD_ItemDrop * __thiscall
UDS_VM_HUD_ItemDrop::UDS_VM_HUD_ItemDrop(UDS_VM_HUD_ItemDrop *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_ItemDrop__6B_;
  (this->VM_DropData).field0_0x0.DebugPtr = (UDS_VM_DropData *)0x0;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->AnimationFinishEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationFinishEvent).AnimationName.Number = 0;
  (this->AnimationFinishEvent).AnimationPlayTime = 0.0;
  (this->AnimationFinishEvent).AnimationEventType = None;
  (this->AnimationFinishEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->SlotIndex = 0;
  this->DropDataUID = 0;
  (this->DropDataContext).Object = (FDS_ViewModelContext_DropData *)0x0;
  (this->DropDataContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->AnimationFinishEvent).NumberOfLoops = 1;
  return this;
}

// UDS_VM_HUD_ItemDrop @ 14b66db30

UDS_VM_HUD_ItemDrop * __thiscall
UDS_VM_HUD_ItemDrop::UDS_VM_HUD_ItemDrop(UDS_VM_HUD_ItemDrop *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_ItemDrop__6B_;
  (this->VM_DropData).field0_0x0.DebugPtr = (UDS_VM_DropData *)0x0;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->AnimationFinishEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationFinishEvent).AnimationName.Number = 0;
  (this->AnimationFinishEvent).AnimationPlayTime = 0.0;
  (this->AnimationFinishEvent).AnimationEventType = None;
  (this->AnimationFinishEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->SlotIndex = 0;
  this->DropDataUID = 0;
  (this->DropDataContext).Object = (FDS_ViewModelContext_DropData *)0x0;
  (this->DropDataContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AnimationEvent).NumberOfLoops = 1;
  (this->AnimationFinishEvent).NumberOfLoops = 1;
  return this;
}

// ~UDS_VM_HUD_ItemDrop @ 14b66f2c0

void __thiscall UDS_VM_HUD_ItemDrop::~UDS_VM_HUD_ItemDrop(UDS_VM_HUD_ItemDrop *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_ItemDrop__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DropDataContext).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationFinishEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->AnimationFinishEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationFinishEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationFinishEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->AnimationFinishEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationFinishEvent).Delegate_AnimationFinish)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_AnimationFinish);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b671a40

IClassDescriptor * __thiscall
UDS_VM_HUD_ItemDrop::GetFieldNotificationDescriptor(UDS_VM_HUD_ItemDrop *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_HUD_ItemDrop::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6725e0

UClass * __cdecl UDS_VM_HUD_ItemDrop::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_ItemDrop.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_ItemDrop",
               &Z_Registration_Info_UClass_UDS_VM_HUD_ItemDrop.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_ItemDrop,0x158,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_HUD_ItemDrop>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_ItemDrop>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_ItemDrop.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_HUD_ItemDrop @ 14b672bc0

void __cdecl UDS_VM_HUD_ItemDrop::StaticRegisterNativesUDS_VM_HUD_ItemDrop(void)

{
  return;
}

// BindModel @ 14bf40400

void __thiscall UDS_VM_HUD_ItemDrop::BindModel(UDS_VM_HUD_ItemDrop *this)

{
  UDS_ItemDrop *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ItemDrop::GetEvent();
  if (pUVar1 != (UDS_ItemDrop *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnDropDataChanged,this
              );
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_HUD_ItemDrop>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnDropDataChanged,(UDS_VM_HUD_ItemDrop *)&stack0x00000010,
               (pmf_b19a6483 *)this);
  }
  return;
}

// BroadcastAnimationEvent @ 14bf43e90

void __thiscall
UDS_VM_HUD_ItemDrop::BroadcastAnimationEvent
          (UDS_VM_HUD_ItemDrop *this,FName *param_1,EDS_AnimationEventType param_2,double param_3)

{
  FName local_18;
  int local_10;
  
  (this->AnimationEvent).AnimationName = *param_1;
  (this->AnimationEvent).AnimationEventType = param_2;
  (this->AnimationEvent).AnimationPlayTime = (float)param_3;
  local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// GetDropAnimationName @ 14bf57260

FName __thiscall
UDS_VM_HUD_ItemDrop::GetDropAnimationName
          (UDS_VM_HUD_ItemDrop *this,TWeakObjectPtr<UDS_DropData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  EDS_GradeType EVar2;
  UObject *pUVar3;
  UDS_DropData *this_00;
  ulonglong uVar4;
  FWeakObjectPtr local_res18 [2];
  
  uVar4 = 0;
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(local_res18);
    if (pUVar3[3].field_0x8 != '\x01') {
      pUVar3 = FWeakObjectPtr::Get(local_res18);
      if (pUVar3[3].field_0x9 != '\x01') goto LAB_14bf572bd;
    }
    this_00 = (UDS_DropData *)FWeakObjectPtr::Get(local_res18);
    EVar2 = UDS_DropData::GetItemGrade(this_00);
    uVar4 = (ulonglong)EVar2;
  }
LAB_14bf572bd:
  if ((int)uVar4 < AnimationNames.ArrayNum) {
    *(undefined8 *)param_1.WeakPtr =
         *(undefined8 *)(AnimationNames.AllocatorInstance.Data + uVar4 * 8);
    return (FName)param_1.WeakPtr;
  }
  ::FName::FName((FName *)param_1.WeakPtr,"Start_Ani");
  return (FName)param_1.WeakPtr;
}

// InitViewModel @ 14bf59d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_HUD_ItemDrop::InitViewModel(UDS_VM_HUD_ItemDrop *this)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_DropData *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->VM_DropData).field0_0x0.DebugPtr == (UDS_VM_DropData *)0x0) {
    local_a8.ComparisonIndex.Value = 0;
    local_a8.Number = 0;
    pUVar3 = Z_Construct_UClass_UDS_VM_DropData_NoRegister();
    FVar1 = local_a8;
    if (local_a8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar4 = Z_Construct_UClass_UDS_VM_DropData_NoRegister();
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
    pUVar5 = (UDS_VM_DropData *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_DropData *)0x0) {
      *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UDS_VM_DropData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_DropData).field0_0x0.DebugPtr = pUVar5;
  }
  return;
}

// OnAnimationFinish @ 14bf5e960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_ItemDrop::OnAnimationFinish
          (UDS_VM_HUD_ItemDrop *this,FDS_WidgetAnimationEventField *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  UDS_DropDataSet *this_00;
  UDS_DataSetBase *this_01;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  FWeakObjectPtr local_150;
  uint local_148;
  uint local_144;
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  TDS_DataSetGetter<UDS_DropDataSet>::Get((ulong64)&local_158);
  bVar1 = FWeakObjectPtr::IsValid(&local_158);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&local_158);
    if (-1 < (*(int *)&pUVar3[3].field_0x20 - this->SlotIndex) + -1) {
      this_00 = (UDS_DropDataSet *)FWeakObjectPtr::Get(&local_158);
      UDS_DropDataSet::GetDropData(this_00,(int)&local_150);
      bVar1 = FWeakObjectPtr::IsValid(&local_150);
      if (bVar1) {
        GetDropAnimationName(this,(TWeakObjectPtr<UDS_DropData,FWeakObjectPtr>)&local_148);
        if (((param_1->AnimationName).ComparisonIndex.Value == local_148) &&
           ((param_1->AnimationName).Number == local_144)) {
          TDS_DataSetGetter<UDS_DropDataSet>::Get((ulong64)&local_140);
          bVar1 = TWeakObjectPtr<UDS_DropDataSet,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_DropDataSet,FWeakObjectPtr> *)&local_140,
                             (void *)0x0);
          if (!bVar1) {
            this_01 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_140);
            UDS_DataSetBase::RemoveData(this_01,this->DropDataUID);
          }
          this->DropDataUID = 0;
          UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
        }
      }
      else {
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 != (UDS_LogManager *)0x0) {
          pUVar2 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_VM_HUD_ItemDrop::OnAnimationFinish",0x26,Yes);
          UDS_LogManager::PrintLog
                    (pUVar2,1,Display,local_138.Ptr,0xb4,L"dropData.IsValid() == false");
          if ((void *)local_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
      }
    }
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_HUD_ItemDrop::OnAnimationFinish",0x26,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Display,local_138.Ptr,0xa6,L"dropDataSet.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// OnDropDataChanged @ 14bf63a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_HUD_ItemDrop::OnDropDataChanged(UDS_VM_HUD_ItemDrop *this)

{
  TSharedPtr<FDS_ViewModelContext_DropData,1> *this_00;
  FName *pFVar1;
  double dVar2;
  int iVar3;
  UDS_VM_DropData *this_01;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  UDS_LogManager *pUVar7;
  UObject *pUVar8;
  UDS_DropDataSet *this_02;
  UDS_DataBase *this_03;
  ulong64 uVar9;
  TSharedPtr<FDS_ViewModelContext_DropData,1> *pTVar10;
  FDS_ViewModelContext_DropData *pFVar11;
  ForAnyElementType FVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStackY_318 [32];
  undefined1 auStack_2e8 [8];
  FWeakObjectPtr FStack_2e0;
  FWeakObjectPtr FStack_2d8;
  FNameEntryId FStack_2d0;
  uint uStack_2cc;
  FName FStack_2c8;
  int iStack_2c0;
  FName FStack_2b8;
  int iStack_2b0;
  TSharedPtr<FDS_ViewModelContext,1> TStack_2a8;
  TSharedPtr<FDS_ViewModelContext_DropData,1> TStack_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_168;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_318;
  TDS_DataSetGetter<UDS_DropDataSet>::Get((ulong64)&FStack_2d8);
  bVar6 = FWeakObjectPtr::IsValid(&FStack_2d8);
  if (bVar6) {
    pUVar8 = FWeakObjectPtr::Get(&FStack_2d8);
    if ((*(int *)&pUVar8[3].field_0x20 - this->SlotIndex) + -1 < 0) {
      UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
    }
    else {
      this_02 = (UDS_DropDataSet *)FWeakObjectPtr::Get(&FStack_2d8);
      UDS_DropDataSet::GetDropData(this_02,(int)&FStack_2e0);
      bVar6 = FWeakObjectPtr::IsValid(&FStack_2e0);
      if (bVar6) {
        UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,SelfHitTestInvisible);
        this_03 = (UDS_DataBase *)FWeakObjectPtr::Get(&FStack_2e0);
        uVar9 = UDS_DataBase::GetUniqueKey(this_03);
        this_00 = &this->DropDataContext;
        this->DropDataUID = uVar9;
        if (this_00->Object == (FDS_ViewModelContext_DropData *)0x0) {
          pTVar10 = MakeContext<FDS_ViewModelContext_DropData>(&TStack_298);
          if (this_00 != pTVar10) {
            this_00->Object = pTVar10->Object;
            pTVar10->Object = (FDS_ViewModelContext_DropData *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->DropDataContext).SharedReferenceCount,&pTVar10->SharedReferenceCount)
            ;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_298.SharedReferenceCount.ReferenceController);
          pFVar11 = TSharedPtr<FDS_ViewModelContext_DropData,1>::operator->(this_00);
          *(undefined4 *)&pFVar11->_padding_ = 0x16;
          iVar3 = this->SlotIndex;
          pFVar11 = TSharedPtr<FDS_ViewModelContext_DropData,1>::operator->(this_00);
          pFVar11->SlotIndex = iVar3;
        }
        uVar9 = this->DropDataUID;
        if (this_00->Object == (FDS_ViewModelContext_DropData *)0x0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        this_00->Object->DropDataUID = uVar9;
        TStack_2a8.Object = (FDS_ViewModelContext *)this_00->Object;
        this_01 = (this->VM_DropData).field0_0x0.DebugPtr;
        TStack_2a8.SharedReferenceCount.ReferenceController =
             (this->DropDataContext).SharedReferenceCount.ReferenceController;
        if (TStack_2a8.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (TStack_2a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(TStack_2a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
               );
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_01,&TStack_2a8);
        GetDropAnimationName(this,(TWeakObjectPtr<UDS_DropData,FWeakObjectPtr>)&FStack_2d0);
        dVar13 = UDS_TimeUtilManager::GetNowUnixTimeStampDecimal();
        pUVar8 = FWeakObjectPtr::Get(&FStack_2e0);
        dVar2 = *(double *)&pUVar8[3].field_0x10;
        uVar14 = SUB84(dVar2,0);
        uVar15 = (int)((ulonglong)dVar2 >> 0x20);
        if (dVar2 <= 0.0) {
          pUVar8 = FWeakObjectPtr::Get(&FStack_2e0);
          *(double *)&pUVar8[3].field_0x10 = dVar13;
          uVar14 = SUB84(dVar13,0);
          uVar15 = (int)((ulonglong)dVar13 >> 0x20);
        }
        iVar3 = AnimationNames.ArrayNum;
        pFVar1 = (FName *)(AnimationNames.AllocatorInstance.Data +
                          (longlong)AnimationNames.ArrayNum * 8);
        FVar12.Data = AnimationNames.AllocatorInstance.Data;
        while( true ) {
          if (AnimationNames.ArrayNum != iVar3) {
            `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (auStack_2e8);
          }
          if ((FName *)FVar12.Data == pFVar1) break;
          if (((((FName *)FVar12.Data)->ComparisonIndex).Value != FStack_2d0.Value) ||
             (((FName *)FVar12.Data)->Number != uStack_2cc)) {
            (this->AnimationEvent).AnimationName = *(FName *)FVar12.Data;
            (this->AnimationEvent).AnimationEventType = StopAnimation;
            (this->AnimationEvent).AnimationPlayTime = 0.0;
            iStack_2c0 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
            FStack_2c8 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_2c8);
          }
          FVar12.Data = FVar12.Data + 8;
        }
        FVar5.Number = uStack_2cc;
        FVar5.ComparisonIndex.Value = FStack_2d0.Value;
        (this->AnimationEvent).AnimationName = FVar5;
        (this->AnimationEvent).AnimationEventType = PlayForward;
        (this->AnimationEvent).AnimationPlayTime = (float)(dVar13 - (double)CONCAT44(uVar15,uVar14))
        ;
        iStack_2b0 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
        FStack_2b8 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_2b8);
      }
      else {
        UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 != (UDS_LogManager *)0x0) {
          pUVar7 = UDS_LogManager::GetInst();
          TStack_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_168,"UDS_VM_HUD_ItemDrop::UpdateItemDrop",0x23,Yes);
          UDS_LogManager::PrintLog
                    (pUVar7,1,Display,TStack_168.Ptr,0x59,L"dropData.IsValid() == false");
          if ((void *)TStack_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_168._padding_);
          }
        }
      }
    }
  }
  else {
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      TStack_288._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_288,"UDS_VM_HUD_ItemDrop::UpdateItemDrop",0x23,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Display,TStack_288.Ptr,0x49,L"dropDataSet.IsValid() == false");
      if ((void *)TStack_288._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_288._padding_);
      }
    }
  }
  return;
}

// OnSetViewModel @ 14bf68540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_ItemDrop::OnSetViewModel
          (UDS_VM_HUD_ItemDrop *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_188 [32];
  TSharedPtr<FDS_ViewModelContext_DropData,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_148.Object = param_1->Object;
  local_148.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_DropData>(&local_158,&local_148);
  if (local_158.Object == (FDS_ViewModelContext_DropData *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_HUD_ItemDrop::OnSetViewModel",0x23,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x1c,L"dropDataContext is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this->SlotIndex = (local_158.Object)->SlotIndex;
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RemoveDropData @ 14bf79160

void __thiscall UDS_VM_HUD_ItemDrop::RemoveDropData(UDS_VM_HUD_ItemDrop *this)

{
  bool bVar1;
  UDS_DataSetBase *this_00;
  FWeakObjectPtr local_res8 [4];
  
  TDS_DataSetGetter<UDS_DropDataSet>::Get((ulong64)local_res8);
  bVar1 = TWeakObjectPtr<UDS_DropDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DropDataSet,FWeakObjectPtr> *)local_res8,(void *)0x0);
  if (!bVar1) {
    this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(local_res8);
    UDS_DataSetBase::RemoveData(this_00,this->DropDataUID);
  }
  this->DropDataUID = 0;
  return;
}

// StopAnimation @ 14bf83390

void __thiscall UDS_VM_HUD_ItemDrop::StopAnimation(UDS_VM_HUD_ItemDrop *this,FName *param_1)

{
  FName *pFVar1;
  int iVar2;
  ForAnyElementType FVar3;
  undefined1 local_res18 [8];
  FName local_28;
  int local_20;
  
  iVar2 = AnimationNames.ArrayNum;
  pFVar1 = (FName *)(AnimationNames.AllocatorInstance.Data + (longlong)AnimationNames.ArrayNum * 8);
  FVar3.Data = AnimationNames.AllocatorInstance.Data;
  while( true ) {
    if (AnimationNames.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((FName *)FVar3.Data == pFVar1) break;
    if (((((FName *)FVar3.Data)->ComparisonIndex).Value != (param_1->ComparisonIndex).Value) ||
       (((FName *)FVar3.Data)->Number != param_1->Number)) {
      (this->AnimationEvent).AnimationName = *(FName *)FVar3.Data;
      (this->AnimationEvent).AnimationEventType = StopAnimation;
      (this->AnimationEvent).AnimationPlayTime = 0.0;
      local_20 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
      local_28 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
    FVar3.Data = FVar3.Data + 8;
  }
  return;
}

// UnbindModel @ 14bf84810

void __thiscall UDS_VM_HUD_ItemDrop::UnbindModel(UDS_VM_HUD_ItemDrop *this)

{
  UDS_ItemDrop *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ItemDrop::GetEvent();
  if (pUVar1 != (UDS_ItemDrop *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnDropDataChanged,this
              );
    return;
  }
  return;
}

// UpdateItemDrop @ 14bf87be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_HUD_ItemDrop::UpdateItemDrop(UDS_VM_HUD_ItemDrop *this)

{
  TSharedPtr<FDS_ViewModelContext_DropData,1> *this_00;
  FName *pFVar1;
  double dVar2;
  int iVar3;
  UDS_VM_DropData *this_01;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  UDS_LogManager *pUVar7;
  UObject *pUVar8;
  UDS_DropDataSet *this_02;
  UDS_DataBase *this_03;
  ulong64 uVar9;
  TSharedPtr<FDS_ViewModelContext_DropData,1> *pTVar10;
  FDS_ViewModelContext_DropData *pFVar11;
  ForAnyElementType FVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStackY_318 [32];
  undefined1 local_2e8 [8];
  FWeakObjectPtr local_2e0;
  FWeakObjectPtr local_2d8;
  FNameEntryId local_2d0;
  uint uStack_2cc;
  FName local_2c8;
  int local_2c0;
  FName local_2b8;
  int local_2b0;
  TSharedPtr<FDS_ViewModelContext,1> local_2a8;
  TSharedPtr<FDS_ViewModelContext_DropData,1> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_318;
  TDS_DataSetGetter<UDS_DropDataSet>::Get((ulong64)&local_2d8);
  bVar6 = FWeakObjectPtr::IsValid(&local_2d8);
  if (bVar6) {
    pUVar8 = FWeakObjectPtr::Get(&local_2d8);
    if ((*(int *)&pUVar8[3].field_0x20 - this->SlotIndex) + -1 < 0) {
      UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
    }
    else {
      this_02 = (UDS_DropDataSet *)FWeakObjectPtr::Get(&local_2d8);
      UDS_DropDataSet::GetDropData(this_02,(int)&local_2e0);
      bVar6 = FWeakObjectPtr::IsValid(&local_2e0);
      if (bVar6) {
        UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,SelfHitTestInvisible);
        this_03 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_2e0);
        uVar9 = UDS_DataBase::GetUniqueKey(this_03);
        this_00 = &this->DropDataContext;
        this->DropDataUID = uVar9;
        if (this_00->Object == (FDS_ViewModelContext_DropData *)0x0) {
          pTVar10 = MakeContext<FDS_ViewModelContext_DropData>(&local_298);
          if (this_00 != pTVar10) {
            this_00->Object = pTVar10->Object;
            pTVar10->Object = (FDS_ViewModelContext_DropData *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->DropDataContext).SharedReferenceCount,&pTVar10->SharedReferenceCount)
            ;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_298.SharedReferenceCount.ReferenceController);
          pFVar11 = TSharedPtr<FDS_ViewModelContext_DropData,1>::operator->(this_00);
          *(undefined4 *)&pFVar11->_padding_ = 0x16;
          iVar3 = this->SlotIndex;
          pFVar11 = TSharedPtr<FDS_ViewModelContext_DropData,1>::operator->(this_00);
          pFVar11->SlotIndex = iVar3;
        }
        uVar9 = this->DropDataUID;
        if (this_00->Object == (FDS_ViewModelContext_DropData *)0x0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        this_00->Object->DropDataUID = uVar9;
        local_2a8.Object = (FDS_ViewModelContext *)this_00->Object;
        this_01 = (this->VM_DropData).field0_0x0.DebugPtr;
        local_2a8.SharedReferenceCount.ReferenceController =
             (this->DropDataContext).SharedReferenceCount.ReferenceController;
        if (local_2a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_2a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_2a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_01,&local_2a8);
        GetDropAnimationName(this,(TWeakObjectPtr<UDS_DropData,FWeakObjectPtr>)&local_2d0);
        dVar13 = UDS_TimeUtilManager::GetNowUnixTimeStampDecimal();
        pUVar8 = FWeakObjectPtr::Get(&local_2e0);
        dVar2 = *(double *)&pUVar8[3].field_0x10;
        uVar14 = SUB84(dVar2,0);
        uVar15 = (int)((ulonglong)dVar2 >> 0x20);
        if (dVar2 <= 0.0) {
          pUVar8 = FWeakObjectPtr::Get(&local_2e0);
          *(double *)&pUVar8[3].field_0x10 = dVar13;
          uVar14 = SUB84(dVar13,0);
          uVar15 = (int)((ulonglong)dVar13 >> 0x20);
        }
        iVar3 = AnimationNames.ArrayNum;
        pFVar1 = (FName *)(AnimationNames.AllocatorInstance.Data +
                          (longlong)AnimationNames.ArrayNum * 8);
        FVar12.Data = AnimationNames.AllocatorInstance.Data;
        while( true ) {
          if (AnimationNames.ArrayNum != iVar3) {
            `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_2e8);
          }
          if ((FName *)FVar12.Data == pFVar1) break;
          if (((((FName *)FVar12.Data)->ComparisonIndex).Value != local_2d0.Value) ||
             (((FName *)FVar12.Data)->Number != uStack_2cc)) {
            (this->AnimationEvent).AnimationName = *(FName *)FVar12.Data;
            (this->AnimationEvent).AnimationEventType = StopAnimation;
            (this->AnimationEvent).AnimationPlayTime = 0.0;
            local_2c0 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
            local_2c8 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2c8);
          }
          FVar12.Data = FVar12.Data + 8;
        }
        FVar5.Number = uStack_2cc;
        FVar5.ComparisonIndex.Value = local_2d0.Value;
        (this->AnimationEvent).AnimationName = FVar5;
        (this->AnimationEvent).AnimationEventType = PlayForward;
        (this->AnimationEvent).AnimationPlayTime = (float)(dVar13 - (double)CONCAT44(uVar15,uVar14))
        ;
        local_2b0 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
        local_2b8 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2b8);
      }
      else {
        UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 != (UDS_LogManager *)0x0) {
          pUVar7 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_VM_HUD_ItemDrop::UpdateItemDrop",0x23,Yes);
          UDS_LogManager::PrintLog
                    (pUVar7,1,Display,local_168.Ptr,0x59,L"dropData.IsValid() == false");
          if ((void *)local_168._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_168._padding_);
          }
        }
      }
    }
  }
  else {
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_288._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_288,"UDS_VM_HUD_ItemDrop::UpdateItemDrop",0x23,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Display,local_288.Ptr,0x49,L"dropDataSet.IsValid() == false");
      if ((void *)local_288._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_288._padding_);
      }
    }
  }
  return;
}

