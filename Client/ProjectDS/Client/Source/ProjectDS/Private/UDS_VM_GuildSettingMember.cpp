// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 28

// SetClickPermissionManagementButton_WrapperImpl @ 14b669a30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_GuildSettingMember::SetClickPermissionManagementButton_WrapperImpl
          (void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  undefined8 *puVar1;
  ulong64 uVar2;
  void *pvStackX_10;
  uint uStack_5c;
  undefined1 auStack_58 [8];
  FDelegateAllocation FStack_50;
  FDestructionSentinel FStack_40;
  FDelegateAllocation *pFStack_28;
  
  if (*(char *)((longlong)param_2 + 3) == '\x01') {
    auStack_58 = (undefined1  [8])0x0;
    FStack_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    FStack_50.DelegateSize = 0;
    UDS_UIMessageManager::OpenMsgByStringUi
              (0x3a9a1,Complete_System_01,
               (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                *)auStack_58);
    return;
  }
  this = UDS_WindowManager::GetInst();
  if (this != (UDS_WindowManager *)0x0) {
    auStack_58 = (undefined1  [8])0x0;
    FStack_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    FStack_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_58,
               (FWriteAccessScope *)&FStack_40);
    pFStack_28 = &FStack_50;
    puVar1 = UE::Core::Private::DelegateAllocate(0x30,&FStack_50);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_GuildSettingMember____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
        UE::GC::MarkAsReachable(param_1);
      }
      puVar1[3] = 0;
      pvStackX_10 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
        UE::GC::MarkAsReachable(param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&pvStackX_10);
      puVar1[4] = OnOpenWindowPermissionPopup;
      puVar1[5] = (ulonglong)uStack_5c << 0x20;
    }
    if (FStack_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_40.Accessor,&FStack_40);
    }
    UDS_WindowManager::OpenWindow
              (this,GuildPopupMemberPermission,
               (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)auStack_58);
  }
  return;
}

// SetClickGradeManagementButton_WrapperImpl @ 14b669a40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_GuildSettingMember::SetClickGradeManagementButton_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  undefined8 *puVar1;
  ulong64 uVar2;
  void *pvStackX_10;
  uint uStack_5c;
  undefined1 auStack_58 [8];
  FDelegateAllocation FStack_50;
  FDestructionSentinel FStack_40;
  FDelegateAllocation *pFStack_28;
  
  if (*(char *)((longlong)param_2 + 3) == '\x01') {
    auStack_58 = (undefined1  [8])0x0;
    FStack_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    FStack_50.DelegateSize = 0;
    UDS_UIMessageManager::OpenMsgByStringUi
              (0x3a9a1,Complete_System_01,
               (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                *)auStack_58);
    return;
  }
  this = UDS_WindowManager::GetInst();
  if (this != (UDS_WindowManager *)0x0) {
    auStack_58 = (undefined1  [8])0x0;
    FStack_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    FStack_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_58,
               (FWriteAccessScope *)&FStack_40);
    pFStack_28 = &FStack_50;
    puVar1 = UE::Core::Private::DelegateAllocate(0x30,&FStack_50);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_GuildSettingMember____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
        UE::GC::MarkAsReachable(param_1);
      }
      puVar1[3] = 0;
      pvStackX_10 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
        UE::GC::MarkAsReachable(param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&pvStackX_10);
      puVar1[4] = OnOpenWindowGradeManagementPopup;
      puVar1[5] = (ulonglong)uStack_5c << 0x20;
    }
    if (FStack_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_40.Accessor,&FStack_40);
    }
    UDS_WindowManager::OpenWindow
              (this,GuildPopupMemberGrade,
               (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)auStack_58);
  }
  return;
}

// SetClickInviteButton_WrapperImpl @ 14b669a50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_GuildSettingMember::SetClickInviteButton_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  undefined8 *puVar1;
  ulong64 uVar2;
  void *pvStackX_10;
  uint uStack_5c;
  undefined1 auStack_58 [8];
  FDelegateAllocation FStack_50;
  FDestructionSentinel FStack_40;
  FDelegateAllocation *pFStack_28;
  
  if (*(char *)((longlong)param_2 + 3) == '\x01') {
    auStack_58 = (undefined1  [8])0x0;
    FStack_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    FStack_50.DelegateSize = 0;
    UDS_UIMessageManager::OpenMsgByStringUi
              (0x3a9a1,Complete_System_01,
               (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                *)auStack_58);
    return;
  }
  this = UDS_WindowManager::GetInst();
  if (this != (UDS_WindowManager *)0x0) {
    auStack_58 = (undefined1  [8])0x0;
    FStack_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    FStack_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_58,
               (FWriteAccessScope *)&FStack_40);
    pFStack_28 = &FStack_50;
    puVar1 = UE::Core::Private::DelegateAllocate(0x30,&FStack_50);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_GuildSettingMember____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
        UE::GC::MarkAsReachable(param_1);
      }
      puVar1[3] = 0;
      pvStackX_10 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
        UE::GC::MarkAsReachable(param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&pvStackX_10);
      puVar1[4] = OnOpenWindowInvitePopup;
      puVar1[5] = (ulonglong)uStack_5c << 0x20;
    }
    if (FStack_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_40.Accessor,&FStack_40);
    }
    UDS_WindowManager::OpenWindow
              (this,GuildPopupMemberInvite,
               (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)auStack_58);
  }
  return;
}

// StaticClass @ 14b669a60

UClass * __cdecl UDS_VM_GuildSettingMember::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildSettingMember.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildSettingMember",
               &Z_Registration_Info_UClass_UDS_VM_GuildSettingMember.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildSettingMember,0x398,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_GuildSettingMember>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildSettingMember>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildSettingMember.InnerSingleton;
}

// UDS_VM_GuildSettingMember @ 14b66c880

UDS_VM_GuildSettingMember * __thiscall
UDS_VM_GuildSettingMember::UDS_VM_GuildSettingMember
          (UDS_VM_GuildSettingMember *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildSettingMember__6B_;
  (this->FixedTxt_Grade).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Grade).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Grade).DateTime.Ticks = 0;
  (this->FixedTxt_Grade).TimeSpan.Ticks = 0;
  (this->FixedTxt_Grade).TimeExpressionType = None;
  (this->FixedTxt_Grade).IsExpression = false;
  (this->FixedTxt_Grade).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Grade).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Grade).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Grade).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Grade).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Grade).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_Name).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Name).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Name).DateTime.Ticks = 0;
  (this->FixedTxt_Name).TimeSpan.Ticks = 0;
  (this->FixedTxt_Name).TimeExpressionType = None;
  (this->FixedTxt_Name).IsExpression = false;
  (this->FixedTxt_Name).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Name).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Name).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Name).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Name).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Name).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_Level).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Level).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Level).DateTime.Ticks = 0;
  (this->FixedTxt_Level).TimeSpan.Ticks = 0;
  (this->FixedTxt_Level).TimeExpressionType = None;
  (this->FixedTxt_Level).IsExpression = false;
  (this->FixedTxt_Level).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Level).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Level).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Level).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Level).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Level).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_Connection).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Connection).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Connection).DateTime.Ticks = 0;
  (this->FixedTxt_Connection).TimeSpan.Ticks = 0;
  (this->FixedTxt_Connection).TimeExpressionType = None;
  (this->FixedTxt_Connection).IsExpression = false;
  (this->FixedTxt_Connection).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_Connection).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Connection).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Connection).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Connection).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Connection).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_Kickout).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Kickout).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Kickout).DateTime.Ticks = 0;
  (this->FixedTxt_Kickout).TimeSpan.Ticks = 0;
  (this->FixedTxt_Kickout).TimeExpressionType = None;
  (this->FixedTxt_Kickout).IsExpression = false;
  (this->FixedTxt_Kickout).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedTxt_Kickout).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Kickout).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Kickout).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Kickout).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Kickout).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_PermissionManagementButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_PermissionManagementButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_PermissionManagementButton).DateTime.Ticks = 0;
  (this->FixedTxt_PermissionManagementButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_PermissionManagementButton).TimeExpressionType = None;
  (this->FixedTxt_PermissionManagementButton).IsExpression = false;
  (this->FixedTxt_PermissionManagementButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_PermissionManagementButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_PermissionManagementButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_PermissionManagementButton).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_PermissionManagementButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_PermissionManagementButton).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GradeManagementButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GradeManagementButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GradeManagementButton).DateTime.Ticks = 0;
  (this->FixedTxt_GradeManagementButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_GradeManagementButton).TimeExpressionType = None;
  (this->FixedTxt_Grade).StringTableType = StringUi;
  (this->FixedTxt_Grade).StringTableID = 0x3a9d1;
  (this->FixedTxt_Name).StringTableType = StringUi;
  (this->FixedTxt_Name).StringTableID = 0x3a9d2;
  (this->FixedTxt_Level).StringTableType = StringUi;
  (this->FixedTxt_Level).StringTableID = 0x3a9d3;
  (this->FixedTxt_Connection).StringTableType = StringUi;
  (this->FixedTxt_Connection).StringTableID = 0x3a9d5;
  (this->FixedTxt_Kickout).StringTableType = StringUi;
  (this->FixedTxt_Kickout).StringTableID = 0x3a9e3;
  (this->FixedTxt_PermissionManagementButton).StringTableType = StringUi;
  (this->FixedTxt_PermissionManagementButton).StringTableID = 0x3aa4d;
  (this->FixedTxt_GradeManagementButton).StringTableType = StringUi;
  (this->FixedTxt_GradeManagementButton).StringTableID = 0x3aa4e;
  (this->FixedTxt_GradeManagementButton).IsExpression = false;
  (this->FixedTxt_GradeManagementButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeManagementButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GradeManagementButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GradeManagementButton).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeManagementButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GradeManagementButton).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_InviteButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_InviteButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_InviteButton).DateTime.Ticks = 0;
  (this->FixedTxt_InviteButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_InviteButton).TimeExpressionType = None;
  (this->FixedTxt_InviteButton).IsExpression = false;
  (this->FixedTxt_InviteButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_InviteButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_InviteButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_InviteButton).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_InviteButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_InviteButton).FormatArgs.ArrayMax = 0;
  (this->ClickPermissionManagementButton)._padding_ = '\0';
  (this->ClickPermissionManagementButton).bIsCustomSelected = false;
  (this->ClickPermissionManagementButton).bIsLacked = false;
  (this->ClickPermissionManagementButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickPermissionManagementButton).Delegate = 0;
  *(undefined8 *)&(this->ClickPermissionManagementButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickPermissionManagementButton).Delegate.field_0x10 = 0;
  (this->ClickGradeManagementButton)._padding_ = '\0';
  (this->ClickGradeManagementButton).bIsCustomSelected = false;
  (this->ClickGradeManagementButton).bIsLacked = false;
  (this->ClickGradeManagementButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickGradeManagementButton).Delegate = 0;
  *(undefined8 *)&(this->ClickGradeManagementButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickGradeManagementButton).Delegate.field_0x10 = 0;
  (this->ClickInviteButton)._padding_ = '\0';
  (this->ClickInviteButton).bIsCustomSelected = false;
  (this->ClickInviteButton).bIsLacked = false;
  (this->ClickInviteButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickInviteButton).Delegate = 0;
  *(undefined8 *)&(this->ClickInviteButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickInviteButton).Delegate.field_0x10 = 0;
  (this->EntryBindingEventField_List).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_List).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_List).UserObjectList.ArrayMax = 0;
  (this->FixedTxt_InviteButton).StringTableType = StringUi;
  (this->FixedTxt_InviteButton).StringTableID = 0x3a9fa;
  return this;
}

// UDS_VM_GuildSettingMember @ 14b66cba0

UDS_VM_GuildSettingMember * __thiscall
UDS_VM_GuildSettingMember::UDS_VM_GuildSettingMember
          (UDS_VM_GuildSettingMember *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildSettingMember__6B_;
  (this->FixedTxt_Grade).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Grade).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Grade).DateTime.Ticks = 0;
  (this->FixedTxt_Grade).TimeSpan.Ticks = 0;
  (this->FixedTxt_Grade).TimeExpressionType = None;
  (this->FixedTxt_Grade).IsExpression = false;
  (this->FixedTxt_Grade).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Grade).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Grade).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Grade).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Grade).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Grade).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_Name).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Name).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Name).DateTime.Ticks = 0;
  (this->FixedTxt_Name).TimeSpan.Ticks = 0;
  (this->FixedTxt_Name).TimeExpressionType = None;
  (this->FixedTxt_Name).IsExpression = false;
  (this->FixedTxt_Name).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Name).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Name).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Name).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Name).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Name).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_Level).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Level).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Level).DateTime.Ticks = 0;
  (this->FixedTxt_Level).TimeSpan.Ticks = 0;
  (this->FixedTxt_Level).TimeExpressionType = None;
  (this->FixedTxt_Level).IsExpression = false;
  (this->FixedTxt_Level).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Level).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Level).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Level).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Level).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Level).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_Connection).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Connection).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Connection).DateTime.Ticks = 0;
  (this->FixedTxt_Connection).TimeSpan.Ticks = 0;
  (this->FixedTxt_Connection).TimeExpressionType = None;
  (this->FixedTxt_Connection).IsExpression = false;
  (this->FixedTxt_Connection).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_Connection).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Connection).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Connection).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Connection).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Connection).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_Kickout).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_Kickout).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_Kickout).DateTime.Ticks = 0;
  (this->FixedTxt_Kickout).TimeSpan.Ticks = 0;
  (this->FixedTxt_Kickout).TimeExpressionType = None;
  (this->FixedTxt_Kickout).IsExpression = false;
  (this->FixedTxt_Kickout).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedTxt_Kickout).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_Kickout).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_Kickout).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_Kickout).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_Kickout).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_PermissionManagementButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_PermissionManagementButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_PermissionManagementButton).DateTime.Ticks = 0;
  (this->FixedTxt_PermissionManagementButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_PermissionManagementButton).TimeExpressionType = None;
  (this->FixedTxt_PermissionManagementButton).IsExpression = false;
  (this->FixedTxt_PermissionManagementButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_PermissionManagementButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_PermissionManagementButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_PermissionManagementButton).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_PermissionManagementButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_PermissionManagementButton).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_GradeManagementButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_GradeManagementButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_GradeManagementButton).DateTime.Ticks = 0;
  (this->FixedTxt_GradeManagementButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_GradeManagementButton).TimeExpressionType = None;
  (this->FixedTxt_Grade).StringTableType = StringUi;
  (this->FixedTxt_Grade).StringTableID = 0x3a9d1;
  (this->FixedTxt_Name).StringTableType = StringUi;
  (this->FixedTxt_Name).StringTableID = 0x3a9d2;
  (this->FixedTxt_Level).StringTableType = StringUi;
  (this->FixedTxt_Level).StringTableID = 0x3a9d3;
  (this->FixedTxt_Connection).StringTableType = StringUi;
  (this->FixedTxt_Connection).StringTableID = 0x3a9d5;
  (this->FixedTxt_Kickout).StringTableType = StringUi;
  (this->FixedTxt_Kickout).StringTableID = 0x3a9e3;
  (this->FixedTxt_PermissionManagementButton).StringTableType = StringUi;
  (this->FixedTxt_PermissionManagementButton).StringTableID = 0x3aa4d;
  (this->FixedTxt_GradeManagementButton).StringTableType = StringUi;
  (this->FixedTxt_GradeManagementButton).StringTableID = 0x3aa4e;
  (this->FixedTxt_GradeManagementButton).IsExpression = false;
  (this->FixedTxt_GradeManagementButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeManagementButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_GradeManagementButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_GradeManagementButton).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_GradeManagementButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_GradeManagementButton).FormatArgs.ArrayMax = 0;
  (this->FixedTxt_InviteButton).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedTxt_InviteButton).StringEnumTableNameID.Number = 0;
  (this->FixedTxt_InviteButton).DateTime.Ticks = 0;
  (this->FixedTxt_InviteButton).TimeSpan.Ticks = 0;
  (this->FixedTxt_InviteButton).TimeExpressionType = None;
  (this->FixedTxt_InviteButton).IsExpression = false;
  (this->FixedTxt_InviteButton).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedTxt_InviteButton).UniqueString.Data.ArrayNum = 0;
  (this->FixedTxt_InviteButton).UniqueString.Data.ArrayMax = 0;
  (this->FixedTxt_InviteButton).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedTxt_InviteButton).FormatArgs.ArrayNum = 0;
  (this->FixedTxt_InviteButton).FormatArgs.ArrayMax = 0;
  (this->ClickPermissionManagementButton)._padding_ = '\0';
  (this->ClickPermissionManagementButton).bIsCustomSelected = false;
  (this->ClickPermissionManagementButton).bIsLacked = false;
  (this->ClickPermissionManagementButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickPermissionManagementButton).Delegate = 0;
  *(undefined8 *)&(this->ClickPermissionManagementButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickPermissionManagementButton).Delegate.field_0x10 = 0;
  (this->ClickGradeManagementButton)._padding_ = '\0';
  (this->ClickGradeManagementButton).bIsCustomSelected = false;
  (this->ClickGradeManagementButton).bIsLacked = false;
  (this->ClickGradeManagementButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickGradeManagementButton).Delegate = 0;
  *(undefined8 *)&(this->ClickGradeManagementButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickGradeManagementButton).Delegate.field_0x10 = 0;
  (this->ClickInviteButton)._padding_ = '\0';
  (this->ClickInviteButton).bIsCustomSelected = false;
  (this->ClickInviteButton).bIsLacked = false;
  (this->ClickInviteButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickInviteButton).Delegate = 0;
  *(undefined8 *)&(this->ClickInviteButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickInviteButton).Delegate.field_0x10 = 0;
  (this->EntryBindingEventField_List).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_List).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_List).UserObjectList.ArrayMax = 0;
  (this->FixedTxt_InviteButton).StringTableType = StringUi;
  (this->FixedTxt_InviteButton).StringTableID = 0x3a9fa;
  return this;
}

// ~UDS_VM_GuildSettingMember @ 14b66eb80

void __thiscall
UDS_VM_GuildSettingMember::~UDS_VM_GuildSettingMember(UDS_VM_GuildSettingMember *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildSettingMember__6B_;
  pFVar1 = (this->EntryBindingEventField_List).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickInviteButton).Delegate);
  pvVar2 = *(void **)&(this->ClickInviteButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickInviteButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ClickGradeManagementButton).Delegate);
  pvVar2 = *(void **)&(this->ClickGradeManagementButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickGradeManagementButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->ClickPermissionManagementButton).Delegate);
  pvVar2 = *(void **)&(this->ClickPermissionManagementButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickPermissionManagementButton).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_InviteButton).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_InviteButton).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_InviteButton).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_InviteButton).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedTxt_GradeManagementButton).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_GradeManagementButton).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_GradeManagementButton).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_GradeManagementButton).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedTxt_PermissionManagementButton).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_PermissionManagementButton).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_PermissionManagementButton).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_PermissionManagementButton).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_Kickout).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_Kickout).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_Kickout).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_Kickout).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_Connection).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_Connection).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_Connection).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_Connection).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_Level).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_Level).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_Level).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_Level).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_Name).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_Name).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_Name).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_Name).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedTxt_Grade).FormatArgs.AllocatorInstance.Data,
             (this->FixedTxt_Grade).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedTxt_Grade).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedTxt_Grade).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6716c0

IClassDescriptor * __thiscall
UDS_VM_GuildSettingMember::GetFieldNotificationDescriptor(UDS_VM_GuildSettingMember *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_GuildSettingMember::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b671fe0

UClass * __cdecl UDS_VM_GuildSettingMember::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildSettingMember.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildSettingMember",
               &Z_Registration_Info_UClass_UDS_VM_GuildSettingMember.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildSettingMember,0x398,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_GuildSettingMember>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildSettingMember>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildSettingMember.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_GuildSettingMember @ 14b672ae0

void __cdecl UDS_VM_GuildSettingMember::StaticRegisterNativesUDS_VM_GuildSettingMember(void)

{
  return;
}

// BindModel @ 14be76360

void __thiscall UDS_VM_GuildSettingMember::BindModel(UDS_VM_GuildSettingMember *this)

{
  UDS_GuildEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_GuildEvent::GetEvent();
  if (pUVar1 != (UDS_GuildEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->GuildMemberListRemoveDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_GuildSettingMember>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               &pUVar1->GuildMemberListRemoveDelegate,(UDS_VM_GuildSettingMember *)&stack0x00000010,
               (pmf_5cab6c43 *)this);
  }
  return;
}

// InitViewModel @ 14be8cd60

void __thiscall UDS_VM_GuildSettingMember::InitViewModel(UDS_VM_GuildSettingMember *this)

{
  return;
}

// OnClickGradeManagementButton @ 14be947e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_GuildSettingMember::OnClickGradeManagementButton
          (UDS_VM_GuildSettingMember *this,FDS_ButtonEventField *param_1)

{
  UDS_WindowManager *this_00;
  undefined8 *puVar1;
  ulong64 uVar2;
  UDS_VM_GuildSettingMember *local_res10;
  uint uStack_5c;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  if (param_1->bIsCustomDisabled == true) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    UDS_UIMessageManager::OpenMsgByStringUi
              (0x3a9a1,Complete_System_01,
               (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                *)local_58);
    return;
  }
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar1 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_GuildSettingMember____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_GuildSettingMember *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar1[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_GuildSettingMember *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res10);
      puVar1[4] = OnOpenWindowGradeManagementPopup;
      puVar1[5] = (ulonglong)uStack_5c << 0x20;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    UDS_WindowManager::OpenWindow
              (this_00,GuildPopupMemberGrade,
               (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)local_58);
  }
  return;
}

// OnClickInviteButton @ 14be95a10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_GuildSettingMember::OnClickInviteButton
          (UDS_VM_GuildSettingMember *this,FDS_ButtonEventField *param_1)

{
  UDS_WindowManager *this_00;
  undefined8 *puVar1;
  ulong64 uVar2;
  UDS_VM_GuildSettingMember *local_res10;
  uint uStack_5c;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  if (param_1->bIsCustomDisabled == true) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    UDS_UIMessageManager::OpenMsgByStringUi
              (0x3a9a1,Complete_System_01,
               (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                *)local_58);
    return;
  }
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar1 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_GuildSettingMember____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_GuildSettingMember *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar1[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_GuildSettingMember *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res10);
      puVar1[4] = OnOpenWindowInvitePopup;
      puVar1[5] = (ulonglong)uStack_5c << 0x20;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    UDS_WindowManager::OpenWindow
              (this_00,GuildPopupMemberInvite,
               (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)local_58);
  }
  return;
}

// OnClickPermissionManagementButton @ 14be96300

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_GuildSettingMember::OnClickPermissionManagementButton
          (UDS_VM_GuildSettingMember *this,FDS_ButtonEventField *param_1)

{
  UDS_WindowManager *this_00;
  undefined8 *puVar1;
  ulong64 uVar2;
  UDS_VM_GuildSettingMember *local_res10;
  uint uStack_5c;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  if (param_1->bIsCustomDisabled == true) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    UDS_UIMessageManager::OpenMsgByStringUi
              (0x3a9a1,Complete_System_01,
               (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                *)local_58);
    return;
  }
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar1 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_GuildSettingMember____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_GuildSettingMember *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar1[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_GuildSettingMember *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res10);
      puVar1[4] = OnOpenWindowPermissionPopup;
      puVar1[5] = (ulonglong)uStack_5c << 0x20;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    UDS_WindowManager::OpenWindow
              (this_00,GuildPopupMemberPermission,
               (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)local_58);
  }
  return;
}

// OnGuildMemberListRemove @ 14be99490

void __thiscall
UDS_VM_GuildSettingMember::OnGuildMemberListRemove(UDS_VM_GuildSettingMember *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  long64 lVar4;
  UObject *pUVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  FWeakObjectPtr local_res18;
  FName local_28;
  int local_20;
  TArray<TWeakObjectPtr<UDS_GuildMemberData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_18;
  
  lVar4 = UDS_GuildManager::GetMyGuildUID();
  UDS_GuildManager::GetGuildMemberDatas(&local_18,lVar4);
  uVar6 = 0;
  if (0 < local_18.ArrayNum) {
    lVar7 = 0;
    iVar8 = local_18.ArrayNum;
    do {
      if ((-1 < (int)uVar6) && ((int)uVar6 < iVar8)) {
        uVar3 = 0;
        if ((int)uVar6 < iVar8) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_res18 = *(FWeakObjectPtr *)(local_18.AllocatorInstance.Data + lVar7);
        bVar2 = FWeakObjectPtr::IsValid(&local_res18);
        iVar8 = local_18.ArrayNum;
        if ((bVar2) &&
           (pUVar5 = FWeakObjectPtr::Get(&local_res18), iVar8 = local_18.ArrayNum,
           *(longlong *)&pUVar5[1].field_0x8 == param_1)) {
          FDS_EntryBindingEventField::RemoveAt(&this->EntryBindingEventField_List,uVar6);
          local_20 = FFieldNotificationClassDescriptor::EntryBindingEventField_List.BitNumber;
          local_28 = FFieldNotificationClassDescriptor::EntryBindingEventField_List.FieldName;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
          iVar8 = local_18.ArrayNum;
        }
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < iVar8);
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// OnOpenWindowGradeManagementPopup @ 14be9ab90

void __thiscall
UDS_VM_GuildSettingMember::OnOpenWindowGradeManagementPopup
          (UDS_VM_GuildSettingMember *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  FWeakObjectPtr local_res10;
  UDS_UserWidget *local_res18 [2];
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if (param_1 != (UDS_UserWidget *)0x0) {
    MakeContext<FDS_ViewModelContext>(&local_28);
    if (local_28.Object != (FDS_ViewModelContext *)0x0) {
      if ((local_28.Object == (FDS_ViewModelContext *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (local_28.Object)->ViewModelTemplateKey = GuildMemberGradePopup;
      local_18.Object = local_28.Object;
      local_18.SharedReferenceCount.ReferenceController =
           local_28.SharedReferenceCount.ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_res18[0] = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10,&local_18,false);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnOpenWindowInvitePopup @ 14be9ac80

void __thiscall
UDS_VM_GuildSettingMember::OnOpenWindowInvitePopup
          (UDS_VM_GuildSettingMember *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  FDS_ViewModelContext_InputKey *pFVar2;
  bool bVar3;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UDS_UserWidget *local_res20;
  UDS_UserWidget *local_68 [2];
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  if (param_1 != (UDS_UserWidget *)0x0) {
    MakeContext<FDS_ViewModelContext>(&local_58);
    if (local_58.Object != (FDS_ViewModelContext *)0x0) {
      if ((local_58.Object == (FDS_ViewModelContext *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (local_58.Object)->ViewModelTemplateKey = GuildInvitePopup;
      local_38.Object = local_58.Object;
      local_38.SharedReferenceCount.ReferenceController =
           local_58.SharedReferenceCount.ReferenceController;
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_res20 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10,&local_38,false);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    MakeContext<FDS_ViewModelContext_InputKey>(&local_48);
    pFVar2 = local_48.Object;
    if (local_48.Object != (FDS_ViewModelContext_InputKey *)0x0) {
      if ((local_48.Object == (FDS_ViewModelContext_InputKey *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(undefined4 *)&pFVar2->_padding_ = 0x15d;
      local_28.Object = (FDS_ViewModelContext *)local_48.Object;
      local_28.SharedReferenceCount.ReferenceController =
           local_48.SharedReferenceCount.ReferenceController;
      pFVar2->KeyActionType = IA_UI_Escape;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_res18.ObjectIndex = 0;
      local_res18.ObjectSerialNumber = 0;
      local_68[0] = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)local_68);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res18,&local_28,false);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnOpenWindowPermissionPopup @ 14be9ae50

void __thiscall
UDS_VM_GuildSettingMember::OnOpenWindowPermissionPopup
          (UDS_VM_GuildSettingMember *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  FWeakObjectPtr local_res10;
  UDS_UserWidget *local_res18 [2];
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if (param_1 != (UDS_UserWidget *)0x0) {
    MakeContext<FDS_ViewModelContext>(&local_28);
    if (local_28.Object != (FDS_ViewModelContext *)0x0) {
      if ((local_28.Object == (FDS_ViewModelContext *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (local_28.Object)->ViewModelTemplateKey = GuildPermissionPopup;
      local_18.Object = local_28.Object;
      local_18.SharedReferenceCount.ReferenceController =
           local_28.SharedReferenceCount.ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_res18[0] = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10,&local_18,false);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnSetViewModel @ 14bea1dd0

void __thiscall
UDS_VM_GuildSettingMember::OnSetViewModel
          (UDS_VM_GuildSettingMember *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  FName local_18;
  int local_10;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (param_1->Object != (FDS_ViewModelContext *)0x0) {
    bVar4 = UDS_GuildManager::IsMembershipPermission();
    iVar3 = FFieldNotificationClassDescriptor::DisablePermissionManagementButton.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::DisablePermissionManagementButton.FieldName;
    if (this->DisablePermissionManagementButton != !bVar4) {
      this->DisablePermissionManagementButton = !bVar4;
      local_10 = iVar3;
      local_18 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    bVar4 = UDS_GuildManager::IsMembershipPermission();
    iVar3 = FFieldNotificationClassDescriptor::DisableGradeManagementButton.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::DisableGradeManagementButton.FieldName;
    if (this->DisableGradeManagementButton != !bVar4) {
      this->DisableGradeManagementButton = !bVar4;
      local_10 = iVar3;
      local_18 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    bVar4 = UDS_GuildManager::IsMembershipPermission();
    iVar3 = FFieldNotificationClassDescriptor::DisableInviteButton.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::DisableInviteButton.FieldName;
    if (this->DisableInviteButton != !bVar4) {
      this->DisableInviteButton = !bVar4;
      local_10 = iVar3;
      local_18 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    UpdateList(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OpenGradeManagementPopup @ 14beaa340

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_GuildSettingMember::OpenGradeManagementPopup(UDS_VM_GuildSettingMember *this)

{
  UDS_WindowManager *this_00;
  undefined8 *puVar1;
  ulong64 uVar2;
  UDS_VM_GuildSettingMember *local_res10;
  uint uStack_5c;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar1 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_GuildSettingMember____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_GuildSettingMember *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar1[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_GuildSettingMember *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res10);
      puVar1[4] = OnOpenWindowGradeManagementPopup;
      puVar1[5] = (ulonglong)uStack_5c << 0x20;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    UDS_WindowManager::OpenWindow
              (this_00,GuildPopupMemberGrade,
               (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)local_58);
  }
  return;
}

// OpenInvitePopup @ 14beab220

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_GuildSettingMember::OpenInvitePopup(UDS_VM_GuildSettingMember *this)

{
  UDS_WindowManager *this_00;
  undefined8 *puVar1;
  ulong64 uVar2;
  UDS_VM_GuildSettingMember *local_res10;
  uint uStack_5c;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar1 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_GuildSettingMember____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_GuildSettingMember *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar1[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_GuildSettingMember *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res10);
      puVar1[4] = OnOpenWindowInvitePopup;
      puVar1[5] = (ulonglong)uStack_5c << 0x20;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    UDS_WindowManager::OpenWindow
              (this_00,GuildPopupMemberInvite,
               (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)local_58);
  }
  return;
}

// OpenPermissionPopup @ 14beab9a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_GuildSettingMember::OpenPermissionPopup(UDS_VM_GuildSettingMember *this)

{
  UDS_WindowManager *this_00;
  undefined8 *puVar1;
  ulong64 uVar2;
  UDS_VM_GuildSettingMember *local_res10;
  uint uStack_5c;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar1 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_GuildSettingMember____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_GuildSettingMember *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar1[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_VM_GuildSettingMember *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar1 + 3),(FObjectPtr)&local_res10);
      puVar1[4] = OnOpenWindowPermissionPopup;
      puVar1[5] = (ulonglong)uStack_5c << 0x20;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    UDS_WindowManager::OpenWindow
              (this_00,GuildPopupMemberPermission,
               (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)local_58);
  }
  return;
}

// SetDisableGradeManagementButton @ 14beae070

void __thiscall
UDS_VM_GuildSettingMember::SetDisableGradeManagementButton
          (UDS_VM_GuildSettingMember *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::DisableGradeManagementButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DisableGradeManagementButton.FieldName;
  if (this->DisableGradeManagementButton != param_1) {
    this->DisableGradeManagementButton = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetDisableInviteButton @ 14beae120

void __thiscall
UDS_VM_GuildSettingMember::SetDisableInviteButton(UDS_VM_GuildSettingMember *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::DisableInviteButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DisableInviteButton.FieldName;
  if (this->DisableInviteButton != param_1) {
    this->DisableInviteButton = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetDisablePermissionManagementButton @ 14beae3a0

void __thiscall
UDS_VM_GuildSettingMember::SetDisablePermissionManagementButton
          (UDS_VM_GuildSettingMember *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::DisablePermissionManagementButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DisablePermissionManagementButton.FieldName;
  if (this->DisablePermissionManagementButton != param_1) {
    this->DisablePermissionManagementButton = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bebc2a0

void __thiscall UDS_VM_GuildSettingMember::UnbindModel(UDS_VM_GuildSettingMember *this)

{
  UDS_GuildEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_GuildEvent::GetEvent();
  if (pUVar1 != (UDS_GuildEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->GuildMemberListRemoveDelegate,this);
    return;
  }
  return;
}

// UpdateList @ 14bec0820

void __thiscall UDS_VM_GuildSettingMember::UpdateList(UDS_VM_GuildSettingMember *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  long64 lVar5;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  UScriptStruct *pUVar8;
  UDS_ViewModelContextManager *this_01;
  int iVar9;
  FDS_ViewModelContext *pFVar10;
  ForAnyElementType FVar11;
  undefined1 local_res8 [8];
  UDS_UserObjectListItem *local_res10;
  FName local_78;
  int local_70;
  TArray<TWeakObjectPtr<UDS_GuildMemberData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_List);
  lVar5 = UDS_GuildManager::GetMyGuildUID();
  UDS_GuildManager::GetGuildMemberDatas(&local_68,lVar5);
  iVar9 = local_68.ArrayNum;
  pFVar1 = local_68.AllocatorInstance.Data + (longlong)iVar9 * 8;
  FVar11.Data = local_68.AllocatorInstance.Data;
  while( true ) {
    pFVar10 = (FDS_ViewModelContext *)0x0;
    if (local_68.ArrayNum != iVar9) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_GuildMemberData,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar11.Data == pFVar1) break;
    lVar2 = *(longlong *)FVar11.Data;
    this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14bec0a5d;
    }
    else {
      if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14bec0a5d;
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pFVar6 = ::operator_new(0x28);
    if (pFVar6 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar6->ViewModelTemplateKey = 0;
      pFVar6->DerivedStaticStruct = (UStruct *)0x0;
      (pFVar6->ViewModelName).ComparisonIndex = 0;
      (pFVar6->ViewModelName).Number = 0;
      pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_GuildSettingMemberSlot__6B_;
      pFVar6[1]._padding_ = 0;
      pFVar10 = pFVar6;
    }
    pTVar7 = ::operator_new(0x20);
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      pTVar7 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar7->SharedReferenceCount = (atomic<int>)0x1;
      pTVar7[1]._padding_ = (longlong)ViewModelContextDeleter;
      pTVar7->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_GuildSettingMemberSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      pTVar7->WeakReferenceCount = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pTVar7[1].SharedReferenceCount = pFVar10;
    }
    if ((pFVar10 == (FDS_ViewModelContext *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar8 = FDS_ViewModelContext_GuildSettingMemberSlot::StaticStruct();
    pFVar10->DerivedStaticStruct = (UStruct *)pUVar8;
    this_01 = UDS_ViewModelContextManager::GetInst();
    if (this_01 != (UDS_ViewModelContextManager *)0x0) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58.Object = pFVar10;
      local_58.SharedReferenceCount.ReferenceController = pTVar7;
      UDS_ViewModelContextManager::RegisterContext(this_01,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
    }
    pFVar10->ViewModelTemplateKey = GuildSettingMemberSlot;
    pFVar10[1]._padding_ = lVar2;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48.Object = pFVar10;
    local_48.SharedReferenceCount.ReferenceController = pTVar7;
    UDS_UserObjectListItem::AddContext(this_00,&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    local_res10 = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    FDS_EntryBindingEventField::Add
              (&this->EntryBindingEventField_List,(TObjectPtr<UDS_UserObjectListItem>)&local_res10);
    FVar11.Data = FVar11.Data + 8;
  }
  local_70 = FFieldNotificationClassDescriptor::EntryBindingEventField_List.BitNumber;
  local_78 = FFieldNotificationClassDescriptor::EntryBindingEventField_List.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
LAB_14bec0a5d:
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

