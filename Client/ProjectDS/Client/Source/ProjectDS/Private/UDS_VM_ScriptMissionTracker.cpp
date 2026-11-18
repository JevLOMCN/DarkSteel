// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b6e0e30

UClass * __cdecl UDS_VM_ScriptMissionTracker::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ScriptMissionTracker.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ScriptMissionTracker",
               &Z_Registration_Info_UClass_UDS_VM_ScriptMissionTracker.InnerSingleton,
               StaticRegisterNativesUDS_VM_ScriptMissionTracker,0x148,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_ScriptMissionTracker>,
               InternalVTableHelperCtorCaller<UDS_VM_ScriptMissionTracker>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ScriptMissionTracker.InnerSingleton;
}

// UDS_VM_ScriptMissionTracker @ 14b6e4ef0

UDS_VM_ScriptMissionTracker * __thiscall
UDS_VM_ScriptMissionTracker::UDS_VM_ScriptMissionTracker
          (UDS_VM_ScriptMissionTracker *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ScriptMissionTracker__6B_;
  (this->Name).StringTableID = 0;
  (this->Name).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Name).StringEnumTableNameID.Number = 0;
  (this->Name).DateTime.Ticks = 0;
  (this->Name).TimeSpan.Ticks = 0;
  (this->Name).TimeExpressionType = None;
  (this->Name).IsExpression = false;
  (this->Name).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).UniqueString.Data.ArrayNum = 0;
  (this->Name).UniqueString.Data.ArrayMax = 0;
  (this->Name).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).FormatArgs.ArrayNum = 0;
  (this->Name).FormatArgs.ArrayMax = 0;
  (this->ProgressCount).StringTableType = None;
  (this->ProgressCount).StringTableID = 0;
  (this->ProgressCount).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ProgressCount).StringEnumTableNameID.Number = 0;
  (this->ProgressCount).DateTime.Ticks = 0;
  (this->ProgressCount).TimeSpan.Ticks = 0;
  (this->ProgressCount).TimeExpressionType = None;
  (this->ProgressCount).IsExpression = false;
  (this->ProgressCount).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProgressCount).UniqueString.Data.ArrayNum = 0;
  (this->ProgressCount).UniqueString.Data.ArrayMax = 0;
  (this->ProgressCount).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProgressCount).FormatArgs.ArrayNum = 0;
  (this->ProgressCount).FormatArgs.ArrayMax = 0;
  this->ScriptMissionID = 0;
  this->MissionIndex = 0;
  (this->Name).StringTableType = None;
  return this;
}

// UDS_VM_ScriptMissionTracker @ 14b6e4fd0

UDS_VM_ScriptMissionTracker * __thiscall
UDS_VM_ScriptMissionTracker::UDS_VM_ScriptMissionTracker
          (UDS_VM_ScriptMissionTracker *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ScriptMissionTracker__6B_;
  (this->Name).StringTableID = 0;
  (this->Name).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Name).StringEnumTableNameID.Number = 0;
  (this->Name).DateTime.Ticks = 0;
  (this->Name).TimeSpan.Ticks = 0;
  (this->Name).TimeExpressionType = None;
  (this->Name).IsExpression = false;
  (this->Name).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).UniqueString.Data.ArrayNum = 0;
  (this->Name).UniqueString.Data.ArrayMax = 0;
  (this->Name).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).FormatArgs.ArrayNum = 0;
  (this->Name).FormatArgs.ArrayMax = 0;
  (this->ProgressCount).StringTableType = None;
  (this->ProgressCount).StringTableID = 0;
  (this->ProgressCount).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ProgressCount).StringEnumTableNameID.Number = 0;
  (this->ProgressCount).DateTime.Ticks = 0;
  (this->ProgressCount).TimeSpan.Ticks = 0;
  (this->ProgressCount).TimeExpressionType = None;
  (this->ProgressCount).IsExpression = false;
  (this->ProgressCount).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProgressCount).UniqueString.Data.ArrayNum = 0;
  (this->ProgressCount).UniqueString.Data.ArrayMax = 0;
  (this->ProgressCount).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProgressCount).FormatArgs.ArrayNum = 0;
  (this->ProgressCount).FormatArgs.ArrayMax = 0;
  this->ScriptMissionID = 0;
  this->MissionIndex = 0;
  (this->Name).StringTableType = None;
  return this;
}

// ~UDS_VM_ScriptMissionTracker @ 14b6e6d10

void __thiscall
UDS_VM_ScriptMissionTracker::~UDS_VM_ScriptMissionTracker(UDS_VM_ScriptMissionTracker *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ScriptMissionTracker__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ProgressCount).FormatArgs.AllocatorInstance.Data,
             (this->ProgressCount).FormatArgs.ArrayNum);
  pFVar1 = (this->ProgressCount).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ProgressCount).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Name).FormatArgs.AllocatorInstance.Data,
             (this->Name).FormatArgs.ArrayNum);
  pFVar1 = (this->Name).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Name).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6e94b0

IClassDescriptor * __thiscall
UDS_VM_ScriptMissionTracker::GetFieldNotificationDescriptor(UDS_VM_ScriptMissionTracker *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_ScriptMissionTracker::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6e9d00

UClass * __cdecl UDS_VM_ScriptMissionTracker::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ScriptMissionTracker.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ScriptMissionTracker",
               &Z_Registration_Info_UClass_UDS_VM_ScriptMissionTracker.InnerSingleton,
               StaticRegisterNativesUDS_VM_ScriptMissionTracker,0x148,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_ScriptMissionTracker>,
               InternalVTableHelperCtorCaller<UDS_VM_ScriptMissionTracker>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ScriptMissionTracker.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_ScriptMissionTracker @ 14b6eab60

void __cdecl UDS_VM_ScriptMissionTracker::StaticRegisterNativesUDS_VM_ScriptMissionTracker(void)

{
  return;
}

// OnScriptMissionUpdate @ 14be32c50

void __thiscall
UDS_VM_ScriptMissionTracker::OnScriptMissionUpdate
          (UDS_VM_ScriptMissionTracker *this,int *param_1,int *param_2)

{
  if (this->MissionIndex == *param_1) {
    SetProgressCount(this,*param_2);
    return;
  }
  return;
}

// OnSetViewModel @ 14be3ea20

void __thiscall
UDS_VM_ScriptMissionTracker::OnSetViewModel
          (UDS_VM_ScriptMissionTracker *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UDS_PhasingManager *this_00;
  FDS_ScriptMissionTrackerTableRow *this_01;
  uint uVar5;
  FName local_78;
  int iStack_70;
  uint uStack_6c;
  TSharedPtr<FDS_ViewModelContext_ScriptMissionTracker,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  FDS_StringQuestID local_48;
  code *local_38;
  longlong lStack_30;
  
  local_58.Object = param_1->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_ScriptMissionTracker>(&local_68,&local_58);
  if (local_68.Object == (FDS_ViewModelContext_ScriptMissionTracker *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return;
  }
  this->ScriptMissionID = (local_68.Object)->ScriptMissionTrackerID;
  this->MissionIndex = (local_68.Object)->ScriptMissionIndex;
  this_00 = UDS_PhasingManager::GetInst();
  if (this_00 == (UDS_PhasingManager *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  else {
    local_78 = (FName)OnScriptMissionUpdate;
    iStack_70 = 0;
    lStack_30 = (ulonglong)uStack_6c << 0x20;
    local_38 = OnScriptMissionUpdate;
    TMulticastDelegateRegistration<void___cdecl(int_const_&,int_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_ScriptMissionTracker>
              ((TMulticastDelegateRegistration<void___cdecl(int_const_&,int_const_&),FDefaultDelegateUserPolicy>
                *)&this_00->PhasingScriptMissionUpdateDelegate,
               (UDS_VM_ScriptMissionTracker *)&stack0x00000010,(pmf_210b2b84 *)this);
    FDS_Text::Reset(&this->Name);
    this_01 = FDS_ScriptMissionTrackerTableRow::GetRef((longlong)this->ScriptMissionID,true);
    bVar3 = FDS_ScriptMissionTrackerTableRow::IsValid(this_01);
    if (bVar3) {
      uVar1 = this->MissionIndex;
      if ((-1 < (int)uVar1) && ((int)uVar1 < (this_01->ID_TrackerObjectiveId).ArrayNum)) {
        uVar5 = 0;
        if ((int)uVar1 < (this_01->ID_TrackerObjectiveId).ArrayNum) {
          uVar5 = ~uVar1 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_48.ID = *(long64 *)
                       ((this_01->ID_TrackerObjectiveId).AllocatorInstance.Data +
                       (longlong)(int)uVar1 * 8);
        local_48._padding_ = (longlong)&___7FDS_StringQuestID__6B_;
        FDS_Text::SetTextFromStringID(&this->Name,&local_48);
      }
    }
    iStack_70 = FFieldNotificationClassDescriptor::Name.BitNumber;
    local_78 = FFieldNotificationClassDescriptor::Name.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
    iVar4 = UDS_PhasingManager::GetScriptMissionProgressCount(this_00,this->MissionIndex);
    SetProgressCount(this,iVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetName @ 14be4e0e0

void __thiscall UDS_VM_ScriptMissionTracker::SetName(UDS_VM_ScriptMissionTracker *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FDS_ScriptMissionTrackerTableRow *this_00;
  FName local_28;
  int local_20;
  FDS_StringQuestID local_18;
  
  FDS_Text::Reset(&this->Name);
  this_00 = FDS_ScriptMissionTrackerTableRow::GetRef((longlong)this->ScriptMissionID,true);
  bVar3 = FDS_ScriptMissionTrackerTableRow::IsValid(this_00);
  if (bVar3) {
    uVar1 = this->MissionIndex;
    if ((-1 < (int)uVar1) && ((int)uVar1 < (this_00->ID_TrackerObjectiveId).ArrayNum)) {
      uVar4 = 0;
      if ((int)uVar1 < (this_00->ID_TrackerObjectiveId).ArrayNum) {
        uVar4 = ~uVar1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_18.ID = *(long64 *)
                     ((this_00->ID_TrackerObjectiveId).AllocatorInstance.Data +
                     (longlong)(int)uVar1 * 8);
      local_18._padding_ = (longlong)&___7FDS_StringQuestID__6B_;
      FDS_Text::SetTextFromStringID(&this->Name,&local_18);
    }
  }
  local_20 = FFieldNotificationClassDescriptor::Name.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::Name.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  return;
}

// SetProgressCount @ 14be4f290

void __thiscall
UDS_VM_ScriptMissionTracker::SetProgressCount(UDS_VM_ScriptMissionTracker *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FDS_ScriptMissionTrackerTableRow *this_00;
  uint uVar4;
  int local_res8 [2];
  int local_res10 [2];
  FName local_28;
  int local_20;
  
  local_res10[0] = param_1;
  FDS_Text::Reset(&this->ProgressCount);
  local_res8[0] = 0;
  this_00 = FDS_ScriptMissionTrackerTableRow::GetRef((longlong)this->ScriptMissionID,true);
  bVar3 = FDS_ScriptMissionTrackerTableRow::IsValid(this_00);
  if (bVar3) {
    uVar1 = this->MissionIndex;
    if ((-1 < (int)uVar1) && ((int)uVar1 < (this_00->TrackerCount).ArrayNum)) {
      uVar4 = 0;
      if ((int)uVar1 < (this_00->TrackerCount).ArrayNum) {
        uVar4 = ~uVar1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_res8[0] =
           *(int *)((this_00->TrackerCount).AllocatorInstance.Data + (longlong)(int)uVar1 * 4);
    }
  }
  FDS_Text::SetTextFormatFromStringTable<int_&,int_&>
            (&this->ProgressCount,StringUi,0xeac8,local_res10,local_res8);
  local_20 = FFieldNotificationClassDescriptor::ProgressCount.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::ProgressCount.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  return;
}

// UnbindModel @ 14be55c80

void __thiscall UDS_VM_ScriptMissionTracker::UnbindModel(UDS_VM_ScriptMissionTracker *this)

{
  UDS_PhasingManager *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_PhasingManager::GetInst();
  if (pUVar1 != (UDS_PhasingManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->PhasingScriptMissionUpdateDelegate,this);
    return;
  }
  return;
}

