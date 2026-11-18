// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1489976b0

UClass * __cdecl AVolumetricLightmapDensityVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AVolumetricLightmapDensityVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VolumetricLightmapDensityVolume",
               &Z_Registration_Info_UClass_AVolumetricLightmapDensityVolume.InnerSingleton,
               StaticRegisterNativesAVolumetricLightmapDensityVolume,0x300,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AVolumetricLightmapDensityVolume>,
               InternalVTableHelperCtorCaller<AVolumetricLightmapDensityVolume>,local_res8,
               AVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AVolumetricLightmapDensityVolume.InnerSingleton;
}

// AVolumetricLightmapDensityVolume @ 1489b3250

AVolumetricLightmapDensityVolume * __thiscall
AVolumetricLightmapDensityVolume::AVolumetricLightmapDensityVolume
          (AVolumetricLightmapDensityVolume *this,FVTableHelper *param_1)

{
  ABrush::ABrush((ABrush *)this,param_1);
  this->_padding_ = (longlong)&___7AVolumetricLightmapDensityVolume__6B_;
  *(undefined4 *)&this->AllowedMipLevelRange = 0x7fffffff;
  *(undefined4 *)&(this->AllowedMipLevelRange).field_0x4 = 0x80000000;
  return this;
}

// AVolumetricLightmapDensityVolume @ 1489b3290

AVolumetricLightmapDensityVolume * __thiscall
AVolumetricLightmapDensityVolume::AVolumetricLightmapDensityVolume
          (AVolumetricLightmapDensityVolume *this,FObjectInitializer *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  
  AVolume::AVolume((AVolume *)this,param_1);
  plVar2 = (longlong *)this->_padding_;
  this->_padding_ = (longlong)&___7AVolumetricLightmapDensityVolume__6B_;
  *(undefined4 *)&this->AllowedMipLevelRange = 0x7fffffff;
  *(undefined4 *)&(this->AllowedMipLevelRange).field_0x4 = 0x80000000;
  (**(code **)(*plVar2 + 0x788))(plVar2,UCollisionProfile::NoCollision_ProfileName,1);
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 | 1;
  this->AllowedMipLevelRange = (FInt32Interval)0x300000001;
  *(undefined2 *)((longlong)&this->_padding_ + 5) = 0x9bb9;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0x19;
  *(undefined1 *)((longlong)&this->_padding_ + 7) = 0xff;
  return this;
}

// ~AVolumetricLightmapDensityVolume @ 1489b9190

void __thiscall
AVolumetricLightmapDensityVolume::~AVolumetricLightmapDensityVolume
          (AVolumetricLightmapDensityVolume *this)

{
  this->_padding_ = (longlong)&___7AVolume__6B_;
  ABrush::~ABrush((ABrush *)this);
  return;
}

// GetPrivateStaticClass @ 1489eb660

UClass * __cdecl AVolumetricLightmapDensityVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AVolumetricLightmapDensityVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VolumetricLightmapDensityVolume",
               &Z_Registration_Info_UClass_AVolumetricLightmapDensityVolume.InnerSingleton,
               StaticRegisterNativesAVolumetricLightmapDensityVolume,0x300,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AVolumetricLightmapDensityVolume>,
               InternalVTableHelperCtorCaller<AVolumetricLightmapDensityVolume>,local_res8,
               AVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AVolumetricLightmapDensityVolume.InnerSingleton;
}

// StaticRegisterNativesAVolumetricLightmapDensityVolume @ 148a18740

void __cdecl
AVolumetricLightmapDensityVolume::StaticRegisterNativesAVolumetricLightmapDensityVolume(void)

{
  return;
}

