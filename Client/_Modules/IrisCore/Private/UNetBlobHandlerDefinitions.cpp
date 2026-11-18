// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 6

// StaticClass @ 14421f730

UClass * __cdecl UNetBlobHandlerDefinitions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetBlobHandlerDefinitions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetBlobHandlerDefinitions",
               &Z_Registration_Info_UClass_UNetBlobHandlerDefinitions.InnerSingleton,
               StaticRegisterNativesUNetBlobHandlerDefinitions,0x38,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetBlobHandlerDefinitions>,
               InternalVTableHelperCtorCaller<UNetBlobHandlerDefinitions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetBlobHandlerDefinitions.InnerSingleton;
}

// UNetBlobHandlerDefinitions @ 14422a280

UNetBlobHandlerDefinitions * __thiscall
UNetBlobHandlerDefinitions::UNetBlobHandlerDefinitions(UNetBlobHandlerDefinitions *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UNetBlobHandlerDefinitions__6B_;
  (this->NetBlobHandlerDefinitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NetBlobHandlerDefinitions).ArrayNum = 0;
  (this->NetBlobHandlerDefinitions).ArrayMax = 0;
  return this;
}

// UNetBlobHandlerDefinitions @ 14422a2c0

UNetBlobHandlerDefinitions * __thiscall
UNetBlobHandlerDefinitions::UNetBlobHandlerDefinitions
          (UNetBlobHandlerDefinitions *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNetBlobHandlerDefinitions__6B_;
  (this->NetBlobHandlerDefinitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NetBlobHandlerDefinitions).ArrayNum = 0;
  (this->NetBlobHandlerDefinitions).ArrayMax = 0;
  return this;
}

// ~UNetBlobHandlerDefinitions @ 14422b460

void __thiscall
UNetBlobHandlerDefinitions::~UNetBlobHandlerDefinitions(UNetBlobHandlerDefinitions *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNetBlobHandlerDefinitions__6B_;
  pFVar1 = (this->NetBlobHandlerDefinitions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14423e160

UClass * __cdecl UNetBlobHandlerDefinitions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNetBlobHandlerDefinitions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IrisCore",L"NetBlobHandlerDefinitions",
               &Z_Registration_Info_UClass_UNetBlobHandlerDefinitions.InnerSingleton,
               StaticRegisterNativesUNetBlobHandlerDefinitions,0x38,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UNetBlobHandlerDefinitions>,
               InternalVTableHelperCtorCaller<UNetBlobHandlerDefinitions>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNetBlobHandlerDefinitions.InnerSingleton;
}

// StaticRegisterNativesUNetBlobHandlerDefinitions @ 1442548e0

void __cdecl UNetBlobHandlerDefinitions::StaticRegisterNativesUNetBlobHandlerDefinitions(void)

{
  return;
}

