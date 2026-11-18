// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// StaticClass @ 149f72d10

UClass * __cdecl UPCGAttributeExtractorTestObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGAttributeExtractorTestObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGAttributeExtractorTestObject",
               &Z_Registration_Info_UClass_UPCGAttributeExtractorTestObject.InnerSingleton,
               StaticRegisterNativesUPCGAttributeExtractorTestObject,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGAttributeExtractorTestObject>,
               InternalVTableHelperCtorCaller<UPCGAttributeExtractorTestObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGAttributeExtractorTestObject.InnerSingleton;
}

// UPCGAttributeExtractorTestObject @ 149f95150

UPCGAttributeExtractorTestObject * __thiscall
UPCGAttributeExtractorTestObject::UPCGAttributeExtractorTestObject
          (UPCGAttributeExtractorTestObject *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->DoubleValue = 0.0;
  this->_padding_ = (longlong)&___7UPCGAttributeExtractorTestObject__6B_;
  return this;
}

// UPCGAttributeExtractorTestObject @ 149f95180

UPCGAttributeExtractorTestObject * __thiscall
UPCGAttributeExtractorTestObject::UPCGAttributeExtractorTestObject
          (UPCGAttributeExtractorTestObject *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->DoubleValue = 0.0;
  this->_padding_ = (longlong)&___7UPCGAttributeExtractorTestObject__6B_;
  return this;
}

// ~UPCGAttributeExtractorTestObject @ 149f95380

void __thiscall
UPCGAttributeExtractorTestObject::~UPCGAttributeExtractorTestObject
          (UPCGAttributeExtractorTestObject *this)

{
  this->_padding_ = (longlong)&___7UPCGAttributeExtractorTestObject__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 149f9cb00

UClass * __cdecl UPCGAttributeExtractorTestObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGAttributeExtractorTestObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGAttributeExtractorTestObject",
               &Z_Registration_Info_UClass_UPCGAttributeExtractorTestObject.InnerSingleton,
               StaticRegisterNativesUPCGAttributeExtractorTestObject,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGAttributeExtractorTestObject>,
               InternalVTableHelperCtorCaller<UPCGAttributeExtractorTestObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGAttributeExtractorTestObject.InnerSingleton;
}

// StaticRegisterNativesUPCGAttributeExtractorTestObject @ 149fa1450

void __cdecl
UPCGAttributeExtractorTestObject::StaticRegisterNativesUPCGAttributeExtractorTestObject(void)

{
  return;
}

