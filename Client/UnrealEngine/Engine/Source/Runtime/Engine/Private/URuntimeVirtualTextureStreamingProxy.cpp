// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 14899bb00

UClass * __cdecl URuntimeVirtualTextureStreamingProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URuntimeVirtualTextureStreamingProxy.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RuntimeVirtualTextureStreamingProxy",
               &Z_Registration_Info_UClass_URuntimeVirtualTextureStreamingProxy.InnerSingleton,
               StaticRegisterNativesURuntimeVirtualTextureStreamingProxy,0x170,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URuntimeVirtualTextureStreamingProxy>,
               InternalVTableHelperCtorCaller<URuntimeVirtualTextureStreamingProxy>,local_res8,
               UTexture2D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URuntimeVirtualTextureStreamingProxy.InnerSingleton;
}

// URuntimeVirtualTextureStreamingProxy @ 1489b6d10

URuntimeVirtualTextureStreamingProxy * __thiscall
URuntimeVirtualTextureStreamingProxy::URuntimeVirtualTextureStreamingProxy
          (URuntimeVirtualTextureStreamingProxy *this,FVTableHelper *param_1)

{
  UTexture2D::UTexture2D((UTexture2D *)this,param_1);
  *(undefined ***)this = &_vftable__for__UStreamableRenderAsset__;
  *(undefined ***)&this->field_0xe0 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0xe8 = &_vftable__for__IInterface_AsyncCompilation__;
  return this;
}

// URuntimeVirtualTextureStreamingProxy @ 1489b6d60

URuntimeVirtualTextureStreamingProxy * __thiscall
URuntimeVirtualTextureStreamingProxy::URuntimeVirtualTextureStreamingProxy
          (URuntimeVirtualTextureStreamingProxy *this,FObjectInitializer *param_1)

{
  UTexture2D::UTexture2D((UTexture2D *)this,param_1);
  *(undefined ***)this = &_vftable__for__UStreamableRenderAsset__;
  *(undefined ***)&this->field_0xe0 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0xe8 = &_vftable__for__IInterface_AsyncCompilation__;
  return this;
}

// ~URuntimeVirtualTextureStreamingProxy @ 1489ba860

void __thiscall
URuntimeVirtualTextureStreamingProxy::~URuntimeVirtualTextureStreamingProxy
          (URuntimeVirtualTextureStreamingProxy *this)

{
  *(undefined ***)this = &_vftable__for__UStreamableRenderAsset__;
  *(undefined ***)&this->field_0xe0 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0xe8 = &_vftable__for__IInterface_AsyncCompilation__;
  UTexture2D::~UTexture2D((UTexture2D *)this);
  return;
}

// GetPrivateStaticClass @ 1489ebad0

UClass * __cdecl URuntimeVirtualTextureStreamingProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URuntimeVirtualTextureStreamingProxy.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"RuntimeVirtualTextureStreamingProxy",
               &Z_Registration_Info_UClass_URuntimeVirtualTextureStreamingProxy.InnerSingleton,
               StaticRegisterNativesURuntimeVirtualTextureStreamingProxy,0x170,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URuntimeVirtualTextureStreamingProxy>,
               InternalVTableHelperCtorCaller<URuntimeVirtualTextureStreamingProxy>,local_res8,
               UTexture2D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URuntimeVirtualTextureStreamingProxy.InnerSingleton;
}

// StaticRegisterNativesURuntimeVirtualTextureStreamingProxy @ 148a187d0

void __cdecl
URuntimeVirtualTextureStreamingProxy::StaticRegisterNativesURuntimeVirtualTextureStreamingProxy
          (void)

{
  return;
}

