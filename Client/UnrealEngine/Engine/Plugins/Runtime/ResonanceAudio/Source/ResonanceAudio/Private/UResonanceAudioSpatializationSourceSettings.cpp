// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 10

// StaticClass @ 14f0415d0

UClass * __cdecl UResonanceAudioSpatializationSourceSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UResonanceAudioSpatializationSourceSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ResonanceAudio",L"ResonanceAudioSpatializationSourceSettings",
               &Z_Registration_Info_UClass_UResonanceAudioSpatializationSourceSettings.
                InnerSingleton,StaticRegisterNativesUResonanceAudioSpatializationSourceSettings,0x50
               ,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UResonanceAudioSpatializationSourceSettings>,
               InternalVTableHelperCtorCaller<UResonanceAudioSpatializationSourceSettings>,
               local_res8,USpatializationPluginSourceSettingsBase::StaticClass,UObject::StaticClass)
    ;
  }
  return Z_Registration_Info_UClass_UResonanceAudioSpatializationSourceSettings.InnerSingleton;
}

// UResonanceAudioSpatializationSourceSettings @ 14f0444c0

UResonanceAudioSpatializationSourceSettings * __thiscall
UResonanceAudioSpatializationSourceSettings::UResonanceAudioSpatializationSourceSettings
          (UResonanceAudioSpatializationSourceSettings *this,FVTableHelper *param_1)

{
  USpatializationPluginSourceSettingsBase::USpatializationPluginSourceSettingsBase
            ((USpatializationPluginSourceSettingsBase *)this,param_1);
  this->_padding_ = (longlong)&___7UResonanceAudioSpatializationSourceSettings__6B_;
  return this;
}

// UResonanceAudioSpatializationSourceSettings @ 14f0444f0

UResonanceAudioSpatializationSourceSettings * __thiscall
UResonanceAudioSpatializationSourceSettings::UResonanceAudioSpatializationSourceSettings
          (UResonanceAudioSpatializationSourceSettings *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  USpatializationPluginSourceSettingsBase::USpatializationPluginSourceSettingsBase
            ((USpatializationPluginSourceSettingsBase *)this,pFVar1);
  this->SpatializationMethod = HRTF;
  this->_padding_ = (longlong)&___7UResonanceAudioSpatializationSourceSettings__6B_;
  this->Pattern = 0.0;
  this->bToggleVisualization = false;
  this->MinDistance = 0.0;
  this->Sharpness = 1.0;
  this->Scale = 1.0;
  this->Spread = 0.0;
  this->Rolloff = NONE;
  this->MaxDistance = 50000.0;
  return this;
}

// ~UResonanceAudioSpatializationSourceSettings @ 14f044db0

void __thiscall
UResonanceAudioSpatializationSourceSettings::~UResonanceAudioSpatializationSourceSettings
          (UResonanceAudioSpatializationSourceSettings *this)

{
  this->_padding_ = (longlong)&___7UResonanceAudioSpatializationSourceSettings__6B_;
  USpatializationPluginSourceSettingsBase::~USpatializationPluginSourceSettingsBase
            ((USpatializationPluginSourceSettingsBase *)this);
  return;
}

// GetPrivateStaticClass @ 14f048f60

UClass * __cdecl UResonanceAudioSpatializationSourceSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UResonanceAudioSpatializationSourceSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ResonanceAudio",L"ResonanceAudioSpatializationSourceSettings",
               &Z_Registration_Info_UClass_UResonanceAudioSpatializationSourceSettings.
                InnerSingleton,StaticRegisterNativesUResonanceAudioSpatializationSourceSettings,0x50
               ,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UResonanceAudioSpatializationSourceSettings>,
               InternalVTableHelperCtorCaller<UResonanceAudioSpatializationSourceSettings>,
               local_res8,USpatializationPluginSourceSettingsBase::StaticClass,UObject::StaticClass)
    ;
  }
  return Z_Registration_Info_UClass_UResonanceAudioSpatializationSourceSettings.InnerSingleton;
}

// SetSoundSourceDirectivity @ 14f04cfb0

void __thiscall
UResonanceAudioSpatializationSourceSettings::SetSoundSourceDirectivity
          (UResonanceAudioSpatializationSourceSettings *this,float param_1,float param_2)

{
  this->Pattern = param_1;
  this->Sharpness = param_2;
  return;
}

// SetSoundSourceSpread @ 14f04cfd0

void __thiscall
UResonanceAudioSpatializationSourceSettings::SetSoundSourceSpread
          (UResonanceAudioSpatializationSourceSettings *this,float param_1)

{
  this->Spread = param_1;
  return;
}

// StaticRegisterNativesUResonanceAudioSpatializationSourceSettings @ 14f04d6a0

void __cdecl
UResonanceAudioSpatializationSourceSettings::
StaticRegisterNativesUResonanceAudioSpatializationSourceSettings(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UResonanceAudioSpatializationSourceSettings_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetSoundSourceDirectivity @ 14f050160

void __cdecl
UResonanceAudioSpatializationSourceSettings::execSetSoundSourceDirectivity
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[1].field_0x4 = local_res8[0];
  *(undefined4 *)&param_1[1].field_0x8 = local_res10[0];
  return;
}

// execSetSoundSourceSpread @ 14f050230

void __cdecl
UResonanceAudioSpatializationSourceSettings::execSetSoundSourceSpread
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[1].field_0x14 = local_res8[0];
  return;
}

