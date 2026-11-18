// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 6

// StaticClass @ 142459fc0

UClass * __cdecl UFontProviderInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFontProviderInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SlateCore",L"FontProviderInterface",
               &Z_Registration_Info_UClass_UFontProviderInterface.InnerSingleton,
               StaticRegisterNativesUFontProviderInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UFontProviderInterface>,
               InternalVTableHelperCtorCaller<UFontProviderInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFontProviderInterface.InnerSingleton;
}

// UFontProviderInterface @ 142477af0

UFontProviderInterface * __thiscall
UFontProviderInterface::UFontProviderInterface(UFontProviderInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UFontProviderInterface__6B_;
  return this;
}

// UFontProviderInterface @ 142477b20

UFontProviderInterface * __thiscall
UFontProviderInterface::UFontProviderInterface
          (UFontProviderInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UFontProviderInterface__6B_;
  return this;
}

// ~UFontProviderInterface @ 142479ec0

void __thiscall UFontProviderInterface::~UFontProviderInterface(UFontProviderInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 142492c40

UClass * __cdecl UFontProviderInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFontProviderInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SlateCore",L"FontProviderInterface",
               &Z_Registration_Info_UClass_UFontProviderInterface.InnerSingleton,
               StaticRegisterNativesUFontProviderInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UFontProviderInterface>,
               InternalVTableHelperCtorCaller<UFontProviderInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFontProviderInterface.InnerSingleton;
}

// StaticRegisterNativesUFontProviderInterface @ 1424a8530

void __cdecl UFontProviderInterface::StaticRegisterNativesUFontProviderInterface(void)

{
  return;
}

