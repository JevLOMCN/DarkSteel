// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b519cc0

UClass * __cdecl UDS_ModelEventWarehouse::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ModelEventWarehouse.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ModelEventWarehouse",
               &Z_Registration_Info_UClass_UDS_ModelEventWarehouse.InnerSingleton,
               StaticRegisterNativesUDS_ModelEventWarehouse,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ModelEventWarehouse>,
               InternalVTableHelperCtorCaller<UDS_ModelEventWarehouse>,local_res8,
               UDS_ModelEventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ModelEventWarehouse.InnerSingleton;
}

// UDS_ModelEventWarehouse @ 14b522c70

UDS_ModelEventWarehouse * __thiscall
UDS_ModelEventWarehouse::UDS_ModelEventWarehouse
          (UDS_ModelEventWarehouse *this,FVTableHelper *param_1)

{
  UDS_ModelEventBase::UDS_ModelEventBase((UDS_ModelEventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ModelEventWarehouse__6B_;
  this->Event = None;
  this->TabIndex = 0;
  return this;
}

// UDS_ModelEventWarehouse @ 14b522ca0

UDS_ModelEventWarehouse * __thiscall
UDS_ModelEventWarehouse::UDS_ModelEventWarehouse
          (UDS_ModelEventWarehouse *this,FObjectInitializer *param_1)

{
  UDS_ModelEventBase::UDS_ModelEventBase((UDS_ModelEventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ModelEventWarehouse__6B_;
  this->Event = None;
  this->TabIndex = 0;
  return this;
}

// ~UDS_ModelEventWarehouse @ 14b523860

void __thiscall UDS_ModelEventWarehouse::~UDS_ModelEventWarehouse(UDS_ModelEventWarehouse *this)

{
  this->_padding_ = (longlong)&___7UDS_ModelEventWarehouse__6B_;
  UDS_ModelEventBase::~UDS_ModelEventBase((UDS_ModelEventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b526ee0

UClass * __cdecl UDS_ModelEventWarehouse::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ModelEventWarehouse.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ModelEventWarehouse",
               &Z_Registration_Info_UClass_UDS_ModelEventWarehouse.InnerSingleton,
               StaticRegisterNativesUDS_ModelEventWarehouse,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ModelEventWarehouse>,
               InternalVTableHelperCtorCaller<UDS_ModelEventWarehouse>,local_res8,
               UDS_ModelEventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ModelEventWarehouse.InnerSingleton;
}

// StaticRegisterNativesUDS_ModelEventWarehouse @ 14b5276e0

void __cdecl UDS_ModelEventWarehouse::StaticRegisterNativesUDS_ModelEventWarehouse(void)

{
  return;
}

