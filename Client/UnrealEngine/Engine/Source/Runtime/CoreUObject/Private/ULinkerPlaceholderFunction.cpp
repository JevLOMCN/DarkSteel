// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// StaticClass @ 1420e1760

UClass * __cdecl ULinkerPlaceholderFunction::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_ULinkerPlaceholderFunction.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UStruct::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"LinkerPlaceholderFunction",
               &Z_Registration_Info_UClass_ULinkerPlaceholderFunction.InnerSingleton,
               StaticRegisterNativesULinkerPlaceholderFunction,0x2a8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULinkerPlaceholderFunction>,
               InternalVTableHelperCtorCaller<ULinkerPlaceholderFunction>,aFStackX_8,
               UFunction::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULinkerPlaceholderFunction.InnerSingleton;
}

// ULinkerPlaceholderFunction @ 1420eac80

ULinkerPlaceholderFunction * __thiscall
ULinkerPlaceholderFunction::ULinkerPlaceholderFunction
          (ULinkerPlaceholderFunction *this,FVTableHelper *param_1)

{
  UFunction::UFunction((UFunction *)this,param_1);
  TLinkerImportPlaceholder<UFunction>::TLinkerImportPlaceholder<UFunction>
            ((TLinkerImportPlaceholder<UFunction> *)&this->field_0xe8);
  *(undefined ***)this = &_vftable__for__UFunction__;
  *(undefined ***)&this->field_0xe8 = &_vftable__for__TLinkerImportPlaceholder<UFunction>__;
  return this;
}

// ULinkerPlaceholderFunction @ 1420eacd0

ULinkerPlaceholderFunction * __thiscall
ULinkerPlaceholderFunction::ULinkerPlaceholderFunction
          (ULinkerPlaceholderFunction *this,FObjectInitializer *param_1)

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
  *(undefined ***)this = &___7UFunction__6B_;
  TLinkerImportPlaceholder<UFunction>::TLinkerImportPlaceholder<UFunction>
            ((TLinkerImportPlaceholder<UFunction> *)&this->field_0xe8);
  *(undefined ***)this = &_vftable__for__UFunction__;
  *(undefined ***)&this->field_0xe8 = &_vftable__for__TLinkerImportPlaceholder<UFunction>__;
  return this;
}

// ~ULinkerPlaceholderFunction @ 1420ec720

void __thiscall
ULinkerPlaceholderFunction::~ULinkerPlaceholderFunction(ULinkerPlaceholderFunction *this)

{
  *(undefined ***)this = &_vftable__for__UFunction__;
  *(undefined ***)&this->field_0xe8 = &_vftable__for__TLinkerImportPlaceholder<UFunction>__;
  TLinkerImportPlaceholder<UFunction>::~TLinkerImportPlaceholder<UFunction>
            ((TLinkerImportPlaceholder<UFunction> *)&this->field_0xe8);
  UFunction::~UFunction((UFunction *)this);
  return;
}

// GetPlaceholderAsUObject @ 1420fc710

UObject * __thiscall
ULinkerPlaceholderFunction::GetPlaceholderAsUObject(ULinkerPlaceholderFunction *this)

{
  return (UObject *)&this[-1].field_0x1c0;
}

// GetPrivateStaticClass @ 1420fcd90

UClass * __cdecl ULinkerPlaceholderFunction::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULinkerPlaceholderFunction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStruct::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"LinkerPlaceholderFunction",
               &Z_Registration_Info_UClass_ULinkerPlaceholderFunction.InnerSingleton,
               StaticRegisterNativesULinkerPlaceholderFunction,0x2a8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULinkerPlaceholderFunction>,
               InternalVTableHelperCtorCaller<ULinkerPlaceholderFunction>,local_res8,
               UFunction::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULinkerPlaceholderFunction.InnerSingleton;
}

// StaticRegisterNativesULinkerPlaceholderFunction @ 142116530

void __cdecl ULinkerPlaceholderFunction::StaticRegisterNativesULinkerPlaceholderFunction(void)

{
  return;
}

