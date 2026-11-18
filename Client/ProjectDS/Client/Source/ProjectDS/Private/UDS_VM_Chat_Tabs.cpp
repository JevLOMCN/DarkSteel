// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b61cfb0

UClass * __cdecl UDS_VM_Chat_Tabs::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_Tabs.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_Tabs",
               &Z_Registration_Info_UClass_UDS_VM_Chat_Tabs.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_Tabs,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_Chat_Tabs>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_Tabs>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_Tabs.InnerSingleton;
}

// UDS_VM_Chat_Tabs @ 14b61fed0

UDS_VM_Chat_Tabs * __thiscall
UDS_VM_Chat_Tabs::UDS_VM_Chat_Tabs(UDS_VM_Chat_Tabs *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_Tabs__6B_;
  (this->EntryBindingEventField_Simple).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Simple).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Simple).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_Normal).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Normal).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Normal).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_Extended).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Extended).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Extended).UserObjectList.ArrayMax = 0;
  return this;
}

// UDS_VM_Chat_Tabs @ 14b61ff40

UDS_VM_Chat_Tabs * __thiscall
UDS_VM_Chat_Tabs::UDS_VM_Chat_Tabs(UDS_VM_Chat_Tabs *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_Tabs__6B_;
  (this->EntryBindingEventField_Simple).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Simple).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Simple).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_Normal).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Normal).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Normal).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_Extended).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Extended).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Extended).UserObjectList.ArrayMax = 0;
  return this;
}

// ~UDS_VM_Chat_Tabs @ 14b621570

void __thiscall UDS_VM_Chat_Tabs::~UDS_VM_Chat_Tabs(UDS_VM_Chat_Tabs *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_Tabs__6B_;
  pFVar1 = (this->EntryBindingEventField_Extended).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEventField_Normal).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEventField_Simple).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b623880

IClassDescriptor * __thiscall
UDS_VM_Chat_Tabs::GetFieldNotificationDescriptor(UDS_VM_Chat_Tabs *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Chat_Tabs::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b624070

UClass * __cdecl UDS_VM_Chat_Tabs::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_Tabs.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_Tabs",
               &Z_Registration_Info_UClass_UDS_VM_Chat_Tabs.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_Tabs,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_Chat_Tabs>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_Tabs>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_Tabs.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Chat_Tabs @ 14b624af0

void __cdecl UDS_VM_Chat_Tabs::StaticRegisterNativesUDS_VM_Chat_Tabs(void)

{
  return;
}

// BindModel @ 14bdb0cf0

void __thiscall UDS_VM_Chat_Tabs::BindModel(UDS_VM_Chat_Tabs *this)

{
  TMap<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>_>
  *this_00;
  UDS_ChatEvent *pUVar1;
  UDS_PartyEvent *pUVar2;
  UDS_DungeonEvent *pUVar3;
  UDS_InputEvent *pUVar4;
  undefined1 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 local_res10 [2];
  int local_res18 [2];
  undefined4 *local_res20;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnUpdateChattingTabs,
               this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_Tabs>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdateChattingTabs,(UDS_VM_Chat_Tabs *)local_res10,(pmf_1fe421e4 *)this);
  }
  pUVar2 = UDS_PartyEvent::GetEvent();
  if (pUVar2 != (UDS_PartyEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnJoinedParty,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_Tabs>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar2->OnJoinedParty,(UDS_VM_Chat_Tabs *)local_res10,(pmf_1fe421e4 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnLeftParty,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_Tabs>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar2->OnLeftParty,(UDS_VM_Chat_Tabs *)local_res10,(pmf_1fe421e4 *)this);
  }
  pUVar3 = UDS_DungeonEvent::GetEvent();
  if (pUVar3 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->OnJoinedRaidParty,this
              );
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_Tabs>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar3->OnJoinedRaidParty,(UDS_VM_Chat_Tabs *)local_res10,(pmf_1fe421e4 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->OnLeftRaidParty,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_Tabs>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar3->OnLeftRaidParty,(UDS_VM_Chat_Tabs *)local_res10,(pmf_1fe421e4 *)this);
  }
  pUVar4 = UDS_InputEvent::GetEvent();
  if (pUVar4 != (UDS_InputEvent *)0x0) {
    this_00 = &(pUVar4->OnInputEvent).Subscriptions;
    local_res10[0] = 0x15f98;
    if (*(int *)&(pUVar4->OnInputEvent).Subscriptions.field_0x8 !=
        *(int *)&(pUVar4->OnInputEvent).Subscriptions.field_0x34) {
      puVar5 = *(undefined1 **)&(pUVar4->OnInputEvent).Subscriptions.field_0x40;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &(pUVar4->OnInputEvent).Subscriptions.field_0x38;
      }
      iVar6 = *(int *)(puVar5 + (ulonglong)
                                (*(int *)&(pUVar4->OnInputEvent).Subscriptions.field_0x48 - 1U &
                                0x15f98) * 4);
      if (iVar6 != -1) {
        do {
          piVar7 = (int *)((longlong)iVar6 * 0x50 + *(longlong *)this_00);
          if (*piVar7 == 0x15f98) {
            if (piVar7 != (int *)0x0) goto LAB_14bdb0ef7;
            break;
          }
          iVar6 = piVar7[0x12];
        } while (iVar6 != -1);
      }
    }
    local_res20 = local_res10;
    TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
              (this_00,(uint)local_res18,(TKeyInitializer<EDS_KeyActionType_const_&> *)0x15f98,
               (bool *)&local_res20);
    piVar7 = (int *)((longlong)local_res18[0] * 0x50 + *(longlong *)this_00);
LAB_14bdb0ef7:
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar7 + 2),this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
    ::AddUObject<UDS_VM_Chat_Tabs>(piVar7 + 2,(UDS_VM_Chat_Tabs *)local_res18,(pmf_8eb19905 *)this);
  }
  return;
}

// GetEntryBindingEventField @ 14bdc2d80

FDS_EntryBindingEventField * __thiscall
UDS_VM_Chat_Tabs::GetEntryBindingEventField(UDS_VM_Chat_Tabs *this,EDS_ChatMode param_1)

{
  EDS_ChatMode EVar1;
  UDS_ChatEvent *pUVar2;
  FDS_EntryBindingEventField *pFVar3;
  
  pUVar2 = UDS_ChatEvent::GetEvent();
  if (pUVar2 != (UDS_ChatEvent *)0x0) {
    EVar1 = FDS_QueryDelegate<enum_EDS_ChatMode_const_>::Query(&pUVar2->OnQueryChatMode);
    if (EVar1 != Simple) {
      if (EVar1 == Normal) {
        return &this->EntryBindingEventField_Normal;
      }
      pFVar3 = &this->EntryBindingEventField_Simple;
      if (EVar1 == Extended) {
        pFVar3 = &this->EntryBindingEventField_Extended;
      }
      return pFVar3;
    }
  }
  return &this->EntryBindingEventField_Simple;
}

// OnInput_SelectChattingTab @ 14bdcf510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_Tabs::OnInput_SelectChattingTab
          (UDS_VM_Chat_Tabs *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  double dVar1;
  EDS_ChattingTabType EVar2;
  undefined1 uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  EDS_ChattingTabType *pEVar7;
  FDS_ChattingTabData *this_00;
  undefined1 *puVar8;
  longlong *plVar9;
  code *pcVar10;
  FWeakObjectPtr FVar11;
  bool bVar12;
  bool bVar13;
  char cVar14;
  EDS_ChatMode EVar15;
  UDS_ChatEvent *pUVar16;
  UDS_ChattingManager *pUVar17;
  UDS_LogManager *pUVar18;
  TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_> *pTVar19;
  UObject *pUVar20;
  FDS_EntryBindingEventField *this_01;
  int iVar21;
  longlong lVar22;
  FDS_EventDelegate<EDS_ChattingTabType_const_,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>_const_>
  *this_02;
  uint uVar23;
  int iVar24;
  uint uVar25;
  longlong lVar26;
  undefined1 auStackY_208 [32];
  FWeakObjectPtr local_1c8;
  FWeakObjectPtr local_1c0;
  FInputActionValue *local_1b8;
  undefined8 local_1b0;
  UObject *local_1a8;
  FDestructionSentinel local_1a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_188;
  ulonglong local_68;
  
  if (param_2 != Started) {
    return;
  }
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_1b8 = param_3;
  pUVar16 = UDS_ChatEvent::GetEvent();
  if (pUVar16 == (UDS_ChatEvent *)0x0) {
    return;
  }
  EVar15 = FDS_QueryDelegate<enum_EDS_ChatMode_const_>::Query(&pUVar16->OnQueryChatMode);
  if (EVar15 == Viewer) {
    return;
  }
  pUVar17 = UDS_ChattingManager::GetInst();
  if (pUVar17 == (UDS_ChattingManager *)0x0) {
    pUVar18 = UDS_LogManager::GetInst();
    if (pUVar18 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar18 = UDS_LogManager::GetInst();
    local_188._padding_ = (longlong)pUVar17;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_188,"UDS_VM_Chat_Tabs::OnInput_SelectChattingTab",0x2b,Yes);
    UDS_LogManager::PrintLog(pUVar18,1,Warning,local_188.Ptr,0xb0,L"chattingManager == nullptr");
    if ((UDS_ChattingManager *)local_188._padding_ == (UDS_ChattingManager *)0x0) {
      return;
    }
    FMemory::Free((void *)local_188._padding_);
    return;
  }
  uVar23 = 0;
  EVar2 = (pUVar17->ChatStateData).ChattingTabType;
  iVar4 = (pUVar17->ChattingTabDatas).ArrayNum;
  uVar25 = 0xffffffff;
  if (0 < iVar4) {
    lVar22 = 0;
    lVar26 = 0;
    do {
      uVar25 = 0;
      if ((int)uVar23 < (pUVar17->ChattingTabDatas).ArrayNum) {
        uVar25 = ~uVar23 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar5 = (pUVar17->ChattingTabDatas).AllocatorInstance.Data;
      pTVar6 = *(TReferenceControllerBase<1> **)(pFVar5 + lVar26 + 8);
      pEVar7 = *(EDS_ChattingTabType **)(pFVar5 + lVar26);
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pEVar7 == (EDS_ChattingTabType *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (*pEVar7 == EVar2) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        uVar25 = uVar23;
        goto LAB_14bdcf739;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      uVar23 = uVar23 + 1;
      lVar22 = lVar22 + 1;
      lVar26 = lVar26 + 0x10;
    } while (lVar22 < iVar4);
    uVar25 = 0xffffffff;
  }
LAB_14bdcf739:
  iVar24 = 1;
  dVar1 = (local_1b8->Value).field0_0x0._s_0.X;
  if (1 < iVar4) {
    do {
      iVar21 = -iVar24;
      if (0.0 < (float)dVar1) {
        iVar21 = iVar24;
      }
      uVar23 = iVar21 + uVar25;
      iVar21 = iVar4;
      if ((int)uVar23 < 0) {
LAB_14bdcf77c:
        uVar23 = uVar23 + iVar21;
        if (-1 < (int)uVar23) goto LAB_14bdcf784;
      }
      else {
        if (iVar4 <= (int)uVar23) {
          iVar21 = -iVar4;
          goto LAB_14bdcf77c;
        }
LAB_14bdcf784:
        if ((int)uVar23 < (pUVar17->ChattingTabDatas).ArrayNum) {
          if (((int)uVar23 < 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar5 = (pUVar17->ChattingTabDatas).AllocatorInstance.Data;
          pTVar6 = *(TReferenceControllerBase<1> **)(pFVar5 + (ulonglong)uVar23 * 0x10 + 8);
          this_00 = *(FDS_ChattingTabData **)(pFVar5 + (ulonglong)uVar23 * 0x10);
          if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((this_00 == (FDS_ChattingTabData *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar12)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          bVar12 = FDS_ChattingTabData::IsShowChattingTab(this_00);
          if (bVar12) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar6);
            goto LAB_14bdcf852;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar6);
        }
      }
      iVar24 = iVar24 + 1;
    } while (iVar24 < iVar4);
  }
  uVar23 = uVar25;
  if (uVar25 == 0xffffffff) {
    return;
  }
LAB_14bdcf852:
  if ((int)uVar23 < 0) {
    return;
  }
  if ((pUVar17->ChattingTabDatas).ArrayNum <= (int)uVar23) {
    return;
  }
  local_1c0.ObjectIndex = 0;
  local_1c0.ObjectSerialNumber = 0;
  local_1b0 = 0;
  FWeakObjectPtr::operator=(&local_1c0,(FObjectPtr)&local_1b0);
  pUVar16 = UDS_ChatEvent::GetEvent();
  if ((pUVar16 != (UDS_ChatEvent *)0x0) &&
     (EVar15 = FDS_QueryDelegate<enum_EDS_ChatMode_const_>::Query(&pUVar16->OnQueryChatMode),
     EVar15 != Simple)) {
    if (EVar15 == Normal) {
      this_01 = &this->EntryBindingEventField_Normal;
      goto LAB_14bdcf8d5;
    }
    if (EVar15 == Extended) {
      this_01 = &this->EntryBindingEventField_Extended;
      goto LAB_14bdcf8d5;
    }
  }
  this_01 = &this->EntryBindingEventField_Simple;
LAB_14bdcf8d5:
  pTVar19 = FDS_EntryBindingEventField::GetUserObjectList(this_01);
  if ((int)uVar23 < pTVar19->ArrayNum) {
    if (((int)uVar23 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pUVar20 = *(UObject **)((pTVar19->AllocatorInstance).Data + (longlong)(int)uVar23 * 8);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar20 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar20);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar20);
      }
    }
    local_1c8.ObjectIndex = 0;
    local_1c8.ObjectSerialNumber = 0;
    local_1a8 = pUVar20;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar20 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar20);
    }
    FWeakObjectPtr::operator=(&local_1c8,(FObjectPtr)&local_1a8);
    bVar12 = FWeakObjectPtr::IsValid(&local_1c8);
    if (bVar12) {
      pUVar20 = FWeakObjectPtr::Get(&local_1c8);
      local_1c0.ObjectIndex = *(int *)&pUVar20[4].field_0xc;
      local_1c0.ObjectSerialNumber = *(int *)&pUVar20[4].field_0x10;
    }
  }
  pUVar16 = UDS_ChatEvent::GetEvent();
  if (pUVar16 != (UDS_ChatEvent *)0x0) {
    uVar25 = 0;
    if ((int)uVar23 < (pUVar17->ChattingTabDatas).ArrayNum) {
      uVar25 = ~uVar23 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    FVar11 = local_1c0;
    pFVar5 = (pUVar17->ChattingTabDatas).AllocatorInstance.Data;
    pTVar6 = *(TReferenceControllerBase<1> **)(pFVar5 + (longlong)(int)uVar23 * 0x10 + 8);
    puVar8 = *(undefined1 **)(pFVar5 + (longlong)(int)uVar23 * 0x10);
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    this_02 = &pUVar16->OnClickedChattingTabType;
    if ((puVar8 == (undefined1 *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar3 = *puVar8;
    bVar12 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                       ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_02);
    if (bVar12) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_02,
                 (FWriteAccessScope *)&local_1a0);
      puVar8 = &(pUVar16->OnClickedChattingTabType).Delegate.field_0x1c;
      *(int *)puVar8 = *(int *)puVar8 + 1;
      bVar12 = false;
      uVar25 = *(int *)&(pUVar16->OnClickedChattingTabType).Delegate.field_0x10 - 1;
      if (-1 < (int)uVar25) {
        lVar22 = (longlong)(int)uVar25 << 4;
        bVar12 = false;
        do {
          uVar23 = 0;
          if ((int)uVar25 < *(int *)&(pUVar16->OnClickedChattingTabType).Delegate.field_0x10) {
            uVar23 = ~uVar25 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar26 = *(longlong *)&(pUVar16->OnClickedChattingTabType).Delegate.field_0x8;
          if (((*(int *)(lVar22 + 8 + lVar26) == 0) ||
              (plVar9 = *(longlong **)(lVar22 + lVar26), plVar9 == (longlong *)0x0)) ||
             (cVar14 = (**(code **)(*plVar9 + 0x68))(plVar9,uVar3,FVar11), cVar14 == '\0')) {
            bVar12 = true;
          }
          lVar22 = lVar22 + -0x10;
          uVar25 = uVar25 - 1;
        } while (-1 < (int)uVar25);
      }
      puVar8 = &(pUVar16->OnClickedChattingTabType).Delegate.field_0x1c;
      *(int *)puVar8 = *(int *)puVar8 + -1;
      if (bVar12) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_02,false);
      }
      if (local_1a0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a0.Accessor,&local_1a0);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return;
}

// OnSetViewModel @ 14bdd6720

void __thiscall
UDS_VM_Chat_Tabs::OnSetViewModel(UDS_VM_Chat_Tabs *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  UpdateChattingTabs(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdateChattingTabs @ 14bddfb20

void __thiscall UDS_VM_Chat_Tabs::OnUpdateChattingTabs(UDS_VM_Chat_Tabs *this)

{
  int *piVar1;
  EDS_ChattingTabType EVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UDS_ChattingManager *pUVar7;
  ulonglong uVar8;
  UObject *pUVar9;
  UDS_UserObjectListItem *pUVar10;
  FDS_ViewModelContext *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  UScriptStruct *pUVar13;
  UDS_ViewModelContextManager *pUVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStackX_10 [8];
  uint uStackX_18;
  UDS_UserObjectListItem *pUStackX_20;
  UDS_UserObjectListItem *pUStack_d0;
  FDS_EntryBindingEventField *pFStack_c8;
  UDS_UserObjectListItem *pUStack_c0;
  FDS_EntryBindingEventField *pFStack_b8;
  FScriptContainerElement *pFStack_b0;
  FName FStack_a8;
  int iStack_a0;
  FName FStack_98;
  int iStack_90;
  FName FStack_88;
  int iStack_80;
  TSharedPtr<FDS_ViewModelContext,1> TStack_78;
  TSharedPtr<FDS_ViewModelContext,1> TStack_68;
  TSharedPtr<FDS_ViewModelContext,1> TStack_58;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_Simple);
  pFStack_c8 = &this->EntryBindingEventField_Normal;
  FDS_EntryBindingEventField::Reset(pFStack_c8);
  pFStack_b8 = &this->EntryBindingEventField_Extended;
  FDS_EntryBindingEventField::Reset(pFStack_b8);
  pUVar7 = UDS_ChattingManager::GetInst();
  if (pUVar7 != (UDS_ChattingManager *)0x0) {
    EVar2 = (pUVar7->ChatStateData).ChattingTabType;
    pFVar15 = (pUVar7->ChattingTabDatas).AllocatorInstance.Data;
    uStackX_18 = (pUVar7->ChattingTabDatas).ArrayNum;
    uVar8 = (ulonglong)(int)uStackX_18;
    pFStack_b0 = pFVar15 + uVar8 * 0x10;
    while( true ) {
      pFVar3 = pFStack_b0;
      if ((pUVar7->ChattingTabDatas).ArrayNum != (int)uVar8) {
        auStackX_10[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FDS_ChattingTabData,1>_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(auStackX_10);
      }
      if (pFVar15 == pFVar3) break;
      pUVar9 = GetTransientPackageAsObject();
      pUVar10 = NewObject<UDS_UserObjectListItem>(pUVar9);
      if (pUVar10 != (UDS_UserObjectListItem *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        pFVar11 = ::operator_new(0x30);
        if (pFVar11 == (FDS_ViewModelContext *)0x0) {
          pFVar11 = (FDS_ViewModelContext *)0x0;
        }
        else {
          pFVar11->_padding_ = 0;
          pFVar11->DerivedStaticStruct = (UStruct *)0x0;
          (pFVar11->ViewModelName).ComparisonIndex = 0;
          (pFVar11->ViewModelName).Number = 0;
          *(undefined8 *)&pFVar11->ViewModelTemplateKey = 0;
          pFVar11[1]._padding_ = 0;
          pFVar11[1].DerivedStaticStruct = (UStruct *)0x0;
          pFVar11->_padding_ = (longlong)&___7FDS_ViewModelContext_ChatTab__6B_;
          *(undefined4 *)((longlong)&pFVar11[1]._padding_ + 4) = 0xffffffff;
        }
        pTVar12 = ::operator_new(0x20);
        if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
          pTVar12 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          pTVar12[1]._padding_ = (longlong)ViewModelContextDeleter;
          pTVar12->SharedReferenceCount = (atomic<int>)0x1;
          pTVar12->WeakReferenceCount = (atomic<int>)0x1;
          pTVar12->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ChatTab__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          *(FDS_ViewModelContext **)&pTVar12[1].SharedReferenceCount = pFVar11;
        }
        if ((pFVar11 == (FDS_ViewModelContext *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pUVar13 = FDS_ViewModelContext_ChatTab::StaticStruct();
        pFVar11->DerivedStaticStruct = (UStruct *)pUVar13;
        pUVar14 = UDS_ViewModelContextManager::GetInst();
        if (pUVar14 != (UDS_ViewModelContextManager *)0x0) {
          if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
            UNLOCK();
          }
          TStack_78.Object = pFVar11;
          TStack_78.SharedReferenceCount.ReferenceController = pTVar12;
          UDS_ViewModelContextManager::RegisterContext(pUVar14,&TStack_78);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_78.SharedReferenceCount.ReferenceController);
        }
        pFVar11->ViewModelTemplateKey = Chat_TabSlot;
        if ((*(longlong *)pFVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined1 *)&pFVar11[1]._padding_ = **(undefined1 **)pFVar15;
        if ((*(longlong *)pFVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(bool *)&pFVar11[1].DerivedStaticStruct = EVar2 == **(EDS_ChattingTabType **)pFVar15;
        if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
          UNLOCK();
        }
        iVar6 = (pUVar10->ViewModelContextArray).ArrayNum;
        piVar1 = &(pUVar10->ViewModelContextArray).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(pUVar10->ViewModelContextArray).AllocatorInstance,piVar1);
        }
        (pUVar10->ViewModelContextArray).ArrayNum = iVar6 + 1;
        pFVar3 = (pUVar10->ViewModelContextArray).AllocatorInstance.Data;
        *(FDS_ViewModelContext **)(pFVar3 + (longlong)iVar6 * 0x10) = pFVar11;
        *(TReferenceControllerBase<1> **)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = pTVar12;
        if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12)
        ;
        pUStackX_20 = pUVar10;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        FDS_EntryBindingEventField::Add
                  (&this->EntryBindingEventField_Simple,
                   (TObjectPtr<UDS_UserObjectListItem>)&pUStackX_20);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12)
        ;
      }
      pUVar9 = GetTransientPackageAsObject();
      pUVar10 = NewObject<UDS_UserObjectListItem>(pUVar9);
      if (pUVar10 != (UDS_UserObjectListItem *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        pFVar11 = ::operator_new(0x30);
        if (pFVar11 == (FDS_ViewModelContext *)0x0) {
          pFVar11 = (FDS_ViewModelContext *)0x0;
        }
        else {
          pFVar11->_padding_ = 0;
          pFVar11->DerivedStaticStruct = (UStruct *)0x0;
          (pFVar11->ViewModelName).ComparisonIndex = 0;
          (pFVar11->ViewModelName).Number = 0;
          *(undefined8 *)&pFVar11->ViewModelTemplateKey = 0;
          pFVar11[1]._padding_ = 0;
          pFVar11[1].DerivedStaticStruct = (UStruct *)0x0;
          pFVar11->_padding_ = (longlong)&___7FDS_ViewModelContext_ChatTab__6B_;
          *(undefined4 *)((longlong)&pFVar11[1]._padding_ + 4) = 0xffffffff;
        }
        pTVar12 = ::operator_new(0x20);
        if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
          pTVar12 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          pTVar12[1]._padding_ = (longlong)ViewModelContextDeleter;
          pTVar12->SharedReferenceCount = (atomic<int>)0x1;
          pTVar12->WeakReferenceCount = (atomic<int>)0x1;
          pTVar12->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ChatTab__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          *(FDS_ViewModelContext **)&pTVar12[1].SharedReferenceCount = pFVar11;
        }
        if ((pFVar11 == (FDS_ViewModelContext *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pUVar13 = FDS_ViewModelContext_ChatTab::StaticStruct();
        pFVar11->DerivedStaticStruct = (UStruct *)pUVar13;
        pUVar14 = UDS_ViewModelContextManager::GetInst();
        if (pUVar14 != (UDS_ViewModelContextManager *)0x0) {
          if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
            UNLOCK();
          }
          TStack_68.Object = pFVar11;
          TStack_68.SharedReferenceCount.ReferenceController = pTVar12;
          UDS_ViewModelContextManager::RegisterContext(pUVar14,&TStack_68);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_68.SharedReferenceCount.ReferenceController);
        }
        pFVar11->ViewModelTemplateKey = Chat_TabSlot;
        if ((*(longlong *)pFVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined1 *)&pFVar11[1]._padding_ = **(undefined1 **)pFVar15;
        if ((*(longlong *)pFVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(bool *)&pFVar11[1].DerivedStaticStruct = EVar2 == **(EDS_ChattingTabType **)pFVar15;
        if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
          UNLOCK();
        }
        iVar6 = (pUVar10->ViewModelContextArray).ArrayNum;
        piVar1 = &(pUVar10->ViewModelContextArray).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(pUVar10->ViewModelContextArray).AllocatorInstance,piVar1);
        }
        (pUVar10->ViewModelContextArray).ArrayNum = iVar6 + 1;
        pFVar3 = (pUVar10->ViewModelContextArray).AllocatorInstance.Data;
        *(FDS_ViewModelContext **)(pFVar3 + (longlong)iVar6 * 0x10) = pFVar11;
        *(TReferenceControllerBase<1> **)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = pTVar12;
        if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12)
        ;
        pUStack_d0 = pUVar10;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        FDS_EntryBindingEventField::Add(pFStack_c8,(TObjectPtr<UDS_UserObjectListItem>)&pUStack_d0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12)
        ;
      }
      pUVar9 = GetTransientPackageAsObject();
      pUVar10 = NewObject<UDS_UserObjectListItem>(pUVar9);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar10 != (UDS_UserObjectListItem *)0x0) goto LAB_14bdef8b2;
      }
      else if (pUVar10 != (UDS_UserObjectListItem *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar10);
LAB_14bdef8b2:
        pFVar11 = ::operator_new(0x30);
        if (pFVar11 == (FDS_ViewModelContext *)0x0) {
          pFVar11 = (FDS_ViewModelContext *)0x0;
        }
        else {
          pFVar11->_padding_ = 0;
          pFVar11->DerivedStaticStruct = (UStruct *)0x0;
          (pFVar11->ViewModelName).ComparisonIndex = 0;
          (pFVar11->ViewModelName).Number = 0;
          *(undefined8 *)&pFVar11->ViewModelTemplateKey = 0;
          pFVar11[1]._padding_ = 0;
          pFVar11[1].DerivedStaticStruct = (UStruct *)0x0;
          *(undefined4 *)((longlong)&pFVar11[1]._padding_ + 4) = 0xffffffff;
          pFVar11->_padding_ = (longlong)&___7FDS_ViewModelContext_ChatTab__6B_;
        }
        pTVar12 = ::operator_new(0x20);
        if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
          pTVar12 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          pTVar12->SharedReferenceCount = (atomic<int>)0x1;
          pTVar12[1]._padding_ = (longlong)ViewModelContextDeleter;
          pTVar12->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ChatTab__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          pTVar12->WeakReferenceCount = (atomic<int>)0x1;
          *(FDS_ViewModelContext **)&pTVar12[1].SharedReferenceCount = pFVar11;
        }
        if ((pFVar11 == (FDS_ViewModelContext *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pUVar13 = FDS_ViewModelContext_ChatTab::StaticStruct();
        pFVar11->DerivedStaticStruct = (UStruct *)pUVar13;
        pUVar14 = UDS_ViewModelContextManager::GetInst();
        if (pUVar14 != (UDS_ViewModelContextManager *)0x0) {
          if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
            UNLOCK();
          }
          TStack_58.Object = pFVar11;
          TStack_58.SharedReferenceCount.ReferenceController = pTVar12;
          UDS_ViewModelContextManager::RegisterContext(pUVar14,&TStack_58);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_58.SharedReferenceCount.ReferenceController);
        }
        pFVar11->ViewModelTemplateKey = Chat_TabSlot;
        if ((*(longlong *)pFVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined1 *)&pFVar11[1]._padding_ = **(undefined1 **)pFVar15;
        if ((*(longlong *)pFVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(bool *)&pFVar11[1].DerivedStaticStruct = EVar2 == **(EDS_ChattingTabType **)pFVar15;
        if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
          UNLOCK();
        }
        iVar6 = (pUVar10->ViewModelContextArray).ArrayNum;
        piVar1 = &(pUVar10->ViewModelContextArray).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(pUVar10->ViewModelContextArray).AllocatorInstance,piVar1);
        }
        (pUVar10->ViewModelContextArray).ArrayNum = iVar6 + 1;
        pFVar3 = (pUVar10->ViewModelContextArray).AllocatorInstance.Data;
        *(FDS_ViewModelContext **)(pFVar3 + (longlong)iVar6 * 0x10) = pFVar11;
        *(TReferenceControllerBase<1> **)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = pTVar12;
        if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12)
        ;
        pUStack_c0 = pUVar10;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        FDS_EntryBindingEventField::Add(pFStack_b8,(TObjectPtr<UDS_UserObjectListItem>)&pUStack_c0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12)
        ;
      }
      pFVar15 = pFVar15 + 0x10;
      uVar8 = (ulonglong)uStackX_18;
    }
  }
  iStack_a0 = FFieldNotificationClassDescriptor::EntryBindingEventField_Simple.BitNumber;
  FStack_a8 = FFieldNotificationClassDescriptor::EntryBindingEventField_Simple.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_a8);
  iStack_90 = FFieldNotificationClassDescriptor::EntryBindingEventField_Normal.BitNumber;
  FStack_98 = FFieldNotificationClassDescriptor::EntryBindingEventField_Normal.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_98);
  iStack_80 = FFieldNotificationClassDescriptor::EntryBindingEventField_Extended.BitNumber;
  FStack_88 = FFieldNotificationClassDescriptor::EntryBindingEventField_Extended.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_88);
  return;
}

// UnbindModel @ 14bdec410

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_Chat_Tabs::UnbindModel(UDS_VM_Chat_Tabs *this)

{
  UDS_LanguageManager *pUVar1;
  UDS_ChatEvent *pUVar2;
  UDS_PartyEvent *pUVar3;
  UDS_DungeonEvent *pUVar4;
  UDS_InputEvent *pUVar5;
  
  pUVar1 = UDS_LanguageManager::GetInst();
  if (pUVar1 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLanguageChanged,this
              );
  }
  pUVar2 = UDS_ChatEvent::GetEvent();
  if (pUVar2 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnUpdateChattingTabs,
               this);
  }
  pUVar3 = UDS_PartyEvent::GetEvent();
  if (pUVar3 != (UDS_PartyEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->OnJoinedParty,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->OnLeftParty,this);
  }
  pUVar4 = UDS_DungeonEvent::GetEvent();
  if (pUVar4 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4->OnJoinedRaidParty,this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4->OnLeftRaidParty,this);
  }
  pUVar5 = UDS_InputEvent::GetEvent();
  if (pUVar5 != (UDS_InputEvent *)0x0) {
    FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
    ::Remove<UDS_VM_Chat_Tabs>(&pUVar5->OnInputEvent,this);
  }
  return;
}

// UpdateChattingTabs @ 14bdef3c0

void __thiscall UDS_VM_Chat_Tabs::UpdateChattingTabs(UDS_VM_Chat_Tabs *this)

{
  int *piVar1;
  EDS_ChattingTabType EVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UDS_ChattingManager *pUVar7;
  ulonglong uVar8;
  UObject *pUVar9;
  UDS_UserObjectListItem *pUVar10;
  FDS_ViewModelContext *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  UScriptStruct *pUVar13;
  UDS_ViewModelContextManager *pUVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res10 [8];
  uint local_res18;
  UDS_UserObjectListItem *local_res20;
  UDS_UserObjectListItem *local_d0;
  FDS_EntryBindingEventField *local_c8;
  UDS_UserObjectListItem *local_c0;
  FDS_EntryBindingEventField *local_b8;
  FScriptContainerElement *local_b0;
  FName local_a8;
  int local_a0;
  FName local_98;
  int local_90;
  FName local_88;
  int local_80;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_Simple);
  local_c8 = &this->EntryBindingEventField_Normal;
  FDS_EntryBindingEventField::Reset(local_c8);
  local_b8 = &this->EntryBindingEventField_Extended;
  FDS_EntryBindingEventField::Reset(local_b8);
  pUVar7 = UDS_ChattingManager::GetInst();
  if (pUVar7 != (UDS_ChattingManager *)0x0) {
    EVar2 = (pUVar7->ChatStateData).ChattingTabType;
    pFVar15 = (pUVar7->ChattingTabDatas).AllocatorInstance.Data;
    local_res18 = (pUVar7->ChattingTabDatas).ArrayNum;
    uVar8 = (ulonglong)(int)local_res18;
    local_b0 = pFVar15 + uVar8 * 0x10;
    while( true ) {
      pFVar3 = local_b0;
      if ((pUVar7->ChattingTabDatas).ArrayNum != (int)uVar8) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FDS_ChattingTabData,1>_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res10);
      }
      if (pFVar15 == pFVar3) break;
      pUVar9 = GetTransientPackageAsObject();
      pUVar10 = NewObject<UDS_UserObjectListItem>(pUVar9);
      if (pUVar10 != (UDS_UserObjectListItem *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        pFVar11 = ::operator_new(0x30);
        if (pFVar11 == (FDS_ViewModelContext *)0x0) {
          pFVar11 = (FDS_ViewModelContext *)0x0;
        }
        else {
          pFVar11->_padding_ = 0;
          pFVar11->DerivedStaticStruct = (UStruct *)0x0;
          (pFVar11->ViewModelName).ComparisonIndex = 0;
          (pFVar11->ViewModelName).Number = 0;
          *(undefined8 *)&pFVar11->ViewModelTemplateKey = 0;
          pFVar11[1]._padding_ = 0;
          pFVar11[1].DerivedStaticStruct = (UStruct *)0x0;
          pFVar11->_padding_ = (longlong)&___7FDS_ViewModelContext_ChatTab__6B_;
          *(undefined4 *)((longlong)&pFVar11[1]._padding_ + 4) = 0xffffffff;
        }
        pTVar12 = ::operator_new(0x20);
        if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
          pTVar12 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          pTVar12[1]._padding_ = (longlong)ViewModelContextDeleter;
          pTVar12->SharedReferenceCount = (atomic<int>)0x1;
          pTVar12->WeakReferenceCount = (atomic<int>)0x1;
          pTVar12->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ChatTab__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          *(FDS_ViewModelContext **)&pTVar12[1].SharedReferenceCount = pFVar11;
        }
        if ((pFVar11 == (FDS_ViewModelContext *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pUVar13 = FDS_ViewModelContext_ChatTab::StaticStruct();
        pFVar11->DerivedStaticStruct = (UStruct *)pUVar13;
        pUVar14 = UDS_ViewModelContextManager::GetInst();
        if (pUVar14 != (UDS_ViewModelContextManager *)0x0) {
          if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_78.Object = pFVar11;
          local_78.SharedReferenceCount.ReferenceController = pTVar12;
          UDS_ViewModelContextManager::RegisterContext(pUVar14,&local_78);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_78.SharedReferenceCount.ReferenceController);
        }
        pFVar11->ViewModelTemplateKey = Chat_TabSlot;
        if ((*(longlong *)pFVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined1 *)&pFVar11[1]._padding_ = **(undefined1 **)pFVar15;
        if ((*(longlong *)pFVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(bool *)&pFVar11[1].DerivedStaticStruct = EVar2 == **(EDS_ChattingTabType **)pFVar15;
        if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
          UNLOCK();
        }
        iVar6 = (pUVar10->ViewModelContextArray).ArrayNum;
        piVar1 = &(pUVar10->ViewModelContextArray).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(pUVar10->ViewModelContextArray).AllocatorInstance,piVar1);
        }
        (pUVar10->ViewModelContextArray).ArrayNum = iVar6 + 1;
        pFVar3 = (pUVar10->ViewModelContextArray).AllocatorInstance.Data;
        *(FDS_ViewModelContext **)(pFVar3 + (longlong)iVar6 * 0x10) = pFVar11;
        *(TReferenceControllerBase<1> **)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = pTVar12;
        if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12)
        ;
        local_res20 = pUVar10;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        FDS_EntryBindingEventField::Add
                  (&this->EntryBindingEventField_Simple,
                   (TObjectPtr<UDS_UserObjectListItem>)&local_res20);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12)
        ;
      }
      pUVar9 = GetTransientPackageAsObject();
      pUVar10 = NewObject<UDS_UserObjectListItem>(pUVar9);
      if (pUVar10 != (UDS_UserObjectListItem *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        pFVar11 = ::operator_new(0x30);
        if (pFVar11 == (FDS_ViewModelContext *)0x0) {
          pFVar11 = (FDS_ViewModelContext *)0x0;
        }
        else {
          pFVar11->_padding_ = 0;
          pFVar11->DerivedStaticStruct = (UStruct *)0x0;
          (pFVar11->ViewModelName).ComparisonIndex = 0;
          (pFVar11->ViewModelName).Number = 0;
          *(undefined8 *)&pFVar11->ViewModelTemplateKey = 0;
          pFVar11[1]._padding_ = 0;
          pFVar11[1].DerivedStaticStruct = (UStruct *)0x0;
          pFVar11->_padding_ = (longlong)&___7FDS_ViewModelContext_ChatTab__6B_;
          *(undefined4 *)((longlong)&pFVar11[1]._padding_ + 4) = 0xffffffff;
        }
        pTVar12 = ::operator_new(0x20);
        if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
          pTVar12 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          pTVar12[1]._padding_ = (longlong)ViewModelContextDeleter;
          pTVar12->SharedReferenceCount = (atomic<int>)0x1;
          pTVar12->WeakReferenceCount = (atomic<int>)0x1;
          pTVar12->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ChatTab__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          *(FDS_ViewModelContext **)&pTVar12[1].SharedReferenceCount = pFVar11;
        }
        if ((pFVar11 == (FDS_ViewModelContext *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pUVar13 = FDS_ViewModelContext_ChatTab::StaticStruct();
        pFVar11->DerivedStaticStruct = (UStruct *)pUVar13;
        pUVar14 = UDS_ViewModelContextManager::GetInst();
        if (pUVar14 != (UDS_ViewModelContextManager *)0x0) {
          if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_68.Object = pFVar11;
          local_68.SharedReferenceCount.ReferenceController = pTVar12;
          UDS_ViewModelContextManager::RegisterContext(pUVar14,&local_68);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_68.SharedReferenceCount.ReferenceController);
        }
        pFVar11->ViewModelTemplateKey = Chat_TabSlot;
        if ((*(longlong *)pFVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined1 *)&pFVar11[1]._padding_ = **(undefined1 **)pFVar15;
        if ((*(longlong *)pFVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(bool *)&pFVar11[1].DerivedStaticStruct = EVar2 == **(EDS_ChattingTabType **)pFVar15;
        if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
          UNLOCK();
        }
        iVar6 = (pUVar10->ViewModelContextArray).ArrayNum;
        piVar1 = &(pUVar10->ViewModelContextArray).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(pUVar10->ViewModelContextArray).AllocatorInstance,piVar1);
        }
        (pUVar10->ViewModelContextArray).ArrayNum = iVar6 + 1;
        pFVar3 = (pUVar10->ViewModelContextArray).AllocatorInstance.Data;
        *(FDS_ViewModelContext **)(pFVar3 + (longlong)iVar6 * 0x10) = pFVar11;
        *(TReferenceControllerBase<1> **)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = pTVar12;
        if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12)
        ;
        local_d0 = pUVar10;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        FDS_EntryBindingEventField::Add(local_c8,(TObjectPtr<UDS_UserObjectListItem>)&local_d0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12)
        ;
      }
      pUVar9 = GetTransientPackageAsObject();
      pUVar10 = NewObject<UDS_UserObjectListItem>(pUVar9);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar10 != (UDS_UserObjectListItem *)0x0) goto LAB_14bdef8b2;
      }
      else if (pUVar10 != (UDS_UserObjectListItem *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar10);
LAB_14bdef8b2:
        pFVar11 = ::operator_new(0x30);
        if (pFVar11 == (FDS_ViewModelContext *)0x0) {
          pFVar11 = (FDS_ViewModelContext *)0x0;
        }
        else {
          pFVar11->_padding_ = 0;
          pFVar11->DerivedStaticStruct = (UStruct *)0x0;
          (pFVar11->ViewModelName).ComparisonIndex = 0;
          (pFVar11->ViewModelName).Number = 0;
          *(undefined8 *)&pFVar11->ViewModelTemplateKey = 0;
          pFVar11[1]._padding_ = 0;
          pFVar11[1].DerivedStaticStruct = (UStruct *)0x0;
          *(undefined4 *)((longlong)&pFVar11[1]._padding_ + 4) = 0xffffffff;
          pFVar11->_padding_ = (longlong)&___7FDS_ViewModelContext_ChatTab__6B_;
        }
        pTVar12 = ::operator_new(0x20);
        if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
          pTVar12 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          pTVar12->SharedReferenceCount = (atomic<int>)0x1;
          pTVar12[1]._padding_ = (longlong)ViewModelContextDeleter;
          pTVar12->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ChatTab__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          pTVar12->WeakReferenceCount = (atomic<int>)0x1;
          *(FDS_ViewModelContext **)&pTVar12[1].SharedReferenceCount = pFVar11;
        }
        if ((pFVar11 == (FDS_ViewModelContext *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pUVar13 = FDS_ViewModelContext_ChatTab::StaticStruct();
        pFVar11->DerivedStaticStruct = (UStruct *)pUVar13;
        pUVar14 = UDS_ViewModelContextManager::GetInst();
        if (pUVar14 != (UDS_ViewModelContextManager *)0x0) {
          if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_58.Object = pFVar11;
          local_58.SharedReferenceCount.ReferenceController = pTVar12;
          UDS_ViewModelContextManager::RegisterContext(pUVar14,&local_58);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_58.SharedReferenceCount.ReferenceController);
        }
        pFVar11->ViewModelTemplateKey = Chat_TabSlot;
        if ((*(longlong *)pFVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined1 *)&pFVar11[1]._padding_ = **(undefined1 **)pFVar15;
        if ((*(longlong *)pFVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(bool *)&pFVar11[1].DerivedStaticStruct = EVar2 == **(EDS_ChattingTabType **)pFVar15;
        if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
          UNLOCK();
        }
        iVar6 = (pUVar10->ViewModelContextArray).ArrayNum;
        piVar1 = &(pUVar10->ViewModelContextArray).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(pUVar10->ViewModelContextArray).AllocatorInstance,piVar1);
        }
        (pUVar10->ViewModelContextArray).ArrayNum = iVar6 + 1;
        pFVar3 = (pUVar10->ViewModelContextArray).AllocatorInstance.Data;
        *(FDS_ViewModelContext **)(pFVar3 + (longlong)iVar6 * 0x10) = pFVar11;
        *(TReferenceControllerBase<1> **)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = pTVar12;
        if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12)
        ;
        local_c0 = pUVar10;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        FDS_EntryBindingEventField::Add(local_b8,(TObjectPtr<UDS_UserObjectListItem>)&local_c0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12)
        ;
      }
      pFVar15 = pFVar15 + 0x10;
      uVar8 = (ulonglong)local_res18;
    }
  }
  local_a0 = FFieldNotificationClassDescriptor::EntryBindingEventField_Simple.BitNumber;
  local_a8 = FFieldNotificationClassDescriptor::EntryBindingEventField_Simple.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
  local_90 = FFieldNotificationClassDescriptor::EntryBindingEventField_Normal.BitNumber;
  local_98 = FFieldNotificationClassDescriptor::EntryBindingEventField_Normal.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
  local_80 = FFieldNotificationClassDescriptor::EntryBindingEventField_Extended.BitNumber;
  local_88 = FFieldNotificationClassDescriptor::EntryBindingEventField_Extended.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
  return;
}

