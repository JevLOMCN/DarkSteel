// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 10

// StaticClass @ 1468db900

UClass * __cdecl UVisibilityBinding::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVisibilityBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"VisibilityBinding",
               &Z_Registration_Info_UClass_UVisibilityBinding.InnerSingleton,
               StaticRegisterNativesUVisibilityBinding,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UVisibilityBinding>,
               InternalVTableHelperCtorCaller<UVisibilityBinding>,local_res8,
               UPropertyBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVisibilityBinding.InnerSingleton;
}

// UVisibilityBinding @ 146902670

UVisibilityBinding * __thiscall
UVisibilityBinding::UVisibilityBinding(UVisibilityBinding *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UPropertyBinding__6B_;
  *(undefined8 *)&this->field_0x28 = 0;
  FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&this->field_0x30);
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined ***)this = &___7UVisibilityBinding__6B_;
  return this;
}

// UVisibilityBinding @ 1469026c0

UVisibilityBinding * __thiscall UVisibilityBinding::UVisibilityBinding(UVisibilityBinding *this)

{
  UObject::UObject((UObject *)this);
  *(undefined ***)this = &___7UPropertyBinding__6B_;
  *(undefined8 *)&this->field_0x28 = 0;
  FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&this->field_0x30);
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined ***)this = &___7UVisibilityBinding__6B_;
  return this;
}

// ~UVisibilityBinding @ 146904f20

void __thiscall UVisibilityBinding::~UVisibilityBinding(UVisibilityBinding *this)

{
  *(undefined ***)this = &___7UPropertyBinding__6B_;
  FCachedPropertyPath::~FCachedPropertyPath((FCachedPropertyPath *)&this->field_0x30);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1469231b0

UClass * __cdecl UVisibilityBinding::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVisibilityBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"VisibilityBinding",
               &Z_Registration_Info_UClass_UVisibilityBinding.InnerSingleton,
               StaticRegisterNativesUVisibilityBinding,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UVisibilityBinding>,
               InternalVTableHelperCtorCaller<UVisibilityBinding>,local_res8,
               UPropertyBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVisibilityBinding.InnerSingleton;
}

// GetValue @ 146927950

ESlateVisibility __thiscall UVisibilityBinding::GetValue(UVisibilityBinding *this)

{
  bool bVar1;
  UObject *pUVar2;
  ESlateVisibility local_res8 [32];
  
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  if (pUVar2 != (UObject *)0x0) {
    local_res8[0] = Visible;
    bVar1 = FDynamicPropertyPath::GetValue<unsigned_char>
                      ((FDynamicPropertyPath *)&this->field_0x30,pUVar2,local_res8);
    if (bVar1) {
      return local_res8[0];
    }
  }
  return Visible;
}

// IsSupportedDestination @ 14692d190

bool __thiscall
UVisibilityBinding::IsSupportedDestination(UVisibilityBinding *this,FProperty *param_1)

{
  longlong lVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&VisibilityEnum,L"ESlateVisibility");
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (param_1 != (FProperty *)0x0) {
    if ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x1000000000000) != 0) {
      return *(FName *)(param_1[1]._padding_ + 0x18) == VisibilityEnum;
    }
    if ((param_1 != (FProperty *)0x0) && ((*(byte *)(param_1->_padding_ + 0x18) & 0x40) != 0)) {
      lVar1 = (**(code **)(param_1->_padding_ + 0x1e0))(param_1);
      if (lVar1 != 0) {
        return *(FName *)(param_1[1]._padding_ + 0x18) == VisibilityEnum;
      }
    }
  }
  return false;
}

// IsSupportedSource @ 14692d530

bool __thiscall UVisibilityBinding::IsSupportedSource(UVisibilityBinding *this,FProperty *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014692d533. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x2b8))();
  return (bool)uVar1;
}

// StaticRegisterNativesUVisibilityBinding @ 146945b70

void __cdecl UVisibilityBinding::StaticRegisterNativesUVisibilityBinding(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UVisibilityBinding_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetValue @ 146952de0

void __cdecl UVisibilityBinding::execGetValue(UObject *param_1,FFrame *param_2,void *param_3)

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
  *(undefined1 *)param_3 = 0;
  return;
}

