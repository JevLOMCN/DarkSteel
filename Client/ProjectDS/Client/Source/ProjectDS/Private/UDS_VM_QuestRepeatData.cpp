// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b6c41e0

UClass * __cdecl UDS_VM_QuestRepeatData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestRepeatData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestRepeatData",
               &Z_Registration_Info_UClass_UDS_VM_QuestRepeatData.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestRepeatData,0x140,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_QuestRepeatData>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestRepeatData>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestRepeatData.InnerSingleton;
}

// UDS_VM_QuestRepeatData @ 14b6cbd10

UDS_VM_QuestRepeatData * __thiscall
UDS_VM_QuestRepeatData::UDS_VM_QuestRepeatData(UDS_VM_QuestRepeatData *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestRepeatData__6B_;
  (this->DayRepeatCount).StringTableID = 0;
  (this->DayRepeatCount).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DayRepeatCount).StringEnumTableNameID.Number = 0;
  (this->DayRepeatCount).DateTime.Ticks = 0;
  (this->DayRepeatCount).TimeSpan.Ticks = 0;
  (this->DayRepeatCount).TimeExpressionType = None;
  (this->DayRepeatCount).IsExpression = false;
  (this->DayRepeatCount).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DayRepeatCount).UniqueString.Data.ArrayNum = 0;
  (this->DayRepeatCount).UniqueString.Data.ArrayMax = 0;
  (this->DayRepeatCount).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DayRepeatCount).FormatArgs.ArrayNum = 0;
  (this->DayRepeatCount).FormatArgs.ArrayMax = 0;
  (this->RepeatCountResetSchedule).StringTableType = None;
  (this->RepeatCountResetSchedule).StringTableID = 0;
  (this->RepeatCountResetSchedule).StringEnumTableNameID.ComparisonIndex = 0;
  (this->RepeatCountResetSchedule).StringEnumTableNameID.Number = 0;
  (this->RepeatCountResetSchedule).DateTime.Ticks = 0;
  (this->RepeatCountResetSchedule).TimeSpan.Ticks = 0;
  (this->RepeatCountResetSchedule).TimeExpressionType = None;
  (this->RepeatCountResetSchedule).IsExpression = false;
  (this->RepeatCountResetSchedule).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RepeatCountResetSchedule).UniqueString.Data.ArrayNum = 0;
  (this->RepeatCountResetSchedule).UniqueString.Data.ArrayMax = 0;
  (this->RepeatCountResetSchedule).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RepeatCountResetSchedule).FormatArgs.ArrayNum = 0;
  (this->RepeatCountResetSchedule).FormatArgs.ArrayMax = 0;
  (this->DayRepeatCount).StringTableType = None;
  return this;
}

// UDS_VM_QuestRepeatData @ 14b6cbdf0

UDS_VM_QuestRepeatData * __thiscall
UDS_VM_QuestRepeatData::UDS_VM_QuestRepeatData
          (UDS_VM_QuestRepeatData *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestRepeatData__6B_;
  (this->DayRepeatCount).StringTableID = 0;
  (this->DayRepeatCount).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DayRepeatCount).StringEnumTableNameID.Number = 0;
  (this->DayRepeatCount).DateTime.Ticks = 0;
  (this->DayRepeatCount).TimeSpan.Ticks = 0;
  (this->DayRepeatCount).TimeExpressionType = None;
  (this->DayRepeatCount).IsExpression = false;
  (this->DayRepeatCount).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DayRepeatCount).UniqueString.Data.ArrayNum = 0;
  (this->DayRepeatCount).UniqueString.Data.ArrayMax = 0;
  (this->DayRepeatCount).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DayRepeatCount).FormatArgs.ArrayNum = 0;
  (this->DayRepeatCount).FormatArgs.ArrayMax = 0;
  (this->RepeatCountResetSchedule).StringTableType = None;
  (this->RepeatCountResetSchedule).StringTableID = 0;
  (this->RepeatCountResetSchedule).StringEnumTableNameID.ComparisonIndex = 0;
  (this->RepeatCountResetSchedule).StringEnumTableNameID.Number = 0;
  (this->RepeatCountResetSchedule).DateTime.Ticks = 0;
  (this->RepeatCountResetSchedule).TimeSpan.Ticks = 0;
  (this->RepeatCountResetSchedule).TimeExpressionType = None;
  (this->RepeatCountResetSchedule).IsExpression = false;
  (this->RepeatCountResetSchedule).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RepeatCountResetSchedule).UniqueString.Data.ArrayNum = 0;
  (this->RepeatCountResetSchedule).UniqueString.Data.ArrayMax = 0;
  (this->RepeatCountResetSchedule).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RepeatCountResetSchedule).FormatArgs.ArrayNum = 0;
  (this->RepeatCountResetSchedule).FormatArgs.ArrayMax = 0;
  (this->DayRepeatCount).StringTableType = None;
  return this;
}

// ~UDS_VM_QuestRepeatData @ 14b6cd090

void __thiscall UDS_VM_QuestRepeatData::~UDS_VM_QuestRepeatData(UDS_VM_QuestRepeatData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestRepeatData__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->RepeatCountResetSchedule).FormatArgs.AllocatorInstance.Data
             ,(this->RepeatCountResetSchedule).FormatArgs.ArrayNum);
  pFVar1 = (this->RepeatCountResetSchedule).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RepeatCountResetSchedule).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->DayRepeatCount).FormatArgs.AllocatorInstance.Data,
             (this->DayRepeatCount).FormatArgs.ArrayNum);
  pFVar1 = (this->DayRepeatCount).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DayRepeatCount).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6cfe60

IClassDescriptor * __thiscall
UDS_VM_QuestRepeatData::GetFieldNotificationDescriptor(UDS_VM_QuestRepeatData *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_QuestRepeatData::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6d0e40

UClass * __cdecl UDS_VM_QuestRepeatData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestRepeatData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestRepeatData",
               &Z_Registration_Info_UClass_UDS_VM_QuestRepeatData.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestRepeatData,0x140,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_QuestRepeatData>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestRepeatData>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestRepeatData.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_QuestRepeatData @ 14b6d1130

void __cdecl UDS_VM_QuestRepeatData::StaticRegisterNativesUDS_VM_QuestRepeatData(void)

{
  return;
}

// BindModel @ 14bf41f80

void __thiscall UDS_VM_QuestRepeatData::BindModel(UDS_VM_QuestRepeatData *this)

{
  UDS_QuestEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_QuestEvent::GetEvent();
  if (pUVar1 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnCompleteQuestDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_QuestRepeatData>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnCompleteQuestDelegate,(UDS_VM_QuestRepeatData *)&stack0x00000010,
               (pmf_c10288a4 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnQuestRepeatResetDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_QuestRepeatData>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnQuestRepeatResetDelegate,(UDS_VM_QuestRepeatData *)&stack0x00000010,
               (pmf_d7d8dbe2 *)this);
  }
  return;
}

// InitViewModel @ 14bf5b6c0

void __thiscall UDS_VM_QuestRepeatData::InitViewModel(UDS_VM_QuestRepeatData *this)

{
  return;
}

// OnQuestComplete @ 14bf66770

void __thiscall UDS_VM_QuestRepeatData::OnQuestComplete(UDS_VM_QuestRepeatData *this,int param_1)

{
  int *piVar1;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar2;
  FInstancedStruct *pFVar3;
  FObjectPtr_u_0 FVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  UDS_QuestManager *this_00;
  FObjectPtr_u_0 *pFVar8;
  FDS_Int32StringFormatArg *pFVar9;
  FName FStack_28;
  int iStack_20;
  
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 != (UDS_QuestManager *)0x0) {
    iVar5 = UDS_QuestManager::GetTotalQuestRepeatCount(this_00);
    iVar6 = DS_CommonDataHelper::RepeatQuestDailyCount();
    (this->DayRepeatCount).StringTableType = StringUi;
    pTVar2 = &(this->DayRepeatCount).FormatArgs;
    (this->DayRepeatCount).StringTableID = 0xec67;
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)(pTVar2->AllocatorInstance).Data,
               (this->DayRepeatCount).FormatArgs.ArrayNum);
    piVar1 = &(this->DayRepeatCount).FormatArgs.ArrayMax;
    (this->DayRepeatCount).FormatArgs.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
    iVar7 = (this->DayRepeatCount).FormatArgs.ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->DayRepeatCount).FormatArgs.ArrayNum = iVar7 + 1;
    pFVar3 = (FInstancedStruct *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x28);
    FInstancedStruct::FInstancedStruct(pFVar3);
    pFVar8 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
    FVar4 = pFVar8[1];
    pFVar3[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar8;
    pFVar3[1].StructMemory = (uchar *)FVar4;
    pFVar3[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar8[2];
    FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar3);
    pFVar9 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar3);
    if (pFVar9 != (FDS_Int32StringFormatArg *)0x0) {
      pFVar9->Value = iVar5;
    }
    iVar5 = (this->DayRepeatCount).FormatArgs.ArrayNum;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->DayRepeatCount).FormatArgs.ArrayNum = iVar5 + 1;
    pFVar3 = (FInstancedStruct *)((pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 0x28);
    FInstancedStruct::FInstancedStruct(pFVar3);
    pFVar8 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
    FVar4 = pFVar8[1];
    pFVar3[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar8;
    pFVar3[1].StructMemory = (uchar *)FVar4;
    pFVar3[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar8[2];
    FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar3);
    pFVar9 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar3);
    if (pFVar9 != (FDS_Int32StringFormatArg *)0x0) {
      pFVar9->Value = iVar6;
    }
  }
  iStack_20 = FFieldNotificationClassDescriptor::DayRepeatCount.BitNumber;
  FStack_28 = FFieldNotificationClassDescriptor::DayRepeatCount.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_28);
  return;
}

// OnQuestRepeatReset @ 14bf667f0

void __thiscall UDS_VM_QuestRepeatData::OnQuestRepeatReset(UDS_VM_QuestRepeatData *this)

{
  int *piVar1;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar2;
  FInstancedStruct *pFVar3;
  FObjectPtr_u_0 FVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  UDS_QuestManager *this_00;
  FObjectPtr_u_0 *pFVar8;
  FDS_Int32StringFormatArg *pFVar9;
  FName FStack_28;
  int iStack_20;
  
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 != (UDS_QuestManager *)0x0) {
    iVar5 = UDS_QuestManager::GetTotalQuestRepeatCount(this_00);
    iVar6 = DS_CommonDataHelper::RepeatQuestDailyCount();
    (this->DayRepeatCount).StringTableType = StringUi;
    pTVar2 = &(this->DayRepeatCount).FormatArgs;
    (this->DayRepeatCount).StringTableID = 0xec67;
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)(pTVar2->AllocatorInstance).Data,
               (this->DayRepeatCount).FormatArgs.ArrayNum);
    piVar1 = &(this->DayRepeatCount).FormatArgs.ArrayMax;
    (this->DayRepeatCount).FormatArgs.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
    iVar7 = (this->DayRepeatCount).FormatArgs.ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->DayRepeatCount).FormatArgs.ArrayNum = iVar7 + 1;
    pFVar3 = (FInstancedStruct *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x28);
    FInstancedStruct::FInstancedStruct(pFVar3);
    pFVar8 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
    FVar4 = pFVar8[1];
    pFVar3[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar8;
    pFVar3[1].StructMemory = (uchar *)FVar4;
    pFVar3[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar8[2];
    FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar3);
    pFVar9 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar3);
    if (pFVar9 != (FDS_Int32StringFormatArg *)0x0) {
      pFVar9->Value = iVar5;
    }
    iVar5 = (this->DayRepeatCount).FormatArgs.ArrayNum;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->DayRepeatCount).FormatArgs.ArrayNum = iVar5 + 1;
    pFVar3 = (FInstancedStruct *)((pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 0x28);
    FInstancedStruct::FInstancedStruct(pFVar3);
    pFVar8 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
    FVar4 = pFVar8[1];
    pFVar3[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar8;
    pFVar3[1].StructMemory = (uchar *)FVar4;
    pFVar3[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar8[2];
    FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar3);
    pFVar9 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar3);
    if (pFVar9 != (FDS_Int32StringFormatArg *)0x0) {
      pFVar9->Value = iVar6;
    }
  }
  iStack_20 = FFieldNotificationClassDescriptor::DayRepeatCount.BitNumber;
  FStack_28 = FFieldNotificationClassDescriptor::DayRepeatCount.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_28);
  return;
}

// OnSetViewModel @ 14bf6cd60

void __thiscall
UDS_VM_QuestRepeatData::OnSetViewModel
          (UDS_VM_QuestRepeatData *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int *piVar1;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FString *pFVar4;
  FDateTime local_res10;
  FString local_28;
  
  if (param_1->Object != (FDS_ViewModelContext *)0x0) {
    SetDayRepeatCount(this);
    DS_CommonDataHelper::QuestRepeatTimeScheduler();
    UDS_TimeUtilManager::GetCronExpressionTime((int)&local_res10);
    pFVar4 = UDS_TimeUtilManager::ConvertStringFromDateTime(&local_28,&local_res10,HourMin,false);
    (this->RepeatCountResetSchedule).StringTableType = StringUi;
    pTVar2 = &(this->RepeatCountResetSchedule).FormatArgs;
    (this->RepeatCountResetSchedule).StringTableID = 0xec68;
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)(pTVar2->AllocatorInstance).Data,
               (this->RepeatCountResetSchedule).FormatArgs.ArrayNum);
    piVar1 = &(this->RepeatCountResetSchedule).FormatArgs.ArrayMax;
    (this->RepeatCountResetSchedule).FormatArgs.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
    iVar3 = (this->RepeatCountResetSchedule).FormatArgs.ArrayNum;
    if (iVar3 == *piVar1) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->RepeatCountResetSchedule).FormatArgs.ArrayNum = iVar3 + 1;
    FDS_TextFormatArg::FDS_TextFormatArg<FString>
              ((FDS_TextFormatArg *)((pTVar2->AllocatorInstance).Data + (longlong)iVar3 * 0x28),
               pFVar4);
    if ((FName)local_28.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    local_28.Data.ArrayNum = FFieldNotificationClassDescriptor::RepeatCountResetSchedule.BitNumber;
    local_28.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)
         FFieldNotificationClassDescriptor::RepeatCountResetSchedule.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetDayRepeatCount @ 14bf7a510

void __thiscall UDS_VM_QuestRepeatData::SetDayRepeatCount(UDS_VM_QuestRepeatData *this)

{
  int *piVar1;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar2;
  FInstancedStruct *pFVar3;
  FObjectPtr_u_0 FVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  UDS_QuestManager *this_00;
  FObjectPtr_u_0 *pFVar8;
  FDS_Int32StringFormatArg *pFVar9;
  FName local_28;
  int local_20;
  
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 != (UDS_QuestManager *)0x0) {
    iVar5 = UDS_QuestManager::GetTotalQuestRepeatCount(this_00);
    iVar6 = DS_CommonDataHelper::RepeatQuestDailyCount();
    (this->DayRepeatCount).StringTableType = StringUi;
    pTVar2 = &(this->DayRepeatCount).FormatArgs;
    (this->DayRepeatCount).StringTableID = 0xec67;
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)(pTVar2->AllocatorInstance).Data,
               (this->DayRepeatCount).FormatArgs.ArrayNum);
    piVar1 = &(this->DayRepeatCount).FormatArgs.ArrayMax;
    (this->DayRepeatCount).FormatArgs.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
    iVar7 = (this->DayRepeatCount).FormatArgs.ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->DayRepeatCount).FormatArgs.ArrayNum = iVar7 + 1;
    pFVar3 = (FInstancedStruct *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x28);
    FInstancedStruct::FInstancedStruct(pFVar3);
    pFVar8 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
    FVar4 = pFVar8[1];
    pFVar3[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar8;
    pFVar3[1].StructMemory = (uchar *)FVar4;
    pFVar3[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar8[2];
    FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar3);
    pFVar9 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar3);
    if (pFVar9 != (FDS_Int32StringFormatArg *)0x0) {
      pFVar9->Value = iVar5;
    }
    iVar5 = (this->DayRepeatCount).FormatArgs.ArrayNum;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->DayRepeatCount).FormatArgs.ArrayNum = iVar5 + 1;
    pFVar3 = (FInstancedStruct *)((pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 0x28);
    FInstancedStruct::FInstancedStruct(pFVar3);
    pFVar8 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
    FVar4 = pFVar8[1];
    pFVar3[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar8;
    pFVar3[1].StructMemory = (uchar *)FVar4;
    pFVar3[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar8[2];
    FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar3);
    pFVar9 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar3);
    if (pFVar9 != (FDS_Int32StringFormatArg *)0x0) {
      pFVar9->Value = iVar6;
    }
  }
  local_20 = FFieldNotificationClassDescriptor::DayRepeatCount.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::DayRepeatCount.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  return;
}

// SetRepeatCountResetSchedule @ 14bf7d2b0

void __thiscall UDS_VM_QuestRepeatData::SetRepeatCountResetSchedule(UDS_VM_QuestRepeatData *this)

{
  int *piVar1;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FString *pFVar4;
  FDateTime local_res8;
  FString local_18;
  
  DS_CommonDataHelper::QuestRepeatTimeScheduler();
  UDS_TimeUtilManager::GetCronExpressionTime((int)&local_res8);
  pFVar4 = UDS_TimeUtilManager::ConvertStringFromDateTime(&local_18,&local_res8,HourMin,false);
  (this->RepeatCountResetSchedule).StringTableType = StringUi;
  pTVar2 = &(this->RepeatCountResetSchedule).FormatArgs;
  (this->RepeatCountResetSchedule).StringTableID = 0xec68;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(pTVar2->AllocatorInstance).Data,
             (this->RepeatCountResetSchedule).FormatArgs.ArrayNum);
  piVar1 = &(this->RepeatCountResetSchedule).FormatArgs.ArrayMax;
  (this->RepeatCountResetSchedule).FormatArgs.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  iVar3 = (this->RepeatCountResetSchedule).FormatArgs.ArrayNum;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->RepeatCountResetSchedule).FormatArgs.ArrayNum = iVar3 + 1;
  FDS_TextFormatArg::FDS_TextFormatArg<FString>
            ((FDS_TextFormatArg *)((pTVar2->AllocatorInstance).Data + (longlong)iVar3 * 0x28),pFVar4
            );
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_18.Data.ArrayNum = FFieldNotificationClassDescriptor::RepeatCountResetSchedule.BitNumber;
  local_18.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)
       FFieldNotificationClassDescriptor::RepeatCountResetSchedule.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bf854c0

void __thiscall UDS_VM_QuestRepeatData::UnbindModel(UDS_VM_QuestRepeatData *this)

{
  UDS_QuestEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_QuestEvent::GetEvent();
  if (pUVar1 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnCompleteQuestDelegate,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnQuestRepeatResetDelegate,this);
  }
  return;
}

