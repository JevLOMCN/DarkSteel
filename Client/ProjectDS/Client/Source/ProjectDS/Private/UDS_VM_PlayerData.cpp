// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 24

// StaticClass @ 14b6bb020

UClass * __cdecl UDS_VM_PlayerData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_PlayerData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_PlayerData",
               &Z_Registration_Info_UClass_UDS_VM_PlayerData.InnerSingleton,
               StaticRegisterNativesUDS_VM_PlayerData,0x148,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_PlayerData>,
               InternalVTableHelperCtorCaller<UDS_VM_PlayerData>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_PlayerData.InnerSingleton;
}

// UDS_VM_PlayerData @ 14b6bd630

UDS_VM_PlayerData * __thiscall
UDS_VM_PlayerData::UDS_VM_PlayerData(UDS_VM_PlayerData *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_PlayerData__6B_;
  FText::FText(&this->PlayerName);
  (this->DSText_AscenderLevel).StringTableType = StringUi;
  this->PlayerGrade = 0;
  this->PlayerExp = 0;
  this->CharCount = 0;
  this->AllCharCount = 0;
  this->PlayerIconTID = 0;
  this->PlayerIconID = 0;
  this->PlayerExpRatio = 0.0;
  this->PlayerExpPercent = 0.0;
  this->IsPlayerLevelCapBlock = false;
  (this->DSText_AscenderLevel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DSText_AscenderLevel).StringEnumTableNameID.Number = 0;
  (this->DSText_AscenderLevel).DateTime.Ticks = 0;
  (this->DSText_AscenderLevel).TimeSpan.Ticks = 0;
  (this->DSText_AscenderLevel).TimeExpressionType = None;
  (this->DSText_AscenderLevel).IsExpression = false;
  (this->DSText_AscenderLevel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DSText_AscenderLevel).UniqueString.Data.ArrayNum = 0;
  (this->DSText_AscenderLevel).UniqueString.Data.ArrayMax = 0;
  (this->DSText_AscenderLevel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSText_AscenderLevel).FormatArgs.ArrayNum = 0;
  (this->DSText_AscenderLevel).FormatArgs.ArrayMax = 0;
  (this->EventField_ChangedPenaltyStageList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EventField_ChangedPenaltyStageList).UserObjectList.ArrayNum = 0;
  (this->EventField_ChangedPenaltyStageList).UserObjectList.ArrayMax = 0;
  (this->DSText_AscenderLevel).StringTableID = 0x2b07;
  (this->PlayerData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->PlayerData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UDS_VM_PlayerData @ 14b6bd720

UDS_VM_PlayerData * __thiscall
UDS_VM_PlayerData::UDS_VM_PlayerData(UDS_VM_PlayerData *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_PlayerData__6B_;
  FText::FText(&this->PlayerName);
  (this->DSText_AscenderLevel).StringTableType = StringUi;
  this->PlayerGrade = 0;
  this->PlayerExp = 0;
  this->CharCount = 0;
  this->AllCharCount = 0;
  this->PlayerIconTID = 0;
  this->PlayerIconID = 0;
  this->PlayerExpRatio = 0.0;
  this->PlayerExpPercent = 0.0;
  this->IsPlayerLevelCapBlock = false;
  (this->DSText_AscenderLevel).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DSText_AscenderLevel).StringEnumTableNameID.Number = 0;
  (this->DSText_AscenderLevel).DateTime.Ticks = 0;
  (this->DSText_AscenderLevel).TimeSpan.Ticks = 0;
  (this->DSText_AscenderLevel).TimeExpressionType = None;
  (this->DSText_AscenderLevel).IsExpression = false;
  (this->DSText_AscenderLevel).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DSText_AscenderLevel).UniqueString.Data.ArrayNum = 0;
  (this->DSText_AscenderLevel).UniqueString.Data.ArrayMax = 0;
  (this->DSText_AscenderLevel).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSText_AscenderLevel).FormatArgs.ArrayNum = 0;
  (this->DSText_AscenderLevel).FormatArgs.ArrayMax = 0;
  (this->EventField_ChangedPenaltyStageList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EventField_ChangedPenaltyStageList).UserObjectList.ArrayNum = 0;
  (this->EventField_ChangedPenaltyStageList).UserObjectList.ArrayMax = 0;
  (this->DSText_AscenderLevel).StringTableID = 0x2b07;
  (this->PlayerData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->PlayerData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UDS_VM_PlayerData @ 14b6bf150

void __thiscall UDS_VM_PlayerData::~UDS_VM_PlayerData(UDS_VM_PlayerData *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_PlayerData__6B_;
  pFVar1 = (this->EventField_ChangedPenaltyStageList).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->DSText_AscenderLevel).FormatArgs.AllocatorInstance.Data,
             (this->DSText_AscenderLevel).FormatArgs.ArrayNum);
  pFVar1 = (this->DSText_AscenderLevel).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DSText_AscenderLevel).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->PlayerName).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6c0cb0

IClassDescriptor * __thiscall
UDS_VM_PlayerData::GetFieldNotificationDescriptor(UDS_VM_PlayerData *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_PlayerData::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6c1220

UClass * __cdecl UDS_VM_PlayerData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_PlayerData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_PlayerData",
               &Z_Registration_Info_UClass_UDS_VM_PlayerData.InnerSingleton,
               StaticRegisterNativesUDS_VM_PlayerData,0x148,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_PlayerData>,
               InternalVTableHelperCtorCaller<UDS_VM_PlayerData>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_PlayerData.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_PlayerData @ 14b6c1940

void __cdecl UDS_VM_PlayerData::StaticRegisterNativesUDS_VM_PlayerData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_PlayerData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangedCharacterCount @ 14b6c2b70

void __cdecl
UDS_VM_PlayerData::execOnChangedCharacterCount(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangedCharacterCount((UDS_VM_PlayerData *)param_1,local_res10[0]);
  return;
}

// execOnChangedPlayerExp @ 14b6c2c00

void __cdecl
UDS_VM_PlayerData::execOnChangedPlayerExp(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  long64 *plVar2;
  long64 local_res10;
  
  local_res10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  plVar2 = &local_res10;
  if ((long64 *)param_2->MostRecentPropertyAddress != (long64 *)0x0) {
    plVar2 = (long64 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangedPlayerExp((UDS_VM_PlayerData *)param_1,plVar2);
  return;
}

// execOnChangedPlayerGrade @ 14b6c2ca0

void __cdecl
UDS_VM_PlayerData::execOnChangedPlayerGrade(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangedPlayerGrade((UDS_VM_PlayerData *)param_1,local_res10[0]);
  return;
}

// execOnChangedPlayerGradeCap @ 14b6c2d30

void __cdecl
UDS_VM_PlayerData::execOnChangedPlayerGradeCap(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangedPlayerGradeCap((UDS_VM_PlayerData *)param_1,local_res10[0]);
  return;
}

// execOnChangedPlayerIconID @ 14b6c2dc0

void __cdecl
UDS_VM_PlayerData::execOnChangedPlayerIconID(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangedPlayerIconID((UDS_VM_PlayerData *)param_1,local_res10[0]);
  return;
}

// execOnChangedPlayerName @ 14b6c2e50

void __cdecl
UDS_VM_PlayerData::execOnChangedPlayerName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangedPlayerName((UDS_VM_PlayerData *)param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// BindModel @ 14be12bb0

void __thiscall UDS_VM_PlayerData::BindModel(UDS_VM_PlayerData *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals(&this->PlayerData,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->PlayerData).WeakPtr);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_PlayerData>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar2[2].field_0x8,(UDS_VM_PlayerData *)&stack0x00000008,(pmf_f90a42f0 *)this);
    pUVar2 = FWeakObjectPtr::Get(&(this->PlayerData).WeakPtr);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_PlayerData>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               (pUVar2 + 3),(UDS_VM_PlayerData *)&stack0x00000008,(pmf_f90a42f0 *)this);
    pUVar2 = FWeakObjectPtr::Get(&(this->PlayerData).WeakPtr);
    TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_PlayerData>
              ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar2[0x12].field_0x10,(UDS_VM_PlayerData *)&stack0x00000008,
               (pmf_601363e2 *)this);
  }
  return;
}

// OnChangedCharacterCount @ 14be29b60

void __thiscall UDS_VM_PlayerData::OnChangedCharacterCount(UDS_VM_PlayerData *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::CharCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CharCount.FieldName;
  if (this->CharCount != param_1) {
    this->CharCount = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnChangedPenaltyStageList @ 14be2a600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_PlayerData::OnChangedPenaltyStageList(UDS_VM_PlayerData *this,ulong64 *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  UObject *pUVar5;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar6;
  FDS_ViewModelContext *pFVar7;
  UScriptStruct *pUVar8;
  UDS_ViewModelContextManager *this_01;
  FDS_ViewModelContext *pFVar9;
  FDS_ViewModelContext *pFVar10;
  FWeakObjectPtr *this_02;
  uint uVar11;
  longlong lVar13;
  undefined1 auStackY_2f8 [32];
  UDS_UserObjectListItem *local_2c8;
  FDS_EntryBindingEventField *local_2c0;
  FWeakObjectPtr *local_2b8;
  UDS_VM_PlayerData *local_2b0;
  FName local_2a8;
  int local_2a0;
  TSharedPtr<FDS_ViewModelContext,1> local_298;
  TSharedPtr<FDS_ViewModelContext,1> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  FDS_ViewModelContext *pFVar12;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_2c0 = &this->EventField_ChangedPenaltyStageList;
  local_2b0 = this;
  FDS_EntryBindingEventField::Reset(local_2c0);
  this_02 = &(this->PlayerData).WeakPtr;
  local_2b8 = this_02;
  bVar2 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)this_02,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_278._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_278,"UDS_VM_PlayerData::OnChangedPenaltyStageList",0x2c,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_278.Ptr,0x81,L"PlayerData is nullptr.");
      if ((void *)local_278._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
    }
  }
  else {
    pUVar4 = FWeakObjectPtr::Get(this_02);
    if (*(ulong64 *)&pUVar4[8].field_0x10 == *param_1) {
      pFVar9 = (FDS_ViewModelContext *)0x0;
      lVar13 = 0x2a4;
      pFVar12 = pFVar9;
      do {
        pUVar4 = FWeakObjectPtr::Get(this_02);
        pUVar5 = FWeakObjectPtr::Get(this_02);
        if (*(int *)((longlong)pUVar4 + lVar13 + -0x1c) != 1) {
          this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14be2a943;
          }
          else {
            if (this_00 == (UDS_UserObjectListItem *)0x0) {
LAB_14be2a943:
              pUVar3 = UDS_LogManager::GetInst();
              if (pUVar3 == (UDS_LogManager *)0x0) {
                return;
              }
              pUVar3 = UDS_LogManager::GetInst();
              local_158._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_158,"UDS_VM_PlayerData::OnChangedPenaltyStageList",0x2c,Yes);
              UDS_LogManager::PrintLog(pUVar3,1,Warning,local_158.Ptr,0x98,L"listItem is nullptr.");
              if ((void *)local_158._padding_ == (void *)0x0) {
                return;
              }
              FMemory::Free((void *)local_158._padding_);
              return;
            }
            UE::GC::MarkAsReachable((UObject *)this_00);
          }
          pFVar6 = ::operator_new(0x30);
          pFVar10 = pFVar9;
          if (pFVar6 != (FDS_ViewModelContext *)0x0) {
            *(undefined8 *)&pFVar6->ViewModelTemplateKey = 0;
            ((atomic<int> *)&pFVar6[1].DerivedStaticStruct)[1] = (atomic<int>)0x0;
            *(undefined8 *)&pFVar6->DerivedStaticStruct = 0;
            (pFVar6->ViewModelName).ComparisonIndex = 0;
            (pFVar6->ViewModelName).Number = 0;
            pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_PenaltyStage__6B_;
            *(undefined4 *)&pFVar6[1]._padding_ = 7;
            *(undefined8 *)((longlong)&pFVar6[1]._padding_ + 4) = 1;
            pFVar10 = pFVar6;
          }
          pFVar7 = ::operator_new(0x20);
          pFVar6 = pFVar9;
          if (pFVar7 != (FDS_ViewModelContext *)0x0) {
            *(atomic<int> *)&pFVar7->DerivedStaticStruct = (atomic<int>)0x1;
            *(code **)&(pFVar7->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
            pFVar7->_padding_ =
                 (longlong)
                 &
                 ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_PenaltyStage__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
            ;
            ((atomic<int> *)&pFVar7->DerivedStaticStruct)[1] = (atomic<int>)0x1;
            *(FDS_ViewModelContext **)&pFVar7->ViewModelTemplateKey = pFVar10;
            pFVar6 = pFVar7;
          }
          if ((pFVar10 == (FDS_ViewModelContext *)0x0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pUVar8 = FDS_ViewModelContext_PenaltyStage::StaticStruct();
          *(UScriptStruct **)&pFVar10->DerivedStaticStruct = pUVar8;
          this_01 = UDS_ViewModelContextManager::GetInst();
          if (this_01 != (UDS_ViewModelContextManager *)0x0) {
            if (pFVar6 != (FDS_ViewModelContext *)0x0) {
              LOCK();
              *(atomic<int> *)&pFVar6->DerivedStaticStruct =
                   (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
              UNLOCK();
            }
            local_298.Object = pFVar10;
            local_298.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)pFVar6;
            UDS_ViewModelContextManager::RegisterContext(this_01,&local_298);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_298.SharedReferenceCount.ReferenceController);
          }
          pFVar10->ViewModelTemplateKey = Data_PenaltyStageInfo;
          *(int *)&pFVar10[1]._padding_ = (int)pFVar12;
          *(undefined4 *)((longlong)&pFVar10[1]._padding_ + 4) =
               *(undefined4 *)((longlong)pUVar4 + lVar13 + -0x1c);
          *(atomic<int> *)&pFVar10[1].DerivedStaticStruct =
               *(atomic<int> *)(&pUVar5->field_0x0 + lVar13);
          if (pFVar6 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar6->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_288.Object = pFVar10;
          local_288.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6
          ;
          UDS_UserObjectListItem::AddContext(this_00,&local_288);
          local_2c8 = this_00;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this_00);
          }
          FDS_EntryBindingEventField::Add(local_2c0,(TObjectPtr<UDS_UserObjectListItem>)&local_2c8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pFVar6);
          this = local_2b0;
          this_02 = local_2b8;
        }
        uVar11 = (int)pFVar12 + 1;
        pFVar12 = (FDS_ViewModelContext *)(ulonglong)uVar11;
        lVar13 = lVar13 + 4;
      } while ((int)uVar11 < 7);
      local_2a0 = FFieldNotificationClassDescriptor::EventField_ChangedPenaltyStageList.BitNumber;
      local_2a8 = FFieldNotificationClassDescriptor::EventField_ChangedPenaltyStageList.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2a8);
    }
  }
  return;
}

// OnChangedPlayerExp @ 14be2a9d0

void __thiscall UDS_VM_PlayerData::OnChangedPlayerExp(UDS_VM_PlayerData *this,long64 *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::PlayerExp.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::PlayerExp.FieldName;
  if (this->PlayerExp != *param_1) {
    this->PlayerExp = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnChangedPlayerExpRatio @ 14be2aa20

void __thiscall UDS_VM_PlayerData::OnChangedPlayerExpRatio(UDS_VM_PlayerData *this,float param_1)

{
  float fVar1;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::PlayerExpRatio.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::PlayerExpRatio.FieldName;
  if (param_1 != this->PlayerExpRatio) {
    this->PlayerExpRatio = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::PlayerExpPercent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::PlayerExpPercent.FieldName;
  fVar1 = this->PlayerExpRatio * __real_42c80000;
  if (fVar1 != this->PlayerExpPercent) {
    this->PlayerExpPercent = fVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnChangedPlayerGrade @ 14be2aac0

void __thiscall UDS_VM_PlayerData::OnChangedPlayerGrade(UDS_VM_PlayerData *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::PlayerGrade.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::PlayerGrade.FieldName;
  if (this->PlayerGrade != param_1) {
    this->PlayerGrade = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnChangedPlayerGradeCap @ 14be2ab10

void __thiscall UDS_VM_PlayerData::OnChangedPlayerGradeCap(UDS_VM_PlayerData *this,int param_1)

{
  bool bVar1;
  UDS_PlayerData *this_00;
  FName local_18;
  int local_10;
  
  bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals(&this->PlayerData,(void *)0x0);
  local_10 = FFieldNotificationClassDescriptor::IsPlayerLevelCapBlock.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsPlayerLevelCapBlock.FieldName;
  if (!bVar1) {
    this_00 = (UDS_PlayerData *)FWeakObjectPtr::Get(&(this->PlayerData).WeakPtr);
    bVar1 = UDS_PlayerData::IsPlayerLevelCapBlock(this_00);
    if (this->IsPlayerLevelCapBlock != bVar1) {
      this->IsPlayerLevelCapBlock = bVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// OnChangedPlayerIconID @ 14be2aba0

void __thiscall UDS_VM_PlayerData::OnChangedPlayerIconID(UDS_VM_PlayerData *this,int param_1)

{
  FName FVar1;
  int iVar2;
  FDS_PlayerIconTableRow *pFVar3;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::PlayerIconTID.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::PlayerIconTID.FieldName;
  if (this->PlayerIconTID != param_1) {
    this->PlayerIconTID = param_1;
    local_10 = iVar2;
    local_18 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  pFVar3 = FDS_PlayerIconTableRow::GetRef((longlong)this->PlayerIconTID,true);
  local_10 = FFieldNotificationClassDescriptor::PlayerIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::PlayerIconID.FieldName;
  if (this->PlayerIconID != pFVar3->ID_PlayerIcon) {
    this->PlayerIconID = pFVar3->ID_PlayerIcon;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnChangedPlayerName @ 14be2ac40

void __thiscall UDS_VM_PlayerData::OnChangedPlayerName(UDS_VM_PlayerData *this,FString *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  FText *pFVar6;
  undefined1 local_res8 [8];
  FName local_38;
  int local_30;
  FText local_28;
  
  iVar4 = FFieldNotificationClassDescriptor::PlayerName.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::PlayerName.FieldName;
  pFVar6 = FText::FromString(&local_28,param_1);
  bVar5 = FText::IdenticalTo(&this->PlayerName,pFVar6,None);
  if (!bVar5) {
    pIVar1 = (pFVar6->TextData).Reference;
    pIVar2 = (this->PlayerName).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->PlayerName).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->PlayerName).Flags = pFVar6->Flags;
    local_38 = FVar3;
    local_30 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// OnSetViewModel @ 14be3be30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_PlayerData::OnSetViewModel
          (UDS_VM_PlayerData *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *this_00;
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  int iVar8;
  TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> TVar9;
  UDS_LogManager *pUVar10;
  UObject *pUVar11;
  FText *pFVar12;
  UDS_PlayerData *pUVar13;
  FDS_PlayerIconTableRow *pFVar14;
  undefined8 uVar15;
  ForAnyElementType FVar16;
  float fVar17;
  undefined1 auStackY_2b8 [32];
  undefined1 local_288 [8];
  TArray<FDS_CharacterBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_280;
  TSharedPtr<FDS_ViewModelContext_PlayerData,1> local_270;
  undefined1 local_260 [8];
  ulong64 local_258 [2];
  FName local_248;
  int local_240;
  FName local_238;
  int local_230;
  FName local_228;
  int local_220;
  FName local_218;
  int local_210;
  FName local_208;
  int local_200;
  FName local_1f8;
  int local_1f0;
  FName local_1e8;
  int local_1e0;
  FName local_1d8;
  int local_1d0;
  FName local_1c8;
  int local_1c0;
  FName local_1b8;
  int local_1b0;
  TSharedPtr<FDS_ViewModelContext,1> local_1a8;
  undefined1 local_198 [8];
  FText local_190;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_1a8.Object = param_1->Object;
  local_1a8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_1a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_PlayerData>(&local_270,&local_1a8);
  if (local_270.Object == (FDS_ViewModelContext_PlayerData *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8372277018217152531>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_PlayerData.cpp"
                       ,0x13,"context.IsValid()");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_270.SharedReferenceCount.ReferenceController);
    goto LAB_14be3c372;
  }
  this_00 = &this->PlayerData;
  TVar9 = UDS_PlayerData::GetData((ulong64)local_198,(local_270.Object)->PlayerEntityID,false);
                    /* WARNING: Load size is inaccurate */
  this_00->WeakPtr = *TVar9.WeakPtr;
  bVar7 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar7) {
    pUVar11 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    iVar8 = FFieldNotificationClassDescriptor::PlayerName.BitNumber;
    FVar6 = FFieldNotificationClassDescriptor::PlayerName.FieldName;
    pFVar12 = FText::FromString(&local_190,(FString *)&pUVar11[7].field_0x20);
    bVar7 = FText::IdenticalTo(&this->PlayerName,pFVar12,None);
    if (!bVar7) {
      pIVar3 = (pFVar12->TextData).Reference;
      pIVar4 = (this->PlayerName).TextData.Reference;
      if (pIVar4 != pIVar3) {
        (this->PlayerName).TextData.Reference = pIVar3;
        if (pIVar3 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_260);
        }
        if (pIVar4 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
        }
      }
      (this->PlayerName).Flags = pFVar12->Flags;
      local_248 = FVar6;
      local_240 = iVar8;
      (**(code **)(this->_padding_ + 0x38))();
    }
    if (local_190.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_190.TextData.Reference + 0x10))();
    }
    pUVar11 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    iVar8 = FFieldNotificationClassDescriptor::PlayerGrade.BitNumber;
    FVar6 = FFieldNotificationClassDescriptor::PlayerGrade.FieldName;
    if (this->PlayerGrade != *(int *)&pUVar11[6].field_0x10) {
      this->PlayerGrade = *(int *)&pUVar11[6].field_0x10;
      local_230 = iVar8;
      local_238 = FVar6;
      (**(code **)(this->_padding_ + 0x38))();
    }
    FWeakObjectPtr::Get(&this_00->WeakPtr);
    bVar7 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
    iVar8 = FFieldNotificationClassDescriptor::IsPlayerLevelCapBlock.BitNumber;
    FVar6 = FFieldNotificationClassDescriptor::IsPlayerLevelCapBlock.FieldName;
    if (!bVar7) {
      pUVar13 = (UDS_PlayerData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      bVar7 = UDS_PlayerData::IsPlayerLevelCapBlock(pUVar13);
      if (this->IsPlayerLevelCapBlock != bVar7) {
        this->IsPlayerLevelCapBlock = bVar7;
        local_228 = FVar6;
        local_220 = iVar8;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_228);
      }
    }
    pUVar11 = FWeakObjectPtr::Get(&(this->PlayerData).WeakPtr);
    iVar8 = FFieldNotificationClassDescriptor::PlayerExp.BitNumber;
    FVar6 = FFieldNotificationClassDescriptor::PlayerExp.FieldName;
    if (this->PlayerExp != *(longlong *)&pUVar11[6].field_0x18) {
      this->PlayerExp = *(longlong *)&pUVar11[6].field_0x18;
      local_210 = iVar8;
      local_218 = FVar6;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_218);
    }
    pUVar13 = (UDS_PlayerData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    fVar17 = UDS_PlayerData::GetPlayerExpRatio(pUVar13);
    iVar8 = FFieldNotificationClassDescriptor::PlayerExpRatio.BitNumber;
    FVar6 = FFieldNotificationClassDescriptor::PlayerExpRatio.FieldName;
    if (fVar17 != this->PlayerExpRatio) {
      this->PlayerExpRatio = fVar17;
      local_200 = iVar8;
      local_208 = FVar6;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_208);
    }
    iVar8 = FFieldNotificationClassDescriptor::PlayerExpPercent.BitNumber;
    FVar6 = FFieldNotificationClassDescriptor::PlayerExpPercent.FieldName;
    fVar17 = this->PlayerExpRatio * __real_42c80000;
    if (fVar17 != this->PlayerExpPercent) {
      this->PlayerExpPercent = fVar17;
      local_1f0 = iVar8;
      local_1f8 = FVar6;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1f8);
    }
    pUVar11 = FWeakObjectPtr::Get(&(this->PlayerData).WeakPtr);
    iVar8 = FFieldNotificationClassDescriptor::PlayerIconTID.BitNumber;
    FVar6 = FFieldNotificationClassDescriptor::PlayerIconTID.FieldName;
    if (this->PlayerIconTID != *(int *)&pUVar11[8].field_0x1c) {
      this->PlayerIconTID = *(int *)&pUVar11[8].field_0x1c;
      local_1e0 = iVar8;
      local_1e8 = FVar6;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1e8);
    }
    pFVar14 = FDS_PlayerIconTableRow::GetRef((longlong)this->PlayerIconTID,true);
    iVar8 = FFieldNotificationClassDescriptor::PlayerIconID.BitNumber;
    FVar6 = FFieldNotificationClassDescriptor::PlayerIconID.FieldName;
    if (this->PlayerIconID != pFVar14->ID_PlayerIcon) {
      this->PlayerIconID = pFVar14->ID_PlayerIcon;
      local_1d0 = iVar8;
      local_1d8 = FVar6;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1d8);
    }
    pUVar13 = (UDS_PlayerData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    iVar8 = UDS_PlayerData::GetCharacterCount(pUVar13);
    FVar6 = FFieldNotificationClassDescriptor::CharCount.FieldName;
    if (this->CharCount != iVar8) {
      local_1c0 = FFieldNotificationClassDescriptor::CharCount.BitNumber;
      this->CharCount = iVar8;
      local_1c8 = FVar6;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1c8);
    }
    pUVar11 = FWeakObjectPtr::Get(&(this->PlayerData).WeakPtr);
    local_258[0] = *(ulong64 *)&pUVar11[8].field_0x10;
    OnChangedPenaltyStageList(this,local_258);
    FDS_CharacterBaseTableRow::GetAll(&local_280);
    iVar8 = local_280.ArrayNum;
    this->AllCharCount = 0;
    pFVar1 = local_280.AllocatorInstance.Data + (longlong)iVar8 * 8;
    uVar15 = local_280._8_8_;
    FVar16.Data = local_280.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar15 != iVar8) {
        `TCheckedPointerIterator<FDS_CharacterBaseTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_288);
        uVar15 = local_280._8_8_;
      }
      if (FVar16.Data == pFVar1) break;
      if (0 < *(int *)(*(longlong *)FVar16.Data + 0x20)) {
        this->AllCharCount = this->AllCharCount + 1;
      }
      FVar16.Data = FVar16.Data + 8;
    }
    local_1b0 = FFieldNotificationClassDescriptor::AllCharCount.BitNumber;
    local_1b8 = FFieldNotificationClassDescriptor::AllCharCount.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
LAB_14be3c356:
    if (local_280.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.AllocatorInstance.Data);
    }
  }
  else {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 != (UDS_LogManager *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      local_178._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_178,"UDS_VM_PlayerData::OnSetViewModel",0x21,Yes);
      UDS_LogManager::PrintLog(pUVar10,1,Display,local_178.Ptr,0x1c,L"playerData is Invalid.");
      local_280.AllocatorInstance.Data = (FScriptContainerElement *)local_178._padding_;
      goto LAB_14be3c356;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_270.SharedReferenceCount.ReferenceController);
LAB_14be3c372:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14be55900

void __thiscall UDS_VM_PlayerData::UnbindModel(UDS_VM_PlayerData *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals(&this->PlayerData,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->PlayerData).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[2].field_0x8,this);
    pUVar2 = FWeakObjectPtr::Get(&(this->PlayerData).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar2 + 3),this);
    pUVar2 = FWeakObjectPtr::Get(&(this->PlayerData).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[0x12].field_0x10,this);
  }
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  return;
}

