// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148677fc0

UClass * __cdecl USlateTextureAtlasInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateTextureAtlasInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SlateTextureAtlasInterface",
               &Z_Registration_Info_UClass_USlateTextureAtlasInterface.InnerSingleton,
               StaticRegisterNativesUSlateTextureAtlasInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USlateTextureAtlasInterface>,
               InternalVTableHelperCtorCaller<USlateTextureAtlasInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateTextureAtlasInterface.InnerSingleton;
}

// USlateTextureAtlasInterface @ 148696780

USlateTextureAtlasInterface * __thiscall
USlateTextureAtlasInterface::USlateTextureAtlasInterface
          (USlateTextureAtlasInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7USlateTextureAtlasInterface__6B_;
  return this;
}

// USlateTextureAtlasInterface @ 1486967b0

USlateTextureAtlasInterface * __thiscall
USlateTextureAtlasInterface::USlateTextureAtlasInterface
          (USlateTextureAtlasInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7USlateTextureAtlasInterface__6B_;
  return this;
}

// ~USlateTextureAtlasInterface @ 14869b3e0

void __thiscall
USlateTextureAtlasInterface::~USlateTextureAtlasInterface(USlateTextureAtlasInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1486c3f30

UClass * __cdecl USlateTextureAtlasInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateTextureAtlasInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SlateTextureAtlasInterface",
               &Z_Registration_Info_UClass_USlateTextureAtlasInterface.InnerSingleton,
               StaticRegisterNativesUSlateTextureAtlasInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<USlateTextureAtlasInterface>,
               InternalVTableHelperCtorCaller<USlateTextureAtlasInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateTextureAtlasInterface.InnerSingleton;
}

// StaticRegisterNativesUSlateTextureAtlasInterface @ 1486f17b0

void __cdecl USlateTextureAtlasInterface::StaticRegisterNativesUSlateTextureAtlasInterface(void)

{
  return;
}

