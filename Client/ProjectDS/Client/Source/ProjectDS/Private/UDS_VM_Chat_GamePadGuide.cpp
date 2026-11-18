// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b611060

UClass * __cdecl UDS_VM_Chat_GamePadGuide::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_GamePadGuide.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_GamePadGuide",
               &Z_Registration_Info_UClass_UDS_VM_Chat_GamePadGuide.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_GamePadGuide,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_GamePadGuide>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_GamePadGuide>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_GamePadGuide.InnerSingleton;
}

// UDS_VM_Chat_GamePadGuide @ 14b6148c0

UDS_VM_Chat_GamePadGuide * __thiscall
UDS_VM_Chat_GamePadGuide::UDS_VM_Chat_GamePadGuide
          (UDS_VM_Chat_GamePadGuide *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_GamePadGuide__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->AddedKeyActionTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AddedKeyActionTypes).ArrayNum = 0;
  (this->AddedKeyActionTypes).ArrayMax = 0;
  return this;
}

// UDS_VM_Chat_GamePadGuide @ 14b614920

UDS_VM_Chat_GamePadGuide * __thiscall
UDS_VM_Chat_GamePadGuide::UDS_VM_Chat_GamePadGuide
          (UDS_VM_Chat_GamePadGuide *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_GamePadGuide__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->AddedKeyActionTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AddedKeyActionTypes).ArrayNum = 0;
  (this->AddedKeyActionTypes).ArrayMax = 0;
  return this;
}

// ~UDS_VM_Chat_GamePadGuide @ 14b616c80

void __thiscall UDS_VM_Chat_GamePadGuide::~UDS_VM_Chat_GamePadGuide(UDS_VM_Chat_GamePadGuide *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_GamePadGuide__6B_;
  pFVar1 = (this->AddedKeyActionTypes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b618f30

IClassDescriptor * __thiscall
UDS_VM_Chat_GamePadGuide::GetFieldNotificationDescriptor(UDS_VM_Chat_GamePadGuide *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Chat_GamePadGuide::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b619680

UClass * __cdecl UDS_VM_Chat_GamePadGuide::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_GamePadGuide.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_GamePadGuide",
               &Z_Registration_Info_UClass_UDS_VM_Chat_GamePadGuide.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_GamePadGuide,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_GamePadGuide>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_GamePadGuide>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_GamePadGuide.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Chat_GamePadGuide @ 14b61a1d0

void __cdecl UDS_VM_Chat_GamePadGuide::StaticRegisterNativesUDS_VM_Chat_GamePadGuide(void)

{
  return;
}

// BindModel @ 14bd47ad0

void __thiscall UDS_VM_Chat_GamePadGuide::BindModel(UDS_VM_Chat_GamePadGuide *this)

{
  UDS_ChatEvent *pUVar1;
  UDS_InputEvent *pUVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_res10 [2];
  int local_res18 [2];
  undefined4 *local_res20;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedChatMode,this
              );
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ChatMode),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_GamePadGuide>
              (&pUVar1->OnChangedChatMode,(UDS_VM_Chat_GamePadGuide *)local_res10,
               (pmf_9f6e34e4 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnAddedKeyActionType,
               this);
    TMulticastDelegateRegistration<void___cdecl(bool,enum_EDS_KeyActionType),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_Chat_GamePadGuide>
              (&pUVar1->OnAddedKeyActionType,(UDS_VM_Chat_GamePadGuide *)local_res10,
               (pmf_b9bcd4e6 *)this);
  }
  pUVar2 = UDS_InputEvent::GetEvent();
  if (pUVar2 != (UDS_InputEvent *)0x0) {
    puVar4 = &(pUVar2->OnInputEvent).Subscriptions.field_0x40;
    local_res10[0] = 0x15f99;
    if (*(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x8 !=
        *(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x34) {
      puVar3 = *(undefined1 **)puVar4;
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &(pUVar2->OnInputEvent).Subscriptions.field_0x38;
      }
      iVar5 = *(int *)(puVar3 + (ulonglong)
                                (*(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                0x15f99) * 4);
      if (iVar5 != -1) {
        do {
          piVar6 = (int *)((longlong)iVar5 * 0x50 +
                          *(longlong *)&(pUVar2->OnInputEvent).Subscriptions);
          if (*piVar6 == 0x15f99) {
            if ((iVar5 != -1) && (piVar6 != (int *)0x0)) goto LAB_14bd47c4c;
            break;
          }
          iVar5 = piVar6[0x12];
        } while (iVar5 != -1);
      }
    }
    local_res20 = local_res10;
    TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
              (&(pUVar2->OnInputEvent).Subscriptions,(uint)local_res18,
               (TKeyInitializer<EDS_KeyActionType_const_&> *)0x15f99,(bool *)&local_res20);
    piVar6 = (int *)((longlong)local_res18[0] * 0x50 +
                    *(longlong *)&(pUVar2->OnInputEvent).Subscriptions);
LAB_14bd47c4c:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar6 + 2),this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_Chat_GamePadGuide>
              (piVar6 + 2,(UDS_VM_Chat_GamePadGuide *)local_res18,(pmf_6e6593c8 *)this);
    local_res10[0] = 0x15f9a;
    if (*(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x8 !=
        *(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x34) {
      puVar4 = *(undefined1 **)puVar4;
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &(pUVar2->OnInputEvent).Subscriptions.field_0x38;
      }
      iVar5 = *(int *)(puVar4 + (ulonglong)
                                (*(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                0x15f9a) * 4);
      if (iVar5 != -1) {
        do {
          piVar6 = (int *)((longlong)iVar5 * 0x50 +
                          *(longlong *)&(pUVar2->OnInputEvent).Subscriptions);
          if (*piVar6 == 0x15f9a) {
            if (piVar6 != (int *)0x0) goto LAB_14bd47d33;
            break;
          }
          iVar5 = piVar6[0x12];
        } while (iVar5 != -1);
      }
    }
    local_res20 = local_res10;
    TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
              (&(pUVar2->OnInputEvent).Subscriptions,(uint)local_res18,
               (TKeyInitializer<EDS_KeyActionType_const_&> *)0x15f9a,(bool *)&local_res20);
    piVar6 = (int *)((longlong)local_res18[0] * 0x50 +
                    *(longlong *)&(pUVar2->OnInputEvent).Subscriptions);
LAB_14bd47d33:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar6 + 2),this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_Chat_GamePadGuide>
              (piVar6 + 2,(UDS_VM_Chat_GamePadGuide *)local_res18,(pmf_6e6593c8 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnChangeInputDeviceType,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_InputDeviceType_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_Chat_GamePadGuide>
              (&pUVar2->OnChangeInputDeviceType,(UDS_VM_Chat_GamePadGuide *)local_res10,
               (pmf_25eb2225 *)this);
  }
  return;
}

// OnAddedKeyActionType @ 14bd6e140

void __thiscall
UDS_VM_Chat_GamePadGuide::OnAddedKeyActionType
          (UDS_VM_Chat_GamePadGuide *this,bool param_1,EDS_KeyActionType param_2)

{
  TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  EDS_KeyActionType EVar10;
  int iVar11;
  EDS_KeyActionType local_res18 [4];
  
  pTVar1 = &this->AddedKeyActionTypes;
  local_res18[0] = param_2;
  if (param_1) {
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    iVar5 = (this->AddedKeyActionTypes).ArrayNum;
    pFVar2 = pFVar6 + (longlong)iVar5 * 4;
    while( true ) {
      if (pFVar6 == pFVar2) {
        if (iVar5 == (this->AddedKeyActionTypes).ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar1->AllocatorInstance,&(this->AddedKeyActionTypes).ArrayMax)
          ;
        }
        (this->AddedKeyActionTypes).ArrayNum = iVar5 + 1;
        *(EDS_KeyActionType *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 4) =
             local_res18[0];
        UpdateGamePadGuides(this);
        return;
      }
      if (*(EDS_KeyActionType *)pFVar6 == param_2) break;
      pFVar6 = pFVar6 + 4;
    }
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_res18) &&
      ((FScriptContainerElement *)local_res18 <
       pFVar2 + (longlong)(this->AddedKeyActionTypes).ArrayMax * 4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->AddedKeyActionTypes).ArrayNum;
  if (iVar5 != 0) {
    iVar11 = 0;
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    bVar4 = *(EDS_KeyActionType *)pFVar2 != local_res18[0];
    lVar7 = 0;
    EVar10 = local_res18[0];
    iVar8 = 0;
    do {
      iVar9 = iVar8;
      do {
        lVar7 = lVar7 + 1;
        iVar9 = iVar9 + 1;
        if (iVar5 <= lVar7) break;
      } while (bVar4 == (*(EDS_KeyActionType *)(pFVar2 + lVar7 * 4) != EVar10));
      if (bVar4 != false) {
        if (iVar11 != iVar8) {
          memmove(pFVar2 + (longlong)iVar11 * 4,pFVar2 + (longlong)iVar8 * 4,
                  (longlong)(iVar9 - iVar8) << 2);
          EVar10 = local_res18[0];
        }
        iVar11 = iVar11 + (iVar9 - iVar8);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar8 = iVar9;
    } while (lVar7 < iVar5);
    (this->AddedKeyActionTypes).ArrayNum = iVar11;
  }
  UpdateGamePadGuides(this);
  return;
}

// OnChangeInputDeviceType @ 14bd6ef00

void __thiscall
UDS_VM_Chat_GamePadGuide::OnChangeInputDeviceType
          (UDS_VM_Chat_GamePadGuide *this,EDS_InputDeviceType *param_1)

{
  ESlateVisibility EVar1;
  
  EVar1 = SelfHitTestInvisible;
  if (*param_1 != GamePad) {
    EVar1 = Collapsed;
  }
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,EVar1);
  return;
}

// OnChangedChatMode @ 14bd6fd90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_GamePadGuide::OnChangedChatMode(UDS_VM_Chat_GamePadGuide *this,EDS_ChatMode param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  UDS_UserObjectListItem *this_00;
  bool bVar5;
  int iVar6;
  EDS_ChatMode EVar7;
  uint uVar8;
  uint uVar9;
  UDS_ChatEvent *pUVar10;
  UObject *pUVar11;
  UClass *pUVar12;
  UDS_UserObjectListItem *this_01;
  FDS_ViewModelContext *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  UScriptStruct *pUVar15;
  UDS_ViewModelContextManager *this_02;
  int iVar16;
  ulonglong uVar17;
  longlong *plVar18;
  FScriptContainerElement *pFVar19;
  ForAnyElementType FVar20;
  undefined1 auStack_138 [32];
  ForAnyElementType FStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined1 auStack_107 [7];
  UDS_UserObjectListItem *pUStack_100;
  UDS_VM_Chat_GamePadGuide *pUStack_f8;
  FName FStack_e8;
  int iStack_e0;
  TSharedPtr<FDS_ViewModelContext,1> TStack_d8;
  TSharedPtr<FDS_ViewModelContext,1> TStack_c8;
  undefined1 auStack_b8 [128];
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  pFVar19 = (this->AddedKeyActionTypes).AllocatorInstance.Data;
  iVar16 = 0;
  iVar2 = (this->AddedKeyActionTypes).ArrayNum;
  FStack_118.Data = (FScriptContainerElement *)0x0;
  uStack_110 = 0;
  pFVar1 = pFVar19 + (longlong)iVar2 * 4;
  pUStack_f8 = this;
  while( true ) {
    iVar6 = iVar16;
    if ((this->AddedKeyActionTypes).ArrayNum != iVar2) {
      uStack_108 = 0;
      `TCheckedPointerIterator<enum_EDS_KeyActionType,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&uStack_108);
      iVar6 = (uint)uStack_110;
    }
    if (pFVar19 == pFVar1) break;
    if (iVar6 == uStack_110._4_4_) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&FStack_118,(int *)((longlong)&uStack_110 + 4));
    }
    iVar16 = iVar6 + 1;
    uStack_110 = CONCAT44(uStack_110._4_4_,iVar16);
    uVar3 = *(undefined4 *)pFVar19;
    pFVar19 = pFVar19 + 4;
    *(undefined4 *)(FStack_118.Data + (longlong)iVar6 * 4) = uVar3;
  }
  if (iVar6 == uStack_110._4_4_) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&FStack_118,(int *)((longlong)&uStack_110 + 4));
  }
  *(undefined4 *)(FStack_118.Data + (longlong)iVar6 * 4) = 0x15f98;
  uStack_110._0_4_ = iVar6 + 1;
  pUVar10 = UDS_ChatEvent::GetEvent();
  if (pUVar10 != (UDS_ChatEvent *)0x0) {
    EVar7 = FDS_QueryDelegate<enum_EDS_ChatMode_const_>::Query(&pUVar10->OnQueryChatMode);
    if (EVar7 == Simple) {
      if ((uint)uStack_110 == uStack_110._4_4_) {
        uStack_110._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&FStack_118,(int *)((longlong)&uStack_110 + 4));
      }
      *(undefined4 *)(FStack_118.Data + (longlong)(int)(uint)uStack_110 * 4) = 0x15f9b;
      uStack_110._0_4_ = (uint)uStack_110 + 1;
    }
    else if (EVar7 == Normal) {
      if ((uint)uStack_110 == uStack_110._4_4_) {
        uStack_110._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&FStack_118,(int *)((longlong)&uStack_110 + 4));
      }
      uVar8 = (uint)uStack_110 + 1;
      *(undefined4 *)(FStack_118.Data + (longlong)(int)(uint)uStack_110 * 4) = 0x15f9c;
      if (uVar8 == uStack_110._4_4_) {
        uStack_110._0_4_ = uVar8;
        uVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&FStack_118,(int *)((longlong)&uStack_110 + 4));
      }
      *(undefined4 *)(FStack_118.Data + (longlong)(int)uVar8 * 4) = 0x15f99;
      uStack_110._0_4_ = uVar8 + 1;
    }
    else if (EVar7 == Extended) {
      if ((uint)uStack_110 == uStack_110._4_4_) {
        uStack_110._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&FStack_118,(int *)((longlong)&uStack_110 + 4));
      }
      uVar8 = (uint)uStack_110 + 1;
      *(undefined4 *)(FStack_118.Data + (longlong)(int)(uint)uStack_110 * 4) = 0x15f9d;
      if (uVar8 == uStack_110._4_4_) {
        uStack_110._0_4_ = uVar8;
        uVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&FStack_118,(int *)((longlong)&uStack_110 + 4));
      }
      *(undefined4 *)(FStack_118.Data + (longlong)(int)uVar8 * 4) = 0x15f9a;
      uStack_110._0_4_ = uVar8 + 1;
    }
    if ((uint)uStack_110 == uStack_110._4_4_) {
      uStack_110._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&FStack_118,(int *)((longlong)&uStack_110 + 4));
    }
    uVar8 = (uint)uStack_110 + 1;
    *(undefined4 *)(FStack_118.Data + (longlong)(int)(uint)uStack_110 * 4) = 0x15f9e;
    if (uVar8 == uStack_110._4_4_) {
      uStack_110._0_4_ = uVar8;
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&FStack_118,(int *)((longlong)&uStack_110 + 4));
    }
    uStack_110._0_4_ = uVar8 + 1;
    *(undefined4 *)(FStack_118.Data + (longlong)(int)uVar8 * 4) = 0x15f9f;
    if ((uint)uStack_110 == uStack_110._4_4_) {
      uStack_110._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&FStack_118,(int *)((longlong)&uStack_110 + 4));
    }
    uVar8 = (uint)uStack_110 + 1;
    *(undefined4 *)(FStack_118.Data + (longlong)(int)(uint)uStack_110 * 4) = 0x15fa0;
    if (uVar8 == uStack_110._4_4_) {
      uStack_110._0_4_ = uVar8;
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&FStack_118,(int *)((longlong)&uStack_110 + 4));
    }
    uStack_110._0_4_ = uVar8 + 1;
    *(undefined4 *)(FStack_118.Data + (longlong)(int)uVar8 * 4) = 0x15fa1;
    if ((uint)uStack_110 == uStack_110._4_4_) {
      uStack_110._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&FStack_118,(int *)((longlong)&uStack_110 + 4));
    }
    uVar8 = (uint)uStack_110 + 1;
    *(undefined4 *)(FStack_118.Data + (longlong)(int)(uint)uStack_110 * 4) = 0x15f91;
    if (uVar8 == uStack_110._4_4_) {
      uStack_110._0_4_ = uVar8;
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&FStack_118,(int *)((longlong)&uStack_110 + 4));
    }
    uVar9 = uVar8 + 1;
    *(undefined4 *)(FStack_118.Data + (longlong)(int)uVar8 * 4) = 0x4e28;
    if (uVar9 == uStack_110._4_4_) {
      uStack_110._0_4_ = uVar9;
      uVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&FStack_118,(int *)((longlong)&uStack_110 + 4));
    }
    uStack_110._0_4_ = uVar9 + 1;
    *(undefined4 *)(FStack_118.Data + (longlong)(int)uVar9 * 4) = 0x4e2e;
  }
  pUStack_100 = (UDS_UserObjectListItem *)&this->EntryBindingEventField;
  FDS_EntryBindingEventField::Reset((FDS_EntryBindingEventField *)pUStack_100);
  this_00 = pUStack_100;
  uVar8 = (uint)uStack_110;
  uVar17 = (ulonglong)(int)(uint)uStack_110;
  pFVar1 = FStack_118.Data + uVar17 * 4;
  FVar20.Data = FStack_118.Data;
  while( true ) {
    if ((uint)uVar17 != uVar8) {
      auStack_107[0] = 0;
      `TCheckedPointerIterator<enum_EDS_KeyActionType,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStack_107);
    }
    if (FVar20.Data == pFVar1) {
      iStack_e0 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
      FStack_e8 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
      (**(code **)(pUStack_f8->_padding_ + 0x38))(&pUStack_f8->_padding_,&FStack_e8);
      if (FStack_118.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_118.Data);
      }
      return;
    }
    pUVar11 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar11,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar12 = Z_Construct_UClass_UDS_UserObjectListItem_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)auStack_b8,pUVar12);
    auStack_b8._8_8_ = pUVar11;
    this_01 = (UDS_UserObjectListItem *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_b8);
    if (auStack_b8._64_8_ != 0) {
      plVar18 = (longlong *)(auStack_b8 + 0x50);
      if ((longlong *)auStack_b8._104_8_ != (longlong *)0x0) {
        plVar18 = (longlong *)auStack_b8._104_8_;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_01 != (UDS_UserObjectListItem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    pFVar13 = ::operator_new(0x30);
    if (pFVar13 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar13->field_0x1c = 0;
      *(undefined4 *)((longlong)&pFVar13[1]._padding_ + 4) = 0;
      *(undefined4 *)((longlong)&pFVar13[1].DerivedStaticStruct + 2) = 0;
      *(undefined2 *)((longlong)&pFVar13[1].DerivedStaticStruct + 6) = 0;
      pFVar13->DerivedStaticStruct = (UStruct *)0x0;
      (pFVar13->ViewModelName).ComparisonIndex = 0;
      (pFVar13->ViewModelName).Number = 0;
      pFVar13->ViewModelTemplateKey = None;
      pFVar13->_padding_ = (longlong)&___7FDS_ViewModelContext_InputKey__6B_;
      *(undefined2 *)&pFVar13[1].DerivedStaticStruct = 0x100;
    }
    pTVar14 = ::operator_new(0x20);
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      pTVar14->SharedReferenceCount = (atomic<int>)0x1;
      pTVar14[1]._padding_ = (longlong)ViewModelContextDeleter;
      pTVar14->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_InputKey__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      pTVar14->WeakReferenceCount = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pTVar14[1].SharedReferenceCount = pFVar13;
    }
    if ((pFVar13 == (FDS_ViewModelContext *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) break;
    pUVar15 = FDS_ViewModelContext_InputKey::StaticStruct();
    pFVar13->DerivedStaticStruct = (UStruct *)pUVar15;
    this_02 = UDS_ViewModelContextManager::GetInst();
    if (this_02 != (UDS_ViewModelContextManager *)0x0) {
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
      }
      TStack_d8.Object = pFVar13;
      TStack_d8.SharedReferenceCount.ReferenceController = pTVar14;
      UDS_ViewModelContextManager::RegisterContext(this_02,&TStack_d8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_d8.SharedReferenceCount.ReferenceController);
    }
    pFVar13->ViewModelTemplateKey = InputKey;
    *(undefined4 *)&pFVar13[1]._padding_ = *(undefined4 *)FVar20.Data;
    *(undefined4 *)((longlong)&pFVar13[1]._padding_ + 4) = 0x40f;
    *(undefined1 *)&pFVar13[1].DerivedStaticStruct = 1;
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    TStack_c8.Object = pFVar13;
    TStack_c8.SharedReferenceCount.ReferenceController = pTVar14;
    UDS_UserObjectListItem::AddContext(this_01,&TStack_c8);
    pUStack_100 = this_01;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_01 != (UDS_UserObjectListItem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    FDS_EntryBindingEventField::Add
              ((FDS_EntryBindingEventField *)this_00,
               (TObjectPtr<UDS_UserObjectListItem>)&pUStack_100);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    uVar17 = (ulonglong)(uint)uStack_110;
    FVar20.Data = FVar20.Data + 4;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// OnInput_ToSimpleMode @ 14bd7a3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_GamePadGuide::OnInput_ToSimpleMode
          (UDS_VM_Chat_GamePadGuide *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  UDS_WindowManager *pUVar1;
  UDS_InputEvent *pUVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  bool local_148 [4];
  EDS_WindowWidget local_144;
  EDS_KeyActionType local_140 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_140[0] = param_1;
  pUVar1 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar1 == (UDS_WindowManager *)0x0) goto LAB_14bd7a430;
  }
  else {
    if (pUVar1 == (UDS_WindowManager *)0x0) {
LAB_14bd7a430:
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_GamePadGuide::OnInput_ToSimpleMode",0x2e,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x99,L"windowManager == nullptr");
      if ((void *)local_138._padding_ == (void *)0x0) {
        return;
      }
      FMemory::Free((void *)local_138._padding_);
      return;
    }
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  pUVar2 = UDS_InputEvent::GetEvent();
  if (pUVar2 != (UDS_InputEvent *)0x0) {
    if (param_2 == Started) {
      local_148[0] = true;
    }
    else {
      if ((param_2 - Canceled & 0xf7) != 0) {
        return;
      }
      local_148[0] = false;
    }
    local_144 = Chatting;
    FDS_EventDelegate<bool_const_&,enum_EDS_KeyActionType_const_&,enum_EDS_WindowWidget_const_&>::
    Broadcast(&pUVar2->OnInputUIEvent,local_148,local_140,&local_144);
  }
  return;
}

// OnSetViewModel @ 14bd802f0

void __thiscall
UDS_VM_Chat_GamePadGuide::OnSetViewModel
          (UDS_VM_Chat_GamePadGuide *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,Collapsed);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14bd8bf30

void __thiscall UDS_VM_Chat_GamePadGuide::UnbindModel(UDS_VM_Chat_GamePadGuide *this)

{
  UDS_ChatEvent *pUVar1;
  UDS_InputEvent *pUVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *pTVar6;
  int iVar7;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedChatMode,this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnAddedKeyActionType,
               this);
  }
  pUVar2 = UDS_InputEvent::GetEvent();
  if (pUVar2 != (UDS_InputEvent *)0x0) {
    puVar5 = &(pUVar2->OnInputEvent).Subscriptions.field_0x40;
    if (*(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x8 !=
        *(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x34) {
      puVar4 = *(undefined1 **)puVar5;
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &(pUVar2->OnInputEvent).Subscriptions.field_0x38;
      }
      iVar7 = *(int *)(puVar4 + (ulonglong)
                                (*(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                0x15f99) * 4);
      if (iVar7 != -1) {
        do {
          piVar3 = (int *)((longlong)iVar7 * 0x50 +
                          *(longlong *)&(pUVar2->OnInputEvent).Subscriptions);
          if (*piVar3 == 0x15f99) {
            if (iVar7 != -1) {
              pTVar6 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar3 + 2);
              if (piVar3 == (int *)0x0) {
                pTVar6 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
              }
              if (pTVar6 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
                TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar6,this);
              }
            }
            break;
          }
          iVar7 = piVar3[0x12];
        } while (iVar7 != -1);
      }
    }
    if (*(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x8 !=
        *(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x34) {
      puVar5 = *(undefined1 **)puVar5;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &(pUVar2->OnInputEvent).Subscriptions.field_0x38;
      }
      iVar7 = *(int *)(puVar5 + (ulonglong)
                                (*(int *)&(pUVar2->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                0x15f9a) * 4);
      if (iVar7 != -1) {
        do {
          piVar3 = (int *)((longlong)iVar7 * 0x50 +
                          *(longlong *)&(pUVar2->OnInputEvent).Subscriptions);
          if (*piVar3 == 0x15f9a) {
            pTVar6 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar3 + 2);
            if (piVar3 == (int *)0x0) {
              pTVar6 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0;
            }
            if (pTVar6 != (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) {
              TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar6,this);
            }
            break;
          }
          iVar7 = piVar3[0x12];
        } while (iVar7 != -1);
      }
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnChangeInputDeviceType,this);
  }
  return;
}

// UpdateGamePadGuides @ 14bd8f830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_Chat_GamePadGuide::UpdateGamePadGuides(UDS_VM_Chat_GamePadGuide *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  UDS_UserObjectListItem *this_00;
  bool bVar5;
  int iVar6;
  EDS_ChatMode EVar7;
  uint uVar8;
  uint uVar9;
  UDS_ChatEvent *pUVar10;
  UObject *pUVar11;
  UClass *pUVar12;
  UDS_UserObjectListItem *this_01;
  FDS_ViewModelContext *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  UScriptStruct *pUVar15;
  UDS_ViewModelContextManager *this_02;
  int iVar16;
  ulonglong uVar17;
  longlong *plVar18;
  FScriptContainerElement *pFVar19;
  ForAnyElementType FVar20;
  undefined1 auStack_138 [32];
  ForAnyElementType local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined1 local_107 [7];
  UDS_UserObjectListItem *local_100;
  UDS_VM_Chat_GamePadGuide *local_f8;
  FName local_e8;
  int local_e0;
  TSharedPtr<FDS_ViewModelContext,1> local_d8;
  TSharedPtr<FDS_ViewModelContext,1> local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  pFVar19 = (this->AddedKeyActionTypes).AllocatorInstance.Data;
  iVar16 = 0;
  iVar2 = (this->AddedKeyActionTypes).ArrayNum;
  local_118.Data = (FScriptContainerElement *)0x0;
  local_110 = 0;
  pFVar1 = pFVar19 + (longlong)iVar2 * 4;
  local_f8 = this;
  while( true ) {
    iVar6 = iVar16;
    if ((this->AddedKeyActionTypes).ArrayNum != iVar2) {
      local_108 = 0;
      `TCheckedPointerIterator<enum_EDS_KeyActionType,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_108);
      iVar6 = (uint)local_110;
    }
    if (pFVar19 == pFVar1) break;
    if (iVar6 == local_110._4_4_) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_118,(int *)((longlong)&local_110 + 4));
    }
    iVar16 = iVar6 + 1;
    local_110 = CONCAT44(local_110._4_4_,iVar16);
    uVar3 = *(undefined4 *)pFVar19;
    pFVar19 = pFVar19 + 4;
    *(undefined4 *)(local_118.Data + (longlong)iVar6 * 4) = uVar3;
  }
  if (iVar6 == local_110._4_4_) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&local_118,(int *)((longlong)&local_110 + 4));
  }
  *(undefined4 *)(local_118.Data + (longlong)iVar6 * 4) = 0x15f98;
  local_110._0_4_ = iVar6 + 1;
  pUVar10 = UDS_ChatEvent::GetEvent();
  if (pUVar10 != (UDS_ChatEvent *)0x0) {
    EVar7 = FDS_QueryDelegate<enum_EDS_ChatMode_const_>::Query(&pUVar10->OnQueryChatMode);
    if (EVar7 == Simple) {
      if ((uint)local_110 == local_110._4_4_) {
        local_110._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_118,(int *)((longlong)&local_110 + 4));
      }
      *(undefined4 *)(local_118.Data + (longlong)(int)(uint)local_110 * 4) = 0x15f9b;
      local_110._0_4_ = (uint)local_110 + 1;
    }
    else if (EVar7 == Normal) {
      if ((uint)local_110 == local_110._4_4_) {
        local_110._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_118,(int *)((longlong)&local_110 + 4));
      }
      uVar8 = (uint)local_110 + 1;
      *(undefined4 *)(local_118.Data + (longlong)(int)(uint)local_110 * 4) = 0x15f9c;
      if (uVar8 == local_110._4_4_) {
        local_110._0_4_ = uVar8;
        uVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_118,(int *)((longlong)&local_110 + 4));
      }
      *(undefined4 *)(local_118.Data + (longlong)(int)uVar8 * 4) = 0x15f99;
      local_110._0_4_ = uVar8 + 1;
    }
    else if (EVar7 == Extended) {
      if ((uint)local_110 == local_110._4_4_) {
        local_110._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&local_118,(int *)((longlong)&local_110 + 4));
      }
      uVar8 = (uint)local_110 + 1;
      *(undefined4 *)(local_118.Data + (longlong)(int)(uint)local_110 * 4) = 0x15f9d;
      if (uVar8 == local_110._4_4_) {
        local_110._0_4_ = uVar8;
        uVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_118,(int *)((longlong)&local_110 + 4));
      }
      *(undefined4 *)(local_118.Data + (longlong)(int)uVar8 * 4) = 0x15f9a;
      local_110._0_4_ = uVar8 + 1;
    }
    if ((uint)local_110 == local_110._4_4_) {
      local_110._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_118,(int *)((longlong)&local_110 + 4));
    }
    uVar8 = (uint)local_110 + 1;
    *(undefined4 *)(local_118.Data + (longlong)(int)(uint)local_110 * 4) = 0x15f9e;
    if (uVar8 == local_110._4_4_) {
      local_110._0_4_ = uVar8;
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_118,(int *)((longlong)&local_110 + 4));
    }
    local_110._0_4_ = uVar8 + 1;
    *(undefined4 *)(local_118.Data + (longlong)(int)uVar8 * 4) = 0x15f9f;
    if ((uint)local_110 == local_110._4_4_) {
      local_110._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_118,(int *)((longlong)&local_110 + 4));
    }
    uVar8 = (uint)local_110 + 1;
    *(undefined4 *)(local_118.Data + (longlong)(int)(uint)local_110 * 4) = 0x15fa0;
    if (uVar8 == local_110._4_4_) {
      local_110._0_4_ = uVar8;
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_118,(int *)((longlong)&local_110 + 4));
    }
    local_110._0_4_ = uVar8 + 1;
    *(undefined4 *)(local_118.Data + (longlong)(int)uVar8 * 4) = 0x15fa1;
    if ((uint)local_110 == local_110._4_4_) {
      local_110._0_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_118,(int *)((longlong)&local_110 + 4));
    }
    uVar8 = (uint)local_110 + 1;
    *(undefined4 *)(local_118.Data + (longlong)(int)(uint)local_110 * 4) = 0x15f91;
    if (uVar8 == local_110._4_4_) {
      local_110._0_4_ = uVar8;
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_118,(int *)((longlong)&local_110 + 4));
    }
    uVar9 = uVar8 + 1;
    *(undefined4 *)(local_118.Data + (longlong)(int)uVar8 * 4) = 0x4e28;
    if (uVar9 == local_110._4_4_) {
      local_110._0_4_ = uVar9;
      uVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_118,(int *)((longlong)&local_110 + 4));
    }
    local_110._0_4_ = uVar9 + 1;
    *(undefined4 *)(local_118.Data + (longlong)(int)uVar9 * 4) = 0x4e2e;
  }
  local_100 = (UDS_UserObjectListItem *)&this->EntryBindingEventField;
  FDS_EntryBindingEventField::Reset((FDS_EntryBindingEventField *)local_100);
  this_00 = local_100;
  uVar8 = (uint)local_110;
  uVar17 = (ulonglong)(int)(uint)local_110;
  pFVar1 = local_118.Data + uVar17 * 4;
  FVar20.Data = local_118.Data;
  while( true ) {
    if ((uint)uVar17 != uVar8) {
      local_107[0] = 0;
      `TCheckedPointerIterator<enum_EDS_KeyActionType,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_107);
    }
    if (FVar20.Data == pFVar1) {
      local_e0 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
      local_e8 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
      (**(code **)(local_f8->_padding_ + 0x38))(&local_f8->_padding_,&local_e8);
      if (local_118.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data);
      }
      return;
    }
    pUVar11 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar11,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar12 = Z_Construct_UClass_UDS_UserObjectListItem_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar12);
    local_b8._8_8_ = pUVar11;
    this_01 = (UDS_UserObjectListItem *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar18 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar18 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_01 != (UDS_UserObjectListItem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    pFVar13 = ::operator_new(0x30);
    if (pFVar13 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar13->field_0x1c = 0;
      *(undefined4 *)((longlong)&pFVar13[1]._padding_ + 4) = 0;
      *(undefined4 *)((longlong)&pFVar13[1].DerivedStaticStruct + 2) = 0;
      *(undefined2 *)((longlong)&pFVar13[1].DerivedStaticStruct + 6) = 0;
      pFVar13->DerivedStaticStruct = (UStruct *)0x0;
      (pFVar13->ViewModelName).ComparisonIndex = 0;
      (pFVar13->ViewModelName).Number = 0;
      pFVar13->ViewModelTemplateKey = None;
      pFVar13->_padding_ = (longlong)&___7FDS_ViewModelContext_InputKey__6B_;
      *(undefined2 *)&pFVar13[1].DerivedStaticStruct = 0x100;
    }
    pTVar14 = ::operator_new(0x20);
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      pTVar14->SharedReferenceCount = (atomic<int>)0x1;
      pTVar14[1]._padding_ = (longlong)ViewModelContextDeleter;
      pTVar14->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_InputKey__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      pTVar14->WeakReferenceCount = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pTVar14[1].SharedReferenceCount = pFVar13;
    }
    if ((pFVar13 == (FDS_ViewModelContext *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) break;
    pUVar15 = FDS_ViewModelContext_InputKey::StaticStruct();
    pFVar13->DerivedStaticStruct = (UStruct *)pUVar15;
    this_02 = UDS_ViewModelContextManager::GetInst();
    if (this_02 != (UDS_ViewModelContextManager *)0x0) {
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_d8.Object = pFVar13;
      local_d8.SharedReferenceCount.ReferenceController = pTVar14;
      UDS_ViewModelContextManager::RegisterContext(this_02,&local_d8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
    }
    pFVar13->ViewModelTemplateKey = InputKey;
    *(undefined4 *)&pFVar13[1]._padding_ = *(undefined4 *)FVar20.Data;
    *(undefined4 *)((longlong)&pFVar13[1]._padding_ + 4) = 0x40f;
    *(undefined1 *)&pFVar13[1].DerivedStaticStruct = 1;
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_c8.Object = pFVar13;
    local_c8.SharedReferenceCount.ReferenceController = pTVar14;
    UDS_UserObjectListItem::AddContext(this_01,&local_c8);
    local_100 = this_01;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this_01 != (UDS_UserObjectListItem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    FDS_EntryBindingEventField::Add
              ((FDS_EntryBindingEventField *)this_00,(TObjectPtr<UDS_UserObjectListItem>)&local_100)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    uVar17 = (ulonglong)(uint)local_110;
    FVar20.Data = FVar20.Data + 4;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

