// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 25

// SetChangedVisibility_WrapperImpl @ 14b681810

void __cdecl UDS_VM_InteractionGroup::SetChangedVisibility_WrapperImpl(void *param_1,void *param_2)

{
  UDS_ViewModelBase::SetVisibility(param_1,*(ESlateVisibility *)param_2);
  if (*(char *)param_2 == '\x04') {
    Refresh(param_1);
  }
  return;
}

// StaticClass @ 14b681820

UClass * __cdecl UDS_VM_InteractionGroup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_InteractionGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_InteractionGroup",
               &Z_Registration_Info_UClass_UDS_VM_InteractionGroup.InnerSingleton,
               StaticRegisterNativesUDS_VM_InteractionGroup,0x138,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_InteractionGroup>,
               InternalVTableHelperCtorCaller<UDS_VM_InteractionGroup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_InteractionGroup.InnerSingleton;
}

// UDS_VM_InteractionGroup @ 14b6832a0

UDS_VM_InteractionGroup * __thiscall
UDS_VM_InteractionGroup::UDS_VM_InteractionGroup
          (UDS_VM_InteractionGroup *this,FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->AnimationEvent).NumberOfLoops = 1;
  this->_padding_ = (longlong)&___7UDS_VM_InteractionGroup__6B_;
  (this->VM_InputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->VM_InteractionList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VM_InteractionList).ArrayNum = 0;
  (this->VM_InteractionList).ArrayMax = 0;
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
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->TargetEntityID = 0;
  this->CurrentIndex = 0;
  (this->OffsetPosition).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  return this;
}

// UDS_VM_InteractionGroup @ 14b683370

UDS_VM_InteractionGroup * __thiscall
UDS_VM_InteractionGroup::UDS_VM_InteractionGroup
          (UDS_VM_InteractionGroup *this,FObjectInitializer *param_1)

{
  TVector2<double> TVar1;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->AnimationEvent).NumberOfLoops = 1;
  this->_padding_ = (longlong)&___7UDS_VM_InteractionGroup__6B_;
  (this->VM_InputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->VM_InteractionList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VM_InteractionList).ArrayNum = 0;
  (this->VM_InteractionList).ArrayMax = 0;
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
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->TargetEntityID = 0;
  this->CurrentIndex = 0;
  (this->OffsetPosition).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  return this;
}

// ~UDS_VM_InteractionGroup @ 14b6840a0

void __thiscall UDS_VM_InteractionGroup::~UDS_VM_InteractionGroup(UDS_VM_InteractionGroup *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_InteractionGroup__6B_;
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
  pFVar2 = (this->VM_InteractionList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b684e60

IClassDescriptor * __thiscall
UDS_VM_InteractionGroup::GetFieldNotificationDescriptor(UDS_VM_InteractionGroup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_InteractionGroup::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b685100

UClass * __cdecl UDS_VM_InteractionGroup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_InteractionGroup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_InteractionGroup",
               &Z_Registration_Info_UClass_UDS_VM_InteractionGroup.InnerSingleton,
               StaticRegisterNativesUDS_VM_InteractionGroup,0x138,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_InteractionGroup>,
               InternalVTableHelperCtorCaller<UDS_VM_InteractionGroup>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_InteractionGroup.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_InteractionGroup @ 14b685580

void __cdecl UDS_VM_InteractionGroup::StaticRegisterNativesUDS_VM_InteractionGroup(void)

{
  return;
}

// BindModel @ 14be114b0

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

void __thiscall UDS_VM_InteractionGroup::BindModel(UDS_VM_InteractionGroup *this)

{
  TMap<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>_>
  *pTVar1;
  bool bVar2;
  UDS_InputEvent *pUVar3;
  UObject *pUVar4;
  FDS_EntityBase *pFVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  int *piVar9;
  FWeakObjectPtr local_res8;
  int local_res10 [2];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr *local_res20;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar3 = UDS_InputEvent::GetEvent();
  if (pUVar3 != (UDS_InputEvent *)0x0) {
    pTVar1 = &(pUVar3->OnInputEvent).Subscriptions;
    local_res8.ObjectIndex = 0x29cd;
    if (*(int *)&(pUVar3->OnInputEvent).Subscriptions.field_0x8 !=
        *(int *)&(pUVar3->OnInputEvent).Subscriptions.field_0x34) {
      puVar6 = *(undefined1 **)&(pUVar3->OnInputEvent).Subscriptions.field_0x40;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &(pUVar3->OnInputEvent).Subscriptions.field_0x38;
      }
      iVar8 = *(int *)(puVar6 + (ulonglong)
                                (*(int *)&(pUVar3->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                0x29cd) * 4);
      if (iVar8 != -1) {
        do {
          piVar9 = (int *)((longlong)iVar8 * 0x50 + *(longlong *)pTVar1);
          if (*piVar9 == 0x29cd) {
            if (piVar9 != (int *)0x0) goto LAB_14be11587;
            break;
          }
          iVar8 = piVar9[0x12];
        } while (iVar8 != -1);
      }
    }
    local_res20 = &local_res8;
    TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
              (pTVar1,(uint)local_res10,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x29cd,
               (bool *)&local_res20);
    piVar9 = (int *)((longlong)local_res10[0] * 0x50 + *(longlong *)pTVar1);
LAB_14be11587:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar9 + 2),this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_InteractionGroup>
              (piVar9 + 2,(UDS_VM_InteractionGroup *)local_res10,(pmf_7863f08b *)this);
  }
  UDS_PlayerData::GetMainPlayerCurrentEntityID();
  UDS_CharStateData::GetData((ulong64)&local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&local_res18);
    TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_InteractionGroup>
              ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                *)&pUVar4[7].field_0x20,(UDS_VM_InteractionGroup *)&local_res8,(pmf_1cf0a391 *)this)
    ;
  }
  pFVar5 = FDS_EntityBase::GetEntityBase(&this->TargetEntityID);
  if (pFVar5 != (FDS_EntityBase *)0x0) {
    if (pFVar5->EntityType == StuffWarpDevice) {
      UDS_StuffWarpDeviceData::GetData((ulong64)&local_res8);
      bVar2 = FWeakObjectPtr::IsValid(&local_res8);
      if (bVar2) {
        pUVar4 = FWeakObjectPtr::Get(&local_res8);
        TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_StuffWarpDeviceData,FWeakObjectPtr>,enum_EDS_WarpDeviceState),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_VM_InteractionGroup>
                  (&pUVar4[10].field_0x18,(UDS_VM_InteractionGroup *)local_res10,
                   (pmf_d670bac0 *)this);
      }
    }
    else {
      UDS_CharStateData::GetData((ulong64)&local_res8);
      bVar2 = FWeakObjectPtr::IsValid(&local_res8);
      if (bVar2) {
        pUVar4 = FWeakObjectPtr::Get(&local_res8);
        TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_VM_InteractionGroup>
                  ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>,FDS_ChangedCharStateInfo),FDefaultDelegateUserPolicy>
                    *)&pUVar4[7].field_0x20,(UDS_VM_InteractionGroup *)local_res10,
                   (pmf_1cf0a391 *)this);
      }
    }
  }
  pUVar3 = UDS_InputEvent::GetEvent();
  if (pUVar3 != (UDS_InputEvent *)0x0) {
    pTVar1 = &(pUVar3->OnInputEvent).Subscriptions;
    puVar6 = &(pUVar3->OnInputEvent).Subscriptions.field_0x40;
    local_res8.ObjectIndex = 0x29ce;
    if (*(int *)&(pUVar3->OnInputEvent).Subscriptions.field_0x8 !=
        *(int *)&(pUVar3->OnInputEvent).Subscriptions.field_0x34) {
      puVar7 = *(undefined1 **)puVar6;
      if (*(undefined1 **)puVar6 == (undefined1 *)0x0) {
        puVar7 = &(pUVar3->OnInputEvent).Subscriptions.field_0x38;
      }
      iVar8 = *(int *)(puVar7 + (ulonglong)
                                (*(int *)&(pUVar3->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                0x29ce) * 4);
      if (iVar8 != -1) {
        do {
          piVar9 = (int *)((longlong)iVar8 * 0x50 + *(longlong *)pTVar1);
          if (*piVar9 == 0x29ce) {
            if ((iVar8 != -1) && (piVar9 != (int *)0x0)) goto LAB_14be1178a;
            break;
          }
          iVar8 = piVar9[0x12];
        } while (iVar8 != -1);
      }
    }
    local_res20 = &local_res8;
    TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
              (pTVar1,(uint)local_res10,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x29ce,
               (bool *)&local_res20);
    piVar9 = (int *)((longlong)local_res10[0] * 0x50 + *(longlong *)pTVar1);
LAB_14be1178a:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar9 + 2),this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_InteractionGroup>
              (piVar9 + 2,(UDS_VM_InteractionGroup *)local_res10,(pmf_7863f08b *)this);
    local_res8.ObjectIndex = 0x29cf;
    if (*(int *)&(pUVar3->OnInputEvent).Subscriptions.field_0x8 !=
        *(int *)&(pUVar3->OnInputEvent).Subscriptions.field_0x34) {
      puVar7 = *(undefined1 **)puVar6;
      if (*(undefined1 **)puVar6 == (undefined1 *)0x0) {
        puVar7 = &(pUVar3->OnInputEvent).Subscriptions.field_0x38;
      }
      iVar8 = *(int *)(puVar7 + (ulonglong)
                                (*(int *)&(pUVar3->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                0x29cf) * 4);
      if (iVar8 != -1) {
        do {
          piVar9 = (int *)((longlong)iVar8 * 0x50 + *(longlong *)pTVar1);
          if (*piVar9 == 0x29cf) {
            if (piVar9 != (int *)0x0) goto LAB_14be11871;
            break;
          }
          iVar8 = piVar9[0x12];
        } while (iVar8 != -1);
      }
    }
    local_res20 = &local_res8;
    TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
              (pTVar1,(uint)local_res10,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x29cf,
               (bool *)&local_res20);
    piVar9 = (int *)((longlong)local_res10[0] * 0x50 + *(longlong *)pTVar1);
LAB_14be11871:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar9 + 2),this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_InteractionGroup>
              (piVar9 + 2,(UDS_VM_InteractionGroup *)local_res10,(pmf_7863f08b *)this);
    local_res8.ObjectIndex = 0x29d0;
    if (*(int *)&(pUVar3->OnInputEvent).Subscriptions.field_0x8 !=
        *(int *)&(pUVar3->OnInputEvent).Subscriptions.field_0x34) {
      puVar7 = *(undefined1 **)puVar6;
      if (*(undefined1 **)puVar6 == (undefined1 *)0x0) {
        puVar7 = &(pUVar3->OnInputEvent).Subscriptions.field_0x38;
      }
      iVar8 = *(int *)(puVar7 + (ulonglong)
                                (*(int *)&(pUVar3->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                0x29d0) * 4);
      if (iVar8 != -1) {
        do {
          piVar9 = (int *)((longlong)iVar8 * 0x50 + *(longlong *)pTVar1);
          if (*piVar9 == 0x29d0) {
            if (piVar9 != (int *)0x0) goto LAB_14be11938;
            break;
          }
          iVar8 = piVar9[0x12];
        } while (iVar8 != -1);
      }
    }
    local_res20 = &local_res8;
    TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
              (pTVar1,(uint)local_res10,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x29d0,
               (bool *)&local_res20);
    piVar9 = (int *)((longlong)local_res10[0] * 0x50 + *(longlong *)pTVar1);
LAB_14be11938:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar9 + 2),this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_InteractionGroup>
              (piVar9 + 2,(UDS_VM_InteractionGroup *)local_res10,(pmf_7863f08b *)this);
  }
  return;
}

// CheckMainCharState @ 14be14570

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

bool __thiscall UDS_VM_InteractionGroup::CheckMainCharState(UDS_VM_InteractionGroup *this)

{
  bool bVar1;
  UDS_CharStateData *pUVar2;
  FDS_EntityBase *pFVar3;
  FWeakObjectPtr local_res10;
  EDS_CharState local_res18 [2];
  
  UDS_PlayerData::GetMainPlayerCurrentEntityID();
  UDS_CharStateData::GetData((ulong64)&local_res10);
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
    local_res18[0] = SkillMode|Taming|Dead|Warp|Abnormal|AirWalk|Skill;
    bVar1 = UDS_CharStateData::HasCharState(pUVar2,local_res18);
    if (!bVar1) {
      pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
      local_res18[0] = Interaction;
      bVar1 = UDS_CharStateData::HasCharState(pUVar2,local_res18);
      if (bVar1) {
        pFVar3 = FDS_EntityBase::GetEntityBase(&this->TargetEntityID);
        if (pFVar3 != (FDS_EntityBase *)0x0) {
          return pFVar3->EntityType == StuffWarpDevice;
        }
      }
      return true;
    }
  }
  return false;
}

// CheckTargetCharState @ 14be14920

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

bool __thiscall UDS_VM_InteractionGroup::CheckTargetCharState(UDS_VM_InteractionGroup *this)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_CharStateData *pUVar3;
  FWeakObjectPtr local_res8;
  EDS_CharState local_res10 [3];
  
  if ((this->TargetEntityID == 0) ||
     (pFVar2 = FDS_EntityBase::GetEntityBase(&this->TargetEntityID), pFVar2 == (FDS_EntityBase *)0x0
     )) {
    return false;
  }
  if (pFVar2->EntityType == NPC) {
    UDS_CharStateData::GetData((ulong64)&local_res8);
    bVar1 = FWeakObjectPtr::IsValid(&local_res8);
    if (!bVar1) {
      return false;
    }
    pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res8);
    local_res10[0] = Taming;
    bVar1 = UDS_CharStateData::HasCharState(pUVar3,local_res10);
    if (!bVar1) {
      pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res8);
      local_res10[0] = Dead|Battle;
      bVar1 = UDS_CharStateData::HasCharState(pUVar3,local_res10);
      return !bVar1;
    }
  }
  return true;
}

// InitViewModel @ 14be24f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_InteractionGroup::InitViewModel(UDS_VM_InteractionGroup *this)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_InputKey *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->VM_InputKey).field0_0x0.DebugPtr == (UDS_VM_InputKey *)0x0) {
    local_a8.ComparisonIndex.Value = 0;
    local_a8.Number = 0;
    pUVar3 = Z_Construct_UClass_UDS_VM_InputKey_NoRegister();
    FVar1 = local_a8;
    if (local_a8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar4 = Z_Construct_UClass_UDS_VM_InputKey_NoRegister();
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
    pUVar5 = (UDS_VM_InputKey *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_InputKey *)0x0) {
      *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UDS_VM_InputKey *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_InputKey).field0_0x0.DebugPtr = pUVar5;
  }
  return;
}

// IsSelected @ 14be273e0

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

bool __thiscall UDS_VM_InteractionGroup::IsSelected(UDS_VM_InteractionGroup *this)

{
  bool bVar1;
  ADS_MainCharacter *this_00;
  UDS_InteractionComponent *this_01;
  FDS_EntityBase *pFVar2;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  
  ADS_MainCharacter::GetMainPlayer();
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    this_00 = (ADS_MainCharacter *)FWeakObjectPtr::Get(&local_res10);
    ADS_MainCharacter::GetInteractionComponent(this_00);
    bVar1 = FWeakObjectPtr::IsValid(local_res18);
    if (bVar1) {
      this_01 = (UDS_InteractionComponent *)FWeakObjectPtr::Get(local_res18);
      pFVar2 = UDS_InteractionComponent::GetIconInteractedEntity(this_01);
      if (pFVar2 != (FDS_EntityBase *)0x0) {
        return this->TargetEntityID == pFVar2->EntityID;
      }
    }
  }
  return false;
}

// OnChangedVisibility @ 14be2b5e0

void __thiscall
UDS_VM_InteractionGroup::OnChangedVisibility
          (UDS_VM_InteractionGroup *this,ESlateVisibility *param_1)

{
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,*param_1);
  if (*param_1 == SelfHitTestInvisible) {
    Refresh(this);
  }
  return;
}

// OnInputEvent @ 14be30a30

void __thiscall
UDS_VM_InteractionGroup::OnInputEvent
          (UDS_VM_InteractionGroup *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  UDS_VM_InputKey *this_00;
  EDS_KeyActionType local_res10 [2];
  bool local_res18 [16];
  EDS_WindowWidget local_18 [6];
  
  if ((param_2 != Triggered) &&
     (this_00 = (this->VM_InputKey).field0_0x0.DebugPtr, this_00 != (UDS_VM_InputKey *)0x0)) {
    local_res18[0] = param_2 == Started;
    local_18[0] = None;
    local_res10[0] = param_1;
    UDS_VM_InputKey::OnInputEvent(this_00,local_res18,local_res10,local_18);
  }
  return;
}

// OnMainCharStateChanged @ 14be31540

void __thiscall
UDS_VM_InteractionGroup::OnMainCharStateChanged
          (UDS_VM_InteractionGroup *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  bool bVar1;
  
  bVar1 = IsSelected(this);
  if (!bVar1) {
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
    return;
  }
  if ((param_2->AddedCharState == Interaction) || (param_2->RemovedCharState == Interaction)) {
    Refresh(this);
  }
  return;
}

// OnSelect @ 14be32c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_InteractionGroup::OnSelect(UDS_VM_InteractionGroup *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_> *pTVar5;
  UDS_PlayerData *this_00;
  UDS_InputEvent *pUVar6;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr local_158;
  TSharedPtr<FDS_ViewModelContext_Interaction,1> local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  UDS_PlayerData::GetMainPlayerData();
  bVar3 = FWeakObjectPtr::IsValid(&local_158);
  if (bVar3) {
    this->CurrentIndex = param_1;
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_InteractionGroup::OnSelect",0x21,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Display,local_138.Ptr,0x1eb,L"CurrentIndex : %d");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    pTVar5 = FDS_EntryBindingEventField::GetUserObjectList(&this->EntryBindingEventField);
    iVar1 = this->CurrentIndex;
    if ((-1 < iVar1) && (iVar1 < pTVar5->ArrayNum)) {
      if ((iVar1 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UDS_UserObjectListItem::GetContext<FDS_ViewModelContext_Interaction>
                (*(UDS_UserObjectListItem **)
                  ((pTVar5->AllocatorInstance).Data + (longlong)iVar1 * 8),&local_150);
      if ((local_150.Object != (FDS_ViewModelContext_Interaction *)0x0) &&
         ((local_150.Object)->Index == this->CurrentIndex)) {
        this_00 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_158);
        UDS_PlayerData::SetInteractionID(this_00,(local_150.Object)->InteractionID);
        pUVar6 = UDS_InputEvent::GetEvent();
        if (pUVar6 != (UDS_InputEvent *)0x0) {
          FDS_EventDelegate<int_const_>::Broadcast
                    (&pUVar6->OnInteractionSelectedIndex,this->CurrentIndex);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_150.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// OnSelectDown @ 14be32e40

void __thiscall
UDS_VM_InteractionGroup::OnSelectDown
          (UDS_VM_InteractionGroup *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  bool bVar1;
  int iVar2;
  UDS_InteractionDataSet *this_00;
  TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_> *pTVar3;
  FWeakObjectPtr local_18 [2];
  
  bVar1 = IsSelected(this);
  if ((bVar1) && (param_2 == Triggered)) {
    TDS_DataSetGetter<UDS_InteractionDataSet>::Get((ulong64)local_18);
    bVar1 = FWeakObjectPtr::IsValid(local_18);
    if (bVar1) {
      this_00 = (UDS_InteractionDataSet *)FWeakObjectPtr::Get(local_18);
      iVar2 = UDS_InteractionDataSet::GetInteractionDataCount(this_00);
      if (1 < iVar2) {
        this->CurrentIndex = this->CurrentIndex + 1;
        pTVar3 = FDS_EntryBindingEventField::GetUserObjectList(&this->EntryBindingEventField);
        iVar2 = this->CurrentIndex;
        if (pTVar3->ArrayNum + -1 < iVar2) {
          iVar2 = 0;
          this->CurrentIndex = 0;
        }
        OnSelect(this,iVar2);
      }
    }
  }
  return;
}

// OnSelectUp @ 14be32f30

void __thiscall
UDS_VM_InteractionGroup::OnSelectUp
          (UDS_VM_InteractionGroup *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  UDS_InteractionDataSet *this_00;
  TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_> *pTVar4;
  FWeakObjectPtr local_18 [2];
  
  bVar2 = IsSelected(this);
  if ((bVar2) && (param_2 == Triggered)) {
    TDS_DataSetGetter<UDS_InteractionDataSet>::Get((ulong64)local_18);
    bVar2 = FWeakObjectPtr::IsValid(local_18);
    if (bVar2) {
      this_00 = (UDS_InteractionDataSet *)FWeakObjectPtr::Get(local_18);
      iVar3 = UDS_InteractionDataSet::GetInteractionDataCount(this_00);
      if (1 < iVar3) {
        piVar1 = &this->CurrentIndex;
        *piVar1 = *piVar1 + -1;
        iVar3 = this->CurrentIndex;
        if (*piVar1 < 0) {
          pTVar4 = FDS_EntryBindingEventField::GetUserObjectList(&this->EntryBindingEventField);
          iVar3 = pTVar4->ArrayNum + -1;
          this->CurrentIndex = iVar3;
        }
        OnSelect(this,iVar3);
      }
    }
  }
  return;
}

// OnSelectUpDown @ 14be32fd0

void __thiscall
UDS_VM_InteractionGroup::OnSelectUpDown
          (UDS_VM_InteractionGroup *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  UDS_InteractionDataSet *pUVar4;
  TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_> *pTVar5;
  float fVar6;
  FWeakObjectPtr aFStack_18 [2];
  
  fVar6 = (float)(param_3->Value).field0_0x0._s_0.X;
  if (0.0 < fVar6) {
    bVar2 = IsSelected(this);
    if ((bVar2) && (param_2 == Triggered)) {
      TDS_DataSetGetter<UDS_InteractionDataSet>::Get((ulong64)aFStack_18);
      bVar2 = FWeakObjectPtr::IsValid(aFStack_18);
      if (bVar2) {
        pUVar4 = (UDS_InteractionDataSet *)FWeakObjectPtr::Get(aFStack_18);
        iVar3 = UDS_InteractionDataSet::GetInteractionDataCount(pUVar4);
        if (1 < iVar3) {
          piVar1 = &this->CurrentIndex;
          *piVar1 = *piVar1 + -1;
          iVar3 = this->CurrentIndex;
          if (*piVar1 < 0) {
            pTVar5 = FDS_EntryBindingEventField::GetUserObjectList(&this->EntryBindingEventField);
            iVar3 = pTVar5->ArrayNum + -1;
            this->CurrentIndex = iVar3;
          }
          OnSelect(this,iVar3);
        }
      }
    }
    return;
  }
  if (0.0 <= fVar6) {
    return;
  }
  bVar2 = IsSelected(this);
  if ((bVar2) && (param_2 == Triggered)) {
    TDS_DataSetGetter<UDS_InteractionDataSet>::Get((ulong64)aFStack_18);
    bVar2 = FWeakObjectPtr::IsValid(aFStack_18);
    if (bVar2) {
      pUVar4 = (UDS_InteractionDataSet *)FWeakObjectPtr::Get(aFStack_18);
      iVar3 = UDS_InteractionDataSet::GetInteractionDataCount(pUVar4);
      if (1 < iVar3) {
        this->CurrentIndex = this->CurrentIndex + 1;
        pTVar5 = FDS_EntryBindingEventField::GetUserObjectList(&this->EntryBindingEventField);
        iVar3 = this->CurrentIndex;
        if (pTVar5->ArrayNum + -1 < iVar3) {
          iVar3 = 0;
          this->CurrentIndex = 0;
        }
        OnSelect(this,iVar3);
      }
    }
  }
  return;
}

// OnSetViewModel @ 14be36d00

void __thiscall
UDS_VM_InteractionGroup::OnSetViewModel
          (UDS_VM_InteractionGroup *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_VM_InputKey *pUVar2;
  code *pcVar3;
  bool bVar4;
  FDS_ViewModelContext *pFVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this_00;
  FDS_ViewModelContext *pFVar7;
  FDS_ViewModelContext *pFVar8;
  TSharedPtr<FDS_ViewModelContext_Interaction,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_28.Object = param_1->Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_Interaction>(&local_48,&local_28);
  if (local_48.Object != (FDS_ViewModelContext_Interaction *)0x0) {
    if ((local_48.Object == (FDS_ViewModelContext_Interaction *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar2 = (this->VM_InputKey).field0_0x0.DebugPtr;
    this->TargetEntityID = (local_48.Object)->TargetEntityID;
    if (pUVar2 != (UDS_VM_InputKey *)0x0) {
      pFVar5 = ::operator_new(0x30);
      pFVar8 = (FDS_ViewModelContext *)0x0;
      pFVar7 = pFVar8;
      if (pFVar5 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar5->field_0x1c = 0;
        *(undefined4 *)((longlong)&pFVar5[1]._padding_ + 4) = 0;
        *(undefined4 *)&((atomic<int> *)&pFVar5[1].DerivedStaticStruct)->field_0x2 = 0;
        *(undefined2 *)&((atomic<int> *)&pFVar5[1].DerivedStaticStruct)[1].field_0x2 = 0;
        *(undefined8 *)&pFVar5->DerivedStaticStruct = 0;
        (pFVar5->ViewModelName).ComparisonIndex = 0;
        (pFVar5->ViewModelName).Number = 0;
        pFVar5->ViewModelTemplateKey = None;
        pFVar5->_padding_ = (longlong)&___7FDS_ViewModelContext_InputKey__6B_;
        *(undefined2 *)&pFVar5[1].DerivedStaticStruct = 0x100;
        pFVar7 = pFVar5;
      }
      pFVar5 = ::operator_new(0x20);
      if (pFVar5 != (FDS_ViewModelContext *)0x0) {
        *(atomic<int> *)&pFVar5->DerivedStaticStruct = (atomic<int>)0x1;
        *(code **)&(pFVar5->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        pFVar5->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_InputKey__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        ((atomic<int> *)&pFVar5->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pFVar5->ViewModelTemplateKey = pFVar7;
        pFVar8 = pFVar5;
      }
      if ((pFVar7 == (FDS_ViewModelContext *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar6 = FDS_ViewModelContext_InputKey::StaticStruct();
      *(UScriptStruct **)&pFVar7->DerivedStaticStruct = pUVar6;
      this_00 = UDS_ViewModelContextManager::GetInst();
      if (this_00 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar8 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar8->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar8->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_38.Object = pFVar7;
        local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
        UDS_ViewModelContextManager::RegisterContext(this_00,&local_38);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38.SharedReferenceCount.ReferenceController);
      }
      pFVar7->ViewModelTemplateKey = InputKey;
      pFVar7[1]._padding_ = 0x29cd;
      pUVar2 = (this->VM_InputKey).field0_0x0.DebugPtr;
      if (pFVar8 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar8->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar8->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_18.Object = pFVar7;
      local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar2,&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar8);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnTargetCharStateChanged @ 14be42a00

void __thiscall
UDS_VM_InteractionGroup::OnTargetCharStateChanged
          (UDS_VM_InteractionGroup *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  bool bVar1;
  
  bVar1 = IsSelected(this);
  if (!bVar1) {
    UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
    return;
  }
  if ((param_2->AddedCharState == Interaction) || (param_2->RemovedCharState == Interaction)) {
    Refresh(this);
  }
  return;
}

// OnTargetWarpStateChanged @ 14be42a60

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
UDS_VM_InteractionGroup::OnTargetWarpStateChanged
          (UDS_VM_InteractionGroup *this,
          TWeakObjectPtr<UDS_StuffWarpDeviceData,FWeakObjectPtr> param_1,EDS_WarpDeviceState param_2
          )

{
  ulong64 *puVar1;
  code *pcVar2;
  FWeakObjectPtr *pFVar3;
  bool bVar4;
  uint uVar5;
  UDS_CharStateData *pUVar6;
  FDS_EntityBase *pFVar7;
  UDS_InteractionDataSet *this_00;
  UObject *pUVar8;
  UDS_PlayerData *pUVar9;
  UDS_InteractionData *this_01;
  UDS_UserObjectListItem *this_02;
  FDS_ViewModelContext *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  UScriptStruct *pUVar12;
  UDS_ViewModelContextManager *this_03;
  TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_> *pTVar13;
  UDS_InputEvent *pUVar14;
  ulonglong uVar15;
  uint uVar16;
  FDS_ViewModelContext *pFVar17;
  int iVar18;
  ForAnyElementType FVar19;
  undefined1 auStackX_10 [8];
  EDS_PlayerSkillType aEStackX_18 [8];
  EDS_PlayerSkillType aEStackX_20 [8];
  EDS_PlayerSkillType aEStack_138 [8];
  FWeakObjectPtr FStack_130;
  FWeakObjectPtr FStack_128;
  uint uStack_120;
  FWeakObjectPtr FStack_118;
  FWeakObjectPtr FStack_110;
  FWeakObjectPtr FStack_108;
  FWeakObjectPtr FStack_100;
  FWeakObjectPtr FStack_f8;
  TArray<TWeakObjectPtr<UDS_InteractionData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> TStack_f0;
  EDS_CharState aEStack_e0 [4];
  ulong64 uStack_c0;
  UDS_UserObjectListItem *pUStack_b8;
  FWeakObjectPtr *pFStack_b0;
  FName FStack_a8;
  int iStack_a0;
  TSharedPtr<FDS_ViewModelContext,1> TStack_98;
  TSharedPtr<FDS_ViewModelContext_Interaction,1> TStack_88;
  TSharedPtr<FDS_ViewModelContext,1> TStack_78;
  FDS_InteractionFunctionData FStack_68;
  
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
  UDS_PlayerData::GetMainPlayerCurrentEntityID();
  UDS_CharStateData::GetData((ulong64)&FStack_118);
  bVar4 = FWeakObjectPtr::IsValid(&FStack_118);
  if (bVar4) {
    pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&FStack_118);
    aEStack_e0[0] = SkillMode|Taming|Dead|Warp|Abnormal|AirWalk|Skill;
    bVar4 = UDS_CharStateData::HasCharState(pUVar6,aEStack_e0);
    if (!bVar4) {
      pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&FStack_118);
      aEStack_e0[1] = 0x4000;
      bVar4 = UDS_CharStateData::HasCharState(pUVar6,aEStack_e0 + 1);
      if ((((!bVar4) ||
           (pFVar7 = FDS_EntityBase::GetEntityBase(&this->TargetEntityID),
           pFVar7 == (FDS_EntityBase *)0x0)) || (pFVar7->EntityType == StuffWarpDevice)) &&
         ((puVar1 = &this->TargetEntityID, *puVar1 != 0 &&
          (pFVar7 = FDS_EntityBase::GetEntityBase(puVar1), pFVar7 != (FDS_EntityBase *)0x0)))) {
        if (pFVar7->EntityType == NPC) {
          UDS_CharStateData::GetData((ulong64)&FStack_110);
          bVar4 = FWeakObjectPtr::IsValid(&FStack_110);
          if (!bVar4) {
            return;
          }
          pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&FStack_110);
          aEStack_e0[2] = 0x200000000;
          bVar4 = UDS_CharStateData::HasCharState(pUVar6,aEStack_e0 + 2);
          if (!bVar4) {
            pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&FStack_110);
            aEStack_e0[3] = 0x40100;
            bVar4 = UDS_CharStateData::HasCharState(pUVar6,aEStack_e0 + 3);
            if (bVar4) {
              return;
            }
          }
        }
        UDS_PlayerData::GetMainPlayerData();
        bVar4 = FWeakObjectPtr::IsValid(&FStack_128);
        if (bVar4) {
          TDS_DataSetGetter<UDS_InteractionDataSet>::Get((ulong64)&FStack_108);
          bVar4 = FWeakObjectPtr::IsValid(&FStack_108);
          if (bVar4) {
            UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,SelfHitTestInvisible);
            FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
            iVar18 = 0;
            this_00 = (UDS_InteractionDataSet *)FWeakObjectPtr::Get(&FStack_108);
            UDS_InteractionDataSet::GetAllInteractionData(this_00,&TStack_f0);
            uStack_120 = TStack_f0.ArrayNum;
            uVar15 = (ulonglong)(int)uStack_120;
            pFStack_b0 = (FWeakObjectPtr *)(TStack_f0.AllocatorInstance.Data + uVar15 * 8);
            FVar19.Data = TStack_f0.AllocatorInstance.Data;
            while( true ) {
              pFVar3 = pFStack_b0;
              pFVar17 = (FDS_ViewModelContext *)0x0;
              if (TStack_f0.ArrayNum != (int)uVar15) {
                auStackX_10[0] = 0;
                `TCheckedPointerIterator<TWeakObjectPtr<UDS_InteractionData,FWeakObjectPtr>,int,0>::
                operator!='::__l2::<lambda_1>::operator()(auStackX_10);
              }
              if ((FWeakObjectPtr *)FVar19.Data == pFVar3) break;
              FStack_130 = *(FWeakObjectPtr *)FVar19.Data;
              bVar4 = FWeakObjectPtr::IsValid(&FStack_130);
              if (bVar4) {
                pUVar8 = FWeakObjectPtr::Get(&FStack_130);
                if (pUVar8[3].field_0x1 == '\0') {
LAB_14be46d66:
                  this_01 = (UDS_InteractionData *)FWeakObjectPtr::Get(&FStack_130);
                  UDS_InteractionData::GetFunctionDataByIndex(this_01,&FStack_68,0);
                  if (FStack_68.InteractionFunctionType != None) {
                    if (FStack_68.InteractionFunctionType == LingSkillUse) {
                      pUVar9 = (UDS_PlayerData *)FWeakObjectPtr::Get(&FStack_128);
                      aEStackX_20[0] = Ling;
                      bVar4 = UDS_PlayerData::HasPlayerSkillTargetInfo(pUVar9,aEStackX_20,puVar1);
LAB_14be46e42:
                      if (bVar4) goto LAB_14be46fbb;
                    }
                    else {
                      if (FStack_68.InteractionFunctionType == OpenLocksSkillUse) {
                        pUVar9 = (UDS_PlayerData *)FWeakObjectPtr::Get(&FStack_128);
                        aEStack_138[0] = OpenLocks;
                        bVar4 = UDS_PlayerData::HasPlayerSkillTargetInfo(pUVar9,aEStack_138,puVar1);
                        goto LAB_14be46e42;
                      }
                      if (FStack_68.InteractionFunctionType == StuffWarpDeviceActivate) {
                        UDS_StuffWarpDeviceData::GetData((ulong64)&FStack_100);
                        bVar4 = FWeakObjectPtr::IsValid(&FStack_100);
                        if (bVar4) {
                          pUVar8 = FWeakObjectPtr::Get(&FStack_100);
                          bVar4 = pUVar8[0xb].field_0x10 == '\x01';
                          goto LAB_14be46e42;
                        }
                      }
                      else if (FStack_68.InteractionFunctionType == StuffWarpDeviceUse) {
                        UDS_StuffWarpDeviceData::GetData((ulong64)&FStack_f8);
                        bVar4 = FWeakObjectPtr::IsValid(&FStack_f8);
                        if (bVar4) {
                          pUVar8 = FWeakObjectPtr::Get(&FStack_f8);
                          bVar4 = pUVar8[0xb].field_0x10 == '\x02';
                          goto LAB_14be46e42;
                        }
                      }
                    }
                    this_02 = NewObject<UDS_UserObjectListItem>((UObject *)this);
                    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                       (this_02 != (UDS_UserObjectListItem *)0x0)) {
                      UE::GC::MarkAsReachable((UObject *)this_02);
                    }
                    pFVar10 = ::operator_new(0x30);
                    if (pFVar10 != (FDS_ViewModelContext *)0x0) {
                      *(undefined8 *)&pFVar10->field_0x1c = 0;
                      *(undefined8 *)((longlong)&pFVar10[1]._padding_ + 4) = 0;
                      *(undefined4 *)((longlong)&pFVar10[1].DerivedStaticStruct + 4) = 0;
                      pFVar10->DerivedStaticStruct = (UStruct *)0x0;
                      (pFVar10->ViewModelName).ComparisonIndex = 0;
                      (pFVar10->ViewModelName).Number = 0;
                      pFVar10->ViewModelTemplateKey = None;
                      pFVar10->_padding_ = (longlong)&___7FDS_ViewModelContext_Interaction__6B_;
                      pFVar17 = pFVar10;
                    }
                    pTVar11 = ::operator_new(0x20);
                    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
                      pTVar11 = (TReferenceControllerBase<1> *)0x0;
                    }
                    else {
                      pTVar11->SharedReferenceCount = (atomic<int>)0x1;
                      pTVar11[1]._padding_ = (longlong)ViewModelContextDeleter;
                      pTVar11->_padding_ =
                           (longlong)
                           &
                           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_Interaction__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
                      ;
                      pTVar11->WeakReferenceCount = (atomic<int>)0x1;
                      *(FDS_ViewModelContext **)&pTVar11[1].SharedReferenceCount = pFVar17;
                    }
                    if ((pFVar17 == (FDS_ViewModelContext *)0x0) &&
                       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                           ,0x458,L""), bVar4)) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    pUVar12 = FDS_ViewModelContext_Interaction::StaticStruct();
                    pFVar17->DerivedStaticStruct = (UStruct *)pUVar12;
                    this_03 = UDS_ViewModelContextManager::GetInst();
                    if (this_03 != (UDS_ViewModelContextManager *)0x0) {
                      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
                        LOCK();
                        pTVar11->SharedReferenceCount =
                             (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
                        UNLOCK();
                      }
                      TStack_98.Object = pFVar17;
                      TStack_98.SharedReferenceCount.ReferenceController = pTVar11;
                      UDS_ViewModelContextManager::RegisterContext(this_03,&TStack_98);
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline
                                (TStack_98.SharedReferenceCount.ReferenceController);
                    }
                    pFVar17->ViewModelTemplateKey = Interaction;
                    pFVar17[1]._padding_ = *puVar1;
                    pUVar8 = FWeakObjectPtr::Get(&FStack_130);
                    *(undefined4 *)&pFVar17[1].DerivedStaticStruct =
                         *(undefined4 *)&pUVar8[2].field_0x8;
                    *(int *)((longlong)&pFVar17[1].DerivedStaticStruct + 4) = iVar18;
                    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
                      LOCK();
                      pTVar11->SharedReferenceCount =
                           (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
                      UNLOCK();
                    }
                    TStack_78.Object = pFVar17;
                    TStack_78.SharedReferenceCount.ReferenceController = pTVar11;
                    UDS_UserObjectListItem::AddContext(this_02,&TStack_78);
                    pUStack_b8 = this_02;
                    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                       (this_02 != (UDS_UserObjectListItem *)0x0)) {
                      UE::GC::MarkAsReachable((UObject *)this_02);
                    }
                    FDS_EntryBindingEventField::Add
                              (&this->EntryBindingEventField,
                               (TObjectPtr<UDS_UserObjectListItem>)&pUStack_b8);
                    iVar18 = iVar18 + 1;
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTVar11);
                  }
                }
                else {
                  pUVar9 = (UDS_PlayerData *)FWeakObjectPtr::Get(&FStack_128);
                  pUVar8 = FWeakObjectPtr::Get(&FStack_130);
                  aEStackX_18[0] = pUVar8[3].field_0x1;
                  bVar4 = UDS_PlayerData::HasPlayerSkillTargetInfo(pUVar9,aEStackX_18,puVar1);
                  if (bVar4) {
                    pUVar8 = FWeakObjectPtr::Get(&FStack_128);
                    uStack_c0 = *(ulong64 *)&pUVar8[8].field_0x10;
                    pUVar8 = FWeakObjectPtr::Get(&FStack_130);
                    bVar4 = DS_AbilityUtil_PlayerSkill::IsAbleInteraction_Level
                                      (*(int *)&pUVar8[2].field_0x8,&uStack_c0,puVar1);
                    if (bVar4) goto LAB_14be46d66;
                  }
                }
              }
LAB_14be46fbb:
              FVar19.Data = FVar19.Data + 8;
              uVar15 = (ulonglong)uStack_120;
            }
            iStack_a0 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
            FStack_a8 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_a8);
            pTVar13 = FDS_EntryBindingEventField::GetUserObjectList(&this->EntryBindingEventField);
            iVar18 = pTVar13->ArrayNum;
            pFVar10 = pFVar17;
            if (0 < iVar18) {
              do {
                uVar16 = (uint)pFVar17;
                uVar5 = 0;
                if ((int)uVar16 < iVar18) {
                  uVar5 = ~uVar16 >> 0x1f;
                }
                if ((uVar5 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                if (*(longlong *)
                     ((longlong)&pFVar10->_padding_ + (longlong)(pTVar13->AllocatorInstance).Data)
                    != 0) {
                  uVar5 = 0;
                  if ((int)uVar16 < pTVar13->ArrayNum) {
                    uVar5 = ~uVar16 >> 0x1f;
                  }
                  if ((uVar5 == 0) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar4)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  UDS_UserObjectListItem::GetContext<FDS_ViewModelContext_Interaction>
                            (*(UDS_UserObjectListItem **)
                              ((longlong)&pFVar10->_padding_ +
                              (longlong)(pTVar13->AllocatorInstance).Data),&TStack_88);
                  if (TStack_88.Object != (FDS_ViewModelContext_Interaction *)0x0) {
                    pUVar9 = (UDS_PlayerData *)FWeakObjectPtr::Get(&FStack_128);
                    UDS_PlayerData::SetInteractionID(pUVar9,(TStack_88.Object)->InteractionID);
                    pUVar14 = UDS_InputEvent::GetEvent();
                    if (pUVar14 != (UDS_InputEvent *)0x0) {
                      FDS_EventDelegate<int_const_>::Broadcast
                                (&pUVar14->OnInteractionSelectedIndex,uVar16);
                    }
                    this->CurrentIndex = uVar16;
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline
                              (TStack_88.SharedReferenceCount.ReferenceController);
                    break;
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(TStack_88.SharedReferenceCount.ReferenceController)
                  ;
                }
                iVar18 = pTVar13->ArrayNum;
                pFVar17 = (FDS_ViewModelContext *)(ulonglong)(uVar16 + 1);
                pFVar10 = (FDS_ViewModelContext *)&pFVar10->DerivedStaticStruct;
              } while ((int)(uVar16 + 1) < iVar18);
            }
            if (TStack_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(TStack_f0.AllocatorInstance.Data);
            }
          }
        }
      }
    }
  }
  return;
}

// Refresh @ 14be46ac0

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

void __thiscall UDS_VM_InteractionGroup::Refresh(UDS_VM_InteractionGroup *this)

{
  ulong64 *puVar1;
  code *pcVar2;
  FWeakObjectPtr *pFVar3;
  bool bVar4;
  uint uVar5;
  UDS_CharStateData *pUVar6;
  FDS_EntityBase *pFVar7;
  UDS_InteractionDataSet *this_00;
  UObject *pUVar8;
  UDS_PlayerData *pUVar9;
  UDS_InteractionData *this_01;
  UDS_UserObjectListItem *this_02;
  FDS_ViewModelContext *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  UScriptStruct *pUVar12;
  UDS_ViewModelContextManager *this_03;
  TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_> *pTVar13;
  UDS_InputEvent *pUVar14;
  ulonglong uVar15;
  uint uVar16;
  FDS_ViewModelContext *pFVar17;
  int iVar18;
  ForAnyElementType FVar19;
  undefined1 local_res10 [8];
  EDS_PlayerSkillType local_res18 [8];
  EDS_PlayerSkillType local_res20 [8];
  EDS_PlayerSkillType local_138 [8];
  FWeakObjectPtr local_130;
  FWeakObjectPtr local_128;
  uint local_120;
  FWeakObjectPtr local_118;
  FWeakObjectPtr local_110;
  FWeakObjectPtr local_108;
  FWeakObjectPtr local_100;
  FWeakObjectPtr local_f8;
  TArray<TWeakObjectPtr<UDS_InteractionData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_f0;
  EDS_CharState local_e0 [4];
  ulong64 local_c0;
  UDS_UserObjectListItem *local_b8;
  FWeakObjectPtr *local_b0;
  FName local_a8;
  int local_a0;
  TSharedPtr<FDS_ViewModelContext,1> local_98;
  TSharedPtr<FDS_ViewModelContext_Interaction,1> local_88;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  FDS_InteractionFunctionData local_68;
  
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
  UDS_PlayerData::GetMainPlayerCurrentEntityID();
  UDS_CharStateData::GetData((ulong64)&local_118);
  bVar4 = FWeakObjectPtr::IsValid(&local_118);
  if (bVar4) {
    pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_118);
    local_e0[0] = SkillMode|Taming|Dead|Warp|Abnormal|AirWalk|Skill;
    bVar4 = UDS_CharStateData::HasCharState(pUVar6,local_e0);
    if (!bVar4) {
      pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_118);
      local_e0[1] = 0x4000;
      bVar4 = UDS_CharStateData::HasCharState(pUVar6,local_e0 + 1);
      if ((((!bVar4) ||
           (pFVar7 = FDS_EntityBase::GetEntityBase(&this->TargetEntityID),
           pFVar7 == (FDS_EntityBase *)0x0)) || (pFVar7->EntityType == StuffWarpDevice)) &&
         ((puVar1 = &this->TargetEntityID, *puVar1 != 0 &&
          (pFVar7 = FDS_EntityBase::GetEntityBase(puVar1), pFVar7 != (FDS_EntityBase *)0x0)))) {
        if (pFVar7->EntityType == NPC) {
          UDS_CharStateData::GetData((ulong64)&local_110);
          bVar4 = FWeakObjectPtr::IsValid(&local_110);
          if (!bVar4) {
            return;
          }
          pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_110);
          local_e0[2] = 0x200000000;
          bVar4 = UDS_CharStateData::HasCharState(pUVar6,local_e0 + 2);
          if (!bVar4) {
            pUVar6 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_110);
            local_e0[3] = 0x40100;
            bVar4 = UDS_CharStateData::HasCharState(pUVar6,local_e0 + 3);
            if (bVar4) {
              return;
            }
          }
        }
        UDS_PlayerData::GetMainPlayerData();
        bVar4 = FWeakObjectPtr::IsValid(&local_128);
        if (bVar4) {
          TDS_DataSetGetter<UDS_InteractionDataSet>::Get((ulong64)&local_108);
          bVar4 = FWeakObjectPtr::IsValid(&local_108);
          if (bVar4) {
            UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,SelfHitTestInvisible);
            FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
            iVar18 = 0;
            this_00 = (UDS_InteractionDataSet *)FWeakObjectPtr::Get(&local_108);
            UDS_InteractionDataSet::GetAllInteractionData(this_00,&local_f0);
            local_120 = local_f0.ArrayNum;
            uVar15 = (ulonglong)(int)local_120;
            local_b0 = (FWeakObjectPtr *)(local_f0.AllocatorInstance.Data + uVar15 * 8);
            FVar19.Data = local_f0.AllocatorInstance.Data;
            while( true ) {
              pFVar3 = local_b0;
              pFVar17 = (FDS_ViewModelContext *)0x0;
              if (local_f0.ArrayNum != (int)uVar15) {
                local_res10[0] = 0;
                `TCheckedPointerIterator<TWeakObjectPtr<UDS_InteractionData,FWeakObjectPtr>,int,0>::
                operator!='::__l2::<lambda_1>::operator()(local_res10);
              }
              if ((FWeakObjectPtr *)FVar19.Data == pFVar3) break;
              local_130 = *(FWeakObjectPtr *)FVar19.Data;
              bVar4 = FWeakObjectPtr::IsValid(&local_130);
              if (bVar4) {
                pUVar8 = FWeakObjectPtr::Get(&local_130);
                if (pUVar8[3].field_0x1 == '\0') {
LAB_14be46d66:
                  this_01 = (UDS_InteractionData *)FWeakObjectPtr::Get(&local_130);
                  UDS_InteractionData::GetFunctionDataByIndex(this_01,&local_68,0);
                  if (local_68.InteractionFunctionType != None) {
                    if (local_68.InteractionFunctionType == LingSkillUse) {
                      pUVar9 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_128);
                      local_res20[0] = Ling;
                      bVar4 = UDS_PlayerData::HasPlayerSkillTargetInfo(pUVar9,local_res20,puVar1);
LAB_14be46e42:
                      if (bVar4) goto LAB_14be46fbb;
                    }
                    else {
                      if (local_68.InteractionFunctionType == OpenLocksSkillUse) {
                        pUVar9 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_128);
                        local_138[0] = OpenLocks;
                        bVar4 = UDS_PlayerData::HasPlayerSkillTargetInfo(pUVar9,local_138,puVar1);
                        goto LAB_14be46e42;
                      }
                      if (local_68.InteractionFunctionType == StuffWarpDeviceActivate) {
                        UDS_StuffWarpDeviceData::GetData((ulong64)&local_100);
                        bVar4 = FWeakObjectPtr::IsValid(&local_100);
                        if (bVar4) {
                          pUVar8 = FWeakObjectPtr::Get(&local_100);
                          bVar4 = pUVar8[0xb].field_0x10 == '\x01';
                          goto LAB_14be46e42;
                        }
                      }
                      else if (local_68.InteractionFunctionType == StuffWarpDeviceUse) {
                        UDS_StuffWarpDeviceData::GetData((ulong64)&local_f8);
                        bVar4 = FWeakObjectPtr::IsValid(&local_f8);
                        if (bVar4) {
                          pUVar8 = FWeakObjectPtr::Get(&local_f8);
                          bVar4 = pUVar8[0xb].field_0x10 == '\x02';
                          goto LAB_14be46e42;
                        }
                      }
                    }
                    this_02 = NewObject<UDS_UserObjectListItem>((UObject *)this);
                    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                       (this_02 != (UDS_UserObjectListItem *)0x0)) {
                      UE::GC::MarkAsReachable((UObject *)this_02);
                    }
                    pFVar10 = ::operator_new(0x30);
                    if (pFVar10 != (FDS_ViewModelContext *)0x0) {
                      *(undefined8 *)&pFVar10->field_0x1c = 0;
                      *(undefined8 *)((longlong)&pFVar10[1]._padding_ + 4) = 0;
                      *(undefined4 *)((longlong)&pFVar10[1].DerivedStaticStruct + 4) = 0;
                      pFVar10->DerivedStaticStruct = (UStruct *)0x0;
                      (pFVar10->ViewModelName).ComparisonIndex = 0;
                      (pFVar10->ViewModelName).Number = 0;
                      pFVar10->ViewModelTemplateKey = None;
                      pFVar10->_padding_ = (longlong)&___7FDS_ViewModelContext_Interaction__6B_;
                      pFVar17 = pFVar10;
                    }
                    pTVar11 = ::operator_new(0x20);
                    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
                      pTVar11 = (TReferenceControllerBase<1> *)0x0;
                    }
                    else {
                      pTVar11->SharedReferenceCount = (atomic<int>)0x1;
                      pTVar11[1]._padding_ = (longlong)ViewModelContextDeleter;
                      pTVar11->_padding_ =
                           (longlong)
                           &
                           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_Interaction__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
                      ;
                      pTVar11->WeakReferenceCount = (atomic<int>)0x1;
                      *(FDS_ViewModelContext **)&pTVar11[1].SharedReferenceCount = pFVar17;
                    }
                    if ((pFVar17 == (FDS_ViewModelContext *)0x0) &&
                       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                           ,0x458,L""), bVar4)) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    pUVar12 = FDS_ViewModelContext_Interaction::StaticStruct();
                    pFVar17->DerivedStaticStruct = (UStruct *)pUVar12;
                    this_03 = UDS_ViewModelContextManager::GetInst();
                    if (this_03 != (UDS_ViewModelContextManager *)0x0) {
                      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
                        LOCK();
                        pTVar11->SharedReferenceCount =
                             (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
                        UNLOCK();
                      }
                      local_98.Object = pFVar17;
                      local_98.SharedReferenceCount.ReferenceController = pTVar11;
                      UDS_ViewModelContextManager::RegisterContext(this_03,&local_98);
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline
                                (local_98.SharedReferenceCount.ReferenceController);
                    }
                    pFVar17->ViewModelTemplateKey = Interaction;
                    pFVar17[1]._padding_ = *puVar1;
                    pUVar8 = FWeakObjectPtr::Get(&local_130);
                    *(undefined4 *)&pFVar17[1].DerivedStaticStruct =
                         *(undefined4 *)&pUVar8[2].field_0x8;
                    *(int *)((longlong)&pFVar17[1].DerivedStaticStruct + 4) = iVar18;
                    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
                      LOCK();
                      pTVar11->SharedReferenceCount =
                           (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
                      UNLOCK();
                    }
                    local_78.Object = pFVar17;
                    local_78.SharedReferenceCount.ReferenceController = pTVar11;
                    UDS_UserObjectListItem::AddContext(this_02,&local_78);
                    local_b8 = this_02;
                    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                       (this_02 != (UDS_UserObjectListItem *)0x0)) {
                      UE::GC::MarkAsReachable((UObject *)this_02);
                    }
                    FDS_EntryBindingEventField::Add
                              (&this->EntryBindingEventField,
                               (TObjectPtr<UDS_UserObjectListItem>)&local_b8);
                    iVar18 = iVar18 + 1;
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTVar11);
                  }
                }
                else {
                  pUVar9 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_128);
                  pUVar8 = FWeakObjectPtr::Get(&local_130);
                  local_res18[0] = pUVar8[3].field_0x1;
                  bVar4 = UDS_PlayerData::HasPlayerSkillTargetInfo(pUVar9,local_res18,puVar1);
                  if (bVar4) {
                    pUVar8 = FWeakObjectPtr::Get(&local_128);
                    local_c0 = *(ulong64 *)&pUVar8[8].field_0x10;
                    pUVar8 = FWeakObjectPtr::Get(&local_130);
                    bVar4 = DS_AbilityUtil_PlayerSkill::IsAbleInteraction_Level
                                      (*(int *)&pUVar8[2].field_0x8,&local_c0,puVar1);
                    if (bVar4) goto LAB_14be46d66;
                  }
                }
              }
LAB_14be46fbb:
              FVar19.Data = FVar19.Data + 8;
              uVar15 = (ulonglong)local_120;
            }
            local_a0 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
            local_a8 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
            pTVar13 = FDS_EntryBindingEventField::GetUserObjectList(&this->EntryBindingEventField);
            iVar18 = pTVar13->ArrayNum;
            pFVar10 = pFVar17;
            if (0 < iVar18) {
              do {
                uVar16 = (uint)pFVar17;
                uVar5 = 0;
                if ((int)uVar16 < iVar18) {
                  uVar5 = ~uVar16 >> 0x1f;
                }
                if ((uVar5 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                if (*(longlong *)
                     ((longlong)&pFVar10->_padding_ + (longlong)(pTVar13->AllocatorInstance).Data)
                    != 0) {
                  uVar5 = 0;
                  if ((int)uVar16 < pTVar13->ArrayNum) {
                    uVar5 = ~uVar16 >> 0x1f;
                  }
                  if ((uVar5 == 0) &&
                     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar4)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  UDS_UserObjectListItem::GetContext<FDS_ViewModelContext_Interaction>
                            (*(UDS_UserObjectListItem **)
                              ((longlong)&pFVar10->_padding_ +
                              (longlong)(pTVar13->AllocatorInstance).Data),&local_88);
                  if (local_88.Object != (FDS_ViewModelContext_Interaction *)0x0) {
                    pUVar9 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_128);
                    UDS_PlayerData::SetInteractionID(pUVar9,(local_88.Object)->InteractionID);
                    pUVar14 = UDS_InputEvent::GetEvent();
                    if (pUVar14 != (UDS_InputEvent *)0x0) {
                      FDS_EventDelegate<int_const_>::Broadcast
                                (&pUVar14->OnInteractionSelectedIndex,uVar16);
                    }
                    this->CurrentIndex = uVar16;
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline
                              (local_88.SharedReferenceCount.ReferenceController);
                    break;
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_88.SharedReferenceCount.ReferenceController);
                }
                iVar18 = pTVar13->ArrayNum;
                pFVar17 = (FDS_ViewModelContext *)(ulonglong)(uVar16 + 1);
                pFVar10 = (FDS_ViewModelContext *)&pFVar10->DerivedStaticStruct;
              } while ((int)(uVar16 + 1) < iVar18);
            }
            if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f0.AllocatorInstance.Data);
            }
          }
        }
      }
    }
  }
  return;
}

// UnbindModel @ 14be55320

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

void __thiscall UDS_VM_InteractionGroup::UnbindModel(UDS_VM_InteractionGroup *this)

{
  bool bVar1;
  UDS_InputEvent *pUVar2;
  UObject *pUVar3;
  FDS_EntityBase *pFVar4;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  
  pUVar2 = UDS_InputEvent::GetEvent();
  if (pUVar2 != (UDS_InputEvent *)0x0) {
    FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
    ::Remove<UDS_VM_InteractionGroup>(&pUVar2->OnInputEvent,this);
  }
  UDS_PlayerData::GetMainPlayerCurrentEntityID();
  UDS_CharStateData::GetData((ulong64)&local_res8);
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[7].field_0x20,this);
  }
  pFVar4 = FDS_EntityBase::GetEntityBase(&this->TargetEntityID);
  if (pFVar4 != (FDS_EntityBase *)0x0) {
    if (pFVar4->EntityType == StuffWarpDevice) {
      UDS_StuffWarpDeviceData::GetData((ulong64)&local_res10);
      bVar1 = FWeakObjectPtr::IsValid(&local_res10);
      if (!bVar1) goto LAB_14be553f1;
      pUVar3 = FWeakObjectPtr::Get(&local_res10);
      this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[10].field_0x18;
    }
    else {
      UDS_CharStateData::GetData((ulong64)&local_res10);
      bVar1 = FWeakObjectPtr::IsValid(&local_res10);
      if (!bVar1) goto LAB_14be553f1;
      pUVar3 = FWeakObjectPtr::Get(&local_res10);
      this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[7].field_0x20;
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_00,this);
  }
LAB_14be553f1:
  pUVar2 = UDS_InputEvent::GetEvent();
  if (pUVar2 != (UDS_InputEvent *)0x0) {
    FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
    ::Remove<UDS_VM_InteractionGroup>(&pUVar2->OnInputEvent,this);
  }
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  return;
}

