// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 7

// StaticClass @ 14e3217d0

UClass * __cdecl UInterchangeResultWarning::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeResultWarning.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeCore",L"InterchangeResultWarning",
               &Z_Registration_Info_UClass_UInterchangeResultWarning.InnerSingleton,
               StaticRegisterNativesUInterchangeResultWarning,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeResultWarning>,
               InternalVTableHelperCtorCaller<UInterchangeResultWarning>,local_res8,
               UInterchangeResult::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeResultWarning.InnerSingleton;
}

// UInterchangeResultWarning @ 14e4019a0

UInterchangeResultWarning * __thiscall
UInterchangeResultWarning::UInterchangeResultWarning
          (UInterchangeResultWarning *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined ***)this = &___7UInterchangeResultWarning__6B_;
  return this;
}

// UInterchangeResultWarning @ 14e4019f0

UInterchangeResultWarning * __thiscall
UInterchangeResultWarning::UInterchangeResultWarning
          (UInterchangeResultWarning *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined ***)this = &___7UInterchangeResultWarning__6B_;
  return this;
}

// ~UInterchangeResultWarning @ 14e404e90

void __thiscall
UInterchangeResultWarning::~UInterchangeResultWarning(UInterchangeResultWarning *this)

{
  *(undefined ***)this = &___7UInterchangeResult__6B_;
  if (*(void **)&this->field_0x60 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x60);
  }
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  if (*(void **)&this->field_0x38 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x38);
  }
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14e441f20

UClass * __cdecl UInterchangeResultWarning::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeResultWarning.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeCore",L"InterchangeResultWarning",
               &Z_Registration_Info_UClass_UInterchangeResultWarning.InnerSingleton,
               StaticRegisterNativesUInterchangeResultWarning,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeResultWarning>,
               InternalVTableHelperCtorCaller<UInterchangeResultWarning>,local_res8,
               UInterchangeResult::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeResultWarning.InnerSingleton;
}

// GetResultType @ 14e4426b0

EInterchangeResultType __thiscall
UInterchangeResultWarning::GetResultType(UInterchangeResultWarning *this)

{
  return Warning;
}

// StaticRegisterNativesUInterchangeResultWarning @ 14e460010

void __cdecl UInterchangeResultWarning::StaticRegisterNativesUInterchangeResultWarning(void)

{
  return;
}

