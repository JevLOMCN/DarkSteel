// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 6

// StaticClass @ 14a788740

UClass * __cdecl UCommonMappingContextMetadataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UCommonMappingContextMetadataInterface.InnerSingleton ==
      (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonMappingContextMetadataInterface",
               &Z_Registration_Info_UClass_UCommonMappingContextMetadataInterface.InnerSingleton,
               StaticRegisterNativesUCommonMappingContextMetadataInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCommonMappingContextMetadataInterface>,
               InternalVTableHelperCtorCaller<UCommonMappingContextMetadataInterface>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonMappingContextMetadataInterface.InnerSingleton;
}

// UCommonMappingContextMetadataInterface @ 14a7ae310

UCommonMappingContextMetadataInterface * __thiscall
UCommonMappingContextMetadataInterface::UCommonMappingContextMetadataInterface
          (UCommonMappingContextMetadataInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UCommonMappingContextMetadataInterface__6B_;
  return this;
}

// UCommonMappingContextMetadataInterface @ 14a7ae340

UCommonMappingContextMetadataInterface * __thiscall
UCommonMappingContextMetadataInterface::UCommonMappingContextMetadataInterface
          (UCommonMappingContextMetadataInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UCommonMappingContextMetadataInterface__6B_;
  return this;
}

// ~UCommonMappingContextMetadataInterface @ 14a7b3140

void __thiscall
UCommonMappingContextMetadataInterface::~UCommonMappingContextMetadataInterface
          (UCommonMappingContextMetadataInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14a7e5d40

UClass * __cdecl UCommonMappingContextMetadataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonMappingContextMetadataInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonMappingContextMetadataInterface",
               &Z_Registration_Info_UClass_UCommonMappingContextMetadataInterface.InnerSingleton,
               StaticRegisterNativesUCommonMappingContextMetadataInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCommonMappingContextMetadataInterface>,
               InternalVTableHelperCtorCaller<UCommonMappingContextMetadataInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonMappingContextMetadataInterface.InnerSingleton;
}

// StaticRegisterNativesUCommonMappingContextMetadataInterface @ 14a81e6f0

void __cdecl
UCommonMappingContextMetadataInterface::StaticRegisterNativesUCommonMappingContextMetadataInterface
          (void)

{
  return;
}

