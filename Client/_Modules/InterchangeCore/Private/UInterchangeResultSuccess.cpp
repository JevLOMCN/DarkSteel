// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 8

// StaticClass @ 14e3215a0

UClass * __cdecl UInterchangeResultSuccess::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeResultSuccess.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeCore",L"InterchangeResultSuccess",
               &Z_Registration_Info_UClass_UInterchangeResultSuccess.InnerSingleton,
               StaticRegisterNativesUInterchangeResultSuccess,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeResultSuccess>,
               InternalVTableHelperCtorCaller<UInterchangeResultSuccess>,local_res8,
               UInterchangeResult::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeResultSuccess.InnerSingleton;
}

// UInterchangeResultSuccess @ 14e401900

UInterchangeResultSuccess * __thiscall
UInterchangeResultSuccess::UInterchangeResultSuccess
          (UInterchangeResultSuccess *this,FVTableHelper *param_1)

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
  *(undefined ***)this = &___7UInterchangeResultSuccess__6B_;
  return this;
}

// UInterchangeResultSuccess @ 14e401950

UInterchangeResultSuccess * __thiscall
UInterchangeResultSuccess::UInterchangeResultSuccess
          (UInterchangeResultSuccess *this,FObjectInitializer *param_1)

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
  *(undefined ***)this = &___7UInterchangeResultSuccess__6B_;
  return this;
}

// ~UInterchangeResultSuccess @ 14e404e30

void __thiscall
UInterchangeResultSuccess::~UInterchangeResultSuccess(UInterchangeResultSuccess *this)

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

// GetPrivateStaticClass @ 14e441e60

UClass * __cdecl UInterchangeResultSuccess::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeResultSuccess.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeCore",L"InterchangeResultSuccess",
               &Z_Registration_Info_UClass_UInterchangeResultSuccess.InnerSingleton,
               StaticRegisterNativesUInterchangeResultSuccess,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeResultSuccess>,
               InternalVTableHelperCtorCaller<UInterchangeResultSuccess>,local_res8,
               UInterchangeResult::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeResultSuccess.InnerSingleton;
}

// GetResultType @ 14e4426a0

EInterchangeResultType __thiscall
UInterchangeResultSuccess::GetResultType(UInterchangeResultSuccess *this)

{
  return Success;
}

// GetText @ 14e4431e0

FText * __thiscall
UInterchangeResultSuccess::GetText(UInterchangeResultSuccess *this,FText *__return_storage_ptr__)

{
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInterchangeResultSuccess @ 14e460000

void __cdecl UInterchangeResultSuccess::StaticRegisterNativesUInterchangeResultSuccess(void)

{
  return;
}

