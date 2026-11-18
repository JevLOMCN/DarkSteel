// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 10

// StaticClass @ 1468d63b0

UClass * __cdecl UMouseCursorBinding::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMouseCursorBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"MouseCursorBinding",
               &Z_Registration_Info_UClass_UMouseCursorBinding.InnerSingleton,
               StaticRegisterNativesUMouseCursorBinding,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMouseCursorBinding>,
               InternalVTableHelperCtorCaller<UMouseCursorBinding>,local_res8,
               UPropertyBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMouseCursorBinding.InnerSingleton;
}

// UMouseCursorBinding @ 146901400

UMouseCursorBinding * __thiscall
UMouseCursorBinding::UMouseCursorBinding(UMouseCursorBinding *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UPropertyBinding__6B_;
  *(undefined8 *)&this->field_0x28 = 0;
  FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&this->field_0x30);
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined ***)this = &___7UMouseCursorBinding__6B_;
  return this;
}

// UMouseCursorBinding @ 146901450

UMouseCursorBinding * __thiscall UMouseCursorBinding::UMouseCursorBinding(UMouseCursorBinding *this)

{
  UObject::UObject((UObject *)this);
  *(undefined ***)this = &___7UPropertyBinding__6B_;
  *(undefined8 *)&this->field_0x28 = 0;
  FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&this->field_0x30);
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined ***)this = &___7UMouseCursorBinding__6B_;
  return this;
}

// ~UMouseCursorBinding @ 1469049e0

void __thiscall UMouseCursorBinding::~UMouseCursorBinding(UMouseCursorBinding *this)

{
  *(undefined ***)this = &___7UPropertyBinding__6B_;
  FCachedPropertyPath::~FCachedPropertyPath((FCachedPropertyPath *)&this->field_0x30);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1469222f0

UClass * __cdecl UMouseCursorBinding::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMouseCursorBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"MouseCursorBinding",
               &Z_Registration_Info_UClass_UMouseCursorBinding.InnerSingleton,
               StaticRegisterNativesUMouseCursorBinding,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMouseCursorBinding>,
               InternalVTableHelperCtorCaller<UMouseCursorBinding>,local_res8,
               UPropertyBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMouseCursorBinding.InnerSingleton;
}

// GetValue @ 146927900

Type __thiscall UMouseCursorBinding::GetValue(UMouseCursorBinding *this)

{
  bool bVar1;
  UObject *pUVar2;
  byte local_res8 [32];
  
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  if (pUVar2 != (UObject *)0x0) {
    local_res8[0] = 0;
    bVar1 = FDynamicPropertyPath::GetValue<unsigned_char>
                      ((FDynamicPropertyPath *)&this->field_0x30,pUVar2,local_res8);
    if (bVar1) {
      return (uint)local_res8[0];
    }
  }
  return Default;
}

// IsSupportedDestination @ 14692d070

bool __thiscall
UMouseCursorBinding::IsSupportedDestination(UMouseCursorBinding *this,FProperty *param_1)

{
  longlong lVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&MouseCursorEnum,L"EMouseCursor");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (param_1 != (FProperty *)0x0) {
    if ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x1000000000000) != 0) {
      return *(FName *)(param_1[1]._padding_ + 0x18) == MouseCursorEnum;
    }
    if ((param_1 != (FProperty *)0x0) && ((*(byte *)(param_1->_padding_ + 0x18) & 0x40) != 0)) {
      lVar1 = (**(code **)(param_1->_padding_ + 0x1e0))(param_1);
      if (lVar1 != 0) {
        return *(FName *)(param_1[1]._padding_ + 0x18) == MouseCursorEnum;
      }
    }
  }
  return false;
}

// IsSupportedSource @ 14692d480

bool __thiscall UMouseCursorBinding::IsSupportedSource(UMouseCursorBinding *this,FProperty *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014692d483. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x2b8))();
  return (bool)uVar1;
}

// StaticRegisterNativesUMouseCursorBinding @ 146945940

void __cdecl UMouseCursorBinding::StaticRegisterNativesUMouseCursorBinding(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UMouseCursorBinding_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetValue @ 146952d60

void __cdecl UMouseCursorBinding::execGetValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  uchar local_res8 [8];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(param_1 + 1));
  if (pUVar2 != (UObject *)0x0) {
    local_res8[0] = '\0';
    bVar1 = FDynamicPropertyPath::GetValue<unsigned_char>
                      ((FDynamicPropertyPath *)&param_1[1].field_0x8,pUVar2,local_res8);
    if (bVar1) {
      *(uchar *)param_3 = local_res8[0];
      return;
    }
  }
  *(undefined1 *)param_3 = 1;
  return;
}

