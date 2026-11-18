// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 6

// StaticClass @ 14e675450

UClass * __cdecl UInterchangeVolumeTranslatorSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeVolumeTranslatorSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeVolumeTranslatorSettings",
               &Z_Registration_Info_UClass_UInterchangeVolumeTranslatorSettings.InnerSingleton,
               StaticRegisterNativesUInterchangeVolumeTranslatorSettings,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeVolumeTranslatorSettings>,
               InternalVTableHelperCtorCaller<UInterchangeVolumeTranslatorSettings>,local_res8,
               UInterchangeTranslatorSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeVolumeTranslatorSettings.InnerSingleton;
}

// UInterchangeVolumeTranslatorSettings @ 14e691260

UInterchangeVolumeTranslatorSettings * __thiscall
UInterchangeVolumeTranslatorSettings::UInterchangeVolumeTranslatorSettings
          (UInterchangeVolumeTranslatorSettings *this,FVTableHelper *param_1)

{
  UInterchangeTranslatorSettings::UInterchangeTranslatorSettings
            ((UInterchangeTranslatorSettings *)this,param_1);
  this->bTranslateAdjacentNumberedFiles = true;
  this->_padding_ = (longlong)&___7UInterchangeVolumeTranslatorSettings__6B_;
  (this->AnimationID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationID).Data.ArrayNum = 0;
  (this->AnimationID).Data.ArrayMax = 0;
  return this;
}

// UInterchangeVolumeTranslatorSettings @ 14e6912a0

UInterchangeVolumeTranslatorSettings * __thiscall
UInterchangeVolumeTranslatorSettings::UInterchangeVolumeTranslatorSettings
          (UInterchangeVolumeTranslatorSettings *this,FObjectInitializer *param_1)

{
  UInterchangeTranslatorSettings::UInterchangeTranslatorSettings
            ((UInterchangeTranslatorSettings *)this,param_1);
  this->bTranslateAdjacentNumberedFiles = true;
  this->_padding_ = (longlong)&___7UInterchangeVolumeTranslatorSettings__6B_;
  (this->AnimationID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationID).Data.ArrayNum = 0;
  (this->AnimationID).Data.ArrayMax = 0;
  return this;
}

// ~UInterchangeVolumeTranslatorSettings @ 14e692110

void __thiscall
UInterchangeVolumeTranslatorSettings::~UInterchangeVolumeTranslatorSettings
          (UInterchangeVolumeTranslatorSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeVolumeTranslatorSettings__6B_;
  pFVar1 = (this->AnimationID).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangeTranslatorSettings::~UInterchangeTranslatorSettings
            ((UInterchangeTranslatorSettings *)this);
  return;
}

// GetPrivateStaticClass @ 14e6a0e40

UClass * __cdecl UInterchangeVolumeTranslatorSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeVolumeTranslatorSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeImport",L"InterchangeVolumeTranslatorSettings",
               &Z_Registration_Info_UClass_UInterchangeVolumeTranslatorSettings.InnerSingleton,
               StaticRegisterNativesUInterchangeVolumeTranslatorSettings,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeVolumeTranslatorSettings>,
               InternalVTableHelperCtorCaller<UInterchangeVolumeTranslatorSettings>,local_res8,
               UInterchangeTranslatorSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeVolumeTranslatorSettings.InnerSingleton;
}

// StaticRegisterNativesUInterchangeVolumeTranslatorSettings @ 14e6a8280

void __cdecl
UInterchangeVolumeTranslatorSettings::StaticRegisterNativesUInterchangeVolumeTranslatorSettings
          (void)

{
  return;
}

