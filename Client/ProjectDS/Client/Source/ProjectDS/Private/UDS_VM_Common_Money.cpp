// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// SetMoneyType_WrapperImpl @ 14b6264a0

void __cdecl UDS_VM_Common_Money::SetMoneyType_WrapperImpl(void *param_1,void *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014b6264a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x338))();
  return;
}

// SetMoneyIconID_WrapperImpl @ 14b6264b0

void __cdecl UDS_VM_Common_Money::SetMoneyIconID_WrapperImpl(void *param_1,void *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014b6264b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x340))();
  return;
}

// SetMoneyName_WrapperImpl @ 14b6264c0

void __cdecl UDS_VM_Common_Money::SetMoneyName_WrapperImpl(void *param_1,void *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014b6264c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x348))();
  return;
}

// SetMoneyQuantity_WrapperImpl @ 14b6264d0

void __cdecl UDS_VM_Common_Money::SetMoneyQuantity_WrapperImpl(void *param_1,void *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014b6264d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x350))();
  return;
}

// SetMoneyQuantity_Tradeable_WrapperImpl @ 14b6264e0

void __cdecl
UDS_VM_Common_Money::SetMoneyQuantity_Tradeable_WrapperImpl(void *param_1,void *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014b6264e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x358))();
  return;
}

// SetVisibleTradable_WrapperImpl @ 14b6264f0

void __cdecl UDS_VM_Common_Money::SetVisibleTradable_WrapperImpl(void *param_1,void *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014b6264f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x360))();
  return;
}

// SetMoneyColor_WrapperImpl @ 14b626500

void __cdecl UDS_VM_Common_Money::SetMoneyColor_WrapperImpl(void *param_1,void *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014b626503. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x368))();
  return;
}

// StaticClass @ 14b626510

UClass * __cdecl UDS_VM_Common_Money::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Common_Money.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Common_Money",
               &Z_Registration_Info_UClass_UDS_VM_Common_Money.InnerSingleton,
               StaticRegisterNativesUDS_VM_Common_Money,0x140,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Common_Money>,
               InternalVTableHelperCtorCaller<UDS_VM_Common_Money>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Common_Money.InnerSingleton;
}

// UDS_VM_Common_Money @ 14b62c7b0

UDS_VM_Common_Money * __thiscall
UDS_VM_Common_Money::UDS_VM_Common_Money(UDS_VM_Common_Money *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->MoneyType = None;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_Money__6B_;
  (this->MoneyName).StringTableID = 0;
  (this->MoneyName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MoneyName).StringEnumTableNameID.Number = 0;
  (this->MoneyName).DateTime.Ticks = 0;
  (this->MoneyName).TimeSpan.Ticks = 0;
  (this->MoneyName).TimeExpressionType = None;
  (this->MoneyName).IsExpression = false;
  (this->MoneyName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MoneyName).UniqueString.Data.ArrayNum = 0;
  (this->MoneyName).UniqueString.Data.ArrayMax = 0;
  (this->MoneyName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MoneyName).FormatArgs.ArrayNum = 0;
  (this->MoneyName).FormatArgs.ArrayMax = 0;
  (this->MoneyName).StringTableType = None;
  (this->MoneyColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  return this;
}

// UDS_VM_Common_Money @ 14b62c850

UDS_VM_Common_Money * __thiscall
UDS_VM_Common_Money::UDS_VM_Common_Money(UDS_VM_Common_Money *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->MoneyType = None;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_Money__6B_;
  (this->MoneyName).StringTableID = 0;
  (this->MoneyName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MoneyName).StringEnumTableNameID.Number = 0;
  (this->MoneyName).DateTime.Ticks = 0;
  (this->MoneyName).TimeSpan.Ticks = 0;
  (this->MoneyName).TimeExpressionType = None;
  (this->MoneyName).IsExpression = false;
  (this->MoneyName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MoneyName).UniqueString.Data.ArrayNum = 0;
  (this->MoneyName).UniqueString.Data.ArrayMax = 0;
  (this->MoneyName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MoneyName).FormatArgs.ArrayNum = 0;
  (this->MoneyName).FormatArgs.ArrayMax = 0;
  (this->MoneyName).StringTableType = None;
  (this->MoneyColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  return this;
}

// ~UDS_VM_Common_Money @ 14b62ecb0

void __thiscall UDS_VM_Common_Money::~UDS_VM_Common_Money(UDS_VM_Common_Money *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_Money__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->MoneyName).FormatArgs.AllocatorInstance.Data,
             (this->MoneyName).FormatArgs.ArrayNum);
  pFVar1 = (this->MoneyName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MoneyName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b631830

IClassDescriptor * __thiscall
UDS_VM_Common_Money::GetFieldNotificationDescriptor(UDS_VM_Common_Money *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Common_Money::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6322a0

UClass * __cdecl UDS_VM_Common_Money::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Common_Money.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Common_Money",
               &Z_Registration_Info_UClass_UDS_VM_Common_Money.InnerSingleton,
               StaticRegisterNativesUDS_VM_Common_Money,0x140,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Common_Money>,
               InternalVTableHelperCtorCaller<UDS_VM_Common_Money>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Common_Money.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Common_Money @ 14b632fa0

void __cdecl UDS_VM_Common_Money::StaticRegisterNativesUDS_VM_Common_Money(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_Common_Money_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execTextMoneyQuantity @ 14b634800

void __cdecl
UDS_VM_Common_Money::execTextMoneyQuantity(UObject *param_1,FFrame *param_2,void *param_3)

{
  FText *pFVar1;
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = TextMoneyQuantity((UDS_VM_Common_Money *)param_1,&local_18);
  FText::operator=(param_3,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// SetMoneyColor @ 14bde7650

void __thiscall UDS_VM_Common_Money::SetMoneyColor(UDS_VM_Common_Money *this,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FName local_18;
  int local_10;
  
  if (((((param_1->field0_0x0)._s_0.R != (this->MoneyColor).field0_0x0._s_0.R) ||
       ((param_1->field0_0x0)._s_0.G != (this->MoneyColor).field0_0x0._s_0.G)) ||
      ((param_1->field0_0x0)._s_0.B != (this->MoneyColor).field0_0x0._s_0.B)) ||
     ((param_1->field0_0x0)._s_0.A != (this->MoneyColor).field0_0x0._s_0.A)) {
    fVar1 = (param_1->field0_0x0)._s_0.G;
    fVar2 = (param_1->field0_0x0)._s_0.B;
    fVar3 = (param_1->field0_0x0)._s_0.A;
    local_10 = FFieldNotificationClassDescriptor::MoneyColor.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::MoneyColor.FieldName;
    (this->MoneyColor).field0_0x0._s_0.R = (param_1->field0_0x0)._s_0.R;
    (this->MoneyColor).field0_0x0._s_0.G = fVar1;
    (this->MoneyColor).field0_0x0._s_0.B = fVar2;
    (this->MoneyColor).field0_0x0._s_0.A = fVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetMoneyIconID @ 14bde76d0

void __thiscall UDS_VM_Common_Money::SetMoneyIconID(UDS_VM_Common_Money *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::MoneyIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MoneyIconID.FieldName;
  if (this->MoneyIconID != *param_1) {
    this->MoneyIconID = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetMoneyName @ 14bde79c0

void __thiscall UDS_VM_Common_Money::SetMoneyName(UDS_VM_Common_Money *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::MoneyName.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::MoneyName.FieldName;
  FDS_Text::operator=(&this->MoneyName,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetMoneyQuantity @ 14bde7a20

void __thiscall UDS_VM_Common_Money::SetMoneyQuantity(UDS_VM_Common_Money *this,long64 *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::MoneyQuantity.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MoneyQuantity.FieldName;
  if (this->MoneyQuantity != *param_1) {
    this->MoneyQuantity = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetMoneyQuantity_Tradeable @ 14bde7a70

void __thiscall
UDS_VM_Common_Money::SetMoneyQuantity_Tradeable(UDS_VM_Common_Money *this,long64 *param_1)

{
  FName FVar1;
  undefined1 local_res8 [8];
  FName local_18;
  int local_10;
  
  FVar1 = FFieldNotificationClassDescriptor::MoneyQuantity_Tradeable.FieldName;
  if (this->MoneyQuantity_Tradeable != *param_1) {
    local_10 = FFieldNotificationClassDescriptor::MoneyQuantity_Tradeable.BitNumber;
    this->MoneyQuantity_Tradeable = *param_1;
    local_18 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_res8[0] = 2;
  if (0 < *param_1) {
    local_res8[0] = 4;
  }
  (**(code **)(this->_padding_ + 0x360))(this,local_res8);
  return;
}

// SetMoneyType @ 14bde7b00

void __thiscall UDS_VM_Common_Money::SetMoneyType(UDS_VM_Common_Money *this,EDS_MoneyType *param_1)

{
  FName FVar1;
  bool bVar2;
  FDS_MoneyBaseTableRow *this_00;
  FName local_18;
  int local_10;
  
  FVar1 = FFieldNotificationClassDescriptor::MoneyType.FieldName;
  if (this->MoneyType != *param_1) {
    local_10 = FFieldNotificationClassDescriptor::MoneyType.BitNumber;
    this->MoneyType = *param_1;
    local_18 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  this_00 = FDS_MoneyBaseTableRow::GetRef((ulonglong)this->MoneyType,true);
  bVar2 = FDS_MoneyBaseTableRow::IsValid(this_00);
  if (bVar2) {
    (**(code **)(this->_padding_ + 0x340))(this,&this_00->ID_MoneyIcon);
  }
  return;
}

// SetVisibleTradable @ 14bdea670

void __thiscall
UDS_VM_Common_Money::SetVisibleTradable(UDS_VM_Common_Money *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibleTradable.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleTradable.FieldName;
  if (this->VisibleTradable != *param_1) {
    this->VisibleTradable = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// TextMoneyQuantity @ 14bdeacb0

FText * __thiscall
UDS_VM_Common_Money::TextMoneyQuantity(UDS_VM_Common_Money *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 local_res10 [24];
  
  pFVar2 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (pFVar2->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  __return_storage_ptr__->Flags = pFVar2->Flags;
  return __return_storage_ptr__;
}

