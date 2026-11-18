// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 7

// StaticClass @ 14e321970

UClass * __cdecl UInterchangeResultError::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeResultError.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeCore",L"InterchangeResultError",
               &Z_Registration_Info_UClass_UInterchangeResultError.InnerSingleton,
               StaticRegisterNativesUInterchangeResultError,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeResultError>,
               InternalVTableHelperCtorCaller<UInterchangeResultError>,local_res8,
               UInterchangeResult::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeResultError.InnerSingleton;
}

// UInterchangeResultError @ 14e401700

UInterchangeResultError * __thiscall
UInterchangeResultError::UInterchangeResultError
          (UInterchangeResultError *this,FVTableHelper *param_1)

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
  *(undefined ***)this = &___7UInterchangeResultError__6B_;
  return this;
}

// UInterchangeResultError @ 14e401750

UInterchangeResultError * __thiscall
UInterchangeResultError::UInterchangeResultError
          (UInterchangeResultError *this,FObjectInitializer *param_1)

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
  *(undefined ***)this = &___7UInterchangeResultError__6B_;
  return this;
}

// ~UInterchangeResultError @ 14e404cf0

void __thiscall UInterchangeResultError::~UInterchangeResultError(UInterchangeResultError *this)

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

// GetPrivateStaticClass @ 14e441c20

UClass * __cdecl UInterchangeResultError::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeResultError.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeCore",L"InterchangeResultError",
               &Z_Registration_Info_UClass_UInterchangeResultError.InnerSingleton,
               StaticRegisterNativesUInterchangeResultError,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeResultError>,
               InternalVTableHelperCtorCaller<UInterchangeResultError>,local_res8,
               UInterchangeResult::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeResultError.InnerSingleton;
}

// GetResultType @ 14e442690

EInterchangeResultType __thiscall
UInterchangeResultError::GetResultType(UInterchangeResultError *this)

{
  return Error;
}

// StaticRegisterNativesUInterchangeResultError @ 14e45ffd0

void __cdecl UInterchangeResultError::StaticRegisterNativesUInterchangeResultError(void)

{
  return;
}

