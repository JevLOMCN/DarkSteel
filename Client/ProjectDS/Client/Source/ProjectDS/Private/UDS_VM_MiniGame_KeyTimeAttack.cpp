// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 33

// StaticClass @ 14b695a00

UClass * __cdecl UDS_VM_MiniGame_KeyTimeAttack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_MiniGame_KeyTimeAttack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_MiniGame_KeyTimeAttack",
               &Z_Registration_Info_UClass_UDS_VM_MiniGame_KeyTimeAttack.InnerSingleton,
               StaticRegisterNativesUDS_VM_MiniGame_KeyTimeAttack,0x2a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_MiniGame_KeyTimeAttack>,
               InternalVTableHelperCtorCaller<UDS_VM_MiniGame_KeyTimeAttack>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_MiniGame_KeyTimeAttack.InnerSingleton;
}

// UDS_VM_MiniGame_KeyTimeAttack @ 14b699ef0

UDS_VM_MiniGame_KeyTimeAttack * __thiscall
UDS_VM_MiniGame_KeyTimeAttack::UDS_VM_MiniGame_KeyTimeAttack
          (UDS_VM_MiniGame_KeyTimeAttack *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->EffectVisibility = Collapsed;
  this->IconID = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MiniGame_KeyTimeAttack__6B_;
  (this->TableRow)._padding_ = (longlong)&___7FDS_MiniGameKeyTimeAttackTableRow__6B_;
  (this->EntryBindingEventField_KeyIcon).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_KeyIcon).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_KeyIcon).UserObjectList.ArrayMax = 0;
  (this->RemainTime).StringTableType = None;
  (this->RemainTime).StringTableID = 0;
  (this->RemainTime).StringEnumTableNameID.ComparisonIndex = 0;
  (this->RemainTime).StringEnumTableNameID.Number = 0;
  (this->RemainTime).DateTime.Ticks = 0;
  (this->RemainTime).TimeSpan.Ticks = 0;
  (this->RemainTime).TimeExpressionType = None;
  (this->RemainTime).IsExpression = false;
  (this->RemainTime).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemainTime).UniqueString.Data.ArrayNum = 0;
  (this->RemainTime).UniqueString.Data.ArrayMax = 0;
  (this->RemainTime).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemainTime).FormatArgs.ArrayNum = 0;
  (this->RemainTime).FormatArgs.ArrayMax = 0;
  this->GaugePercent = 0.0;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  (this->AnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->EventField_CloseButton)._padding_ = '\0';
  (this->EventField_CloseButton).bIsCustomSelected = false;
  (this->EventField_CloseButton).bIsLacked = false;
  (this->EventField_CloseButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->EventField_CloseButton).Delegate = 0;
  *(undefined8 *)&(this->EventField_CloseButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->EventField_CloseButton).Delegate.field_0x10 = 0;
  (this->FixedText_Btn_Close).StringTableType = StringUi;
  (this->FixedText_Btn_Close).StringTableID = 0x69;
  (this->FixedText_Btn_Close).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Close).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Close).DateTime.Ticks = 0;
  (this->FixedText_Btn_Close).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Close).TimeExpressionType = None;
  (this->FixedText_Btn_Close).IsExpression = false;
  (this->FixedText_Btn_Close).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Close).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Close).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Close).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Close).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Close).FormatArgs.ArrayMax = 0;
  this->CurrentIndex = 0;
  this->AnswerIndex = 0;
  this->LimitTime = 5.0;
  this->AccTime = 0.0;
  this->ActiveInput = true;
  this->bUpdateTime = true;
  this->bAutoFinish = true;
  (this->KeyDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KeyDatas).ArrayNum = 0;
  (this->KeyDatas).ArrayMax = 0;
  *(undefined8 *)&this->SuccessDel = 0;
  *(undefined8 *)&(this->SuccessDel).field_0x8 = 0;
  *(undefined4 *)&(this->SuccessDel).field_0x10 = 0;
  *(undefined8 *)&this->FailDel = 0;
  *(undefined8 *)&(this->FailDel).field_0x8 = 0;
  *(undefined4 *)&(this->FailDel).field_0x10 = 0;
  (this->AnswerKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnswerKeys).ArrayNum = 0;
  (this->AnswerKeys).ArrayMax = 0;
  (this->TableRow).ID = 0;
  (this->TableRow).DataStage = 0;
  (this->TableRow).LimitTime1 = 0.0;
  (this->TableRow).CommandList1.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TableRow).CommandList1.ArrayNum = 0;
  (this->TableRow).CommandList1.ArrayMax = 0;
  (this->TableRow).LimitTime2 = 0.0;
  (this->TableRow).CommandList2.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TableRow).CommandList2.ArrayNum = 0;
  (this->TableRow).CommandList2.ArrayMax = 0;
  (this->TableRow).LimitTime3 = 0.0;
  (this->TableRow).CommandList3.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TableRow).CommandList3.ArrayNum = 0;
  (this->TableRow).CommandList3.ArrayMax = 0;
  (this->TableRow).ServerVerificationTime = 0.0;
  (this->TableRow).ID_ResourceSound = 0;
  (this->AudioComponent).field0_0x0.DebugPtr = (UAudioComponent *)0x0;
  return this;
}

// ~UDS_VM_MiniGame_KeyTimeAttack @ 14b69b1d0

void __thiscall
UDS_VM_MiniGame_KeyTimeAttack::~UDS_VM_MiniGame_KeyTimeAttack(UDS_VM_MiniGame_KeyTimeAttack *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MiniGame_KeyTimeAttack__6B_;
  pFVar1 = (this->TableRow).CommandList3.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TableRow).CommandList2.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TableRow).CommandList1.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->TableRow)._padding_ = (longlong)&___7FTableRowBase__6B_;
  pFVar1 = (this->AnswerKeys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->FailDel);
  pvVar2 = *(void **)&(this->FailDel).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->FailDel);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->SuccessDel);
  pvVar2 = *(void **)&(this->SuccessDel).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->SuccessDel);
  DestructItems<TSharedPtr<FDS_MiniGame_KeyTimeAttack_KeyData,1>,int>
            ((TSharedPtr<FDS_MiniGame_KeyTimeAttack_KeyData,1> *)
             (this->KeyDatas).AllocatorInstance.Data,(this->KeyDatas).ArrayNum);
  pFVar1 = (this->KeyDatas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Close).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Close).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Close).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Close).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->EventField_CloseButton).Delegate);
  pvVar2 = *(void **)&(this->EventField_CloseButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->EventField_CloseButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_ValidAnimation);
  pvVar2 = *(void **)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_AnimationFinish);
  pvVar2 = *(void **)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_AnimationFinish);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->RemainTime).FormatArgs.AllocatorInstance.Data,
             (this->RemainTime).FormatArgs.ArrayNum);
  pFVar1 = (this->RemainTime).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RemainTime).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEventField_KeyIcon).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b69d640

IClassDescriptor * __thiscall
UDS_VM_MiniGame_KeyTimeAttack::GetFieldNotificationDescriptor(UDS_VM_MiniGame_KeyTimeAttack *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_MiniGame_KeyTimeAttack::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b69e320

UClass * __cdecl UDS_VM_MiniGame_KeyTimeAttack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_MiniGame_KeyTimeAttack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_MiniGame_KeyTimeAttack",
               &Z_Registration_Info_UClass_UDS_VM_MiniGame_KeyTimeAttack.InnerSingleton,
               StaticRegisterNativesUDS_VM_MiniGame_KeyTimeAttack,0x2a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_MiniGame_KeyTimeAttack>,
               InternalVTableHelperCtorCaller<UDS_VM_MiniGame_KeyTimeAttack>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_MiniGame_KeyTimeAttack.InnerSingleton;
}

// GetTickableTickType @ 14b69e590

ETickableTickType __thiscall
UDS_VM_MiniGame_KeyTimeAttack::GetTickableTickType(UDS_VM_MiniGame_KeyTimeAttack *this)

{
  return Conditional;
}

// StaticRegisterNativesUDS_VM_MiniGame_KeyTimeAttack @ 14b69e7e0

void __cdecl UDS_VM_MiniGame_KeyTimeAttack::StaticRegisterNativesUDS_VM_MiniGame_KeyTimeAttack(void)

{
  return;
}

// UDS_VM_MiniGame_KeyTimeAttack @ 14bed4610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDS_VM_MiniGame_KeyTimeAttack * __thiscall
UDS_VM_MiniGame_KeyTimeAttack::UDS_VM_MiniGame_KeyTimeAttack(UDS_VM_MiniGame_KeyTimeAttack *this)

{
  code *pcVar1;
  IConsoleManager *pIVar2;
  bool bVar3;
  FObjectInitializer *pFVar4;
  UDS_VM_MiniGame_KeyTimeAttack *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c8;
  FDelegateAllocation local_c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b0;
  FDelegateAllocation local_a8;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  pFVar4 = FObjectInitializer::Get();
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,pFVar4);
  this->EffectVisibility = Collapsed;
  this->IconID = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MiniGame_KeyTimeAttack__6B_;
  (this->TableRow)._padding_ = (longlong)&___7FDS_MiniGameKeyTimeAttackTableRow__6B_;
  (this->EntryBindingEventField_KeyIcon).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_KeyIcon).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_KeyIcon).UserObjectList.ArrayMax = 0;
  (this->RemainTime).StringTableType = None;
  (this->RemainTime).StringTableID = 0;
  (this->RemainTime).StringEnumTableNameID.ComparisonIndex = 0;
  (this->RemainTime).StringEnumTableNameID.Number = 0;
  (this->RemainTime).DateTime.Ticks = 0;
  (this->RemainTime).TimeSpan.Ticks = 0;
  (this->RemainTime).TimeExpressionType = None;
  (this->RemainTime).IsExpression = false;
  (this->RemainTime).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemainTime).UniqueString.Data.ArrayNum = 0;
  (this->RemainTime).UniqueString.Data.ArrayMax = 0;
  (this->RemainTime).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemainTime).FormatArgs.ArrayNum = 0;
  (this->RemainTime).FormatArgs.ArrayMax = 0;
  this->GaugePercent = 0.0;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  (this->AnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->EventField_CloseButton)._padding_ = '\0';
  (this->EventField_CloseButton).bIsCustomSelected = false;
  (this->EventField_CloseButton).bIsLacked = false;
  (this->EventField_CloseButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->EventField_CloseButton).Delegate = 0;
  *(undefined8 *)&(this->EventField_CloseButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->EventField_CloseButton).Delegate.field_0x10 = 0;
  (this->FixedText_Btn_Close).StringTableType = StringUi;
  (this->FixedText_Btn_Close).StringTableID = 0x69;
  (this->FixedText_Btn_Close).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Close).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Close).DateTime.Ticks = 0;
  (this->FixedText_Btn_Close).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Close).TimeExpressionType = None;
  (this->FixedText_Btn_Close).IsExpression = false;
  (this->FixedText_Btn_Close).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Close).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Close).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Close).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Close).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Close).FormatArgs.ArrayMax = 0;
  this->CurrentIndex = 0;
  this->AnswerIndex = 0;
  this->LimitTime = 5.0;
  this->AccTime = 0.0;
  this->ActiveInput = true;
  this->bUpdateTime = true;
  this->bAutoFinish = true;
  (this->KeyDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KeyDatas).ArrayNum = 0;
  (this->KeyDatas).ArrayMax = 0;
  *(undefined8 *)&this->SuccessDel = 0;
  *(undefined8 *)&(this->SuccessDel).field_0x8 = 0;
  *(undefined4 *)&(this->SuccessDel).field_0x10 = 0;
  *(undefined8 *)&this->FailDel = 0;
  *(undefined8 *)&(this->FailDel).field_0x8 = 0;
  *(undefined4 *)&(this->FailDel).field_0x10 = 0;
  (this->AnswerKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnswerKeys).ArrayNum = 0;
  (this->AnswerKeys).ArrayMax = 0;
  (this->TableRow).ID = 0;
  (this->TableRow).DataStage = 0;
  (this->TableRow).LimitTime1 = 0.0;
  (this->TableRow).CommandList1.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TableRow).CommandList1.ArrayNum = 0;
  (this->TableRow).CommandList1.ArrayMax = 0;
  (this->TableRow).LimitTime2 = 0.0;
  (this->TableRow).CommandList2.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TableRow).CommandList2.ArrayNum = 0;
  (this->TableRow).CommandList2.ArrayMax = 0;
  (this->TableRow).LimitTime3 = 0.0;
  (this->TableRow).CommandList3.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TableRow).CommandList3.ArrayNum = 0;
  (this->TableRow).CommandList3.ArrayMax = 0;
  (this->TableRow).ServerVerificationTime = 0.0;
  (this->TableRow).ID_ResourceSound = 0;
  (this->AudioComponent).field0_0x0.DebugPtr = (UAudioComponent *)0x0;
  if ((this->_padding_ & 0x10) != 0) {
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      IConsoleManager::SetupSingleton();
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x4fb,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pUVar5 = (UDS_VM_MiniGame_KeyTimeAttack *)(*pcVar1)();
          return pUVar5;
        }
        if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
          IConsoleManager::SetupSingleton();
          if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Singleton != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                               ,0x4fb,L"");
            if (bVar3) {
              pcVar1 = (code *)swi(3);
              pUVar5 = (UDS_VM_MiniGame_KeyTimeAttack *)(*pcVar1)();
              return pUVar5;
            }
          }
        }
      }
    }
    pIVar2 = IConsoleManager::Singleton;
    local_c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c0.DelegateSize = 0;
    pcVar1 = *(code **)((longlong)*IConsoleManager::Singleton + 0x90);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_c8,(FWriteAccessScope *)&local_68);
    local_50 = &local_c0;
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,&local_c0);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      puVar6[3] = ConsoleStart;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    (*pcVar1)(pIVar2,L"DS.MiniGameStart_KeyTimeAttack",L"KeyTimeAttackID",&local_c8,0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_c8,(FWriteAccessScope *)&local_98);
    if ((local_c0.DelegateSize != 0) &&
       (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c0,0,0,0x10);
      local_c0.DelegateSize = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c8.AccessDetector);
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      IConsoleManager::SetupSingleton();
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x4fb,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pUVar5 = (UDS_VM_MiniGame_KeyTimeAttack *)(*pcVar1)();
          return pUVar5;
        }
        if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
          IConsoleManager::SetupSingleton();
          if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Singleton != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                               ,0x4fb,L"");
            if (bVar3) {
              pcVar1 = (code *)swi(3);
              pUVar5 = (UDS_VM_MiniGame_KeyTimeAttack *)(*pcVar1)();
              return pUVar5;
            }
          }
        }
      }
    }
    pIVar2 = IConsoleManager::Singleton;
    local_b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_a8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a8.DelegateSize = 0;
    pcVar1 = *(code **)((longlong)*IConsoleManager::Singleton + 0x90);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_b0,(FWriteAccessScope *)&local_48);
    local_30 = &local_a8;
    puVar6 = UE::Core::Private::DelegateAllocate(0x20,&local_a8);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      puVar6[3] = ConsoleClose;
      *puVar6 = &
                ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    (*pcVar1)(pIVar2,L"DS.MiniGameClose_KeyTimeAttack",L"",&local_b0,0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_b0,(FWriteAccessScope *)&local_80);
    if ((local_a8.DelegateSize != 0) &&
       (local_a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a8,0,0,0x10);
      local_a8.DelegateSize = 0;
    }
    if (local_80.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
    }
    if (local_a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a8.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b0.AccessDetector);
  }
  return this;
}

// BindModel @ 14bed7c20

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_MiniGame_KeyTimeAttack::BindModel(UDS_VM_MiniGame_KeyTimeAttack *this)

{
  UDS_LanguageManager *pUVar1;
  
  if ((0 < (int)this->_padding_) &&
     (pUVar1 = UDS_LanguageManager::GetInst(), pUVar1 != (UDS_LanguageManager *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_ViewModelBase>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnLanguageChanged,(UDS_ViewModelBase *)&stack0x00000008,(pmf_620f4446 *)this
              );
  }
  return;
}

// CloseGame @ 14beda1b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_MiniGame_KeyTimeAttack::CloseGame(void)

{
  UDS_WindowManager *this;
  float local_res8 [2];
  uint local_res10 [6];
  
  this = UDS_WindowManager::GetInst();
  if (this != (UDS_WindowManager *)0x0) {
    local_res8[0] = 0.0;
    local_res10[0] = 0;
    UDS_WindowManager::CloseWindow(this,MiniGame_KeyTimeAttack,local_res10,local_res8);
  }
  return;
}

// ConsoleClose @ 14beda390

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

void __cdecl
UDS_VM_MiniGame_KeyTimeAttack::ConsoleClose
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  UDS_WindowManager *this;
  float local_res18 [2];
  uint local_res20 [2];
  
  this = UDS_WindowManager::GetInst();
  if (this != (UDS_WindowManager *)0x0) {
    local_res18[0] = 0.0;
    local_res20[0] = 0;
    UDS_WindowManager::CloseWindow(this,MiniGame_KeyTimeAttack,local_res20,local_res18);
  }
  return;
}

// ConsoleStart @ 14beda3d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UDS_VM_MiniGame_KeyTimeAttack::ConsoleStart
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *_Str;
  undefined1 local_a0 [8];
  ForAnyElementType FStack_98;
  int local_90;
  undefined1 local_88 [8];
  ForAnyElementType FStack_80;
  int local_78;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  FDS_MiniGame_KeyTimeParams local_40;
  
  if (param_1->ArrayNum != 0) {
    if (param_1->ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar1;
    }
    local_40.TableID = _wtoi(_Str);
    local_90 = 0;
    local_78 = 0;
    local_a0 = (undefined1  [8])0x0;
    FStack_98.Data = (FScriptContainerElement *)0x0;
    local_88 = (undefined1  [8])0x0;
    FStack_80.Data = (FScriptContainerElement *)0x0;
    local_40.bIsAutoFinish = true;
    local_40.SuccessDel._0_8_ = 0;
    local_40.SuccessDel._8_8_ = 0;
    local_40.SuccessDel._16_4_ = 0;
    TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              (&local_40.SuccessDel,
               (TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_a0);
    local_40.FailDel._16_4_ = 0;
    local_40.FailDel._0_8_ = 0;
    local_40.FailDel._8_8_ = 0;
    TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              (&local_40.FailDel,
               (TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_88);
    StartMiniGame(&local_40);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
               (FWriteAccessScope *)&local_70);
    if ((local_78 != 0) && (FStack_80.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_80.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_80,0,0,0x10);
      local_78 = 0;
    }
    if (local_70.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
    }
    if (FStack_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_80.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_88);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a0,
               (FWriteAccessScope *)&local_58);
    if ((local_90 != 0) && (FStack_98.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_98.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_98,0,0,0x10);
      local_90 = 0;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    if (FStack_98.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_98.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_a0);
  }
  return;
}

// Fail @ 14beec2e0

void __thiscall UDS_VM_MiniGame_KeyTimeAttack::Fail(UDS_VM_MiniGame_KeyTimeAttack *this)

{
  this->ActiveInput = false;
  return;
}

// FailAndCloseAnimationEnd @ 14beec2f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_MiniGame_KeyTimeAttack::FailAndCloseAnimationEnd(UDS_VM_MiniGame_KeyTimeAttack *this)

{
  longlong *plVar1;
  UDS_WindowManager *this_00;
  float local_res8 [2];
  uint local_res10 [2];
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->FailDel,&local_28);
  if ((*(int *)&(this->FailDel).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->FailDel).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,this);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res8[0] = 0.0;
    local_res10[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,MiniGame_KeyTimeAttack,local_res10,local_res8);
  }
  return;
}

// FailAnimationEnd @ 14beec380

void __thiscall UDS_VM_MiniGame_KeyTimeAttack::FailAnimationEnd(UDS_VM_MiniGame_KeyTimeAttack *this)

{
  return;
}

// FailTimeout @ 14beec390

void __thiscall UDS_VM_MiniGame_KeyTimeAttack::FailTimeout(UDS_VM_MiniGame_KeyTimeAttack *this)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  this->ActiveInput = false;
  this->bUpdateTime = false;
  if (this->bAutoFinish != false) {
    ShowFailEffectAndClose(this);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->FailDel,&local_28);
  if ((*(int *)&(this->FailDel).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->FailDel).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,this);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// GetCurrentInstanceNullable @ 14beee040

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TWeakObjectPtr<UDS_VM_MiniGame_KeyTimeAttack,FWeakObjectPtr> __cdecl
UDS_VM_MiniGame_KeyTimeAttack::GetCurrentInstanceNullable(void)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UDS_WindowManager *this;
  UObject *pUVar4;
  UDS_UserWidget *this_00;
  TWeakObjectPtr<UDS_VM_MiniGame_KeyTimeAttack,FWeakObjectPtr> TVar5;
  UClass *pUVar6;
  FWeakObjectPtr in_RCX;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  undefined8 local_res20;
  undefined8 local_48;
  undefined8 local_40;
  UObject *local_38;
  TArray<TWeakObjectPtr<UDS_ViewModelBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_30;
  
  this = UDS_WindowManager::GetInst();
  if (this == (UDS_WindowManager *)0x0) {
    *(undefined8 *)in_RCX = 0;
    local_res20 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)&local_res20);
    return (TWeakObjectPtr<UDS_VM_MiniGame_KeyTimeAttack,FWeakObjectPtr>)in_RCX;
  }
  UDS_WindowManager::GetWindowInfo(this,(EDS_WindowWidget)&local_res18);
  bVar3 = TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_WindowInfo,FWeakObjectPtr> *)&local_res18,(void *)0x0);
  if (bVar3) {
    *(undefined8 *)in_RCX = 0;
    local_48 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)&local_48);
    return (TWeakObjectPtr<UDS_VM_MiniGame_KeyTimeAttack,FWeakObjectPtr>)in_RCX;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_res18);
  this_00 = (UDS_UserWidget *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar4[5].field_0x10);
  UDS_UserWidget::GetViewModels(this_00,&local_30);
  if (local_30.ArrayNum == 0) {
    *(undefined8 *)in_RCX = 0;
    local_40 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)&local_40);
    goto LAB_14beee1e0;
  }
  if (local_30.ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar5.WeakPtr = (FWeakObjectPtr)(*pcVar2)();
      return (TWeakObjectPtr<UDS_VM_MiniGame_KeyTimeAttack,FWeakObjectPtr>)TVar5.WeakPtr;
    }
  }
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_30.AllocatorInstance.Data);
  if (pUVar4 == (UObject *)0x0) {
LAB_14beee17e:
    pUVar4 = (UObject *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UDS_VM_MiniGame_KeyTimeAttack_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) goto LAB_14beee17e;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_38 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_38);
  *(FWeakObjectPtr *)in_RCX = local_res10;
LAB_14beee1e0:
  if ((FWeakObjectPtr *)local_30.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  return (TWeakObjectPtr<UDS_VM_MiniGame_KeyTimeAttack,FWeakObjectPtr>)in_RCX;
}

// InitViewModel @ 14bef3040

void __thiscall UDS_VM_MiniGame_KeyTimeAttack::InitViewModel(UDS_VM_MiniGame_KeyTimeAttack *this)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  UDS_VM_MiniGame_KeyTimeAttack *local_res8;
  uint uStack_2c;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->EventField_CloseButton).Delegate,(FWriteAccessScope *)&local_28);
  local_10 = &(this->EventField_CloseButton).Delegate.field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_MiniGame_KeyTimeAttack____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_MiniGame_KeyTimeAttack *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar1[3] = 0;
    local_res8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_MiniGame_KeyTimeAttack *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res8);
    puVar1[4] = OnCloseButtonClick;
    puVar1[5] = (ulonglong)uStack_2c << 0x20;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// OnCloseButtonClick @ 14befb8d0

void __thiscall
UDS_VM_MiniGame_KeyTimeAttack::OnCloseButtonClick
          (UDS_VM_MiniGame_KeyTimeAttack *this,UObject *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  ShowFailEffectAndClose(this);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->FailDel,&local_28);
  if ((*(int *)&(this->FailDel).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->FailDel).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,this);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnCloseInit @ 14befbec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_VM_MiniGame_KeyTimeAttack::OnCloseInit(UDS_VM_MiniGame_KeyTimeAttack *this)

{
  UAudioComponent *pUVar1;
  code *pcVar2;
  UDS_SoundManager *this_00;
  FDS_ResourceSoundTableRow *pFVar3;
  
  this_00 = UDS_SoundManager::GetInst();
  if (this_00 != (UDS_SoundManager *)0x0) {
    UDS_SoundManager::PauseBGM(this_00,false);
    pUVar1 = (this->AudioComponent).field0_0x0.DebugPtr;
    if (pUVar1 != (UAudioComponent *)0x0) {
      pcVar2 = *(code **)(*(longlong *)pUVar1 + 0x648);
      pFVar3 = FDS_ResourceSoundTableRow::GetRef((longlong)(this->TableRow).ID_ResourceSound,true);
      (*pcVar2)(pUVar1,pFVar3->SoundFadeOutTime,0,0);
      (this->AudioComponent).field0_0x0.DebugPtr = (UAudioComponent *)0x0;
    }
  }
  UDS_ViewModelBase::OnCloseInit((UDS_ViewModelBase *)this);
  return;
}

// OnInputAction @ 14befde60

void __thiscall
UDS_VM_MiniGame_KeyTimeAttack::OnInputAction
          (UDS_VM_MiniGame_KeyTimeAttack *this,EDS_KeyActionType *param_1,
          FDS_InputEventParams *param_2)

{
  EDS_KeyActionType EVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  
  if ((this->ActiveInput != false) && (param_2->TriggerEvent == Triggered)) {
    if (*param_1 == IA_MiniGame_Escape) {
      CloseGame();
      return;
    }
    uVar9 = this->CurrentIndex;
    if (((-1 < (int)uVar9) && ((int)uVar9 < (this->AnswerKeys).ArrayNum)) &&
       ((int)uVar9 < (this->KeyDatas).ArrayNum)) {
      uVar8 = 0;
      if ((int)uVar9 < (this->AnswerKeys).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      EVar1 = *(EDS_KeyActionType *)
               ((this->AnswerKeys).AllocatorInstance.Data + (longlong)(int)uVar9 * 4);
      uVar9 = this->CurrentIndex;
      uVar8 = 0;
      if ((int)uVar9 < (this->KeyDatas).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar2 = (this->KeyDatas).AllocatorInstance.Data;
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)(int)uVar9 * 0x10 + 8);
      lVar4 = *(longlong *)(pFVar2 + (longlong)(int)uVar9 * 0x10);
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (EVar1 == *param_1) {
        if ((lVar4 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 *)(lVar4 + 0x40) = 2;
        TDelegate<void___cdecl(enum_EDS_KeyTimeAttack_KeyState),FDefaultDelegateUserPolicy>::
        ExecuteIfBound((void *)(lVar4 + 0x48),Success);
        if (this->CurrentIndex < (this->AnswerKeys).ArrayNum + -1) {
          uVar9 = this->CurrentIndex + 1;
          this->CurrentIndex = uVar9;
          if ((-1 < (int)uVar9) && ((int)uVar9 < (this->KeyDatas).ArrayNum)) {
            uVar8 = 0;
            if ((int)uVar9 < (this->KeyDatas).ArrayNum) {
              uVar8 = ~uVar9 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar2 = (this->KeyDatas).AllocatorInstance.Data;
            pTVar5 = *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)(int)uVar9 * 0x10 + 8);
            lVar4 = *(longlong *)(pFVar2 + (longlong)(int)uVar9 * 0x10);
            if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
              UNLOCK();
            }
            if ((lVar4 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            *(undefined4 *)(lVar4 + 0x40) = 1;
            if ((lVar4 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            TDelegate<void___cdecl(enum_EDS_KeyTimeAttack_KeyState),FDefaultDelegateUserPolicy>::
            ExecuteIfBound((void *)(lVar4 + 0x48),*(EDS_KeyTimeAttack_KeyState *)(lVar4 + 0x40));
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar5);
          }
        }
        else {
          Success(this);
        }
      }
      else {
        if ((lVar4 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 *)(lVar4 + 0x40) = 3;
        TDelegate<void___cdecl(enum_EDS_KeyTimeAttack_KeyState),FDefaultDelegateUserPolicy>::
        ExecuteIfBound((void *)(lVar4 + 0x48),Fail);
        this->ActiveInput = false;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
  }
  return;
}

// OnLastKeyAnimFinish @ 14befeac0

void __thiscall
UDS_VM_MiniGame_KeyTimeAttack::OnLastKeyAnimFinish(UDS_VM_MiniGame_KeyTimeAttack *this,bool param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  if (!param_1) {
    RefreshKeys(this,false);
    return;
  }
  this->AnswerIndex = this->AnswerIndex + 1;
  FDS_MiniGameKeyTimeAttackTableRow::GetLimitTimeArray(&this->TableRow,&local_18);
  if ((-1 < this->AnswerIndex) && (this->AnswerIndex < local_18.ArrayNum)) {
    RefreshKeys(this,true);
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
    return;
  }
  return;
}

// OnSetViewModel @ 14bf05ab0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_VM_MiniGame_KeyTimeAttack::OnSetViewModel
          (UDS_VM_MiniGame_KeyTimeAttack *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  UDS_WindowManager *pUVar5;
  FDS_MiniGameKeyTimeAttackTableRow *pFVar6;
  UDS_SoundManager *this_00;
  undefined8 *puVar7;
  ulong64 uVar8;
  float local_res10 [2];
  uint local_res18 [2];
  float local_res20 [2];
  uint local_c8 [2];
  FWeakObjectPtr local_c0;
  TArray<TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_b8
  ;
  UDS_VM_MiniGame_KeyTimeAttack *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1> local_98;
  undefined1 local_88 [8];
  FDelegateAllocation local_80;
  UDS_VM_MiniGame_KeyTimeAttack *local_70;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_68.Object = param_1->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_MiniGame_KeyTimeAttack>(&local_98,&local_68);
  if (local_98.Object == (FDS_ViewModelContext_MiniGame_KeyTimeAttack *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4490388621500612739>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\MiniGame\\DS_VM_MiniGame_KeyTimeAttack.cpp"
                       ,0x83,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar5 = UDS_WindowManager::GetInst();
    if (pUVar5 != (UDS_WindowManager *)0x0) {
      local_res10[0] = 0.0;
      local_res18[0] = 0;
      UDS_WindowManager::CloseWindow(pUVar5,MiniGame_KeyTimeAttack,local_res18,local_res10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
  }
  else {
    TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>(&this->SuccessDel,&((local_98.Object)->params).SuccessDel);
    TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>(&this->FailDel,&((local_98.Object)->params).FailDel);
    this->bAutoFinish = ((local_98.Object)->params).bIsAutoFinish;
    pFVar6 = FDS_MiniGameKeyTimeAttackTableRow::GetRef
                       ((longlong)((local_98.Object)->params).TableID,true);
    (this->TableRow).ID = pFVar6->ID;
    (this->TableRow).DataStage = pFVar6->DataStage;
    (this->TableRow).LimitTime1 = pFVar6->LimitTime1;
    TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>::operator=
              (&(this->TableRow).CommandList1,&pFVar6->CommandList1);
    (this->TableRow).LimitTime2 = pFVar6->LimitTime2;
    TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>::operator=
              (&(this->TableRow).CommandList2,&pFVar6->CommandList2);
    (this->TableRow).LimitTime3 = pFVar6->LimitTime3;
    TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>::operator=
              (&(this->TableRow).CommandList3,&pFVar6->CommandList3);
    (this->TableRow).ServerVerificationTime = pFVar6->ServerVerificationTime;
    (this->TableRow).ID_ResourceSound = pFVar6->ID_ResourceSound;
    bVar4 = FDS_MiniGameKeyTimeAttackTableRow::IsValid(&this->TableRow);
    if (bVar4) {
      FDS_MiniGameKeyTimeAttackTableRow::GetCommandListArray(&this->TableRow,&local_b8);
      if (local_b8.ArrayNum == 0) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4490388621500612759>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\MiniGame\\DS_VM_MiniGame_KeyTimeAttack.cpp"
                           ,0x97,"false");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        CloseGame();
        DestructItems<TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_> *)
                   local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
      }
      else {
        this_00 = UDS_SoundManager::GetInst();
        if (this_00 != (UDS_SoundManager *)0x0) {
          UDS_SoundManager::PauseBGM(this_00,true);
          uStack_9c = local_68.SharedReferenceCount.ReferenceController._4_4_;
          local_a8 = (UDS_VM_MiniGame_KeyTimeAttack *)OnSpawnSoundFinish;
          uStack_a0 = 0;
          local_88 = (undefined1  [8])0x0;
          local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_80.DelegateSize = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
                     (FWriteAccessScope *)&local_58);
          local_40 = &local_80;
          puVar7 = UE::Core::Private::DelegateAllocate(0x30,&local_80);
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = &
                      ___7__TCommonDelegateInstanceState___A6AXPEAVUAudioComponent___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar8 = FDelegateHandle::GenerateNewID();
            puVar7[2] = uVar8;
            *puVar7 = &
                      ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_MiniGame_KeyTimeAttack____A6AXPEAVUAudioComponent___ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            puVar7[3] = 0;
            local_70 = this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_70);
            puVar7[4] = local_a8;
            puVar7[5] = CONCAT44(uStack_9c,uStack_a0);
          }
          if (local_58.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
          }
          iVar1 = (this->TableRow).ID_ResourceSound;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          local_c0.ObjectIndex = 0;
          local_c0.ObjectSerialNumber = 0;
          local_a8 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=(&local_c0,(FObjectPtr)&local_a8);
          UDS_SoundManager::SpawnSoundAsync
                    (this_00,(TWeakObjectPtr<UObject,FWeakObjectPtr>)local_c0,iVar1,
                     (TDelegate<void___cdecl(UAudioComponent_*),FDefaultDelegateUserPolicy> *)
                     local_88);
        }
        RefreshKeys(this,true);
        DestructItems<TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_> *)
                   local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
      }
      if ((TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_> *)local_b8.AllocatorInstance.Data
          != (TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_b8.AllocatorInstance.Data);
      }
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4490388621500612751>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\MiniGame\\DS_VM_MiniGame_KeyTimeAttack.cpp"
                         ,0x8f,"false");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar5 = UDS_WindowManager::GetInst();
      if (pUVar5 != (UDS_WindowManager *)0x0) {
        local_res20[0] = 0.0;
        local_c8[0] = 0;
        UDS_WindowManager::CloseWindow(pUVar5,MiniGame_KeyTimeAttack,local_c8,local_res20);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnSpawnSoundFinish @ 14bf0a7e0

void __thiscall
UDS_VM_MiniGame_KeyTimeAttack::OnSpawnSoundFinish
          (UDS_VM_MiniGame_KeyTimeAttack *this,UAudioComponent *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UAudioComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->AudioComponent).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->AudioComponent).field0_0x0.DebugPtr = param_1;
  return;
}

// OnUpdate @ 14bf0aac0

void __thiscall
UDS_VM_MiniGame_KeyTimeAttack::OnUpdate(UDS_VM_MiniGame_KeyTimeAttack *this,float param_1)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  FName local_48;
  int local_40;
  
  if (this->bUpdateTime != false) {
    fVar2 = param_1 + this->AccTime;
    fVar3 = this->LimitTime - fVar2;
    this->AccTime = fVar2;
    if (fVar3 < 0.0) {
      this->ActiveInput = false;
      this->bUpdateTime = false;
      if (this->bAutoFinish != false) {
        ShowFailEffectAndClose(this);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->FailDel,
                 (FReadAccessScope *)&local_48);
      if ((*(int *)&(this->FailDel).field_0x10 != 0) &&
         (plVar1 = *(longlong **)&(this->FailDel).field_0x8, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x68))(plVar1,this);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_48);
      fVar3 = 0.0;
    }
    this->GaugePercent = fVar3 / this->LimitTime;
    local_40 = FFieldNotificationClassDescriptor::GaugePercent.BitNumber;
    local_48 = FFieldNotificationClassDescriptor::GaugePercent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
    FDS_Text::SetTextFromSec(&this->RemainTime,fVar3,SecondsText,false);
    local_40 = FFieldNotificationClassDescriptor::RemainTime.BitNumber;
    local_48 = FFieldNotificationClassDescriptor::RemainTime.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
  }
  return;
}

// OnWidgetCreated @ 14bf0b340

void __cdecl
UDS_VM_MiniGame_KeyTimeAttack::OnWidgetCreated
          (UDS_UserWidget *param_1,
          TSharedPtr<FDS_ViewModelContext_MiniGame_KeyTimeAttack,1> *param_2)

{
  FWeakObjectPtr local_res8;
  UDS_UserWidget *local_res10;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  local_18.Object = (FDS_ViewModelContext *)param_2->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  DS_ViewModelTemplateUtil::BindViewModel
            ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res8,&local_18,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// RefreshKeys @ 14bf0f390

void __thiscall
UDS_VM_MiniGame_KeyTimeAttack::RefreshKeys(UDS_VM_MiniGame_KeyTimeAttack *this,bool param_1)

{
  TArray<TSharedPtr<FDS_MiniGame_KeyTimeAttack_KeyData,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ulonglong uVar4;
  FName FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UStruct *pUVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  FDS_ViewModelContext *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  UScriptStruct *pUVar14;
  UDS_ViewModelContextManager *this_00;
  UDS_UserObjectListItem *this_01;
  FDS_ViewModelContext *pFVar15;
  longlong *plVar16;
  uint uVar17;
  longlong local_res8;
  UDS_VM_MiniGame_KeyTimeAttack *local_res18;
  UDS_UserObjectListItem *local_res20;
  TArray<TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_e8
  ;
  FName local_d8;
  int local_d0;
  FName local_c8;
  int local_c0;
  code *local_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  TSharedPtr<FDS_ViewModelContext,1> local_a8;
  TArray<int,TSizedDefaultAllocator<32>_> local_98;
  TSharedPtr<FDS_ViewModelContext,1> local_88;
  longlong local_78;
  undefined8 uStack_70;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  
  FDS_MiniGameKeyTimeAttackTableRow::GetCommandListArray(&this->TableRow,&local_e8);
  if ((this->AnswerIndex < 0) || (local_e8.ArrayNum <= this->AnswerIndex)) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4490388621500612897>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\MiniGame\\DS_VM_MiniGame_KeyTimeAttack.cpp"
                       ,0x121,"false");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    FDS_MiniGameKeyTimeAttackTableRow::GetLimitTimeArray(&this->TableRow,&local_98);
    uVar17 = this->AnswerIndex;
    if (((int)uVar17 < 0) || (local_98.ArrayNum <= (int)uVar17)) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4490388621500612904>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\MiniGame\\DS_VM_MiniGame_KeyTimeAttack.cpp"
                         ,0x128,"false");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      if (param_1) {
        uVar7 = 0;
        if ((int)uVar17 < local_98.ArrayNum) {
          uVar7 = ~uVar17 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar8 = *(int *)(local_98.AllocatorInstance.Data + (longlong)(int)uVar17 * 4);
        this->AccTime = 0.0;
        this->LimitTime = (float)iVar8;
      }
      uVar17 = this->AnswerIndex;
      uVar7 = 0;
      if ((int)uVar17 < local_e8.ArrayNum) {
        uVar7 = ~uVar17 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>::operator=
                (&this->AnswerKeys,
                 (TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_> *)
                 (local_e8.AllocatorInstance.Data + (longlong)(int)uVar17 * 0x10));
      this->ActiveInput = true;
      this->bUpdateTime = true;
      this->CurrentIndex = 0;
      FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_KeyIcon);
      pTVar1 = &this->KeyDatas;
      DestructItems<TSharedPtr<FDS_MiniGame_KeyTimeAttack_KeyData,1>,int>
                ((TSharedPtr<FDS_MiniGame_KeyTimeAttack_KeyData,1> *)
                 (pTVar1->AllocatorInstance).Data,(this->KeyDatas).ArrayNum);
      (this->KeyDatas).ArrayNum = 0;
      if ((this->KeyDatas).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&pTVar1->AllocatorInstance,0,&(this->KeyDatas).ArrayMax);
      }
      uVar17 = 0;
      if (0 < (this->AnswerKeys).ArrayNum) {
        local_b8 = OnLastKeyAnimFinish;
        uStack_ac = uStack_70._4_4_;
        uStack_b0 = 0;
        uVar4 = (ulonglong)uStack_70._4_4_;
        local_res8 = 0;
        do {
          pUVar9 = ::operator_new(0x90);
          if (pUVar9 == (UStruct *)0x0) {
            pUVar9 = (UStruct *)0x0;
            plVar16 = (longlong *)&DAT_00000010;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
          }
          else {
            pUVar9->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_UFDS_MiniGame_KeyTimeAttack_KeyData___00_SharedPointerInternals__6B_
            ;
            *(atomic<int> *)&pUVar9->_padding_ = (atomic<int>)0x1;
            plVar16 = &pUVar9->_padding_;
            ((atomic<int> *)&pUVar9->_padding_)[1] = (atomic<int>)0x1;
            pUVar9->_padding_ = 0;
            pUVar9->_padding_ = 0;
            pUVar9->_padding_ = 0;
            pUVar9->_padding_ = 0;
            pUVar9->_padding_ = 0;
            pUVar9->_padding_ = 0;
            (pUVar9->SuperStruct).field0_0x0.DebugPtr = (UStruct *)0x0;
            (pUVar9->Children).field0_0x0.DebugPtr = (UField *)0x0;
            pUVar9->ChildProperties = (FField *)0x0;
            pUVar9->PropertiesSize = 0;
            pUVar9->MinAlignment = 0;
            pUVar9->StructStateFlags = (atomic<unsigned_short>)0x0;
            (pUVar9->Script).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pUVar9->Script).ArrayNum = 0;
            (pUVar9->Script).ArrayMax = 0;
            pUVar9->PropertyLink = (FProperty *)0x0;
            pUVar9->RefLink = (FProperty *)0x0;
            pUVar9->DestructorLink = (FProperty *)0x0;
            pUVar9->PostConstructLink = (FProperty *)0x0;
            if ((plVar16 == (longlong *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InObject != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x246,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            LOCK();
            *(atomic<int> *)&pUVar9->_padding_ =
                 (atomic<int>)((int)*(atomic<int> *)&pUVar9->_padding_ + 1);
            UNLOCK();
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)pUVar9);
            if ((plVar16 == (longlong *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          *(uint *)plVar16 = uVar17;
          uVar7 = 0;
          if ((int)uVar17 < (this->AnswerKeys).ArrayNum) {
            uVar7 = ~uVar17 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar15 = (FDS_ViewModelContext *)0x0;
          *(uint *)(plVar16 + 4) = *(uint *)((this->AnswerKeys).AllocatorInstance.Data + local_res8)
          ;
          *(uint *)(plVar16 + 8) = (uint)(uVar17 == 0);
          *(bool *)(plVar16 + 0xc) = uVar17 == (this->AnswerKeys).ArrayNum - 1U;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(plVar16 + 0xd),
                     (FWriteAccessScope *)&local_68);
          local_50 = (FDelegateAllocation *)(plVar16 + 0xe);
          puVar10 = UE::Core::Private::DelegateAllocate(0x30,local_50);
          if (puVar10 != (undefined8 *)0x0) {
            *puVar10 = &
                       ___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar11 = FDelegateHandle::GenerateNewID();
            puVar10[2] = uVar11;
            *puVar10 = &
                       ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_MiniGame_KeyTimeAttack____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
            ;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            puVar10[3] = 0;
            local_res18 = this;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_res18);
            puVar10[4] = OnLastKeyAnimFinish;
            puVar10[5] = uVar4 << 0x20;
          }
          if (local_68.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
          }
          iVar8 = (this->KeyDatas).ArrayNum;
          if (iVar8 == (this->KeyDatas).ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&pTVar1->AllocatorInstance,&(this->KeyDatas).ArrayMax);
          }
          (this->KeyDatas).ArrayNum = iVar8 + 1;
          pFVar2 = (pTVar1->AllocatorInstance).Data;
          *(longlong **)(pFVar2 + (longlong)iVar8 * 0x10) = plVar16;
          *(UStruct **)(pFVar2 + (longlong)iVar8 * 0x10 + 8) = pUVar9;
          if (pUVar9 != (UStruct *)0x0) {
            LOCK();
            *(atomic<int> *)&pUVar9->_padding_ =
                 (atomic<int>)((int)*(atomic<int> *)&pUVar9->_padding_ + 1);
            UNLOCK();
          }
          pFVar12 = ::operator_new(0x30);
          if (pFVar12 != (FDS_ViewModelContext *)0x0) {
            *(undefined8 *)&pFVar12->ViewModelTemplateKey = 0;
            pFVar12->DerivedStaticStruct = (UStruct *)0x0;
            (pFVar12->ViewModelName).ComparisonIndex = 0;
            (pFVar12->ViewModelName).Number = 0;
            pFVar12->_padding_ = (longlong)&___7FDS_ViewModelContext_MiniGame_KeyTimeAttack_Key__6B_
            ;
            pFVar12[1]._padding_ = 0;
            pFVar12[1].DerivedStaticStruct = (UStruct *)0x0;
            pFVar15 = pFVar12;
          }
          pTVar13 = ::operator_new(0x20);
          if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
            pTVar13 = (TReferenceControllerBase<1> *)0x0;
          }
          else {
            pTVar13->SharedReferenceCount = (atomic<int>)0x1;
            pTVar13[1]._padding_ = (longlong)ViewModelContextDeleter;
            pTVar13->_padding_ =
                 (longlong)
                 &
                 ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_MiniGame_KeyTimeAttack_Key__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
            ;
            pTVar13->WeakReferenceCount = (atomic<int>)0x1;
            *(FDS_ViewModelContext **)&pTVar13[1].SharedReferenceCount = pFVar15;
          }
          if ((pFVar15 == (FDS_ViewModelContext *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pUVar14 = FDS_ViewModelContext_MiniGame_KeyTimeAttack_Key::StaticStruct();
          pFVar15->DerivedStaticStruct = (UStruct *)pUVar14;
          this_00 = UDS_ViewModelContextManager::GetInst();
          if (this_00 != (UDS_ViewModelContextManager *)0x0) {
            if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_a8.Object = pFVar15;
            local_a8.SharedReferenceCount.ReferenceController = pTVar13;
            UDS_ViewModelContextManager::RegisterContext(this_00,&local_a8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_a8.SharedReferenceCount.ReferenceController);
          }
          pFVar15->ViewModelTemplateKey = W_Minigame_KeyTimeAttack_Key;
          if (pUVar9 != (UStruct *)0x0) {
            LOCK();
            *(atomic<int> *)&pUVar9->_padding_ =
                 (atomic<int>)((int)*(atomic<int> *)&pUVar9->_padding_ + 1);
            UNLOCK();
          }
          local_78 = pFVar15[1]._padding_;
          uStack_70 = pFVar15[1].DerivedStaticStruct;
          pFVar15[1]._padding_ = (longlong)plVar16;
          pFVar15[1].DerivedStaticStruct = pUVar9;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)uStack_70);
          this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_01 != (UDS_UserObjectListItem *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_88.Object = pFVar15;
          local_88.SharedReferenceCount.ReferenceController = pTVar13;
          UDS_UserObjectListItem::AddContext(this_01,&local_88);
          local_res20 = this_01;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_01 != (UDS_UserObjectListItem *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          FDS_EntryBindingEventField::Add
                    (&this->EntryBindingEventField_KeyIcon,
                     (TObjectPtr<UDS_UserObjectListItem>)&local_res20);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar13);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pUVar9);
          local_res8 = local_res8 + 4;
          uVar17 = uVar17 + 1;
        } while ((int)uVar17 < (this->AnswerKeys).ArrayNum);
      }
      local_d0 = FFieldNotificationClassDescriptor::EntryBindingEventField_KeyIcon.BitNumber;
      local_d8 = FFieldNotificationClassDescriptor::EntryBindingEventField_KeyIcon.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_d8);
      iVar8 = FFieldNotificationClassDescriptor::EffectVisibility.BitNumber;
      FVar5 = FFieldNotificationClassDescriptor::EffectVisibility.FieldName;
      if (this->EffectVisibility != Collapsed) {
        this->EffectVisibility = Collapsed;
        local_c0 = iVar8;
        local_c8 = FVar5;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
      }
    }
    if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
  }
  DestructItems<TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>,int>
            ((TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_> *)
             local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
  if ((TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_> *)local_e8.AllocatorInstance.Data !=
      (TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  return;
}

// ShowFailEffectAndClose @ 14bf1c2a0

void __thiscall
UDS_VM_MiniGame_KeyTimeAttack::ShowFailEffectAndClose(UDS_VM_MiniGame_KeyTimeAttack *this)

{
  longlong *plVar1;
  FName FVar2;
  int iVar3;
  FName *pFVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FName local_res8;
  FName local_38;
  int iStack_30;
  undefined4 uStack_2c;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this->ActiveInput = false;
  iVar3 = FFieldNotificationClassDescriptor::EffectSwitcherIndex.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::EffectSwitcherIndex.FieldName;
  this->bUpdateTime = false;
  plVar1 = &this->_padding_;
  if (this->EffectSwitcherIndex != 1) {
    this->EffectSwitcherIndex = 1;
    iStack_30 = iVar3;
    local_38 = FVar2;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_38);
  }
  iVar3 = FFieldNotificationClassDescriptor::EffectVisibility.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::EffectVisibility.FieldName;
  if (this->EffectVisibility != SelfHitTestInvisible) {
    this->EffectVisibility = SelfHitTestInvisible;
    iStack_30 = iVar3;
    local_38 = FVar2;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_38);
  }
  pFVar4 = ::FName::FName(&local_res8,"Fail_Anim");
  iStack_30 = 0;
  local_38 = (FName)FailAndCloseAnimationEnd;
  (this->AnimationEvent).AnimationName = *pFVar4;
  (this->AnimationEvent).AnimationEventType = PlayForward;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_AnimationFinish,(FWriteAccessScope *)&local_28);
  local_10 = &(this->AnimationEvent).Delegate_AnimationFinish.field_0x8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_MiniGame_KeyTimeAttack____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar5[3] = 0;
    local_res8 = (FName)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_res8);
    *(FName *)(puVar5 + 4) = local_38;
    puVar5[5] = CONCAT44(uStack_2c,iStack_30);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  iStack_30 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_38 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_38);
  return;
}

// ShowSuccessEffectAndClose @ 14bf1c460

void __thiscall
UDS_VM_MiniGame_KeyTimeAttack::ShowSuccessEffectAndClose(UDS_VM_MiniGame_KeyTimeAttack *this)

{
  FName FVar1;
  int iVar2;
  int iVar3;
  FName *pFVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FName local_res8;
  FName local_58;
  int iStack_50;
  int iStack_4c;
  TArray<int,TSizedDefaultAllocator<32>_> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  this->ActiveInput = false;
  this->bUpdateTime = false;
  FDS_MiniGameKeyTimeAttackTableRow::GetLimitTimeArray(&this->TableRow,&local_48);
  iVar2 = FFieldNotificationClassDescriptor::EffectSwitcherIndex.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::EffectSwitcherIndex.FieldName;
  iVar3 = this->AnswerIndex + 1;
  if ((iVar3 < 0) || (local_48.ArrayNum <= iVar3)) {
    if (this->EffectSwitcherIndex != 0) {
      this->EffectSwitcherIndex = 0;
      iStack_50 = iVar2;
      local_58 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
    }
    iVar2 = FFieldNotificationClassDescriptor::EffectVisibility.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::EffectVisibility.FieldName;
    if (this->EffectVisibility != SelfHitTestInvisible) {
      this->EffectVisibility = SelfHitTestInvisible;
      iStack_50 = iVar2;
      local_58 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
    }
    pFVar4 = ::FName::FName(&local_res8,"Success_Anim");
    iStack_50 = 0;
    local_58 = (FName)SuccessAnimationEnd;
    (this->AnimationEvent).AnimationName = *pFVar4;
    iStack_4c = local_48.ArrayMax;
    (this->AnimationEvent).AnimationEventType = PlayForward;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(this->AnimationEvent).Delegate_AnimationFinish,(FWriteAccessScope *)&local_38);
    local_20 = &(this->AnimationEvent).Delegate_AnimationFinish.field_0x8;
    puVar5 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_20);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar6 = FDelegateHandle::GenerateNewID();
      puVar5[2] = uVar6;
      *puVar5 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_MiniGame_KeyTimeAttack____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar5[3] = 0;
      local_res8 = (FName)this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_res8);
      *(FName *)(puVar5 + 4) = local_58;
      puVar5[5] = CONCAT44(iStack_4c,iStack_50);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    iStack_50 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
    local_58 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// StartMiniGame @ 14bf1c660

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_MiniGame_KeyTimeAttack::StartMiniGame(FDS_MiniGame_KeyTimeParams *param_1)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  UDS_WindowManager *this;
  UDS_GameInstance *pUVar4;
  FDS_ViewModelContext *pFVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this_00;
  undefined8 *puVar7;
  ulong64 uVar8;
  FDS_ViewModelContext *pFVar9;
  FDS_ViewModelContext *pFVar10;
  UDS_GameInstance *local_res10;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  this = UDS_WindowManager::GetInst();
  if (this == (UDS_WindowManager *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4490388621500612669>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\MiniGame\\DS_VM_MiniGame_KeyTimeAttack.cpp"
                       ,0x3d,"false");
    if (!bVar3) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->FailDel);
      pvVar1 = *(void **)&(param_1->FailDel).field_0x8;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)&param_1->FailDel);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->SuccessDel);
      pvVar1 = *(void **)&(param_1->SuccessDel).field_0x8;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)&param_1->SuccessDel);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar4 = UDS_GameInstance::GetInst();
  if (pUVar4 == (UDS_GameInstance *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4490388621500612676>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\MiniGame\\DS_VM_MiniGame_KeyTimeAttack.cpp"
                       ,0x44,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FDS_MiniGame_KeyTimeParams::~FDS_MiniGame_KeyTimeParams(param_1);
  }
  else {
    pFVar5 = ::operator_new(0x58);
    pFVar10 = (FDS_ViewModelContext *)0x0;
    pFVar9 = pFVar10;
    if (pFVar5 != (FDS_ViewModelContext *)0x0) {
      pFVar5->_padding_ = 0;
      *(undefined8 *)&pFVar5->DerivedStaticStruct = 0;
      (pFVar5->ViewModelName).ComparisonIndex = 0;
      (pFVar5->ViewModelName).Number = 0;
      *(undefined8 *)&pFVar5->ViewModelTemplateKey = 0;
      pFVar5[1]._padding_ = 0;
      *(undefined8 *)&pFVar5[1].DerivedStaticStruct = 0;
      pFVar5[1].ViewModelName.ComparisonIndex = 0;
      pFVar5[1].ViewModelName.Number = 0;
      *(undefined8 *)&pFVar5[1].ViewModelTemplateKey = 0;
      pFVar5[2]._padding_ = 0;
      *(undefined8 *)&pFVar5[2].DerivedStaticStruct = 0;
      pFVar5[2].ViewModelName.ComparisonIndex = 0;
      pFVar5[2].ViewModelName.Number = 0;
      pFVar5->_padding_ = (longlong)&___7FDS_ViewModelContext_MiniGame_KeyTimeAttack__6B_;
      *(undefined1 *)((longlong)&pFVar5[1]._padding_ + 4) = 1;
      pFVar9 = pFVar5;
    }
    pFVar5 = ::operator_new(0x20);
    if (pFVar5 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar5->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar5->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar5->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_MiniGame_KeyTimeAttack__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar5->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar5->ViewModelTemplateKey = pFVar9;
      pFVar10 = pFVar5;
    }
    if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar6 = FDS_ViewModelContext_MiniGame_KeyTimeAttack::StaticStruct();
    *(UScriptStruct **)&pFVar9->DerivedStaticStruct = pUVar6;
    this_00 = UDS_ViewModelContextManager::GetInst();
    if (this_00 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar10 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar10->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_78.Object = pFVar9;
      local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
      UDS_ViewModelContextManager::RegisterContext(this_00,&local_78);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
    }
    pFVar9->ViewModelTemplateKey = W_Minigame_KeyTimeAttack;
    *(int *)&pFVar9[1]._padding_ = param_1->TableID;
    *(bool *)((longlong)&pFVar9[1]._padding_ + 4) = param_1->bIsAutoFinish;
    TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
               &pFVar9[1].DerivedStaticStruct,&param_1->SuccessDel);
    TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)(pFVar9 + 2),
               &param_1->FailDel);
    local_68 = (undefined1  [8])0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
               (FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar7 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__V__TSharedPtr_UFDS_ViewModelContext_MiniGame_KeyTimeAttack___00____6B_
      ;
      puVar7[1] = pFVar9;
      puVar7[2] = pFVar10;
      if (pFVar10 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar10->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
        UNLOCK();
      }
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[3] = uVar8;
      *puVar7 = &
                ___7__TWeakBaseFunctorDelegateInstance___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__P6AX0V__TSharedPtr_UFDS_ViewModelContext_MiniGame_KeyTimeAttack___00___ZV3___6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      puVar7[4] = 0;
      local_res10 = pUVar4;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 4),(FObjectPtr)&local_res10);
      puVar7[5] = OnWidgetCreated;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    UDS_WindowManager::OpenWindow
              (this,MiniGame_KeyTimeAttack,
               (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)local_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar10);
    FDS_MiniGame_KeyTimeParams::~FDS_MiniGame_KeyTimeParams(param_1);
  }
  return;
}

// Success @ 14bf1cc50

void __thiscall UDS_VM_MiniGame_KeyTimeAttack::Success(UDS_VM_MiniGame_KeyTimeAttack *this)

{
  longlong *plVar1;
  FName FVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FName local_res8;
  FName local_78;
  int iStack_70;
  int iStack_6c;
  FReadAccessScope local_68;
  TArray<int,TSizedDefaultAllocator<32>_> local_50;
  FDestructionSentinel local_40;
  undefined1 *local_28;
  
  this->ActiveInput = false;
  this->bUpdateTime = false;
  FDS_MiniGameKeyTimeAttackTableRow::GetLimitTimeArray(&this->TableRow,&local_50);
  iVar3 = this->AnswerIndex + 1;
  if ((iVar3 < 0) || (local_50.ArrayNum <= iVar3)) {
    if (this->bAutoFinish != false) {
      this->ActiveInput = false;
      this->bUpdateTime = false;
      FDS_MiniGameKeyTimeAttackTableRow::GetLimitTimeArray
                (&this->TableRow,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_68);
      iVar3 = FFieldNotificationClassDescriptor::EffectSwitcherIndex.BitNumber;
      FVar2 = FFieldNotificationClassDescriptor::EffectSwitcherIndex.FieldName;
      iVar4 = this->AnswerIndex + 1;
      if ((iVar4 < 0) || ((int)local_68.DestructionSentinel.Accessor <= iVar4)) {
        if (this->EffectSwitcherIndex != 0) {
          this->EffectSwitcherIndex = 0;
          iStack_70 = iVar3;
          local_78 = FVar2;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
        }
        iVar3 = FFieldNotificationClassDescriptor::EffectVisibility.BitNumber;
        FVar2 = FFieldNotificationClassDescriptor::EffectVisibility.FieldName;
        if (this->EffectVisibility != SelfHitTestInvisible) {
          this->EffectVisibility = SelfHitTestInvisible;
          iStack_70 = iVar3;
          local_78 = FVar2;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
        }
        pFVar5 = ::FName::FName(&local_res8,"Success_Anim");
        iStack_70 = 0;
        local_78 = (FName)SuccessAnimationEnd;
        (this->AnimationEvent).AnimationName = *pFVar5;
        iStack_6c = local_50.ArrayMax;
        (this->AnimationEvent).AnimationEventType = PlayForward;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(this->AnimationEvent).Delegate_AnimationFinish,(FWriteAccessScope *)&local_40);
        local_28 = &(this->AnimationEvent).Delegate_AnimationFinish.field_0x8;
        puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_28);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = &
                    ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar7 = FDelegateHandle::GenerateNewID();
          puVar6[2] = uVar7;
          *puVar6 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_MiniGame_KeyTimeAttack____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar6[3] = 0;
          local_res8 = (FName)this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res8);
          *(FName *)(puVar6 + 4) = local_78;
          puVar6[5] = CONCAT44(iStack_6c,iStack_70);
        }
        if (local_40.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
        }
        iStack_70 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
        local_78 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
      }
      if ((FScriptContainerElement *)local_68.DestructionSentinel._0_8_ !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_68.DestructionSentinel._0_8_);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->SuccessDel,&local_68
              );
    if ((*(int *)&(this->SuccessDel).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->SuccessDel).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,this);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
  }
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  return;
}

// SuccessAnimationEnd @ 14bf1cee0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_MiniGame_KeyTimeAttack::SuccessAnimationEnd(UDS_VM_MiniGame_KeyTimeAttack *this)

{
  UDS_WindowManager *this_00;
  float local_res10 [2];
  uint local_res18 [4];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res10[0] = 0.0;
    local_res18[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,MiniGame_KeyTimeAttack,local_res18,local_res10);
  }
  return;
}

// UnbindModel @ 14bf1df70

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_MiniGame_KeyTimeAttack::UnbindModel(UDS_VM_MiniGame_KeyTimeAttack *this)

{
  UDS_LanguageManager *pUVar1;
  
  pUVar1 = UDS_LanguageManager::GetInst();
  if (pUVar1 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLanguageChanged,this
              );
  }
  return;
}

