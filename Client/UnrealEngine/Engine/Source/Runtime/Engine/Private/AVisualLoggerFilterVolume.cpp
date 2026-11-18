// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148996fb0

UClass * __cdecl AVisualLoggerFilterVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AVisualLoggerFilterVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VisualLoggerFilterVolume",
               &Z_Registration_Info_UClass_AVisualLoggerFilterVolume.InnerSingleton,
               StaticRegisterNativesAVisualLoggerFilterVolume,0x2f8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AVisualLoggerFilterVolume>,
               InternalVTableHelperCtorCaller<AVisualLoggerFilterVolume>,local_res8,
               AVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AVisualLoggerFilterVolume.InnerSingleton;
}

// AVisualLoggerFilterVolume @ 1489b30d0

AVisualLoggerFilterVolume * __thiscall
AVisualLoggerFilterVolume::AVisualLoggerFilterVolume
          (AVisualLoggerFilterVolume *this,FVTableHelper *param_1)

{
  ABrush::ABrush((ABrush *)this,param_1);
  *(undefined ***)this = &___7AVisualLoggerFilterVolume__6B_;
  return this;
}

// AVisualLoggerFilterVolume @ 1489b3100

AVisualLoggerFilterVolume * __thiscall
AVisualLoggerFilterVolume::AVisualLoggerFilterVolume
          (AVisualLoggerFilterVolume *this,FObjectInitializer *param_1)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  AVolume::AVolume((AVolume *)this,pFVar1);
  this->field_0x32 = this->field_0x32 & 0xf9;
  this->field_0x5b = this->field_0x5b | 2;
  *(undefined ***)this = &___7AVisualLoggerFilterVolume__6B_;
  return this;
}

// ~AVisualLoggerFilterVolume @ 1489b9150

void __thiscall
AVisualLoggerFilterVolume::~AVisualLoggerFilterVolume(AVisualLoggerFilterVolume *this)

{
  *(undefined ***)this = &___7AVolume__6B_;
  ABrush::~ABrush((ABrush *)this);
  return;
}

// GetPrivateStaticClass @ 1489eb4e0

UClass * __cdecl AVisualLoggerFilterVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AVisualLoggerFilterVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VisualLoggerFilterVolume",
               &Z_Registration_Info_UClass_AVisualLoggerFilterVolume.InnerSingleton,
               StaticRegisterNativesAVisualLoggerFilterVolume,0x2f8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AVisualLoggerFilterVolume>,
               InternalVTableHelperCtorCaller<AVisualLoggerFilterVolume>,local_res8,
               AVolume::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AVisualLoggerFilterVolume.InnerSingleton;
}

// StaticRegisterNativesAVisualLoggerFilterVolume @ 148a18720

void __cdecl AVisualLoggerFilterVolume::StaticRegisterNativesAVisualLoggerFilterVolume(void)

{
  return;
}

