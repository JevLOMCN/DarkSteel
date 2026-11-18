// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 17

// StaticClass @ 146535140

UClass * __cdecl USubmixEffectReverbPreset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectReverbPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"SubmixEffectReverbPreset",
               &Z_Registration_Info_UClass_USubmixEffectReverbPreset.InnerSingleton,
               StaticRegisterNativesUSubmixEffectReverbPreset,0x110,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<USubmixEffectReverbPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectReverbPreset>,local_res8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectReverbPreset.InnerSingleton;
}

// USubmixEffectReverbPreset @ 14653edd0

USubmixEffectReverbPreset * __thiscall
USubmixEffectReverbPreset::USubmixEffectReverbPreset
          (USubmixEffectReverbPreset *this,FVTableHelper *param_1)

{
  USoundEffectSubmixPreset::USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this,param_1);
  this->_padding_ = (longlong)&___7USubmixEffectReverbPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).bBypassEarlyReflections = false;
  (this->SettingsCopy).ReflectionsDelay = 0.007;
  (this->SettingsCopy).GainHF = 0.89;
  (this->SettingsCopy).ReflectionsGain = 0.05;
  (this->SettingsCopy).bBypassLateReflections = false;
  (this->SettingsCopy).LateDelay = 0.1;
  (this->SettingsCopy).DecayTime = 1.49;
  (this->SettingsCopy).Density = 0.85;
  (this->SettingsCopy).Diffusion = 0.85;
  (this->SettingsCopy).AirAbsorptionGainHF = 0.994;
  (this->SettingsCopy).DecayHFRatio = 0.83;
  (this->SettingsCopy).LateGain = 1.26;
  (this->SettingsCopy).Gain = 0.0;
  (this->SettingsCopy).WetLevel = 0.3;
  (this->SettingsCopy).DryLevel = 0.0;
  (this->SettingsCopy).bBypass = false;
  (this->Settings).bBypassEarlyReflections = false;
  (this->Settings).ReflectionsDelay = 0.007;
  (this->Settings).GainHF = 0.89;
  (this->Settings).ReflectionsGain = 0.05;
  (this->Settings).bBypassLateReflections = false;
  (this->Settings).LateDelay = 0.1;
  (this->Settings).DecayTime = 1.49;
  (this->Settings).Density = 0.85;
  (this->Settings).Diffusion = 0.85;
  (this->Settings).AirAbsorptionGainHF = 0.994;
  (this->Settings).DecayHFRatio = 0.83;
  (this->Settings).LateGain = 1.26;
  (this->Settings).Gain = 0.0;
  (this->Settings).WetLevel = 0.3;
  (this->Settings).DryLevel = 0.0;
  (this->Settings).bBypass = false;
  return this;
}

// USubmixEffectReverbPreset @ 14653ef10

USubmixEffectReverbPreset * __thiscall
USubmixEffectReverbPreset::USubmixEffectReverbPreset
          (USubmixEffectReverbPreset *this,FObjectInitializer *param_1)

{
  USoundEffectSubmixPreset::USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this,param_1);
  this->_padding_ = (longlong)&___7USubmixEffectReverbPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).bBypassEarlyReflections = false;
  (this->SettingsCopy).ReflectionsDelay = 0.007;
  (this->SettingsCopy).GainHF = 0.89;
  (this->SettingsCopy).ReflectionsGain = 0.05;
  (this->SettingsCopy).bBypassLateReflections = false;
  (this->SettingsCopy).LateDelay = 0.1;
  (this->SettingsCopy).DecayTime = 1.49;
  (this->SettingsCopy).Density = 0.85;
  (this->SettingsCopy).Diffusion = 0.85;
  (this->SettingsCopy).AirAbsorptionGainHF = 0.994;
  (this->SettingsCopy).DecayHFRatio = 0.83;
  (this->SettingsCopy).LateGain = 1.26;
  (this->SettingsCopy).Gain = 0.0;
  (this->SettingsCopy).WetLevel = 0.3;
  (this->SettingsCopy).DryLevel = 0.0;
  (this->SettingsCopy).bBypass = false;
  (this->Settings).bBypassEarlyReflections = false;
  (this->Settings).ReflectionsDelay = 0.007;
  (this->Settings).GainHF = 0.89;
  (this->Settings).ReflectionsGain = 0.05;
  (this->Settings).bBypassLateReflections = false;
  (this->Settings).LateDelay = 0.1;
  (this->Settings).DecayTime = 1.49;
  (this->Settings).Density = 0.85;
  (this->Settings).Diffusion = 0.85;
  (this->Settings).AirAbsorptionGainHF = 0.994;
  (this->Settings).DecayHFRatio = 0.83;
  (this->Settings).LateGain = 1.26;
  (this->Settings).Gain = 0.0;
  (this->Settings).WetLevel = 0.3;
  (this->Settings).DryLevel = 0.0;
  (this->Settings).bBypass = false;
  return this;
}

// ~USubmixEffectReverbPreset @ 146541500

void __thiscall
USubmixEffectReverbPreset::~USubmixEffectReverbPreset(USubmixEffectReverbPreset *this)

{
  this->_padding_ = (longlong)&___7USubmixEffectReverbPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSubmixPreset::~USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this);
  return;
}

// CanFilter @ 146548ec0

bool __thiscall USubmixEffectReverbPreset::CanFilter(USubmixEffectReverbPreset *this)

{
  return false;
}

// CreateNewEffect @ 14654ec60

FSoundEffectBase * __thiscall
USubmixEffectReverbPreset::CreateNewEffect(USubmixEffectReverbPreset *this)

{
  FSoundEffectBase *this_00;
  
  this_00 = ::operator_new(0x1d0);
  if (this_00 != (FSoundEffectBase *)0x0) {
    FSoundEffectBase::FSoundEffectBase(this_00);
    *(undefined4 *)&this_00[1]._padding_ = 0xffffffff;
    this_00[1]._padding_ = 0;
    this_00->_padding_ = (longlong)&___7FSubmixEffectReverb__6B_;
    *(undefined4 *)this_00[1].SettingsCritSect.CriticalSection.Opaque1 = 0;
    *(undefined4 *)((longlong)this_00[1].SettingsCritSect.CriticalSection.Opaque1 + 4) = 0xffffffff;
    this_00[1].SettingsCritSect.CriticalSection.Opaque2[0] = 0;
    this_00[1].SettingsCritSect.CriticalSection.Opaque2[1] = 0;
    *(undefined1 *)this_00[1].SettingsCritSect.CriticalSection.Opaque3 = 0;
    Audio::FPlateReverbFastSettings::FPlateReverbFastSettings
              ((FPlateReverbFastSettings *)
               ((longlong)this_00[1].SettingsCritSect.CriticalSection.Opaque3 + 4));
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this_00[1].bIsRunning,4000);
    *(undefined1 *)this_00[2].SettingsCritSect.CriticalSection.Opaque1 = 0;
    *(undefined8 *)((longlong)this_00[2].SettingsCritSect.CriticalSection.Opaque1 + 4) = 0x3f800000;
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)this_00[2].SettingsCritSect.CriticalSection.Opaque3,4000);
    *(undefined8 *)&this_00[2].Preset.WeakPtr.ObjectSerialNumber = 0;
    this_00[2].bIsRunning = (FThreadSafeBool)0x0;
    this_00[2].bIsActive = (FThreadSafeBool)0x0;
    this_00[2].CommandQueue.Tail = (TNode *)0x0;
    this_00[3]._padding_ = 0;
    this_00[3].SettingsCritSect.CriticalSection.Opaque2[0] = 0;
    this_00[3].SettingsCritSect.CriticalSection.Opaque2[1] = 0;
    this_00[2].bChanged = (FThreadSafeBool)0xbf800000;
    this_00[2].Preset.WeakPtr.ObjectIndex = -0x40800000;
    *(undefined4 *)this_00[3].SettingsCritSect.CriticalSection.Opaque3 = 0;
    *(undefined4 *)((longlong)this_00[3].SettingsCritSect.CriticalSection.Opaque3 + 4) = 0x80;
    *(undefined4 *)(this_00[3].SettingsCritSect.CriticalSection.Opaque3 + 1) = 0xffffffff;
    *(undefined4 *)((longlong)this_00[3].SettingsCritSect.CriticalSection.Opaque3 + 0xc) = 0;
    this_00[3].CurrentAudioThreadSettingsData.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    this_00[3].CurrentAudioThreadSettingsData.ArrayNum = 0;
    this_00[3].bChanged = (FThreadSafeBool)0x0;
    this_00[3].Preset.WeakPtr.ObjectIndex = 0;
    *(undefined8 *)&this_00[3].Preset.WeakPtr.ObjectSerialNumber = 0;
    this_00[2].CommandQueue.Head = (TNode *)&___7FRichCurve__6B_;
    this_00[3].bIsRunning = (FThreadSafeBool)0x7f7fffff;
    *(undefined2 *)&this_00[3].bIsActive = 0x404;
    this_00[3].CommandQueue.Head = (TNode *)0x0;
    this_00[3].CommandQueue.Tail = (TNode *)0x0;
    *(undefined4 *)&this_00[4]._padding_ = 0x3f800000;
    return this_00;
  }
  return (FSoundEffectBase *)0x0;
}

// CreateNewPreset @ 14654efc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USoundEffectPreset * __thiscall
USubmixEffectReverbPreset::CreateNewPreset
          (USubmixEffectReverbPreset *this,UObject *param_1,FName param_2,EObjectFlags param_3)

{
  UClass *pUVar1;
  UClass *pUVar2;
  USoundEffectPreset *pUVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pUVar1 = (UClass *)(**(code **)(this->_padding_ + 0x2c0))();
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar2 = StaticClass();
  CheckIsClassChildOf_Internal(pUVar2,pUVar1);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar1);
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._8_8_ = param_1;
  local_a8._16_8_ = param_2;
  local_a8._24_4_ = param_3;
  pUVar3 = (USoundEffectPreset *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar4 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  (**(code **)(pUVar3->_padding_ + 0x2e0))(pUVar3);
  return pUVar3;
}

// GetAssetActionName @ 1465550e0

FText * __thiscall
USubmixEffectReverbPreset::GetAssetActionName
          (USubmixEffectReverbPreset *this,FText *__return_storage_ptr__)

{
  FText::FromString(__return_storage_ptr__,"SubmixEffectReverb");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14655a3a0

UClass * __cdecl USubmixEffectReverbPreset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectReverbPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"SubmixEffectReverbPreset",
               &Z_Registration_Info_UClass_USubmixEffectReverbPreset.InnerSingleton,
               StaticRegisterNativesUSubmixEffectReverbPreset,0x110,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<USubmixEffectReverbPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectReverbPreset>,local_res8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectReverbPreset.InnerSingleton;
}

// GetSupportedClass @ 14655b7d0

UClass * __thiscall USubmixEffectReverbPreset::GetSupportedClass(USubmixEffectReverbPreset *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectReverbPreset.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"SubmixEffectReverbPreset",
               &Z_Registration_Info_UClass_USubmixEffectReverbPreset.InnerSingleton,
               StaticRegisterNativesUSubmixEffectReverbPreset,0x110,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<USubmixEffectReverbPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectReverbPreset>,aFStackX_8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectReverbPreset.InnerSingleton;
}

// HasAssetActions @ 14655c370

bool __thiscall USubmixEffectReverbPreset::HasAssetActions(USubmixEffectReverbPreset *this)

{
  return true;
}

// Init @ 14655e230

void __thiscall USubmixEffectReverbPreset::Init(USubmixEffectReverbPreset *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined3 uVar8;
  bool bVar9;
  undefined3 uVar10;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar8 = *(undefined3 *)&(this->Settings).field_0x1;
    fVar1 = (this->Settings).ReflectionsDelay;
    fVar2 = (this->Settings).GainHF;
    fVar3 = (this->Settings).ReflectionsGain;
    bVar9 = (this->Settings).bBypassLateReflections;
    uVar10 = *(undefined3 *)&(this->Settings).field_0x11;
    fVar5 = (this->Settings).LateDelay;
    fVar6 = (this->Settings).DecayTime;
    fVar7 = (this->Settings).Density;
    (this->SettingsCopy).bBypassEarlyReflections = (this->Settings).bBypassEarlyReflections;
    *(undefined3 *)&(this->SettingsCopy).field_0x1 = uVar8;
    (this->SettingsCopy).ReflectionsDelay = fVar1;
    (this->SettingsCopy).GainHF = fVar2;
    (this->SettingsCopy).ReflectionsGain = fVar3;
    fVar1 = (this->Settings).Diffusion;
    fVar2 = (this->Settings).AirAbsorptionGainHF;
    fVar3 = (this->Settings).DecayHFRatio;
    fVar4 = (this->Settings).LateGain;
    (this->SettingsCopy).bBypassLateReflections = bVar9;
    *(undefined3 *)&(this->SettingsCopy).field_0x11 = uVar10;
    (this->SettingsCopy).LateDelay = fVar5;
    (this->SettingsCopy).DecayTime = fVar6;
    (this->SettingsCopy).Density = fVar7;
    fVar5 = (this->Settings).Gain;
    fVar6 = (this->Settings).WetLevel;
    fVar7 = (this->Settings).DryLevel;
    bVar9 = (this->Settings).bBypass;
    uVar8 = *(undefined3 *)&(this->Settings).field_0x3d;
    (this->SettingsCopy).Diffusion = fVar1;
    (this->SettingsCopy).AirAbsorptionGainHF = fVar2;
    (this->SettingsCopy).DecayHFRatio = fVar3;
    (this->SettingsCopy).LateGain = fVar4;
    (this->SettingsCopy).Gain = fVar5;
    (this->SettingsCopy).WetLevel = fVar6;
    (this->SettingsCopy).DryLevel = fVar7;
    (this->SettingsCopy).bBypass = bVar9;
    *(undefined3 *)&(this->SettingsCopy).field_0x3d = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00014655e294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetSettings @ 1465745b0

void __thiscall
USubmixEffectReverbPreset::SetSettings
          (USubmixEffectReverbPreset *this,FSubmixEffectReverbSettings *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined3 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar1 = *(undefined3 *)&param_1->field_0x1;
    fVar2 = param_1->ReflectionsDelay;
    fVar3 = param_1->GainHF;
    fVar4 = param_1->ReflectionsGain;
    (this->SettingsCopy).bBypassEarlyReflections = param_1->bBypassEarlyReflections;
    *(undefined3 *)&(this->SettingsCopy).field_0x1 = uVar1;
    (this->SettingsCopy).ReflectionsDelay = fVar2;
    (this->SettingsCopy).GainHF = fVar3;
    (this->SettingsCopy).ReflectionsGain = fVar4;
    uVar1 = *(undefined3 *)&param_1->field_0x11;
    fVar2 = param_1->LateDelay;
    fVar3 = param_1->DecayTime;
    fVar4 = param_1->Density;
    (this->SettingsCopy).bBypassLateReflections = param_1->bBypassLateReflections;
    *(undefined3 *)&(this->SettingsCopy).field_0x11 = uVar1;
    (this->SettingsCopy).LateDelay = fVar2;
    (this->SettingsCopy).DecayTime = fVar3;
    (this->SettingsCopy).Density = fVar4;
    fVar2 = param_1->AirAbsorptionGainHF;
    fVar3 = param_1->DecayHFRatio;
    fVar4 = param_1->LateGain;
    (this->SettingsCopy).Diffusion = param_1->Diffusion;
    (this->SettingsCopy).AirAbsorptionGainHF = fVar2;
    (this->SettingsCopy).DecayHFRatio = fVar3;
    (this->SettingsCopy).LateGain = fVar4;
    fVar2 = param_1->WetLevel;
    fVar3 = param_1->DryLevel;
    bVar5 = param_1->bBypass;
    uVar1 = *(undefined3 *)&param_1->field_0x3d;
    (this->SettingsCopy).Gain = param_1->Gain;
    (this->SettingsCopy).WetLevel = fVar2;
    (this->SettingsCopy).DryLevel = fVar3;
    (this->SettingsCopy).bBypass = bVar5;
    *(undefined3 *)&(this->SettingsCopy).field_0x3d = uVar1;
    USoundEffectPreset::Update((USoundEffectPreset *)this);
                    /* WARNING: Could not recover jumptable at 0x00014657461c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetSettingsWithReverbEffect @ 1465746a0

void __thiscall
USubmixEffectReverbPreset::SetSettingsWithReverbEffect
          (USubmixEffectReverbPreset *this,UReverbEffect *param_1,float param_2,float param_3)

{
  float fVar1;
  
  if (param_1 != (UReverbEffect *)0x0) {
    (this->Settings).bBypassEarlyReflections = param_1->bBypassEarlyReflections;
    (this->Settings).bBypassLateReflections = param_1->bBypassLateReflections;
    (this->Settings).Density = param_1->Density;
    (this->Settings).Diffusion = param_1->Diffusion;
    (this->Settings).Gain = param_1->Gain;
    (this->Settings).GainHF = param_1->GainHF;
    (this->Settings).DecayTime = param_1->DecayTime;
    (this->Settings).DecayHFRatio = param_1->DecayHFRatio;
    (this->Settings).ReflectionsGain = param_1->ReflectionsGain;
    (this->Settings).ReflectionsDelay = param_1->ReflectionsDelay;
    (this->Settings).LateGain = param_1->LateGain;
    (this->Settings).LateDelay = param_1->LateDelay;
    fVar1 = param_1->AirAbsorptionGainHF;
    (this->Settings).WetLevel = param_2;
    (this->Settings).DryLevel = param_3;
    (this->Settings).AirAbsorptionGainHF = fVar1;
    USoundEffectPreset::Update((USoundEffectPreset *)this);
    return;
  }
  return;
}

// StaticRegisterNativesUSubmixEffectReverbPreset @ 1465779c0

void __cdecl USubmixEffectReverbPreset::StaticRegisterNativesUSubmixEffectReverbPreset(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_USubmixEffectReverbPreset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetSettings @ 146582920

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
USubmixEffectReverbPreset::execSetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *lpCriticalSection;
  FProperty *pFVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar *puVar17;
  uchar local_48 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined8 local_14;
  undefined1 local_c;
  
  local_48[0] = '\0';
  local_44 = 0x3be56042;
  local_40 = 0x3f63d70a;
  local_3c = 0x3d4ccccd;
  local_38 = 0;
  local_34 = 0x3dcccccd;
  local_30 = 0x3fbeb852;
  local_2c = 0x3f59999a;
  local_28 = ___xmm_3fa147ae3f547ae13f7e76c93f59999a;
  uStack_20 = _UNK_1512ea098;
  local_18 = 0;
  local_14 = 0x3e99999a;
  local_c = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  puVar17 = local_48;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar17 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lpCriticalSection = &param_1[2].field_0x18;
  if (lpCriticalSection != (undefined1 *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar2 = puVar17[1];
    uVar3 = puVar17[2];
    uVar4 = puVar17[3];
    uVar5 = puVar17[4];
    uVar6 = puVar17[5];
    uVar7 = puVar17[6];
    uVar8 = puVar17[7];
    uVar9 = puVar17[8];
    uVar10 = puVar17[9];
    uVar11 = puVar17[10];
    uVar12 = puVar17[0xb];
    uVar13 = puVar17[0xc];
    uVar14 = puVar17[0xd];
    uVar15 = puVar17[0xe];
    uVar16 = puVar17[0xf];
    param_1[3].field_0x18 = puVar17[0];
    param_1[3].field_0x19 = uVar2;
    param_1[3].field_0x1a = uVar3;
    param_1[3].field_0x1b = uVar4;
    param_1[3].field_0x1c = uVar5;
    param_1[3].field_0x1d = uVar6;
    param_1[3].field_0x1e = uVar7;
    param_1[3].field_0x1f = uVar8;
    param_1[3].field_0x20 = uVar9;
    param_1[3].field_0x21 = uVar10;
    param_1[3].field_0x22 = uVar11;
    param_1[3].field_0x23 = uVar12;
    param_1[3].field_0x24 = uVar13;
    param_1[3].field_0x25 = uVar14;
    param_1[3].field_0x26 = uVar15;
    param_1[3].field_0x27 = uVar16;
    uVar2 = puVar17[0x11];
    uVar3 = puVar17[0x12];
    uVar4 = puVar17[0x13];
    uVar5 = puVar17[0x14];
    uVar6 = puVar17[0x15];
    uVar7 = puVar17[0x16];
    uVar8 = puVar17[0x17];
    uVar9 = puVar17[0x18];
    uVar10 = puVar17[0x19];
    uVar11 = puVar17[0x1a];
    uVar12 = puVar17[0x1b];
    uVar13 = puVar17[0x1c];
    uVar14 = puVar17[0x1d];
    uVar15 = puVar17[0x1e];
    uVar16 = puVar17[0x1f];
    param_1[4].field_0x0 = puVar17[0x10];
    param_1[4].field_0x1 = uVar2;
    param_1[4].field_0x2 = uVar3;
    param_1[4].field_0x3 = uVar4;
    param_1[4].field_0x4 = uVar5;
    param_1[4].field_0x5 = uVar6;
    param_1[4].field_0x6 = uVar7;
    param_1[4].field_0x7 = uVar8;
    param_1[4].field_0x8 = uVar9;
    param_1[4].field_0x9 = uVar10;
    param_1[4].field_0xa = uVar11;
    param_1[4].field_0xb = uVar12;
    param_1[4].field_0xc = uVar13;
    param_1[4].field_0xd = uVar14;
    param_1[4].field_0xe = uVar15;
    param_1[4].field_0xf = uVar16;
    uVar2 = puVar17[0x21];
    uVar3 = puVar17[0x22];
    uVar4 = puVar17[0x23];
    uVar5 = puVar17[0x24];
    uVar6 = puVar17[0x25];
    uVar7 = puVar17[0x26];
    uVar8 = puVar17[0x27];
    uVar9 = puVar17[0x28];
    uVar10 = puVar17[0x29];
    uVar11 = puVar17[0x2a];
    uVar12 = puVar17[0x2b];
    uVar13 = puVar17[0x2c];
    uVar14 = puVar17[0x2d];
    uVar15 = puVar17[0x2e];
    uVar16 = puVar17[0x2f];
    param_1[4].field_0x10 = puVar17[0x20];
    param_1[4].field_0x11 = uVar2;
    param_1[4].field_0x12 = uVar3;
    param_1[4].field_0x13 = uVar4;
    param_1[4].field_0x14 = uVar5;
    param_1[4].field_0x15 = uVar6;
    param_1[4].field_0x16 = uVar7;
    param_1[4].field_0x17 = uVar8;
    param_1[4].field_0x18 = uVar9;
    param_1[4].field_0x19 = uVar10;
    param_1[4].field_0x1a = uVar11;
    param_1[4].field_0x1b = uVar12;
    param_1[4].field_0x1c = uVar13;
    param_1[4].field_0x1d = uVar14;
    param_1[4].field_0x1e = uVar15;
    param_1[4].field_0x1f = uVar16;
    uVar2 = puVar17[0x31];
    uVar3 = puVar17[0x32];
    uVar4 = puVar17[0x33];
    uVar5 = puVar17[0x34];
    uVar6 = puVar17[0x35];
    uVar7 = puVar17[0x36];
    uVar8 = puVar17[0x37];
    uVar9 = puVar17[0x38];
    uVar10 = puVar17[0x39];
    uVar11 = puVar17[0x3a];
    uVar12 = puVar17[0x3b];
    uVar13 = puVar17[0x3c];
    uVar14 = puVar17[0x3d];
    uVar15 = puVar17[0x3e];
    uVar16 = puVar17[0x3f];
    param_1[4].field_0x20 = puVar17[0x30];
    param_1[4].field_0x21 = uVar2;
    param_1[4].field_0x22 = uVar3;
    param_1[4].field_0x23 = uVar4;
    param_1[4].field_0x24 = uVar5;
    param_1[4].field_0x25 = uVar6;
    param_1[4].field_0x26 = uVar7;
    param_1[4].field_0x27 = uVar8;
    param_1[5].field_0x0 = uVar9;
    param_1[5].field_0x1 = uVar10;
    param_1[5].field_0x2 = uVar11;
    param_1[5].field_0x3 = uVar12;
    param_1[5].field_0x4 = uVar13;
    param_1[5].field_0x5 = uVar14;
    param_1[5].field_0x6 = uVar15;
    param_1[5].field_0x7 = uVar16;
    USoundEffectPreset::Update((USoundEffectPreset *)param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// execSetSettingsWithReverbEffect @ 146582b50

void __cdecl
USubmixEffectReverbPreset::execSetSettingsWithReverbEffect
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  FProperty *pFVar2;
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  longlong local_18 [2];
  
  local_18[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_18[0] != 0) {
    param_1[5].field_0x8 = *(undefined1 *)(local_18[0] + 0x28);
    param_1[5].field_0x18 = *(undefined1 *)(local_18[0] + 0x38);
    *(undefined4 *)&param_1[5].field_0x24 = *(undefined4 *)(local_18[0] + 0x44);
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(local_18[0] + 0x48);
    *(undefined4 *)&param_1[6].field_0x10 = *(undefined4 *)(local_18[0] + 0x58);
    *(undefined4 *)&param_1[5].field_0x10 = *(undefined4 *)(local_18[0] + 0x30);
    *(undefined4 *)&param_1[5].field_0x20 = *(undefined4 *)(local_18[0] + 0x40);
    *(undefined4 *)&param_1[6].field_0x8 = *(undefined4 *)(local_18[0] + 0x50);
    *(undefined4 *)&param_1[5].field_0x14 = *(undefined4 *)(local_18[0] + 0x34);
    *(undefined4 *)&param_1[5].field_0xc = *(undefined4 *)(local_18[0] + 0x2c);
    *(undefined4 *)&param_1[6].field_0xc = *(undefined4 *)(local_18[0] + 0x54);
    *(undefined4 *)&param_1[5].field_0x1c = *(undefined4 *)(local_18[0] + 0x3c);
    uVar1 = *(undefined4 *)(local_18[0] + 0x4c);
    *(undefined4 *)&param_1[6].field_0x14 = local_res10[0];
    *(undefined4 *)&param_1[6].field_0x18 = local_res20[0];
    *(undefined4 *)&param_1[6].field_0x4 = uVar1;
    USoundEffectPreset::Update((USoundEffectPreset *)param_1);
  }
  return;
}

