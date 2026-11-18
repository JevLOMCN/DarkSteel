// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// StaticClass @ 1497297d0

UClass * __cdecl UPCGExportableDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGExportableDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGExportableDataInterface",
               &Z_Registration_Info_UClass_UPCGExportableDataInterface.InnerSingleton,
               StaticRegisterNativesUPCGExportableDataInterface,0x98,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGExportableDataInterface>,
               InternalVTableHelperCtorCaller<UPCGExportableDataInterface>,local_res8,
               UPCGComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGExportableDataInterface.InnerSingleton;
}

// UPCGExportableDataInterface @ 14973ba20

UPCGExportableDataInterface * __thiscall
UPCGExportableDataInterface::UPCGExportableDataInterface
          (UPCGExportableDataInterface *this,FVTableHelper *param_1)

{
  UPCGComputeDataInterface::UPCGComputeDataInterface((UPCGComputeDataInterface *)this,param_1);
  this->bRequiresExport = false;
  this->_padding_ = (longlong)&___7UPCGExportableDataInterface__6B_;
  return this;
}

// UPCGExportableDataInterface @ 14973ba50

UPCGExportableDataInterface * __thiscall
UPCGExportableDataInterface::UPCGExportableDataInterface
          (UPCGExportableDataInterface *this,FObjectInitializer *param_1)

{
  UPCGComputeDataInterface::UPCGComputeDataInterface((UPCGComputeDataInterface *)this,param_1);
  this->bRequiresExport = false;
  this->_padding_ = (longlong)&___7UPCGExportableDataInterface__6B_;
  return this;
}

// ~UPCGExportableDataInterface @ 14973e110

void __thiscall
UPCGExportableDataInterface::~UPCGExportableDataInterface(UPCGExportableDataInterface *this)

{
  this->_padding_ = (longlong)&___7UPCGComputeDataInterface__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UComputeDataInterface::~UComputeDataInterface((UComputeDataInterface *)this);
  return;
}

// GetPrivateStaticClass @ 14975bc80

UClass * __cdecl UPCGExportableDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGExportableDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataInterface::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGExportableDataInterface",
               &Z_Registration_Info_UClass_UPCGExportableDataInterface.InnerSingleton,
               StaticRegisterNativesUPCGExportableDataInterface,0x98,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGExportableDataInterface>,
               InternalVTableHelperCtorCaller<UPCGExportableDataInterface>,local_res8,
               UPCGComputeDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGExportableDataInterface.InnerSingleton;
}

// StaticRegisterNativesUPCGExportableDataInterface @ 149778740

void __cdecl UPCGExportableDataInterface::StaticRegisterNativesUPCGExportableDataInterface(void)

{
  return;
}

