// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147320370

UClass * __cdecl UShadowMapTexture2D::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UShadowMapTexture2D.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ShadowMapTexture2D",
               &Z_Registration_Info_UClass_UShadowMapTexture2D.InnerSingleton,
               StaticRegisterNativesUShadowMapTexture2D,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UShadowMapTexture2D>,
               InternalVTableHelperCtorCaller<UShadowMapTexture2D>,local_res8,
               UTexture2D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UShadowMapTexture2D.InnerSingleton;
}

// UShadowMapTexture2D @ 147324ec0

UShadowMapTexture2D * __thiscall
UShadowMapTexture2D::UShadowMapTexture2D(UShadowMapTexture2D *this,FVTableHelper *param_1)

{
  UTexture2D::UTexture2D((UTexture2D *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  return this;
}

// ~UShadowMapTexture2D @ 147325520

void __thiscall UShadowMapTexture2D::~UShadowMapTexture2D(UShadowMapTexture2D *this)

{
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  UTexture2D::~UTexture2D((UTexture2D *)this);
  return;
}

// GetPrivateStaticClass @ 1473278c0

UClass * __cdecl UShadowMapTexture2D::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UShadowMapTexture2D.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ShadowMapTexture2D",
               &Z_Registration_Info_UClass_UShadowMapTexture2D.InnerSingleton,
               StaticRegisterNativesUShadowMapTexture2D,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UShadowMapTexture2D>,
               InternalVTableHelperCtorCaller<UShadowMapTexture2D>,local_res8,
               UTexture2D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UShadowMapTexture2D.InnerSingleton;
}

// StaticRegisterNativesUShadowMapTexture2D @ 147328380

void __cdecl UShadowMapTexture2D::StaticRegisterNativesUShadowMapTexture2D(void)

{
  return;
}

// UShadowMapTexture2D @ 1485a5680

UShadowMapTexture2D * __thiscall
UShadowMapTexture2D::UShadowMapTexture2D(UShadowMapTexture2D *this,FObjectInitializer *param_1)

{
  UTexture2D::UTexture2D((UTexture2D *)this,param_1);
  *(undefined1 *)((longlong)&this->_padding_ + 7) = 0x16;
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  return this;
}

