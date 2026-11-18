// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// StaticClass @ 14d5e2470

UClass * __cdecl UGameplayCamerasSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayCamerasSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"GameplayCamerasSettings",
               &Z_Registration_Info_UClass_UGameplayCamerasSettings.InnerSingleton,
               StaticRegisterNativesUGameplayCamerasSettings,0x68,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"GameplayCameras",
               InternalConstructor<UGameplayCamerasSettings>,
               InternalVTableHelperCtorCaller<UGameplayCamerasSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayCamerasSettings.InnerSingleton;
}

// UGameplayCamerasSettings @ 14d5fe830

UGameplayCamerasSettings * __thiscall
UGameplayCamerasSettings::UGameplayCamerasSettings
          (UGameplayCamerasSettings *this,FVTableHelper *param_1)

{
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->bAutoBuildInPIE = true;
  this->_padding_ = (longlong)&___7UGameplayCamerasSettings__6B_;
  this->DefaultIKAimingAngleTolerance = 0.1;
  this->DefaultIKAimingDistanceTolerance = 1.0;
  this->DefaultIKAimingMinDistance = 100.0;
  this->DefaultViewRotationMode = None;
  this->CombinedCameraRigNumThreshold = 10;
  this->DefaultIKAimingMaxIterations = '\x03';
  return this;
}

// UGameplayCamerasSettings @ 14d5fe8a0

UGameplayCamerasSettings * __thiscall
UGameplayCamerasSettings::UGameplayCamerasSettings
          (UGameplayCamerasSettings *this,FObjectInitializer *param_1)

{
  FName local_res8 [4];
  
  UDeveloperSettings::UDeveloperSettings((UDeveloperSettings *)this,param_1);
  this->bAutoBuildInPIE = true;
  this->_padding_ = (longlong)&___7UGameplayCamerasSettings__6B_;
  this->DefaultViewRotationMode = None;
  this->DefaultIKAimingAngleTolerance = 0.1;
  this->CombinedCameraRigNumThreshold = 10;
  this->DefaultIKAimingDistanceTolerance = 1.0;
  this->DefaultIKAimingMinDistance = 100.0;
  this->DefaultIKAimingMaxIterations = '\x03';
  ::FName::FName(local_res8,L"Plugins");
  this->_padding_ = (longlong)local_res8[0];
  return this;
}

// ~UGameplayCamerasSettings @ 14d600c80

void __thiscall UGameplayCamerasSettings::~UGameplayCamerasSettings(UGameplayCamerasSettings *this)

{
  this->_padding_ = (longlong)&___7UGameplayCamerasSettings__6B_;
  UDeveloperSettings::~UDeveloperSettings((UDeveloperSettings *)this);
  return;
}

// GetPrivateStaticClass @ 14d61c960

UClass * __cdecl UGameplayCamerasSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGameplayCamerasSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"GameplayCamerasSettings",
               &Z_Registration_Info_UClass_UGameplayCamerasSettings.InnerSingleton,
               StaticRegisterNativesUGameplayCamerasSettings,0x68,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"GameplayCameras",
               InternalConstructor<UGameplayCamerasSettings>,
               InternalVTableHelperCtorCaller<UGameplayCamerasSettings>,local_res8,
               UDeveloperSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGameplayCamerasSettings.InnerSingleton;
}

// StaticRegisterNativesUGameplayCamerasSettings @ 14d639320

void __cdecl UGameplayCamerasSettings::StaticRegisterNativesUGameplayCamerasSettings(void)

{
  return;
}

