// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 10

// StaticClass @ 1468de630

UClass * __cdecl UCheckedStateBinding::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCheckedStateBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"CheckedStateBinding",
               &Z_Registration_Info_UClass_UCheckedStateBinding.InnerSingleton,
               StaticRegisterNativesUCheckedStateBinding,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCheckedStateBinding>,
               InternalVTableHelperCtorCaller<UCheckedStateBinding>,local_res8,
               UPropertyBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCheckedStateBinding.InnerSingleton;
}

// UCheckedStateBinding @ 146900fc0

UCheckedStateBinding * __thiscall
UCheckedStateBinding::UCheckedStateBinding(UCheckedStateBinding *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPropertyBinding__6B_;
  this->_padding_ = 0;
  FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&this->_padding_);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UCheckedStateBinding__6B_;
  (this->bConversion).bIsSet = false;
  return this;
}

// UCheckedStateBinding @ 146901020

UCheckedStateBinding * __thiscall
UCheckedStateBinding::UCheckedStateBinding(UCheckedStateBinding *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UPropertyBinding__6B_;
  this->_padding_ = 0;
  FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&this->_padding_);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UCheckedStateBinding__6B_;
  (this->bConversion).bIsSet = false;
  return this;
}

// ~UCheckedStateBinding @ 146904860

void __thiscall UCheckedStateBinding::~UCheckedStateBinding(UCheckedStateBinding *this)

{
  this->_padding_ = (longlong)&___7UPropertyBinding__6B_;
  FCachedPropertyPath::~FCachedPropertyPath((FCachedPropertyPath *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146921e70

UClass * __cdecl UCheckedStateBinding::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCheckedStateBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"CheckedStateBinding",
               &Z_Registration_Info_UClass_UCheckedStateBinding.InnerSingleton,
               StaticRegisterNativesUCheckedStateBinding,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCheckedStateBinding>,
               InternalVTableHelperCtorCaller<UCheckedStateBinding>,local_res8,
               UPropertyBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCheckedStateBinding.InnerSingleton;
}

// GetValue @ 146927640

ECheckBoxState __thiscall UCheckedStateBinding::GetValue(UCheckedStateBinding *this)

{
  TOptional<UCheckedStateBinding::EConversion> *pTVar1;
  bool bVar2;
  UObject *pUVar3;
  TOptional<UCheckedStateBinding::EConversion> *pTVar4;
  bool local_res8 [8];
  char local_28;
  TOptional<UCheckedStateBinding::EConversion> local_27 [7];
  
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (pUVar3 != (UObject *)0x0) {
    pTVar1 = &this->bConversion;
    if (((this->bConversion).bIsSet == false) || (pTVar1->TypedValue == None)) {
      local_res8[0] = false;
      bVar2 = FDynamicPropertyPath::GetValue<unsigned_char>
                        ((FDynamicPropertyPath *)&this->_padding_,pUVar3,local_res8);
      if (bVar2) {
        if ((TOptional<UCheckedStateBinding::EConversion> *)&local_28 == pTVar1) {
          return local_res8[0];
        }
        pTVar1->TypedValue = None;
        pTVar1->bIsSet = true;
        return local_res8[0];
      }
    }
    pTVar4 = &this->bConversion;
    if (((this->bConversion).bIsSet == false) || (pTVar1->TypedValue == Bool)) {
      local_res8[0] = false;
      bVar2 = FDynamicPropertyPath::GetValue<bool>
                        ((FDynamicPropertyPath *)&this->_padding_,pUVar3,local_res8);
      if (bVar2) {
        if (local_27 != pTVar4) {
          pTVar4->TypedValue = Bool;
          pTVar4->bIsSet = true;
        }
        return local_res8[0] != false;
      }
    }
  }
  return Unchecked;
}

// IsSupportedDestination @ 14692cf60

bool __thiscall
UCheckedStateBinding::IsSupportedDestination(UCheckedStateBinding *this,FProperty *param_1)

{
  longlong lVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&CheckBoxStateEnum,L"ECheckBoxState");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (param_1 != (FProperty *)0x0) {
    if ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x1000000000000) != 0) {
      return *(FName *)(param_1[1]._padding_ + 0x18) == CheckBoxStateEnum;
    }
    if ((param_1 != (FProperty *)0x0) && ((*(byte *)(param_1->_padding_ + 0x18) & 0x40) != 0)) {
      lVar1 = (**(code **)(param_1->_padding_ + 0x1e0))(param_1);
      if (lVar1 != 0) {
        return *(FName *)(param_1[1]._padding_ + 0x18) == CheckBoxStateEnum;
      }
    }
  }
  return false;
}

// IsSupportedSource @ 14692d350

bool __thiscall
UCheckedStateBinding::IsSupportedSource(UCheckedStateBinding *this,FProperty *param_1)

{
  FFieldClass *pFVar1;
  char cVar2;
  FFieldClass *pFVar3;
  
  cVar2 = (**(code **)(this->_padding_ + 0x2b8))();
  if (cVar2 == '\0') {
    pFVar1 = (FFieldClass *)param_1->_padding_;
    pFVar3 = FBoolProperty::StaticClass();
    if (pFVar1 != pFVar3) {
      return false;
    }
  }
  return true;
}

// StaticRegisterNativesUCheckedStateBinding @ 1469457f0

void __cdecl UCheckedStateBinding::StaticRegisterNativesUCheckedStateBinding(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UCheckedStateBinding_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetValue @ 146952a20

void __cdecl UCheckedStateBinding::execGetValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  bool bVar2;
  UObject *pUVar3;
  bool local_res8 [8];
  char local_28;
  undefined2 local_27 [7];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(param_1 + 1));
  if (pUVar3 != (UObject *)0x0) {
    puVar1 = &param_1[2].field_0x20;
    if ((param_1[2].field_0x21 == '\0') || (*puVar1 == '\0')) {
      local_res8[0] = false;
      bVar2 = FDynamicPropertyPath::GetValue<unsigned_char>
                        ((FDynamicPropertyPath *)&param_1[1].field_0x8,pUVar3,local_res8);
      if (bVar2) {
        if (&local_28 != puVar1) {
          *(undefined2 *)puVar1 = 0x100;
        }
        *(bool *)param_3 = local_res8[0];
        return;
      }
    }
    if ((param_1[2].field_0x21 == '\0') || (*puVar1 == '\x01')) {
      local_res8[0] = false;
      bVar2 = FDynamicPropertyPath::GetValue<bool>
                        ((FDynamicPropertyPath *)&param_1[1].field_0x8,pUVar3,local_res8);
      if (bVar2) {
        if (local_27 != (undefined2 *)&param_1[2].field_0x20) {
          *(undefined2 *)&param_1[2].field_0x20 = 0x101;
        }
        *(bool *)param_3 = local_res8[0] != false;
        return;
      }
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

