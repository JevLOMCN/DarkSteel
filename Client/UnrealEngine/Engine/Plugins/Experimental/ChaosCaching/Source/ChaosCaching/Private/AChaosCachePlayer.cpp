// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 6

// StaticClass @ 14dadb770

UClass * __cdecl AChaosCachePlayer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AChaosCachePlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosCaching",L"ChaosCachePlayer",
               &Z_Registration_Info_UClass_AChaosCachePlayer.InnerSingleton,
               StaticRegisterNativesAChaosCachePlayer,0x378,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AChaosCachePlayer>,
               InternalVTableHelperCtorCaller<AChaosCachePlayer>,local_res8,
               AChaosCacheManager::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AChaosCachePlayer.InnerSingleton;
}

// AChaosCachePlayer @ 14dae62c0

AChaosCachePlayer * __thiscall
AChaosCachePlayer::AChaosCachePlayer(AChaosCachePlayer *this,FVTableHelper *param_1)

{
  AChaosCacheManager::AChaosCacheManager((AChaosCacheManager *)this,param_1);
  *(undefined ***)this = &___7AChaosCachePlayer__6B_;
  return this;
}

// AChaosCachePlayer @ 14dae62f0

AChaosCachePlayer * __thiscall
AChaosCachePlayer::AChaosCachePlayer(AChaosCachePlayer *this,FObjectInitializer *param_1)

{
  AChaosCacheManager::AChaosCacheManager((AChaosCacheManager *)this,param_1);
  this->field_0x2d1 = 0;
  *(undefined ***)this = &___7AChaosCachePlayer__6B_;
  return this;
}

// ~AChaosCachePlayer @ 14dae8760

void __thiscall AChaosCachePlayer::~AChaosCachePlayer(AChaosCachePlayer *this)

{
  *(undefined ***)this = &___7AChaosCachePlayer__6B_;
  AChaosCacheManager::~AChaosCacheManager((AChaosCacheManager *)this);
  return;
}

// GetPrivateStaticClass @ 14daf83c0

UClass * __cdecl AChaosCachePlayer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AChaosCachePlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosCaching",L"ChaosCachePlayer",
               &Z_Registration_Info_UClass_AChaosCachePlayer.InnerSingleton,
               StaticRegisterNativesAChaosCachePlayer,0x378,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AChaosCachePlayer>,
               InternalVTableHelperCtorCaller<AChaosCachePlayer>,local_res8,
               AChaosCacheManager::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AChaosCachePlayer.InnerSingleton;
}

// StaticRegisterNativesAChaosCachePlayer @ 14db05370

void __cdecl AChaosCachePlayer::StaticRegisterNativesAChaosCachePlayer(void)

{
  return;
}

