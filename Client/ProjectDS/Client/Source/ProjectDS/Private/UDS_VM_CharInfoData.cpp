// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 29

// StaticClass @ 14b607dc0

UClass * __cdecl UDS_VM_CharInfoData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CharInfoData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CharInfoData",
               &Z_Registration_Info_UClass_UDS_VM_CharInfoData.InnerSingleton,
               StaticRegisterNativesUDS_VM_CharInfoData,0x288,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_CharInfoData>,
               InternalVTableHelperCtorCaller<UDS_VM_CharInfoData>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CharInfoData.InnerSingleton;
}

// UDS_VM_CharInfoData @ 14b60a2c0

UDS_VM_CharInfoData * __thiscall
UDS_VM_CharInfoData::UDS_VM_CharInfoData(UDS_VM_CharInfoData *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CharInfoData__6B_;
  (this->CharInfoData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->CharInfoData).WeakPtr,(FObjectPtr)&local_res8);
  this->CombatPower = 0;
  this->CharLevel = 1;
  (this->CharLevelText).StringTableType = None;
  (this->CharLevelText).StringTableID = 0;
  (this->CharLevelText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CharLevelText).StringEnumTableNameID.Number = 0;
  (this->CharLevelText).DateTime.Ticks = 0;
  (this->CharLevelText).TimeSpan.Ticks = 0;
  (this->CharLevelText).TimeExpressionType = None;
  (this->CharLevelText).IsExpression = false;
  (this->CharLevelText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharLevelText).UniqueString.Data.ArrayNum = 0;
  (this->CharLevelText).UniqueString.Data.ArrayMax = 0;
  (this->CharLevelText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharLevelText).FormatArgs.ArrayNum = 0;
  (this->CharLevelText).FormatArgs.ArrayMax = 0;
  this->Exp = 0;
  this->ReqExp = 0;
  this->ExpRatio = 0.0;
  this->ExpRatioPercent = 0.0;
  FText::FText(&this->ExpRatioPercentText);
  this->CharAscend = 0;
  this->CharAscendMaxLevel = 0;
  this->CharEvolution = 0;
  this->CharCardIconID = 0;
  this->CharPortraitIconID = 0;
  (this->CharName).StringTableType = None;
  (this->CharName).StringTableID = 0;
  (this->CharName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CharName).StringEnumTableNameID.Number = 0;
  (this->CharName).DateTime.Ticks = 0;
  (this->CharName).TimeSpan.Ticks = 0;
  (this->CharName).TimeExpressionType = None;
  (this->CharName).IsExpression = false;
  (this->CharName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharName).UniqueString.Data.ArrayNum = 0;
  (this->CharName).UniqueString.Data.ArrayMax = 0;
  (this->CharName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharName).FormatArgs.ArrayNum = 0;
  (this->CharName).FormatArgs.ArrayMax = 0;
  (this->CharNameSkinTitle).StringTableType = None;
  (this->CharNameSkinTitle).StringTableID = 0;
  (this->CharNameSkinTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CharNameSkinTitle).StringEnumTableNameID.Number = 0;
  (this->CharNameSkinTitle).DateTime.Ticks = 0;
  (this->CharNameSkinTitle).TimeSpan.Ticks = 0;
  (this->CharNameSkinTitle).TimeExpressionType = None;
  (this->CharNameSkinTitle).IsExpression = false;
  (this->CharNameSkinTitle).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CharNameSkinTitle).UniqueString.Data.ArrayNum = 0;
  (this->CharNameSkinTitle).UniqueString.Data.ArrayMax = 0;
  (this->CharNameSkinTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharNameSkinTitle).FormatArgs.ArrayNum = 0;
  (this->CharNameSkinTitle).FormatArgs.ArrayMax = 0;
  (this->CharTitle).StringTableType = None;
  (this->CharTitle).StringTableID = 0;
  (this->CharTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CharTitle).StringEnumTableNameID.Number = 0;
  (this->CharTitle).DateTime.Ticks = 0;
  (this->CharTitle).TimeSpan.Ticks = 0;
  (this->CharTitle).TimeExpressionType = None;
  (this->CharTitle).IsExpression = false;
  (this->CharTitle).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharTitle).UniqueString.Data.ArrayNum = 0;
  (this->CharTitle).UniqueString.Data.ArrayMax = 0;
  (this->CharTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharTitle).FormatArgs.ArrayNum = 0;
  (this->CharTitle).FormatArgs.ArrayMax = 0;
  (this->CharElementType).StringTableType = None;
  (this->CharElementType).StringTableID = 0;
  (this->CharElementType).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CharElementType).StringEnumTableNameID.Number = 0;
  (this->CharElementType).DateTime.Ticks = 0;
  (this->CharElementType).TimeSpan.Ticks = 0;
  (this->CharElementType).TimeExpressionType = None;
  (this->CharElementType).IsExpression = false;
  (this->CharElementType).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharElementType).UniqueString.Data.ArrayNum = 0;
  (this->CharElementType).UniqueString.Data.ArrayMax = 0;
  (this->CharElementType).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharElementType).FormatArgs.ArrayNum = 0;
  (this->CharElementType).FormatArgs.ArrayMax = 0;
  this->IsEquippedChar = false;
  return this;
}

// UDS_VM_CharInfoData @ 14b60a4f0

UDS_VM_CharInfoData * __thiscall
UDS_VM_CharInfoData::UDS_VM_CharInfoData(UDS_VM_CharInfoData *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CharInfoData__6B_;
  (this->CharInfoData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->CharInfoData).WeakPtr,(FObjectPtr)&local_res8);
  this->CombatPower = 0;
  this->CharLevel = 1;
  (this->CharLevelText).StringTableType = None;
  (this->CharLevelText).StringTableID = 0;
  (this->CharLevelText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CharLevelText).StringEnumTableNameID.Number = 0;
  (this->CharLevelText).DateTime.Ticks = 0;
  (this->CharLevelText).TimeSpan.Ticks = 0;
  (this->CharLevelText).TimeExpressionType = None;
  (this->CharLevelText).IsExpression = false;
  (this->CharLevelText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharLevelText).UniqueString.Data.ArrayNum = 0;
  (this->CharLevelText).UniqueString.Data.ArrayMax = 0;
  (this->CharLevelText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharLevelText).FormatArgs.ArrayNum = 0;
  (this->CharLevelText).FormatArgs.ArrayMax = 0;
  this->Exp = 0;
  this->ReqExp = 0;
  this->ExpRatio = 0.0;
  this->ExpRatioPercent = 0.0;
  FText::FText(&this->ExpRatioPercentText);
  this->CharAscend = 0;
  this->CharAscendMaxLevel = 0;
  this->CharEvolution = 0;
  this->CharCardIconID = 0;
  this->CharPortraitIconID = 0;
  (this->CharName).StringTableType = None;
  (this->CharName).StringTableID = 0;
  (this->CharName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CharName).StringEnumTableNameID.Number = 0;
  (this->CharName).DateTime.Ticks = 0;
  (this->CharName).TimeSpan.Ticks = 0;
  (this->CharName).TimeExpressionType = None;
  (this->CharName).IsExpression = false;
  (this->CharName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharName).UniqueString.Data.ArrayNum = 0;
  (this->CharName).UniqueString.Data.ArrayMax = 0;
  (this->CharName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharName).FormatArgs.ArrayNum = 0;
  (this->CharName).FormatArgs.ArrayMax = 0;
  (this->CharNameSkinTitle).StringTableType = None;
  (this->CharNameSkinTitle).StringTableID = 0;
  (this->CharNameSkinTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CharNameSkinTitle).StringEnumTableNameID.Number = 0;
  (this->CharNameSkinTitle).DateTime.Ticks = 0;
  (this->CharNameSkinTitle).TimeSpan.Ticks = 0;
  (this->CharNameSkinTitle).TimeExpressionType = None;
  (this->CharNameSkinTitle).IsExpression = false;
  (this->CharNameSkinTitle).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CharNameSkinTitle).UniqueString.Data.ArrayNum = 0;
  (this->CharNameSkinTitle).UniqueString.Data.ArrayMax = 0;
  (this->CharNameSkinTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharNameSkinTitle).FormatArgs.ArrayNum = 0;
  (this->CharNameSkinTitle).FormatArgs.ArrayMax = 0;
  (this->CharTitle).StringTableType = None;
  (this->CharTitle).StringTableID = 0;
  (this->CharTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CharTitle).StringEnumTableNameID.Number = 0;
  (this->CharTitle).DateTime.Ticks = 0;
  (this->CharTitle).TimeSpan.Ticks = 0;
  (this->CharTitle).TimeExpressionType = None;
  (this->CharTitle).IsExpression = false;
  (this->CharTitle).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharTitle).UniqueString.Data.ArrayNum = 0;
  (this->CharTitle).UniqueString.Data.ArrayMax = 0;
  (this->CharTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharTitle).FormatArgs.ArrayNum = 0;
  (this->CharTitle).FormatArgs.ArrayMax = 0;
  (this->CharElementType).StringTableType = None;
  (this->CharElementType).StringTableID = 0;
  (this->CharElementType).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CharElementType).StringEnumTableNameID.Number = 0;
  (this->CharElementType).DateTime.Ticks = 0;
  (this->CharElementType).TimeSpan.Ticks = 0;
  (this->CharElementType).TimeExpressionType = None;
  (this->CharElementType).IsExpression = false;
  (this->CharElementType).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharElementType).UniqueString.Data.ArrayNum = 0;
  (this->CharElementType).UniqueString.Data.ArrayMax = 0;
  (this->CharElementType).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharElementType).FormatArgs.ArrayNum = 0;
  (this->CharElementType).FormatArgs.ArrayMax = 0;
  this->IsEquippedChar = false;
  return this;
}

// ~UDS_VM_CharInfoData @ 14b60bdd0

void __thiscall UDS_VM_CharInfoData::~UDS_VM_CharInfoData(UDS_VM_CharInfoData *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_CharInfoData__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->CharElementType).FormatArgs.AllocatorInstance.Data,
             (this->CharElementType).FormatArgs.ArrayNum);
  pFVar1 = (this->CharElementType).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CharElementType).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->CharTitle).FormatArgs.AllocatorInstance.Data,
             (this->CharTitle).FormatArgs.ArrayNum);
  pFVar1 = (this->CharTitle).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CharTitle).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->CharNameSkinTitle).FormatArgs.AllocatorInstance.Data,
             (this->CharNameSkinTitle).FormatArgs.ArrayNum);
  pFVar1 = (this->CharNameSkinTitle).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CharNameSkinTitle).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->CharName).FormatArgs.AllocatorInstance.Data,
             (this->CharName).FormatArgs.ArrayNum);
  pFVar1 = (this->CharName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CharName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->ExpRatioPercentText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->CharLevelText).FormatArgs.AllocatorInstance.Data,
             (this->CharLevelText).FormatArgs.ArrayNum);
  pFVar1 = (this->CharLevelText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CharLevelText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b60d970

IClassDescriptor * __thiscall
UDS_VM_CharInfoData::GetFieldNotificationDescriptor(UDS_VM_CharInfoData *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_CharInfoData::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b60dfc0

UClass * __cdecl UDS_VM_CharInfoData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CharInfoData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CharInfoData",
               &Z_Registration_Info_UClass_UDS_VM_CharInfoData.InnerSingleton,
               StaticRegisterNativesUDS_VM_CharInfoData,0x288,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_CharInfoData>,
               InternalVTableHelperCtorCaller<UDS_VM_CharInfoData>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CharInfoData.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_CharInfoData @ 14b60e850

void __cdecl UDS_VM_CharInfoData::StaticRegisterNativesUDS_VM_CharInfoData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_CharInfoData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execIsCharEvolution @ 14b60f500

void __cdecl
UDS_VM_CharInfoData::execIsCharEvolution(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsCharEvolution((UDS_VM_CharInfoData *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsValidChar @ 14b60f680

void __cdecl UDS_VM_CharInfoData::execIsValidChar(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsValidChar((UDS_VM_CharInfoData *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execOnChanged_CharAscend @ 14b60f700

void __cdecl
UDS_VM_CharInfoData::execOnChanged_CharAscend(UObject *param_1,FFrame *param_2,void *param_3)

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
  OnChanged_CharAscend((UDS_VM_CharInfoData *)param_1,piVar2);
  return;
}

// execOnChanged_CharEvolution @ 14b60f7a0

void __cdecl
UDS_VM_CharInfoData::execOnChanged_CharEvolution(UObject *param_1,FFrame *param_2,void *param_3)

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
  OnChanged_CharEvolution((UDS_VM_CharInfoData *)param_1,piVar2);
  return;
}

// execOnChanged_CharLevel @ 14b60f840

void __cdecl
UDS_VM_CharInfoData::execOnChanged_CharLevel(UObject *param_1,FFrame *param_2,void *param_3)

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
  OnChanged_CharLevel((UDS_VM_CharInfoData *)param_1,piVar2);
  return;
}

// execOnChanged_CombatPower @ 14b60f8e0

void __cdecl
UDS_VM_CharInfoData::execOnChanged_CombatPower(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float *pfVar2;
  float local_res10 [2];
  
  local_res10[0] = 0.0;
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
  pfVar2 = local_res10;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar2 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChanged_CombatPower((UDS_VM_CharInfoData *)param_1,pfVar2);
  return;
}

// execOnChanged_Exp @ 14b60f980

void __cdecl UDS_VM_CharInfoData::execOnChanged_Exp(UObject *param_1,FFrame *param_2,void *param_3)

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
  OnChanged_Exp((UDS_VM_CharInfoData *)param_1,plVar2);
  return;
}

// BindModel @ 14bdaf790

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_VM_CharInfoData::BindModel(UDS_VM_CharInfoData *this)

{
  TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *this_00;
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  char *pcVar4;
  UObject *pUVar5;
  UFunction *pUVar6;
  char *pcVar7;
  char *pcVar8;
  <lambda_1> local_res8 [8];
  <lambda_1> local_res10 [8];
  FName local_res18;
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1b8;
  FWeakObjectPtr local_1b0;
  FName local_1a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1a0;
  FWeakObjectPtr local_198;
  FName local_190;
  code *local_188;
  undefined4 uStack_180;
  uint uStack_17c;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_178;
  FName local_168;
  UDS_VM_CharInfoData *local_160;
  FName *local_158;
  FName local_150;
  FName local_148;
  UDS_VM_CharInfoData *local_140;
  FName *local_138;
  FName local_130;
  FName local_128;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_120;
  FDestructionSentinel local_110;
  FDestructionSentinel local_f8;
  code *local_d8;
  longlong lStack_d0;
  code *local_c8;
  longlong lStack_c0;
  code *local_b8;
  FName FStack_b0;
  FReadAccessScope local_a8;
  FReadAccessScope local_90;
  FReadAccessScope local_78;
  FReadAccessScope local_60;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  this_00 = &this->CharInfoData;
  bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (!bVar2) {
    return;
  }
  pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  pcVar4 = strstr("&UDS_VM_CharInfoData::OnChanged_CombatPower","::");
  pcVar8 = &DAT_00000002;
  if (pcVar4 == (char *)0x0) {
LAB_14bdaf84a:
    pcVar7 = &DAT_00000002;
LAB_14bdaf84d:
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
      pcVar7 = pcVar4;
      pcVar4 = strstr(pcVar7 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar7 == (char *)0x0) goto LAB_14bdaf84a;
    pcVar7 = pcVar7 + 2;
    if (*pcVar7 == '0') goto LAB_14bdaf84d;
  }
  ::FName::FName(&local_168,pcVar7);
  if ((this == (UDS_VM_CharInfoData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res18 = local_168;
  local_1b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_1b0.ObjectIndex = 0;
  local_1b0.ObjectSerialNumber = 0;
  local_1a8.ComparisonIndex.Value = 0;
  local_1a8.Number = 0;
  if ((this == (UDS_VM_CharInfoData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_160 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_CharInfoData *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_1b0,(FObjectPtr)&local_160);
  local_1a8 = local_res18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_1b8,&local_a8);
  if ((local_1a8 == (FName)0x0) ||
     (pUVar5 = FWeakObjectPtr::Get(&local_1b0), pUVar5 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_a8);
LAB_14bdaf97b:
    local_158 = &local_res18;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,float_const_&>::
    __Internal_BindDynamic<UDS_VM_CharInfoData>'::__l2::<lambda_1>::operator()(&local_158);
  }
  else {
    pUVar6 = UObject::FindFunction(pUVar5,local_1a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_a8);
    if (pUVar6 == (UFunction *)0x0) goto LAB_14bdaf97b;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_1b8,&local_78);
  local_120.Object = local_1b0;
  local_120.FunctionName = local_1a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_78);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar3[5].field_0x8,
             (FWriteAccessScope *)&local_110);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar3[5].field_0x10,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar3[5].field_0x8,&local_120
            );
  if (local_110.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_110.Accessor,&local_110);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1b8.AccessDetector);
  pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  pcVar4 = strstr("&UDS_VM_CharInfoData::OnChanged_CharLevel","::");
  if (pcVar4 == (char *)0x0) {
LAB_14bdafa5a:
    pcVar7 = &DAT_00000002;
LAB_14bdafa5d:
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
      pcVar7 = pcVar4;
      pcVar4 = strstr(pcVar7 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar7 == (char *)0x0) goto LAB_14bdafa5a;
    pcVar7 = pcVar7 + 2;
    if (*pcVar7 == '0') goto LAB_14bdafa5d;
  }
  ::FName::FName(&local_150,pcVar7);
  local_188 = OnChanged_CharLevel;
  uStack_180 = 0;
  lStack_d0 = (ulonglong)uStack_17c << 0x20;
  local_d8 = OnChanged_CharLevel;
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,int_const_&>::
  __Internal_AddDynamic<UDS_VM_CharInfoData>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,int_const_&> *)
             &pUVar3[2].field_0x8,this,(pmf_679796c7 *)&local_d8,local_150);
  pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  pcVar4 = strstr("&UDS_VM_CharInfoData::OnChanged_Exp","::");
  if (pcVar4 == (char *)0x0) {
LAB_14bdafb2a:
    pcVar7 = &DAT_00000002;
LAB_14bdafb2d:
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
      pcVar7 = pcVar4;
      pcVar4 = strstr(pcVar7 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar7 == (char *)0x0) goto LAB_14bdafb2a;
    pcVar7 = pcVar7 + 2;
    if (*pcVar7 == '0') goto LAB_14bdafb2d;
  }
  ::FName::FName(&local_148,pcVar7);
  if ((this == (UDS_VM_CharInfoData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_1a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_198.ObjectIndex = 0;
  local_198.ObjectSerialNumber = 0;
  local_190.ComparisonIndex.Value = 0;
  local_190.Number = 0;
  local_res20 = local_148;
  if ((this == (UDS_VM_CharInfoData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_140 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_CharInfoData *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_198,(FObjectPtr)&local_140);
  local_190 = local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_1a0,&local_90);
  if ((local_190 == (FName)0x0) ||
     (pUVar5 = FWeakObjectPtr::Get(&local_198), pUVar5 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_90);
LAB_14bdafc5f:
    local_138 = &local_res20;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,__int64_const_&>::
    __Internal_BindDynamic<UDS_VM_CharInfoData>'::__l2::<lambda_1>::operator()(&local_138);
  }
  else {
    pUVar6 = UObject::FindFunction(pUVar5,local_190);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_90);
    if (pUVar6 == (UFunction *)0x0) goto LAB_14bdafc5f;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_1a0,&local_60);
  local_178.Object = local_198;
  local_178.FunctionName = local_190;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar3[3].field_0x10,
             (FWriteAccessScope *)&local_f8);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar3[3].field_0x18,local_res10,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar3[3].field_0x10,
             &local_178);
  if (local_f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1a0.AccessDetector);
  pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  pcVar4 = strstr("&UDS_VM_CharInfoData::OnChanged_CharAscend","::");
  if (pcVar4 == (char *)0x0) {
LAB_14bdafd3a:
    pcVar7 = &DAT_00000002;
LAB_14bdafd3d:
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
      pcVar7 = pcVar4;
      pcVar4 = strstr(pcVar7 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar7 == (char *)0x0) goto LAB_14bdafd3a;
    pcVar7 = pcVar7 + 2;
    if (*pcVar7 == '0') goto LAB_14bdafd3d;
  }
  ::FName::FName(&local_130,pcVar7);
  local_188 = OnChanged_CharAscend;
  uStack_180 = 0;
  lStack_c0 = (ulonglong)uStack_17c << 0x20;
  local_c8 = OnChanged_CharAscend;
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,int_const_&>::
  __Internal_AddDynamic<UDS_VM_CharInfoData>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,int_const_&> *)
             (pUVar3 + 4),this,(pmf_679796c7 *)&local_c8,local_130);
  pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  pcVar4 = strstr("&UDS_VM_CharInfoData::OnChanged_CharEvolution","::");
  if (pcVar4 != (char *)0x0) {
    do {
      pcVar7 = pcVar4;
      pcVar4 = strstr(pcVar7 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if ((pcVar7 != (char *)0x0) && (pcVar8 = pcVar7 + 2, pcVar7[2] != '0')) goto LAB_14bdafe38;
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
LAB_14bdafe38:
  ::FName::FName(&local_128,pcVar8);
  local_178.Object = (FWeakObjectPtr)OnChanged_CharEvolution;
  local_178.FunctionName = (FName)((ulonglong)local_178.FunctionName & 0xffffffff00000000);
  local_b8 = OnChanged_CharEvolution;
  FStack_b0 = local_178.FunctionName;
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,int_const_&>::
  __Internal_AddDynamic<UDS_VM_CharInfoData>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,int_const_&> *)
             &pUVar3[4].field_0x18,this,(pmf_679796c7 *)&local_b8,local_128);
  return;
}

// InitCharacterLevel @ 14bdc5ab0

void __thiscall UDS_VM_CharInfoData::InitCharacterLevel(UDS_VM_CharInfoData *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  UObject *pUVar5;
  FDS_CharacterBaseTableRow *this_00;
  int iVar6;
  ForAnyElementType FVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  TArray<FDS_CharacterLevelTableRow_const_*,TSizedDefaultAllocator<32>_> local_28;
  
  pUVar5 = FWeakObjectPtr::Get(&(this->CharInfoData).WeakPtr);
  this_00 = FDS_CharacterBaseTableRow::GetRef((longlong)*(int *)&pUVar5[8].field_0x8,true);
  bVar4 = FDS_CharacterBaseTableRow::IsValid(this_00);
  if (bVar4) {
    FDS_CharacterBaseTableRow::ID_LevelGroupTables(this_00,&local_28);
    iVar3 = local_28.ArrayNum;
    pFVar1 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
    FVar7.Data = local_28.AllocatorInstance.Data;
    iVar6 = local_28.ArrayNum;
    while( true ) {
      if (iVar6 != iVar3) {
        `TCheckedPointerIterator<FDS_CharacterLevelTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
        iVar6 = local_28.ArrayNum;
      }
      lVar8 = 0;
      if ((FVar7.Data == pFVar1) ||
         (lVar8 = *(longlong *)FVar7.Data, *(int *)(lVar8 + 0x14) == this->CharLevel)) break;
      FVar7.Data = FVar7.Data + 8;
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    if ((lVar8 != 0) && (0 < *(longlong *)(lVar8 + 0x18))) {
      lVar2 = this->ReqExp;
      this->ReqExp = *(longlong *)(lVar8 + 0x18);
      local_28.ArrayNum = FFieldNotificationClassDescriptor::ReqExp.BitNumber;
      local_28.AllocatorInstance.Data =
           (FScriptContainerElement *)FFieldNotificationClassDescriptor::ReqExp.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
      if (lVar2 != this->ReqExp) {
        UpdateExpRatio(this);
      }
    }
  }
  return;
}

// IsCharEvolution @ 14bdc7c40

bool __thiscall UDS_VM_CharInfoData::IsCharEvolution(UDS_VM_CharInfoData *this)

{
  return 0 < this->CharEvolution;
}

// IsValidChar @ 14bdc96b0

bool __thiscall UDS_VM_CharInfoData::IsValidChar(UDS_VM_CharInfoData *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->CharInfoData).WeakPtr);
  return bVar1;
}

// OnChanged_CharAscend @ 14bdcaca0

void __thiscall UDS_VM_CharInfoData::OnChanged_CharAscend(UDS_VM_CharInfoData *this,int *param_1)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  plVar1 = &this->_padding_;
  this->CharAscend = *param_1;
  local_10 = FFieldNotificationClassDescriptor::CharAscend.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CharAscend.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::CharAscendMaxLevel.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CharAscendMaxLevel.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

// OnChanged_CharEvolution @ 14bdcad10

void __thiscall UDS_VM_CharInfoData::OnChanged_CharEvolution(UDS_VM_CharInfoData *this,int *param_1)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  plVar1 = &this->_padding_;
  this->CharEvolution = *param_1;
  local_10 = FFieldNotificationClassDescriptor::CharEvolution.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CharEvolution.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::IsCharEvolution.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsCharEvolution.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

// OnChanged_CharLevel @ 14bdcad80

void __thiscall UDS_VM_CharInfoData::OnChanged_CharLevel(UDS_VM_CharInfoData *this,int *param_1)

{
  FName FVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  FDS_Text *pFVar5;
  UObject *pUVar6;
  FDS_CharacterBaseTableRow *this_00;
  int iVar7;
  FName FVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  TArray<FDS_CharacterLevelTableRow_const_*,TSizedDefaultAllocator<32>_> local_78;
  FDS_Text local_68;
  
  iVar2 = this->CharLevel;
  this->CharLevel = *param_1;
  pFVar5 = FDS_Text::FromStringTableFormat<int_const_&>(&local_68,StringUi,0x29812,param_1);
  FDS_Text::operator=(&this->CharLevelText,pFVar5);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data,
             local_68.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_68.FormatArgs.AllocatorInstance.Data);
  }
  if (local_68.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.UniqueString.Data.AllocatorInstance.Data);
  }
  local_78.ArrayNum = FFieldNotificationClassDescriptor::CharLevel.BitNumber;
  local_78.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::CharLevel.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  local_78.ArrayNum = FFieldNotificationClassDescriptor::CharLevelText.BitNumber;
  local_78.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::CharLevelText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  if ((iVar2 != this->CharLevel) && (0 < this->CharLevel)) {
    pUVar6 = FWeakObjectPtr::Get(&(this->CharInfoData).WeakPtr);
    this_00 = FDS_CharacterBaseTableRow::GetRef((longlong)*(int *)&pUVar6[8].field_0x8,true);
    bVar4 = FDS_CharacterBaseTableRow::IsValid(this_00);
    if (bVar4) {
      FDS_CharacterBaseTableRow::ID_LevelGroupTables(this_00,&local_78);
      iVar2 = local_78.ArrayNum;
      FVar1 = (FName)((longlong)local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 8);
      FVar8 = (FName)local_78.AllocatorInstance;
      iVar7 = local_78.ArrayNum;
      while( true ) {
        if (iVar7 != iVar2) {
          `TCheckedPointerIterator<FDS_CharacterLevelTableRow_const_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
          iVar7 = local_78.ArrayNum;
        }
        lVar9 = 0;
        if ((FVar8 == FVar1) ||
           (lVar9 = *(longlong *)FVar8, *(int *)(lVar9 + 0x14) == this->CharLevel)) break;
        FVar8 = (FName)((longlong)FVar8 + 8);
      }
      if ((FName)local_78.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
      if ((lVar9 != 0) && (0 < *(longlong *)(lVar9 + 0x18))) {
        lVar3 = this->ReqExp;
        this->ReqExp = *(longlong *)(lVar9 + 0x18);
        local_78.ArrayNum = FFieldNotificationClassDescriptor::ReqExp.BitNumber;
        local_78.AllocatorInstance.Data =
             (FScriptContainerElement *)FFieldNotificationClassDescriptor::ReqExp.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
        if (lVar3 != this->ReqExp) {
          UpdateExpRatio(this);
        }
      }
    }
  }
  return;
}

// OnChanged_CombatPower @ 14bdcaf80

void __thiscall UDS_VM_CharInfoData::OnChanged_CombatPower(UDS_VM_CharInfoData *this,float *param_1)

{
  FName local_18;
  int local_10;
  
  this->CombatPower = (int)*param_1;
  local_10 = FFieldNotificationClassDescriptor::CombatPower.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CombatPower.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnChanged_Exp @ 14bdcafc0

void __thiscall UDS_VM_CharInfoData::OnChanged_Exp(UDS_VM_CharInfoData *this,long64 *param_1)

{
  longlong lVar1;
  FName local_18;
  int local_10;
  
  lVar1 = this->Exp;
  this->Exp = *param_1;
  local_10 = FFieldNotificationClassDescriptor::Exp.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Exp.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  if (lVar1 != this->Exp) {
    UpdateExpRatio(this);
  }
  return;
}

// OnSetViewModel @ 14bdd4310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_CharInfoData::OnSetViewModel
          (UDS_VM_CharInfoData *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *this_00;
  byte bVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UDS_LogManager *pUVar7;
  TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> TVar8;
  UObject *pUVar9;
  UEnum *pUVar10;
  undefined1 auStackY_398 [32];
  int local_358 [2];
  TSharedPtr<FDS_ViewModelContext_CharInfoData,1> local_350;
  undefined1 local_340 [56];
  FName local_308;
  int local_300;
  FName local_2f8;
  int local_2f0;
  FName local_2e8;
  uint local_2e0;
  FName local_2d8;
  int local_2d0;
  FName local_2c8;
  int local_2c0;
  FName local_2b8;
  int local_2b0;
  FName local_2a8;
  int local_2a0;
  TSharedPtr<FDS_ViewModelContext,1> local_298;
  undefined1 local_288 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_398;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_298.Object = param_1->Object;
  local_298.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_298.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_CharInfoData>(&local_350,&local_298);
  if (local_350.Object == (FDS_ViewModelContext_CharInfoData *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_278._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_278,"UDS_VM_CharInfoData::OnSetViewModel",0x23,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_278.Ptr,0x19,L"context is Invalid.");
      if ((void *)local_278._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_350.SharedReferenceCount.ReferenceController);
  }
  else {
    if ((local_350.Object == (FDS_ViewModelContext_CharInfoData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_00 = &this->CharInfoData;
    TVar8 = UDS_CharInfoData::GetData((ulong64)local_288);
                    /* WARNING: Load size is inaccurate */
    this_00->WeakPtr = *TVar8.WeakPtr;
    bVar5 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (bVar5) {
      pUVar9 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      this->CombatPower = (int)*(float *)&pUVar9[0xd].field_0x20;
      local_340._16_4_ = FFieldNotificationClassDescriptor::CombatPower.BitNumber;
      local_340._8_4_ =
           FFieldNotificationClassDescriptor::CombatPower.FieldName.ComparisonIndex.Value;
      local_340._12_4_ = FFieldNotificationClassDescriptor::CombatPower.FieldName.Number;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_340 + 8);
      pUVar9 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_358[0] = *(int *)&pUVar9[8].field_0xc;
      OnChanged_CharLevel(this,local_358);
      pUVar9 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      lVar3 = this->Exp;
      this->Exp = *(long64 *)&pUVar9[8].field_0x10;
      local_340._32_4_ = FFieldNotificationClassDescriptor::Exp.BitNumber;
      local_340._24_4_ = FFieldNotificationClassDescriptor::Exp.FieldName.ComparisonIndex.Value;
      local_340._28_4_ = FFieldNotificationClassDescriptor::Exp.FieldName.Number;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_340 + 0x18);
      if (lVar3 != this->Exp) {
        UpdateExpRatio(this);
      }
      pUVar9 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      this->CharAscend = *(int *)&pUVar9[0xd].field_0x10;
      local_340._48_4_ = FFieldNotificationClassDescriptor::CharAscend.BitNumber;
      local_340._40_4_ =
           FFieldNotificationClassDescriptor::CharAscend.FieldName.ComparisonIndex.Value;
      local_340._44_4_ = FFieldNotificationClassDescriptor::CharAscend.FieldName.Number;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_340 + 0x28);
      local_300 = FFieldNotificationClassDescriptor::CharAscendMaxLevel.BitNumber;
      local_308 = FFieldNotificationClassDescriptor::CharAscendMaxLevel.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_308);
      pUVar9 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      this->CharEvolution = *(int *)&pUVar9[0xd].field_0x14;
      local_2f0 = FFieldNotificationClassDescriptor::CharEvolution.BitNumber;
      local_2f8 = FFieldNotificationClassDescriptor::CharEvolution.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2f8);
      local_2e0 = FFieldNotificationClassDescriptor::IsCharEvolution.BitNumber;
      local_2e8 = FFieldNotificationClassDescriptor::IsCharEvolution.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2e8);
      pUVar9 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      FDS_Text::operator=(&this->CharName,(FDS_Text *)&pUVar9[9].field_0x10);
      local_2d0 = FFieldNotificationClassDescriptor::CharName.BitNumber;
      local_2d8 = FFieldNotificationClassDescriptor::CharName.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2d8);
      pUVar9 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      FDS_Text::operator=(&this->CharTitle,(FDS_Text *)&pUVar9[0xb].field_0x10);
      local_2c0 = FFieldNotificationClassDescriptor::CharTitle.BitNumber;
      local_2c8 = FFieldNotificationClassDescriptor::CharTitle.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2c8);
      pUVar9 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      bVar1 = pUVar9[0xd].field_0x1c;
      pUVar10 = StaticEnum<enum_EDS_ElementType>();
      DS_Util::GetStringEnumTableKey((UEnum *)local_340,(int)pUVar10);
      FDS_Text::SetTextFromStringEnumTable(&this->CharElementType,(FName *)local_340);
      pUVar10 = StaticEnum<enum_EDS_ElementType>();
      iVar6 = DS_Util::GetEnumIconID(pUVar10,(uint)bVar1);
      this->CharElementTypeIconID = iVar6;
      local_2b0 = FFieldNotificationClassDescriptor::CharElementType.BitNumber;
      local_2b8 = FFieldNotificationClassDescriptor::CharElementType.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2b8);
      local_2a0 = FFieldNotificationClassDescriptor::CharElementTypeIconID.BitNumber;
      local_2a8 = FFieldNotificationClassDescriptor::CharElementTypeIconID.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2a8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_350.SharedReferenceCount.ReferenceController);
    }
    else {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_VM_CharInfoData::OnSetViewModel",0x23,Yes);
        UDS_LogManager::PrintLog
                  (pUVar7,1,Warning,local_158.Ptr,0x21,
                   L"CharInfoData is Invalid. CharEntityID : %llu");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_350.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetCharElement @ 14bde3820

void __thiscall
UDS_VM_CharInfoData::SetCharElement(UDS_VM_CharInfoData *this,EDS_ElementType param_1)

{
  int iVar1;
  UEnum *pUVar2;
  FName local_res8;
  FName local_18;
  int local_10;
  
  pUVar2 = StaticEnum<enum_EDS_ElementType>();
  DS_Util::GetStringEnumTableKey((UEnum *)&local_res8,(int)pUVar2);
  FDS_Text::SetTextFromStringEnumTable(&this->CharElementType,&local_res8);
  pUVar2 = StaticEnum<enum_EDS_ElementType>();
  iVar1 = DS_Util::GetEnumIconID(pUVar2,(uint)param_1);
  this->CharElementTypeIconID = iVar1;
  local_10 = FFieldNotificationClassDescriptor::CharElementType.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CharElementType.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  local_10 = FFieldNotificationClassDescriptor::CharElementTypeIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CharElementTypeIconID.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetCharNameText @ 14bde38d0

void __thiscall UDS_VM_CharInfoData::SetCharNameText(UDS_VM_CharInfoData *this,FDS_Text *param_1)

{
  FName local_18;
  int local_10;
  
  FDS_Text::operator=(&this->CharName,param_1);
  local_10 = FFieldNotificationClassDescriptor::CharName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CharName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetCharTitleText @ 14bde3920

void __thiscall UDS_VM_CharInfoData::SetCharTitleText(UDS_VM_CharInfoData *this,FDS_Text *param_1)

{
  FName local_18;
  int local_10;
  
  FDS_Text::operator=(&this->CharTitle,param_1);
  local_10 = FFieldNotificationClassDescriptor::CharTitle.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CharTitle.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bdebda0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_CharInfoData::UnbindModel(UDS_VM_CharInfoData *this)

{
  TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *this_00;
  bool bVar1;
  UDS_LanguageManager *pUVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  pUVar2 = UDS_LanguageManager::GetInst();
  if (pUVar2 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnLanguageChanged,this
              );
  }
  this_00 = &this->CharInfoData;
  bVar1 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  if (!bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar3[5].field_0x8,
               (UObject *)this);
    pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar3[2].field_0x8,
               (UObject *)this);
    pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar3[3].field_0x10,
               (UObject *)this);
    pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 4),(UObject *)this)
    ;
    pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar3[4].field_0x18,
               (UObject *)this);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  this_00->WeakPtr = local_res8;
  return;
}

// UpdateExpRatio @ 14bdf13c0

void __thiscall UDS_VM_CharInfoData::UpdateExpRatio(UDS_VM_CharInfoData *this)

{
  FText *pFVar1;
  longlong *plVar2;
  float fVar3;
  FText local_18;
  
  if (0 < this->ReqExp) {
    fVar3 = (float)this->Exp / (float)this->ReqExp;
    this->ExpRatio = fVar3;
    fVar3 = fVar3 * __real_42c80000;
    this->ExpRatioPercent = fVar3;
    pFVar1 = DS_Util::GetFloatRoundFormatFText(&local_18,fVar3,3,0x27db,0x120);
    FText::operator=(&this->ExpRatioPercentText,pFVar1);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    plVar2 = &this->_padding_;
    local_18.Flags = FFieldNotificationClassDescriptor::ExpRatio.BitNumber;
    local_18.TextData.Reference = (ITextData *)FFieldNotificationClassDescriptor::ExpRatio.FieldName
    ;
    (**(code **)(*plVar2 + 0x38))(plVar2,&local_18);
    local_18.Flags = FFieldNotificationClassDescriptor::ExpRatioPercent.BitNumber;
    local_18.TextData.Reference =
         (ITextData *)FFieldNotificationClassDescriptor::ExpRatioPercent.FieldName;
    (**(code **)(*plVar2 + 0x38))(plVar2,&local_18);
    local_18.Flags = FFieldNotificationClassDescriptor::ExpRatioPercentText.BitNumber;
    local_18.TextData.Reference =
         (ITextData *)FFieldNotificationClassDescriptor::ExpRatioPercentText.FieldName;
    (**(code **)(*plVar2 + 0x38))(plVar2,&local_18);
  }
  return;
}

