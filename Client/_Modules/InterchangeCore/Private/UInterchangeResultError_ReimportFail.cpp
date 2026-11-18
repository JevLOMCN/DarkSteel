// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 7

// StaticClass @ 14e321db0

UClass * __cdecl UInterchangeResultError_ReimportFail::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeResultError_ReimportFail.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeCore",L"InterchangeResultError_ReimportFail",
               &Z_Registration_Info_UClass_UInterchangeResultError_ReimportFail.InnerSingleton,
               StaticRegisterNativesUInterchangeResultError_ReimportFail,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeResultError_ReimportFail>,
               InternalVTableHelperCtorCaller<UInterchangeResultError_ReimportFail>,local_res8,
               UInterchangeResultError::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeResultError_ReimportFail.InnerSingleton;
}

// UInterchangeResultError_ReimportFail @ 14e401860

UInterchangeResultError_ReimportFail * __thiscall
UInterchangeResultError_ReimportFail::UInterchangeResultError_ReimportFail
          (UInterchangeResultError_ReimportFail *this,FVTableHelper *param_1)

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
  *(undefined ***)this = &___7UInterchangeResultError_ReimportFail__6B_;
  return this;
}

// UInterchangeResultError_ReimportFail @ 14e4018b0

UInterchangeResultError_ReimportFail * __thiscall
UInterchangeResultError_ReimportFail::UInterchangeResultError_ReimportFail
          (UInterchangeResultError_ReimportFail *this,FObjectInitializer *param_1)

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
  *(undefined ***)this = &___7UInterchangeResultError_ReimportFail__6B_;
  return this;
}

// ~UInterchangeResultError_ReimportFail @ 14e404dd0

void __thiscall
UInterchangeResultError_ReimportFail::~UInterchangeResultError_ReimportFail
          (UInterchangeResultError_ReimportFail *this)

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

// GetPrivateStaticClass @ 14e441da0

UClass * __cdecl UInterchangeResultError_ReimportFail::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeResultError_ReimportFail.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeCore",L"InterchangeResultError_ReimportFail",
               &Z_Registration_Info_UClass_UInterchangeResultError_ReimportFail.InnerSingleton,
               StaticRegisterNativesUInterchangeResultError_ReimportFail,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeResultError_ReimportFail>,
               InternalVTableHelperCtorCaller<UInterchangeResultError_ReimportFail>,local_res8,
               UInterchangeResultError::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeResultError_ReimportFail.InnerSingleton;
}

// GetText @ 14e4431a0

FText * __thiscall
UInterchangeResultError_ReimportFail::GetText
          (UInterchangeResultError_ReimportFail *this,FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"InterchangeResultNS",
             L"UInterchangeResultError_ReimportFail_GetText",
             L"Re-import Fail, see log for more detail.");
  return __return_storage_ptr__;
}

// StaticRegisterNativesUInterchangeResultError_ReimportFail @ 14e45fff0

void __cdecl
UInterchangeResultError_ReimportFail::StaticRegisterNativesUInterchangeResultError_ReimportFail
          (void)

{
  return;
}

