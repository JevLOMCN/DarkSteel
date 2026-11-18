// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b50a510

UClass * __cdecl UDS_ModelEventInventoryBag::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ModelEventInventoryBag.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ModelEventInventoryBag",
               &Z_Registration_Info_UClass_UDS_ModelEventInventoryBag.InnerSingleton,
               StaticRegisterNativesUDS_ModelEventInventoryBag,0xd8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_ModelEventInventoryBag>,
               InternalVTableHelperCtorCaller<UDS_ModelEventInventoryBag>,local_res8,
               UDS_ModelEventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ModelEventInventoryBag.InnerSingleton;
}

// UDS_ModelEventInventoryBag @ 14b511fa0

UDS_ModelEventInventoryBag * __thiscall
UDS_ModelEventInventoryBag::UDS_ModelEventInventoryBag
          (UDS_ModelEventInventoryBag *this,FVTableHelper *param_1)

{
  UDS_ModelEventBase::UDS_ModelEventBase((UDS_ModelEventBase *)this,param_1);
  this->Event = None;
  this->_padding_ = (longlong)&___7UDS_ModelEventInventoryBag__6B_;
  return this;
}

// UDS_ModelEventInventoryBag @ 14b511fe0

UDS_ModelEventInventoryBag * __thiscall
UDS_ModelEventInventoryBag::UDS_ModelEventInventoryBag
          (UDS_ModelEventInventoryBag *this,FObjectInitializer *param_1)

{
  UDS_ModelEventBase::UDS_ModelEventBase((UDS_ModelEventBase *)this,param_1);
  this->Event = None;
  this->_padding_ = (longlong)&___7UDS_ModelEventInventoryBag__6B_;
  return this;
}

// ~UDS_ModelEventInventoryBag @ 14b5132e0

void __thiscall
UDS_ModelEventInventoryBag::~UDS_ModelEventInventoryBag(UDS_ModelEventInventoryBag *this)

{
  this->_padding_ = (longlong)&___7UDS_ModelEventInventoryBag__6B_;
  UDS_ModelEventBase::~UDS_ModelEventBase((UDS_ModelEventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b516a40

UClass * __cdecl UDS_ModelEventInventoryBag::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ModelEventInventoryBag.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ModelEventInventoryBag",
               &Z_Registration_Info_UClass_UDS_ModelEventInventoryBag.InnerSingleton,
               StaticRegisterNativesUDS_ModelEventInventoryBag,0xd8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_ModelEventInventoryBag>,
               InternalVTableHelperCtorCaller<UDS_ModelEventInventoryBag>,local_res8,
               UDS_ModelEventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ModelEventInventoryBag.InnerSingleton;
}

// StaticRegisterNativesUDS_ModelEventInventoryBag @ 14b516e80

void __cdecl UDS_ModelEventInventoryBag::StaticRegisterNativesUDS_ModelEventInventoryBag(void)

{
  return;
}

