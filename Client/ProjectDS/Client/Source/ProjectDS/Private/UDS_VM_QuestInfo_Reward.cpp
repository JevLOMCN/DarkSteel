// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b6c5400

UClass * __cdecl UDS_VM_QuestInfo_Reward::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestInfo_Reward.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestInfo_Reward",
               &Z_Registration_Info_UClass_UDS_VM_QuestInfo_Reward.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestInfo_Reward,0x150,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_QuestInfo_Reward>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestInfo_Reward>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestInfo_Reward.InnerSingleton;
}

// UDS_VM_QuestInfo_Reward @ 14b6c9870

UDS_VM_QuestInfo_Reward * __thiscall
UDS_VM_QuestInfo_Reward::UDS_VM_QuestInfo_Reward
          (UDS_VM_QuestInfo_Reward *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestInfo_Reward__6B_;
  (this->VM_QuestData).field0_0x0.DebugPtr = (UDS_VM_QuestData *)0x0;
  (this->FixedText_NoRewards).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_NoRewards).StringEnumTableNameID.Number = 0;
  (this->FixedText_NoRewards).DateTime.Ticks = 0;
  (this->FixedText_NoRewards).TimeSpan.Ticks = 0;
  (this->FixedText_NoRewards).TimeExpressionType = None;
  (this->FixedText_NoRewards).IsExpression = false;
  (this->FixedText_NoRewards).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_NoRewards).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_NoRewards).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_NoRewards).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_NoRewards).FormatArgs.ArrayNum = 0;
  (this->FixedText_NoRewards).FormatArgs.ArrayMax = 0;
  (this->FixedText_SubTitle_Rewards).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_SubTitle_Rewards).StringEnumTableNameID.Number = 0;
  (this->FixedText_SubTitle_Rewards).DateTime.Ticks = 0;
  (this->FixedText_SubTitle_Rewards).TimeSpan.Ticks = 0;
  (this->FixedText_SubTitle_Rewards).TimeExpressionType = None;
  (this->FixedText_SubTitle_Rewards).IsExpression = false;
  (this->FixedText_SubTitle_Rewards).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_SubTitle_Rewards).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_SubTitle_Rewards).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_SubTitle_Rewards).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_SubTitle_Rewards).FormatArgs.ArrayNum = 0;
  (this->FixedText_SubTitle_Rewards).FormatArgs.ArrayMax = 0;
  this->QuestID = 0;
  (this->FixedText_NoRewards).StringTableType = StringUi;
  (this->FixedText_NoRewards).StringTableID = 0xeb33;
  (this->FixedText_SubTitle_Rewards).StringTableType = StringUi;
  (this->FixedText_SubTitle_Rewards).StringTableID = 0xeb2d;
  return this;
}

// UDS_VM_QuestInfo_Reward @ 14b6c9960

UDS_VM_QuestInfo_Reward * __thiscall
UDS_VM_QuestInfo_Reward::UDS_VM_QuestInfo_Reward
          (UDS_VM_QuestInfo_Reward *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestInfo_Reward__6B_;
  (this->VM_QuestData).field0_0x0.DebugPtr = (UDS_VM_QuestData *)0x0;
  (this->FixedText_NoRewards).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_NoRewards).StringEnumTableNameID.Number = 0;
  (this->FixedText_NoRewards).DateTime.Ticks = 0;
  (this->FixedText_NoRewards).TimeSpan.Ticks = 0;
  (this->FixedText_NoRewards).TimeExpressionType = None;
  (this->FixedText_NoRewards).IsExpression = false;
  (this->FixedText_NoRewards).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_NoRewards).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_NoRewards).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_NoRewards).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_NoRewards).FormatArgs.ArrayNum = 0;
  (this->FixedText_NoRewards).FormatArgs.ArrayMax = 0;
  (this->FixedText_SubTitle_Rewards).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_SubTitle_Rewards).StringEnumTableNameID.Number = 0;
  (this->FixedText_SubTitle_Rewards).DateTime.Ticks = 0;
  (this->FixedText_SubTitle_Rewards).TimeSpan.Ticks = 0;
  (this->FixedText_SubTitle_Rewards).TimeExpressionType = None;
  (this->FixedText_SubTitle_Rewards).IsExpression = false;
  (this->FixedText_SubTitle_Rewards).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_SubTitle_Rewards).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_SubTitle_Rewards).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_SubTitle_Rewards).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_SubTitle_Rewards).FormatArgs.ArrayNum = 0;
  (this->FixedText_SubTitle_Rewards).FormatArgs.ArrayMax = 0;
  this->QuestID = 0;
  (this->FixedText_NoRewards).StringTableType = StringUi;
  (this->FixedText_NoRewards).StringTableID = 0xeb33;
  (this->FixedText_SubTitle_Rewards).StringTableType = StringUi;
  (this->FixedText_SubTitle_Rewards).StringTableID = 0xeb2d;
  return this;
}

// ~UDS_VM_QuestInfo_Reward @ 14b6cc130

void __thiscall UDS_VM_QuestInfo_Reward::~UDS_VM_QuestInfo_Reward(UDS_VM_QuestInfo_Reward *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestInfo_Reward__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedText_SubTitle_Rewards).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_SubTitle_Rewards).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_SubTitle_Rewards).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_SubTitle_Rewards).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_NoRewards).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_NoRewards).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_NoRewards).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_NoRewards).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6cf680

IClassDescriptor * __thiscall
UDS_VM_QuestInfo_Reward::GetFieldNotificationDescriptor(UDS_VM_QuestInfo_Reward *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_QuestInfo_Reward::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6d00c0

UClass * __cdecl UDS_VM_QuestInfo_Reward::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestInfo_Reward.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestInfo_Reward",
               &Z_Registration_Info_UClass_UDS_VM_QuestInfo_Reward.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestInfo_Reward,0x150,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_QuestInfo_Reward>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestInfo_Reward>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestInfo_Reward.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_QuestInfo_Reward @ 14b6d0fe0

void __cdecl UDS_VM_QuestInfo_Reward::StaticRegisterNativesUDS_VM_QuestInfo_Reward(void)

{
  return;
}

// OnSetViewModel @ 14bf6ab10

void __thiscall
UDS_VM_QuestInfo_Reward::OnSetViewModel
          (UDS_VM_QuestInfo_Reward *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FDS_ViewModelContext_Quest *pFVar3;
  bool bVar4;
  UDS_VM_QuestData *pUVar5;
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_48;
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_38;
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
  SafeCast<FDS_ViewModelContext_Quest>(&local_38,&local_28);
  if (local_38.Object == (FDS_ViewModelContext_Quest *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return;
  }
  pUVar5 = (this->VM_QuestData).field0_0x0.DebugPtr;
  this->QuestID = (local_38.Object)->QuestID;
  if (pUVar5 == (UDS_VM_QuestData *)0x0) {
    pUVar5 = UDS_ViewModelBase::CreateViewModel<UDS_VM_QuestData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UDS_VM_QuestData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_QuestData).field0_0x0.DebugPtr = pUVar5;
    if (pUVar5 == (UDS_VM_QuestData *)0x0) goto LAB_14bf6ac64;
  }
  MakeContext<FDS_ViewModelContext_Quest>(&local_48);
  pFVar3 = local_48.Object;
  if (local_48.Object != (FDS_ViewModelContext_Quest *)0x0) {
    if ((local_48.Object == (FDS_ViewModelContext_Quest *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined4 *)&pFVar3->_padding_ = 0x97;
    pFVar3->QuestID = this->QuestID;
    pUVar5 = (this->VM_QuestData).field0_0x0.DebugPtr;
    local_18.Object = (FDS_ViewModelContext *)local_48.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_48.SharedReferenceCount.ReferenceController;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar5,&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
LAB_14bf6ac64:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetVM_QuestData @ 14bf7fdc0

void __thiscall UDS_VM_QuestInfo_Reward::SetVM_QuestData(UDS_VM_QuestInfo_Reward *this)

{
  code *pcVar1;
  FDS_ViewModelContext_Quest *pFVar2;
  bool bVar3;
  UDS_VM_QuestData *pUVar4;
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_QuestData).field0_0x0.DebugPtr == (UDS_VM_QuestData *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_QuestData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_VM_QuestData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_QuestData).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UDS_VM_QuestData *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_Quest>(&local_28);
  pFVar2 = local_28.Object;
  if (local_28.Object == (FDS_ViewModelContext_Quest *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return;
  }
  if ((local_28.Object == (FDS_ViewModelContext_Quest *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined4 *)&pFVar2->_padding_ = 0x97;
  pFVar2->QuestID = this->QuestID;
  pUVar4 = (this->VM_QuestData).field0_0x0.DebugPtr;
  local_18.Object = (FDS_ViewModelContext *)local_28.Object;
  local_18.SharedReferenceCount.ReferenceController =
       local_28.SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar4,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

