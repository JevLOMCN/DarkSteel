// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b65b490

UClass * __cdecl UDS_VM_GuildMemberData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildMemberData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildMemberData",
               &Z_Registration_Info_UClass_UDS_VM_GuildMemberData.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildMemberData,0x1f8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_GuildMemberData>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildMemberData>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildMemberData.InnerSingleton;
}

// UDS_VM_GuildMemberData @ 14b65eb70

UDS_VM_GuildMemberData * __thiscall
UDS_VM_GuildMemberData::UDS_VM_GuildMemberData(UDS_VM_GuildMemberData *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildMemberData__6B_;
  FText::FText(&this->Txt_NickName);
  (this->Txt_Grade).StringTableType = None;
  (this->Txt_Grade).StringTableID = 0;
  (this->Txt_Grade).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Txt_Grade).StringEnumTableNameID.Number = 0;
  (this->Txt_Grade).DateTime.Ticks = 0;
  (this->Txt_Grade).TimeSpan.Ticks = 0;
  (this->Txt_Grade).TimeExpressionType = None;
  (this->Txt_Grade).IsExpression = false;
  (this->Txt_Grade).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_Grade).UniqueString.Data.ArrayNum = 0;
  (this->Txt_Grade).UniqueString.Data.ArrayMax = 0;
  (this->Txt_Grade).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_Grade).FormatArgs.ArrayNum = 0;
  (this->Txt_Grade).FormatArgs.ArrayMax = 0;
  (this->Txt_Level).StringTableType = None;
  (this->Txt_Level).StringTableID = 0;
  (this->Txt_Level).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Txt_Level).StringEnumTableNameID.Number = 0;
  (this->Txt_Level).DateTime.Ticks = 0;
  (this->Txt_Level).TimeSpan.Ticks = 0;
  (this->Txt_Level).TimeExpressionType = None;
  (this->Txt_Level).IsExpression = false;
  (this->Txt_Level).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_Level).UniqueString.Data.ArrayNum = 0;
  (this->Txt_Level).UniqueString.Data.ArrayMax = 0;
  (this->Txt_Level).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_Level).FormatArgs.ArrayNum = 0;
  (this->Txt_Level).FormatArgs.ArrayMax = 0;
  (this->Txt_Zone).StringTableType = None;
  (this->Txt_Zone).StringTableID = 0;
  (this->Txt_Zone).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Txt_Zone).StringEnumTableNameID.Number = 0;
  (this->Txt_Zone).DateTime.Ticks = 0;
  (this->Txt_Zone).TimeSpan.Ticks = 0;
  (this->Txt_Zone).TimeExpressionType = None;
  (this->Txt_Zone).IsExpression = false;
  (this->Txt_Zone).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_Zone).UniqueString.Data.ArrayNum = 0;
  (this->Txt_Zone).UniqueString.Data.ArrayMax = 0;
  (this->Txt_Zone).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_Zone).FormatArgs.ArrayNum = 0;
  (this->Txt_Zone).FormatArgs.ArrayMax = 0;
  (this->Txt_LastLogoutDate).StringTableType = None;
  (this->Txt_LastLogoutDate).StringTableID = 0;
  (this->Txt_LastLogoutDate).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Txt_LastLogoutDate).StringEnumTableNameID.Number = 0;
  (this->Txt_LastLogoutDate).DateTime.Ticks = 0;
  (this->Txt_LastLogoutDate).TimeSpan.Ticks = 0;
  (this->Txt_LastLogoutDate).TimeExpressionType = None;
  (this->Txt_LastLogoutDate).IsExpression = false;
  (this->Txt_LastLogoutDate).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Txt_LastLogoutDate).UniqueString.Data.ArrayNum = 0;
  (this->Txt_LastLogoutDate).UniqueString.Data.ArrayMax = 0;
  (this->Txt_LastLogoutDate).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_LastLogoutDate).FormatArgs.ArrayNum = 0;
  (this->Txt_LastLogoutDate).FormatArgs.ArrayMax = 0;
  return this;
}

// UDS_VM_GuildMemberData @ 14b65ecf0

UDS_VM_GuildMemberData * __thiscall
UDS_VM_GuildMemberData::UDS_VM_GuildMemberData
          (UDS_VM_GuildMemberData *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildMemberData__6B_;
  FText::FText(&this->Txt_NickName);
  (this->Txt_Grade).StringTableType = None;
  (this->Txt_Grade).StringTableID = 0;
  (this->Txt_Grade).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Txt_Grade).StringEnumTableNameID.Number = 0;
  (this->Txt_Grade).DateTime.Ticks = 0;
  (this->Txt_Grade).TimeSpan.Ticks = 0;
  (this->Txt_Grade).TimeExpressionType = None;
  (this->Txt_Grade).IsExpression = false;
  (this->Txt_Grade).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_Grade).UniqueString.Data.ArrayNum = 0;
  (this->Txt_Grade).UniqueString.Data.ArrayMax = 0;
  (this->Txt_Grade).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_Grade).FormatArgs.ArrayNum = 0;
  (this->Txt_Grade).FormatArgs.ArrayMax = 0;
  (this->Txt_Level).StringTableType = None;
  (this->Txt_Level).StringTableID = 0;
  (this->Txt_Level).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Txt_Level).StringEnumTableNameID.Number = 0;
  (this->Txt_Level).DateTime.Ticks = 0;
  (this->Txt_Level).TimeSpan.Ticks = 0;
  (this->Txt_Level).TimeExpressionType = None;
  (this->Txt_Level).IsExpression = false;
  (this->Txt_Level).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_Level).UniqueString.Data.ArrayNum = 0;
  (this->Txt_Level).UniqueString.Data.ArrayMax = 0;
  (this->Txt_Level).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_Level).FormatArgs.ArrayNum = 0;
  (this->Txt_Level).FormatArgs.ArrayMax = 0;
  (this->Txt_Zone).StringTableType = None;
  (this->Txt_Zone).StringTableID = 0;
  (this->Txt_Zone).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Txt_Zone).StringEnumTableNameID.Number = 0;
  (this->Txt_Zone).DateTime.Ticks = 0;
  (this->Txt_Zone).TimeSpan.Ticks = 0;
  (this->Txt_Zone).TimeExpressionType = None;
  (this->Txt_Zone).IsExpression = false;
  (this->Txt_Zone).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_Zone).UniqueString.Data.ArrayNum = 0;
  (this->Txt_Zone).UniqueString.Data.ArrayMax = 0;
  (this->Txt_Zone).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_Zone).FormatArgs.ArrayNum = 0;
  (this->Txt_Zone).FormatArgs.ArrayMax = 0;
  (this->Txt_LastLogoutDate).StringTableType = None;
  (this->Txt_LastLogoutDate).StringTableID = 0;
  (this->Txt_LastLogoutDate).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Txt_LastLogoutDate).StringEnumTableNameID.Number = 0;
  (this->Txt_LastLogoutDate).DateTime.Ticks = 0;
  (this->Txt_LastLogoutDate).TimeSpan.Ticks = 0;
  (this->Txt_LastLogoutDate).TimeExpressionType = None;
  (this->Txt_LastLogoutDate).IsExpression = false;
  (this->Txt_LastLogoutDate).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Txt_LastLogoutDate).UniqueString.Data.ArrayNum = 0;
  (this->Txt_LastLogoutDate).UniqueString.Data.ArrayMax = 0;
  (this->Txt_LastLogoutDate).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Txt_LastLogoutDate).FormatArgs.ArrayNum = 0;
  (this->Txt_LastLogoutDate).FormatArgs.ArrayMax = 0;
  return this;
}

// ~UDS_VM_GuildMemberData @ 14b661ce0

void __thiscall UDS_VM_GuildMemberData::~UDS_VM_GuildMemberData(UDS_VM_GuildMemberData *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GuildMemberData__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Txt_LastLogoutDate).FormatArgs.AllocatorInstance.Data,
             (this->Txt_LastLogoutDate).FormatArgs.ArrayNum);
  pFVar1 = (this->Txt_LastLogoutDate).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Txt_LastLogoutDate).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Txt_Zone).FormatArgs.AllocatorInstance.Data,
             (this->Txt_Zone).FormatArgs.ArrayNum);
  pFVar1 = (this->Txt_Zone).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Txt_Zone).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Txt_Level).FormatArgs.AllocatorInstance.Data,
             (this->Txt_Level).FormatArgs.ArrayNum);
  pFVar1 = (this->Txt_Level).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Txt_Level).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Txt_Grade).FormatArgs.AllocatorInstance.Data,
             (this->Txt_Grade).FormatArgs.ArrayNum);
  pFVar1 = (this->Txt_Grade).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Txt_Grade).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->Txt_NickName).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b664570

IClassDescriptor * __thiscall
UDS_VM_GuildMemberData::GetFieldNotificationDescriptor(UDS_VM_GuildMemberData *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_GuildMemberData::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b664d20

UClass * __cdecl UDS_VM_GuildMemberData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GuildMemberData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GuildMemberData",
               &Z_Registration_Info_UClass_UDS_VM_GuildMemberData.InnerSingleton,
               StaticRegisterNativesUDS_VM_GuildMemberData,0x1f8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_GuildMemberData>,
               InternalVTableHelperCtorCaller<UDS_VM_GuildMemberData>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GuildMemberData.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_GuildMemberData @ 14b665430

void __cdecl UDS_VM_GuildMemberData::StaticRegisterNativesUDS_VM_GuildMemberData(void)

{
  return;
}

// __VTableCtorCaller @ 14b666530

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_GuildMemberData::__VTableCtorCaller(FVTableHelper *param_1)

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
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_GuildMemberData__6B_;
    FText::FText((FText *)&this[1]._padding_);
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
    this[1].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this[1].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[1].Visibility = Visible;
    *(undefined3 *)&this[1].field_0x81 = 0;
    this[1].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[1].VMName.Number = 0;
    *(undefined4 *)&this[1].TextPropertyIDList.AllocatorInstance.Data = 0;
    *(undefined1 *)((longlong)&this[1].TextPropertyIDList.AllocatorInstance.Data + 4) = 0;
    this[1].TextPropertyIDList.ArrayNum = 0;
    this[1].TextPropertyIDList.ArrayMax = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
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
    this[2].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this[2].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[2].Visibility = Visible;
    *(undefined3 *)&this[2].field_0x81 = 0;
    this[2].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[2].VMName.Number = 0;
    *(undefined4 *)&this[2].TextPropertyIDList.AllocatorInstance.Data = 0;
    *(undefined1 *)((longlong)&this[2].TextPropertyIDList.AllocatorInstance.Data + 4) = 0;
    this[2].TextPropertyIDList.ArrayNum = 0;
    this[2].TextPropertyIDList.ArrayMax = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// BindModel @ 14be75f10

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GuildMemberData::BindModel(UDS_VM_GuildMemberData *this)

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

// InitViewModel @ 14be8cca0

void __thiscall UDS_VM_GuildMemberData::InitViewModel(UDS_VM_GuildMemberData *this)

{
  return;
}

// OnSetViewModel @ 14bea0170

void __thiscall
UDS_VM_GuildMemberData::OnSetViewModel
          (UDS_VM_GuildMemberData *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  double dVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  ITextData *pIVar4;
  ITextData *pIVar5;
  code *pcVar6;
  FName FVar7;
  bool bVar8;
  UObject *pUVar9;
  FText *pFVar10;
  FDS_GuildMemberGradeTableRow *this_00;
  FDS_ZoneBaseTableRow *this_01;
  FDS_StringWorldTableRow *pFVar11;
  longlong *plVar12;
  double dVar13;
  int local_res18 [2];
  undefined1 local_res20 [8];
  TSharedPtr<FDS_ViewModelContext_GuildMemberData,1> local_e8;
  FName local_d8;
  int local_d0;
  FName local_c8;
  int local_c0;
  FName local_b8;
  int local_b0;
  FName local_a8;
  int local_a0;
  FName local_98;
  int local_90;
  FName local_88;
  int local_80;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  FText local_68 [3];
  
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_78.Object = param_1->Object;
  local_78.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_GuildMemberData>(&local_e8,&local_78);
  if (local_e8.Object != (FDS_ViewModelContext_GuildMemberData *)0x0) {
    if (local_e8.Object == (FDS_ViewModelContext_GuildMemberData *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    bVar8 = FWeakObjectPtr::IsValid(&((local_e8.Object)->MemberData).WeakPtr);
    if (bVar8) {
      if (local_e8.Object == (FDS_ViewModelContext_GuildMemberData *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pUVar9 = FWeakObjectPtr::Get(&((local_e8.Object)->MemberData).WeakPtr);
      iVar2 = FFieldNotificationClassDescriptor::IsOnline.BitNumber;
      FVar7 = FFieldNotificationClassDescriptor::IsOnline.FieldName;
      if (this->IsOnline != *(bool *)(pUVar9 + 1)) {
        this->IsOnline = *(bool *)(pUVar9 + 1);
        local_d0 = iVar2;
        local_d8 = FVar7;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_d8);
      }
      if (local_e8.Object == (FDS_ViewModelContext_GuildMemberData *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pUVar9 = FWeakObjectPtr::Get(&((local_e8.Object)->MemberData).WeakPtr);
      pFVar10 = FText::FromString(local_68,(FString *)&pUVar9[1].field_0x10);
      iVar2 = FFieldNotificationClassDescriptor::Txt_NickName.BitNumber;
      FVar7 = FFieldNotificationClassDescriptor::Txt_NickName.FieldName;
      bVar8 = FText::IdenticalTo(&this->Txt_NickName,pFVar10,None);
      if (!bVar8) {
        pIVar4 = (pFVar10->TextData).Reference;
        pIVar5 = (this->Txt_NickName).TextData.Reference;
        if (pIVar5 != pIVar4) {
          (this->Txt_NickName).TextData.Reference = pIVar4;
          if (pIVar4 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res20);
          }
          if (pIVar5 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
          }
        }
        (this->Txt_NickName).Flags = pFVar10->Flags;
        local_c0 = iVar2;
        local_c8 = FVar7;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
      }
      plVar12 = &this->_padding_;
      if (local_68[0].TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68[0].TextData.Reference + 0x10))();
      }
      if (local_e8.Object == (FDS_ViewModelContext_GuildMemberData *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pUVar9 = FWeakObjectPtr::Get(&((local_e8.Object)->MemberData).WeakPtr);
      iVar2 = *(int *)&pUVar9[1].field_0x20;
      FDS_Text::Reset(&this->Txt_Grade);
      this_00 = FDS_GuildMemberGradeTableRow::GetRef((longlong)iVar2,true);
      bVar8 = FDS_GuildMemberGradeTableRow::IsValid(this_00);
      if (bVar8) {
        FDS_Text::SetTextFromStringID(&this->Txt_Grade,&this_00->ID_GradeName);
      }
      local_b0 = FFieldNotificationClassDescriptor::Txt_Grade.BitNumber;
      local_b8 = FFieldNotificationClassDescriptor::Txt_Grade.FieldName;
      (**(code **)(*plVar12 + 0x38))(plVar12,&local_b8);
      if (local_e8.Object == (FDS_ViewModelContext_GuildMemberData *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pUVar9 = FWeakObjectPtr::Get(&((local_e8.Object)->MemberData).WeakPtr);
      local_res18[0] = *(int *)&pUVar9[1].field_0x24;
      FDS_Text::Reset(&this->Txt_Level);
      FDS_Text::SetTextFormatFromStringTable<int_const_&>
                (&this->Txt_Level,StringUi,0x29812,local_res18);
      local_a0 = FFieldNotificationClassDescriptor::Txt_Level.BitNumber;
      local_a8 = FFieldNotificationClassDescriptor::Txt_Level.FieldName;
      (**(code **)(*plVar12 + 0x38))(plVar12,&local_a8);
      if (local_e8.Object == (FDS_ViewModelContext_GuildMemberData *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pUVar9 = FWeakObjectPtr::Get(&((local_e8.Object)->MemberData).WeakPtr);
      iVar2 = *(int *)(pUVar9 + 2);
      FDS_Text::Reset(&this->Txt_Zone);
      this_01 = FDS_ZoneBaseTableRow::GetRef((longlong)iVar2,true);
      bVar8 = FDS_ZoneBaseTableRow::IsValid(this_01);
      if (bVar8) {
        pFVar11 = FDS_ZoneBaseTableRow::ID_ZoneNameTable(this_01);
        FDS_Text::SetTextFromStringTable(&this->Txt_Zone,pFVar11);
      }
      local_90 = FFieldNotificationClassDescriptor::Txt_Zone.BitNumber;
      local_98 = FFieldNotificationClassDescriptor::Txt_Zone.FieldName;
      (**(code **)(*plVar12 + 0x38))(plVar12,&local_98);
      if (local_e8.Object == (FDS_ViewModelContext_GuildMemberData *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pUVar9 = FWeakObjectPtr::Get(&((local_e8.Object)->MemberData).WeakPtr);
      dVar1 = *(double *)&pUVar9[2].field_0x8;
      dVar13 = UDS_TimeUtilManager::GetCurrentServerTime();
      FDS_Text::Reset(&this->Txt_LastLogoutDate);
      FDS_Text::SetTextFromSec(&this->Txt_LastLogoutDate,(float)(dVar13 - dVar1),StatusTime,false);
      local_80 = FFieldNotificationClassDescriptor::Txt_LastLogoutDate.BitNumber;
      local_88 = FFieldNotificationClassDescriptor::Txt_LastLogoutDate.FieldName;
      (**(code **)(*plVar12 + 0x38))(plVar12,&local_88);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e8.SharedReferenceCount.ReferenceController);
      goto LAB_14bea063d;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
LAB_14bea063d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetIsOnline @ 14beb18e0

void __thiscall UDS_VM_GuildMemberData::SetIsOnline(UDS_VM_GuildMemberData *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsOnline.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsOnline.FieldName;
  if (this->IsOnline != param_1) {
    this->IsOnline = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetTxt_Grade @ 14beb4d20

void __thiscall UDS_VM_GuildMemberData::SetTxt_Grade(UDS_VM_GuildMemberData *this,int param_1)

{
  bool bVar1;
  FDS_GuildMemberGradeTableRow *this_00;
  FName local_18;
  int local_10;
  
  FDS_Text::Reset(&this->Txt_Grade);
  this_00 = FDS_GuildMemberGradeTableRow::GetRef((longlong)param_1,true);
  bVar1 = FDS_GuildMemberGradeTableRow::IsValid(this_00);
  if (bVar1) {
    FDS_Text::SetTextFromStringID(&this->Txt_Grade,&this_00->ID_GradeName);
  }
  local_10 = FFieldNotificationClassDescriptor::Txt_Grade.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Txt_Grade.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetTxt_LastLogoutDate @ 14beb5b40

void __thiscall
UDS_VM_GuildMemberData::SetTxt_LastLogoutDate(UDS_VM_GuildMemberData *this,double param_1)

{
  FName local_28;
  int local_20;
  
  FDS_Text::Reset(&this->Txt_LastLogoutDate);
  FDS_Text::SetTextFromSec(&this->Txt_LastLogoutDate,(float)param_1,StatusTime,false);
  local_20 = FFieldNotificationClassDescriptor::Txt_LastLogoutDate.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::Txt_LastLogoutDate.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  return;
}

// SetTxt_Level @ 14beb5bc0

void __thiscall UDS_VM_GuildMemberData::SetTxt_Level(UDS_VM_GuildMemberData *this,int param_1)

{
  int local_res10 [6];
  FName local_18;
  int local_10;
  
  local_res10[0] = param_1;
  FDS_Text::Reset(&this->Txt_Level);
  FDS_Text::SetTextFormatFromStringTable<int_const_&>(&this->Txt_Level,StringUi,0x29812,local_res10)
  ;
  local_10 = FFieldNotificationClassDescriptor::Txt_Level.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Txt_Level.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetTxt_NickName @ 14beb5e70

void __thiscall UDS_VM_GuildMemberData::SetTxt_NickName(UDS_VM_GuildMemberData *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::Txt_NickName.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Txt_NickName.FieldName;
  bVar5 = FText::IdenticalTo(&this->Txt_NickName,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->Txt_NickName).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->Txt_NickName).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->Txt_NickName).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetTxt_Zone @ 14beb6040

void __thiscall UDS_VM_GuildMemberData::SetTxt_Zone(UDS_VM_GuildMemberData *this,int param_1)

{
  bool bVar1;
  FDS_ZoneBaseTableRow *this_00;
  FDS_StringWorldTableRow *pFVar2;
  FName local_18;
  int local_10;
  
  FDS_Text::Reset(&this->Txt_Zone);
  this_00 = FDS_ZoneBaseTableRow::GetRef((longlong)param_1,true);
  bVar1 = FDS_ZoneBaseTableRow::IsValid(this_00);
  if (bVar1) {
    pFVar2 = FDS_ZoneBaseTableRow::ID_ZoneNameTable(this_00);
    FDS_Text::SetTextFromStringTable(&this->Txt_Zone,pFVar2);
  }
  local_10 = FFieldNotificationClassDescriptor::Txt_Zone.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Txt_Zone.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bebc0c0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GuildMemberData::UnbindModel(UDS_VM_GuildMemberData *this)

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

