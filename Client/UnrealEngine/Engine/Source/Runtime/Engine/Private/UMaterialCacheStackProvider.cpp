// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1472860f0

UClass * __cdecl UMaterialCacheStackProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialCacheStackProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialCacheStackProvider",
               &Z_Registration_Info_UClass_UMaterialCacheStackProvider.InnerSingleton,
               StaticRegisterNativesUMaterialCacheStackProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMaterialCacheStackProvider>,
               InternalVTableHelperCtorCaller<UMaterialCacheStackProvider>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialCacheStackProvider.InnerSingleton;
}

// UMaterialCacheStackProvider @ 14728bd20

UMaterialCacheStackProvider * __thiscall
UMaterialCacheStackProvider::UMaterialCacheStackProvider
          (UMaterialCacheStackProvider *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMaterialCacheStackProvider__6B_;
  return this;
}

// UMaterialCacheStackProvider @ 14728bd50

UMaterialCacheStackProvider * __thiscall
UMaterialCacheStackProvider::UMaterialCacheStackProvider
          (UMaterialCacheStackProvider *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMaterialCacheStackProvider__6B_;
  return this;
}

// ~UMaterialCacheStackProvider @ 14728d500

void __thiscall
UMaterialCacheStackProvider::~UMaterialCacheStackProvider(UMaterialCacheStackProvider *this)

{
  *(undefined ***)this = &___7UMaterialCacheStackProvider__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CreateRenderProxy @ 14728ea10

FMaterialCacheStackProviderRenderProxy * __thiscall
UMaterialCacheStackProvider::CreateRenderProxy(UMaterialCacheStackProvider *this)

{
  code *pcVar1;
  bool bVar2;
  FMaterialCacheStackProviderRenderProxy *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\MaterialCache\\MaterialCacheStackProvider.h"
                     ,0x29,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMaterialCacheStackProviderRenderProxy *)(*pcVar1)();
    return pFVar3;
  }
  return (FMaterialCacheStackProviderRenderProxy *)0x0;
}

// GetPrivateStaticClass @ 14728fd30

UClass * __cdecl UMaterialCacheStackProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialCacheStackProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialCacheStackProvider",
               &Z_Registration_Info_UClass_UMaterialCacheStackProvider.InnerSingleton,
               StaticRegisterNativesUMaterialCacheStackProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMaterialCacheStackProvider>,
               InternalVTableHelperCtorCaller<UMaterialCacheStackProvider>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialCacheStackProvider.InnerSingleton;
}

// StaticRegisterNativesUMaterialCacheStackProvider @ 147291350

void __cdecl UMaterialCacheStackProvider::StaticRegisterNativesUMaterialCacheStackProvider(void)

{
  return;
}

