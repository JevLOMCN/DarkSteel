// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 52

// GetTargetValue_WrapperImpl @ 14b6ba0d0

void __cdecl UDS_VM_Progress::GetTargetValue_WrapperImpl(void *param_1,void *param_2)

{
  float fVar1;
  
  fVar1 = GetTargetValue(param_1);
  *(float *)param_2 = fVar1;
  return;
}

// SetTargetValue_WrapperImpl @ 14b6ba100

void __cdecl UDS_VM_Progress::SetTargetValue_WrapperImpl(void *param_1,void *param_2)

{
  SetTargetValue(param_1,*(float *)param_2);
  return;
}

// GetCurrentValue_WrapperImpl @ 14b6ba110

void __cdecl UDS_VM_Progress::GetCurrentValue_WrapperImpl(void *param_1,void *param_2)

{
  float fVar1;
  
  fVar1 = GetCurrentValue(param_1);
  *(float *)param_2 = fVar1;
  return;
}

// SetCurrentValue_WrapperImpl @ 14b6ba130

void __cdecl UDS_VM_Progress::SetCurrentValue_WrapperImpl(void *param_1,void *param_2)

{
  SetCurrentValue(param_1,*(float *)param_2);
  return;
}

// GetMaxValue_WrapperImpl @ 14b6ba200

void __cdecl UDS_VM_Progress::GetMaxValue_WrapperImpl(void *param_1,void *param_2)

{
  float fVar1;
  
  fVar1 = GetMaxValue(param_1);
  *(float *)param_2 = fVar1;
  return;
}

// SetMaxValue_WrapperImpl @ 14b6ba220

void __cdecl UDS_VM_Progress::SetMaxValue_WrapperImpl(void *param_1,void *param_2)

{
  SetMaxValue(param_1,*(float *)param_2);
  return;
}

// GetMinValue_WrapperImpl @ 14b6ba230

void __cdecl UDS_VM_Progress::GetMinValue_WrapperImpl(void *param_1,void *param_2)

{
  float fVar1;
  
  fVar1 = GetMinValue(param_1);
  *(float *)param_2 = fVar1;
  return;
}

// SetMinValue_WrapperImpl @ 14b6ba250

void __cdecl UDS_VM_Progress::SetMinValue_WrapperImpl(void *param_1,void *param_2)

{
  SetMinValue(param_1,*(float *)param_2);
  return;
}

// GetIsUpdateCurrentValue_WrapperImpl @ 14b6ba260

void __cdecl UDS_VM_Progress::GetIsUpdateCurrentValue_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  
  bVar1 = GetIsUpdateCurrentValue(param_1);
  *(bool *)param_2 = bVar1;
  return;
}

// SetIsUpdateCurrentValue_WrapperImpl @ 14b6ba280

void __cdecl UDS_VM_Progress::SetIsUpdateCurrentValue_WrapperImpl(void *param_1,void *param_2)

{
  SetIsUpdateCurrentValue(param_1,*(bool *)param_2);
  return;
}

// StaticClass @ 14b6ba290

UClass * __cdecl UDS_VM_Progress::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Progress.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Progress",
               &Z_Registration_Info_UClass_UDS_VM_Progress.InnerSingleton,
               StaticRegisterNativesUDS_VM_Progress,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_Progress>,InternalVTableHelperCtorCaller<UDS_VM_Progress>,
               local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Progress.InnerSingleton;
}

// UDS_VM_Progress @ 14b6bdff0

UDS_VM_Progress * __thiscall
UDS_VM_Progress::UDS_VM_Progress(UDS_VM_Progress *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->TargetSpeed = 1.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Progress__6B_;
  this->PlayTime = 0.0;
  this->PreviousValue = 0.0;
  this->CurrentValue = 0.0;
  this->MaxValue = 0.0;
  this->MinValue = 0.0;
  this->IsUpdateCurrentValue = false;
  this->IncreaseType = Linear;
  this->ElapsedTime = 0.0;
  this->TimeExpression = SecondsText;
  this->TargetValue = 0.0;
  return this;
}

// UDS_VM_Progress @ 14b6be070

UDS_VM_Progress * __thiscall
UDS_VM_Progress::UDS_VM_Progress(UDS_VM_Progress *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->TargetSpeed = 1.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Progress__6B_;
  this->PlayTime = 0.0;
  this->PreviousValue = 0.0;
  this->CurrentValue = 0.0;
  this->MaxValue = 0.0;
  this->MinValue = 0.0;
  this->IsUpdateCurrentValue = false;
  this->IncreaseType = Linear;
  this->ElapsedTime = 0.0;
  this->TimeExpression = SecondsText;
  this->TargetValue = 0.0;
  return this;
}

// ~UDS_VM_Progress @ 14b6bf590

void __thiscall UDS_VM_Progress::~UDS_VM_Progress(UDS_VM_Progress *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Progress__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6c0f50

IClassDescriptor * __thiscall UDS_VM_Progress::GetFieldNotificationDescriptor(UDS_VM_Progress *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Progress::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6c16a0

UClass * __cdecl UDS_VM_Progress::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Progress.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Progress",
               &Z_Registration_Info_UClass_UDS_VM_Progress.InnerSingleton,
               StaticRegisterNativesUDS_VM_Progress,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_VM_Progress>,InternalVTableHelperCtorCaller<UDS_VM_Progress>,
               local_res8,UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Progress.InnerSingleton;
}

// GetTickableTickType @ 14b6c18e0

ETickableTickType __thiscall UDS_VM_Progress::GetTickableTickType(UDS_VM_Progress *this)

{
  return Conditional;
}

// IsUpdate @ 14b6c1900

bool __thiscall UDS_VM_Progress::IsUpdate(UDS_VM_Progress *this)

{
  return this->IncreaseType != None;
}

// StaticRegisterNativesUDS_VM_Progress @ 14b6c1a60

void __cdecl UDS_VM_Progress::StaticRegisterNativesUDS_VM_Progress(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 10;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_Progress_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCurrentPercent @ 14b6c2820

void __cdecl UDS_VM_Progress::execGetCurrentPercent(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetCurrentPercent((UDS_VM_Progress *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execGetCurrentValueText @ 14b6c2860

void __cdecl
UDS_VM_Progress::execGetCurrentValueText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FText *pFVar1;
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GetCurrentValueText((UDS_VM_Progress *)param_1,&local_18);
  FText::operator=(param_3,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execGetRemainValue @ 14b6c28b0

void __cdecl UDS_VM_Progress::execGetRemainValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetRemainValue((UDS_VM_Progress *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execGetReverseCurrentPercent @ 14b6c28f0

void __cdecl
UDS_VM_Progress::execGetReverseCurrentPercent(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetReverseCurrentPercent((UDS_VM_Progress *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execGetTargetPercent @ 14b6c2930

void __cdecl UDS_VM_Progress::execGetTargetPercent(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetTargetPercent((UDS_VM_Progress *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execSetCurrentValue @ 14b6c30d0

void __cdecl UDS_VM_Progress::execSetCurrentValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetCurrentValue((UDS_VM_Progress *)param_1,local_res10[0]);
  return;
}

// execSetIsUpdateCurrentValue @ 14b6c3160

void __cdecl
UDS_VM_Progress::execSetIsUpdateCurrentValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetIsUpdateCurrentValue((UDS_VM_Progress *)param_1,local_res10[0] != 0);
  return;
}

// execSetMaxValue @ 14b6c31f0

void __cdecl UDS_VM_Progress::execSetMaxValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetMaxValue((UDS_VM_Progress *)param_1,local_res10[0]);
  return;
}

// execSetMinValue @ 14b6c3280

void __cdecl UDS_VM_Progress::execSetMinValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetMinValue((UDS_VM_Progress *)param_1,local_res10[0]);
  return;
}

// execSetTargetValue @ 14b6c3310

void __cdecl UDS_VM_Progress::execSetTargetValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetTargetValue((UDS_VM_Progress *)param_1,local_res10[0]);
  return;
}

// GetCurrentPercent @ 14bdc2c90

float __thiscall UDS_VM_Progress::GetCurrentPercent(UDS_VM_Progress *this)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (this->MaxValue != 0.0) {
    fVar1 = this->CurrentValue / this->MaxValue;
  }
  return fVar1;
}

// GetCurrentValue @ 14bdc2cc0

float __thiscall UDS_VM_Progress::GetCurrentValue(UDS_VM_Progress *this)

{
  return this->CurrentValue;
}

// GetCurrentValueText @ 14bdc2cd0

FText * __thiscall
UDS_VM_Progress::GetCurrentValueText(UDS_VM_Progress *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  FString *pFVar2;
  FText *pFVar3;
  undefined1 local_res8 [8];
  FString local_18;
  
  if (this->TimeExpression == None) {
    pFVar3 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar3->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    __return_storage_ptr__->Flags = pFVar3->Flags;
  }
  else {
    pFVar2 = UDS_TimeUtilManager::ConvertStringFromSec
                       (&local_18,this->CurrentValue,this->TimeExpression,false);
    FText::FromString(__return_storage_ptr__,pFVar2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetIsUpdateCurrentValue @ 14bdc3400

bool __thiscall UDS_VM_Progress::GetIsUpdateCurrentValue(UDS_VM_Progress *this)

{
  return this->IsUpdateCurrentValue;
}

// GetMaxValue @ 14bdc34b0

float __thiscall UDS_VM_Progress::GetMaxValue(UDS_VM_Progress *this)

{
  return this->MaxValue;
}

// GetMinValue @ 14bdc34c0

float __thiscall UDS_VM_Progress::GetMinValue(UDS_VM_Progress *this)

{
  return this->MinValue;
}

// GetRemainValue @ 14bdc4090

float __thiscall UDS_VM_Progress::GetRemainValue(UDS_VM_Progress *this)

{
  if (this->TargetValue != 0.0) {
    return this->TargetValue - this->CurrentValue;
  }
  return 0.0;
}

// GetReverseCurrentPercent @ 14bdc40c0

float __thiscall UDS_VM_Progress::GetReverseCurrentPercent(UDS_VM_Progress *this)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (this->MaxValue != 0.0) {
    fVar1 = this->CurrentValue / this->MaxValue;
  }
  return __real_3f800000 - fVar1;
}

// GetTargetPercent @ 14bdc4420

float __thiscall UDS_VM_Progress::GetTargetPercent(UDS_VM_Progress *this)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (this->MaxValue != 0.0) {
    fVar1 = this->TargetValue / this->MaxValue;
  }
  return fVar1;
}

// GetTargetValue @ 14bdc4450

float __thiscall UDS_VM_Progress::GetTargetValue(UDS_VM_Progress *this)

{
  return this->TargetValue;
}

// InitViewModel @ 14bdc7650

void __thiscall UDS_VM_Progress::InitViewModel(UDS_VM_Progress *this)

{
  return;
}

// IsValueDecrease @ 14bdc9710

bool __thiscall UDS_VM_Progress::IsValueDecrease(UDS_VM_Progress *this)

{
  return this->TargetValue < this->CurrentValue;
}

// OnChangedTargetValue @ 14bdcab30

void __thiscall UDS_VM_Progress::OnChangedTargetValue(UDS_VM_Progress *this)

{
  this->PreviousValue = this->CurrentValue;
  this->ElapsedTime = 0.0;
  return;
}

// OnUpdate @ 14bddf560

void __thiscall UDS_VM_Progress::OnUpdate(UDS_VM_Progress *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  FName local_18;
  int local_10;
  
  fVar2 = this->TargetValue;
  fVar1 = this->CurrentValue;
  if (fVar1 == fVar2) {
    this->PreviousValue = fVar1;
    local_10 = FFieldNotificationClassDescriptor::IsUpdateCurrentValue.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::IsUpdateCurrentValue.FieldName;
    if (this->IsUpdateCurrentValue == false) {
      return;
    }
    this->IsUpdateCurrentValue = false;
    goto LAB_14bddf6b6;
  }
  if (this->IncreaseType == Linear) {
    fVar3 = param_1 * this->TargetSpeed * (fVar2 - fVar1);
LAB_14bddf671:
    fVar3 = fVar3 + fVar1;
  }
  else if (this->IncreaseType == Linear_Constant) {
    fVar1 = this->PlayTime;
    if (fVar1 <= 0.0) {
      fVar3 = param_1 * this->TargetSpeed * (fVar2 - this->PreviousValue) + this->PreviousValue;
    }
    else {
      fVar4 = param_1 + this->ElapsedTime;
      this->ElapsedTime = fVar4;
      fVar3 = fVar4 / fVar1;
      if (__real_3f800000 <= fVar4 / fVar1) {
        fVar3 = __real_3f800000;
      }
      if (fVar3 <= 0.0) {
        fVar3 = 0.0;
      }
      fVar3 = fVar3 * (fVar2 - this->PreviousValue) + this->PreviousValue;
      if (fVar1 <= fVar4) {
        this->ElapsedTime = 0.0;
        fVar3 = fVar2;
      }
    }
  }
  else {
    fVar3 = param_1 * this->TargetSpeed;
    if (fVar1 <= fVar2) goto LAB_14bddf671;
    fVar3 = fVar1 - fVar3;
  }
  fVar2 = this->MaxValue;
  if (fVar3 <= this->MaxValue) {
    fVar2 = fVar3;
  }
  if (fVar2 <= this->MinValue) {
    fVar2 = this->MinValue;
  }
  SetCurrentValue(this,fVar2);
  local_10 = FFieldNotificationClassDescriptor::IsUpdateCurrentValue.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsUpdateCurrentValue.FieldName;
  if (this->IsUpdateCurrentValue == true) {
    return;
  }
  this->IsUpdateCurrentValue = true;
LAB_14bddf6b6:
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetCurrentValue @ 14bde5190

void __thiscall UDS_VM_Progress::SetCurrentValue(UDS_VM_Progress *this,float param_1)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  local_18 = FFieldNotificationClassDescriptor::CurrentValue.FieldName;
  plVar1 = &this->_padding_;
  if (param_1 != this->CurrentValue) {
    local_10 = FFieldNotificationClassDescriptor::CurrentValue.BitNumber;
    this->CurrentValue = param_1;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
    local_10 = FFieldNotificationClassDescriptor::GetCurrentPercent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::GetCurrentPercent.FieldName;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
    local_10 = FFieldNotificationClassDescriptor::GetReverseCurrentPercent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::GetReverseCurrentPercent.FieldName;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
    local_10 = FFieldNotificationClassDescriptor::GetRemainValue.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::GetRemainValue.FieldName;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
    local_10 = FFieldNotificationClassDescriptor::GetCurrentValueText.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::GetCurrentValueText.FieldName;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  }
  return;
}

// SetIncreaseType @ 14bde6630

void __thiscall
UDS_VM_Progress::SetIncreaseType(UDS_VM_Progress *this,EDS_ProgressIncreaseType param_1)

{
  this->IncreaseType = param_1;
  return;
}

// SetIsUpdateCurrentValue @ 14bde6d30

void __thiscall UDS_VM_Progress::SetIsUpdateCurrentValue(UDS_VM_Progress *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsUpdateCurrentValue.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsUpdateCurrentValue.FieldName;
  if (this->IsUpdateCurrentValue != param_1) {
    this->IsUpdateCurrentValue = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetMaxValue @ 14bde7430

void __thiscall UDS_VM_Progress::SetMaxValue(UDS_VM_Progress *this,float param_1)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  local_18 = FFieldNotificationClassDescriptor::MaxValue.FieldName;
  plVar1 = &this->_padding_;
  if (param_1 != this->MaxValue) {
    local_10 = FFieldNotificationClassDescriptor::MaxValue.BitNumber;
    this->MaxValue = param_1;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
    local_10 = FFieldNotificationClassDescriptor::GetTargetPercent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::GetTargetPercent.FieldName;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
    local_10 = FFieldNotificationClassDescriptor::GetCurrentPercent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::GetCurrentPercent.FieldName;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
    local_10 = FFieldNotificationClassDescriptor::GetReverseCurrentPercent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::GetReverseCurrentPercent.FieldName;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
    local_10 = FFieldNotificationClassDescriptor::GetRemainValue.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::GetRemainValue.FieldName;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  }
  return;
}

// SetMinValue @ 14bde7560

void __thiscall UDS_VM_Progress::SetMinValue(UDS_VM_Progress *this,float param_1)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  local_18 = FFieldNotificationClassDescriptor::MinValue.FieldName;
  plVar1 = &this->_padding_;
  if (param_1 != this->MinValue) {
    local_10 = FFieldNotificationClassDescriptor::MinValue.BitNumber;
    this->MinValue = param_1;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
    local_10 = FFieldNotificationClassDescriptor::GetTargetPercent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::GetTargetPercent.FieldName;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
    local_10 = FFieldNotificationClassDescriptor::GetCurrentPercent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::GetCurrentPercent.FieldName;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
    local_10 = FFieldNotificationClassDescriptor::GetReverseCurrentPercent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::GetReverseCurrentPercent.FieldName;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
    local_10 = FFieldNotificationClassDescriptor::GetRemainValue.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::GetRemainValue.FieldName;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  }
  return;
}

// SetPlayTime @ 14bde8220

void __thiscall UDS_VM_Progress::SetPlayTime(UDS_VM_Progress *this,float param_1)

{
  this->PlayTime = param_1;
  return;
}

// SetTargetSpeed @ 14bde98d0

void __thiscall UDS_VM_Progress::SetTargetSpeed(UDS_VM_Progress *this,float param_1)

{
  this->TargetSpeed = param_1;
  return;
}

// SetTargetValue @ 14bde98e0

void __thiscall UDS_VM_Progress::SetTargetValue(UDS_VM_Progress *this,float param_1)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  local_18 = FFieldNotificationClassDescriptor::TargetValue.FieldName;
  plVar1 = &this->_padding_;
  if (param_1 != this->TargetValue) {
    local_10 = FFieldNotificationClassDescriptor::TargetValue.BitNumber;
    this->TargetValue = param_1;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
    local_10 = FFieldNotificationClassDescriptor::GetTargetPercent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::GetTargetPercent.FieldName;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  }
  return;
}

// SetTimeExpression @ 14bde9960

void __thiscall UDS_VM_Progress::SetTimeExpression(UDS_VM_Progress *this,EDS_TimeExpression param_1)

{
  if (param_1 != this->TimeExpression) {
    this->TimeExpression = param_1;
  }
  return;
}

