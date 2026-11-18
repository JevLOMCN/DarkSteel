// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1486784d0

UClass * __cdecl USoundNodeModulatorContinuous::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeModulatorContinuous.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeModulatorContinuous",
               &Z_Registration_Info_UClass_USoundNodeModulatorContinuous.InnerSingleton,
               StaticRegisterNativesUSoundNodeModulatorContinuous,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundNodeModulatorContinuous>,
               InternalVTableHelperCtorCaller<USoundNodeModulatorContinuous>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeModulatorContinuous.InnerSingleton;
}

// USoundNodeModulatorContinuous @ 148697910

USoundNodeModulatorContinuous * __thiscall
USoundNodeModulatorContinuous::USoundNodeModulatorContinuous
          (USoundNodeModulatorContinuous *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->PitchModulationParams).Default = 1.0;
  (this->PitchModulationParams).MinInput = 0.0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7USoundNodeModulatorContinuous__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->PitchModulationParams).ParameterName.ComparisonIndex = 0;
  (this->PitchModulationParams).ParameterName.Number = 0;
  (this->PitchModulationParams).MaxInput = 1.0;
  (this->PitchModulationParams).MinOutput = 0.0;
  (this->PitchModulationParams).MaxOutput = 1.0;
  (this->PitchModulationParams).ParamMode.Value = '\0';
  (this->VolumeModulationParams).ParameterName.ComparisonIndex = 0;
  (this->VolumeModulationParams).ParameterName.Number = 0;
  (this->VolumeModulationParams).Default = 1.0;
  (this->VolumeModulationParams).MinInput = 0.0;
  (this->VolumeModulationParams).MaxInput = 1.0;
  (this->VolumeModulationParams).MinOutput = 0.0;
  (this->VolumeModulationParams).MaxOutput = 1.0;
  (this->VolumeModulationParams).ParamMode.Value = '\0';
  return this;
}

// USoundNodeModulatorContinuous @ 148697990

USoundNodeModulatorContinuous * __thiscall
USoundNodeModulatorContinuous::USoundNodeModulatorContinuous
          (USoundNodeModulatorContinuous *this,FObjectInitializer *param_1)

{
  USoundNode::USoundNode((USoundNode *)this,param_1);
  this->_padding_ = (longlong)&___7USoundNodeModulatorContinuous__6B_;
  (this->PitchModulationParams).ParameterName.ComparisonIndex = 0;
  (this->PitchModulationParams).ParameterName.Number = 0;
  (this->PitchModulationParams).ParamMode.Value = '\0';
  (this->VolumeModulationParams).ParameterName.ComparisonIndex = 0;
  (this->VolumeModulationParams).ParameterName.Number = 0;
  (this->VolumeModulationParams).ParamMode.Value = '\0';
  (this->PitchModulationParams).Default = 1.0;
  (this->PitchModulationParams).MinInput = 0.0;
  (this->PitchModulationParams).MaxInput = 1.0;
  (this->PitchModulationParams).MinOutput = 0.0;
  (this->PitchModulationParams).MaxOutput = 1.0;
  (this->VolumeModulationParams).Default = 1.0;
  (this->VolumeModulationParams).MinInput = 0.0;
  (this->VolumeModulationParams).MaxInput = 1.0;
  (this->VolumeModulationParams).MinOutput = 0.0;
  (this->VolumeModulationParams).MaxOutput = 1.0;
  return this;
}

// ~USoundNodeModulatorContinuous @ 14869bc10

void __thiscall
USoundNodeModulatorContinuous::~USoundNodeModulatorContinuous(USoundNodeModulatorContinuous *this)

{
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1486c5170

UClass * __cdecl USoundNodeModulatorContinuous::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeModulatorContinuous.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeModulatorContinuous",
               &Z_Registration_Info_UClass_USoundNodeModulatorContinuous.InnerSingleton,
               StaticRegisterNativesUSoundNodeModulatorContinuous,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundNodeModulatorContinuous>,
               InternalVTableHelperCtorCaller<USoundNodeModulatorContinuous>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeModulatorContinuous.InnerSingleton;
}

// ParseNodes @ 1486de220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
USoundNodeModulatorContinuous::ParseNodes
          (USoundNodeModulatorContinuous *this,FAudioDevice *param_1,ulong64 param_2,
          FActiveSound *param_3,FSoundParseParameters *param_4,
          TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *param_5)

{
  float fVar1;
  undefined1 auStackY_2a8 [32];
  FSoundParseParameters local_278;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  FSoundParseParameters::FSoundParseParameters(&local_278,param_4);
  fVar1 = FModulatorContinuousParams::GetValue(&this->VolumeModulationParams,param_3);
  local_278.Volume = local_278.Volume * fVar1;
  fVar1 = FModulatorContinuousParams::GetValue(&this->PitchModulationParams,param_3);
  local_278.Pitch = local_278.Pitch * fVar1;
  USoundNode::ParseNodes((USoundNode *)this,param_1,param_2,param_3,&local_278,param_5);
  FSoundParseParameters::~FSoundParseParameters(&local_278);
  return;
}

// StaticRegisterNativesUSoundNodeModulatorContinuous @ 1486f19a0

void __cdecl USoundNodeModulatorContinuous::StaticRegisterNativesUSoundNodeModulatorContinuous(void)

{
  return;
}

