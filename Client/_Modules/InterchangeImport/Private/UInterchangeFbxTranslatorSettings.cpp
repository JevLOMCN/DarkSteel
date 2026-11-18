// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 7

// StaticClass @ 14e673ff0

UClass * __cdecl UInterchangeFbxTranslatorSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeFbxTranslatorSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeFbxTranslatorSettings",
               &Z_Registration_Info_UClass_UInterchangeFbxTranslatorSettings.InnerSingleton,
               StaticRegisterNativesUInterchangeFbxTranslatorSettings,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeFbxTranslatorSettings>,
               InternalVTableHelperCtorCaller<UInterchangeFbxTranslatorSettings>,local_res8,
               UInterchangeTranslatorSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeFbxTranslatorSettings.InnerSingleton;
}

// UInterchangeFbxTranslatorSettings @ 14e690e60

UInterchangeFbxTranslatorSettings * __thiscall
UInterchangeFbxTranslatorSettings::UInterchangeFbxTranslatorSettings
          (UInterchangeFbxTranslatorSettings *this,FVTableHelper *param_1)

{
  UInterchangeTranslatorSettings::UInterchangeTranslatorSettings
            ((UInterchangeTranslatorSettings *)this,param_1);
  this->CoordinateSystemPolicy = MatchUpForwardAxes;
  this->bConvertScene = true;
  this->bForceFrontXAxis = false;
  this->bConvertSceneUnit = true;
  this->_padding_ = (longlong)&___7UInterchangeFbxTranslatorSettings__6B_;
  this->bKeepFbxNamespace = false;
  this->bUseUfbxParser = false;
  this->bDisplayUfbxParser = true;
  return this;
}

// UInterchangeFbxTranslatorSettings @ 14e690ea0

UInterchangeFbxTranslatorSettings * __thiscall
UInterchangeFbxTranslatorSettings::UInterchangeFbxTranslatorSettings
          (UInterchangeFbxTranslatorSettings *this,FObjectInitializer *param_1)

{
  UInterchangeTranslatorSettings::UInterchangeTranslatorSettings
            ((UInterchangeTranslatorSettings *)this,param_1);
  this->CoordinateSystemPolicy = MatchUpForwardAxes;
  this->bConvertScene = true;
  this->bForceFrontXAxis = false;
  this->bConvertSceneUnit = true;
  this->_padding_ = (longlong)&___7UInterchangeFbxTranslatorSettings__6B_;
  this->bKeepFbxNamespace = false;
  this->bUseUfbxParser = false;
  this->bDisplayUfbxParser = true;
  return this;
}

// ~UInterchangeFbxTranslatorSettings @ 14e692020

void __thiscall
UInterchangeFbxTranslatorSettings::~UInterchangeFbxTranslatorSettings
          (UInterchangeFbxTranslatorSettings *this)

{
  this->_padding_ = (longlong)&___7UInterchangeFbxTranslatorSettings__6B_;
  UInterchangeTranslatorSettings::~UInterchangeTranslatorSettings
            ((UInterchangeTranslatorSettings *)this);
  return;
}

// GetPrivateStaticClass @ 14e6a06c0

UClass * __cdecl UInterchangeFbxTranslatorSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeFbxTranslatorSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeFbxTranslatorSettings",
               &Z_Registration_Info_UClass_UInterchangeFbxTranslatorSettings.InnerSingleton,
               StaticRegisterNativesUInterchangeFbxTranslatorSettings,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeFbxTranslatorSettings>,
               InternalVTableHelperCtorCaller<UInterchangeFbxTranslatorSettings>,local_res8,
               UInterchangeTranslatorSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeFbxTranslatorSettings.InnerSingleton;
}

// PostDuplicate @ 14e6a4110

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UInterchangeFbxTranslatorSettings::PostDuplicate
          (UInterchangeFbxTranslatorSettings *this,bool param_1)

{
  Type TVar1;
  
  TVar1 = AxisDisplayInfo::GetAxisDisplayCoordinateSystem();
  this->bUsingLUFCoordinateSystem = TVar1 == LeftUpForward;
  if (this->bConvertScene != false) {
    this->CoordinateSystemPolicy = this->bForceFrontXAxis == false;
    this->bDisplayUfbxParser = TVar1 != LeftUpForward;
    return;
  }
  this->CoordinateSystemPolicy = KeepXYZAxes;
  this->bDisplayUfbxParser = TVar1 != LeftUpForward;
  return;
}

// StaticRegisterNativesUInterchangeFbxTranslatorSettings @ 14e6a81e0

void __cdecl
UInterchangeFbxTranslatorSettings::StaticRegisterNativesUInterchangeFbxTranslatorSettings(void)

{
  return;
}

