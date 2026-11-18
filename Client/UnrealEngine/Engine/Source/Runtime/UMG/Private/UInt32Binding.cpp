// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 10

// StaticClass @ 1468d5b80

UClass * __cdecl UInt32Binding::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInt32Binding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"Int32Binding",
               &Z_Registration_Info_UClass_UInt32Binding.InnerSingleton,
               StaticRegisterNativesUInt32Binding,0x70,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInt32Binding>,InternalVTableHelperCtorCaller<UInt32Binding>,
               local_res8,UPropertyBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInt32Binding.InnerSingleton;
}

// UInt32Binding @ 146901300

UInt32Binding * __thiscall UInt32Binding::UInt32Binding(UInt32Binding *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UPropertyBinding__6B_;
  *(undefined8 *)&this->field_0x28 = 0;
  FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&this->field_0x30);
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined ***)this = &___7UInt32Binding__6B_;
  return this;
}

// UInt32Binding @ 146901350

UInt32Binding * __thiscall UInt32Binding::UInt32Binding(UInt32Binding *this)

{
  UObject::UObject((UObject *)this);
  *(undefined ***)this = &___7UPropertyBinding__6B_;
  *(undefined8 *)&this->field_0x28 = 0;
  FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&this->field_0x30);
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined ***)this = &___7UInt32Binding__6B_;
  return this;
}

// ~UInt32Binding @ 146904990

void __thiscall UInt32Binding::~UInt32Binding(UInt32Binding *this)

{
  *(undefined ***)this = &___7UPropertyBinding__6B_;
  FCachedPropertyPath::~FCachedPropertyPath((FCachedPropertyPath *)&this->field_0x30);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146922170

UClass * __cdecl UInt32Binding::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInt32Binding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"Int32Binding",
               &Z_Registration_Info_UClass_UInt32Binding.InnerSingleton,
               StaticRegisterNativesUInt32Binding,0x70,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UInt32Binding>,InternalVTableHelperCtorCaller<UInt32Binding>,
               local_res8,UPropertyBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInt32Binding.InnerSingleton;
}

// GetValue @ 1469278b0

int __thiscall UInt32Binding::GetValue(UInt32Binding *this)

{
  bool bVar1;
  UObject *pUVar2;
  int local_res8 [8];
  
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  if (pUVar2 != (UObject *)0x0) {
    local_res8[0] = 0;
    bVar1 = FDynamicPropertyPath::GetValue<int>
                      ((FDynamicPropertyPath *)&this->field_0x30,pUVar2,local_res8);
    if (bVar1) {
      return local_res8[0];
    }
  }
  return 0;
}

// IsSupportedDestination @ 14692d060

bool __thiscall UInt32Binding::IsSupportedDestination(UInt32Binding *this,FProperty *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014692d063. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x2b0))();
  return (bool)uVar1;
}

// IsSupportedSource @ 14692d440

bool __thiscall UInt32Binding::IsSupportedSource(UInt32Binding *this,FProperty *param_1)

{
  FFieldClass *pFVar1;
  FFieldClass *pFVar2;
  
  if ((param_1 != (FProperty *)0x0) &&
     ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x1000000000000) != 0)) {
    param_1 = (FProperty *)param_1[1]._padding_;
  }
  pFVar1 = (FFieldClass *)param_1->_padding_;
  pFVar2 = FIntProperty::StaticClass();
  return pFVar1 == pFVar2;
}

// StaticRegisterNativesUInt32Binding @ 1469458f0

void __cdecl UInt32Binding::StaticRegisterNativesUInt32Binding(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UInt32Binding_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetValue @ 146952ce0

void __cdecl UInt32Binding::execGetValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  int local_res8 [2];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(param_1 + 1));
  if (pUVar2 != (UObject *)0x0) {
    local_res8[0] = 0;
    bVar1 = FDynamicPropertyPath::GetValue<int>
                      ((FDynamicPropertyPath *)&param_1[1].field_0x8,pUVar2,local_res8);
    if (bVar1) {
      *(int *)param_3 = local_res8[0];
      return;
    }
  }
  *(undefined4 *)param_3 = 0;
  return;
}

