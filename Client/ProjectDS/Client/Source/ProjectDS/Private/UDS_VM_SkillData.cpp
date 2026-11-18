// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 33

// StaticClass @ 14b6e1c70

UClass * __cdecl UDS_VM_SkillData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_SkillData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_SkillData",
               &Z_Registration_Info_UClass_UDS_VM_SkillData.InnerSingleton,
               StaticRegisterNativesUDS_VM_SkillData,0x2b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_SkillData>,
               InternalVTableHelperCtorCaller<UDS_VM_SkillData>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_SkillData.InnerSingleton;
}

// UDS_VM_SkillData @ 14b6e5270

UDS_VM_SkillData * __thiscall
UDS_VM_SkillData::UDS_VM_SkillData(UDS_VM_SkillData *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_SkillData__6B_;
  (this->NameText).StringTableID = 0;
  (this->NameText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->NameText).StringEnumTableNameID.Number = 0;
  (this->NameText).DateTime.Ticks = 0;
  (this->NameText).TimeSpan.Ticks = 0;
  (this->NameText).TimeExpressionType = None;
  (this->NameText).IsExpression = false;
  (this->NameText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NameText).UniqueString.Data.ArrayNum = 0;
  (this->NameText).UniqueString.Data.ArrayMax = 0;
  (this->NameText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NameText).FormatArgs.ArrayNum = 0;
  (this->NameText).FormatArgs.ArrayMax = 0;
  (this->CoolTimeText).StringTableType = None;
  (this->CoolTimeText).StringTableID = 0;
  (this->CoolTimeText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CoolTimeText).StringEnumTableNameID.Number = 0;
  (this->CoolTimeText).DateTime.Ticks = 0;
  (this->CoolTimeText).TimeSpan.Ticks = 0;
  (this->CoolTimeText).TimeExpressionType = None;
  (this->CoolTimeText).IsExpression = false;
  (this->CoolTimeText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CoolTimeText).UniqueString.Data.ArrayNum = 0;
  (this->CoolTimeText).UniqueString.Data.ArrayMax = 0;
  (this->CoolTimeText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CoolTimeText).FormatArgs.ArrayNum = 0;
  (this->CoolTimeText).FormatArgs.ArrayMax = 0;
  (this->SkillUseTypeText).StringTableType = None;
  (this->SkillUseTypeText).StringTableID = 0;
  (this->SkillUseTypeText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SkillUseTypeText).StringEnumTableNameID.Number = 0;
  (this->SkillUseTypeText).DateTime.Ticks = 0;
  (this->SkillUseTypeText).TimeSpan.Ticks = 0;
  (this->SkillUseTypeText).TimeExpressionType = None;
  (this->SkillUseTypeText).IsExpression = false;
  (this->SkillUseTypeText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->SkillUseTypeText).UniqueString.Data.ArrayNum = 0;
  (this->SkillUseTypeText).UniqueString.Data.ArrayMax = 0;
  (this->SkillUseTypeText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillUseTypeText).FormatArgs.ArrayNum = 0;
  (this->SkillUseTypeText).FormatArgs.ArrayMax = 0;
  (this->FixedText_Cost).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Cost).StringEnumTableNameID.Number = 0;
  (this->FixedText_Cost).DateTime.Ticks = 0;
  (this->FixedText_Cost).TimeSpan.Ticks = 0;
  (this->FixedText_Cost).TimeExpressionType = None;
  (this->FixedText_Cost).IsExpression = false;
  (this->FixedText_Cost).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Cost).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Cost).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Cost).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Cost).FormatArgs.ArrayNum = 0;
  (this->FixedText_Cost).FormatArgs.ArrayMax = 0;
  (this->FixedText_CastingTime).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_CastingTime).StringEnumTableNameID.Number = 0;
  (this->FixedText_CastingTime).DateTime.Ticks = 0;
  (this->FixedText_CastingTime).TimeSpan.Ticks = 0;
  (this->FixedText_CastingTime).TimeExpressionType = None;
  (this->FixedText_CastingTime).IsExpression = false;
  (this->FixedText_CastingTime).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_CastingTime).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_CastingTime).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_CastingTime).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_CastingTime).FormatArgs.ArrayNum = 0;
  (this->FixedText_CastingTime).FormatArgs.ArrayMax = 0;
  (this->FixedText_CoolDown).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_CoolDown).StringEnumTableNameID.Number = 0;
  (this->FixedText_CoolDown).DateTime.Ticks = 0;
  (this->FixedText_CoolDown).TimeSpan.Ticks = 0;
  (this->FixedText_CoolDown).TimeExpressionType = None;
  (this->FixedText_CoolDown).IsExpression = false;
  (this->FixedText_CoolDown).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_CoolDown).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_CoolDown).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_CoolDown).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_CoolDown).FormatArgs.ArrayNum = 0;
  (this->FixedText_CoolDown).FormatArgs.ArrayMax = 0;
  (this->SkillData).field0_0x0.DebugPtr = (UDS_SkillData *)0x0;
  (this->NameText).StringTableType = None;
  (this->FixedText_Cost).StringTableType = StringUi;
  (this->FixedText_Cost).StringTableID = 0x11d35;
  (this->FixedText_CastingTime).StringTableType = StringUi;
  (this->FixedText_CastingTime).StringTableID = 0x11d33;
  (this->FixedText_CoolDown).StringTableType = StringUi;
  (this->FixedText_CoolDown).StringTableID = 0x11d34;
  return this;
}

// UDS_VM_SkillData @ 14b6e5490

UDS_VM_SkillData * __thiscall
UDS_VM_SkillData::UDS_VM_SkillData(UDS_VM_SkillData *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_SkillData__6B_;
  (this->NameText).StringTableID = 0;
  (this->NameText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->NameText).StringEnumTableNameID.Number = 0;
  (this->NameText).DateTime.Ticks = 0;
  (this->NameText).TimeSpan.Ticks = 0;
  (this->NameText).TimeExpressionType = None;
  (this->NameText).IsExpression = false;
  (this->NameText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NameText).UniqueString.Data.ArrayNum = 0;
  (this->NameText).UniqueString.Data.ArrayMax = 0;
  (this->NameText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NameText).FormatArgs.ArrayNum = 0;
  (this->NameText).FormatArgs.ArrayMax = 0;
  (this->CoolTimeText).StringTableType = None;
  (this->CoolTimeText).StringTableID = 0;
  (this->CoolTimeText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CoolTimeText).StringEnumTableNameID.Number = 0;
  (this->CoolTimeText).DateTime.Ticks = 0;
  (this->CoolTimeText).TimeSpan.Ticks = 0;
  (this->CoolTimeText).TimeExpressionType = None;
  (this->CoolTimeText).IsExpression = false;
  (this->CoolTimeText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CoolTimeText).UniqueString.Data.ArrayNum = 0;
  (this->CoolTimeText).UniqueString.Data.ArrayMax = 0;
  (this->CoolTimeText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CoolTimeText).FormatArgs.ArrayNum = 0;
  (this->CoolTimeText).FormatArgs.ArrayMax = 0;
  (this->SkillUseTypeText).StringTableType = None;
  (this->SkillUseTypeText).StringTableID = 0;
  (this->SkillUseTypeText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->SkillUseTypeText).StringEnumTableNameID.Number = 0;
  (this->SkillUseTypeText).DateTime.Ticks = 0;
  (this->SkillUseTypeText).TimeSpan.Ticks = 0;
  (this->SkillUseTypeText).TimeExpressionType = None;
  (this->SkillUseTypeText).IsExpression = false;
  (this->SkillUseTypeText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->SkillUseTypeText).UniqueString.Data.ArrayNum = 0;
  (this->SkillUseTypeText).UniqueString.Data.ArrayMax = 0;
  (this->SkillUseTypeText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkillUseTypeText).FormatArgs.ArrayNum = 0;
  (this->SkillUseTypeText).FormatArgs.ArrayMax = 0;
  (this->FixedText_Cost).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Cost).StringEnumTableNameID.Number = 0;
  (this->FixedText_Cost).DateTime.Ticks = 0;
  (this->FixedText_Cost).TimeSpan.Ticks = 0;
  (this->FixedText_Cost).TimeExpressionType = None;
  (this->FixedText_Cost).IsExpression = false;
  (this->FixedText_Cost).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Cost).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Cost).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Cost).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Cost).FormatArgs.ArrayNum = 0;
  (this->FixedText_Cost).FormatArgs.ArrayMax = 0;
  (this->FixedText_CastingTime).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_CastingTime).StringEnumTableNameID.Number = 0;
  (this->FixedText_CastingTime).DateTime.Ticks = 0;
  (this->FixedText_CastingTime).TimeSpan.Ticks = 0;
  (this->FixedText_CastingTime).TimeExpressionType = None;
  (this->FixedText_CastingTime).IsExpression = false;
  (this->FixedText_CastingTime).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_CastingTime).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_CastingTime).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_CastingTime).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_CastingTime).FormatArgs.ArrayNum = 0;
  (this->FixedText_CastingTime).FormatArgs.ArrayMax = 0;
  (this->FixedText_CoolDown).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_CoolDown).StringEnumTableNameID.Number = 0;
  (this->FixedText_CoolDown).DateTime.Ticks = 0;
  (this->FixedText_CoolDown).TimeSpan.Ticks = 0;
  (this->FixedText_CoolDown).TimeExpressionType = None;
  (this->FixedText_CoolDown).IsExpression = false;
  (this->FixedText_CoolDown).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_CoolDown).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_CoolDown).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_CoolDown).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_CoolDown).FormatArgs.ArrayNum = 0;
  (this->FixedText_CoolDown).FormatArgs.ArrayMax = 0;
  (this->SkillData).field0_0x0.DebugPtr = (UDS_SkillData *)0x0;
  (this->NameText).StringTableType = None;
  (this->FixedText_Cost).StringTableType = StringUi;
  (this->FixedText_Cost).StringTableID = 0x11d35;
  (this->FixedText_CastingTime).StringTableType = StringUi;
  (this->FixedText_CastingTime).StringTableID = 0x11d33;
  (this->FixedText_CoolDown).StringTableType = StringUi;
  (this->FixedText_CoolDown).StringTableID = 0x11d34;
  return this;
}

// ~UDS_VM_SkillData @ 14b6e6eb0

void __thiscall UDS_VM_SkillData::~UDS_VM_SkillData(UDS_VM_SkillData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_SkillData__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_CoolDown).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_CoolDown).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_CoolDown).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_CoolDown).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_CastingTime).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_CastingTime).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_CastingTime).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_CastingTime).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Cost).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Cost).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Cost).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Cost).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->SkillUseTypeText).FormatArgs.AllocatorInstance.Data,
             (this->SkillUseTypeText).FormatArgs.ArrayNum);
  pFVar1 = (this->SkillUseTypeText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SkillUseTypeText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->CoolTimeText).FormatArgs.AllocatorInstance.Data,
             (this->CoolTimeText).FormatArgs.ArrayNum);
  pFVar1 = (this->CoolTimeText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CoolTimeText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->NameText).FormatArgs.AllocatorInstance.Data,
             (this->NameText).FormatArgs.ArrayNum);
  pFVar1 = (this->NameText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NameText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6e9590

IClassDescriptor * __thiscall
UDS_VM_SkillData::GetFieldNotificationDescriptor(UDS_VM_SkillData *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_SkillData::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6e9e80

UClass * __cdecl UDS_VM_SkillData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_SkillData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_SkillData",
               &Z_Registration_Info_UClass_UDS_VM_SkillData.InnerSingleton,
               StaticRegisterNativesUDS_VM_SkillData,0x2b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_SkillData>,
               InternalVTableHelperCtorCaller<UDS_VM_SkillData>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_SkillData.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_SkillData @ 14b6eab80

void __cdecl UDS_VM_SkillData::StaticRegisterNativesUDS_VM_SkillData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xb;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_SkillData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetSkillCastingTimeText @ 14b6ebf30

void __cdecl
UDS_VM_SkillData::execGetSkillCastingTimeText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GetSkillCastingTimeText((UDS_VM_SkillData *)param_1,&local_58);
  FDS_Text::operator=(param_3,pFVar1);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetSkillCoolTimeText @ 14b6ebfa0

void __cdecl
UDS_VM_SkillData::execGetSkillCoolTimeText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GetSkillCoolTimeText((UDS_VM_SkillData *)param_1,&local_58);
  FDS_Text::operator=(param_3,pFVar1);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetSkillCostText @ 14b6ec010

void __cdecl UDS_VM_SkillData::execGetSkillCostText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GetSkillCostText((UDS_VM_SkillData *)param_1,&local_58);
  FDS_Text::operator=(param_3,pFVar1);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetSkillCostValueArray @ 14b6ec080

void __cdecl
UDS_VM_SkillData::execGetSkillCostValueArray(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar1 = GetSkillCostValueArray((UDS_VM_SkillData *)param_1,&local_18);
  if (param_3 != pTVar1) {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar1->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar1->ArrayMax;
    pTVar1->ArrayNum = 0;
    pTVar1->ArrayMax = 0;
  }
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetSkillDescText @ 14b6ec120

void __cdecl UDS_VM_SkillData::execGetSkillDescText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GetSkillDescText((UDS_VM_SkillData *)param_1,&local_58);
  FDS_Text::operator=(param_3,pFVar1);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetSkillUseTypeText @ 14b6ec190

void __cdecl
UDS_VM_SkillData::execGetSkillUseTypeText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GetSkillUseTypeText((UDS_VM_SkillData *)param_1,&local_58);
  FDS_Text::operator=(param_3,pFVar1);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// execOnDirtySkillData @ 14b6ec3d0

void __cdecl UDS_VM_SkillData::execOnDirtySkillData(UObject *param_1,FFrame *param_2,void *param_3)

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
  OnDirtySkillData((UDS_VM_SkillData *)param_1,local_res10);
  return;
}

// execSkillIconID @ 14b6ec4a0

void __cdecl UDS_VM_SkillData::execSkillIconID(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = SkillIconID((UDS_VM_SkillData *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execSkillMovieID @ 14b6ec4e0

void __cdecl UDS_VM_SkillData::execSkillMovieID(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = SkillMovieID((UDS_VM_SkillData *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execSkillNameText @ 14b6ec520

void __cdecl UDS_VM_SkillData::execSkillNameText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = SkillNameText((UDS_VM_SkillData *)param_1,&local_58);
  FDS_Text::operator=(param_3,pFVar1);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// execSkillTypeText @ 14b6ec590

void __cdecl UDS_VM_SkillData::execSkillTypeText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = SkillTypeText((UDS_VM_SkillData *)param_1,&local_58);
  FDS_Text::operator=(param_3,pFVar1);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// Create @ 14be149f0

UDS_VM_SkillData * __cdecl
UDS_VM_SkillData::Create(UObject *param_1,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> param_2)

{
  code *pcVar1;
  bool bVar2;
  FObjectPtr_u_0 FVar3;
  FObjectPtr_u_0 FVar4;
  UDS_VM_SkillData *pUVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this;
  UClass *pUVar7;
  FObjectPtr_u_0 FVar8;
  FObjectPtr_u_0 FVar9;
  FObjectPtr_u_0 local_res10;
  FObjectPtr_u_0 local_28;
  FObjectPtr_u_0 local_20;
  
  FVar3.Handle = ::operator_new(0x28);
  FVar8.Handle = (UObject *)0x0;
  FVar9.Handle = FVar8.Handle;
  if ((UDS_VM_SkillData *)FVar3.Handle != (UDS_VM_SkillData *)0x0) {
    *(longlong *)&(FVar3.Handle)->field_0x18 = 0;
    *(longlong *)&(FVar3.Handle)->field_0x8 = 0;
    *(longlong *)&(FVar3.Handle)->field_0x10 = 0;
    *(undefined ***)FVar3.Handle = &___7FDS_VMContext_SkillData__6B_;
    *(longlong *)&(FVar3.Handle)->field_0x20 = 0;
    FVar9.Handle = FVar3.Handle;
  }
  FVar4.Handle = ::operator_new(0x20);
  FVar3.Handle = FVar8.Handle;
  if ((UDS_VM_SkillData *)FVar4.Handle != (UDS_VM_SkillData *)0x0) {
    *(undefined4 *)&(FVar4.Handle)->field_0x8 = 1;
    *(code **)&(FVar4.Handle)->field_0x10 = ViewModelContextDeleter;
    *(undefined ***)FVar4.Handle =
         &
         ___7__TReferenceControllerWithDeleter_UFDS_VMContext_SkillData__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)&(FVar4.Handle)->field_0xc = 1;
    *(FObjectPtr_u_0 *)&(FVar4.Handle)->field_0x18 = (UObject *)FVar9;
    FVar3.Handle = FVar4.Handle;
  }
  if (((UDS_VM_SkillData *)FVar9.Handle == (UDS_VM_SkillData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar5 = (UDS_VM_SkillData *)(*pcVar1)();
    return pUVar5;
  }
  pUVar6 = FDS_VMContext_SkillData::StaticStruct();
  *(UScriptStruct **)&(FVar9.Handle)->field_0x8 = pUVar6;
  this = UDS_ViewModelContextManager::GetInst();
  if (this != (UDS_ViewModelContextManager *)0x0) {
    if ((UDS_VM_SkillData *)FVar3.Handle != (UDS_VM_SkillData *)0x0) {
      LOCK();
      *(int *)&(FVar3.Handle)->field_0x8 = (int)*(longlong *)&(FVar3.Handle)->field_0x8 + 1;
      UNLOCK();
    }
    local_28 = FVar9;
    local_20 = FVar3;
    UDS_ViewModelContextManager::RegisterContext
              (this,(TSharedPtr<FDS_ViewModelContext,1> *)&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_20.Handle);
  }
  *(undefined4 *)&(FVar9.Handle)->field_0x18 = 0xf;
  *(FWeakObjectPtr *)&(FVar9.Handle)->field_0x20 = param_2.WeakPtr;
  if ((UDS_VM_SkillData *)FVar3.Handle != (UDS_VM_SkillData *)0x0) {
    LOCK();
    *(int *)&(FVar3.Handle)->field_0x8 = (int)*(longlong *)&(FVar3.Handle)->field_0x8 + 1;
    UNLOCK();
    LOCK();
    *(int *)&(FVar3.Handle)->field_0x8 = (int)*(longlong *)&(FVar3.Handle)->field_0x8 + 1;
    UNLOCK();
  }
  DS_ViewModelTemplateUtil::CreateViewModel
            ((UObject *)&local_res10,(TSharedPtr<FDS_ViewModelContext,1> *)param_1);
  if ((UDS_VM_SkillData *)local_res10.Handle != (UDS_VM_SkillData *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_VM_SkillData_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res10,pUVar7);
    if (bVar2) {
      FVar8 = local_res10;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar3.Handle);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar3.Handle);
  return (UDS_VM_SkillData *)FVar8.Handle;
}

// GetSkillCastingTimeText @ 14be221a0

FDS_Text * __thiscall
UDS_VM_SkillData::GetSkillCastingTimeText(UDS_VM_SkillData *this,FDS_Text *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FDS_SkillConditionTableRow *pFVar3;
  FScriptContainerElement *pFVar4;
  float fVar5;
  undefined1 local_res8 [8];
  
  fVar5 = 0.0;
  pFVar3 = FDS_SkillConditionTableRow::Get((longlong)this->SkillID,true);
  if (pFVar3 != (FDS_SkillConditionTableRow *)0x0) {
    pFVar4 = (pFVar3->CastingTime).AllocatorInstance.Data;
    iVar2 = (pFVar3->CastingTime).ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 4;
    while( true ) {
      if ((pFVar3->CastingTime).ArrayNum != iVar2) {
        `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar4 == pFVar1) break;
      fVar5 = fVar5 + *(float *)pFVar4;
      pFVar4 = pFVar4 + 4;
    }
  }
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  FDS_Text::SetTextFromSec(__return_storage_ptr__,fVar5,SecondsDec1,false);
  return __return_storage_ptr__;
}

// GetSkillCoolTimeText @ 14be22280

FDS_Text * __thiscall
UDS_VM_SkillData::GetSkillCoolTimeText(UDS_VM_SkillData *this,FDS_Text *__return_storage_ptr__)

{
  UDS_SkillData *this_00;
  float fVar1;
  FDS_Text local_58;
  
  this_00 = (this->SkillData).field0_0x0.DebugPtr;
  if (this_00 == (UDS_SkillData *)0x0) {
    __return_storage_ptr__->StringTableType = None;
    __return_storage_ptr__->StringTableID = 0;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  }
  else {
    local_58.StringTableType = None;
    local_58.StringTableID = 0;
    local_58.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_58.StringEnumTableNameID.Number = 0;
    local_58.DateTime.Ticks = 0;
    local_58.TimeSpan.Ticks = 0;
    local_58.TimeExpressionType = None;
    local_58.IsExpression = false;
    local_58.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.UniqueString.Data.ArrayNum = 0;
    local_58.UniqueString.Data.ArrayMax = 0;
    local_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.FormatArgs.ArrayNum = 0;
    local_58.FormatArgs.ArrayMax = 0;
    fVar1 = UDS_SkillData::GetElapsedCoolTime(this_00);
    FDS_Text::SetTextFromSec(&local_58,fVar1,SecondsDec1,false);
    __return_storage_ptr__->StringTableType = local_58.StringTableType;
    __return_storage_ptr__->StringTableID = local_58.StringTableID;
    __return_storage_ptr__->StringEnumTableNameID = local_58.StringEnumTableNameID;
    (__return_storage_ptr__->DateTime).Ticks = local_58.DateTime.Ticks;
    (__return_storage_ptr__->TimeSpan).Ticks = local_58.TimeSpan.Ticks;
    __return_storage_ptr__->TimeExpressionType = local_58.TimeExpressionType;
    __return_storage_ptr__->IsExpression = local_58.IsExpression;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         local_58.UniqueString.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = local_58.UniqueString.Data.ArrayNum;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = local_58.UniqueString.Data.ArrayMax;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data =
         local_58.FormatArgs.AllocatorInstance.Data;
    (__return_storage_ptr__->FormatArgs).ArrayNum = local_58.FormatArgs.ArrayNum;
    (__return_storage_ptr__->FormatArgs).ArrayMax = local_58.FormatArgs.ArrayMax;
    local_58.FormatArgs.ArrayNum = 0;
    local_58.FormatArgs.ArrayMax = 0;
    local_58.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.UniqueString.Data.ArrayNum = 0;
    local_58.UniqueString.Data.ArrayMax = 0;
    local_58.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
    if (local_58.FormatArgs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
    }
    if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetSkillCostText @ 14be223d0

FDS_Text * __thiscall
UDS_VM_SkillData::GetSkillCostText(UDS_VM_SkillData *this,FDS_Text *__return_storage_ptr__)

{
  FInstancedStruct *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FObjectPtr_u_0 FVar3;
  bool bVar4;
  undefined1 uVar5;
  ERoundingMode EVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  FDS_SkillTableRow *pFVar11;
  FName FVar12;
  FDS_Text *pFVar13;
  UEnum *pUVar14;
  longlong lVar15;
  FObjectPtr_u_0 *pFVar16;
  FDS_Int32StringFormatArg *pFVar17;
  FNumberFormattingOptions *pFVar18;
  int iVar19;
  ForAnyElementType FVar20;
  uint uVar21;
  ForAnyElementType FVar22;
  uint uVar23;
  FDS_TextFormatArg *pFVar24;
  FName local_res8;
  FDS_Text *local_res10;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_e8;
  FDS_Text local_d8;
  FDS_Text local_88;
  
  local_res10 = __return_storage_ptr__;
  pFVar11 = FDS_SkillTableRow::GetRef((longlong)this->SkillID,true);
  FVar12 = (FName)FDS_SkillActLevelTableRow::GetRef
                            ((longlong)(this->SkillLevel + pFVar11->ID_SkillActLevelGroup),true);
  pFVar13 = local_res10;
  FVar20.Data = (FScriptContainerElement *)0x0;
  if (*(int *)((longlong)FVar12 + 0x40) < 1) {
    __return_storage_ptr__->StringTableType = None;
    __return_storage_ptr__->StringTableID = 0;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  local_d8.StringTableType = None;
  uVar21 = 0;
  local_d8.StringTableID = 0;
  local_d8.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_d8.StringEnumTableNameID.Number = 0;
  local_d8.DateTime.Ticks = 0;
  local_d8.TimeSpan.Ticks = 0;
  local_d8.TimeExpressionType = None;
  local_d8.IsExpression = false;
  local_d8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.UniqueString.Data.ArrayNum = 0;
  local_d8.UniqueString.Data.ArrayMax = 0;
  local_d8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.FormatArgs.ArrayNum = 0;
  local_d8.FormatArgs.ArrayMax = 0;
  FVar22.Data = FVar20.Data;
  pFVar24 = (FDS_TextFormatArg *)FVar20.Data;
  uVar8 = uVar21;
  uVar23 = uVar21;
  local_res8 = FVar12;
  if (0 < *(int *)((longlong)FVar12 + 0x40)) {
    do {
      uVar23 = (uint)pFVar24;
      uVar8 = uVar21;
      if ((int)uVar23 < *(int *)((longlong)FVar12 + 0x60)) {
        uVar8 = ~uVar23 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        pFVar13 = (FDS_Text *)(*pcVar2)();
        return pFVar13;
      }
      pFVar1 = (((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)FVar12 + 0x58))->
               AllocatorInstance).Data;
      uVar8 = uVar21;
      if ((int)uVar23 < *(int *)((longlong)FVar12 + 0x40)) {
        uVar8 = ~uVar23 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        pFVar13 = (FDS_Text *)(*pcVar2)();
        return pFVar13;
      }
      pUVar14 = StaticEnum<enum_EDS_SkillCostType>();
      DS_Util::GetStringEnumTableKey((UEnum *)&local_res8,(int)pUVar14);
      local_88.StringTableType = None;
      local_88.StringTableID = 0;
      local_88.StringEnumTableNameID.ComparisonIndex.Value = 0;
      local_88.StringEnumTableNameID.Number = 0;
      local_88.DateTime.Ticks = 0;
      local_88.TimeSpan.Ticks = 0;
      local_88.TimeExpressionType = None;
      local_88.IsExpression = false;
      local_88.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.UniqueString.Data.ArrayNum = 0;
      local_88.UniqueString.Data.ArrayMax = 0;
      local_88.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.FormatArgs.ArrayNum = 0;
      local_88.FormatArgs.ArrayMax = 0;
      local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e8.ArrayNum = 0;
      local_e8.ArrayMax = 0;
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&local_e8.AllocatorInstance,&local_e8.ArrayMax);
      local_e8.ArrayNum = iVar9 + 1;
      FDS_TextFormatArg::FDS_TextFormatArg<FName>
                ((FDS_TextFormatArg *)(local_e8.AllocatorInstance.Data + (longlong)iVar9 * 0x28),
                 &local_res8);
      if (local_e8.ArrayNum == local_e8.ArrayMax) {
        local_e8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&local_e8.AllocatorInstance,&local_e8.ArrayMax);
      }
      lVar15 = (longlong)local_e8.ArrayNum;
      local_e8.ArrayNum = local_e8.ArrayNum + 1;
      this_00 = (FInstancedStruct *)(local_e8.AllocatorInstance.Data + lVar15 * 0x28);
      FInstancedStruct::FInstancedStruct(this_00);
      pFVar16 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
      FVar3 = pFVar16[1];
      this_00[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar16;
      this_00[1].StructMemory = (uchar *)FVar3;
      this_00[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar16[2];
      FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(this_00);
      pFVar17 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(this_00);
      if (pFVar17 != (FDS_Int32StringFormatArg *)0x0) {
        pFVar17->Value = *(int *)(pFVar1 + (longlong)FVar20.Data * 4);
      }
      FDS_Text::SetTextFormatFromStringTable(&local_88,StringUi,0x11d36,&local_e8);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
      if ((FDS_TextFormatArg *)local_e8.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      FVar22.Data = local_88.UniqueString.Data.AllocatorInstance.Data;
      if (uVar23 == 0) {
        iVar9 = local_88.UniqueString.Data.ArrayNum;
        lVar15 = (longlong)local_88.UniqueString.Data.ArrayNum;
        local_d8.StringTableType = local_88.StringTableType;
        local_d8.StringTableID = local_88.StringTableID;
        local_d8.StringEnumTableNameID = local_88.StringEnumTableNameID;
        local_d8.DateTime.Ticks = local_88.DateTime.Ticks;
        local_d8.TimeSpan.Ticks = local_88.TimeSpan.Ticks;
        local_d8.TimeExpressionType = local_88.TimeExpressionType;
        local_d8.IsExpression = local_88.IsExpression;
        local_d8.UniqueString.Data.ArrayNum = local_88.UniqueString.Data.ArrayNum;
        if ((local_88.UniqueString.Data.ArrayNum == 0) && (local_d8.UniqueString.Data.ArrayMax == 0)
           ) {
          local_d8.UniqueString.Data._8_8_ = local_88.UniqueString.Data._8_8_ & 0xffffffff;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_88.UniqueString.Data.ArrayNum,local_d8.UniqueString.Data.ArrayMax,
                     (ForAnyElementType *)&local_d8.UniqueString,local_88.UniqueString.Data.ArrayNum
                     ,&local_d8.UniqueString.Data.ArrayMax);
          if (iVar9 != 0) {
            memcpy(local_d8.UniqueString.Data.AllocatorInstance.Data,FVar22.Data,lVar15 * 2);
          }
        }
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)local_d8.FormatArgs.AllocatorInstance.Data,
                   local_d8.FormatArgs.ArrayNum);
        FVar22.Data = local_88.FormatArgs.AllocatorInstance.Data;
        iVar9 = local_88.FormatArgs.ArrayNum;
        local_d8.FormatArgs.ArrayNum = local_88.FormatArgs.ArrayNum;
        if ((local_88.FormatArgs.ArrayNum != 0) || (local_d8.FormatArgs.ArrayMax != 0)) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,local_88.FormatArgs.ArrayNum,local_d8.FormatArgs.ArrayMax,
                     &local_d8.FormatArgs.AllocatorInstance,local_88.FormatArgs.ArrayNum,
                     &local_d8.FormatArgs.ArrayMax);
          ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
                    (local_d8.FormatArgs.AllocatorInstance.Data,(FDS_TextFormatArg *)FVar22.Data,
                     iVar9);
          goto LAB_14be22894;
        }
        local_d8.FormatArgs._8_8_ = local_88.FormatArgs._8_8_ & 0xffffffff;
        iVar9 = 0;
      }
      else {
        local_d8.StringTableType = StringUi;
        local_d8.StringTableID = 0x11d37;
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)local_d8.FormatArgs.AllocatorInstance.Data,
                   local_d8.FormatArgs.ArrayNum);
        iVar9 = local_d8.FormatArgs.ArrayMax;
        local_d8.FormatArgs._8_8_ = (ulonglong)(uint)local_d8.FormatArgs.ArrayMax << 0x20;
        iVar19 = 0;
        iVar10 = 0;
        if (iVar9 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,0,&local_d8.FormatArgs.AllocatorInstance,0,&local_d8.FormatArgs.ArrayMax
                    );
          iVar19 = local_d8.FormatArgs.ArrayMax;
          iVar10 = local_d8.FormatArgs.ArrayNum;
        }
        if (iVar10 == iVar19) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&local_d8.FormatArgs.AllocatorInstance,
                              &local_d8.FormatArgs.ArrayMax);
        }
        pFVar24 = (FDS_TextFormatArg *)
                  (local_d8.FormatArgs.AllocatorInstance.Data + (longlong)iVar10 * 0x28);
        local_d8.FormatArgs.ArrayNum = iVar10 + 1;
        FInstancedStruct::FInstancedStruct((FInstancedStruct *)pFVar24);
        pFVar18 = FNumberFormattingOptions::DefaultWithGrouping();
        bVar7 = pFVar18->UseGrouping;
        bVar4 = pFVar18->IndicateNearlyInteger;
        uVar5 = pFVar18->field_0x3;
        EVar6 = pFVar18->RoundingMode;
        iVar9 = pFVar18->MinimumIntegralDigits;
        iVar19 = pFVar18->MaximumIntegralDigits;
        (pFVar24->NumberFormatOption).AlwaysSign = pFVar18->AlwaysSign;
        (pFVar24->NumberFormatOption).UseGrouping = bVar7;
        (pFVar24->NumberFormatOption).IndicateNearlyInteger = bVar4;
        (pFVar24->NumberFormatOption).field_0x3 = uVar5;
        (pFVar24->NumberFormatOption).RoundingMode = EVar6;
        (pFVar24->NumberFormatOption).MinimumIntegralDigits = iVar9;
        (pFVar24->NumberFormatOption).MaximumIntegralDigits = iVar19;
        iVar9 = pFVar18->MaximumFractionalDigits;
        (pFVar24->NumberFormatOption).MinimumFractionalDigits = pFVar18->MinimumFractionalDigits;
        (pFVar24->NumberFormatOption).MaximumFractionalDigits = iVar9;
        FDS_TextFormatArg::SetArg<FDS_Text_&>(pFVar24,&local_d8);
        if (local_d8.FormatArgs.ArrayNum == local_d8.FormatArgs.ArrayMax) {
          local_d8.FormatArgs.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x828,&local_d8.FormatArgs.AllocatorInstance,&local_d8.FormatArgs.ArrayMax
                         );
        }
        lVar15 = (longlong)local_d8.FormatArgs.ArrayNum;
        local_d8.FormatArgs.ArrayNum = local_d8.FormatArgs.ArrayNum + 1;
        pFVar24 = (FDS_TextFormatArg *)(local_d8.FormatArgs.AllocatorInstance.Data + lVar15 * 0x28);
        FInstancedStruct::FInstancedStruct((FInstancedStruct *)pFVar24);
        pFVar18 = FNumberFormattingOptions::DefaultWithGrouping();
        bVar7 = pFVar18->UseGrouping;
        bVar4 = pFVar18->IndicateNearlyInteger;
        uVar5 = pFVar18->field_0x3;
        EVar6 = pFVar18->RoundingMode;
        iVar9 = pFVar18->MinimumIntegralDigits;
        iVar19 = pFVar18->MaximumIntegralDigits;
        (pFVar24->NumberFormatOption).AlwaysSign = pFVar18->AlwaysSign;
        (pFVar24->NumberFormatOption).UseGrouping = bVar7;
        (pFVar24->NumberFormatOption).IndicateNearlyInteger = bVar4;
        (pFVar24->NumberFormatOption).field_0x3 = uVar5;
        (pFVar24->NumberFormatOption).RoundingMode = EVar6;
        (pFVar24->NumberFormatOption).MinimumIntegralDigits = iVar9;
        (pFVar24->NumberFormatOption).MaximumIntegralDigits = iVar19;
        iVar9 = pFVar18->MaximumFractionalDigits;
        (pFVar24->NumberFormatOption).MinimumFractionalDigits = pFVar18->MinimumFractionalDigits;
        (pFVar24->NumberFormatOption).MaximumFractionalDigits = iVar9;
        FDS_TextFormatArg::SetArg<FDS_Text_&>(pFVar24,&local_88);
LAB_14be22894:
        iVar9 = local_88.FormatArgs.ArrayNum;
      }
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_88.FormatArgs.AllocatorInstance.Data,iVar9);
      if ((FDS_TextFormatArg *)local_88.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_88.FormatArgs.AllocatorInstance.Data);
      }
      if (local_88.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.UniqueString.Data.AllocatorInstance.Data);
      }
      FVar20.Data = (FScriptContainerElement *)
                    ((longlong)&(((FDS_TextFormatArg *)FVar20.Data)->Arg).ScriptStruct.field0_0x0 +
                    1);
      pFVar24 = (FDS_TextFormatArg *)(ulonglong)(uVar23 + 1);
    } while ((int)(uVar23 + 1) < *(int *)((longlong)FVar12 + 0x40));
    FVar20.Data = local_d8.UniqueString.Data.AllocatorInstance.Data;
    FVar22.Data = local_d8.FormatArgs.AllocatorInstance.Data;
    uVar21 = local_d8.UniqueString.Data.ArrayNum;
    uVar8 = local_d8.UniqueString.Data.ArrayMax;
    uVar23 = local_d8.FormatArgs.ArrayNum;
  }
  pFVar13->StringTableType = local_d8.StringTableType;
  pFVar13->StringEnumTableNameID = local_d8.StringEnumTableNameID;
  (pFVar13->DateTime).Ticks = local_d8.DateTime.Ticks;
  (pFVar13->TimeSpan).Ticks = local_d8.TimeSpan.Ticks;
  pFVar13->StringTableID = local_d8.StringTableID;
  (pFVar13->UniqueString).Data.AllocatorInstance.Data = FVar20.Data;
  pFVar13->TimeExpressionType = local_d8.TimeExpressionType;
  pFVar13->IsExpression = local_d8.IsExpression;
  (pFVar13->UniqueString).Data.ArrayNum = uVar21;
  (pFVar13->UniqueString).Data.ArrayMax = uVar8;
  (pFVar13->FormatArgs).AllocatorInstance.Data = FVar22.Data;
  (pFVar13->FormatArgs).ArrayNum = uVar23;
  (pFVar13->FormatArgs).ArrayMax = local_d8.FormatArgs.ArrayMax;
  local_d8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.UniqueString.Data.ArrayNum = 0;
  local_d8.UniqueString.Data.ArrayMax = 0;
  local_d8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.FormatArgs.ArrayNum = 0;
  local_d8.FormatArgs.ArrayMax = 0;
  DestructItems<FDS_TextFormatArg,int>((FDS_TextFormatArg *)0x0,0);
  if (local_d8.FormatArgs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.FormatArgs.AllocatorInstance.Data);
  }
  if (local_d8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.UniqueString.Data.AllocatorInstance.Data);
  }
  return pFVar13;
}

// GetSkillCostValueArray @ 14be229b0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UDS_VM_SkillData::GetSkillCostValueArray
          (UDS_VM_SkillData *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement FVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FDS_SkillTableRow *pFVar6;
  UObject *pUVar7;
  FDS_SkillActLevelTableRow *pFVar8;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar9;
  UEnum *this_00;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  FWeakObjectPtr local_res8;
  FName local_res10;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  uVar12 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  UDS_SkillData::GetData((ulong64)&local_res8,this->CharEntityID,SUB41(this->SkillID,0));
  bVar3 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar3) {
    return __return_storage_ptr__;
  }
  pFVar6 = FDS_SkillTableRow::GetRef((longlong)this->SkillID,true);
  pUVar7 = FWeakObjectPtr::Get(&local_res8);
  pFVar8 = FDS_SkillActLevelTableRow::GetRef
                     ((longlong)(*(int *)&pUVar7[4].field_0x8 + pFVar6->ID_SkillActLevelGroup),true)
  ;
  uVar14 = uVar12;
  if (0 < (pFVar8->SkillCostType).ArrayNum) {
    do {
      uVar13 = (uint)uVar14;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      uVar4 = 0;
      if ((int)uVar13 < (pFVar8->SkillCostType).ArrayNum) {
        uVar4 = ~uVar13 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar9 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar9;
      }
      FVar1 = (pFVar8->SkillCostType).AllocatorInstance.Data[uVar12];
      this_00 = StaticEnum<enum_EDS_SkillCostType>();
      if (this_00 == (UEnum *)0x0) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8627520946023956279>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Util\\DS_Util.h",
                           0xc9,"false");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar9 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar9;
        }
        local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.Data.ArrayNum = 0;
        local_78.Data.ArrayMax = 0;
      }
      else {
        UEnum::GetNameStringByValue(this_00,&local_48,(ulonglong)(byte)FVar1);
        local_res10 = (FName)this_00->_padding_;
        ::FName::ToString(&local_res10,&local_68);
        ::FString::PrintfImpl(&local_58,L"%s_%s");
        DS_Util::GetEnumString(&local_78,&local_58);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      uVar4 = local_78.Data.ArrayNum - 1;
      if (local_78.Data.ArrayNum == 0) {
        uVar4 = 0;
      }
      ::FString::AppendChars(&local_88,(wchar_t *)local_78.Data.AllocatorInstance.Data,uVar4);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      ::FString::AppendChars(&local_88," ",1);
      uVar4 = 0;
      if ((int)uVar13 < (pFVar8->SkillCost).ArrayNum) {
        uVar4 = ~uVar13 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar9 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar9;
      }
      ::FString::AppendInt
                (&local_88,*(int *)((pFVar8->SkillCost).AllocatorInstance.Data + uVar12 * 4));
      pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar10 <= (FScriptContainerElement *)&local_88) &&
          ((FScriptContainerElement *)&local_88 <
           pFVar10 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar9 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar9;
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      _Src.Data = local_88.Data.AllocatorInstance.Data;
      pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      *(undefined8 *)&pFVar10->field_0x0 = 0;
      lVar11 = (longlong)local_88.Data.ArrayNum;
      *(int *)&pFVar10[8].field_0x0 = local_88.Data.ArrayNum;
      if (local_88.Data.ArrayNum == 0) {
        *(int *)(pFVar10 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)pFVar10,local_88.Data.ArrayNum,
                   (int *)(pFVar10 + 0xc));
        memcpy(*(void **)&pFVar10->field_0x0,_Src.Data,lVar11 * 2);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      uVar12 = uVar12 + 1;
      uVar14 = (ulonglong)(uVar13 + 1);
    } while ((int)(uVar13 + 1) < (pFVar8->SkillCostType).ArrayNum);
  }
  return __return_storage_ptr__;
}

// GetSkillDescText @ 14be22d80

FDS_Text * __thiscall
UDS_VM_SkillData::GetSkillDescText(UDS_VM_SkillData *this,FDS_Text *__return_storage_ptr__)

{
  FDS_SkillTableRow *pFVar1;
  
  pFVar1 = FDS_SkillTableRow::GetRef((longlong)this->SkillID,true);
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  FDS_Text::SetTextFromStringID(__return_storage_ptr__,&pFVar1->ID_EffectDesc);
  return __return_storage_ptr__;
}

// GetSkillUseTypeText @ 14be22de0

FDS_Text * __thiscall
UDS_VM_SkillData::GetSkillUseTypeText(UDS_VM_SkillData *this,FDS_Text *__return_storage_ptr__)

{
  bool bVar1;
  FDS_SkillTableRow *this_00;
  UEnum *pUVar2;
  FName local_res8;
  
  this_00 = FDS_SkillTableRow::GetRef((longlong)this->SkillID,true);
  bVar1 = FDS_SkillTableRow::IsValid(this_00);
  if (!bVar1) {
    __return_storage_ptr__->StringTableType = None;
    __return_storage_ptr__->StringTableID = 0;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pUVar2 = StaticEnum<enum_EDS_SkillUseType>();
  DS_Util::GetStringEnumTableKey((UEnum *)&local_res8,(int)pUVar2);
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  FDS_Text::SetTextFromStringEnumTable(__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// OnCloseInit @ 14be2d1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_SkillData::OnCloseInit(UDS_VM_SkillData *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> TVar5;
  undefined1 *puVar6;
  ulong64 uVar7;
  undefined1 uVar8;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  FWeakObjectPtr local_150;
  undefined1 local_148 [8];
  undefined1 local_140 [8];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (this->PlayerEntityID < 1) {
    uVar8 = (undefined1)this->SkillID;
    uVar7 = this->CharEntityID;
    puVar6 = local_140;
  }
  else {
    UDS_PlayerData::GetData((ulong64)&local_158,this->PlayerEntityID,false);
    bVar2 = FWeakObjectPtr::IsValid(&local_158);
    if (!bVar2) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2272247882398564440>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_SkillData.cpp"
                         ,0x58,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_SkillData::OnCloseInit",0x1d,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x59,L"playerData is Invalid.");
      if ((void *)local_138._padding_ == (void *)0x0) {
        return;
      }
      FMemory::Free((void *)local_138._padding_);
      return;
    }
    uVar8 = (undefined1)this->SkillID;
    pUVar4 = FWeakObjectPtr::Get(&local_158);
    puVar6 = local_148;
    uVar7 = *(ulong64 *)&pUVar4[8].field_0x10;
  }
  TVar5 = UDS_SkillData::GetData((ulong64)puVar6,uVar7,(bool)uVar8);
                    /* WARNING: Load size is inaccurate */
  local_150 = *TVar5.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_150);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&local_150);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar4 + 1),(UObject *)this)
    ;
  }
  UDS_ViewModelBase::OnCloseInit((UDS_ViewModelBase *)this);
  return;
}

// OnDirtySkillData @ 14be2d570

void __thiscall UDS_VM_SkillData::OnDirtySkillData(UDS_VM_SkillData *this,UDS_DataBase *param_1)

{
  int iVar1;
  void *_Src;
  FName FVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  UDS_DataBase *pUVar6;
  ulong64 uVar7;
  UObject *pUVar8;
  UDS_SkillData *pUVar9;
  longlong *plVar10;
  longlong lVar11;
  float fVar12;
  FWeakObjectPtr local_res10;
  UDS_DataBase *local_res18;
  FName local_58;
  int local_50;
  ForAnyElementType local_48;
  int local_40;
  int local_3c [5];
  
  if (param_1 != (UDS_DataBase *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_SkillData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_14be2d5af;
  }
  param_1 = (UDS_DataBase *)0x0;
LAB_14be2d5af:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_DataBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_DataBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  iVar1 = FFieldNotificationClassDescriptor::CharEntityID.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::CharEntityID.FieldName;
  if (bVar3) {
    pUVar6 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_res10);
    uVar7 = UDS_DataBase::GetEntityID(pUVar6);
    if (this->CharEntityID != uVar7) {
      local_50 = iVar1;
      this->CharEntityID = uVar7;
      local_58 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
    }
    iVar1 = FFieldNotificationClassDescriptor::CharID.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::CharID.FieldName;
    plVar10 = &this->_padding_;
    pUVar6 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_res10);
    iVar4 = UDS_DataBase::GetEntityTableID(pUVar6);
    if (this->CharID != iVar4) {
      this->CharID = iVar4;
      local_58 = FVar2;
      local_50 = iVar1;
      (**(code **)(*plVar10 + 0x38))(plVar10,&local_58);
    }
    iVar1 = FFieldNotificationClassDescriptor::SkillID.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::SkillID.FieldName;
    pUVar8 = FWeakObjectPtr::Get(&local_res10);
    if (this->SkillID != *(int *)&pUVar8[2].field_0x1c) {
      this->SkillID = *(int *)&pUVar8[2].field_0x1c;
      local_58 = FVar2;
      local_50 = iVar1;
      (**(code **)(*plVar10 + 0x38))(plVar10,&local_58);
    }
    iVar1 = FFieldNotificationClassDescriptor::SkillLevel.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::SkillLevel.FieldName;
    pUVar8 = FWeakObjectPtr::Get(&local_res10);
    if (this->SkillLevel != *(int *)&pUVar8[4].field_0x8) {
      this->SkillLevel = *(int *)&pUVar8[4].field_0x8;
      local_58 = FVar2;
      local_50 = iVar1;
      (**(code **)(*plVar10 + 0x38))(plVar10,&local_58);
    }
    iVar1 = FFieldNotificationClassDescriptor::CoolTime.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::CoolTime.FieldName;
    plVar10 = &this->_padding_;
    pUVar9 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_res10);
    fVar12 = UDS_SkillData::GetElapsedCoolTime(pUVar9);
    if (fVar12 != this->CoolTime) {
      this->CoolTime = fVar12;
      local_58 = FVar2;
      local_50 = iVar1;
      (**(code **)(*plVar10 + 0x38))(plVar10,&local_58);
    }
    iVar1 = FFieldNotificationClassDescriptor::HasSubSkill.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::HasSubSkill.FieldName;
    pUVar8 = FWeakObjectPtr::Get(&local_res10);
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = *(int *)&pUVar8[3].field_0x10;
    lVar11 = (longlong)local_40;
    _Src = *(void **)&pUVar8[3].field_0x8;
    if (local_40 == 0) {
      local_3c[0] = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_40,0,&local_48,local_40,local_3c);
      memcpy(local_48.Data,_Src,lVar11 << 2);
    }
    if (this->HasSubSkill != 0 < local_40) {
      this->HasSubSkill = 0 < local_40;
      local_58 = FVar2;
      local_50 = iVar1;
      (**(code **)(*plVar10 + 0x38))(plVar10,&local_58);
    }
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    iVar1 = FFieldNotificationClassDescriptor::IsMainSkill.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::IsMainSkill.FieldName;
    pUVar9 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_res10);
    iVar4 = UDS_SkillData::GetMainSkillID(pUVar9);
    bVar3 = iVar4 == this->SkillID;
    if (this->IsMainSkill != bVar3) {
      local_50 = iVar1;
      this->IsMainSkill = bVar3;
      local_58 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
    }
    iVar1 = FFieldNotificationClassDescriptor::SkillUseType.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::SkillUseType.FieldName;
    plVar10 = &this->_padding_;
    pUVar8 = FWeakObjectPtr::Get(&local_res10);
    if (this->SkillUseType != pUVar8[9].field_0x8) {
      this->SkillUseType = pUVar8[9].field_0x8;
      local_58 = FVar2;
      local_50 = iVar1;
      (**(code **)(*plVar10 + 0x38))(plVar10,&local_58);
    }
    iVar1 = FFieldNotificationClassDescriptor::IsAscending.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::IsAscending.FieldName;
    pUVar9 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_res10);
    bVar3 = UDS_SkillData::IsAscending(pUVar9);
    if (this->IsAscending != bVar3) {
      this->IsAscending = bVar3;
      local_58 = FVar2;
      local_50 = iVar1;
      (**(code **)(*plVar10 + 0x38))(plVar10,&local_58);
    }
    iVar1 = FFieldNotificationClassDescriptor::IsAscendComplete.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::IsAscendComplete.FieldName;
    pUVar9 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_res10);
    bVar3 = UDS_SkillData::IsAscendComplete(pUVar9);
    if (this->IsAscendComplete != bVar3) {
      this->IsAscendComplete = bVar3;
      local_58 = FVar2;
      local_50 = iVar1;
      (**(code **)(*plVar10 + 0x38))(plVar10,&local_58);
    }
    local_50 = FFieldNotificationClassDescriptor::GetSkillCostText.BitNumber;
    local_58 = FFieldNotificationClassDescriptor::GetSkillCostText.FieldName;
    (**(code **)(*plVar10 + 0x38))(plVar10,&local_58);
    local_50 = FFieldNotificationClassDescriptor::SkillIconID.BitNumber;
    local_58 = FFieldNotificationClassDescriptor::SkillIconID.FieldName;
    (**(code **)(*plVar10 + 0x38))(plVar10,&local_58);
    local_50 = FFieldNotificationClassDescriptor::GetSkillUseTypeText.BitNumber;
    local_58 = FFieldNotificationClassDescriptor::GetSkillUseTypeText.FieldName;
    (**(code **)(*plVar10 + 0x38))(plVar10,&local_58);
    local_50 = FFieldNotificationClassDescriptor::GetSkillCoolTimeText.BitNumber;
    local_58 = FFieldNotificationClassDescriptor::GetSkillCoolTimeText.FieldName;
    (**(code **)(*plVar10 + 0x38))(plVar10,&local_58);
    local_50 = FFieldNotificationClassDescriptor::SkillNameText.BitNumber;
    local_58 = FFieldNotificationClassDescriptor::SkillNameText.FieldName;
    (**(code **)(*plVar10 + 0x38))(plVar10,&local_58);
    local_50 = FFieldNotificationClassDescriptor::SkillMovieID.BitNumber;
    local_58 = FFieldNotificationClassDescriptor::SkillMovieID.FieldName;
    (**(code **)(*plVar10 + 0x38))(plVar10,&local_58);
    local_50 = FFieldNotificationClassDescriptor::GetSkillDescText.BitNumber;
    local_58 = FFieldNotificationClassDescriptor::GetSkillDescText.FieldName;
    (**(code **)(*plVar10 + 0x38))(plVar10,&local_58);
  }
  return;
}

// OnSetViewModel @ 14be3ede0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UDS_VM_SkillData::OnSetViewModel(UDS_VM_SkillData *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_SkillData *pUVar4;
  char *pcVar5;
  UObject *this_00;
  UFunction *pUVar6;
  char *pcVar7;
  undefined1 auStackY_248 [32];
  <lambda_1> local_218 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_210;
  FWeakObjectPtr local_208;
  FName local_200;
  FName local_1f8;
  FName local_1f0;
  UDS_VM_SkillData *local_1e8;
  FName *local_1e0;
  TSharedPtr<FDS_VMContext_SkillData,1> local_1d8;
  TSharedPtr<FDS_ViewModelContext,1> local_1c8;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_1b8;
  FDestructionSentinel local_1a8;
  FReadAccessScope local_190;
  FReadAccessScope local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_1c8.Object = param_1->Object;
  local_1c8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_1c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_VMContext_SkillData>(&local_1d8,&local_1c8);
  if (local_1d8.Object == (FDS_VMContext_SkillData *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2272247882398564387>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_SkillData.cpp"
                       ,0x23,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_SkillData::OnSetViewModel",0x20,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_158.Ptr,0x24,
                 L"UDS_VM_SkillData::SetViewModel() skillDataContext is nullptr.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    goto LAB_14be3f12a;
  }
  pUVar4 = (UDS_SkillData *)FWeakObjectPtr::Get(&((local_1d8.Object)->SkillData).WeakPtr);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_SkillData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->SkillData).field0_0x0.DebugPtr = pUVar4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar4->_padding_,
             (UObject *)this);
  pUVar4 = (this->SkillData).field0_0x0.DebugPtr;
  pcVar5 = strstr("&UDS_VM_SkillData::OnDirtySkillData","::");
  if (pcVar5 == (char *)0x0) {
LAB_14be3ef9b:
    pcVar7 = &DAT_00000002;
LAB_14be3efa0:
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
      pcVar7 = pcVar5;
      pcVar5 = strstr(pcVar7 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if (pcVar7 == (char *)0x0) goto LAB_14be3ef9b;
    pcVar7 = pcVar7 + 2;
    if (*pcVar7 == '0') goto LAB_14be3efa0;
  }
  ::FName::FName(&local_1f0,pcVar7);
  local_1e8 = this;
  if (this == (UDS_VM_SkillData *)0x0) {
    local_1e8 = (UDS_VM_SkillData *)0x0;
  }
  local_210.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_208.ObjectIndex = 0;
  local_208.ObjectSerialNumber = 0;
  local_200.ComparisonIndex.Value = 0;
  local_200.Number = 0;
  local_1f8 = local_1f0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1e8 != (UDS_VM_SkillData *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)local_1e8);
  }
  FWeakObjectPtr::operator=(&local_208,(FObjectPtr)&local_1e8);
  local_200 = local_1f8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_210,&local_190);
  if ((local_200 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_208), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_190);
LAB_14be3f08e:
    local_1e0 = &local_1f8;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDS_DataBase_*>::
    __Internal_BindDynamic<UDS_VM_SkillData>'::__l2::<lambda_1>::operator()(&local_1e0);
  }
  else {
    pUVar6 = UObject::FindFunction(this_00,local_200);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_190);
    if (pUVar6 == (UFunction *)0x0) goto LAB_14be3f08e;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_210,&local_178);
  local_1b8.Object = local_208;
  local_1b8.FunctionName = local_200;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_178);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar4->_padding_,
             (FWriteAccessScope *)&local_1a8);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar4->_padding_,local_218,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar4->_padding_,&local_1b8);
  if (local_1a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_210.AccessDetector);
  OnDirtySkillData(this,(UDS_DataBase *)(this->SkillData).field0_0x0.DebugPtr);
LAB_14be3f12a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetSkillData @ 14be51c00

void __thiscall
UDS_VM_SkillData::SetSkillData
          (UDS_VM_SkillData *this,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> param_1)

{
  UDS_SkillData *pUVar1;
  FName FVar2;
  int iVar3;
  UDS_SkillData *pUVar4;
  bool bVar5;
  FWeakObjectPtr local_res10;
  FName local_18;
  int local_10;
  
  iVar3 = FFieldNotificationClassDescriptor::SkillData.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::SkillData.FieldName;
  local_res10 = param_1.WeakPtr;
  pUVar4 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_res10);
  pUVar1 = (this->SkillData).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_SkillData *)0x0) {
    bVar5 = pUVar4 == (UDS_SkillData *)0x0;
  }
  else {
    bVar5 = pUVar1 == pUVar4;
  }
  if (!bVar5) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_SkillData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->SkillData).field0_0x0.DebugPtr = pUVar4;
    local_18 = FVar2;
    local_10 = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  OnDirtySkillData(this,(UDS_DataBase *)(this->SkillData).field0_0x0.DebugPtr);
  return;
}

// SkillIconID @ 14be53410

int __thiscall UDS_VM_SkillData::SkillIconID(UDS_VM_SkillData *this)

{
  FDS_SkillTableRow *pFVar1;
  
  pFVar1 = FDS_SkillTableRow::GetRef((longlong)this->SkillID,true);
  return pFVar1->ID_Icon;
}

// SkillMovieID @ 14be53430

int __thiscall UDS_VM_SkillData::SkillMovieID(UDS_VM_SkillData *this)

{
  FDS_SkillTableRow *pFVar1;
  
  pFVar1 = FDS_SkillTableRow::GetRef((longlong)this->SkillID,true);
  return pFVar1->ID_SkillMovie;
}

// SkillNameText @ 14be53450

FDS_Text * __thiscall
UDS_VM_SkillData::SkillNameText(UDS_VM_SkillData *this,FDS_Text *__return_storage_ptr__)

{
  FDS_SkillTableRow *pFVar1;
  
  pFVar1 = FDS_SkillTableRow::GetRef((longlong)this->SkillID,true);
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  FDS_Text::SetTextFromStringID(__return_storage_ptr__,&pFVar1->ID_Name);
  return __return_storage_ptr__;
}

// SkillTypeText @ 14be534b0

FDS_Text * __thiscall
UDS_VM_SkillData::SkillTypeText(UDS_VM_SkillData *this,FDS_Text *__return_storage_ptr__)

{
  bool bVar1;
  FDS_SkillTableRow *this_00;
  UEnum *pUVar2;
  FName local_res8;
  
  this_00 = FDS_SkillTableRow::GetRef((longlong)this->SkillID,true);
  bVar1 = FDS_SkillTableRow::IsValid(this_00);
  if (!bVar1) {
    __return_storage_ptr__->StringTableType = None;
    __return_storage_ptr__->StringTableID = 0;
    (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
    (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
    (__return_storage_ptr__->DateTime).Ticks = 0;
    (__return_storage_ptr__->TimeSpan).Ticks = 0;
    __return_storage_ptr__->TimeExpressionType = None;
    __return_storage_ptr__->IsExpression = false;
    (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
    (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
    (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
    (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  pUVar2 = StaticEnum<enum_EDS_SkillType>();
  DS_Util::GetStringEnumTableKey((UEnum *)&local_res8,(int)pUVar2);
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  FDS_Text::SetTextFromStringEnumTable(__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

