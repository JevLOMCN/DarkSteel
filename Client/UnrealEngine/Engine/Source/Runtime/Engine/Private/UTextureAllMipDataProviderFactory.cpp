// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// UTextureAllMipDataProviderFactory @ 14880a180

UTextureAllMipDataProviderFactory * __thiscall
UTextureAllMipDataProviderFactory::UTextureAllMipDataProviderFactory
          (UTextureAllMipDataProviderFactory *this,FVTableHelper *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  *(undefined ***)this = &___7UTextureAllMipDataProviderFactory__6B_;
  return this;
}

// UTextureAllMipDataProviderFactory @ 14880a1b0

UTextureAllMipDataProviderFactory * __thiscall
UTextureAllMipDataProviderFactory::UTextureAllMipDataProviderFactory
          (UTextureAllMipDataProviderFactory *this,FObjectInitializer *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  *(undefined ***)this = &___7UTextureAllMipDataProviderFactory__6B_;
  return this;
}

// ~UTextureAllMipDataProviderFactory @ 14880d490

void __thiscall
UTextureAllMipDataProviderFactory::~UTextureAllMipDataProviderFactory
          (UTextureAllMipDataProviderFactory *this)

{
  *(undefined ***)this = &___7UTextureMipDataProviderFactory__6B_;
  UAssetUserData::~UAssetUserData((UAssetUserData *)this);
  return;
}

// GetInitialMipData @ 14883e360

bool __thiscall
UTextureAllMipDataProviderFactory::GetInitialMipData
          (UTextureAllMipDataProviderFactory *this,int param_1,TArrayView<void_*,int> *param_2,
          TArrayView<__int64,int> *param_3,TStringView<wchar_t> *param_4)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\TextureAllMipDataProviderFactory.h"
             ,0x30,L"Pure virtual not implemented (%s)");
  return false;
}

// GetPrivateStaticClass @ 148840c00

UClass * __cdecl UTextureAllMipDataProviderFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextureAllMipDataProviderFactory.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureAllMipDataProviderFactory",
               &Z_Registration_Info_UClass_UTextureAllMipDataProviderFactory.InnerSingleton,
               StaticRegisterNativesUTextureAllMipDataProviderFactory,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTextureAllMipDataProviderFactory>,
               InternalVTableHelperCtorCaller<UTextureAllMipDataProviderFactory>,local_res8,
               UTextureMipDataProviderFactory::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureAllMipDataProviderFactory.InnerSingleton;
}

// GetResourcePostInitState @ 148841b20

FStreamableRenderResourceState __thiscall
UTextureAllMipDataProviderFactory::GetResourcePostInitState
          (UTextureAllMipDataProviderFactory *this,UTexture *param_1,bool param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\TextureAllMipDataProviderFactory.h"
             ,0x36,L"Pure virtual not implemented (%s)");
  param_1->_padding_ = 0;
  return (FStreamableRenderResourceState)(FStreamableRenderResourceState_u_0)param_1;
}

// StaticRegisterNativesUTextureAllMipDataProviderFactory @ 14885ace0

void __cdecl
UTextureAllMipDataProviderFactory::StaticRegisterNativesUTextureAllMipDataProviderFactory(void)

{
  return;
}

