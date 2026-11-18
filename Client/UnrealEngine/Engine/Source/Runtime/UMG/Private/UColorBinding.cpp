// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 13

// StaticClass @ 1468de9e0

UClass * __cdecl UColorBinding::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UColorBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ColorBinding",
               &Z_Registration_Info_UClass_UColorBinding.InnerSingleton,
               StaticRegisterNativesUColorBinding,0x78,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UColorBinding>,InternalVTableHelperCtorCaller<UColorBinding>,
               local_res8,UPropertyBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UColorBinding.InnerSingleton;
}

// UColorBinding @ 146901080

UColorBinding * __thiscall UColorBinding::UColorBinding(UColorBinding *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPropertyBinding__6B_;
  this->_padding_ = 0;
  FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&this->_padding_);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UColorBinding__6B_;
  (this->bNeedsConversion).bIsSet = false;
  return this;
}

// UColorBinding @ 1469010e0

UColorBinding * __thiscall UColorBinding::UColorBinding(UColorBinding *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UPropertyBinding__6B_;
  this->_padding_ = 0;
  FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&this->_padding_);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UColorBinding__6B_;
  (this->bNeedsConversion).bIsSet = false;
  return this;
}

// ~UColorBinding @ 146904890

void __thiscall UColorBinding::~UColorBinding(UColorBinding *this)

{
  this->_padding_ = (longlong)&___7UPropertyBinding__6B_;
  FCachedPropertyPath::~FCachedPropertyPath((FCachedPropertyPath *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// Bind @ 14690cad0

void __thiscall
UColorBinding::Bind(UColorBinding *this,FProperty *param_1,
                   TScriptDelegate<FNotThreadSafeDelegateMode> *param_2)

{
  UScriptStruct *pUVar1;
  FName FVar2;
  bool bVar3;
  UColorBinding *local_res10;
  FDestructionSentinel local_28;
  
  local_res10 = this;
  if ((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    pUVar1 = FSlateColor::StaticStruct();
    if ((UScriptStruct *)param_1[1]._padding_ == (UScriptStruct *)0x0) {
      bVar3 = pUVar1 == (UScriptStruct *)0x0;
    }
    else {
      bVar3 = (UScriptStruct *)param_1[1]._padding_ == pUVar1;
    }
    if (bVar3) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FName::FName(&BinderFunction,L"GetSlateValue");
        _Init_thread_footer(&::_TSS0);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
                 (FWriteAccessScope *)&local_28);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UColorBinding *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&param_2->Object,(FObjectPtr)&local_res10);
      FVar2 = BinderFunction;
      goto LAB_14690cbf3;
    }
  }
  bVar3 = IsConcreteTypeCompatibleWithReflectedType<FLinearColor>(param_1);
  if (!bVar3) {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&BinderFunction,L"GetLinearValue");
    _Init_thread_footer(&::_TSS1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
             (FWriteAccessScope *)&local_28);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UColorBinding *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&param_2->Object,(FObjectPtr)&local_res10);
  FVar2 = BinderFunction;
LAB_14690cbf3:
  param_2->FunctionName = FVar2;
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// GetLinearValue @ 14691eb60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FLinearColor * __thiscall
UColorBinding::GetLinearValue(UColorBinding *this,FLinearColor *__return_storage_ptr__)

{
  TOptional<bool> *pTVar1;
  bool bVar2;
  UObject *pUVar3;
  FLinearColor *pFVar4;
  TOptional<bool> *pTVar5;
  char local_38;
  TOptional<bool> local_37 [3];
  FLinearColor_u_0 local_30;
  char local_20;
  
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (pUVar3 != (UObject *)0x0) {
    pTVar1 = &this->bNeedsConversion;
    if (((this->bNeedsConversion).bIsSet == false) || (pTVar1->TypedValue == false)) {
      local_30._0_8_ = 0;
      local_30._8_8_ = 0;
      bVar2 = FDynamicPropertyPath::GetValue<FLinearColor>
                        ((FDynamicPropertyPath *)&this->_padding_,pUVar3,
                         (FLinearColor *)&local_30._s_0);
      if (bVar2) {
        if ((TOptional<bool> *)&local_38 != pTVar1) {
          pTVar1->TypedValue = false;
          pTVar1->bIsSet = true;
        }
        goto LAB_14691ec38;
      }
    }
    pTVar5 = &this->bNeedsConversion;
    if (((this->bNeedsConversion).bIsSet == false) || (pTVar1->TypedValue != false)) {
      local_20 = '\0';
      local_30._0_8_ = ___xmm_3f8000003f800000000000003f800000;
      local_30._8_8_ = _UNK_15090c6d8;
      bVar2 = FDynamicPropertyPath::GetValue<FSlateColor>
                        ((FDynamicPropertyPath *)&this->_padding_,pUVar3,
                         (FSlateColor *)&local_30._s_0);
      if (bVar2) {
        if (local_37 != pTVar5) {
          pTVar5->TypedValue = true;
          pTVar5->bIsSet = true;
        }
        if (local_20 == '\x01') {
          pFVar4 = FSlateColor::GetColorFromTable((FSlateColor *)&local_30._s_0);
          local_30._0_8_ = *(undefined8 *)&pFVar4->field0_0x0;
          local_30._8_8_ = *(undefined8 *)((longlong)&pFVar4->field0_0x0 + 8);
        }
        goto LAB_14691ec38;
      }
    }
  }
  local_30._0_8_ = 0;
  local_30._8_8_ = 0;
LAB_14691ec38:
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = local_30._0_8_;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = local_30._8_8_;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146921f30

UClass * __cdecl UColorBinding::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UColorBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ColorBinding",
               &Z_Registration_Info_UClass_UColorBinding.InnerSingleton,
               StaticRegisterNativesUColorBinding,0x78,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UColorBinding>,InternalVTableHelperCtorCaller<UColorBinding>,
               local_res8,UPropertyBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UColorBinding.InnerSingleton;
}

// GetSlateValue @ 146924190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FSlateColor * __thiscall
UColorBinding::GetSlateValue(UColorBinding *this,FSlateColor *__return_storage_ptr__)

{
  TOptional<bool> *pTVar1;
  bool bVar2;
  UObject *pUVar3;
  char cVar4;
  TOptional<bool> *pTVar5;
  char local_38;
  TOptional<bool> local_37 [3];
  FLinearColor_u_0 local_30;
  uint local_20;
  
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (pUVar3 != (UObject *)0x0) {
    pTVar1 = &this->bNeedsConversion;
    if ((this->bNeedsConversion).bIsSet == false) {
      cVar4 = '\0';
    }
    else {
      cVar4 = pTVar1->TypedValue;
    }
    if (cVar4 == '\0') {
      local_20 = local_20 & 0xffffff00;
      local_30._0_8_ = ___xmm_3f8000003f800000000000003f800000;
      local_30._8_8_ = _UNK_15090c6d8;
      bVar2 = FDynamicPropertyPath::GetValue<FSlateColor>
                        ((FDynamicPropertyPath *)&this->_padding_,pUVar3,
                         (FSlateColor *)&local_30._s_0);
      if (bVar2) {
        if ((TOptional<bool> *)&local_38 != pTVar1) {
          pTVar1->TypedValue = false;
          pTVar1->bIsSet = true;
        }
        *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 = local_30._0_8_;
        *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) =
             local_30._8_8_;
        __return_storage_ptr__->ColorUseRule = (undefined1)local_20;
        __return_storage_ptr__->ColorTableId = local_20._1_1_;
        *(undefined2 *)&__return_storage_ptr__->field_0x12 = local_20._2_2_;
        return __return_storage_ptr__;
      }
    }
    pTVar5 = &this->bNeedsConversion;
    if (((this->bNeedsConversion).bIsSet == false) || (pTVar1->TypedValue != false)) {
      local_30._0_8_ = 0;
      local_30._8_8_ = 0;
      bVar2 = FDynamicPropertyPath::GetValue<FLinearColor>
                        ((FDynamicPropertyPath *)&this->_padding_,pUVar3,
                         (FLinearColor *)&local_30._s_0);
      if (bVar2) {
        if (local_37 != pTVar5) {
          pTVar5->TypedValue = true;
          pTVar5->bIsSet = true;
        }
        *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 = local_30._0_8_;
        *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) =
             local_30._8_8_;
        goto LAB_14692427b;
      }
    }
  }
  *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 = 0x3f800000;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = 1.0;
LAB_14692427b:
  __return_storage_ptr__->ColorUseRule = UseColor_Specified;
  return __return_storage_ptr__;
}

// IsSupportedDestination @ 14692d040

bool __thiscall UColorBinding::IsSupportedDestination(UColorBinding *this,FProperty *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014692d043. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x2b0))();
  return (bool)uVar1;
}

// IsSupportedSource @ 14692d390

bool __thiscall UColorBinding::IsSupportedSource(UColorBinding *this,FProperty *param_1)

{
  UScriptStruct *pUVar1;
  bool bVar2;
  
  if ((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    pUVar1 = FSlateColor::StaticStruct();
    if ((UScriptStruct *)param_1[1]._padding_ == (UScriptStruct *)0x0) {
      bVar2 = pUVar1 == (UScriptStruct *)0x0;
    }
    else {
      bVar2 = (UScriptStruct *)param_1[1]._padding_ == pUVar1;
    }
    if (bVar2) {
      return true;
    }
  }
  bVar2 = IsConcreteTypeCompatibleWithReflectedType<FLinearColor>(param_1);
  if (bVar2) {
    return true;
  }
  return false;
}

// StaticRegisterNativesUColorBinding @ 146945830

void __cdecl UColorBinding::StaticRegisterNativesUColorBinding(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UColorBinding_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetLinearValue @ 146951b20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UColorBinding::execGetLinearValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  bool bVar2;
  UObject *pUVar3;
  FLinearColor *pFVar4;
  char local_48;
  undefined2 local_47 [7];
  FLinearColor_u_0 local_38;
  char local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(param_1 + 1));
  if (pUVar3 != (UObject *)0x0) {
    puVar1 = &param_1[2].field_0x20;
    if ((param_1[2].field_0x21 == '\0') || (*puVar1 == '\0')) {
      local_38._0_8_ = 0;
      local_38._8_8_ = 0;
      bVar2 = FDynamicPropertyPath::GetValue<FLinearColor>
                        ((FDynamicPropertyPath *)&param_1[1].field_0x8,pUVar3,
                         (FLinearColor *)&local_38._s_0);
      if (bVar2) {
        if (&local_48 != puVar1) {
          *(undefined2 *)puVar1 = 0x100;
        }
        goto LAB_146951c14;
      }
    }
    if ((param_1[2].field_0x21 == '\0') || (*puVar1 != '\0')) {
      local_28 = '\0';
      local_38._0_8_ = ___xmm_3f8000003f800000000000003f800000;
      local_38._8_8_ = _UNK_15090c6d8;
      bVar2 = FDynamicPropertyPath::GetValue<FSlateColor>
                        ((FDynamicPropertyPath *)&param_1[1].field_0x8,pUVar3,
                         (FSlateColor *)&local_38._s_0);
      if (bVar2) {
        if (local_47 != (undefined2 *)&param_1[2].field_0x20) {
          *(undefined2 *)&param_1[2].field_0x20 = 0x101;
        }
        if (local_28 == '\x01') {
          pFVar4 = FSlateColor::GetColorFromTable((FSlateColor *)&local_38._s_0);
          local_38._0_8_ = *(undefined8 *)&pFVar4->field0_0x0;
          local_38._8_8_ = *(undefined8 *)((longlong)&pFVar4->field0_0x0 + 8);
        }
        goto LAB_146951c14;
      }
    }
  }
  local_38._0_8_ = 0;
  local_38._8_8_ = 0;
LAB_146951c14:
  *(undefined8 *)param_3 = local_38._0_8_;
  *(undefined8 *)((longlong)param_3 + 8) = local_38._8_8_;
  return;
}

// execGetSlateValue @ 1469524b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UColorBinding::execGetSlateValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  UObject *pUVar5;
  char cVar6;
  char local_58;
  undefined2 local_57 [3];
  FLinearColor_u_0 local_50;
  FLinearColor_u_0 local_40;
  uint local_30;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(param_1 + 1));
  uVar3 = _UNK_15090c6d8;
  uVar2 = ___xmm_3f8000003f800000000000003f800000;
  if (pUVar5 != (UObject *)0x0) {
    puVar1 = &param_1[2].field_0x20;
    if (param_1[2].field_0x21 == '\0') {
      cVar6 = '\0';
    }
    else {
      cVar6 = *puVar1;
    }
    if (cVar6 == '\0') {
      local_30 = local_30 & 0xffffff00;
      local_40._0_8_ = ___xmm_3f8000003f800000000000003f800000;
      local_40._8_8_ = _UNK_15090c6d8;
      bVar4 = FDynamicPropertyPath::GetValue<FSlateColor>
                        ((FDynamicPropertyPath *)&param_1[1].field_0x8,pUVar5,
                         (FSlateColor *)&local_40._s_0);
      if (bVar4) {
        if (&local_58 != puVar1) {
          *(undefined2 *)puVar1 = 0x100;
        }
        goto LAB_1469525a8;
      }
    }
    if ((param_1[2].field_0x21 == '\0') || (*puVar1 != '\0')) {
      local_50._0_8_ = 0;
      local_50._8_8_ = 0;
      bVar4 = FDynamicPropertyPath::GetValue<FLinearColor>
                        ((FDynamicPropertyPath *)&param_1[1].field_0x8,pUVar5,
                         (FLinearColor *)&local_50._s_0);
      uVar2 = ___xmm_3f8000003f800000000000003f800000;
      uVar3 = _UNK_15090c6d8;
      if ((bVar4) &&
         (uVar2 = local_50._0_8_, uVar3 = local_50._8_8_,
         local_57 != (undefined2 *)&param_1[2].field_0x20)) {
        *(undefined2 *)&param_1[2].field_0x20 = 0x101;
        uVar2 = local_50._0_8_;
        uVar3 = local_50._8_8_;
      }
    }
  }
  local_40._8_8_ = uVar3;
  local_40._0_8_ = uVar2;
  local_30 = local_30 & 0xffffff00;
LAB_1469525a8:
  *(undefined8 *)param_3 = local_40._0_8_;
  *(undefined8 *)((longlong)param_3 + 8) = local_40._8_8_;
  *(uint *)((longlong)param_3 + 0x10) = local_30;
  return;
}

