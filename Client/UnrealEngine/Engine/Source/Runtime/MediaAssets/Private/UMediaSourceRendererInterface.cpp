// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 6

// StaticClass @ 146c124a0

UClass * __cdecl UMediaSourceRendererInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaSourceRendererInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"MediaSourceRendererInterface",
               &Z_Registration_Info_UClass_UMediaSourceRendererInterface.InnerSingleton,
               StaticRegisterNativesUMediaSourceRendererInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMediaSourceRendererInterface>,
               InternalVTableHelperCtorCaller<UMediaSourceRendererInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaSourceRendererInterface.InnerSingleton;
}

// UMediaSourceRendererInterface @ 146c1da00

UMediaSourceRendererInterface * __thiscall
UMediaSourceRendererInterface::UMediaSourceRendererInterface
          (UMediaSourceRendererInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMediaSourceRendererInterface__6B_;
  return this;
}

// UMediaSourceRendererInterface @ 146c1da30

UMediaSourceRendererInterface * __thiscall
UMediaSourceRendererInterface::UMediaSourceRendererInterface
          (UMediaSourceRendererInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMediaSourceRendererInterface__6B_;
  return this;
}

// ~UMediaSourceRendererInterface @ 146c1ed00

void __thiscall
UMediaSourceRendererInterface::~UMediaSourceRendererInterface(UMediaSourceRendererInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 146c2ce00

UClass * __cdecl UMediaSourceRendererInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaSourceRendererInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"MediaSourceRendererInterface",
               &Z_Registration_Info_UClass_UMediaSourceRendererInterface.InnerSingleton,
               StaticRegisterNativesUMediaSourceRendererInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMediaSourceRendererInterface>,
               InternalVTableHelperCtorCaller<UMediaSourceRendererInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaSourceRendererInterface.InnerSingleton;
}

// StaticRegisterNativesUMediaSourceRendererInterface @ 146c37fd0

void __cdecl UMediaSourceRendererInterface::StaticRegisterNativesUMediaSourceRendererInterface(void)

{
  return;
}

