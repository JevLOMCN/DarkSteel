// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b53c6f0

UClass * __cdecl UDS_NpcFunctionEvent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcFunctionEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcFunctionEvent",
               &Z_Registration_Info_UClass_UDS_NpcFunctionEvent.InnerSingleton,
               StaticRegisterNativesUDS_NpcFunctionEvent,0xf8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NpcFunctionEvent>,
               InternalVTableHelperCtorCaller<UDS_NpcFunctionEvent>,local_res8,
               UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcFunctionEvent.InnerSingleton;
}

// UDS_NpcFunctionEvent @ 14b540680

UDS_NpcFunctionEvent * __thiscall
UDS_NpcFunctionEvent::UDS_NpcFunctionEvent(UDS_NpcFunctionEvent *this,FVTableHelper *param_1)

{
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NpcFunctionEvent__6B_;
  *(undefined8 *)&(this->OnQueryNpcFunction).Delegate = 0;
  *(undefined8 *)&(this->OnQueryNpcFunction).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnQueryNpcFunction).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedNpcFunctionDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnChangedNpcFunctionDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedNpcFunctionDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectedQuestDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedQuestDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedQuestDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectedNormalTalkDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedNormalTalkDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedNormalTalkDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnTalkDialogueLastDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnTalkDialogueLastDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnTalkDialogueLastDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnBackDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnBackDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnBackDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->QueryNpcRelationGradeupGaugeData).Delegate = 0;
  *(undefined8 *)&(this->QueryNpcRelationGradeupGaugeData).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->QueryNpcRelationGradeupGaugeData).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedNpcFunctionDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectedQuestDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectedNormalTalkDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnTalkDialogueLastDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnBackDelegate).Delegate.field_0x18 = 2;
  return this;
}

// UDS_NpcFunctionEvent @ 14b540750

UDS_NpcFunctionEvent * __thiscall
UDS_NpcFunctionEvent::UDS_NpcFunctionEvent(UDS_NpcFunctionEvent *this,FObjectInitializer *param_1)

{
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NpcFunctionEvent__6B_;
  *(undefined8 *)&(this->OnQueryNpcFunction).Delegate = 0;
  *(undefined8 *)&(this->OnQueryNpcFunction).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnQueryNpcFunction).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedNpcFunctionDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnChangedNpcFunctionDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedNpcFunctionDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectedQuestDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedQuestDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedQuestDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectedNormalTalkDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedNormalTalkDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedNormalTalkDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnTalkDialogueLastDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnTalkDialogueLastDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnTalkDialogueLastDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnBackDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnBackDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnBackDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->QueryNpcRelationGradeupGaugeData).Delegate = 0;
  *(undefined8 *)&(this->QueryNpcRelationGradeupGaugeData).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->QueryNpcRelationGradeupGaugeData).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedNpcFunctionDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectedQuestDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnSelectedNormalTalkDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnTalkDialogueLastDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnBackDelegate).Delegate.field_0x18 = 2;
  return this;
}

// ~UDS_NpcFunctionEvent @ 14b541810

void __thiscall UDS_NpcFunctionEvent::~UDS_NpcFunctionEvent(UDS_NpcFunctionEvent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_NpcFunctionEvent__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->QueryNpcRelationGradeupGaugeData);
  pvVar1 = *(void **)&(this->QueryNpcRelationGradeupGaugeData).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->QueryNpcRelationGradeupGaugeData);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnBackDelegate).Delegate.field_0x8,
             *(int *)&(this->OnBackDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnBackDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBackDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnTalkDialogueLastDelegate).Delegate.field_0x8,
             *(int *)&(this->OnTalkDialogueLastDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnTalkDialogueLastDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTalkDialogueLastDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSelectedNormalTalkDelegate).Delegate.field_0x8,
             *(int *)&(this->OnSelectedNormalTalkDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnSelectedNormalTalkDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectedNormalTalkDelegate);
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
              &(this->OnChangedNpcFunctionDelegate).Delegate.field_0x8,
             *(int *)&(this->OnChangedNpcFunctionDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangedNpcFunctionDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedNpcFunctionDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnQueryNpcFunction);
  pvVar1 = *(void **)&(this->OnQueryNpcFunction).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnQueryNpcFunction);
  UDS_EventBase::~UDS_EventBase((UDS_EventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b542ff0

UClass * __cdecl UDS_NpcFunctionEvent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcFunctionEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcFunctionEvent",
               &Z_Registration_Info_UClass_UDS_NpcFunctionEvent.InnerSingleton,
               StaticRegisterNativesUDS_NpcFunctionEvent,0xf8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NpcFunctionEvent>,
               InternalVTableHelperCtorCaller<UDS_NpcFunctionEvent>,local_res8,
               UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcFunctionEvent.InnerSingleton;
}

// StaticRegisterNativesUDS_NpcFunctionEvent @ 14b543b00

void __cdecl UDS_NpcFunctionEvent::StaticRegisterNativesUDS_NpcFunctionEvent(void)

{
  return;
}

// GetEvent @ 14bd5c500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_NpcFunctionEvent * __cdecl UDS_NpcFunctionEvent::GetEvent(void)

{
  UDS_EventManager *this;
  UDS_LogManager *pUVar1;
  UDS_NpcFunctionEvent *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_EventManager::GetInst();
  if (this != (UDS_EventManager *)0x0) {
    if ((char)this->_padding_ != '\x01') {
      pUVar2 = UDS_EventManager::GetEventInternal<UDS_NpcFunctionEvent>(this);
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
  return (UDS_NpcFunctionEvent *)0x0;
}

// OnChangedNpcFunction @ 14bef7e60

void __thiscall
UDS_NpcFunctionEvent::OnChangedNpcFunction
          (UDS_NpcFunctionEvent *this,EDS_InteractionFunctionType *param_1)

{
  FDS_EventDelegate<EDS_InteractionFunctionType_const_&> *this_00;
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  this_00 = &this->OnChangedNpcFunctionDelegate;
  bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
  if (bVar5) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&local_38);
    puVar1 = &(this->OnChangedNpcFunctionDelegate).Delegate.field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar5 = false;
    uVar9 = *(int *)&(this->OnChangedNpcFunctionDelegate).Delegate.field_0x10 - 1;
    if (-1 < (int)uVar9) {
      lVar10 = (longlong)(int)uVar9 << 4;
      bVar5 = false;
      do {
        uVar8 = 0;
        if ((int)uVar9 < *(int *)&(this->OnChangedNpcFunctionDelegate).Delegate.field_0x10) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar2 = *(longlong *)&(this->OnChangedNpcFunctionDelegate).Delegate.field_0x8;
        if (((*(int *)(lVar2 + 8 + lVar10) == 0) ||
            (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 == (longlong *)0x0)) ||
           (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
          bVar5 = true;
        }
        lVar10 = lVar10 + -0x10;
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
    }
    puVar1 = &(this->OnChangedNpcFunctionDelegate).Delegate.field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar5) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  return;
}

