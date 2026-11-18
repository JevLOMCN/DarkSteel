// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 10

// StaticClass @ 1468dd480

UClass * __cdecl UBoolBinding::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBoolBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"BoolBinding",&Z_Registration_Info_UClass_UBoolBinding.InnerSingleton
               ,StaticRegisterNativesUBoolBinding,0x70,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBoolBinding>,InternalVTableHelperCtorCaller<UBoolBinding>,
               local_res8,UPropertyBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBoolBinding.InnerSingleton;
}

// UBoolBinding @ 146900660

UBoolBinding * __thiscall UBoolBinding::UBoolBinding(UBoolBinding *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UPropertyBinding__6B_;
  *(undefined8 *)&this->field_0x28 = 0;
  FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&this->field_0x30);
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined ***)this = &___7UBoolBinding__6B_;
  return this;
}

// UBoolBinding @ 1469006b0

UBoolBinding * __thiscall UBoolBinding::UBoolBinding(UBoolBinding *this)

{
  UObject::UObject((UObject *)this);
  *(undefined ***)this = &___7UPropertyBinding__6B_;
  *(undefined8 *)&this->field_0x28 = 0;
  FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&this->field_0x30);
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined ***)this = &___7UBoolBinding__6B_;
  return this;
}

// ~UBoolBinding @ 146904510

void __thiscall UBoolBinding::~UBoolBinding(UBoolBinding *this)

{
  *(undefined ***)this = &___7UPropertyBinding__6B_;
  FCachedPropertyPath::~FCachedPropertyPath((FCachedPropertyPath *)&this->field_0x30);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146921870

UClass * __cdecl UBoolBinding::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBoolBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"BoolBinding",&Z_Registration_Info_UClass_UBoolBinding.InnerSingleton
               ,StaticRegisterNativesUBoolBinding,0x70,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBoolBinding>,InternalVTableHelperCtorCaller<UBoolBinding>,
               local_res8,UPropertyBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBoolBinding.InnerSingleton;
}

// GetValue @ 146927360

bool __thiscall UBoolBinding::GetValue(UBoolBinding *this)

{
  bool bVar1;
  UObject *pUVar2;
  bool local_res8 [32];
  
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  if (pUVar2 != (UObject *)0x0) {
    local_res8[0] = false;
    bVar1 = FDynamicPropertyPath::GetValue<bool>
                      ((FDynamicPropertyPath *)&this->field_0x30,pUVar2,local_res8);
    if (bVar1) {
      return local_res8[0];
    }
  }
  return false;
}

// IsSupportedDestination @ 14692cee0

bool __thiscall UBoolBinding::IsSupportedDestination(UBoolBinding *this,FProperty *param_1)

{
  FFieldClass *pFVar1;
  FFieldClass *pFVar2;
  
  pFVar1 = (FFieldClass *)param_1->_padding_;
  pFVar2 = FBoolProperty::StaticClass();
  return pFVar1 == pFVar2;
}

// IsSupportedSource @ 14692d280

bool __thiscall UBoolBinding::IsSupportedSource(UBoolBinding *this,FProperty *param_1)

{
  FFieldClass *pFVar1;
  FFieldClass *pFVar2;
  
  pFVar1 = (FFieldClass *)param_1->_padding_;
  pFVar2 = FBoolProperty::StaticClass();
  return pFVar1 == pFVar2;
}

// StaticRegisterNativesUBoolBinding @ 1469455f0

void __cdecl UBoolBinding::StaticRegisterNativesUBoolBinding(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UBoolBinding_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetValue @ 146952940

void __cdecl UBoolBinding::execGetValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  bool local_res8 [8];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(param_1 + 1));
  if (pUVar2 != (UObject *)0x0) {
    local_res8[0] = false;
    bVar1 = FDynamicPropertyPath::GetValue<bool>
                      ((FDynamicPropertyPath *)&param_1[1].field_0x8,pUVar2,local_res8);
    if (bVar1) {
      *(bool *)param_3 = local_res8[0];
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

