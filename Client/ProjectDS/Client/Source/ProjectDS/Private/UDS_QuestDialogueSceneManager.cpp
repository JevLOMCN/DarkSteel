// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 38

// StaticClass @ 14b5735b0

UClass * __cdecl UDS_QuestDialogueSceneManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_QuestDialogueSceneManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_QuestDialogueSceneManager",
               &Z_Registration_Info_UClass_UDS_QuestDialogueSceneManager.InnerSingleton,
               StaticRegisterNativesUDS_QuestDialogueSceneManager,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_QuestDialogueSceneManager>,
               InternalVTableHelperCtorCaller<UDS_QuestDialogueSceneManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_QuestDialogueSceneManager.InnerSingleton;
}

// UDS_QuestDialogueSceneManager @ 14b5751c0

UDS_QuestDialogueSceneManager * __thiscall
UDS_QuestDialogueSceneManager::UDS_QuestDialogueSceneManager
          (UDS_QuestDialogueSceneManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_QuestDialogueSceneManager__6B_;
  (this->DialogueSceneEventData).EventType = None;
  (this->DialogueSceneEventData).QuestMainDialogueTableID = 0;
  (this->DialogueSceneEventData).CurTime = 0.0;
  (this->DialogueSceneEventData).KeepTime = 0.0;
  (this->DialogueSceneEventData).SequencePlaybackTime = 0.0;
  this->IsTest = false;
  this->QuestID = 0;
  return this;
}

// UDS_QuestDialogueSceneManager @ 14b575200

UDS_QuestDialogueSceneManager * __thiscall
UDS_QuestDialogueSceneManager::UDS_QuestDialogueSceneManager
          (UDS_QuestDialogueSceneManager *this,FObjectInitializer *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_QuestDialogueSceneManager__6B_;
  (this->DialogueSceneEventData).EventType = None;
  (this->DialogueSceneEventData).QuestMainDialogueTableID = 0;
  (this->DialogueSceneEventData).CurTime = 0.0;
  (this->DialogueSceneEventData).KeepTime = 0.0;
  (this->DialogueSceneEventData).SequencePlaybackTime = 0.0;
  this->IsTest = false;
  this->QuestID = 0;
  return this;
}

// ~UDS_QuestDialogueSceneManager @ 14b575d80

void __thiscall
UDS_QuestDialogueSceneManager::~UDS_QuestDialogueSceneManager(UDS_QuestDialogueSceneManager *this)

{
  this->_padding_ = (longlong)&___7UDS_QuestDialogueSceneManager__6B_;
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b576a00

UClass * __cdecl UDS_QuestDialogueSceneManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_QuestDialogueSceneManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_QuestDialogueSceneManager",
               &Z_Registration_Info_UClass_UDS_QuestDialogueSceneManager.InnerSingleton,
               StaticRegisterNativesUDS_QuestDialogueSceneManager,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_QuestDialogueSceneManager>,
               InternalVTableHelperCtorCaller<UDS_QuestDialogueSceneManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_QuestDialogueSceneManager.InnerSingleton;
}

// StaticRegisterNativesUDS_QuestDialogueSceneManager @ 14b576e90

void __cdecl UDS_QuestDialogueSceneManager::StaticRegisterNativesUDS_QuestDialogueSceneManager(void)

{
  return;
}

// Created @ 14bb01e90

void __thiscall UDS_QuestDialogueSceneManager::Created(UDS_QuestDialogueSceneManager *this)

{
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

// Destroyed @ 14bb03030

void __thiscall UDS_QuestDialogueSceneManager::Destroyed(UDS_QuestDialogueSceneManager *this)

{
  return;
}

// GetInst @ 14bb0be80

UDS_QuestDialogueSceneManager * __cdecl UDS_QuestDialogueSceneManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_QuestDialogueSceneManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_QuestDialogueSceneManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_QuestDialogueSceneManager_NoRegister();
  pUVar3 = (UDS_QuestDialogueSceneManager *)
           UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_QuestDialogueSceneManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_QuestDialogueSceneManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_QuestDialogueSceneManager *)0x0;
}

// Init @ 14bb13c60

void __thiscall UDS_QuestDialogueSceneManager::Init(UDS_QuestDialogueSceneManager *this)

{
  return;
}

// OnDialogueSceneEnd @ 14bb1d930

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_QuestDialogueSceneManager::OnDialogueSceneEnd
          (UDS_QuestDialogueSceneManager *this,bool param_1,bool param_2)

{
  UDS_LevelSequenceEvent *pUVar1;
  UDS_InteractionEvent *pUVar2;
  UDS_WindowManager *this_00;
  float local_res10 [2];
  ulonglong local_res20;
  
  pUVar1 = UDS_LevelSequenceEvent::GetEvent();
  if (pUVar1 != (UDS_LevelSequenceEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->LevelSequenceChangeStateDelegate,this);
  }
  pUVar2 = UDS_InteractionEvent::GetEvent();
  if (pUVar2 != (UDS_InteractionEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->InteractionNpcTalkCancelDelegate,this);
  }
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res10[0] = 0.0;
    local_res20 = local_res20 & 0xffffffff00000000;
    UDS_WindowManager::CloseWindow(this_00,QuestMainComplete,(uint *)&local_res20,local_res10);
    local_res10[0] = 0.0;
    local_res20 = local_res20 & 0xffffffff00000000;
    UDS_WindowManager::CloseWindow(this_00,QuestDialogueScene,(uint *)&local_res20,local_res10);
  }
  if (param_1) {
    local_res10[0] = (float)CONCAT31(local_res10[0]._1_3_,1);
    UDS_LevelSequencePlayAbility::Deactivate((EDS_AbilityDeactivateType *)local_res10);
    return;
  }
  if (param_2) {
    local_res10[0] = (float)CONCAT31(local_res10[0]._1_3_,1);
    local_res20 = FDS_EntityBase::GetMainPlayerEntityID(true);
    UDS_InteractionAbility_NPC::Deactivate(&local_res20,(EDS_AbilityDeactivateType *)local_res10);
  }
  return;
}

// OnHideSkipButton @ 14bb1e4d0

void __thiscall UDS_QuestDialogueSceneManager::OnHideSkipButton(UDS_QuestDialogueSceneManager *this)

{
  FDS_QuestDialogueSceneEventData local_28 [2];
  
  local_28[0].QuestMainDialogueTableID = 0;
  local_28[0].CurTime = 0.0;
  local_28[0].KeepTime = 0.0;
  local_28[0].SequencePlaybackTime = 0.0;
  local_28[0].EventType = ShowSkipButton;
  SetQuestDialogueSceneEventData(this,local_28);
  return;
}

// OnHideUI @ 14bb1e550

void __thiscall UDS_QuestDialogueSceneManager::OnHideUI(UDS_QuestDialogueSceneManager *this)

{
  FDS_QuestDialogueSceneEventData local_28 [2];
  
  local_28[0].QuestMainDialogueTableID = 0;
  local_28[0].CurTime = 0.0;
  local_28[0].KeepTime = 0.0;
  local_28[0].SequencePlaybackTime = 0.0;
  local_28[0].EventType = HideUI;
  SetQuestDialogueSceneEventData(this,local_28);
  return;
}

// OnNextTalkDialogue @ 14bb1ef20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_QuestDialogueSceneManager::OnNextTalkDialogue(UDS_QuestDialogueSceneManager *this)

{
  float fVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_LevelSequenceEvent *pUVar4;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if ((this->DialogueSceneEventData).EventType == TalkNext) {
    fVar1 = (this->DialogueSceneEventData).SequencePlaybackTime;
    pUVar4 = UDS_LevelSequenceEvent::GetEvent();
    if (pUVar4 != (UDS_LevelSequenceEvent *)0x0) {
      bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar4->LevelSequenceJumpDelegate);
      if (bVar2) {
        TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar4->LevelSequenceJumpDelegate).Delegate,fVar1);
      }
    }
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_QuestDialogueSceneManager::OnNextTalkDialogue",0x31,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_148.Ptr,0x182,
                 L"Next Talk Dialogue Failed. Current CommandType Not TalkNext");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  return;
}

// OnNpcTalkCancel @ 14bb1f060

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_QuestDialogueSceneManager::OnNpcTalkCancel(UDS_QuestDialogueSceneManager *this)

{
  UDS_LevelSequenceEvent *pUVar1;
  UDS_InteractionEvent *pUVar2;
  UDS_WindowManager *this_00;
  float local_res10 [2];
  uint local_res18 [4];
  
  pUVar1 = UDS_LevelSequenceEvent::GetEvent();
  if (pUVar1 != (UDS_LevelSequenceEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->LevelSequenceChangeStateDelegate,this);
  }
  pUVar2 = UDS_InteractionEvent::GetEvent();
  if (pUVar2 != (UDS_InteractionEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->InteractionNpcTalkCancelDelegate,this);
  }
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res10[0] = 0.0;
    local_res18[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,QuestMainComplete,local_res18,local_res10);
    local_res10[0] = 0.0;
    local_res18[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,QuestDialogueScene,local_res18,local_res10);
  }
  local_res10[0] = (float)CONCAT31(local_res10[0]._1_3_,1);
  UDS_LevelSequencePlayAbility::Deactivate((EDS_AbilityDeactivateType *)local_res10);
  return;
}

// OnOpenDialogueSceneUI @ 14bb1f380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_QuestDialogueSceneManager::OnOpenDialogueSceneUI
          (UDS_QuestDialogueSceneManager *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_1a8 [32];
  FWeakObjectPtr local_178 [2];
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  UDS_UserWidget *local_158 [2];
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (param_1 == (UDS_UserWidget *)0x0) {
    OnDialogueSceneEnd(this,false,true);
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_QuestDialogueSceneManager::OnOpenDialogueSceneUI",0x34,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x241,L"OpenDialogueSceneUI Failed");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    MakeContext<FDS_ViewModelContext>(&local_168);
    if (local_168.Object != (FDS_ViewModelContext *)0x0) {
      if ((local_168.Object == (FDS_ViewModelContext *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (local_168.Object)->ViewModelTemplateKey = QuestDialogueScene;
      local_148.Object = local_168.Object;
      local_148.SharedReferenceCount.ReferenceController =
           local_168.SharedReferenceCount.ReferenceController;
      if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_178[0].ObjectIndex = 0;
      local_178[0].ObjectSerialNumber = 0;
      local_158[0] = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(local_178,(FObjectPtr)local_158);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_178[0],&local_148,false);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_168.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnOpenQuestMainCompleteUI @ 14bb202e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_QuestDialogueSceneManager::OnOpenQuestMainCompleteUI
          (UDS_QuestDialogueSceneManager *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_1a8 [32];
  FWeakObjectPtr local_178 [2];
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  UDS_UserWidget *local_158 [2];
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (param_1 == (UDS_UserWidget *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_QuestDialogueSceneManager::OnOpenQuestMainCompleteUI",0x38,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x25d,L"OpenDialogueSceneUI Failed");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    MakeContext<FDS_ViewModelContext>(&local_168);
    if (local_168.Object != (FDS_ViewModelContext *)0x0) {
      if ((local_168.Object == (FDS_ViewModelContext *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (local_168.Object)->ViewModelTemplateKey = QuestMainCompletePopup;
      local_148.Object = local_168.Object;
      local_148.SharedReferenceCount.ReferenceController =
           local_168.SharedReferenceCount.ReferenceController;
      if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_178[0].ObjectIndex = 0;
      local_178[0].ObjectSerialNumber = 0;
      local_158[0] = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(local_178,(FObjectPtr)local_158);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_178[0],&local_148,false);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_168.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnSequencePause @ 14bb22c50

void __thiscall UDS_QuestDialogueSceneManager::OnSequencePause(UDS_QuestDialogueSceneManager *this)

{
  bool bVar1;
  UDS_LevelSequenceEvent *pUVar2;
  
  pUVar2 = UDS_LevelSequenceEvent::GetEvent();
  if (pUVar2 != (UDS_LevelSequenceEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->LevelSequencePauseDelegate);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->LevelSequencePauseDelegate).Delegate);
      return;
    }
  }
  return;
}

// OnSequencePlay @ 14bb22ca0

void __thiscall UDS_QuestDialogueSceneManager::OnSequencePlay(UDS_QuestDialogueSceneManager *this)

{
  bool bVar1;
  UDS_LevelSequenceEvent *pUVar2;
  
  pUVar2 = UDS_LevelSequenceEvent::GetEvent();
  if (pUVar2 != (UDS_LevelSequenceEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->LevelSequencePlayDelegate);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->LevelSequencePlayDelegate).Delegate);
      return;
    }
  }
  return;
}

// OnSequencePlayStated @ 14bb22cf0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_QuestDialogueSceneManager::OnSequencePlayStated
          (UDS_QuestDialogueSceneManager *this,EDS_LevelSequenceState param_1)

{
  bool bVar1;
  UDS_QuestManager *pUVar2;
  FDS_QuestBaseTableRow *this_00;
  UDS_WindowManager *this_01;
  float local_res10 [2];
  uint local_res18 [4];
  
  if (param_1 != Failed) {
    if (param_1 != SequenceFinished) {
      return;
    }
    if (this->IsTest != true) {
      pUVar2 = UDS_QuestManager::GetInst();
      if (pUVar2 != (UDS_QuestManager *)0x0) {
        this_00 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
        bVar1 = FDS_QuestBaseTableRow::IsValid(this_00);
        if ((bVar1) && (0 < this_00->ID_QuestRewardId)) {
          this_01 = UDS_WindowManager::GetInst();
          if (this_01 != (UDS_WindowManager *)0x0) {
            local_res10[0] = 0.0;
            local_res18[0] = 0;
            UDS_WindowManager::CloseWindow(this_01,QuestDialogueScene,local_res18,local_res10);
          }
          OpenQuestMainCompleteUI(this);
          return;
        }
      }
      OnDialogueSceneEnd(this,false,0 < this->QuestID);
      return;
    }
  }
  OnDialogueSceneEnd(this,false,true);
  return;
}

// OnShowSkipButton @ 14bb22dc0

void __thiscall UDS_QuestDialogueSceneManager::OnShowSkipButton(UDS_QuestDialogueSceneManager *this)

{
  FDS_QuestDialogueSceneEventData local_28 [2];
  
  local_28[0].QuestMainDialogueTableID = 0;
  local_28[0].CurTime = 0.0;
  local_28[0].KeepTime = 0.0;
  local_28[0].SequencePlaybackTime = 0.0;
  local_28[0].EventType = ShowSkipButton;
  SetQuestDialogueSceneEventData(this,local_28);
  return;
}

// OnShowUI @ 14bb22e40

void __thiscall UDS_QuestDialogueSceneManager::OnShowUI(UDS_QuestDialogueSceneManager *this)

{
  FDS_QuestDialogueSceneEventData local_28 [2];
  
  local_28[0].QuestMainDialogueTableID = 0;
  local_28[0].CurTime = 0.0;
  local_28[0].KeepTime = 0.0;
  local_28[0].SequencePlaybackTime = 0.0;
  local_28[0].EventType = ShowUI;
  SetQuestDialogueSceneEventData(this,local_28);
  return;
}

// OnSkip @ 14bb22ec0

void __thiscall UDS_QuestDialogueSceneManager::OnSkip(UDS_QuestDialogueSceneManager *this)

{
  bool bVar1;
  UDS_LevelSequenceEvent *pUVar2;
  
  pUVar2 = UDS_LevelSequenceEvent::GetEvent();
  if (pUVar2 != (UDS_LevelSequenceEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->LevelSequenceSkipDelegate);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->LevelSequenceSkipDelegate).Delegate);
      return;
    }
  }
  return;
}

// OnTalkDialogue @ 14bb23290

void __thiscall
UDS_QuestDialogueSceneManager::OnTalkDialogue
          (UDS_QuestDialogueSceneManager *this,int param_1,float param_2,float param_3)

{
  EDS_DialogueSceneType EVar1;
  bool bVar2;
  FDS_QuestMainDialogueTableRow *this_00;
  FDS_QuestDialogueSceneEventData local_48 [3];
  
  if (0 < param_1) {
    this_00 = FDS_QuestMainDialogueTableRow::GetRef((longlong)param_1,true);
    bVar2 = FDS_QuestMainDialogueTableRow::IsValid(this_00);
    if (bVar2) {
      local_48[0].EventType = None;
      EVar1 = this_00->DialogueSceneType;
      if (EVar1 == Normal) {
        local_48[0].EventType = TalkNormal;
      }
      else if (EVar1 == Next) {
        local_48[0].EventType = TalkNext;
      }
      else if (EVar1 == Select) {
        local_48[0].EventType = TalkSelect;
      }
      local_48[0].SequencePlaybackTime = param_2 + param_3;
      (this->DialogueSceneEventData).EventType = local_48[0].EventType;
      (this->DialogueSceneEventData).QuestMainDialogueTableID = param_1;
      (this->DialogueSceneEventData).CurTime = param_3;
      (this->DialogueSceneEventData).KeepTime = param_2;
      (this->DialogueSceneEventData).SequencePlaybackTime = local_48[0].SequencePlaybackTime;
      local_48[0].QuestMainDialogueTableID = param_1;
      local_48[0].CurTime = param_3;
      local_48[0].KeepTime = param_2;
      SetQuestDialogueSceneEventData(this,local_48);
    }
  }
  return;
}

// OnTalkSelect @ 14bb234e0

void __thiscall UDS_QuestDialogueSceneManager::OnTalkSelect(UDS_QuestDialogueSceneManager *this)

{
  bool bVar1;
  UDS_LevelSequenceEvent *pUVar2;
  
  pUVar2 = UDS_LevelSequenceEvent::GetEvent();
  if (pUVar2 != (UDS_LevelSequenceEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->LevelSequencePlayDelegate);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->LevelSequencePlayDelegate).Delegate);
      return;
    }
  }
  return;
}

// OpenDialogueScene @ 14bb255f0

bool __thiscall
UDS_QuestDialogueSceneManager::OpenDialogueScene(UDS_QuestDialogueSceneManager *this,int param_1)

{
  bool bVar1;
  FDS_QuestMainTableRow *this_00;
  
  (this->DialogueSceneEventData).EventType = None;
  (this->DialogueSceneEventData).QuestMainDialogueTableID = 0;
  (this->DialogueSceneEventData).CurTime = 0.0;
  (this->DialogueSceneEventData).KeepTime = 0.0;
  (this->DialogueSceneEventData).SequencePlaybackTime = 0.0;
  this->QuestID = 0;
  this->IsTest = false;
  this_00 = FDS_QuestMainTableRow::GetRef((longlong)param_1,true);
  bVar1 = FDS_QuestMainTableRow::IsValid(this_00);
  if (bVar1) {
    this->QuestID = param_1;
    if (this_00->ID_ResourceSequence < 1) {
      OpenQuestMainCompleteUI(this);
      return true;
    }
    bVar1 = OpenLevelSequence(this,this_00->ID_ResourceSequence);
    if (bVar1) {
      OpenDialogueSceneUI(this);
      return true;
    }
    OnDialogueSceneEnd(this,false,true);
  }
  return false;
}

// OpenDialogueSceneByLevelSequence @ 14bb256a0

bool __thiscall
UDS_QuestDialogueSceneManager::OpenDialogueSceneByLevelSequence
          (UDS_QuestDialogueSceneManager *this,int param_1)

{
  bool bVar1;
  
  (this->DialogueSceneEventData).EventType = None;
  (this->DialogueSceneEventData).QuestMainDialogueTableID = 0;
  (this->DialogueSceneEventData).CurTime = 0.0;
  (this->DialogueSceneEventData).KeepTime = 0.0;
  (this->DialogueSceneEventData).SequencePlaybackTime = 0.0;
  this->IsTest = false;
  this->QuestID = 0;
  if (0 < param_1) {
    bVar1 = OpenLevelSequence(this,param_1);
    if (bVar1) {
      OpenDialogueSceneUI(this);
      return true;
    }
    OnDialogueSceneEnd(this,false,true);
  }
  return false;
}

// OpenDialogueSceneUI @ 14bb25700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_QuestDialogueSceneManager::OpenDialogueSceneUI(UDS_QuestDialogueSceneManager *this)

{
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar4;
  undefined1 auStackY_1b8 [32];
  undefined1 local_188 [8];
  FDelegateAllocation local_180;
  FDestructionSentinel local_170;
  FDelegateAllocation *local_158;
  UDS_QuestDialogueSceneManager *local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_QuestDialogueSceneManager::OpenDialogueSceneUI",0x32,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_148.Ptr,0x22c,L"Windowmanager not instance");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    local_188 = (undefined1  [8])0x0;
    local_180.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_180.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
               (FWriteAccessScope *)&local_170);
    local_158 = &local_180;
    puVar2 = UE::Core::Private::DelegateAllocate(0x28,&local_180);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_QuestDialogueSceneManager____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_QuestDialogueSceneManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_150 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_QuestDialogueSceneManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_150);
      puVar2[4] = OnOpenDialogueSceneUI;
    }
    if (local_170.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
    }
    pTVar4 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &local_170,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_188);
    UDS_WindowManager::OpenWindow(this_00,QuestDialogueScene,pTVar4);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
               (FWriteAccessScope *)&local_170);
    if ((local_180.DelegateSize != 0) &&
       (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_180.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_180,0,0,0x10);
      local_180.DelegateSize = 0;
    }
    if (local_170.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
    }
    if (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_180.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_188);
  }
  return;
}

// OpenDialogueScene_Test @ 14bb25950

void __thiscall
UDS_QuestDialogueSceneManager::OpenDialogueScene_Test
          (UDS_QuestDialogueSceneManager *this,int param_1)

{
  bool bVar1;
  FDS_QuestMainTableRow *this_00;
  
  (this->DialogueSceneEventData).EventType = None;
  (this->DialogueSceneEventData).QuestMainDialogueTableID = 0;
  (this->DialogueSceneEventData).CurTime = 0.0;
  (this->DialogueSceneEventData).KeepTime = 0.0;
  (this->DialogueSceneEventData).SequencePlaybackTime = 0.0;
  this->QuestID = 0;
  this->IsTest = false;
  this_00 = FDS_QuestMainTableRow::GetRef((longlong)param_1,true);
  bVar1 = FDS_QuestMainTableRow::IsValid(this_00);
  if (bVar1) {
    this->QuestID = param_1;
    if (0 < this_00->ID_ResourceSequence) {
      bVar1 = OpenLevelSequence(this,this_00->ID_ResourceSequence);
      if (bVar1) {
        OpenDialogueSceneUI(this);
        return;
      }
      OnDialogueSceneEnd(this,false,true);
      return;
    }
    OpenQuestMainCompleteUI(this);
  }
  return;
}

// OpenLevelSequence @ 14bb269f0

bool __thiscall
UDS_QuestDialogueSceneManager::OpenLevelSequence(UDS_QuestDialogueSceneManager *this,int param_1)

{
  bool bVar1;
  UDS_LevelSequenceEvent *pUVar2;
  UDS_InteractionEvent *pUVar3;
  
  pUVar2 = UDS_LevelSequenceEvent::GetEvent();
  if (pUVar2 != (UDS_LevelSequenceEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->LevelSequenceChangeStateDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_LevelSequenceState),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_QuestDialogueSceneManager>
              (&pUVar2->LevelSequenceChangeStateDelegate,
               (UDS_QuestDialogueSceneManager *)&stack0x00000018,(pmf_24552d18)this);
  }
  pUVar3 = UDS_InteractionEvent::GetEvent();
  if (pUVar3 != (UDS_InteractionEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->InteractionNpcTalkCancelDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_QuestDialogueSceneManager>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar3->InteractionNpcTalkCancelDelegate,
               (UDS_QuestDialogueSceneManager *)&stack0x00000018,(pmf_6d5ad492)this);
  }
  bVar1 = UDS_LevelSequencePlayAbility::TryActivate(param_1,true);
  return bVar1;
}

// OpenQuestMainCompleteUI @ 14bb26c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_QuestDialogueSceneManager::OpenQuestMainCompleteUI(UDS_QuestDialogueSceneManager *this)

{
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar4;
  undefined1 auStackY_1b8 [32];
  undefined1 local_188 [8];
  FDelegateAllocation local_180;
  FDestructionSentinel local_170;
  FDelegateAllocation *local_158;
  UDS_QuestDialogueSceneManager *local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_QuestDialogueSceneManager::OpenQuestMainCompleteUI",0x36,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_148.Ptr,0x24a,L"Windowmanager not instance");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  local_188 = (undefined1  [8])0x0;
  local_180.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_180.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
             (FWriteAccessScope *)&local_170);
  local_158 = &local_180;
  puVar2 = UE::Core::Private::DelegateAllocate(0x28,&local_180);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_QuestDialogueSceneManager____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_QuestDialogueSceneManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar2[3] = 0;
    local_150 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_QuestDialogueSceneManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_150);
    puVar2[4] = OnOpenQuestMainCompleteUI;
  }
  if (local_170.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
  }
  pTVar4 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
           TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                     ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                      &local_170,
                      (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                      local_188);
  UDS_WindowManager::OpenWindow(this_00,QuestMainComplete,pTVar4);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_188,
             (FWriteAccessScope *)&local_170);
  if ((local_180.DelegateSize != 0) &&
     (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_180.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_180,0,0,0x10);
    local_180.DelegateSize = 0;
  }
  if (local_170.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
  }
  if (local_180.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_180.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_188);
  return;
}

// Reset @ 14bb332b0

void __thiscall UDS_QuestDialogueSceneManager::Reset(UDS_QuestDialogueSceneManager *this)

{
  (this->DialogueSceneEventData).EventType = None;
  (this->DialogueSceneEventData).QuestMainDialogueTableID = 0;
  (this->DialogueSceneEventData).CurTime = 0.0;
  (this->DialogueSceneEventData).KeepTime = 0.0;
  (this->DialogueSceneEventData).SequencePlaybackTime = 0.0;
  this->IsTest = false;
  this->QuestID = 0;
  return;
}

// ResetData @ 14bb33390

void __thiscall UDS_QuestDialogueSceneManager::ResetData(UDS_QuestDialogueSceneManager *this)

{
  (this->DialogueSceneEventData).EventType = None;
  (this->DialogueSceneEventData).QuestMainDialogueTableID = 0;
  (this->DialogueSceneEventData).CurTime = 0.0;
  (this->DialogueSceneEventData).KeepTime = 0.0;
  (this->DialogueSceneEventData).SequencePlaybackTime = 0.0;
  this->IsTest = false;
  this->QuestID = 0;
  return;
}

// SequenceJump @ 14bb35ba0

void __thiscall
UDS_QuestDialogueSceneManager::SequenceJump(UDS_QuestDialogueSceneManager *this,float param_1)

{
  bool bVar1;
  UDS_LevelSequenceEvent *pUVar2;
  
  pUVar2 = UDS_LevelSequenceEvent::GetEvent();
  if (pUVar2 != (UDS_LevelSequenceEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->LevelSequenceJumpDelegate);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->LevelSequenceJumpDelegate).Delegate,param_1);
    }
  }
  return;
}

// SequencePause @ 14bb35bf0

void __thiscall UDS_QuestDialogueSceneManager::SequencePause(UDS_QuestDialogueSceneManager *this)

{
  bool bVar1;
  UDS_LevelSequenceEvent *pUVar2;
  
  pUVar2 = UDS_LevelSequenceEvent::GetEvent();
  if (pUVar2 != (UDS_LevelSequenceEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->LevelSequencePauseDelegate);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->LevelSequencePauseDelegate).Delegate);
      return;
    }
  }
  return;
}

// SequencePlay @ 14bb35c40

void __thiscall UDS_QuestDialogueSceneManager::SequencePlay(UDS_QuestDialogueSceneManager *this)

{
  bool bVar1;
  UDS_LevelSequenceEvent *pUVar2;
  
  pUVar2 = UDS_LevelSequenceEvent::GetEvent();
  if (pUVar2 != (UDS_LevelSequenceEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->LevelSequencePlayDelegate);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->LevelSequencePlayDelegate).Delegate);
      return;
    }
  }
  return;
}

// SequenceSkip @ 14bb35c90

void __thiscall UDS_QuestDialogueSceneManager::SequenceSkip(UDS_QuestDialogueSceneManager *this)

{
  bool bVar1;
  UDS_LevelSequenceEvent *pUVar2;
  
  pUVar2 = UDS_LevelSequenceEvent::GetEvent();
  if (pUVar2 != (UDS_LevelSequenceEvent *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->LevelSequenceSkipDelegate);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->LevelSequenceSkipDelegate).Delegate);
      return;
    }
  }
  return;
}

// SetQuestDialogueSceneEventData @ 14bb37510

void __thiscall
UDS_QuestDialogueSceneManager::SetQuestDialogueSceneEventData
          (UDS_QuestDialogueSceneManager *this,FDS_QuestDialogueSceneEventData *param_1)

{
  undefined1 *puVar1;
  FDS_EventDelegate<FDS_QuestDialogueSceneEventData_const_&> *this_00;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  UDS_QuestEvent *pUVar9;
  uint uVar10;
  longlong lVar11;
  FDestructionSentinel local_38;
  
  pUVar9 = UDS_QuestEvent::GetEvent();
  if (pUVar9 != (UDS_QuestEvent *)0x0) {
    this_00 = &pUVar9->OnQuestDialogueSceneDataDelegate;
    bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
    if (bVar5) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_38);
      puVar1 = &(pUVar9->OnQuestDialogueSceneDataDelegate).Delegate.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar5 = false;
      uVar10 = *(int *)&(pUVar9->OnQuestDialogueSceneDataDelegate).Delegate.field_0x10 - 1;
      if (-1 < (int)uVar10) {
        lVar11 = (longlong)(int)uVar10 << 4;
        bVar5 = false;
        do {
          uVar8 = 0;
          if ((int)uVar10 < *(int *)&(pUVar9->OnQuestDialogueSceneDataDelegate).Delegate.field_0x10)
          {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar2 = *(longlong *)&(pUVar9->OnQuestDialogueSceneDataDelegate).Delegate.field_0x8;
          if (((*(int *)(lVar2 + 8 + lVar11) == 0) ||
              (plVar3 = *(longlong **)(lVar2 + lVar11), plVar3 == (longlong *)0x0)) ||
             (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
            bVar5 = true;
          }
          lVar11 = lVar11 + -0x10;
          uVar10 = uVar10 - 1;
        } while (-1 < (int)uVar10);
      }
      puVar1 = &(pUVar9->OnQuestDialogueSceneDataDelegate).Delegate.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar5) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
    }
  }
  return;
}

