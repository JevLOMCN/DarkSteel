// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 30

// StaticClass @ 14b6bb510

UClass * __cdecl UDS_VM_PlayerSkillData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_PlayerSkillData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_PlayerSkillData",
               &Z_Registration_Info_UClass_UDS_VM_PlayerSkillData.InnerSingleton,
               StaticRegisterNativesUDS_VM_PlayerSkillData,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_PlayerSkillData>,
               InternalVTableHelperCtorCaller<UDS_VM_PlayerSkillData>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_PlayerSkillData.InnerSingleton;
}

// UDS_VM_PlayerSkillData @ 14b6bdbf0

UDS_VM_PlayerSkillData * __thiscall
UDS_VM_PlayerSkillData::UDS_VM_PlayerSkillData(UDS_VM_PlayerSkillData *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_PlayerSkillData__6B_;
  this->Level = 0;
  this->Ascend = 0;
  this->Exp = 0;
  (this->PlayerSkillData).field0_0x0.DebugPtr = (UDS_PlayerSkillData *)0x0;
  return this;
}

// UDS_VM_PlayerSkillData @ 14b6bdc50

UDS_VM_PlayerSkillData * __thiscall
UDS_VM_PlayerSkillData::UDS_VM_PlayerSkillData
          (UDS_VM_PlayerSkillData *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_PlayerSkillData__6B_;
  this->Level = 0;
  this->Ascend = 0;
  this->Exp = 0;
  (this->PlayerSkillData).field0_0x0.DebugPtr = (UDS_PlayerSkillData *)0x0;
  return this;
}

// ~UDS_VM_PlayerSkillData @ 14b6bf3b0

void __thiscall UDS_VM_PlayerSkillData::~UDS_VM_PlayerSkillData(UDS_VM_PlayerSkillData *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_PlayerSkillData__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6c0e00

IClassDescriptor * __thiscall
UDS_VM_PlayerSkillData::GetFieldNotificationDescriptor(UDS_VM_PlayerSkillData *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_PlayerSkillData::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6c1460

UClass * __cdecl UDS_VM_PlayerSkillData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_PlayerSkillData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_PlayerSkillData",
               &Z_Registration_Info_UClass_UDS_VM_PlayerSkillData.InnerSingleton,
               StaticRegisterNativesUDS_VM_PlayerSkillData,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_PlayerSkillData>,
               InternalVTableHelperCtorCaller<UDS_VM_PlayerSkillData>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_PlayerSkillData.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_PlayerSkillData @ 14b6c19d0

void __cdecl UDS_VM_PlayerSkillData::StaticRegisterNativesUDS_VM_PlayerSkillData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_PlayerSkillData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execDescription @ 14b6c27d0

void __cdecl UDS_VM_PlayerSkillData::execDescription(UObject *param_1,FFrame *param_2,void *param_3)

{
  FText *pFVar1;
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = Description((UDS_VM_PlayerSkillData *)param_1,&local_18);
  FText::operator=(param_3,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execID_Category @ 14b6c2970

void __cdecl UDS_VM_PlayerSkillData::execID_Category(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = ID_Category((UDS_VM_PlayerSkillData *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execID_LevelGroup @ 14b6c29b0

void __cdecl
UDS_VM_PlayerSkillData::execID_LevelGroup(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = ID_LevelGroup((UDS_VM_PlayerSkillData *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execID_SkillIcon @ 14b6c29f0

void __cdecl
UDS_VM_PlayerSkillData::execID_SkillIcon(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = ID_SkillIcon((UDS_VM_PlayerSkillData *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execLevelCondition @ 14b6c2ab0

void __cdecl
UDS_VM_PlayerSkillData::execLevelCondition(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = LevelCondition((UDS_VM_PlayerSkillData *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execMaxLevel @ 14b6c2af0

void __cdecl UDS_VM_PlayerSkillData::execMaxLevel(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = MaxLevel((UDS_VM_PlayerSkillData *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execOnPlayerSkillDirty @ 14b6c2ef0

void __cdecl
UDS_VM_PlayerSkillData::execOnPlayerSkillDirty(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_DataBase *local_res10;
  
  local_res10 = (UDS_DataBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnPlayerSkillDirty((UDS_VM_PlayerSkillData *)param_1,local_res10);
  return;
}

// execSkillName @ 14b6c33a0

void __cdecl UDS_VM_PlayerSkillData::execSkillName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FText *pFVar1;
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = SkillName((UDS_VM_PlayerSkillData *)param_1,&local_18);
  FText::operator=(param_3,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// BindModel @ 14bf41480

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_VM_PlayerSkillData::BindModel(UDS_VM_PlayerSkillData *this)

{
  UDS_PlayerSkillData *pUVar1;
  code *pcVar2;
  bool bVar3;
  char *pcVar4;
  UObject *this_00;
  UFunction *pUVar5;
  char *pcVar6;
  <lambda_1> local_res8 [8];
  FName local_res10;
  FName local_res18;
  UDS_VM_PlayerSkillData *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FWeakObjectPtr local_b0;
  FName local_a8;
  FName *local_a0;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_98;
  FDestructionSentinel local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = (this->PlayerSkillData).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_PlayerSkillData *)0x0) {
    return;
  }
  pcVar4 = strstr("&UDS_VM_PlayerSkillData::OnPlayerSkillDirty","::");
  if (pcVar4 == (char *)0x0) {
LAB_14bf4151b:
    pcVar6 = &DAT_00000002;
LAB_14bf41520:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    do {
      pcVar6 = pcVar4;
      pcVar4 = strstr(pcVar6 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar6 == (char *)0x0) goto LAB_14bf4151b;
    pcVar6 = pcVar6 + 2;
    if (*pcVar6 == '0') goto LAB_14bf41520;
  }
  ::FName::FName(&local_res18,pcVar6);
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.ObjectIndex = 0;
  local_b0.ObjectSerialNumber = 0;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  local_res10 = local_res18;
  local_res20 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UDS_VM_PlayerSkillData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_res20);
  local_a8 = local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_70);
  if ((local_a8 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_b0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
  }
  else {
    pUVar5 = UObject::FindFunction(this_00,local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_70);
    if (pUVar5 != (UFunction *)0x0) goto LAB_14bf41611;
  }
  local_a0 = &local_res10;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
  __Internal_BindDynamic<UDS_VM_PlayerSkillData>'::__l2::<lambda_1>::operator()(&local_a0);
LAB_14bf41611:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_58);
  local_98.Object = local_b0;
  local_98.FunctionName = local_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar1->_padding_,
             (FWriteAccessScope *)&local_88);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar1->_padding_,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar1->_padding_,&local_98);
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  return;
}

// BroadCastAllField @ 14bf43540

void __thiscall UDS_VM_PlayerSkillData::BroadCastAllField(UDS_VM_PlayerSkillData *this)

{
  longlong *plVar1;
  int iVar2;
  UDS_PlayerSkillData *pUVar3;
  code *pcVar4;
  FName FVar5;
  int iVar6;
  bool bVar7;
  FName local_88;
  int local_80;
  FName local_78;
  int local_70;
  FName local_68;
  int local_60;
  FName local_58;
  int local_50;
  FName local_48;
  int local_40;
  FName local_38;
  int local_30;
  FName local_28;
  int local_20;
  FName local_18;
  int local_10;
  
  iVar6 = FFieldNotificationClassDescriptor::Level.BitNumber;
  FVar5 = FFieldNotificationClassDescriptor::Level.FieldName;
  pUVar3 = (this->PlayerSkillData).field0_0x0.DebugPtr;
  if (pUVar3 == (UDS_PlayerSkillData *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1231129775280488352>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\PlayerSkill\\DS_VM_PlayerSkillData.cpp"
                       ,0x60,"false");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    iVar2 = pUVar3->Level;
    plVar1 = &this->_padding_;
    if (this->Level != iVar2) {
      this->Level = iVar2;
      local_80 = iVar6;
      local_88 = FVar5;
      (**(code **)(*plVar1 + 0x38))(plVar1,&local_88);
    }
    local_70 = FFieldNotificationClassDescriptor::ID_Category.BitNumber;
    local_78 = FFieldNotificationClassDescriptor::ID_Category.FieldName;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_78);
    local_60 = FFieldNotificationClassDescriptor::ID_SkillIcon.BitNumber;
    local_68 = FFieldNotificationClassDescriptor::ID_SkillIcon.FieldName;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_68);
    local_50 = FFieldNotificationClassDescriptor::SkillName.BitNumber;
    local_58 = FFieldNotificationClassDescriptor::SkillName.FieldName;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_58);
    local_40 = FFieldNotificationClassDescriptor::Description.BitNumber;
    local_48 = FFieldNotificationClassDescriptor::Description.FieldName;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_48);
    local_30 = FFieldNotificationClassDescriptor::ID_LevelGroup.BitNumber;
    local_38 = FFieldNotificationClassDescriptor::ID_LevelGroup.FieldName;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_38);
    local_20 = FFieldNotificationClassDescriptor::MaxLevel.BitNumber;
    local_28 = FFieldNotificationClassDescriptor::MaxLevel.FieldName;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
    local_10 = FFieldNotificationClassDescriptor::LevelCondition.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::LevelCondition.FieldName;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  }
  return;
}

// Description @ 14bf4ec50

FText * __thiscall
UDS_VM_PlayerSkillData::Description(UDS_VM_PlayerSkillData *this,FText *__return_storage_ptr__)

{
  UDS_PlayerSkillData *pUVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  FDS_PlayerSkillBaseTableRow *pFVar4;
  undefined1 local_res8 [8];
  
  pUVar1 = (this->PlayerSkillData).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_PlayerSkillData *)0x0) {
    pFVar3 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar2 = (pFVar3->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    __return_storage_ptr__->Flags = pFVar3->Flags;
    return __return_storage_ptr__;
  }
  pFVar4 = FDS_PlayerSkillBaseTableRow::GetRef((ulonglong)pUVar1->SkillType,true);
  FDS_StringIDWrapper::Text((FDS_StringIDWrapper *)&pFVar4->ID_Description,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPlayerEntityID @ 14bf57e60

ulong64 __thiscall UDS_VM_PlayerSkillData::GetPlayerEntityID(UDS_VM_PlayerSkillData *this)

{
  ulong64 uVar1;
  
  uVar1 = UDS_DataBase::GetEntityID((UDS_DataBase *)(this->PlayerSkillData).field0_0x0.DebugPtr);
  return uVar1;
}

// ID_Category @ 14bf59b40

int __thiscall UDS_VM_PlayerSkillData::ID_Category(UDS_VM_PlayerSkillData *this)

{
  UDS_PlayerSkillData *pUVar1;
  FDS_PlayerSkillBaseTableRow *pFVar2;
  
  pUVar1 = (this->PlayerSkillData).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_PlayerSkillData *)0x0) {
    return 0;
  }
  pFVar2 = FDS_PlayerSkillBaseTableRow::GetRef((ulonglong)pUVar1->SkillType,true);
  return pFVar2->ID_Category;
}

// ID_LevelGroup @ 14bf59b70

int __thiscall UDS_VM_PlayerSkillData::ID_LevelGroup(UDS_VM_PlayerSkillData *this)

{
  UDS_PlayerSkillData *pUVar1;
  FDS_PlayerSkillBaseTableRow *pFVar2;
  
  pUVar1 = (this->PlayerSkillData).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_PlayerSkillData *)0x0) {
    return 0;
  }
  pFVar2 = FDS_PlayerSkillBaseTableRow::GetRef((ulonglong)pUVar1->SkillType,true);
  return pFVar2->ID_LevelGroup;
}

// ID_SkillIcon @ 14bf59ba0

int __thiscall UDS_VM_PlayerSkillData::ID_SkillIcon(UDS_VM_PlayerSkillData *this)

{
  UDS_PlayerSkillData *pUVar1;
  FDS_PlayerSkillBaseTableRow *pFVar2;
  
  pUVar1 = (this->PlayerSkillData).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_PlayerSkillData *)0x0) {
    return 0;
  }
  pFVar2 = FDS_PlayerSkillBaseTableRow::GetRef((ulonglong)pUVar1->SkillType,true);
  return pFVar2->ID_SkillIcon;
}

// LevelCondition @ 14bf5de90

int __thiscall UDS_VM_PlayerSkillData::LevelCondition(UDS_VM_PlayerSkillData *this)

{
  return 0;
}

// MaxLevel @ 14bf5e3f0

int __thiscall UDS_VM_PlayerSkillData::MaxLevel(UDS_VM_PlayerSkillData *this)

{
  UDS_PlayerSkillData *pUVar1;
  FDS_PlayerSkillBaseTableRow *pFVar2;
  
  pUVar1 = (this->PlayerSkillData).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_PlayerSkillData *)0x0) {
    return 0;
  }
  pFVar2 = FDS_PlayerSkillBaseTableRow::GetRef((ulonglong)pUVar1->SkillType,true);
  return pFVar2->MaxLevel;
}

// OnPlayerSkillDirty @ 14bf66760

void __thiscall
UDS_VM_PlayerSkillData::OnPlayerSkillDirty(UDS_VM_PlayerSkillData *this,UDS_DataBase *param_1)

{
  longlong *plVar1;
  int iVar2;
  UDS_PlayerSkillData *pUVar3;
  code *pcVar4;
  FName FVar5;
  int iVar6;
  bool bVar7;
  FName FStack_88;
  int iStack_80;
  FName FStack_78;
  int iStack_70;
  FName FStack_68;
  int iStack_60;
  FName FStack_58;
  int iStack_50;
  FName FStack_48;
  int iStack_40;
  FName FStack_38;
  int iStack_30;
  FName FStack_28;
  int iStack_20;
  FName FStack_18;
  int iStack_10;
  
  iVar6 = FFieldNotificationClassDescriptor::Level.BitNumber;
  FVar5 = FFieldNotificationClassDescriptor::Level.FieldName;
  pUVar3 = (this->PlayerSkillData).field0_0x0.DebugPtr;
  if (pUVar3 == (UDS_PlayerSkillData *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1231129775280488352>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\PlayerSkill\\DS_VM_PlayerSkillData.cpp"
                       ,0x60,"false");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    iVar2 = pUVar3->Level;
    plVar1 = &this->_padding_;
    if (this->Level != iVar2) {
      this->Level = iVar2;
      iStack_80 = iVar6;
      FStack_88 = FVar5;
      (**(code **)(*plVar1 + 0x38))(plVar1,&FStack_88);
    }
    iStack_70 = FFieldNotificationClassDescriptor::ID_Category.BitNumber;
    FStack_78 = FFieldNotificationClassDescriptor::ID_Category.FieldName;
    (**(code **)(*plVar1 + 0x38))(plVar1,&FStack_78);
    iStack_60 = FFieldNotificationClassDescriptor::ID_SkillIcon.BitNumber;
    FStack_68 = FFieldNotificationClassDescriptor::ID_SkillIcon.FieldName;
    (**(code **)(*plVar1 + 0x38))(plVar1,&FStack_68);
    iStack_50 = FFieldNotificationClassDescriptor::SkillName.BitNumber;
    FStack_58 = FFieldNotificationClassDescriptor::SkillName.FieldName;
    (**(code **)(*plVar1 + 0x38))(plVar1,&FStack_58);
    iStack_40 = FFieldNotificationClassDescriptor::Description.BitNumber;
    FStack_48 = FFieldNotificationClassDescriptor::Description.FieldName;
    (**(code **)(*plVar1 + 0x38))(plVar1,&FStack_48);
    iStack_30 = FFieldNotificationClassDescriptor::ID_LevelGroup.BitNumber;
    FStack_38 = FFieldNotificationClassDescriptor::ID_LevelGroup.FieldName;
    (**(code **)(*plVar1 + 0x38))(plVar1,&FStack_38);
    iStack_20 = FFieldNotificationClassDescriptor::MaxLevel.BitNumber;
    FStack_28 = FFieldNotificationClassDescriptor::MaxLevel.FieldName;
    (**(code **)(*plVar1 + 0x38))(plVar1,&FStack_28);
    iStack_10 = FFieldNotificationClassDescriptor::LevelCondition.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::LevelCondition.FieldName;
    (**(code **)(*plVar1 + 0x38))(plVar1,&FStack_18);
  }
  return;
}

// OnSetViewModel @ 14bf69d50

void __thiscall
UDS_VM_PlayerSkillData::OnSetViewModel
          (UDS_VM_PlayerSkillData *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TWeakObjectPtr<UDS_PlayerSkillData,FWeakObjectPtr> this_00;
  UDS_PlayerSkillData *pUVar4;
  undefined1 local_res10 [8];
  TSharedPtr<FDS_ViewModelContext_PlayerSkillData,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_PlayerSkillData>(&local_28,&local_18);
  if (local_28.Object == (FDS_ViewModelContext_PlayerSkillData *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1231129775280488419>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\PlayerSkill\\DS_VM_PlayerSkillData.cpp"
                       ,0x1d,"context.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return;
  }
  this_00 = UDS_PlayerSkillData::GetDataByPlayerEntityID
                      ((ulong64)local_res10,(EDS_PlayerSkillType)(local_28.Object)->PlayerEntityID);
  pUVar4 = (UDS_PlayerSkillData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_PlayerSkillData *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->PlayerSkillData).field0_0x0.DebugPtr = pUVar4;
  BroadCastAllField(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetContext @ 14bf7a260

void __thiscall
UDS_VM_PlayerSkillData::SetContext
          (UDS_VM_PlayerSkillData *this,ulong64 param_1,EDS_PlayerSkillType param_2)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext *pFVar3;
  UScriptStruct *pUVar4;
  UDS_ViewModelContextManager *this_00;
  FDS_ViewModelContext *pFVar5;
  FDS_ViewModelContext *pFVar6;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  pFVar3 = ::operator_new(0x30);
  pFVar5 = (FDS_ViewModelContext *)0x0;
  pFVar6 = pFVar5;
  if (pFVar3 != (FDS_ViewModelContext *)0x0) {
    *(undefined8 *)&pFVar3->ViewModelTemplateKey = 0;
    *(undefined8 *)&pFVar3[1].DerivedStaticStruct = 0;
    *(undefined8 *)&pFVar3->DerivedStaticStruct = 0;
    (pFVar3->ViewModelName).ComparisonIndex = 0;
    (pFVar3->ViewModelName).Number = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_PlayerSkillData__6B_;
    pFVar3[1]._padding_ = 0;
    pFVar6 = pFVar3;
  }
  pFVar3 = ::operator_new(0x20);
  if (pFVar3 != (FDS_ViewModelContext *)0x0) {
    *(atomic<int> *)&pFVar3->DerivedStaticStruct = (atomic<int>)0x1;
    *(code **)&(pFVar3->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_PlayerSkillData__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    ((atomic<int> *)&pFVar3->DerivedStaticStruct)[1] = (atomic<int>)0x1;
    *(FDS_ViewModelContext **)&pFVar3->ViewModelTemplateKey = pFVar6;
    pFVar5 = pFVar3;
  }
  if ((pFVar6 == (FDS_ViewModelContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar4 = FDS_ViewModelContext_PlayerSkillData::StaticStruct();
  *(UScriptStruct **)&pFVar6->DerivedStaticStruct = pUVar4;
  this_00 = UDS_ViewModelContextManager::GetInst();
  if (this_00 != (UDS_ViewModelContextManager *)0x0) {
    if (pFVar5 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar5->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar5->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_38.Object = pFVar6;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
    UDS_ViewModelContextManager::RegisterContext(this_00,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  pFVar6->ViewModelTemplateKey = Data_PlayerSkillData;
  pFVar6[1]._padding_ = param_1;
  *(EDS_PlayerSkillType *)&pFVar6[1].DerivedStaticStruct = param_2;
  if (pFVar5 != (FDS_ViewModelContext *)0x0) {
    LOCK();
    *(atomic<int> *)&pFVar5->DerivedStaticStruct =
         (atomic<int>)((int)*(atomic<int> *)&pFVar5->DerivedStaticStruct + 1);
    UNLOCK();
  }
  local_28.Object = pFVar6;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar5;
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return;
}

// SetPlayerSkillType @ 14bf7c8d0

void __thiscall
UDS_VM_PlayerSkillData::SetPlayerSkillType(UDS_VM_PlayerSkillData *this,EDS_PlayerSkillType param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  TWeakObjectPtr<UDS_PlayerSkillData,FWeakObjectPtr> this_00;
  UDS_PlayerSkillData *pUVar4;
  undefined7 in_register_00000011;
  undefined1 local_res8 [8];
  
  if ((this->PlayerSkillData).field0_0x0.DebugPtr != (UDS_PlayerSkillData *)0x0) {
    (**(code **)(this->_padding_ + 0x2f8))(this,CONCAT71(in_register_00000011,param_1));
    uVar3 = UDS_DataBase::GetEntityID((UDS_DataBase *)(this->PlayerSkillData).field0_0x0.DebugPtr);
    this_00 = UDS_PlayerSkillData::GetDataByPlayerEntityID
                        ((ulong64)local_res8,(EDS_PlayerSkillType)uVar3);
    pUVar4 = (UDS_PlayerSkillData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar4 == (UDS_PlayerSkillData *)0x0)) {
      (this->PlayerSkillData).field0_0x0.DebugPtr = pUVar4;
      if (pUVar4 == (UDS_PlayerSkillData *)0x0) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1231129775280488370>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\PlayerSkill\\DS_VM_PlayerSkillData.cpp"
                           ,0x4e,"false");
        if (!bVar2) {
          return;
        }
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
      (this->PlayerSkillData).field0_0x0.DebugPtr = pUVar4;
    }
    (**(code **)(this->_padding_ + 0x2f0))(this);
    BroadCastAllField(this);
  }
  return;
}

// SkillName @ 14bf83310

FText * __thiscall
UDS_VM_PlayerSkillData::SkillName(UDS_VM_PlayerSkillData *this,FText *__return_storage_ptr__)

{
  UDS_PlayerSkillData *pUVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  FDS_PlayerSkillBaseTableRow *pFVar4;
  undefined1 local_res8 [8];
  
  pUVar1 = (this->PlayerSkillData).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_PlayerSkillData *)0x0) {
    pFVar3 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar2 = (pFVar3->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    __return_storage_ptr__->Flags = pFVar3->Flags;
    return __return_storage_ptr__;
  }
  pFVar4 = FDS_PlayerSkillBaseTableRow::GetRef((ulonglong)pUVar1->SkillType,true);
  FDS_StringIDWrapper::Text((FDS_StringIDWrapper *)&pFVar4->ID_SkillName,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// UnbindModel @ 14bf85090

void __thiscall UDS_VM_PlayerSkillData::UnbindModel(UDS_VM_PlayerSkillData *this)

{
  UDS_PlayerSkillData *pUVar1;
  
  pUVar1 = (this->PlayerSkillData).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_PlayerSkillData *)0x0) {
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar1->_padding_,
               (UObject *)this);
  }
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  return;
}

