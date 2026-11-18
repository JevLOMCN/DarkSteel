// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b572d90

UClass * __cdecl UDS_QuestEvent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_QuestEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_QuestEvent",
               &Z_Registration_Info_UClass_UDS_QuestEvent.InnerSingleton,
               StaticRegisterNativesUDS_QuestEvent,0x1c8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_QuestEvent>,InternalVTableHelperCtorCaller<UDS_QuestEvent>,
               local_res8,UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_QuestEvent.InnerSingleton;
}

// UDS_QuestEvent @ 14b5752a0

UDS_QuestEvent * __thiscall
UDS_QuestEvent::UDS_QuestEvent(UDS_QuestEvent *this,FVTableHelper *param_1)

{
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_QuestEvent__6B_;
  *(undefined8 *)&(this->OnUpdateQuestDataDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnUpdateQuestDataDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdateQuestDataDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnAddQuestDataDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnAddQuestDataDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnAddQuestDataDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnRemoveQuestDataDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnRemoveQuestDataDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnRemoveQuestDataDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnCancelQuestDataDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnCancelQuestDataDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnCancelQuestDataDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnCompleteQuestDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnCompleteQuestDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnCompleteQuestDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChanedQuestDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnChanedQuestDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChanedQuestDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedTraceQuestDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnChangedTraceQuestDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedTraceQuestDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnQuestRepeatResetDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnQuestRepeatResetDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnQuestRepeatResetDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->NewAbleCompleteQuestSymbolDelegate).Delegate = 0;
  *(undefined8 *)&(this->NewAbleCompleteQuestSymbolDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->NewAbleCompleteQuestSymbolDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectedQuestDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedQuestDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedQuestDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectedTalkSlotDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedTalkSlotDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedTalkSlotDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnQuestDialogueSceneDataDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnQuestDialogueSceneDataDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnQuestDialogueSceneDataDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectedChapterIndexDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedChapterIndexDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedChapterIndexDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnUpdateQuestDataDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnAddQuestDataDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnRemoveQuestDataDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnCancelQuestDataDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnCompleteQuestDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChanedQuestDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedTraceQuestDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnQuestRepeatResetDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->NewAbleCompleteQuestSymbolDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectedQuestDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectedTalkSlotDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnQuestDialogueSceneDataDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectedChapterIndexDelegate).Delegate.field_0x18 = 2;
  return this;
}

// UDS_QuestEvent @ 14b575450

UDS_QuestEvent * __thiscall
UDS_QuestEvent::UDS_QuestEvent(UDS_QuestEvent *this,FObjectInitializer *param_1)

{
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_QuestEvent__6B_;
  *(undefined8 *)&(this->OnUpdateQuestDataDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnUpdateQuestDataDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdateQuestDataDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnAddQuestDataDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnAddQuestDataDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnAddQuestDataDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnRemoveQuestDataDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnRemoveQuestDataDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnRemoveQuestDataDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnCancelQuestDataDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnCancelQuestDataDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnCancelQuestDataDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnCompleteQuestDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnCompleteQuestDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnCompleteQuestDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChanedQuestDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnChanedQuestDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChanedQuestDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedTraceQuestDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnChangedTraceQuestDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedTraceQuestDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnQuestRepeatResetDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnQuestRepeatResetDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnQuestRepeatResetDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->NewAbleCompleteQuestSymbolDelegate).Delegate = 0;
  *(undefined8 *)&(this->NewAbleCompleteQuestSymbolDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->NewAbleCompleteQuestSymbolDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectedQuestDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedQuestDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedQuestDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectedTalkSlotDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedTalkSlotDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedTalkSlotDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnQuestDialogueSceneDataDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnQuestDialogueSceneDataDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnQuestDialogueSceneDataDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectedChapterIndexDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedChapterIndexDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedChapterIndexDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnUpdateQuestDataDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnAddQuestDataDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnRemoveQuestDataDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnCancelQuestDataDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnCompleteQuestDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChanedQuestDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedTraceQuestDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnQuestRepeatResetDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->NewAbleCompleteQuestSymbolDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectedQuestDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectedTalkSlotDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnQuestDialogueSceneDataDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectedChapterIndexDelegate).Delegate.field_0x18 = 2;
  return this;
}

// ~UDS_QuestEvent @ 14b575dc0

void __thiscall UDS_QuestEvent::~UDS_QuestEvent(UDS_QuestEvent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_QuestEvent__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSelectedChapterIndexDelegate).Delegate.field_0x8,
             *(int *)&(this->OnSelectedChapterIndexDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnSelectedChapterIndexDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectedChapterIndexDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnQuestDialogueSceneDataDelegate).Delegate.field_0x8,
             *(int *)&(this->OnQuestDialogueSceneDataDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnQuestDialogueSceneDataDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnQuestDialogueSceneDataDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSelectedTalkSlotDelegate).Delegate.field_0x8,
             *(int *)&(this->OnSelectedTalkSlotDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnSelectedTalkSlotDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectedTalkSlotDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSelectedQuestDelegate).Delegate.field_0x8,
             *(int *)&(this->OnSelectedQuestDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnSelectedQuestDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectedQuestDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->NewAbleCompleteQuestSymbolDelegate).Delegate.field_0x8,
             *(int *)&(this->NewAbleCompleteQuestSymbolDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->NewAbleCompleteQuestSymbolDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->NewAbleCompleteQuestSymbolDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnQuestRepeatResetDelegate).Delegate.field_0x8,
             *(int *)&(this->OnQuestRepeatResetDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnQuestRepeatResetDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnQuestRepeatResetDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedTraceQuestDelegate).Delegate.field_0x8,
             *(int *)&(this->OnChangedTraceQuestDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangedTraceQuestDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedTraceQuestDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChanedQuestDelegate).Delegate.field_0x8,
             *(int *)&(this->OnChanedQuestDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChanedQuestDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChanedQuestDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnCompleteQuestDelegate).Delegate.field_0x8,
             *(int *)&(this->OnCompleteQuestDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnCompleteQuestDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCompleteQuestDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnCancelQuestDataDelegate).Delegate.field_0x8,
             *(int *)&(this->OnCancelQuestDataDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnCancelQuestDataDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCancelQuestDataDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnRemoveQuestDataDelegate).Delegate.field_0x8,
             *(int *)&(this->OnRemoveQuestDataDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnRemoveQuestDataDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRemoveQuestDataDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnAddQuestDataDelegate).Delegate.field_0x8,
             *(int *)&(this->OnAddQuestDataDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnAddQuestDataDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAddQuestDataDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnUpdateQuestDataDelegate).Delegate.field_0x8,
             *(int *)&(this->OnUpdateQuestDataDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnUpdateQuestDataDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUpdateQuestDataDelegate);
  UDS_EventBase::~UDS_EventBase((UDS_EventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b576b80

UClass * __cdecl UDS_QuestEvent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_QuestEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_QuestEvent",
               &Z_Registration_Info_UClass_UDS_QuestEvent.InnerSingleton,
               StaticRegisterNativesUDS_QuestEvent,0x1c8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_QuestEvent>,InternalVTableHelperCtorCaller<UDS_QuestEvent>,
               local_res8,UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_QuestEvent.InnerSingleton;
}

// StaticRegisterNativesUDS_QuestEvent @ 14b576ee0

void __cdecl UDS_QuestEvent::StaticRegisterNativesUDS_QuestEvent(void)

{
  return;
}

// GetEvent @ 14baaa2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_QuestEvent * __cdecl UDS_QuestEvent::GetEvent(void)

{
  UDS_EventManager *this;
  UDS_LogManager *pUVar1;
  UDS_QuestEvent *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_EventManager::GetInst();
  if (this != (UDS_EventManager *)0x0) {
    if ((char)this->_padding_ != '\x01') {
      pUVar2 = UDS_EventManager::GetEventInternal<UDS_QuestEvent>(this);
      return pUVar2;
    }
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEvent",0x1a,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_138.Ptr,0x31,
                 L"Cannot access event during UDS_EventManager destruction.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return (UDS_QuestEvent *)0x0;
}

