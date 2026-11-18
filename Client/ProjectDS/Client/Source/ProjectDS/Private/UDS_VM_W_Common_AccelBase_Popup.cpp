// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 32

// StaticClass @ 14b724420

UClass * __cdecl UDS_VM_W_Common_AccelBase_Popup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Common_AccelBase_Popup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Common_AccelBase_Popup",
               &Z_Registration_Info_UClass_UDS_VM_W_Common_AccelBase_Popup.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Common_AccelBase_Popup,0x228,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_Common_AccelBase_Popup>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Common_AccelBase_Popup>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Common_AccelBase_Popup.InnerSingleton;
}

// UDS_VM_W_Common_AccelBase_Popup @ 14b7283f0

UDS_VM_W_Common_AccelBase_Popup * __thiscall
UDS_VM_W_Common_AccelBase_Popup::UDS_VM_W_Common_AccelBase_Popup
          (UDS_VM_W_Common_AccelBase_Popup *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Common_AccelBase_Popup__6B_;
  (this->VM_Money).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->VM_UseGoldCheck).field0_0x0.DebugPtr = (UDS_VM_Common_Check_Text *)0x0;
  (this->VM_CancelButton).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  (this->VM_AccelerationButton).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  (this->FixedText_Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Title).StringEnumTableNameID.Number = 0;
  (this->FixedText_Title).DateTime.Ticks = 0;
  (this->FixedText_Title).TimeSpan.Ticks = 0;
  (this->FixedText_Title).TimeExpressionType = None;
  (this->FixedText_Title).IsExpression = false;
  (this->FixedText_Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Title).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Title).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Title).FormatArgs.ArrayNum = 0;
  (this->FixedText_Title).FormatArgs.ArrayMax = 0;
  (this->FixedText_Desc).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Desc).StringEnumTableNameID.Number = 0;
  (this->FixedText_Desc).DateTime.Ticks = 0;
  (this->FixedText_Desc).TimeSpan.Ticks = 0;
  (this->FixedText_Desc).TimeExpressionType = None;
  (this->FixedText_Desc).IsExpression = false;
  (this->FixedText_Desc).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Desc).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Desc).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Desc).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Desc).FormatArgs.ArrayNum = 0;
  (this->FixedText_Desc).FormatArgs.ArrayMax = 0;
  (this->FixedText_MaterilalEmpty).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_MaterilalEmpty).StringEnumTableNameID.Number = 0;
  (this->FixedText_MaterilalEmpty).DateTime.Ticks = 0;
  (this->FixedText_MaterilalEmpty).TimeSpan.Ticks = 0;
  (this->FixedText_MaterilalEmpty).TimeExpressionType = None;
  (this->FixedText_MaterilalEmpty).IsExpression = false;
  (this->FixedText_MaterilalEmpty).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_MaterilalEmpty).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_MaterilalEmpty).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_MaterilalEmpty).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_MaterilalEmpty).FormatArgs.ArrayNum = 0;
  (this->FixedText_MaterilalEmpty).FormatArgs.ArrayMax = 0;
  (this->FixedText_SubTitle_Material).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_SubTitle_Material).StringEnumTableNameID.Number = 0;
  (this->FixedText_SubTitle_Material).DateTime.Ticks = 0;
  (this->FixedText_SubTitle_Material).TimeSpan.Ticks = 0;
  (this->FixedText_SubTitle_Material).TimeExpressionType = None;
  (this->FixedText_SubTitle_Material).IsExpression = false;
  (this->FixedText_SubTitle_Material).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_SubTitle_Material).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_SubTitle_Material).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_SubTitle_Material).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_SubTitle_Material).FormatArgs.ArrayNum = 0;
  (this->FixedText_SubTitle_Material).FormatArgs.ArrayMax = 0;
  this->TickTime = 0.0;
  (this->FixedText_Title).StringTableType = StringUi;
  (this->FixedText_Title).StringTableID = 6;
  (this->FixedText_Desc).StringTableType = StringUi;
  (this->FixedText_Desc).StringTableID = 0x138d;
  (this->FixedText_MaterilalEmpty).StringTableType = StringUi;
  (this->FixedText_MaterilalEmpty).StringTableID = 0x13a0;
  (this->FixedText_SubTitle_Material).StringTableType = StringUi;
  (this->FixedText_SubTitle_Material).StringTableID = 0x1393;
  return this;
}

// UDS_VM_W_Common_AccelBase_Popup @ 14b728590

UDS_VM_W_Common_AccelBase_Popup * __thiscall
UDS_VM_W_Common_AccelBase_Popup::UDS_VM_W_Common_AccelBase_Popup
          (UDS_VM_W_Common_AccelBase_Popup *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Common_AccelBase_Popup__6B_;
  (this->VM_Money).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->VM_UseGoldCheck).field0_0x0.DebugPtr = (UDS_VM_Common_Check_Text *)0x0;
  (this->VM_CancelButton).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  (this->VM_AccelerationButton).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  (this->FixedText_Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Title).StringEnumTableNameID.Number = 0;
  (this->FixedText_Title).DateTime.Ticks = 0;
  (this->FixedText_Title).TimeSpan.Ticks = 0;
  (this->FixedText_Title).TimeExpressionType = None;
  (this->FixedText_Title).IsExpression = false;
  (this->FixedText_Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Title).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Title).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Title).FormatArgs.ArrayNum = 0;
  (this->FixedText_Title).FormatArgs.ArrayMax = 0;
  (this->FixedText_Desc).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Desc).StringEnumTableNameID.Number = 0;
  (this->FixedText_Desc).DateTime.Ticks = 0;
  (this->FixedText_Desc).TimeSpan.Ticks = 0;
  (this->FixedText_Desc).TimeExpressionType = None;
  (this->FixedText_Desc).IsExpression = false;
  (this->FixedText_Desc).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Desc).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Desc).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Desc).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Desc).FormatArgs.ArrayNum = 0;
  (this->FixedText_Desc).FormatArgs.ArrayMax = 0;
  (this->FixedText_MaterilalEmpty).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_MaterilalEmpty).StringEnumTableNameID.Number = 0;
  (this->FixedText_MaterilalEmpty).DateTime.Ticks = 0;
  (this->FixedText_MaterilalEmpty).TimeSpan.Ticks = 0;
  (this->FixedText_MaterilalEmpty).TimeExpressionType = None;
  (this->FixedText_MaterilalEmpty).IsExpression = false;
  (this->FixedText_MaterilalEmpty).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_MaterilalEmpty).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_MaterilalEmpty).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_MaterilalEmpty).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_MaterilalEmpty).FormatArgs.ArrayNum = 0;
  (this->FixedText_MaterilalEmpty).FormatArgs.ArrayMax = 0;
  (this->FixedText_SubTitle_Material).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_SubTitle_Material).StringEnumTableNameID.Number = 0;
  (this->FixedText_SubTitle_Material).DateTime.Ticks = 0;
  (this->FixedText_SubTitle_Material).TimeSpan.Ticks = 0;
  (this->FixedText_SubTitle_Material).TimeExpressionType = None;
  (this->FixedText_SubTitle_Material).IsExpression = false;
  (this->FixedText_SubTitle_Material).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_SubTitle_Material).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_SubTitle_Material).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_SubTitle_Material).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_SubTitle_Material).FormatArgs.ArrayNum = 0;
  (this->FixedText_SubTitle_Material).FormatArgs.ArrayMax = 0;
  this->TickTime = 0.0;
  (this->FixedText_Title).StringTableType = StringUi;
  (this->FixedText_Title).StringTableID = 6;
  (this->FixedText_Desc).StringTableType = StringUi;
  (this->FixedText_Desc).StringTableID = 0x138d;
  (this->FixedText_MaterilalEmpty).StringTableType = StringUi;
  (this->FixedText_MaterilalEmpty).StringTableID = 0x13a0;
  (this->FixedText_SubTitle_Material).StringTableType = StringUi;
  (this->FixedText_SubTitle_Material).StringTableID = 0x1393;
  return this;
}

// ~UDS_VM_W_Common_AccelBase_Popup @ 14b7295b0

void __thiscall
UDS_VM_W_Common_AccelBase_Popup::~UDS_VM_W_Common_AccelBase_Popup
          (UDS_VM_W_Common_AccelBase_Popup *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Common_AccelBase_Popup__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedText_SubTitle_Material).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_SubTitle_Material).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_SubTitle_Material).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_SubTitle_Material).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_MaterilalEmpty).FormatArgs.AllocatorInstance.Data
             ,(this->FixedText_MaterilalEmpty).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_MaterilalEmpty).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_MaterilalEmpty).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Desc).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Desc).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Desc).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Desc).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Title).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Title).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Title).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Title).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b72aff0

IClassDescriptor * __thiscall
UDS_VM_W_Common_AccelBase_Popup::GetFieldNotificationDescriptor
          (UDS_VM_W_Common_AccelBase_Popup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_Common_AccelBase_Popup::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b72b8e0

UClass * __cdecl UDS_VM_W_Common_AccelBase_Popup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Common_AccelBase_Popup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Common_AccelBase_Popup",
               &Z_Registration_Info_UClass_UDS_VM_W_Common_AccelBase_Popup.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Common_AccelBase_Popup,0x228,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_Common_AccelBase_Popup>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Common_AccelBase_Popup>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Common_AccelBase_Popup.InnerSingleton;
}

// GetTickableTickType @ 14b72bd60

ETickableTickType __thiscall
UDS_VM_W_Common_AccelBase_Popup::GetTickableTickType(UDS_VM_W_Common_AccelBase_Popup *this)

{
  return Conditional;
}

// StaticRegisterNativesUDS_VM_W_Common_AccelBase_Popup @ 14b72be90

void __cdecl
UDS_VM_W_Common_AccelBase_Popup::StaticRegisterNativesUDS_VM_W_Common_AccelBase_Popup(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_Common_AccelBase_Popup_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// __VTableCtorCaller @ 14b72cad0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_W_Common_AccelBase_Popup::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_VM_ModelBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UDS_VM_ModelBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_VM_ModelBase *)0x0) {
    UDS_VM_ModelBase::UDS_VM_ModelBase(this,param_1);
    *(undefined4 *)&this[2].Model.field0_0x0 = 0;
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_W_Common_AccelBase_Popup__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 2;
    this[1]._padding_ = 6;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 2;
    this[1]._padding_ = 0x138d;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1].Model.field0_0x0.DebugPtr = (UDS_ModelBase *)0x0;
    *(undefined8 *)&this[1].UpdateViewDelegate = 0;
    *(undefined8 *)&this[1].UpdateViewDelegate.field_0x8 = 0;
    *(undefined8 *)&this[1].UpdateViewDelegate.field_0x10 = 0;
    *(undefined1 *)&this[2]._padding_ = 2;
    this[2]._padding_ = 0x13a0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 2;
    this[2]._padding_ = 0x1393;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// execAccelerationTime @ 14b72cd00

void __cdecl
UDS_VM_W_Common_AccelBase_Popup::execAccelerationTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FString *pFVar1;
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = AccelerationTime((UDS_VM_W_Common_AccelBase_Popup *)param_1,&local_18);
  if (param_3 != pFVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar1->Data).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar1->Data).ArrayMax;
    (pFVar1->Data).ArrayNum = 0;
    (pFVar1->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execRemainingTime @ 14b72d580

void __cdecl
UDS_VM_W_Common_AccelBase_Popup::execRemainingTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FString *pFVar1;
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = RemainingTime((UDS_VM_W_Common_AccelBase_Popup *)param_1,&local_18);
  if (param_3 != pFVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = (pFVar1->Data).ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = (pFVar1->Data).ArrayMax;
    (pFVar1->Data).ArrayNum = 0;
    (pFVar1->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execTargetName @ 14b72d600

void __cdecl
UDS_VM_W_Common_AccelBase_Popup::execTargetName(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  FString *pFVar2;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *pTVar3;
  FDS_Text *pFVar4;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = TargetName((UDS_VM_W_Common_AccelBase_Popup *)param_1,&local_58);
  puVar1 = (undefined8 *)((longlong)param_3 + 0x30);
  pFVar2 = &pFVar4->UniqueString;
  *(EDS_StringTableType *)param_3 = pFVar4->StringTableType;
  *(long64 *)((longlong)param_3 + 8) = pFVar4->StringTableID;
  *(FName *)((longlong)param_3 + 0x10) = pFVar4->StringEnumTableNameID;
  *(long64 *)((longlong)param_3 + 0x18) = (pFVar4->DateTime).Ticks;
  *(long64 *)((longlong)param_3 + 0x20) = (pFVar4->TimeSpan).Ticks;
  *(EDS_TimeExpression *)((longlong)param_3 + 0x28) = pFVar4->TimeExpressionType;
  *(bool *)((longlong)param_3 + 0x2c) = pFVar4->IsExpression;
  if ((FString *)puVar1 != pFVar2) {
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    *puVar1 = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 0x38) = (pFVar4->UniqueString).Data.ArrayNum;
    *(int *)((longlong)param_3 + 0x3c) = (pFVar4->UniqueString).Data.ArrayMax;
    (pFVar4->UniqueString).Data.ArrayNum = 0;
    (pFVar4->UniqueString).Data.ArrayMax = 0;
  }
  pTVar3 = &pFVar4->FormatArgs;
  puVar1 = (undefined8 *)((longlong)param_3 + 0x40);
  if ((TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> *)puVar1 != pTVar3) {
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)*puVar1,*(int *)((longlong)param_3 + 0x48));
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    *puVar1 = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 0x48) = (pFVar4->FormatArgs).ArrayNum;
    *(int *)((longlong)param_3 + 0x4c) = (pFVar4->FormatArgs).ArrayMax;
    (pFVar4->FormatArgs).ArrayNum = 0;
    (pFVar4->FormatArgs).ArrayMax = 0;
  }
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

// execUseGold @ 14b72d7b0

void __cdecl
UDS_VM_W_Common_AccelBase_Popup::execUseGold(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = UseGold((UDS_VM_W_Common_AccelBase_Popup *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execWaitCompleteAccelRatio @ 14b72d7f0

void __cdecl
UDS_VM_W_Common_AccelBase_Popup::execWaitCompleteAccelRatio
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = WaitCompleteAccelRatio((UDS_VM_W_Common_AccelBase_Popup *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execWaitCompleteOverAccelRatio @ 14b72d830

void __cdecl
UDS_VM_W_Common_AccelBase_Popup::execWaitCompleteOverAccelRatio
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = WaitCompleteOverAccelRatio((UDS_VM_W_Common_AccelBase_Popup *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execWaitCompleteRatio @ 14b72d870

void __cdecl
UDS_VM_W_Common_AccelBase_Popup::execWaitCompleteRatio
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = WaitCompleteRatio((UDS_VM_W_Common_AccelBase_Popup *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execWaitCompleteSlotSwitcher @ 14b72d8b0

void __cdecl
UDS_VM_W_Common_AccelBase_Popup::execWaitCompleteSlotSwitcher
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = WaitCompleteSlotSwitcher((UDS_VM_W_Common_AccelBase_Popup *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// AccelerationTime @ 14bf9b0e0

FString * __thiscall
UDS_VM_W_Common_AccelBase_Popup::AccelerationTime
          (UDS_VM_W_Common_AccelBase_Popup *this,FString *__return_storage_ptr__)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  UClass *pUVar5;
  FString *pFVar6;
  UDS_M_Common_AccelBase_Popup *pUVar7;
  UObject *pUVar8;
  FWeakObjectPtr local_res8;
  UObject *local_res18;
  FDS_StringUiID local_28;
  FDS_StringUiID local_18;
  
  this_00 = &this->_padding_;
  pUVar8 = (UObject *)0x0;
  if (*this_00 != 0) {
    pUVar5 = Z_Construct_UClass_UDS_M_Common_AccelBase_Popup_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
    if (bVar2) {
      pUVar8 = (UObject *)*this_00;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18 = pUVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar8);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    pUVar7 = (UDS_M_Common_AccelBase_Popup *)FWeakObjectPtr::Get(&local_res8);
    iVar3 = UDS_M_Common_AccelBase_Popup::GetRemainingSeconds(pUVar7);
    pUVar7 = (UDS_M_Common_AccelBase_Popup *)FWeakObjectPtr::Get(&local_res8);
    iVar4 = UDS_M_Common_AccelBase_Popup::GetAcceleratedTotalMinutes(pUVar7);
    if (iVar4 * 0x3c <= iVar3) {
      local_18._padding_ = (longlong)&___7FDS_StringUiID__6B_;
      local_18.ID = 0x138f;
      pFVar6 = FDS_StringUiID::Str(&local_18);
      DS_Util::GetFormatString<int>(__return_storage_ptr__,pFVar6,iVar4);
      return __return_storage_ptr__;
    }
    local_28._padding_ = (longlong)&___7FDS_StringUiID__6B_;
    local_28.ID = 0x1390;
    pFVar6 = FDS_StringUiID::Str(&local_28);
    DS_Util::GetFormatString<int,int>
              (__return_storage_ptr__,pFVar6,iVar4,((iVar4 * 0x3c - iVar3) + 0x3b) / 0x3c);
    return __return_storage_ptr__;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_4218901522517327708>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Common_AccelBase_Popup.cpp"
                     ,0xa4,"false");
  if (!bVar2) {
    ::FString::FString(__return_storage_ptr__,L"");
    return __return_storage_ptr__;
  }
  pcVar1 = (code *)swi(3);
  pFVar6 = (FString *)(*pcVar1)();
  return pFVar6;
}

// OnCheckedUseGold @ 14bfb7ca0

void __thiscall
UDS_VM_W_Common_AccelBase_Popup::OnCheckedUseGold
          (UDS_VM_W_Common_AccelBase_Popup *this,uint param_1,uint param_2)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_M_Common_AccelBase_Popup *this_01;
  UObject *pUVar4;
  FWeakObjectPtr local_res8;
  UObject *local_res20;
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_Common_AccelBase_Popup_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      pUVar4 = (UObject *)*this_00;
      goto LAB_14bfb7cd5;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14bfb7cd5:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res20 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    this_01 = (UDS_M_Common_AccelBase_Popup *)FWeakObjectPtr::Get(&local_res8);
    UDS_M_Common_AccelBase_Popup::OnCheckedUseGold(this_01,param_2 != 0);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4218901522517327764>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Common_AccelBase_Popup.cpp"
                       ,0x6c,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnClickedAccelerationButton @ 14bfbb1c0

void __thiscall
UDS_VM_W_Common_AccelBase_Popup::OnClickedAccelerationButton
          (UDS_VM_W_Common_AccelBase_Popup *this,FDS_ButtonEventField *param_1)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_M_Common_AccelBase_Popup *this_01;
  UObject *pUVar4;
  FWeakObjectPtr local_res8 [2];
  UObject *local_res18 [2];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_Common_AccelBase_Popup_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      pUVar4 = (UObject *)*this_00;
      goto LAB_14bfbb1ee;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14bfbb1ee:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8[0].ObjectIndex = 0;
  local_res8[0].ObjectSerialNumber = 0;
  local_res18[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(local_res8,(FObjectPtr)local_res18);
  bVar2 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar2) {
    this_01 = (UDS_M_Common_AccelBase_Popup *)FWeakObjectPtr::Get(local_res8);
    UDS_M_Common_AccelBase_Popup::OnClickedAccelerationButton(this_01);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4218901522517327752>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Common_AccelBase_Popup.cpp"
                       ,0x78,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnClickedCancelButton @ 14bfbb700

void __thiscall
UDS_VM_W_Common_AccelBase_Popup::OnClickedCancelButton
          (UDS_VM_W_Common_AccelBase_Popup *this,FDS_ButtonEventField *param_1)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_M_Common_AccelBase_Popup *this_01;
  UObject *pUVar4;
  FWeakObjectPtr local_res8 [2];
  UObject *local_res18 [2];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_Common_AccelBase_Popup_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      pUVar4 = (UObject *)*this_00;
      goto LAB_14bfbb72e;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14bfbb72e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8[0].ObjectIndex = 0;
  local_res8[0].ObjectSerialNumber = 0;
  local_res18[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(local_res8,(FObjectPtr)local_res18);
  bVar2 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar2) {
    this_01 = (UDS_M_Common_AccelBase_Popup *)FWeakObjectPtr::Get(local_res8);
    UDS_M_Common_AccelBase_Popup::OnClickedCancelButton(this_01);
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4218901522517327758>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Common_AccelBase_Popup.cpp"
                       ,0x72,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnSetViewModel @ 14bfc95f0

void __thiscall
UDS_VM_W_Common_AccelBase_Popup::OnSetViewModel
          (UDS_VM_W_Common_AccelBase_Popup *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  code *pcVar1;
  FSharedReferencer<1> FVar2;
  FDS_ViewModelContext_CommonIconTextButton *pFVar3;
  FDS_ViewModelContext_CommonCheckText *pFVar4;
  FDS_ViewModelContext_MoneyDisplay *pFVar5;
  bool bVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  UDS_VM_CommonIconTextButton *pUVar9;
  UDS_VM_Common_Check_Text *pUVar10;
  UDS_VM_MoneyDisplay *pUVar11;
  FName local_res8;
  UDS_VM_W_Common_AccelBase_Popup *local_res10;
  FName local_res18;
  UDS_VM_W_Common_AccelBase_Popup *local_res20;
  TSharedPtr<FDS_ViewModelContext,1> local_238;
  UDS_VM_W_Common_AccelBase_Popup *local_228 [2];
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_218;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_208;
  TSharedPtr<FDS_ViewModelContext_CommonCheckText,1> local_1f8;
  TSharedPtr<FDS_ViewModelContext_MoneyDisplay,1> local_1e8;
  FDS_Text local_1d8;
  FDS_Text local_188;
  FDS_Text local_138;
  TSharedPtr<FDS_ViewModelContext,1> local_e8;
  FDestructionSentinel local_d8;
  undefined1 *local_c0;
  FDestructionSentinel local_b8;
  undefined1 *local_a0;
  FDestructionSentinel local_98;
  undefined1 *local_80;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  
  local_e8.Object = param_1->Object;
  local_e8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_ModelBase::OnSetViewModel((UDS_VM_ModelBase *)this,&local_e8);
  if ((this->VM_CancelButton).field0_0x0.DebugPtr == (UDS_VM_CommonIconTextButton *)0x0) {
    MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_218);
    pFVar3 = local_218.Object;
    if ((local_218.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)&pFVar3->_padding_ = 0x15b;
    ::FName::FName(&local_res8,"DS_VM_CommonIconTextButton_Cancel");
    pFVar3->_padding_ = (longlong)local_res8;
    local_1d8.StringTableType = None;
    local_1d8.StringTableID = 0;
    local_1d8.DateTime.Ticks = 0;
    local_1d8.TimeSpan.Ticks = 0;
    local_1d8.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_1d8.StringEnumTableNameID.Number = 0;
    local_1d8.TimeExpressionType = None;
    local_1d8.IsExpression = false;
    local_1d8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.UniqueString.Data.ArrayNum = 0;
    local_1d8.UniqueString.Data.ArrayMax = 0;
    local_1d8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.FormatArgs.ArrayNum = 0;
    local_1d8.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_1d8,StringUi,0x66);
    FDS_Text::operator=(&pFVar3->DSText,&local_1d8);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_1d8.FormatArgs.AllocatorInstance.Data,
               local_1d8.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_1d8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_1d8.FormatArgs.AllocatorInstance.Data);
    }
    if (local_1d8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.UniqueString.Data.AllocatorInstance.Data);
    }
    FVar2.ReferenceController = local_238.SharedReferenceCount.ReferenceController;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar3->OnClickDelegate,
               (FWriteAccessScope *)&local_d8);
    local_c0 = &(pFVar3->OnClickDelegate).field_0x8;
    puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_c0);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_Common_AccelBase_Popup____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar7[3] = 0;
      local_res10 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_res10);
      puVar7[4] = OnClickedCancelButton;
      puVar7[5] = (ulonglong)FVar2.ReferenceController & 0xffffffff00000000;
    }
    if (local_d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
    }
    local_78.Object = (FDS_ViewModelContext *)local_218.Object;
    local_78.SharedReferenceCount.ReferenceController =
         local_218.SharedReferenceCount.ReferenceController;
    if (local_218.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pUVar9 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CommonIconTextButton>
                       ((UObject *)this,&local_78);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UDS_VM_CommonIconTextButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->VM_CancelButton).field0_0x0.DebugPtr = pUVar9;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_218.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_AccelerationButton).field0_0x0.DebugPtr == (UDS_VM_CommonIconTextButton *)0x0) {
    MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_208);
    pFVar3 = local_208.Object;
    if ((local_208.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)&pFVar3->_padding_ = 0x15b;
    ::FName::FName(&local_res18,"DS_VM_CommonIconTextButton_Acceleration");
    pFVar3->_padding_ = (longlong)local_res18;
    local_188.StringTableType = None;
    local_188.StringTableID = 0;
    local_188.DateTime.Ticks = 0;
    local_188.TimeSpan.Ticks = 0;
    local_188.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_188.StringEnumTableNameID.Number = 0;
    local_188.TimeExpressionType = None;
    local_188.IsExpression = false;
    local_188.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.UniqueString.Data.ArrayNum = 0;
    local_188.UniqueString.Data.ArrayMax = 0;
    local_188.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.FormatArgs.ArrayNum = 0;
    local_188.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_188,StringUi,0x138b);
    FDS_Text::operator=(&pFVar3->DSText,&local_188);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_188.FormatArgs.AllocatorInstance.Data,
               local_188.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_188.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_188.FormatArgs.AllocatorInstance.Data);
    }
    if (local_188.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.UniqueString.Data.AllocatorInstance.Data);
    }
    FVar2.ReferenceController = local_238.SharedReferenceCount.ReferenceController;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar3->OnClickDelegate,
               (FWriteAccessScope *)&local_b8);
    local_a0 = &(pFVar3->OnClickDelegate).field_0x8;
    puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_a0);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_Common_AccelBase_Popup____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar7[3] = 0;
      local_res20 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_res20);
      puVar7[4] = OnClickedAccelerationButton;
      puVar7[5] = (ulonglong)FVar2.ReferenceController & 0xffffffff00000000;
    }
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    local_68.Object = (FDS_ViewModelContext *)local_208.Object;
    local_68.SharedReferenceCount.ReferenceController =
         local_208.SharedReferenceCount.ReferenceController;
    if (local_208.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pUVar9 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CommonIconTextButton>
                       ((UObject *)this,&local_68);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UDS_VM_CommonIconTextButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->VM_AccelerationButton).field0_0x0.DebugPtr = pUVar9;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_208.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_UseGoldCheck).field0_0x0.DebugPtr == (UDS_VM_Common_Check_Text *)0x0) {
    pUVar10 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Common_Check_Text>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar10 == (UDS_VM_Common_Check_Text *)0x0)) {
      (this->VM_UseGoldCheck).field0_0x0.DebugPtr = pUVar10;
      if (pUVar10 == (UDS_VM_Common_Check_Text *)0x0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4218901522517327827>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Common_AccelBase_Popup.cpp"
                           ,0x2d,"false");
        if (bVar6) goto code_r0x00014bfc9dc5;
        goto LAB_14bfc9d22;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
      (this->VM_UseGoldCheck).field0_0x0.DebugPtr = pUVar10;
    }
    MakeContext<FDS_ViewModelContext_CommonCheckText>(&local_1f8);
    pFVar4 = local_1f8.Object;
    if ((local_1f8.Object == (FDS_ViewModelContext_CommonCheckText *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)&pFVar4->_padding_ = 0x164;
    local_138.StringTableType = None;
    local_138.StringTableID = 0;
    local_138.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_138.StringEnumTableNameID.Number = 0;
    local_138.DateTime.Ticks = 0;
    local_138.TimeSpan.Ticks = 0;
    local_138.TimeExpressionType = None;
    local_138.IsExpression = false;
    local_138.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.UniqueString.Data.ArrayNum = 0;
    local_138.UniqueString.Data.ArrayMax = 0;
    local_138.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.FormatArgs.ArrayNum = 0;
    local_138.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_138,StringUi,0x139b);
    FDS_Text::operator=(&pFVar4->CheckTextName,&local_138);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_138.FormatArgs.AllocatorInstance.Data,
               local_138.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_138.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0
       ) {
      FMemory::Free(local_138.FormatArgs.AllocatorInstance.Data);
    }
    if (local_138.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.UniqueString.Data.AllocatorInstance.Data);
    }
    FVar2.ReferenceController = local_238.SharedReferenceCount.ReferenceController;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pFVar4->OnDelegateChangedCheckState,(FWriteAccessScope *)&local_98);
    local_80 = &(pFVar4->OnDelegateChangedCheckState).field_0x8;
    puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_80);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &___7__TCommonDelegateInstanceState___A6AXII_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_Common_AccelBase_Popup____A6AXII_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar7[3] = 0;
      local_228[0] = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)local_228);
      puVar7[4] = OnCheckedUseGold;
      puVar7[5] = (ulonglong)FVar2.ReferenceController & 0xffffffff00000000;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    pUVar10 = (this->VM_UseGoldCheck).field0_0x0.DebugPtr;
    local_58.Object = (FDS_ViewModelContext *)local_1f8.Object;
    local_58.SharedReferenceCount.ReferenceController =
         local_1f8.SharedReferenceCount.ReferenceController;
    if (local_1f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar10,&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f8.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_Money).field0_0x0.DebugPtr == (UDS_VM_MoneyDisplay *)0x0) {
    pUVar11 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MoneyDisplay>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar11 == (UDS_VM_MoneyDisplay *)0x0)) {
      (this->VM_Money).field0_0x0.DebugPtr = pUVar11;
      if (pUVar11 == (UDS_VM_MoneyDisplay *)0x0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4218901522517327813>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Common_AccelBase_Popup.cpp"
                           ,0x3b,"false");
        if (bVar6) {
code_r0x00014bfc9dc5:
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        goto LAB_14bfc9d22;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
      (this->VM_Money).field0_0x0.DebugPtr = pUVar11;
    }
    MakeContext<FDS_ViewModelContext_MoneyDisplay>(&local_1e8);
    pFVar5 = local_1e8.Object;
    if ((local_1e8.Object == (FDS_ViewModelContext_MoneyDisplay *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)&pFVar5->_padding_ = 0x192;
    pFVar5->MoneyId = 0xb;
    pFVar5->Quantity = 0;
    pUVar11 = (this->VM_Money).field0_0x0.DebugPtr;
    local_238.Object = (FDS_ViewModelContext *)local_1e8.Object;
    local_238.SharedReferenceCount.ReferenceController =
         local_1e8.SharedReferenceCount.ReferenceController;
    if (local_1e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar11,&local_238);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1e8.SharedReferenceCount.ReferenceController);
  }
LAB_14bfc9d22:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14bfd0bf0

void __thiscall
UDS_VM_W_Common_AccelBase_Popup::OnUpdate(UDS_VM_W_Common_AccelBase_Popup *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = __real_3f800000;
  fVar2 = param_1 + this->TickTime;
  this->TickTime = fVar2;
  if (fVar1 < fVar2) {
    this->TickTime = 0.0;
    Update(this);
    return;
  }
  return;
}

// RemainingTime @ 14bfd51a0

FString * __thiscall
UDS_VM_W_Common_AccelBase_Popup::RemainingTime
          (UDS_VM_W_Common_AccelBase_Popup *this,FString *__return_storage_ptr__)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  UDS_M_Common_AccelBase_Popup *this_01;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res18 [2];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_Common_AccelBase_Popup_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      pUVar5 = (UObject *)*this_00;
      goto LAB_14bfd51d5;
    }
  }
  pUVar5 = (UObject *)0x0;
LAB_14bfd51d5:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4218901522517327689>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Common_AccelBase_Popup.cpp"
                       ,0xb7,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    ::FString::FString(__return_storage_ptr__,L"");
    return __return_storage_ptr__;
  }
  this_01 = (UDS_M_Common_AccelBase_Popup *)FWeakObjectPtr::Get(&local_res8);
  UDS_M_Common_AccelBase_Popup::GetRemainingTime(this_01,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// TargetName @ 14bfdeb90

FDS_Text * __thiscall
UDS_VM_W_Common_AccelBase_Popup::TargetName
          (UDS_VM_W_Common_AccelBase_Popup *this,FDS_Text *__return_storage_ptr__)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  FDS_Text *pFVar4;
  UDS_M_Common_AccelBase_Popup *this_01;
  UObject *pUVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res18;
  
  this_00 = &this->_padding_;
  pUVar5 = (UObject *)0x0;
  if (*this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_Common_AccelBase_Popup_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      pUVar5 = (UObject *)*this_00;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    this_01 = (UDS_M_Common_AccelBase_Popup *)FWeakObjectPtr::Get(&local_res8);
    UDS_M_Common_AccelBase_Popup::GetName(this_01,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_4218901522517327739>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Common_AccelBase_Popup.cpp"
                     ,0x85,"false");
  if (!bVar2) {
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
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_Text *)(*pcVar1)();
  return pFVar4;
}

// Update @ 14bfe0cb0

void __thiscall UDS_VM_W_Common_AccelBase_Popup::Update(UDS_VM_W_Common_AccelBase_Popup *this)

{
  UDS_VM_MoneyDisplay *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  UDS_M_Common_AccelBase_Popup *pUVar6;
  UObject *pUVar7;
  int local_res8 [2];
  FWeakObjectPtr local_res10;
  UObject *local_res18;
  longlong local_res20;
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
  
  if (this->_padding_ == 0) {
LAB_14bfe0cee:
    pUVar7 = (UObject *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UDS_M_Common_AccelBase_Popup_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar5);
    if (!bVar3) goto LAB_14bfe0cee;
    pUVar7 = (UObject *)this->_padding_;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4218901522517327783>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Common_AccelBase_Popup.cpp"
                       ,0x59,"false");
    if (!bVar3) {
      return;
    }
code_r0x00014bfe0ebb:
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_80 = FFieldNotificationClassDescriptor::WaitCompleteSlotSwitcher.BitNumber;
  local_88 = FFieldNotificationClassDescriptor::WaitCompleteSlotSwitcher.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
  local_70 = FFieldNotificationClassDescriptor::WaitCompleteRatio.BitNumber;
  local_78 = FFieldNotificationClassDescriptor::WaitCompleteRatio.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  local_60 = FFieldNotificationClassDescriptor::WaitCompleteAccelRatio.BitNumber;
  local_68 = FFieldNotificationClassDescriptor::WaitCompleteAccelRatio.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  local_50 = FFieldNotificationClassDescriptor::WaitCompleteOverAccelRatio.BitNumber;
  local_58 = FFieldNotificationClassDescriptor::WaitCompleteOverAccelRatio.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
  local_40 = FFieldNotificationClassDescriptor::UseGold.BitNumber;
  local_48 = FFieldNotificationClassDescriptor::UseGold.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
  local_30 = FFieldNotificationClassDescriptor::AccelerationTime.BitNumber;
  local_38 = FFieldNotificationClassDescriptor::AccelerationTime.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  local_20 = FFieldNotificationClassDescriptor::RemainingTime.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::RemainingTime.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
  pUVar1 = (this->VM_Money).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_VM_MoneyDisplay *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4218901522517327773>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Common_AccelBase_Popup.cpp"
                       ,99,"false");
    if (bVar3) goto code_r0x00014bfe0ebb;
  }
  else {
    pUVar6 = (UDS_M_Common_AccelBase_Popup *)FWeakObjectPtr::Get(&local_res10);
    iVar4 = UDS_M_Common_AccelBase_Popup::GetAccelerationGoldCost(pUVar6);
    local_res20 = (longlong)iVar4;
    (**(code **)(pUVar1->_padding_ + 0x350))(pUVar1,&local_res20);
    pUVar1 = (this->VM_Money).field0_0x0.DebugPtr;
    pUVar6 = (UDS_M_Common_AccelBase_Popup *)FWeakObjectPtr::Get(&local_res10);
    local_res8[0] = UDS_M_Common_AccelBase_Popup::GetAccelerationCostTextStyleID(pUVar6);
    UDS_VM_MoneyDisplay::SetTextStyleTableID(pUVar1,local_res8);
    pUVar6 = (UDS_M_Common_AccelBase_Popup *)FWeakObjectPtr::Get(&local_res10);
    UDS_M_Common_AccelBase_Popup::CheckCompleteState(pUVar6);
  }
  return;
}

// UpdateView @ 14bfe69b0

void __thiscall
UDS_VM_W_Common_AccelBase_Popup::UpdateView
          (UDS_VM_W_Common_AccelBase_Popup *this,
          TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  UDS_VM_MoneyDisplay *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  UDS_M_Common_AccelBase_Popup *pUVar6;
  UObject *pUVar7;
  int aiStackX_8 [2];
  FWeakObjectPtr FStackX_10;
  UObject *pUStackX_18;
  longlong lStackX_20;
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
  
  if (this->_padding_ == 0) {
LAB_14bfe0cee:
    pUVar7 = (UObject *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UDS_M_Common_AccelBase_Popup_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar5);
    if (!bVar3) goto LAB_14bfe0cee;
    pUVar7 = (UObject *)this->_padding_;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  FStackX_10.ObjectIndex = 0;
  FStackX_10.ObjectSerialNumber = 0;
  pUStackX_18 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  FWeakObjectPtr::operator=(&FStackX_10,(FObjectPtr)&pUStackX_18);
  bVar3 = FWeakObjectPtr::IsValid(&FStackX_10);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4218901522517327783>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Common_AccelBase_Popup.cpp"
                       ,0x59,"false");
    if (!bVar3) {
      return;
    }
code_r0x00014bfe0ebb:
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iStack_80 = FFieldNotificationClassDescriptor::WaitCompleteSlotSwitcher.BitNumber;
  FStack_88 = FFieldNotificationClassDescriptor::WaitCompleteSlotSwitcher.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_88);
  iStack_70 = FFieldNotificationClassDescriptor::WaitCompleteRatio.BitNumber;
  FStack_78 = FFieldNotificationClassDescriptor::WaitCompleteRatio.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_78);
  iStack_60 = FFieldNotificationClassDescriptor::WaitCompleteAccelRatio.BitNumber;
  FStack_68 = FFieldNotificationClassDescriptor::WaitCompleteAccelRatio.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_68);
  iStack_50 = FFieldNotificationClassDescriptor::WaitCompleteOverAccelRatio.BitNumber;
  FStack_58 = FFieldNotificationClassDescriptor::WaitCompleteOverAccelRatio.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_58);
  iStack_40 = FFieldNotificationClassDescriptor::UseGold.BitNumber;
  FStack_48 = FFieldNotificationClassDescriptor::UseGold.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_48);
  iStack_30 = FFieldNotificationClassDescriptor::AccelerationTime.BitNumber;
  FStack_38 = FFieldNotificationClassDescriptor::AccelerationTime.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_38);
  iStack_20 = FFieldNotificationClassDescriptor::RemainingTime.BitNumber;
  FStack_28 = FFieldNotificationClassDescriptor::RemainingTime.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_);
  pUVar1 = (this->VM_Money).field0_0x0.DebugPtr;
  if (pUVar1 == (UDS_VM_MoneyDisplay *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4218901522517327773>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Common_AccelBase_Popup.cpp"
                       ,99,"false");
    if (bVar3) goto code_r0x00014bfe0ebb;
  }
  else {
    pUVar6 = (UDS_M_Common_AccelBase_Popup *)FWeakObjectPtr::Get(&FStackX_10);
    iVar4 = UDS_M_Common_AccelBase_Popup::GetAccelerationGoldCost(pUVar6);
    lStackX_20 = (longlong)iVar4;
    (**(code **)(pUVar1->_padding_ + 0x350))(pUVar1,&lStackX_20);
    pUVar1 = (this->VM_Money).field0_0x0.DebugPtr;
    pUVar6 = (UDS_M_Common_AccelBase_Popup *)FWeakObjectPtr::Get(&FStackX_10);
    aiStackX_8[0] = UDS_M_Common_AccelBase_Popup::GetAccelerationCostTextStyleID(pUVar6);
    UDS_VM_MoneyDisplay::SetTextStyleTableID(pUVar1,aiStackX_8);
    pUVar6 = (UDS_M_Common_AccelBase_Popup *)FWeakObjectPtr::Get(&FStackX_10);
    UDS_M_Common_AccelBase_Popup::CheckCompleteState(pUVar6);
  }
  return;
}

// UseGold @ 14bfe79d0

bool __thiscall UDS_VM_W_Common_AccelBase_Popup::UseGold(UDS_VM_W_Common_AccelBase_Popup *this)

{
  longlong *this_00;
  int iVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  UEnum *this_01;
  FString *pFVar9;
  longlong lVar10;
  UObject *pUVar11;
  UObject *pUVar12;
  wchar_t *pwVar13;
  undefined4 local_res8 [2];
  TPairInitializer<int_const_&,FName_const_&> local_res10;
  FName local_res20;
  FName local_48;
  UObject *local_40;
  undefined4 *local_38;
  FName *local_30;
  
  this_00 = &this->_padding_;
  pUVar12 = (UObject *)0x0;
  local_40 = pUVar12;
  if (*this_00 != 0) {
    pUVar7 = Z_Construct_UClass_UDS_M_Common_AccelBase_Popup_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar7);
    if (bVar4) {
      local_40 = (UObject *)*this_00;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_40 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_40);
  }
  local_res10.Value = (FName *)0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_40 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_40);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res10.Value,(FObjectPtr)&local_40);
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_res10.Value);
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4218901522517327715>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Common_AccelBase_Popup.cpp"
                       ,0x9d,"false");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    return false;
  }
  pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_res10.Value);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonAccelBasePopupData>(EDS_CommonAccelBasePopupData)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonAccelBasePopupData>(EDS_CommonAccelBasePopupData)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonAccelBasePopupData>(EDS_CommonAccelBasePopupData)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`FDS_DataContainer::TransformIndexToName<enum_EDS_CommonAccelBasePopupData>'::__l2::
           _dynamic_atexit_destructor_for__EnumNameCache__);
    _Init_thread_footer(&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonAccelBasePopupData>(EDS_CommonAccelBasePopupData)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pwVar13 = L"";
  local_res8[0] = 1;
  if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonAccelBasePopupData>(EDS_CommonAccelBasePopupData)___ptr64'
      ::__l2::EnumNameCache._8_4_ !=
      `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonAccelBasePopupData>(EDS_CommonAccelBasePopupData)___ptr64'
      ::__l2::EnumNameCache._52_4_) {
    lVar10 = 0x154cf7df8;
    if (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonAccelBasePopupData>(EDS_CommonAccelBasePopupData)___ptr64'
        ::__l2::EnumNameCache._64_8_ != 0) {
      lVar10 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonAccelBasePopupData>(EDS_CommonAccelBasePopupData)___ptr64'
               ::__l2::EnumNameCache._64_8_;
    }
    iVar1 = *(int *)(lVar10 + (ulonglong)
                              (`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonAccelBasePopupData>(EDS_CommonAccelBasePopupData)___ptr64'
                               ::__l2::EnumNameCache._72_4_ - 1 & 1) * 4);
    while (iVar1 != -1) {
      lVar10 = `private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonAccelBasePopupData>(EDS_CommonAccelBasePopupData)___ptr64'
               ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14;
      if (*(int *)(`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonAccelBasePopupData>(EDS_CommonAccelBasePopupData)___ptr64'
                   ::__l2::EnumNameCache._0_8_ + (longlong)iVar1 * 0x14) == 1) {
        pUVar11 = (UObject *)(lVar10 + 4);
        if (lVar10 == 0) {
          pUVar11 = pUVar12;
        }
        if (pUVar11 != (UObject *)0x0) {
          local_res20.ComparisonIndex.Value = *(uint *)&pUVar11->field_0x0;
          local_res20.Number = *(uint *)&pUVar11->field_0x4;
          goto LAB_14bfe7be0;
        }
        break;
      }
      iVar1 = *(int *)(lVar10 + 0xc);
    }
  }
  this_01 = StaticEnum<enum_EDS_CommonAccelBasePopupData>();
  if (this_01 == (UEnum *)0x0) {
    ::FName::FName(&local_res20,L"");
  }
  else {
    UEnum::GetNameByValue(this_01,(long64)&local_48);
    local_38 = local_res8;
    local_30 = &local_48;
    TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FName_const_&>_>
              ((TSet<TTuple<int,FName>,TDefaultMapHashableKeyFuncs<int,FName,0>,FDefaultSetAllocator>
                *)&`private:_class_FName___cdecl_FDS_DataContainer::TransformIndexToName<EDS_CommonAccelBasePopupData>(EDS_CommonAccelBasePopupData)___ptr64'
                   ::__l2::EnumNameCache,&local_res10,(bool *)&local_38);
    local_res20 = local_48;
  }
LAB_14bfe7be0:
  FVar3 = local_res20;
  uVar6 = ::GetTypeHash(local_res20.ComparisonIndex.Value);
  pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&pUVar8[1].field_0x18,uVar6 + FVar3.Number,&local_res20);
  if ((pFVar9->Data).ArrayNum != 0) {
    pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
  }
  bVar4 = FToBoolHelper::FromCStringWide(pwVar13);
  return bVar4;
}

// WaitCompleteAccelRatio @ 14bfe7d70

float __thiscall
UDS_VM_W_Common_AccelBase_Popup::WaitCompleteAccelRatio(UDS_VM_W_Common_AccelBase_Popup *this)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_M_Common_AccelBase_Popup *this_01;
  UObject *pUVar4;
  float fVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_Common_AccelBase_Popup_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      pUVar4 = (UObject *)*this_00;
      goto LAB_14bfe7d9e;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14bfe7d9e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4218901522517327727>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Common_AccelBase_Popup.cpp"
                       ,0x91,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
    return 0.0;
  }
  this_01 = (UDS_M_Common_AccelBase_Popup *)FWeakObjectPtr::Get(&local_res8);
  fVar5 = UDS_M_Common_AccelBase_Popup::GetWaitCompleteAccelRatio(this_01);
  if (__real_3f800000 <= fVar5) {
    fVar5 = __real_3f800000;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  return fVar5;
}

// WaitCompleteOverAccelRatio @ 14bfe7e60

float __thiscall
UDS_VM_W_Common_AccelBase_Popup::WaitCompleteOverAccelRatio(UDS_VM_W_Common_AccelBase_Popup *this)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_M_Common_AccelBase_Popup *this_01;
  UObject *pUVar4;
  float fVar5;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_Common_AccelBase_Popup_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      pUVar4 = (UObject *)*this_00;
      goto LAB_14bfe7e8e;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14bfe7e8e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4218901522517327721>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Common_AccelBase_Popup.cpp"
                       ,0x97,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
    return 0.0;
  }
  this_01 = (UDS_M_Common_AccelBase_Popup *)FWeakObjectPtr::Get(&local_res8);
  fVar5 = UDS_M_Common_AccelBase_Popup::GetWaitCompleteOverAccelRatio(this_01);
  if (__real_3f800000 <= fVar5) {
    fVar5 = __real_3f800000;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  return fVar5;
}

// WaitCompleteRatio @ 14bfe7f50

float __thiscall
UDS_VM_W_Common_AccelBase_Popup::WaitCompleteRatio(UDS_VM_W_Common_AccelBase_Popup *this)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UDS_M_Common_AccelBase_Popup *this_01;
  UDS_M_Common_AccelBase_Popup *this_02;
  UObject *pUVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar3 = Z_Construct_UClass_UDS_M_Common_AccelBase_Popup_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
    if (bVar2) {
      pUVar4 = (UObject *)*this_00;
      goto LAB_14bfe7f7e;
    }
  }
  pUVar4 = (UObject *)0x0;
LAB_14bfe7f7e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4218901522517327733>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Common_AccelBase_Popup.cpp"
                       ,0x8b,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
    return 0.0;
  }
  this_01 = (UDS_M_Common_AccelBase_Popup *)FWeakObjectPtr::Get(&local_res8);
  this_02 = (UDS_M_Common_AccelBase_Popup *)FWeakObjectPtr::Get(&local_res8);
  fVar6 = UDS_M_Common_AccelBase_Popup::GetWaitCompleteAccelRatio(this_02);
  fVar7 = UDS_M_Common_AccelBase_Popup::GetWaitCompleteRatio(this_01);
  fVar5 = fVar6 + fVar7;
  if (__real_3f800000 <= fVar6 + fVar7) {
    fVar5 = __real_3f800000;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  return fVar5;
}

// WaitCompleteSlotSwitcher @ 14bfe8070

int __thiscall
UDS_VM_W_Common_AccelBase_Popup::WaitCompleteSlotSwitcher(UDS_VM_W_Common_AccelBase_Popup *this)

{
  longlong *this_00;
  code *pcVar1;
  bool bVar2;
  EDS_WaitCompleteType EVar3;
  int iVar4;
  UClass *pUVar5;
  UDS_M_Common_AccelBase_Popup *this_01;
  UObject *pUVar6;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar5 = Z_Construct_UClass_UDS_M_Common_AccelBase_Popup_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
    if (bVar2) {
      pUVar6 = (UObject *)*this_00;
      goto LAB_14bfe809e;
    }
  }
  pUVar6 = (UObject *)0x0;
LAB_14bfe809e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4218901522517327746>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_VM_W_Common_AccelBase_Popup.cpp"
                       ,0x7e,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
    return 0;
  }
  this_01 = (UDS_M_Common_AccelBase_Popup *)FWeakObjectPtr::Get(&local_res8);
  EVar3 = UDS_M_Common_AccelBase_Popup::GetWaitCompleteType(this_01);
  return EVar3 - 1;
}

