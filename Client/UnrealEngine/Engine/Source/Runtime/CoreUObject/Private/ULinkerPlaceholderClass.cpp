// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 9

// StaticClass @ 1420dff70

UClass * __cdecl ULinkerPlaceholderClass::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULinkerPlaceholderClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"LinkerPlaceholderClass",
               &Z_Registration_Info_UClass_ULinkerPlaceholderClass.InnerSingleton,
               StaticRegisterNativesULinkerPlaceholderClass,0x3c8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULinkerPlaceholderClass>,
               InternalVTableHelperCtorCaller<ULinkerPlaceholderClass>,local_res8,
               UClass::StaticClass,UPackage::StaticClass);
  }
  return Z_Registration_Info_UClass_ULinkerPlaceholderClass.InnerSingleton;
}

// ULinkerPlaceholderClass @ 1420eab30

ULinkerPlaceholderClass * __thiscall
ULinkerPlaceholderClass::ULinkerPlaceholderClass
          (ULinkerPlaceholderClass *this,FVTableHelper *param_1)

{
  UClass::UClass((UClass *)this,param_1);
  TLinkerImportPlaceholder<UClass>::TLinkerImportPlaceholder<UClass>
            ((TLinkerImportPlaceholder<UClass> *)&this->field_0x208);
  *(undefined ***)this = &_vftable__for__UClass__;
  *(undefined ***)&this->field_0x208 = &_vftable__for__TLinkerImportPlaceholder<UClass>__;
  return this;
}

// ULinkerPlaceholderClass @ 1420eab80

ULinkerPlaceholderClass * __thiscall
ULinkerPlaceholderClass::ULinkerPlaceholderClass
          (ULinkerPlaceholderClass *this,FObjectInitializer *param_1)

{
  UClass::UClass((UClass *)this,param_1);
  TLinkerImportPlaceholder<UClass>::TLinkerImportPlaceholder<UClass>
            ((TLinkerImportPlaceholder<UClass> *)&this->field_0x208);
  *(undefined ***)this = &_vftable__for__UClass__;
  *(undefined ***)&this->field_0x208 = &_vftable__for__TLinkerImportPlaceholder<UClass>__;
  return this;
}

// ~ULinkerPlaceholderClass @ 1420ec6a0

void __thiscall ULinkerPlaceholderClass::~ULinkerPlaceholderClass(ULinkerPlaceholderClass *this)

{
  *(undefined ***)this = &_vftable__for__UClass__;
  *(undefined ***)&this->field_0x208 = &_vftable__for__TLinkerImportPlaceholder<UClass>__;
  TLinkerImportPlaceholder<UClass>::~TLinkerImportPlaceholder<UClass>
            ((TLinkerImportPlaceholder<UClass> *)&this->field_0x208);
  UClass::~UClass((UClass *)this);
  return;
}

// BeginDestroy @ 1420f22f0

void __thiscall ULinkerPlaceholderClass::BeginDestroy(ULinkerPlaceholderClass *this)

{
  code *pcVar1;
  UClass *pUVar2;
  
  pcVar1 = *(code **)(*(longlong *)&this->field_0x208 + 0x10);
  pUVar2 = Z_Construct_UClass_UObject_NoRegister();
  (*pcVar1)(&this->field_0x208,pUVar2);
  UObject::BeginDestroy((UObject *)this);
  return;
}

// Bind @ 1420f2470

void __thiscall ULinkerPlaceholderClass::Bind(ULinkerPlaceholderClass *this)

{
  *(code **)&this->field_0xb0 = InternalConstructor<ULinkerPlaceholderClass>;
  *(code **)&this->field_0xb8 = InternalVTableHelperCtorCaller<ULinkerPlaceholderClass>;
  UClass::Bind((UClass *)this);
  *(code **)&this->field_0xc0 = UClass::AddReferencedObjects;
  return;
}

// GetPlaceholderAsUObject @ 1420fc6f0

UObject * __thiscall ULinkerPlaceholderClass::GetPlaceholderAsUObject(ULinkerPlaceholderClass *this)

{
  return (UObject *)&this[-1].field_0x1c0;
}

// GetPrivateStaticClass @ 1420fcc20

UClass * __cdecl ULinkerPlaceholderClass::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULinkerPlaceholderClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"LinkerPlaceholderClass",
               &Z_Registration_Info_UClass_ULinkerPlaceholderClass.InnerSingleton,
               StaticRegisterNativesULinkerPlaceholderClass,0x3c8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULinkerPlaceholderClass>,
               InternalVTableHelperCtorCaller<ULinkerPlaceholderClass>,local_res8,
               UClass::StaticClass,UPackage::StaticClass);
  }
  return Z_Registration_Info_UClass_ULinkerPlaceholderClass.InnerSingleton;
}

// StaticRegisterNativesULinkerPlaceholderClass @ 142116510

void __cdecl ULinkerPlaceholderClass::StaticRegisterNativesULinkerPlaceholderClass(void)

{
  return;
}

