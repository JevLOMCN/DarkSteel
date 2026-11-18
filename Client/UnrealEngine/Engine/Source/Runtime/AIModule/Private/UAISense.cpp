// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 23

// StaticClass @ 146f85720

UClass * __cdecl UAISense::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISense.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISense",&Z_Registration_Info_UClass_UAISense.InnerSingleton,
               StaticRegisterNativesUAISense,0x90,8,CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAISense>,
               InternalVTableHelperCtorCaller<UAISense>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISense.InnerSingleton;
}

// UAISense @ 146f93e70

UAISense * __thiscall UAISense::UAISense(UAISense *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAISense__6B_;
  (this->PerceptionSystemInstance).field0_0x0.DebugPtr = (UAIPerceptionSystem *)0x0;
  (this->SenseID).Index = 0xff;
  ::FName::FName(&(this->SenseID).Name,L"Invalid");
  *(undefined8 *)&this->OnNewListenerDelegate = 0;
  *(undefined8 *)&(this->OnNewListenerDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnNewListenerDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnListenerUpdateDelegate = 0;
  *(undefined8 *)&(this->OnListenerUpdateDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnListenerUpdateDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnListenerRemovedDelegate = 0;
  *(undefined8 *)&(this->OnListenerRemovedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnListenerRemovedDelegate).field_0x10 = 0;
  return this;
}

// UAISense @ 146f93ef0

UAISense * __thiscall UAISense::UAISense(UAISense *this,FObjectInitializer *param_1)

{
  UClass *this_00;
  UObject *pUVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  UObject::UObject((UObject *)this,param_1);
  this->TimeUntilNextUpdate = 3.4028235e+38;
  this->_padding_ = (longlong)&___7UAISense__6B_;
  (this->PerceptionSystemInstance).field0_0x0.DebugPtr = (UAIPerceptionSystem *)0x0;
  FAINamedID<FAISenseCounter>::InvalidID(&this->SenseID);
  this->bNeedsForgettingNotification = 0;
  *(undefined8 *)&this->OnNewListenerDelegate = 0;
  *(undefined8 *)&(this->OnNewListenerDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnNewListenerDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnListenerUpdateDelegate = 0;
  *(undefined8 *)&(this->OnListenerUpdateDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnListenerUpdateDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnListenerRemovedDelegate = 0;
  *(undefined8 *)&(this->OnListenerRemovedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnListenerRemovedDelegate).field_0x10 = 0;
  if ((this->_padding_ & 0x10) == 0) {
    this_00 = (UClass *)this->_padding_;
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    pUVar1 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
    uVar2 = *(undefined4 *)&pUVar1[1].field_0x18;
    uVar3 = *(undefined4 *)&pUVar1[1].field_0x1c;
    (this->SenseID).Index = pUVar1[1].field_0x14;
    (this->SenseID).Name.ComparisonIndex = (FNameEntryId)uVar2;
    (this->SenseID).Name.Number = uVar3;
  }
  return this;
}

// ~UAISense @ 146f96a80

void __thiscall UAISense::~UAISense(UAISense *this)

{
  this->_padding_ = (longlong)&___7UAISense__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnListenerRemovedDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnListenerUpdateDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnNewListenerDelegate);
  UObject::~UObject((UObject *)this);
  return;
}

// DescribeSelfToGameplayDebugger @ 146fa2920

void __thiscall
UAISense::DescribeSelfToGameplayDebugger
          (UAISense *this,UAIPerceptionSystem *param_1,FGameplayDebuggerCategory *param_2)

{
  FString local_28;
  FString local_18;
  
  ::FName::ToString(&(this->SenseID).Name,&local_18);
  ::FString::PrintfImpl(&local_28,L"%s");
  FGameplayDebuggerCategory::AddTextLine(param_2,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// ForceSenseID @ 146faaef0

void __thiscall UAISense::ForceSenseID(UAISense *this,FAINamedID<FAISenseCounter> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((*(uint *)(this->_padding_ + 0xd4) & 0x40000) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetClass()->HasAnyClassFlags(CLASS_CompiledFromBlueprint) == true",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense.cpp"
                       ,0x55,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((*(byte *)(this->_padding_ + 0xd4) & 1) != 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1936353561218645930>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense.cpp"
                       ,0x56,"GetClass()->HasAnyClassFlags(CLASS_Abstract) == false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->SenseID).Index = param_1->Index;
  (this->SenseID).Name = param_1->Name;
  return;
}

// GetListeners @ 146fb21e0

TMap<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>_>
* __thiscall UAISense::GetListeners(UAISense *this)

{
  code *pcVar1;
  bool bVar2;
  TMap<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>_>
  *pTVar3;
  
  if ((this->PerceptionSystemInstance).field0_0x0.DebugPtr == (UAIPerceptionSystem *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PerceptionSystemInstance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense.cpp"
                       ,0x40,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TMap<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FAIGenericID<FPerceptionListenerCounter>,FPerceptionListener,0>_>
                *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &((this->PerceptionSystemInstance).field0_0x0.DebugPtr)->ListenerContainer;
}

// GetPrivateStaticClass @ 146fb3910

UClass * __cdecl UAISense::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAISense.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"AISense",&Z_Registration_Info_UClass_UAISense.InnerSingleton,
               StaticRegisterNativesUAISense,0x90,8,CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAISense>,
               InternalVTableHelperCtorCaller<UAISense>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAISense.InnerSingleton;
}

// GetSenseID @ 146fb49a0

FAINamedID<FAISenseCounter> * __cdecl
UAISense::GetSenseID
          (FAINamedID<FAISenseCounter> *__return_storage_ptr__,TSubclassOf<UAISense> param_1)

{
  int iVar1;
  longlong lVar2;
  UObject *pUVar3;
  bool bVar4;
  UClass *pUVar5;
  FName FVar6;
  FAINamedID<struct_FAISenseCounter> FVar7;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar2 != 0) && (pUVar5 = StaticClass(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (lVar2 = *(longlong *)param_1.Class.field0_0x0, lVar2 != 0)) {
      pUVar5 = StaticClass();
      if (pUVar5 == (UClass *)0x0) {
LAB_146fb4a2e:
        pUVar5 = (UClass *)0x0;
      }
      else {
        iVar1 = (int)pUVar5->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_146fb4a2e;
        pUVar5 = *(UClass **)param_1.Class.field0_0x0;
      }
      if ((pUVar5->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar5);
      }
      pUVar3 = (pUVar5->ClassDefaultObject).field0_0x0.DebugPtr;
      FVar6.ComparisonIndex.Value = *(uint *)&pUVar3[1].field_0x18;
      FVar6.Number = *(uint *)&pUVar3[1].field_0x1c;
      FVar7 = (FAINamedID<struct_FAISenseCounter>)pUVar3[1].field_0x14;
      goto LAB_146fb4a84;
    }
  }
  FVar6 = DAT_1551c48a4;
  FVar7 = `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
          ::__l2::InvalidIDInstance;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                           ::__l2::_thread_safe_static_guard_0__), FVar6 = DAT_1551c48a4,
     FVar7 = `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
             ::__l2::InvalidIDInstance,
     `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
    ::__l2::InvalidIDInstance = (FAINamedID<struct_FAISenseCounter>)0xff;
    ::FName::FName(&DAT_1551c48a4,L"Invalid");
    _Init_thread_footer(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    FVar6 = DAT_1551c48a4;
    FVar7 = `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
            ::__l2::InvalidIDInstance;
  }
LAB_146fb4a84:
  __return_storage_ptr__->Name = FVar6;
  __return_storage_ptr__->Index = (uchar)FVar7;
  return __return_storage_ptr__;
}

// GetWorld @ 146fb5d40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UAISense::GetWorld(UAISense *this)

{
  UAIPerceptionSystem *pUVar1;
  UWorld *pUVar2;
  
  pUVar1 = (this->PerceptionSystemInstance).field0_0x0.DebugPtr;
  if (pUVar1 != (UAIPerceptionSystem *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146fb5d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar2 = (UWorld *)(**(code **)(pUVar1->_padding_ + 0x180))();
    return pUVar2;
  }
  return (UWorld *)0x0;
}

// HardcodeSenseID @ 146fb6590

void __cdecl
UAISense::HardcodeSenseID(TSubclassOf<UAISense> param_1,FAINamedID<FAISenseCounter> *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UAISense *pUVar6;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar5 = StaticClass();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        pUVar5 = *(UClass **)param_1.Class.field0_0x0;
        goto LAB_146fb65e2;
      }
    }
  }
  pUVar5 = (UClass *)0x0;
LAB_146fb65e2:
  pUVar6 = GetMutableDefault<UAISense>(pUVar5);
  if (pUVar6 == (UAISense *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("MutableCDO",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense.cpp"
                       ,0x30,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (pUVar6->SenseID).Index = param_2->Index;
  (pUVar6->SenseID).Name = param_2->Name;
  return;
}

// OnListenerConfigUpdated @ 146fbd240

void __thiscall UAISense::OnListenerConfigUpdated(UAISense *this,FPerceptionListener *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnListenerUpdateDelegate,&local_28);
  if ((*(int *)&(this->OnListenerUpdateDelegate).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnListenerUpdateDelegate).field_0x8, plVar1 != (longlong *)0x0)
     ) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnListenerForgetsActor @ 146fbd5d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UAISense::OnListenerForgetsActor(UAISense *this,FPerceptionListener *param_1,AActor *param_2)

{
  return;
}

// OnListenerForgetsAll @ 146fbd830

void __thiscall UAISense::OnListenerForgetsAll(UAISense *this,FPerceptionListener *param_1)

{
  return;
}

// OnNewPawn @ 146fbfe40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UAISense::OnNewPawn(UAISense *this,APawn *param_1)

{
  FName local_res8 [4];
  FString local_18;
  
  if ((this->bWantsNewPawnNotification != 0) && (FVisualLogger::bIsRecording != 0)) {
    local_res8[0] = (FName)this->_padding_;
    ::FName::ToString(local_res8,&local_18);
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)(this->PerceptionSystemInstance).field0_0x0.DebugPtr,
               (FName *)&LogAIPerception.field_0x4,Warning,
               L"%s declars it needs New Pawn notification but does not override OnNewPawn");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// PostInitProperties @ 146fc2b70

void __thiscall UAISense::PostInitProperties(UAISense *this)

{
  int iVar1;
  UClass *pUVar2;
  UAIPerceptionSystem *pUVar3;
  
  UObject::PostInitProperties((UObject *)this);
  if (((uint)this->_padding_ >> 4 & 1) != 0) {
    return;
  }
  pUVar3 = (UAIPerceptionSystem *)this->_padding_;
  if (pUVar3 != (UAIPerceptionSystem *)0x0) {
    pUVar2 = UAIPerceptionSystem::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_146fc2bbb;
  }
  pUVar3 = (UAIPerceptionSystem *)0x0;
LAB_146fc2bbb:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UAIPerceptionSystem *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->PerceptionSystemInstance).field0_0x0.DebugPtr = pUVar3;
  return;
}

// RegisterSource @ 146fc8930

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAISense::RegisterSource(UAISense *this,AActor *param_1)

{
  return;
}

// RegisterWrappedEvent @ 146fc9620

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAISense::RegisterWrappedEvent(UAISense *this,UAISenseEvent *param_1)

{
  FName local_res18 [2];
  FString local_18;
  
  if (FVisualLogger::bIsRecording != 0) {
    local_res18[0] = (FName)this->_padding_;
    ::FName::ToString(local_res18,&local_18);
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)(this->PerceptionSystemInstance).field0_0x0.DebugPtr,
               (FName *)&LogAIPerception.field_0x4,Error,
               L"%s did not override UAISense::RegisterWrappedEvent!");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetSenseID @ 146fd2500

void __thiscall UAISense::SetSenseID(UAISense *this,FAINamedID<FAISenseCounter> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
      ::__l2::InvalidIDInstance = (FAINamedID<struct_FAISenseCounter>)0xff;
      ::FName::FName((FName *)&DAT_1551c48a4,L"Invalid");
      _Init_thread_footer(&`public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if ((FAINamedID<struct_FAISenseCounter>)param_1->Index ==
      `public:_static_struct_FAINamedID<struct_FAISenseCounter>___cdecl_FAINamedID<FAISenseCounter>::InvalidID(void)'
      ::__l2::InvalidIDInstance) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index != FAISenseID::InvalidID()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense.cpp"
                       ,0x4f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->SenseID).Index = param_1->Index;
  (this->SenseID).Name = param_1->Name;
  return;
}

// StaticRegisterNativesUAISense @ 146fd3540

void __cdecl UAISense::StaticRegisterNativesUAISense(void)

{
  return;
}

// UnregisterSource @ 146fdb800

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAISense::UnregisterSource(UAISense *this,AActor *param_1)

{
  return;
}

// Update @ 146fdba50

float __thiscall UAISense::Update(UAISense *this)

{
  return __real_7f7fffff;
}

// UpdateSenseID @ 146fe2cf0

FAINamedID<FAISenseCounter> * __thiscall
UAISense::UpdateSenseID(UAISense *this,FAINamedID<FAISenseCounter> *__return_storage_ptr__)

{
  code *pcVar1;
  undefined4 uVar2;
  FAISenseCounter FVar3;
  bool bVar4;
  FAINamedID<FAISenseCounter> *pFVar5;
  
  if (((this->_padding_ & 0x10) == 0) || ((*(uint *)(this->_padding_ + 0xd4) & 0x40001) != 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAnyFlags(RF_ClassDefaultObject) == true && GetClass()->HasAnyClassFlags(CLASS_Abstract | CLASS_CompiledFromBlueprint) == false"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\Perception\\AISense.cpp"
                       ,0x5d,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FAINamedID<FAISenseCounter> *)(*pcVar1)();
      return pFVar5;
    }
  }
  bVar4 = FAINamedID<FAISenseCounter>::IsValid(&this->SenseID);
  if (!bVar4) {
    uVar2 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    FVar3 = (FAISenseCounter)((char)FAINamedID<FAISenseCounter>::Counter + '\x01');
    (this->SenseID).Index = (uchar)FAINamedID<FAISenseCounter>::Counter;
    FAINamedID<FAISenseCounter>::Counter = FVar3;
    (this->SenseID).Name.ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
    (this->SenseID).Name.Number = uVar2;
  }
  __return_storage_ptr__->Index = (this->SenseID).Index;
  __return_storage_ptr__->Name = (this->SenseID).Name;
  return __return_storage_ptr__;
}

