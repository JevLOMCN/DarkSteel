// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSQS
// Functions: 10

// StaticClass @ 1446f06f0

UClass * __cdecl UShaderPlatformQualitySettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UShaderPlatformQualitySettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MaterialShaderQualitySettings",L"ShaderPlatformQualitySettings",
               &Z_Registration_Info_UClass_UShaderPlatformQualitySettings.InnerSingleton,
               StaticRegisterNativesUShaderPlatformQualitySettings,0x58,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UShaderPlatformQualitySettings>,
               InternalVTableHelperCtorCaller<UShaderPlatformQualitySettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UShaderPlatformQualitySettings.InnerSingleton;
}

// UShaderPlatformQualitySettings @ 1446f1280

UShaderPlatformQualitySettings * __thiscall
UShaderPlatformQualitySettings::UShaderPlatformQualitySettings
          (UShaderPlatformQualitySettings *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UShaderPlatformQualitySettings__6B_;
  this->QualityOverrides[0].bDiscardQualityDuringCook = false;
  this->QualityOverrides[0].bEnableOverride = false;
  this->QualityOverrides[0].bForceFullyRough = false;
  this->QualityOverrides[0].bForceNonMetal = false;
  *(undefined8 *)&this->QualityOverrides[0].bForceDisableLMDirectionality = 0x2000000;
  *(undefined8 *)&this->QualityOverrides[1].bForceDisableLMDirectionality = 0x2000000;
  *(undefined8 *)&this->QualityOverrides[2].bForceDisableLMDirectionality = 0x2000000;
  this->QualityOverrides[3].bForceDisableLMDirectionality = false;
  this->QualityOverrides[3].bForceDisablePreintegratedGF = false;
  this->QualityOverrides[3].bDisableMaterialNormalCalculation = false;
  this->QualityOverrides[3].MobileShadowQuality = PCF_3x3;
  (this->ConfigPlatformName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfigPlatformName).Data.ArrayNum = 0;
  (this->ConfigPlatformName).Data.ArrayMax = 0;
  return this;
}

// UShaderPlatformQualitySettings @ 1446f12e0

UShaderPlatformQualitySettings * __thiscall
UShaderPlatformQualitySettings::UShaderPlatformQualitySettings
          (UShaderPlatformQualitySettings *this,FObjectInitializer *param_1)

{
  code *pcVar1;
  bool bVar2;
  UShaderPlatformQualitySettings *pUVar3;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UShaderPlatformQualitySettings__6B_;
  this->QualityOverrides[0].bDiscardQualityDuringCook = false;
  this->QualityOverrides[0].bEnableOverride = false;
  this->QualityOverrides[0].bForceFullyRough = false;
  this->QualityOverrides[0].bForceNonMetal = false;
  *(undefined8 *)&this->QualityOverrides[0].bForceDisableLMDirectionality = 0x2000000;
  *(undefined8 *)&this->QualityOverrides[1].bForceDisableLMDirectionality = 0x2000000;
  *(undefined8 *)&this->QualityOverrides[2].bForceDisableLMDirectionality = 0x2000000;
  this->QualityOverrides[3].bForceDisableLMDirectionality = false;
  this->QualityOverrides[3].bForceDisablePreintegratedGF = false;
  this->QualityOverrides[3].bDisableMaterialNormalCalculation = false;
  this->QualityOverrides[3].MobileShadowQuality = PCF_3x3;
  (this->ConfigPlatformName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfigPlatformName).Data.ArrayNum = 0;
  (this->ConfigPlatformName).Data.ArrayMax = 0;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MaterialShaderQualitySettings\\Private\\MaterialShaderQualitySettings.cpp"
                       ,0x79,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UShaderPlatformQualitySettings *)(*pcVar1)();
      return pUVar3;
    }
  }
  this->QualityOverrides[1].bEnableOverride = true;
  return this;
}

// ~UShaderPlatformQualitySettings @ 1446f1460

void __thiscall
UShaderPlatformQualitySettings::~UShaderPlatformQualitySettings
          (UShaderPlatformQualitySettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UShaderPlatformQualitySettings__6B_;
  pFVar1 = (this->ConfigPlatformName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// AppendToHashState @ 1446f15a0

void __thiscall
UShaderPlatformQualitySettings::AppendToHashState
          (UShaderPlatformQualitySettings *this,Type param_1,FSHA1 *param_2)

{
  code *pcVar1;
  bool bVar2;
  FMaterialQualityOverrides *pFVar3;
  
  if (param_1 < (Num|High)) {
    if (param_1 < Num) {
      pFVar3 = this->QualityOverrides + param_1;
      goto LAB_1446f15db;
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("QualityLevel <= EMaterialQualityLevel::Num",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MaterialShaderQualitySettings\\Private\\MaterialShaderQualitySettings.cpp"
                       ,0x7f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = &DefaultQualityOverrides;
LAB_1446f15db:
  FSHA1::Update(param_2,&pFVar3->bDiscardQualityDuringCook,8);
  return;
}

// BuildHash @ 1446f1610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UShaderPlatformQualitySettings::BuildHash
          (UShaderPlatformQualitySettings *this,Type param_1,FSHAHash *param_2)

{
  code *pcVar1;
  bool bVar2;
  FMaterialQualityOverrides *pFVar3;
  undefined1 auStack_d8 [32];
  FSHA1 local_b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  FSHA1::FSHA1(&local_b8);
  if (param_1 < (Num|High)) {
    if (param_1 < Num) {
      pFVar3 = this->QualityOverrides + param_1;
      goto LAB_1446f1672;
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("QualityLevel <= EMaterialQualityLevel::Num",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MaterialShaderQualitySettings\\Private\\MaterialShaderQualitySettings.cpp"
                       ,0x7f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = &DefaultQualityOverrides;
LAB_1446f1672:
  FSHA1::Update(&local_b8,&pFVar3->bDiscardQualityDuringCook,8);
  FSHA1::Final(&local_b8);
  FSHA1::GetHash(&local_b8,param_2->Hash);
  FSHA1::~FSHA1(&local_b8);
  return;
}

// GetConfigOverridePlatform @ 1446f1910

wchar_t * __thiscall
UShaderPlatformQualitySettings::GetConfigOverridePlatform(UShaderPlatformQualitySettings *this)

{
  if ((this->ConfigPlatformName).Data.ArrayNum < 2) {
    return (wchar_t *)0x0;
  }
  return (wchar_t *)(this->ConfigPlatformName).Data.AllocatorInstance.Data;
}

// GetPrivateStaticClass @ 1446f1c70

UClass * __cdecl UShaderPlatformQualitySettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UShaderPlatformQualitySettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MaterialShaderQualitySettings",L"ShaderPlatformQualitySettings",
               &Z_Registration_Info_UClass_UShaderPlatformQualitySettings.InnerSingleton,
               StaticRegisterNativesUShaderPlatformQualitySettings,0x58,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UShaderPlatformQualitySettings>,
               InternalVTableHelperCtorCaller<UShaderPlatformQualitySettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UShaderPlatformQualitySettings.InnerSingleton;
}

// GetQualityOverrides @ 1446f1d20

FMaterialQualityOverrides * __thiscall
UShaderPlatformQualitySettings::GetQualityOverrides
          (UShaderPlatformQualitySettings *this,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  FMaterialQualityOverrides *pFVar3;
  
  if ((Num < param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("QualityLevel <= EMaterialQualityLevel::Num",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MaterialShaderQualitySettings\\Private\\MaterialShaderQualitySettings.cpp"
                         ,0x7f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMaterialQualityOverrides *)(*pcVar1)();
    return pFVar3;
  }
  if (Epic < param_1) {
    return &DefaultQualityOverrides;
  }
  return this->QualityOverrides + param_1;
}

// StaticRegisterNativesUShaderPlatformQualitySettings @ 1446f20e0

void __cdecl
UShaderPlatformQualitySettings::StaticRegisterNativesUShaderPlatformQualitySettings(void)

{
  return;
}

