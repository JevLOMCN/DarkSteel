// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 6

// StaticClass @ 142459cd0

UClass * __cdecl UFontFaceInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFontFaceInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SlateCore",L"FontFaceInterface",
               &Z_Registration_Info_UClass_UFontFaceInterface.InnerSingleton,
               StaticRegisterNativesUFontFaceInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UFontFaceInterface>,
               InternalVTableHelperCtorCaller<UFontFaceInterface>,local_res8,UInterface::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFontFaceInterface.InnerSingleton;
}

// UFontFaceInterface @ 142477a90

UFontFaceInterface * __thiscall
UFontFaceInterface::UFontFaceInterface(UFontFaceInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UFontFaceInterface__6B_;
  return this;
}

// UFontFaceInterface @ 142477ac0

UFontFaceInterface * __thiscall
UFontFaceInterface::UFontFaceInterface(UFontFaceInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UFontFaceInterface__6B_;
  return this;
}

// ~UFontFaceInterface @ 142479eb0

void __thiscall UFontFaceInterface::~UFontFaceInterface(UFontFaceInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 142492b80

UClass * __cdecl UFontFaceInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFontFaceInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SlateCore",L"FontFaceInterface",
               &Z_Registration_Info_UClass_UFontFaceInterface.InnerSingleton,
               StaticRegisterNativesUFontFaceInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UFontFaceInterface>,
               InternalVTableHelperCtorCaller<UFontFaceInterface>,local_res8,UInterface::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFontFaceInterface.InnerSingleton;
}

// StaticRegisterNativesUFontFaceInterface @ 1424a8520

void __cdecl UFontFaceInterface::StaticRegisterNativesUFontFaceInterface(void)

{
  return;
}

