// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaAssets
// Functions: 6

// StaticClass @ 146c179e0

UClass * __cdecl UMediaPlayerProxyInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaPlayerProxyInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"MediaPlayerProxyInterface",
               &Z_Registration_Info_UClass_UMediaPlayerProxyInterface.InnerSingleton,
               StaticRegisterNativesUMediaPlayerProxyInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMediaPlayerProxyInterface>,
               InternalVTableHelperCtorCaller<UMediaPlayerProxyInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaPlayerProxyInterface.InnerSingleton;
}

// UMediaPlayerProxyInterface @ 146c1d620

UMediaPlayerProxyInterface * __thiscall
UMediaPlayerProxyInterface::UMediaPlayerProxyInterface
          (UMediaPlayerProxyInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMediaPlayerProxyInterface__6B_;
  return this;
}

// UMediaPlayerProxyInterface @ 146c1d650

UMediaPlayerProxyInterface * __thiscall
UMediaPlayerProxyInterface::UMediaPlayerProxyInterface
          (UMediaPlayerProxyInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMediaPlayerProxyInterface__6B_;
  return this;
}

// ~UMediaPlayerProxyInterface @ 146c1ea50

void __thiscall
UMediaPlayerProxyInterface::~UMediaPlayerProxyInterface(UMediaPlayerProxyInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 146c2cb20

UClass * __cdecl UMediaPlayerProxyInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMediaPlayerProxyInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaAssets",L"MediaPlayerProxyInterface",
               &Z_Registration_Info_UClass_UMediaPlayerProxyInterface.InnerSingleton,
               StaticRegisterNativesUMediaPlayerProxyInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMediaPlayerProxyInterface>,
               InternalVTableHelperCtorCaller<UMediaPlayerProxyInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMediaPlayerProxyInterface.InnerSingleton;
}

// StaticRegisterNativesUMediaPlayerProxyInterface @ 146c37f00

void __cdecl UMediaPlayerProxyInterface::StaticRegisterNativesUMediaPlayerProxyInterface(void)

{
  return;
}

