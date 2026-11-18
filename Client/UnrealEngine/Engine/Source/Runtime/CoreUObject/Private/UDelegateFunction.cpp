// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// StaticClass @ 141f521d0

UClass * __cdecl UDelegateFunction::StaticClass(void)

{
  <lambda_1> local_res8 [8];
  FUObjectCppClassStaticFunctions local_res10 [3];
  
  if (Z_Registration_Info_UClass_UDelegateFunction.InnerSingleton == (UClass *)0x0) {
    local_res10[0].AddReferencedObjects = UStruct::AddReferencedObjects;
    UECodeGen_Private::
    ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
              (L"/Script/CoreUObject",L"DelegateFunction",
               &Z_Registration_Info_UClass_UDelegateFunction.InnerSingleton,
               StaticRegisterNativesUDelegateFunction,0xe8,8,CLASS_Intrinsic,
               CASTCLASS_UDelegateFunction,L"Engine",InternalConstructor<UDelegateFunction>,
               InternalVTableHelperCtorCaller<UDelegateFunction>,local_res10,UFunction::StaticClass,
               UObject::StaticClass,local_res8);
  }
  return Z_Registration_Info_UClass_UDelegateFunction.InnerSingleton;
}

// UDelegateFunction @ 141f677c0

UDelegateFunction * __thiscall
UDelegateFunction::UDelegateFunction(UDelegateFunction *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->field_0x38 = 0xffffffff;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined2 *)&this->field_0x5e = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x90 = 0;
  *(undefined8 *)&this->field_0x98 = 0;
  *(undefined8 *)&this->field_0xa8 = 0;
  *(undefined ***)this = &___7UDelegateFunction__6B_;
  return this;
}

// UDelegateFunction @ 141f67830

UDelegateFunction * __thiscall
UDelegateFunction::UDelegateFunction
          (UDelegateFunction *this,FObjectInitializer *param_1,UFunction *param_2,
          EFunctionFlags param_3,ulong64 param_4)

{
  UStruct::UStruct((UStruct *)this,param_1,(UStruct *)param_2,param_4,0);
  *(EFunctionFlags *)&this->field_0xb0 = param_3;
  *(undefined ***)this = &___7UDelegateFunction__6B_;
  *(undefined4 *)&this->field_0xba = 0;
  *(undefined8 *)&this->field_0xc0 = 0;
  *(undefined8 *)&this->field_0xc8 = 0;
  *(undefined4 *)&this->field_0xd0 = 0;
  *(undefined8 *)&this->field_0xd8 = 0;
  return this;
}

// UDelegateFunction @ 141f678a0

UDelegateFunction * __thiscall
UDelegateFunction::UDelegateFunction
          (UDelegateFunction *this,UFunction *param_1,EFunctionFlags param_2,ulong64 param_3)

{
  UFunction::UFunction((UFunction *)this,param_1,param_2,param_3);
  *(undefined ***)this = &___7UDelegateFunction__6B_;
  return this;
}

// ~UDelegateFunction @ 141f690b0

void __thiscall UDelegateFunction::~UDelegateFunction(UDelegateFunction *this)

{
  *(undefined ***)this = &___7UFunction__6B_;
  UStruct::~UStruct((UStruct *)this);
  return;
}

// GetPrivateStaticClass @ 141f84b80

UClass * __cdecl UDelegateFunction::GetPrivateStaticClass(void)

{
  <lambda_1> local_res8 [8];
  FUObjectCppClassStaticFunctions local_res10 [3];
  
  if (Z_Registration_Info_UClass_UDelegateFunction.InnerSingleton == (UClass *)0x0) {
    local_res10[0].AddReferencedObjects = UStruct::AddReferencedObjects;
    UECodeGen_Private::
    ConstructUClassNoInitHelper<UClass,_GetPrivateStaticClassBody_::__l2::<lambda_1>_>
              (L"/Script/CoreUObject",L"DelegateFunction",
               &Z_Registration_Info_UClass_UDelegateFunction.InnerSingleton,
               StaticRegisterNativesUDelegateFunction,0xe8,8,CLASS_Intrinsic,
               CASTCLASS_UDelegateFunction,L"Engine",InternalConstructor<UDelegateFunction>,
               InternalVTableHelperCtorCaller<UDelegateFunction>,local_res10,UFunction::StaticClass,
               UObject::StaticClass,local_res8);
  }
  return Z_Registration_Info_UClass_UDelegateFunction.InnerSingleton;
}

// StaticRegisterNativesUDelegateFunction @ 141faddd0

void __cdecl UDelegateFunction::StaticRegisterNativesUDelegateFunction(void)

{
  return;
}

