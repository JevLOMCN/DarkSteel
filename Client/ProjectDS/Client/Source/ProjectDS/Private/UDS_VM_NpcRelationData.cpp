// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b6ae130

UClass * __cdecl UDS_VM_NpcRelationData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NpcRelationData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NpcRelationData",
               &Z_Registration_Info_UClass_UDS_VM_NpcRelationData.InnerSingleton,
               StaticRegisterNativesUDS_VM_NpcRelationData,0x1c8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_NpcRelationData>,
               InternalVTableHelperCtorCaller<UDS_VM_NpcRelationData>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NpcRelationData.InnerSingleton;
}

// UDS_VM_NpcRelationData @ 14b6b25a0

UDS_VM_NpcRelationData * __thiscall
UDS_VM_NpcRelationData::UDS_VM_NpcRelationData(UDS_VM_NpcRelationData *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NpcRelationData__6B_;
  (this->RelationGradeName).StringTableType = None;
  (this->RelationGradeName).StringTableID = 0;
  (this->RelationGradeName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->RelationGradeName).StringEnumTableNameID.Number = 0;
  (this->RelationGradeName).DateTime.Ticks = 0;
  (this->RelationGradeName).TimeSpan.Ticks = 0;
  (this->RelationGradeName).TimeExpressionType = None;
  (this->RelationGradeName).IsExpression = false;
  (this->RelationGradeName).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RelationGradeName).UniqueString.Data.ArrayNum = 0;
  (this->RelationGradeName).UniqueString.Data.ArrayMax = 0;
  (this->RelationGradeName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RelationGradeName).FormatArgs.ArrayNum = 0;
  (this->RelationGradeName).FormatArgs.ArrayMax = 0;
  this->NpcTID = 0;
  this->RelationPoint = 0;
  this->MaxRelationPoint = 0;
  this->RelationGrade = 0;
  *(undefined8 *)&(this->RelationGradeColor).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->RelationGradeColor).field0_0x0 + 8) = 0;
  this->RelationPointRatio = 0.0;
  this->RelationPointRatioPercent = 0.0;
  this->IsMaxRelationGrade = false;
  (this->FixedText_RelationTitle).StringTableType = StringUi;
  (this->FixedText_RelationTitle).StringTableID = 0x4e205;
  (this->FixedText_RelationTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_RelationTitle).StringEnumTableNameID.Number = 0;
  (this->FixedText_RelationTitle).DateTime.Ticks = 0;
  (this->FixedText_RelationTitle).TimeSpan.Ticks = 0;
  (this->FixedText_RelationTitle).TimeExpressionType = None;
  (this->FixedText_RelationTitle).IsExpression = false;
  (this->FixedText_RelationTitle).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_RelationTitle).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_RelationTitle).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_RelationTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_RelationTitle).FormatArgs.ArrayNum = 0;
  (this->FixedText_RelationTitle).FormatArgs.ArrayMax = 0;
  (this->FixedText_RelationInfo).StringTableType = StringUi;
  (this->FixedText_RelationInfo).StringTableID = 0x4e203;
  (this->FixedText_RelationInfo).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_RelationInfo).StringEnumTableNameID.Number = 0;
  (this->FixedText_RelationInfo).DateTime.Ticks = 0;
  (this->FixedText_RelationInfo).TimeSpan.Ticks = 0;
  (this->FixedText_RelationInfo).TimeExpressionType = None;
  (this->FixedText_RelationInfo).IsExpression = false;
  (this->FixedText_RelationInfo).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_RelationInfo).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_RelationInfo).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_RelationInfo).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_RelationInfo).FormatArgs.ArrayNum = 0;
  (this->FixedText_RelationInfo).FormatArgs.ArrayMax = 0;
  (this->NpcRelationData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->NpcRelationData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UDS_VM_NpcRelationData @ 14b6b2710

UDS_VM_NpcRelationData * __thiscall
UDS_VM_NpcRelationData::UDS_VM_NpcRelationData
          (UDS_VM_NpcRelationData *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NpcRelationData__6B_;
  (this->RelationGradeName).StringTableType = None;
  (this->RelationGradeName).StringTableID = 0;
  (this->RelationGradeName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->RelationGradeName).StringEnumTableNameID.Number = 0;
  (this->RelationGradeName).DateTime.Ticks = 0;
  (this->RelationGradeName).TimeSpan.Ticks = 0;
  (this->RelationGradeName).TimeExpressionType = None;
  (this->RelationGradeName).IsExpression = false;
  (this->RelationGradeName).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RelationGradeName).UniqueString.Data.ArrayNum = 0;
  (this->RelationGradeName).UniqueString.Data.ArrayMax = 0;
  (this->RelationGradeName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RelationGradeName).FormatArgs.ArrayNum = 0;
  (this->RelationGradeName).FormatArgs.ArrayMax = 0;
  this->NpcTID = 0;
  this->RelationPoint = 0;
  this->MaxRelationPoint = 0;
  this->RelationGrade = 0;
  *(undefined8 *)&(this->RelationGradeColor).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->RelationGradeColor).field0_0x0 + 8) = 0;
  this->RelationPointRatio = 0.0;
  this->RelationPointRatioPercent = 0.0;
  this->IsMaxRelationGrade = false;
  (this->FixedText_RelationTitle).StringTableType = StringUi;
  (this->FixedText_RelationTitle).StringTableID = 0x4e205;
  (this->FixedText_RelationTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_RelationTitle).StringEnumTableNameID.Number = 0;
  (this->FixedText_RelationTitle).DateTime.Ticks = 0;
  (this->FixedText_RelationTitle).TimeSpan.Ticks = 0;
  (this->FixedText_RelationTitle).TimeExpressionType = None;
  (this->FixedText_RelationTitle).IsExpression = false;
  (this->FixedText_RelationTitle).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_RelationTitle).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_RelationTitle).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_RelationTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->FixedText_RelationTitle).FormatArgs.ArrayNum = 0;
  (this->FixedText_RelationTitle).FormatArgs.ArrayMax = 0;
  (this->FixedText_RelationInfo).StringTableType = StringUi;
  (this->FixedText_RelationInfo).StringTableID = 0x4e203;
  (this->FixedText_RelationInfo).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_RelationInfo).StringEnumTableNameID.Number = 0;
  (this->FixedText_RelationInfo).DateTime.Ticks = 0;
  (this->FixedText_RelationInfo).TimeSpan.Ticks = 0;
  (this->FixedText_RelationInfo).TimeExpressionType = None;
  (this->FixedText_RelationInfo).IsExpression = false;
  (this->FixedText_RelationInfo).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_RelationInfo).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_RelationInfo).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_RelationInfo).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_RelationInfo).FormatArgs.ArrayNum = 0;
  (this->FixedText_RelationInfo).FormatArgs.ArrayMax = 0;
  (this->NpcRelationData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->NpcRelationData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UDS_VM_NpcRelationData @ 14b6b40f0

void __thiscall UDS_VM_NpcRelationData::~UDS_VM_NpcRelationData(UDS_VM_NpcRelationData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NpcRelationData__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_RelationInfo).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_RelationInfo).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_RelationInfo).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_RelationInfo).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_RelationTitle).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_RelationTitle).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_RelationTitle).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_RelationTitle).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->RelationGradeName).FormatArgs.AllocatorInstance.Data,
             (this->RelationGradeName).FormatArgs.ArrayNum);
  pFVar1 = (this->RelationGradeName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RelationGradeName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6b6a90

IClassDescriptor * __thiscall
UDS_VM_NpcRelationData::GetFieldNotificationDescriptor(UDS_VM_NpcRelationData *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_NpcRelationData::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6b76a0

UClass * __cdecl UDS_VM_NpcRelationData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NpcRelationData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NpcRelationData",
               &Z_Registration_Info_UClass_UDS_VM_NpcRelationData.InnerSingleton,
               StaticRegisterNativesUDS_VM_NpcRelationData,0x1c8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_NpcRelationData>,
               InternalVTableHelperCtorCaller<UDS_VM_NpcRelationData>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NpcRelationData.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_NpcRelationData @ 14b6b7e00

void __cdecl UDS_VM_NpcRelationData::StaticRegisterNativesUDS_VM_NpcRelationData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_NpcRelationData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// __VTableCtorCaller @ 14b6b90a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_NpcRelationData::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_ViewModelBase *this;
  undefined8 local_res10;
  
  local_res10 = 0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UDS_ViewModelBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_ViewModelBase *)0x0) {
    UDS_ViewModelBase::UDS_ViewModelBase(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__UObject__;
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
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_NpcRelationData__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    *(undefined1 *)&this[1].ViewModelContext.SharedReferenceCount.ReferenceController = 0;
    this[1].Visibility = Hidden;
    *(undefined8 *)&this[1].VMName.Number = 0x4e205;
    this[1].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].TextPropertyIDList.ArrayNum = 0;
    this[1].TextPropertyIDList.ArrayMax = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 2;
    this[2]._padding_ = 0x4e203;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this[2].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[2].Visibility = Visible;
    *(undefined3 *)&this[2].field_0x81 = 0;
    this[2].VMName.ComparisonIndex = 0;
    local_res10 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&this[2].Visibility,(FObjectPtr)&local_res10);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// execOnChanged_RelationGrade @ 14b6b96c0

void __cdecl
UDS_VM_NpcRelationData::execOnChanged_RelationGrade(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int *piVar2;
  int local_res10 [2];
  
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  piVar2 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar2 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChanged_RelationGrade((UDS_VM_NpcRelationData *)param_1,piVar2);
  return;
}

// execOnChanged_RelationPoint @ 14b6b9760

void __cdecl
UDS_VM_NpcRelationData::execOnChanged_RelationPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int *piVar2;
  int local_res10 [2];
  
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  piVar2 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar2 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChanged_RelationPoint((UDS_VM_NpcRelationData *)param_1,piVar2);
  return;
}

// BindModel @ 14be125e0

void __thiscall UDS_VM_NpcRelationData::BindModel(UDS_VM_NpcRelationData *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  FName local_res8;
  FName local_res10;
  code *local_48;
  undefined8 uStack_40;
  code *local_38;
  ulonglong uStack_30;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->NpcRelationData).WeakPtr);
  if (!bVar2) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&(this->NpcRelationData).WeakPtr);
  pcVar4 = strstr("&UDS_VM_NpcRelationData::OnChanged_RelationPoint","::");
  pcVar6 = &DAT_00000002;
  if (pcVar4 == (char *)0x0) {
LAB_14be1267a:
    pcVar5 = &DAT_00000002;
LAB_14be1267d:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar5 = pcVar4;
      pcVar4 = strstr(pcVar5 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar5 == (char *)0x0) goto LAB_14be1267a;
    pcVar5 = pcVar5 + 2;
    if (*pcVar5 == '0') goto LAB_14be1267d;
  }
  ::FName::FName(&local_res8,pcVar5);
  uStack_40 = (ulonglong)uStack_40._4_4_ << 0x20;
  local_48 = OnChanged_RelationPoint;
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,int_const_&>::
  __Internal_AddDynamic<UDS_VM_NpcRelationData>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,int_const_&> *)
             &pUVar3[2].field_0x8,this,(pmf_dd2ecc44 *)&local_48,local_res8);
  pUVar3 = FWeakObjectPtr::Get(&(this->NpcRelationData).WeakPtr);
  pcVar4 = strstr("&UDS_VM_NpcRelationData::OnChanged_RelationGrade","::");
  if (pcVar4 != (char *)0x0) {
    do {
      pcVar5 = pcVar4;
      pcVar4 = strstr(pcVar5 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if ((pcVar5 != (char *)0x0) && (pcVar6 = pcVar5 + 2, pcVar5[2] != '0')) goto LAB_14be1277a;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14be1277a:
  ::FName::FName(&local_res10,pcVar6);
  local_48 = OnChanged_RelationGrade;
  uStack_40 = uStack_40 & 0xffffffff00000000;
  local_38 = OnChanged_RelationGrade;
  uStack_30 = uStack_40;
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,int_const_&>::
  __Internal_AddDynamic<UDS_VM_NpcRelationData>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,int_const_&> *)
             &pUVar3[2].field_0x20,this,(pmf_dd2ecc44 *)&local_38,local_res10);
  return;
}

// OnChanged_RelationGrade @ 14be2b620

void __thiscall
UDS_VM_NpcRelationData::OnChanged_RelationGrade(UDS_VM_NpcRelationData *this,int *param_1)

{
  FName FVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  EDS_GradeType EVar6;
  bool bVar7;
  FDS_CommonGradeTableRow *pFVar8;
  FLinearColor *pFVar9;
  int iVar10;
  FName FVar11;
  FDS_NpcRelationGradeTableRow *pFVar12;
  EDS_GradeType local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  FDS_NpcRelationBaseTableRow *local_res20;
  TArray<FDS_NpcRelationGradeTableRow_const_*,TSizedDefaultAllocator<32>_> local_b8;
  FDS_Text local_a8;
  
  iVar5 = FFieldNotificationClassDescriptor::RelationGrade.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::RelationGrade.FieldName;
  if (this->RelationGrade != *param_1) {
    this->RelationGrade = *param_1;
    local_b8.ArrayNum = iVar5;
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
  }
  pFVar8 = FDS_CommonGradeTableRow::GetRef((longlong)this->RelationGrade,true);
  iVar5 = FFieldNotificationClassDescriptor::RelationGradeName.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::RelationGradeName.FieldName;
  local_a8.StringTableType = None;
  local_a8.StringTableID = 0;
  local_a8.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_a8.StringEnumTableNameID.Number = 0;
  local_a8.TimeExpressionType = None;
  local_a8.DateTime.Ticks = 0;
  local_a8.TimeSpan.Ticks = 0;
  local_a8.IsExpression = false;
  local_a8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.UniqueString.Data.ArrayNum = 0;
  local_a8.UniqueString.Data.ArrayMax = 0;
  local_a8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.FormatArgs.ArrayNum = 0;
  local_a8.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringID(&local_a8,&pFVar8->ID_RelationGradeName);
  FDS_Text::operator=(&this->RelationGradeName,&local_a8);
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)FVar1;
  local_b8.ArrayNum = iVar5;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_a8.FormatArgs.AllocatorInstance.Data,
             local_a8.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_a8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_a8.FormatArgs.AllocatorInstance.Data);
  }
  if (local_a8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.UniqueString.Data.AllocatorInstance.Data);
  }
  iVar5 = FFieldNotificationClassDescriptor::RelationGradeColor.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::RelationGradeColor.FieldName;
  local_res8[0] = pFVar8->ID;
  pFVar9 = DS_Util::GetGradeColor(local_res8);
  if (((((pFVar9->field0_0x0)._s_0.R != (this->RelationGradeColor).field0_0x0._s_0.R) ||
       ((pFVar9->field0_0x0)._s_0.G != (this->RelationGradeColor).field0_0x0._s_0.G)) ||
      ((pFVar9->field0_0x0)._s_0.B != (this->RelationGradeColor).field0_0x0._s_0.B)) ||
     ((pFVar9->field0_0x0)._s_0.A != (this->RelationGradeColor).field0_0x0._s_0.A)) {
    fVar2 = (pFVar9->field0_0x0)._s_0.G;
    fVar3 = (pFVar9->field0_0x0)._s_0.B;
    fVar4 = (pFVar9->field0_0x0)._s_0.A;
    local_b8.ArrayNum = iVar5;
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)FVar1;
    (this->RelationGradeColor).field0_0x0._s_0.R = (pFVar9->field0_0x0)._s_0.R;
    (this->RelationGradeColor).field0_0x0._s_0.G = fVar2;
    (this->RelationGradeColor).field0_0x0._s_0.B = fVar3;
    (this->RelationGradeColor).field0_0x0._s_0.A = fVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
  }
  bVar7 = TWeakObjectPtr<UDS_NpcRelationData,FWeakObjectPtr>::UEOpEquals
                    (&this->NpcRelationData,(void *)0x0);
  if (!bVar7) {
    local_res20 = FDS_NpcRelationBaseTableRow::GetRef((longlong)this->NpcTID,true);
    EVar6 = local_res8[0];
    local_res18 = local_res20->ID_NpcRelationGrade;
    FDS_NpcRelationGradeTableRow::GetAll(&local_b8);
    iVar5 = local_b8.ArrayNum;
    FVar1 = (FName)((longlong)local_b8.AllocatorInstance.Data + (longlong)local_b8.ArrayNum * 8);
    FVar11 = (FName)local_b8.AllocatorInstance;
    iVar10 = local_b8.ArrayNum;
    while( true ) {
      if (iVar10 != iVar5) {
        `TCheckedPointerIterator<FDS_NpcRelationGradeTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
        iVar10 = local_b8.ArrayNum;
      }
      if (FVar11 == FVar1) {
        if ((FName)local_b8.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_b8.AllocatorInstance.Data);
        }
        pFVar12 = &FDS_NpcRelationGradeTableRow::DefaultObject;
        goto LAB_14be2b853;
      }
      pFVar12 = *(FDS_NpcRelationGradeTableRow **)FVar11;
      if ((pFVar12->GroupID == local_res18) && (pFVar12->ID_Grade == EVar6)) break;
      FVar11 = (FName)((longlong)FVar11 + 8);
    }
    if ((FName)local_b8.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
LAB_14be2b853:
    iVar5 = FFieldNotificationClassDescriptor::MaxRelationPoint.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::MaxRelationPoint.FieldName;
    if (this->MaxRelationPoint != pFVar12->ReqPoint) {
      this->MaxRelationPoint = pFVar12->ReqPoint;
      local_b8.ArrayNum = iVar5;
      local_b8.AllocatorInstance.Data = (FScriptContainerElement *)FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
    }
    iVar5 = FFieldNotificationClassDescriptor::IsMaxRelationGrade.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::IsMaxRelationGrade.FieldName;
    bVar7 = local_res20->MaxGrade <= local_res8[0];
    if (this->IsMaxRelationGrade != bVar7) {
      this->IsMaxRelationGrade = bVar7;
      local_b8.ArrayNum = iVar5;
      local_b8.AllocatorInstance.Data = (FScriptContainerElement *)FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
    }
    OnChanged_RelationPoint(this,&this->RelationPoint);
  }
  return;
}

// OnChanged_RelationPoint @ 14be2b910

void __thiscall
UDS_VM_NpcRelationData::OnChanged_RelationPoint(UDS_VM_NpcRelationData *this,int *param_1)

{
  float fVar1;
  FName local_28;
  int local_20;
  
  local_20 = FFieldNotificationClassDescriptor::RelationPoint.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::RelationPoint.FieldName;
  if (this->RelationPoint != *param_1) {
    this->RelationPoint = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  local_20 = FFieldNotificationClassDescriptor::RelationPointRatio.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::RelationPointRatio.FieldName;
  if (this->MaxRelationPoint < 1) {
    if (this->IsMaxRelationGrade == true) {
      if (__real_3f800000 != this->RelationPointRatio) {
        this->RelationPointRatio = 1.0;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
      }
      local_20 = FFieldNotificationClassDescriptor::RelationPointRatioPercent.BitNumber;
      local_28 = FFieldNotificationClassDescriptor::RelationPointRatioPercent.FieldName;
      if (__real_42c80000 == this->RelationPointRatioPercent) {
        return;
      }
      this->RelationPointRatioPercent = 100.0;
    }
    else {
      if (this->RelationPointRatio != 0.0) {
        this->RelationPointRatio = 0.0;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
      }
      local_20 = FFieldNotificationClassDescriptor::RelationPointRatioPercent.BitNumber;
      local_28 = FFieldNotificationClassDescriptor::RelationPointRatioPercent.FieldName;
      if (this->RelationPointRatioPercent == 0.0) {
        return;
      }
      this->RelationPointRatioPercent = 0.0;
    }
  }
  else {
    fVar1 = (float)this->RelationPoint / (float)this->MaxRelationPoint;
    if (fVar1 != this->RelationPointRatio) {
      this->RelationPointRatio = fVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
    local_20 = FFieldNotificationClassDescriptor::RelationPointRatioPercent.BitNumber;
    local_28 = FFieldNotificationClassDescriptor::RelationPointRatioPercent.FieldName;
    fVar1 = this->RelationPointRatio * __real_42c80000;
    if (fVar1 == this->RelationPointRatioPercent) {
      return;
    }
    this->RelationPointRatioPercent = fVar1;
  }
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  return;
}

// OnSetViewModel @ 14be3ae10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_NpcRelationData::OnSetViewModel
          (UDS_VM_NpcRelationData *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  TWeakObjectPtr<UDS_NpcRelationData,FWeakObjectPtr> TVar6;
  UObject *pUVar7;
  undefined1 auStackY_2e8 [32];
  int local_2b8;
  int local_2b4;
  FName local_2b0;
  TSharedPtr<FDS_ViewModelContext_NpcRelationData,1> local_2a8;
  FName local_298;
  int local_290;
  TSharedPtr<FDS_ViewModelContext,1> local_288;
  undefined1 local_278 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_288.Object = param_1->Object;
  local_288.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_288.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_288.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_288.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_NpcRelationData>(&local_2a8,&local_288);
  iVar3 = FFieldNotificationClassDescriptor::NpcTID.BitNumber;
  if (local_2a8.Object == (FDS_ViewModelContext_NpcRelationData *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_268._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_268,"UDS_VM_NpcRelationData::OnSetViewModel",0x26,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_268.Ptr,0x16,L"context is Invalid.");
      if ((void *)local_268._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_268._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2a8.SharedReferenceCount.ReferenceController);
  }
  else {
    local_2b0 = FFieldNotificationClassDescriptor::NpcTID.FieldName;
    if ((local_2a8.Object == (FDS_ViewModelContext_NpcRelationData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (this->NpcTID != (local_2a8.Object)->NpcTID) {
      this->NpcTID = (local_2a8.Object)->NpcTID;
      local_290 = iVar3;
      local_298 = local_2b0;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_298);
    }
    TVar6 = UDS_NpcRelationData::GetData
                      ((ulong64)local_278,(local_2a8.Object)->PlayerEntityID,
                       SUB41((local_2a8.Object)->NpcTID,0));
                    /* WARNING: Load size is inaccurate */
    (this->NpcRelationData).WeakPtr = *TVar6.WeakPtr;
    bVar4 = FWeakObjectPtr::IsValid(&(this->NpcRelationData).WeakPtr);
    if (bVar4) {
      pUVar7 = FWeakObjectPtr::Get(&(this->NpcRelationData).WeakPtr);
      local_2b8 = *(int *)&pUVar7[3].field_0x10;
      OnChanged_RelationPoint(this,&local_2b8);
      pUVar7 = FWeakObjectPtr::Get(&(this->NpcRelationData).WeakPtr);
      local_2b4 = *(int *)&pUVar7[3].field_0x14;
      OnChanged_RelationGrade(this,&local_2b4);
    }
    else {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_VM_NpcRelationData::OnSetViewModel",0x26,Yes);
        UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,0x1f,L"NpcRelationData is Invalid.")
        ;
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2a8.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14be55750

void __thiscall UDS_VM_NpcRelationData::UnbindModel(UDS_VM_NpcRelationData *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->NpcRelationData).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->NpcRelationData).WeakPtr);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar2[2].field_0x8,
               (UObject *)this);
    pUVar2 = FWeakObjectPtr::Get(&(this->NpcRelationData).WeakPtr);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar2[2].field_0x20,
               (UObject *)this);
  }
  return;
}

