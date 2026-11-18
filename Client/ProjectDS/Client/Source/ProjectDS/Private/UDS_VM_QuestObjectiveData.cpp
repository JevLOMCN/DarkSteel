// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// StaticClass @ 14b6c6aa0

UClass * __cdecl UDS_VM_QuestObjectiveData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestObjectiveData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestObjectiveData",
               &Z_Registration_Info_UClass_UDS_VM_QuestObjectiveData.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestObjectiveData,0x1f0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_QuestObjectiveData>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestObjectiveData>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestObjectiveData.InnerSingleton;
}

// UDS_VM_QuestObjectiveData @ 14b6cb350

UDS_VM_QuestObjectiveData * __thiscall
UDS_VM_QuestObjectiveData::UDS_VM_QuestObjectiveData
          (UDS_VM_QuestObjectiveData *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestObjectiveData__6B_;
  (this->ObjectiveName).StringTableID = 0;
  (this->ObjectiveName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ObjectiveName).StringEnumTableNameID.Number = 0;
  (this->ObjectiveName).DateTime.Ticks = 0;
  (this->ObjectiveName).TimeSpan.Ticks = 0;
  (this->ObjectiveName).TimeExpressionType = None;
  (this->ObjectiveName).IsExpression = false;
  (this->ObjectiveName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectiveName).UniqueString.Data.ArrayNum = 0;
  (this->ObjectiveName).UniqueString.Data.ArrayMax = 0;
  (this->ObjectiveName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectiveName).FormatArgs.ArrayNum = 0;
  (this->ObjectiveName).FormatArgs.ArrayMax = 0;
  (this->ObjectiveCount).StringTableType = None;
  (this->ObjectiveCount).StringTableID = 0;
  (this->ObjectiveCount).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ObjectiveCount).StringEnumTableNameID.Number = 0;
  (this->ObjectiveCount).DateTime.Ticks = 0;
  (this->ObjectiveCount).TimeSpan.Ticks = 0;
  (this->ObjectiveCount).TimeExpressionType = None;
  (this->ObjectiveCount).IsExpression = false;
  (this->ObjectiveCount).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectiveCount).UniqueString.Data.ArrayNum = 0;
  (this->ObjectiveCount).UniqueString.Data.ArrayMax = 0;
  (this->ObjectiveCount).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectiveCount).FormatArgs.ArrayNum = 0;
  (this->ObjectiveCount).FormatArgs.ArrayMax = 0;
  (this->ObjectiveProgressCount).StringTableType = None;
  (this->ObjectiveProgressCount).StringTableID = 0;
  (this->ObjectiveProgressCount).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ObjectiveProgressCount).StringEnumTableNameID.Number = 0;
  (this->ObjectiveProgressCount).DateTime.Ticks = 0;
  (this->ObjectiveProgressCount).TimeSpan.Ticks = 0;
  (this->ObjectiveProgressCount).TimeExpressionType = None;
  (this->ObjectiveProgressCount).IsExpression = false;
  (this->ObjectiveProgressCount).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ObjectiveProgressCount).UniqueString.Data.ArrayNum = 0;
  (this->ObjectiveProgressCount).UniqueString.Data.ArrayMax = 0;
  (this->ObjectiveProgressCount).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectiveProgressCount).FormatArgs.ArrayNum = 0;
  (this->ObjectiveProgressCount).FormatArgs.ArrayMax = 0;
  (this->ObjectiveProgressZone).StringTableType = None;
  (this->ObjectiveProgressZone).StringTableID = 0;
  (this->ObjectiveProgressZone).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ObjectiveProgressZone).StringEnumTableNameID.Number = 0;
  (this->ObjectiveProgressZone).DateTime.Ticks = 0;
  (this->ObjectiveProgressZone).TimeSpan.Ticks = 0;
  (this->ObjectiveProgressZone).TimeExpressionType = None;
  (this->ObjectiveProgressZone).IsExpression = false;
  (this->ObjectiveProgressZone).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ObjectiveProgressZone).UniqueString.Data.ArrayNum = 0;
  (this->ObjectiveProgressZone).UniqueString.Data.ArrayMax = 0;
  (this->ObjectiveProgressZone).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectiveProgressZone).FormatArgs.ArrayNum = 0;
  (this->ObjectiveProgressZone).FormatArgs.ArrayMax = 0;
  this->ObjectiveStateWidgetIndex = 0;
  this->QuestID = 0;
  this->QuestObjectiveID = 0;
  (this->ObjectiveName).StringTableType = None;
  return this;
}

// UDS_VM_QuestObjectiveData @ 14b6cb4d0

UDS_VM_QuestObjectiveData * __thiscall
UDS_VM_QuestObjectiveData::UDS_VM_QuestObjectiveData
          (UDS_VM_QuestObjectiveData *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestObjectiveData__6B_;
  (this->ObjectiveName).StringTableID = 0;
  (this->ObjectiveName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ObjectiveName).StringEnumTableNameID.Number = 0;
  (this->ObjectiveName).DateTime.Ticks = 0;
  (this->ObjectiveName).TimeSpan.Ticks = 0;
  (this->ObjectiveName).TimeExpressionType = None;
  (this->ObjectiveName).IsExpression = false;
  (this->ObjectiveName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectiveName).UniqueString.Data.ArrayNum = 0;
  (this->ObjectiveName).UniqueString.Data.ArrayMax = 0;
  (this->ObjectiveName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectiveName).FormatArgs.ArrayNum = 0;
  (this->ObjectiveName).FormatArgs.ArrayMax = 0;
  (this->ObjectiveCount).StringTableType = None;
  (this->ObjectiveCount).StringTableID = 0;
  (this->ObjectiveCount).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ObjectiveCount).StringEnumTableNameID.Number = 0;
  (this->ObjectiveCount).DateTime.Ticks = 0;
  (this->ObjectiveCount).TimeSpan.Ticks = 0;
  (this->ObjectiveCount).TimeExpressionType = None;
  (this->ObjectiveCount).IsExpression = false;
  (this->ObjectiveCount).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectiveCount).UniqueString.Data.ArrayNum = 0;
  (this->ObjectiveCount).UniqueString.Data.ArrayMax = 0;
  (this->ObjectiveCount).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectiveCount).FormatArgs.ArrayNum = 0;
  (this->ObjectiveCount).FormatArgs.ArrayMax = 0;
  (this->ObjectiveProgressCount).StringTableType = None;
  (this->ObjectiveProgressCount).StringTableID = 0;
  (this->ObjectiveProgressCount).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ObjectiveProgressCount).StringEnumTableNameID.Number = 0;
  (this->ObjectiveProgressCount).DateTime.Ticks = 0;
  (this->ObjectiveProgressCount).TimeSpan.Ticks = 0;
  (this->ObjectiveProgressCount).TimeExpressionType = None;
  (this->ObjectiveProgressCount).IsExpression = false;
  (this->ObjectiveProgressCount).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ObjectiveProgressCount).UniqueString.Data.ArrayNum = 0;
  (this->ObjectiveProgressCount).UniqueString.Data.ArrayMax = 0;
  (this->ObjectiveProgressCount).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectiveProgressCount).FormatArgs.ArrayNum = 0;
  (this->ObjectiveProgressCount).FormatArgs.ArrayMax = 0;
  (this->ObjectiveProgressZone).StringTableType = None;
  (this->ObjectiveProgressZone).StringTableID = 0;
  (this->ObjectiveProgressZone).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ObjectiveProgressZone).StringEnumTableNameID.Number = 0;
  (this->ObjectiveProgressZone).DateTime.Ticks = 0;
  (this->ObjectiveProgressZone).TimeSpan.Ticks = 0;
  (this->ObjectiveProgressZone).TimeExpressionType = None;
  (this->ObjectiveProgressZone).IsExpression = false;
  (this->ObjectiveProgressZone).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ObjectiveProgressZone).UniqueString.Data.ArrayNum = 0;
  (this->ObjectiveProgressZone).UniqueString.Data.ArrayMax = 0;
  (this->ObjectiveProgressZone).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectiveProgressZone).FormatArgs.ArrayNum = 0;
  (this->ObjectiveProgressZone).FormatArgs.ArrayMax = 0;
  this->ObjectiveStateWidgetIndex = 0;
  this->QuestID = 0;
  this->QuestObjectiveID = 0;
  (this->ObjectiveName).StringTableType = None;
  return this;
}

// ~UDS_VM_QuestObjectiveData @ 14b6ccc80

void __thiscall
UDS_VM_QuestObjectiveData::~UDS_VM_QuestObjectiveData(UDS_VM_QuestObjectiveData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestObjectiveData__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ObjectiveProgressZone).FormatArgs.AllocatorInstance.Data,
             (this->ObjectiveProgressZone).FormatArgs.ArrayNum);
  pFVar1 = (this->ObjectiveProgressZone).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ObjectiveProgressZone).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ObjectiveProgressCount).FormatArgs.AllocatorInstance.Data,
             (this->ObjectiveProgressCount).FormatArgs.ArrayNum);
  pFVar1 = (this->ObjectiveProgressCount).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ObjectiveProgressCount).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ObjectiveCount).FormatArgs.AllocatorInstance.Data,
             (this->ObjectiveCount).FormatArgs.ArrayNum);
  pFVar1 = (this->ObjectiveCount).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ObjectiveCount).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ObjectiveName).FormatArgs.AllocatorInstance.Data,
             (this->ObjectiveName).FormatArgs.ArrayNum);
  pFVar1 = (this->ObjectiveName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ObjectiveName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6cfca0

IClassDescriptor * __thiscall
UDS_VM_QuestObjectiveData::GetFieldNotificationDescriptor(UDS_VM_QuestObjectiveData *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_QuestObjectiveData::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6d0b40

UClass * __cdecl UDS_VM_QuestObjectiveData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestObjectiveData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestObjectiveData",
               &Z_Registration_Info_UClass_UDS_VM_QuestObjectiveData.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestObjectiveData,0x1f0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_QuestObjectiveData>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestObjectiveData>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestObjectiveData.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_QuestObjectiveData @ 14b6d10f0

void __cdecl UDS_VM_QuestObjectiveData::StaticRegisterNativesUDS_VM_QuestObjectiveData(void)

{
  return;
}

// __VTableCtorCaller @ 14b6d20a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_QuestObjectiveData::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_ViewModelBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UDS_ViewModelBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_ViewModelBase *)0x0) {
    UDS_ViewModelBase::UDS_ViewModelBase(this,param_1);
    this[3]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_QuestObjectiveData__6B_;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    *(undefined4 *)&this[1].ViewModelContext.SharedReferenceCount.ReferenceController = 0;
    *(undefined1 *)
     ((longlong)&this[1].ViewModelContext.SharedReferenceCount.ReferenceController + 4) = 0;
    this[1].Visibility = Visible;
    *(undefined3 *)&this[1].field_0x81 = 0;
    this[1].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[1].VMName.Number = 0;
    this[1].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].TextPropertyIDList.ArrayNum = 0;
    this[1].TextPropertyIDList.ArrayMax = 0;
    *(undefined1 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    *(undefined4 *)&this[2].ViewModelContext.SharedReferenceCount.ReferenceController = 0;
    *(undefined1 *)
     ((longlong)&this[2].ViewModelContext.SharedReferenceCount.ReferenceController + 4) = 0;
    this[2].Visibility = Visible;
    *(undefined3 *)&this[2].field_0x81 = 0;
    this[2].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[2].VMName.Number = 0;
    this[2].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].TextPropertyIDList.ArrayNum = 0;
    this[2].TextPropertyIDList.ArrayMax = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// OnSetViewModel @ 14be3d0f0

void __thiscall
UDS_VM_QuestObjectiveData::OnSetViewModel
          (UDS_VM_QuestObjectiveData *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int *piVar1;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar2;
  FInstancedStruct *this_00;
  TReferenceControllerBase<1> *pTVar3;
  long64 lVar4;
  FObjectPtr_u_0 FVar5;
  FName FVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  UDS_QuestEvent *pUVar10;
  FDS_QuestObjectiveTableRow *pFVar11;
  FDS_ZoneBaseTableRow *this_01;
  FDS_StringWorldTableRow *pFVar12;
  FObjectPtr_u_0 *pFVar13;
  FDS_StringWorldIDFormatArg *pFVar14;
  UDS_QuestData *this_02;
  FWeakObjectPtr local_res10 [2];
  FName local_88;
  int local_80;
  FName local_78;
  int local_70;
  FName local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TSharedPtr<FDS_ViewModelContext_QuestObjectiveData,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  FName local_38;
  undefined8 uStack_30;
  
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_48.Object = param_1->Object;
  local_48.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_QuestObjectiveData>(&local_58,&local_48);
  if (local_58.Object != (FDS_ViewModelContext_QuestObjectiveData *)0x0) {
    this->QuestID = (local_58.Object)->QuestID;
    this->QuestObjectiveID = (local_58.Object)->QuestObjectiveID;
    pUVar10 = UDS_QuestEvent::GetEvent();
    if (pUVar10 != (UDS_QuestEvent *)0x0) {
      iStack_60 = 0;
      local_68 = (FName)OnUpdateQuestData;
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pUVar10->OnUpdateQuestDataDelegate,this);
      uStack_30 = CONCAT44(uStack_5c,iStack_60);
      local_38 = local_68;
      TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
      AddUObject<UDS_VM_QuestObjectiveData>
                ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
                 &pUVar10->OnUpdateQuestDataDelegate,(UDS_VM_QuestObjectiveData *)(local_res10 + 1),
                 (pmf_3aa954ee *)this);
    }
    FDS_Text::Reset(&this->ObjectiveName);
    if (0 < this->QuestObjectiveID) {
      pFVar11 = FDS_QuestObjectiveTableRow::GetRef((longlong)this->QuestObjectiveID,true);
      bVar8 = FDS_QuestObjectiveTableRow::IsValid(pFVar11);
      if (bVar8) {
        FDS_Text::SetTextFromStringID(&this->ObjectiveName,&pFVar11->ID_QuestObjectiveId);
      }
    }
    local_80 = FFieldNotificationClassDescriptor::ObjectiveName.BitNumber;
    local_88 = FFieldNotificationClassDescriptor::ObjectiveName.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
    SetObjectiveCount(this);
    SetObjectiveProgressCount(this);
    FDS_Text::Reset(&this->ObjectiveProgressZone);
    if (0 < this->QuestObjectiveID) {
      pFVar11 = FDS_QuestObjectiveTableRow::GetRef((longlong)this->QuestObjectiveID,true);
      bVar8 = FDS_QuestObjectiveTableRow::IsValid(pFVar11);
      if (bVar8) {
        this_01 = FDS_ZoneBaseTableRow::GetRef((longlong)pFVar11->ID_ProgressZone,true);
        bVar8 = FDS_ZoneBaseTableRow::IsValid(this_01);
        if (bVar8) {
          pFVar12 = FDS_ZoneBaseTableRow::ID_ZoneNameTable(this_01);
          pTVar2 = &(this->ObjectiveProgressZone).FormatArgs;
          lVar4 = pFVar12->ID;
          (this->ObjectiveProgressZone).StringTableType = StringUi;
          (this->ObjectiveProgressZone).StringTableID = 0xeaa9;
          DestructItems<FDS_TextFormatArg,int>
                    ((FDS_TextFormatArg *)(pTVar2->AllocatorInstance).Data,
                     (this->ObjectiveProgressZone).FormatArgs.ArrayNum);
          piVar1 = &(this->ObjectiveProgressZone).FormatArgs.ArrayMax;
          (this->ObjectiveProgressZone).FormatArgs.ArrayNum = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,0,&pTVar2->AllocatorInstance,0,piVar1);
          }
          iVar9 = (this->ObjectiveProgressZone).FormatArgs.ArrayNum;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x828,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->ObjectiveProgressZone).FormatArgs.ArrayNum = iVar9 + 1;
          this_00 = (FInstancedStruct *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x28);
          FInstancedStruct::FInstancedStruct(this_00);
          pFVar13 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
          FVar5 = pFVar13[1];
          this_00[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar13;
          this_00[1].StructMemory = (uchar *)FVar5;
          this_00[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar13[2];
          FInstancedStruct::InitializeAs<FDS_StringWorldIDFormatArg>(this_00);
          pFVar14 = FInstancedStruct::GetMutablePtr<FDS_StringWorldIDFormatArg>(this_00);
          if (pFVar14 != (FDS_StringWorldIDFormatArg *)0x0) {
            (pFVar14->Value).ID = lVar4;
          }
        }
      }
    }
    local_70 = FFieldNotificationClassDescriptor::ObjectiveProgressZone.BitNumber;
    local_78 = FFieldNotificationClassDescriptor::ObjectiveProgressZone.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
    iVar9 = 0;
    if (0 < this->QuestObjectiveID) {
      UDS_QuestData::GetData
                ((ulong64)local_res10,UDS_PlayerData::MainPlayerEntityID,SUB41(this->QuestID,0));
      bVar8 = FWeakObjectPtr::IsValid(local_res10);
      iVar9 = 0;
      if (bVar8) {
        this_02 = (UDS_QuestData *)FWeakObjectPtr::Get(local_res10);
        bVar8 = UDS_QuestData::IsGoalQuestObjective(this_02,this->QuestObjectiveID);
        iVar9 = 0;
        if (bVar8) {
          iVar9 = 1;
        }
      }
    }
    iVar7 = FFieldNotificationClassDescriptor::ObjectiveStateWidgetIndex.BitNumber;
    FVar6 = FFieldNotificationClassDescriptor::ObjectiveStateWidgetIndex.FieldName;
    if (this->ObjectiveStateWidgetIndex != iVar9) {
      this->ObjectiveStateWidgetIndex = iVar9;
      iStack_60 = iVar7;
      local_68 = FVar6;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdateQuestData @ 14be451c0

void __thiscall
UDS_VM_QuestObjectiveData::OnUpdateQuestData(UDS_VM_QuestObjectiveData *this,int param_1)

{
  int *piVar1;
  FDS_Text *this_00;
  FInstancedStruct *pFVar2;
  FObjectPtr_u_0 FVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FDS_QuestObjectiveTableRow *this_01;
  UDS_QuestManager *this_02;
  UDS_QuestData *this_03;
  FObjectPtr_u_0 *pFVar7;
  FDS_Int32StringFormatArg *pFVar8;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar9;
  FWeakObjectPtr FStackX_8;
  FName FStack_28;
  int iStack_20;
  
  if (this->QuestID == param_1) {
    this_01 = FDS_QuestObjectiveTableRow::GetRef((longlong)this->QuestObjectiveID,true);
    bVar4 = FDS_QuestObjectiveTableRow::IsValid(this_01);
    if ((bVar4) && (this_02 = UDS_QuestManager::GetInst(), this_02 != (UDS_QuestManager *)0x0)) {
      this_00 = &this->ObjectiveProgressCount;
      FDS_Text::Reset(this_00);
      bVar4 = UDS_QuestManager::IsQuestCompleted(this_02,this->QuestID);
      if (bVar4) {
        FDS_Text::SetTextFromStringTable(this_00,StringUi,0xeb35);
      }
      else {
        iVar5 = 0;
        UDS_QuestData::GetData
                  ((ulong64)&FStackX_8,UDS_PlayerData::MainPlayerEntityID,SUB41(this->QuestID,0));
        bVar4 = FWeakObjectPtr::IsValid(&FStackX_8);
        if (bVar4) {
          this_03 = (UDS_QuestData *)FWeakObjectPtr::Get(&FStackX_8);
          iVar5 = UDS_QuestData::GetObjectiveProgressCount(this_03,this->QuestObjectiveID);
        }
        if (this_01->IsCountIndication == true) {
          this_00->StringTableType = StringUi;
          (this->ObjectiveProgressCount).StringTableID = 0xeac8;
          pTVar9 = &(this->ObjectiveProgressCount).FormatArgs;
          DestructItems<FDS_TextFormatArg,int>
                    ((FDS_TextFormatArg *)(pTVar9->AllocatorInstance).Data,
                     (this->ObjectiveProgressCount).FormatArgs.ArrayNum);
          piVar1 = &(this->ObjectiveProgressCount).FormatArgs.ArrayMax;
          (this->ObjectiveProgressCount).FormatArgs.ArrayNum = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,0,&pTVar9->AllocatorInstance,0,piVar1);
          }
          iVar6 = (this->ObjectiveProgressCount).FormatArgs.ArrayNum;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x828,&pTVar9->AllocatorInstance,piVar1);
          }
          (this->ObjectiveProgressCount).FormatArgs.ArrayNum = iVar6 + 1;
          pFVar2 = (FInstancedStruct *)((pTVar9->AllocatorInstance).Data + (longlong)iVar6 * 0x28);
          FInstancedStruct::FInstancedStruct(pFVar2);
          pFVar7 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
          FVar3 = pFVar7[1];
          pFVar2[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar7;
          pFVar2[1].StructMemory = (uchar *)FVar3;
          pFVar2[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar7[2];
          FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar2);
          pFVar8 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar2);
          if (pFVar8 != (FDS_Int32StringFormatArg *)0x0) {
            pFVar8->Value = iVar5;
          }
          iVar5 = (this->ObjectiveProgressCount).FormatArgs.ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x828,&pTVar9->AllocatorInstance,piVar1);
          }
          (this->ObjectiveProgressCount).FormatArgs.ArrayNum = iVar5 + 1;
          pFVar2 = (FInstancedStruct *)((pTVar9->AllocatorInstance).Data + (longlong)iVar5 * 0x28);
          FInstancedStruct::FInstancedStruct(pFVar2);
          pFVar7 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
          FVar3 = pFVar7[1];
          pFVar2[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar7;
          pFVar2[1].StructMemory = (uchar *)FVar3;
          pFVar2[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar7[2];
          FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar2);
          pFVar8 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar2);
          if (pFVar8 != (FDS_Int32StringFormatArg *)0x0) {
            pFVar8->Value = this_01->QuestDefineCount;
          }
        }
      }
      iStack_20 = FFieldNotificationClassDescriptor::ObjectiveProgressCount.BitNumber;
      FStack_28 = FFieldNotificationClassDescriptor::ObjectiveProgressCount.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_28);
    }
    return;
  }
  return;
}

// SetObjectiveCount @ 14be4e970

void __thiscall UDS_VM_QuestObjectiveData::SetObjectiveCount(UDS_VM_QuestObjectiveData *this)

{
  int *piVar1;
  FInstancedStruct *pFVar2;
  FObjectPtr_u_0 FVar3;
  bool bVar4;
  int iVar5;
  FDS_QuestObjectiveTableRow *this_00;
  FObjectPtr_u_0 *pFVar6;
  FDS_Int32StringFormatArg *pFVar7;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar8;
  FName local_18;
  int local_10;
  
  FDS_Text::Reset(&this->ObjectiveCount);
  if (0 < this->QuestObjectiveID) {
    this_00 = FDS_QuestObjectiveTableRow::GetRef((longlong)this->QuestObjectiveID,true);
    bVar4 = FDS_QuestObjectiveTableRow::IsValid(this_00);
    if ((bVar4) && (this_00->IsCountIndication == true)) {
      (this->ObjectiveCount).StringTableType = StringUi;
      (this->ObjectiveCount).StringTableID = 0xeac8;
      pTVar8 = &(this->ObjectiveCount).FormatArgs;
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)(pTVar8->AllocatorInstance).Data,
                 (this->ObjectiveCount).FormatArgs.ArrayNum);
      iVar5 = (this->ObjectiveCount).FormatArgs.ArrayMax;
      piVar1 = &(this->ObjectiveCount).FormatArgs.ArrayMax;
      (this->ObjectiveCount).FormatArgs.ArrayNum = 0;
      if (iVar5 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,&pTVar8->AllocatorInstance,0,piVar1);
      }
      iVar5 = (this->ObjectiveCount).FormatArgs.ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&pTVar8->AllocatorInstance,piVar1);
      }
      (this->ObjectiveCount).FormatArgs.ArrayNum = iVar5 + 1;
      pFVar2 = (FInstancedStruct *)((pTVar8->AllocatorInstance).Data + (longlong)iVar5 * 0x28);
      FInstancedStruct::FInstancedStruct(pFVar2);
      pFVar6 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
      FVar3 = pFVar6[1];
      pFVar2[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar6;
      pFVar2[1].StructMemory = (uchar *)FVar3;
      pFVar2[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar6[2];
      FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar2);
      pFVar7 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar2);
      if (pFVar7 != (FDS_Int32StringFormatArg *)0x0) {
        pFVar7->Value = 0;
      }
      iVar5 = (this->ObjectiveCount).FormatArgs.ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&pTVar8->AllocatorInstance,piVar1);
      }
      (this->ObjectiveCount).FormatArgs.ArrayNum = iVar5 + 1;
      pFVar2 = (FInstancedStruct *)((pTVar8->AllocatorInstance).Data + (longlong)iVar5 * 0x28);
      FInstancedStruct::FInstancedStruct(pFVar2);
      pFVar6 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
      FVar3 = pFVar6[1];
      pFVar2[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar6;
      pFVar2[1].StructMemory = (uchar *)FVar3;
      pFVar2[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar6[2];
      FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar2);
      pFVar7 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar2);
      if (pFVar7 != (FDS_Int32StringFormatArg *)0x0) {
        pFVar7->Value = this_00->QuestDefineCount;
      }
    }
  }
  local_10 = FFieldNotificationClassDescriptor::ObjectiveCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ObjectiveCount.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetObjectiveName @ 14be4eb30

void __thiscall UDS_VM_QuestObjectiveData::SetObjectiveName(UDS_VM_QuestObjectiveData *this)

{
  bool bVar1;
  FDS_QuestObjectiveTableRow *this_00;
  FName local_18;
  int local_10;
  
  FDS_Text::Reset(&this->ObjectiveName);
  if (0 < this->QuestObjectiveID) {
    this_00 = FDS_QuestObjectiveTableRow::GetRef((longlong)this->QuestObjectiveID,true);
    bVar1 = FDS_QuestObjectiveTableRow::IsValid(this_00);
    if (bVar1) {
      FDS_Text::SetTextFromStringID(&this->ObjectiveName,&this_00->ID_QuestObjectiveId);
    }
  }
  local_10 = FFieldNotificationClassDescriptor::ObjectiveName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ObjectiveName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetObjectiveProgressCount @ 14be4ebc0

void __thiscall
UDS_VM_QuestObjectiveData::SetObjectiveProgressCount(UDS_VM_QuestObjectiveData *this)

{
  int *piVar1;
  FDS_Text *this_00;
  FInstancedStruct *pFVar2;
  FObjectPtr_u_0 FVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FDS_QuestObjectiveTableRow *this_01;
  UDS_QuestManager *this_02;
  UDS_QuestData *this_03;
  FObjectPtr_u_0 *pFVar7;
  FDS_Int32StringFormatArg *pFVar8;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar9;
  FWeakObjectPtr local_res8;
  FName local_28;
  int local_20;
  
  this_01 = FDS_QuestObjectiveTableRow::GetRef((longlong)this->QuestObjectiveID,true);
  bVar4 = FDS_QuestObjectiveTableRow::IsValid(this_01);
  if ((bVar4) && (this_02 = UDS_QuestManager::GetInst(), this_02 != (UDS_QuestManager *)0x0)) {
    this_00 = &this->ObjectiveProgressCount;
    FDS_Text::Reset(this_00);
    bVar4 = UDS_QuestManager::IsQuestCompleted(this_02,this->QuestID);
    if (bVar4) {
      FDS_Text::SetTextFromStringTable(this_00,StringUi,0xeb35);
    }
    else {
      iVar5 = 0;
      UDS_QuestData::GetData
                ((ulong64)&local_res8,UDS_PlayerData::MainPlayerEntityID,SUB41(this->QuestID,0));
      bVar4 = FWeakObjectPtr::IsValid(&local_res8);
      if (bVar4) {
        this_03 = (UDS_QuestData *)FWeakObjectPtr::Get(&local_res8);
        iVar5 = UDS_QuestData::GetObjectiveProgressCount(this_03,this->QuestObjectiveID);
      }
      if (this_01->IsCountIndication == true) {
        this_00->StringTableType = StringUi;
        (this->ObjectiveProgressCount).StringTableID = 0xeac8;
        pTVar9 = &(this->ObjectiveProgressCount).FormatArgs;
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)(pTVar9->AllocatorInstance).Data,
                   (this->ObjectiveProgressCount).FormatArgs.ArrayNum);
        piVar1 = &(this->ObjectiveProgressCount).FormatArgs.ArrayMax;
        (this->ObjectiveProgressCount).FormatArgs.ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,0,&pTVar9->AllocatorInstance,0,piVar1);
        }
        iVar6 = (this->ObjectiveProgressCount).FormatArgs.ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x828,&pTVar9->AllocatorInstance,piVar1);
        }
        (this->ObjectiveProgressCount).FormatArgs.ArrayNum = iVar6 + 1;
        pFVar2 = (FInstancedStruct *)((pTVar9->AllocatorInstance).Data + (longlong)iVar6 * 0x28);
        FInstancedStruct::FInstancedStruct(pFVar2);
        pFVar7 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
        FVar3 = pFVar7[1];
        pFVar2[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar7;
        pFVar2[1].StructMemory = (uchar *)FVar3;
        pFVar2[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar7[2];
        FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar2);
        pFVar8 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar2);
        if (pFVar8 != (FDS_Int32StringFormatArg *)0x0) {
          pFVar8->Value = iVar5;
        }
        iVar5 = (this->ObjectiveProgressCount).FormatArgs.ArrayNum;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x828,&pTVar9->AllocatorInstance,piVar1);
        }
        (this->ObjectiveProgressCount).FormatArgs.ArrayNum = iVar5 + 1;
        pFVar2 = (FInstancedStruct *)((pTVar9->AllocatorInstance).Data + (longlong)iVar5 * 0x28);
        FInstancedStruct::FInstancedStruct(pFVar2);
        pFVar7 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
        FVar3 = pFVar7[1];
        pFVar2[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar7;
        pFVar2[1].StructMemory = (uchar *)FVar3;
        pFVar2[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar7[2];
        FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar2);
        pFVar8 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar2);
        if (pFVar8 != (FDS_Int32StringFormatArg *)0x0) {
          pFVar8->Value = this_01->QuestDefineCount;
        }
      }
    }
    local_20 = FFieldNotificationClassDescriptor::ObjectiveProgressCount.BitNumber;
    local_28 = FFieldNotificationClassDescriptor::ObjectiveProgressCount.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetObjectiveProgressZone @ 14be4edf0

void __thiscall UDS_VM_QuestObjectiveData::SetObjectiveProgressZone(UDS_VM_QuestObjectiveData *this)

{
  int *piVar1;
  FInstancedStruct *this_00;
  long64 lVar2;
  FObjectPtr_u_0 FVar3;
  bool bVar4;
  int iVar5;
  FDS_QuestObjectiveTableRow *this_01;
  FDS_ZoneBaseTableRow *this_02;
  FDS_StringWorldTableRow *pFVar6;
  FObjectPtr_u_0 *pFVar7;
  FDS_StringWorldIDFormatArg *pFVar8;
  FName local_18;
  int local_10;
  
  FDS_Text::Reset(&this->ObjectiveProgressZone);
  if (0 < this->QuestObjectiveID) {
    this_01 = FDS_QuestObjectiveTableRow::GetRef((longlong)this->QuestObjectiveID,true);
    bVar4 = FDS_QuestObjectiveTableRow::IsValid(this_01);
    if (bVar4) {
      this_02 = FDS_ZoneBaseTableRow::GetRef((longlong)this_01->ID_ProgressZone,true);
      bVar4 = FDS_ZoneBaseTableRow::IsValid(this_02);
      if (bVar4) {
        pFVar6 = FDS_ZoneBaseTableRow::ID_ZoneNameTable(this_02);
        lVar2 = pFVar6->ID;
        (this->ObjectiveProgressZone).StringTableType = StringUi;
        (this->ObjectiveProgressZone).StringTableID = 0xeaa9;
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)
                   (this->ObjectiveProgressZone).FormatArgs.AllocatorInstance.Data,
                   (this->ObjectiveProgressZone).FormatArgs.ArrayNum);
        piVar1 = &(this->ObjectiveProgressZone).FormatArgs.ArrayMax;
        (this->ObjectiveProgressZone).FormatArgs.ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,0,&(this->ObjectiveProgressZone).FormatArgs.AllocatorInstance,0,piVar1);
        }
        iVar5 = (this->ObjectiveProgressZone).FormatArgs.ArrayNum;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x828,&(this->ObjectiveProgressZone).FormatArgs.AllocatorInstance,
                             piVar1);
        }
        (this->ObjectiveProgressZone).FormatArgs.ArrayNum = iVar5 + 1;
        this_00 = (FInstancedStruct *)
                  ((this->ObjectiveProgressZone).FormatArgs.AllocatorInstance.Data +
                  (longlong)iVar5 * 0x28);
        FInstancedStruct::FInstancedStruct(this_00);
        pFVar7 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
        FVar3 = pFVar7[1];
        this_00[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar7;
        this_00[1].StructMemory = (uchar *)FVar3;
        this_00[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar7[2];
        FInstancedStruct::InitializeAs<FDS_StringWorldIDFormatArg>(this_00);
        pFVar8 = FInstancedStruct::GetMutablePtr<FDS_StringWorldIDFormatArg>(this_00);
        if (pFVar8 != (FDS_StringWorldIDFormatArg *)0x0) {
          (pFVar8->Value).ID = lVar2;
        }
      }
    }
  }
  local_10 = FFieldNotificationClassDescriptor::ObjectiveProgressZone.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ObjectiveProgressZone.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetObjectiveStateWidgetIndex @ 14be4ef60

void __thiscall
UDS_VM_QuestObjectiveData::SetObjectiveStateWidgetIndex(UDS_VM_QuestObjectiveData *this)

{
  bool bVar1;
  UDS_QuestData *this_00;
  int iVar2;
  FWeakObjectPtr local_res8;
  FName local_18;
  int local_10;
  
  iVar2 = 0;
  if (0 < this->QuestObjectiveID) {
    UDS_QuestData::GetData
              ((ulong64)&local_res8,UDS_PlayerData::MainPlayerEntityID,SUB41(this->QuestID,0));
    bVar1 = FWeakObjectPtr::IsValid(&local_res8);
    iVar2 = 0;
    if (bVar1) {
      this_00 = (UDS_QuestData *)FWeakObjectPtr::Get(&local_res8);
      bVar1 = UDS_QuestData::IsGoalQuestObjective(this_00,this->QuestObjectiveID);
      iVar2 = 0;
      if (bVar1) {
        iVar2 = 1;
      }
    }
  }
  local_10 = FFieldNotificationClassDescriptor::ObjectiveStateWidgetIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ObjectiveStateWidgetIndex.FieldName;
  if (this->ObjectiveStateWidgetIndex != iVar2) {
    this->ObjectiveStateWidgetIndex = iVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14be55990

void __thiscall UDS_VM_QuestObjectiveData::UnbindModel(UDS_VM_QuestObjectiveData *this)

{
  UDS_QuestEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_QuestEvent::GetEvent();
  if (pUVar1 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdateQuestDataDelegate,this);
    return;
  }
  return;
}

