// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 23

// StaticClass @ 14f09f4d0

UClass * __cdecl USubmixEffectConvolutionReverbPreset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectConvolutionReverbPreset.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SubmixEffectConvolutionReverbPreset",
               &Z_Registration_Info_UClass_USubmixEffectConvolutionReverbPreset.InnerSingleton,
               StaticRegisterNativesUSubmixEffectConvolutionReverbPreset,0x100,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USubmixEffectConvolutionReverbPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectConvolutionReverbPreset>,local_res8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectConvolutionReverbPreset.InnerSingleton;
}

// USubmixEffectConvolutionReverbPreset @ 14f0bb030

USubmixEffectConvolutionReverbPreset * __thiscall
USubmixEffectConvolutionReverbPreset::USubmixEffectConvolutionReverbPreset
          (USubmixEffectConvolutionReverbPreset *this,FVTableHelper *param_1)

{
  USoundEffectSubmixPreset::USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this,param_1);
  this->_padding_ = (longlong)&___7USubmixEffectConvolutionReverbPreset__6B_;
  (this->ImpulseResponse).field0_0x0.DebugPtr = (UAudioImpulseResponse *)0x0;
  (this->Settings).NormalizationVolumeDb = -24.0;
  (this->Settings).WetVolumeDb = 0.0;
  (this->Settings).DryVolumeDb = -96.0;
  (this->Settings).bBypass = false;
  (this->Settings).bMixInputChannelFormatToImpulseResponseFormat = true;
  (this->Settings).bMixReverbOutputToOutputChannelFormat = true;
  (this->Settings).SurroundRearChannelBleedDb = -60.0;
  (this->Settings).bInvertRearChannelBleedPhase = false;
  (this->Settings).bSurroundRearChannelFlip = false;
  (this->Settings).SurroundRearChannelBleedAmount_DEPRECATED = 0.0;
  (this->Settings).ImpulseResponse_DEPRECATED.field0_0x0.DebugPtr = (UAudioImpulseResponse *)0x0;
  (this->Settings).AllowHardwareAcceleration_DEPRECATED = true;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).NormalizationVolumeDb = -24.0;
  (this->SettingsCopy).WetVolumeDb = 0.0;
  (this->SettingsCopy).DryVolumeDb = -96.0;
  (this->SettingsCopy).bBypass = false;
  (this->SettingsCopy).bMixInputChannelFormatToImpulseResponseFormat = true;
  (this->SettingsCopy).bMixReverbOutputToOutputChannelFormat = true;
  (this->SettingsCopy).SurroundRearChannelBleedDb = -60.0;
  (this->SettingsCopy).bInvertRearChannelBleedPhase = false;
  (this->SettingsCopy).bSurroundRearChannelFlip = false;
  (this->SettingsCopy).SurroundRearChannelBleedAmount_DEPRECATED = 0.0;
  (this->SettingsCopy).ImpulseResponse_DEPRECATED.field0_0x0.DebugPtr = (UAudioImpulseResponse *)0x0
  ;
  (this->SettingsCopy).AllowHardwareAcceleration_DEPRECATED = true;
  return this;
}

// USubmixEffectConvolutionReverbPreset @ 14f0bb110

USubmixEffectConvolutionReverbPreset * __thiscall
USubmixEffectConvolutionReverbPreset::USubmixEffectConvolutionReverbPreset
          (USubmixEffectConvolutionReverbPreset *this,FObjectInitializer *param_1)

{
  USoundEffectSubmixPreset::USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this,param_1);
  this->BlockSize = BlockSize1024;
  this->bEnableHardwareAcceleration = true;
  this->_padding_ = (longlong)&___7USubmixEffectConvolutionReverbPreset__6B_;
  (this->ImpulseResponse).field0_0x0.DebugPtr = (UAudioImpulseResponse *)0x0;
  (this->Settings).NormalizationVolumeDb = -24.0;
  (this->Settings).WetVolumeDb = 0.0;
  (this->Settings).DryVolumeDb = -96.0;
  (this->Settings).bBypass = false;
  (this->Settings).bMixInputChannelFormatToImpulseResponseFormat = true;
  (this->Settings).bMixReverbOutputToOutputChannelFormat = true;
  (this->Settings).SurroundRearChannelBleedDb = -60.0;
  (this->Settings).bInvertRearChannelBleedPhase = false;
  (this->Settings).bSurroundRearChannelFlip = false;
  (this->Settings).SurroundRearChannelBleedAmount_DEPRECATED = 0.0;
  (this->Settings).ImpulseResponse_DEPRECATED.field0_0x0.DebugPtr = (UAudioImpulseResponse *)0x0;
  (this->Settings).AllowHardwareAcceleration_DEPRECATED = true;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).NormalizationVolumeDb = -24.0;
  (this->SettingsCopy).WetVolumeDb = 0.0;
  (this->SettingsCopy).DryVolumeDb = -96.0;
  (this->SettingsCopy).bBypass = false;
  (this->SettingsCopy).bMixInputChannelFormatToImpulseResponseFormat = true;
  (this->SettingsCopy).bMixReverbOutputToOutputChannelFormat = true;
  (this->SettingsCopy).SurroundRearChannelBleedDb = -60.0;
  (this->SettingsCopy).bInvertRearChannelBleedPhase = false;
  (this->SettingsCopy).bSurroundRearChannelFlip = false;
  (this->SettingsCopy).SurroundRearChannelBleedAmount_DEPRECATED = 0.0;
  (this->SettingsCopy).ImpulseResponse_DEPRECATED.field0_0x0.DebugPtr = (UAudioImpulseResponse *)0x0
  ;
  (this->SettingsCopy).AllowHardwareAcceleration_DEPRECATED = true;
  return this;
}

// ~USubmixEffectConvolutionReverbPreset @ 14f0c0680

void __thiscall
USubmixEffectConvolutionReverbPreset::~USubmixEffectConvolutionReverbPreset
          (USubmixEffectConvolutionReverbPreset *this)

{
  this->_padding_ = (longlong)&___7USubmixEffectConvolutionReverbPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSubmixPreset::~USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this);
  return;
}

// CanFilter @ 14f0cbc10

bool __thiscall
USubmixEffectConvolutionReverbPreset::CanFilter(USubmixEffectConvolutionReverbPreset *this)

{
  return false;
}

// CreateNewEffect @ 14f0d0d70

FSoundEffectBase * __thiscall
USubmixEffectConvolutionReverbPreset::CreateNewEffect(USubmixEffectConvolutionReverbPreset *this)

{
  FSubmixEffectConvolutionReverb *this_00;
  FSubmixEffectConvolutionReverbSettings *pFVar1;
  FSubmixEffectConvolutionReverbSettings local_38;
  
  this_00 = ::operator_new(0xa0);
  if (this_00 != (FSubmixEffectConvolutionReverb *)0x0) {
    FSoundEffectBase::FSoundEffectBase((FSoundEffectBase *)this_00);
    *(undefined4 *)&this_00->_padding_ = 0xffffffff;
    this_00->_padding_ = (longlong)&___7FSubmixEffectConvolutionReverb__6B_;
    this_00->_padding_ = 0;
    *(undefined4 *)&this_00->_padding_ = 0;
    *(undefined4 *)((longlong)&this_00->_padding_ + 4) = 0xffffffff;
    this_00->WetVolume = 1.0;
    this_00->DryVolume = 1.0;
    MakeShared<Audio::FEffectConvolutionReverb,1>(&this_00->Reverb);
    FSubmixEffectConvolutionReverb::UpdateConvolutionReverb
              (this_00,(USubmixEffectConvolutionReverbPreset *)&stack0x00000010);
    if (this != (USubmixEffectConvolutionReverbPreset *)0x0) {
      pFVar1 = GetSettings(this,&local_38);
      FSubmixEffectConvolutionReverb::SetConvolutionReverbParameters(this_00,pFVar1);
    }
    return (FSoundEffectBase *)this_00;
  }
  return (FSoundEffectBase *)0x0;
}

// CreateNewPreset @ 14f0d2340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USoundEffectPreset * __thiscall
USubmixEffectConvolutionReverbPreset::CreateNewPreset
          (USubmixEffectConvolutionReverbPreset *this,UObject *param_1,FName param_2,
          EObjectFlags param_3)

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

// GetAssetActionName @ 14f0d8a70

FText * __thiscall
USubmixEffectConvolutionReverbPreset::GetAssetActionName
          (USubmixEffectConvolutionReverbPreset *this,FText *__return_storage_ptr__)

{
  FText::FromString(__return_storage_ptr__,L"SubmixEffectConvolutionReverb");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14f0dce40

UClass * __cdecl USubmixEffectConvolutionReverbPreset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectConvolutionReverbPreset.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SubmixEffectConvolutionReverbPreset",
               &Z_Registration_Info_UClass_USubmixEffectConvolutionReverbPreset.InnerSingleton,
               StaticRegisterNativesUSubmixEffectConvolutionReverbPreset,0x100,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USubmixEffectConvolutionReverbPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectConvolutionReverbPreset>,local_res8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectConvolutionReverbPreset.InnerSingleton;
}

// GetSettings @ 14f0dde70

FSubmixEffectConvolutionReverbSettings * __thiscall
USubmixEffectConvolutionReverbPreset::GetSettings
          (USubmixEffectConvolutionReverbPreset *this,
          FSubmixEffectConvolutionReverbSettings *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  UAudioImpulseResponse *pUVar1;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    __return_storage_ptr__->NormalizationVolumeDb = (this->SettingsCopy).NormalizationVolumeDb;
    __return_storage_ptr__->WetVolumeDb = (this->SettingsCopy).WetVolumeDb;
    __return_storage_ptr__->DryVolumeDb = (this->SettingsCopy).DryVolumeDb;
    __return_storage_ptr__->bBypass = (this->SettingsCopy).bBypass;
    __return_storage_ptr__->bMixInputChannelFormatToImpulseResponseFormat =
         (this->SettingsCopy).bMixInputChannelFormatToImpulseResponseFormat;
    __return_storage_ptr__->bMixReverbOutputToOutputChannelFormat =
         (this->SettingsCopy).bMixReverbOutputToOutputChannelFormat;
    __return_storage_ptr__->SurroundRearChannelBleedDb =
         (this->SettingsCopy).SurroundRearChannelBleedDb;
    __return_storage_ptr__->bInvertRearChannelBleedPhase =
         (this->SettingsCopy).bInvertRearChannelBleedPhase;
    __return_storage_ptr__->bSurroundRearChannelFlip = (this->SettingsCopy).bSurroundRearChannelFlip
    ;
    __return_storage_ptr__->SurroundRearChannelBleedAmount_DEPRECATED =
         (this->SettingsCopy).SurroundRearChannelBleedAmount_DEPRECATED;
    pUVar1 = (this->SettingsCopy).ImpulseResponse_DEPRECATED.field0_0x0.DebugPtr;
    (__return_storage_ptr__->ImpulseResponse_DEPRECATED).field0_0x0.DebugPtr = pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UAudioImpulseResponse *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    __return_storage_ptr__->AllowHardwareAcceleration_DEPRECATED =
         (this->SettingsCopy).AllowHardwareAcceleration_DEPRECATED;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetSupportedClass @ 14f0deed0

UClass * __thiscall
USubmixEffectConvolutionReverbPreset::GetSupportedClass(USubmixEffectConvolutionReverbPreset *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectConvolutionReverbPreset.InnerSingleton ==
      (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SubmixEffectConvolutionReverbPreset",
               &Z_Registration_Info_UClass_USubmixEffectConvolutionReverbPreset.InnerSingleton,
               StaticRegisterNativesUSubmixEffectConvolutionReverbPreset,0x100,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USubmixEffectConvolutionReverbPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectConvolutionReverbPreset>,aFStackX_8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectConvolutionReverbPreset.InnerSingleton;
}

// HasAssetActions @ 14f0df5e0

bool __thiscall
USubmixEffectConvolutionReverbPreset::HasAssetActions(USubmixEffectConvolutionReverbPreset *this)

{
  return true;
}

// Init @ 14f0e61a0

void __thiscall
USubmixEffectConvolutionReverbPreset::Init(USubmixEffectConvolutionReverbPreset *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FSubmixEffectConvolutionReverbSettings::operator=(&this->SettingsCopy,&this->Settings);
                    /* WARNING: Could not recover jumptable at 0x00014f0e61df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// PostLoad @ 14f0f1950

void __thiscall
USubmixEffectConvolutionReverbPreset::PostLoad(USubmixEffectConvolutionReverbPreset *this)

{
  UAudioImpulseResponse *pUVar1;
  
  UObject::PostLoad((UObject *)this);
  UpdateDeprecatedProperties(this);
  pUVar1 = (this->ImpulseResponse).field0_0x0.DebugPtr;
  if (pUVar1 != (UAudioImpulseResponse *)0x0) {
    (this->Settings).NormalizationVolumeDb = pUVar1->NormalizationVolumeDb;
  }
  return;
}

// RebuildConvolutionReverb @ 14f0f4ae0

void __thiscall
USubmixEffectConvolutionReverbPreset::RebuildConvolutionReverb
          (USubmixEffectConvolutionReverbPreset *this)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  UAudioImpulseResponse *pUVar4;
  FScriptContainerElement *_Src;
  undefined1 uVar5;
  undefined1 uVar6;
  atomic<int> aVar7;
  float fVar8;
  float _X;
  longlong *plVar9;
  undefined4 uVar10;
  atomic<int> aVar11;
  ulonglong uVar12;
  TReferenceControllerBase<1> *pTVar13;
  longlong lVar14;
  longlong *plVar15;
  bool bVar16;
  float fVar17;
  undefined1 local_res8 [8];
  uint local_res10;
  longlong *local_res18;
  FConvolutionReverbInitData local_a8;
  
  _X = __real_41200000;
  fVar8 = __real_3d4ccccd;
  local_res10 = (uint)this->_padding_;
  uVar12 = (ulonglong)(int)local_res10;
  plVar15 = (longlong *)this->_padding_;
  local_res18 = plVar15 + uVar12 * 2;
  do {
    plVar9 = local_res18;
    if ((int)this->_padding_ != (int)uVar12) {
      `TCheckedPointerIterator<TWeakPtr<FSoundEffectBase,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar15 == plVar9) {
      return;
    }
    pTVar2 = (TReferenceControllerBase<1> *)plVar15[1];
    pTVar13 = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      aVar7 = pTVar2->SharedReferenceCount;
      do {
        pTVar13 = (TReferenceControllerBase<1> *)0x0;
        if (aVar7 == (atomic<int>)0x0) goto LAB_14f0f4b77;
        LOCK();
        aVar11 = pTVar2->SharedReferenceCount;
        bVar16 = aVar7 == aVar11;
        if (bVar16) {
          pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
          aVar11 = aVar7;
        }
        UNLOCK();
        aVar7 = aVar11;
      } while (!bVar16);
      lVar3 = *plVar15;
      pTVar13 = pTVar2;
      if (lVar3 != 0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        local_a8.AlgorithmSettings._1_2_ = 0;
        local_a8.AlgorithmSettings.NumInputChannels = 0;
        local_a8.AlgorithmSettings.NumOutputChannels = 0;
        local_a8.AlgorithmSettings.NumImpulseResponses = 0;
        local_a8.AlgorithmSettings.MaxNumImpulseResponseSamples = 0;
        local_a8.AlgorithmSettings._3_1_ = 0;
        local_a8.Samples.ArrayMax = 0;
        local_a8.NormalizationVolume = 0.0;
        local_a8.bMixInputChannelFormatToImpulseResponseFormat = true;
        local_a8.bMixReverbOutputToOutputChannelFormat = true;
        local_a8.bIsImpulseTrueStereo = false;
        local_a8._63_1_ = 0;
        local_a8.InputAudioFormat.NumChannels = 0;
        local_a8.OutputAudioFormat.NumChannels = 0;
        local_a8.AlgorithmSettings.bEnableHardwareAcceleration = true;
        local_a8.AlgorithmSettings.BlockNumSamples = 0x100;
        local_a8.ImpulseSampleRate = 0.0;
        local_a8.TargetSampleRate = 0.0;
        local_a8.Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a8.Samples.ArrayNum = 0;
        local_a8.GainMatrix.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a8.GainMatrix.ArrayNum = 0;
        local_a8.GainMatrix.ArrayMax = 0;
        if (this != (USubmixEffectConvolutionReverbPreset *)0x0) {
          pUVar4 = (this->ImpulseResponse).field0_0x0.DebugPtr;
          if (pUVar4 != (UAudioImpulseResponse *)0x0) {
            if (&local_a8.Samples != &pUVar4->ImpulseResponse) {
              local_a8.Samples.ArrayNum = (pUVar4->ImpulseResponse).ArrayNum;
              lVar14 = (longlong)local_a8.Samples.ArrayNum;
              _Src = (pUVar4->ImpulseResponse).AllocatorInstance.Data;
              if (local_a8.Samples.ArrayNum != 0) {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,local_a8.Samples.ArrayNum,0,&local_a8.Samples.AllocatorInstance,
                           local_a8.Samples.ArrayNum,&local_a8.Samples.ArrayMax);
                memcpy(local_a8.Samples.AllocatorInstance.Data,_Src,lVar14 << 2);
              }
            }
            local_a8.AlgorithmSettings.NumImpulseResponses = pUVar4->NumChannels;
            local_a8.ImpulseSampleRate = (float)pUVar4->SampleRate;
            if (pUVar4->bTrueStereo == false) {
LAB_14f0f4c75:
              local_a8.bIsImpulseTrueStereo = false;
            }
            else {
              local_a8.bIsImpulseTrueStereo = true;
              if ((pUVar4->NumChannels & 1) != 0) goto LAB_14f0f4c75;
            }
            fVar17 = powf(_X,pUVar4->NormalizationVolumeDb * fVar8);
            local_a8.NormalizationVolume = fVar17;
          }
          uVar10 = local_a8._60_4_;
          if (this->BlockSize == BlockSize256) {
            local_a8.AlgorithmSettings.BlockNumSamples = 0x100;
          }
          else if (this->BlockSize == BlockSize512) {
            local_a8.AlgorithmSettings.BlockNumSamples = 0x200;
          }
          else {
            local_a8.AlgorithmSettings.BlockNumSamples = 0x400;
          }
          local_a8.AlgorithmSettings.bEnableHardwareAcceleration = this->bEnableHardwareAcceleration
          ;
          uVar5 = (this->Settings).bMixInputChannelFormatToImpulseResponseFormat;
          uVar6 = (this->Settings).bMixReverbOutputToOutputChannelFormat;
          local_a8.bMixReverbOutputToOutputChannelFormat = (bool)uVar6;
          local_a8.bMixInputChannelFormatToImpulseResponseFormat = (bool)uVar5;
          local_a8._62_2_ = SUB42(uVar10,2);
        }
        Audio::FEffectConvolutionReverb::SetInitData
                  (*(FEffectConvolutionReverb **)(lVar3 + 0x90),&local_a8);
        lVar14 = *(longlong *)(lVar3 + 0x90);
        lpCriticalSection = (LPCRITICAL_SECTION)(lVar14 + 0x20);
        if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection(lpCriticalSection);
        piVar1 = (int *)(lVar14 + 0x48);
        *piVar1 = *piVar1 + 1;
        LeaveCriticalSection(lpCriticalSection);
        if (local_a8.GainMatrix.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.GainMatrix.AllocatorInstance.Data);
        }
        if (local_a8.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Samples.AllocatorInstance.Data);
        }
        Audio::FEffectConvolutionReverb::BuildReverb(*(FEffectConvolutionReverb **)(lVar3 + 0x90));
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
    }
LAB_14f0f4b77:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    uVar12 = (ulonglong)local_res10;
    plVar15 = plVar15 + 2;
  } while( true );
}

// SetImpulseResponse @ 14f0fcb40

void __thiscall
USubmixEffectConvolutionReverbPreset::SetImpulseResponse
          (USubmixEffectConvolutionReverbPreset *this,UAudioImpulseResponse *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UAudioImpulseResponse *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->ImpulseResponse).field0_0x0.DebugPtr = param_1;
  }
  else {
    (this->ImpulseResponse).field0_0x0.DebugPtr = param_1;
    if (param_1 == (UAudioImpulseResponse *)0x0) goto LAB_14f0fcb7b;
  }
  (this->Settings).NormalizationVolumeDb = param_1->NormalizationVolumeDb;
LAB_14f0fcb7b:
  RebuildConvolutionReverb(this);
  return;
}

// SetImpulseResponseSettings @ 14f0fcbc0

void __thiscall
USubmixEffectConvolutionReverbPreset::SetImpulseResponseSettings
          (USubmixEffectConvolutionReverbPreset *this,UAudioImpulseResponse *param_1)

{
  if (param_1 != (UAudioImpulseResponse *)0x0) {
    (this->Settings).NormalizationVolumeDb = param_1->NormalizationVolumeDb;
  }
  return;
}

// SetSettings @ 14f101910

void __thiscall
USubmixEffectConvolutionReverbPreset::SetSettings
          (USubmixEffectConvolutionReverbPreset *this,
          FSubmixEffectConvolutionReverbSettings *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  UAudioImpulseResponse *pUVar1;
  
  FSubmixEffectConvolutionReverbSettings::operator=(&this->Settings,param_1);
  pUVar1 = (this->ImpulseResponse).field0_0x0.DebugPtr;
  if (pUVar1 != (UAudioImpulseResponse *)0x0) {
    (this->Settings).NormalizationVolumeDb = pUVar1->NormalizationVolumeDb;
  }
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FSubmixEffectConvolutionReverbSettings::operator=(&this->SettingsCopy,&this->Settings);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    USoundEffectPreset::Update((USoundEffectPreset *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StaticRegisterNativesUSubmixEffectConvolutionReverbPreset @ 14f103a00

void __cdecl
USubmixEffectConvolutionReverbPreset::StaticRegisterNativesUSubmixEffectConvolutionReverbPreset
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateDeprecatedProperties @ 14f107090

void __thiscall
USubmixEffectConvolutionReverbPreset::UpdateDeprecatedProperties
          (USubmixEffectConvolutionReverbPreset *this)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  UAudioImpulseResponse *pUVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  float fVar22;
  undefined8 local_78 [7];
  
  fVar3 = (this->Settings).SurroundRearChannelBleedAmount_DEPRECATED;
  if (fVar3 != 0.0) {
    fVar22 = (float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    if ((float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
      fVar22 = __real_322bcc77;
    }
    fVar22 = logf(fVar22);
    fVar22 = fVar22 * __real_410af967;
    (this->Settings).SurroundRearChannelBleedAmount_DEPRECATED = 0.0;
    (this->Settings).SurroundRearChannelBleedDb = fVar22;
    (this->Settings).bInvertRearChannelBleedPhase = fVar3 < 0.0;
  }
  pUVar6 = (this->Settings).ImpulseResponse_DEPRECATED.field0_0x0.DebugPtr;
  if (pUVar6 != (UAudioImpulseResponse *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    pUVar6 = (this->Settings).ImpulseResponse_DEPRECATED.field0_0x0.DebugPtr;
    (this->ImpulseResponse).field0_0x0.DebugPtr = pUVar6;
    iVar4 = pUVar6->NumChannels;
    pTVar16 = &pUVar6->IRData_DEPRECATED;
    if (iVar4 < 2) {
      pTVar1 = &pUVar6->ImpulseResponse;
      if (pTVar1 != pTVar16) {
        iVar4 = (pUVar6->IRData_DEPRECATED).ArrayNum;
        piVar2 = &(pUVar6->ImpulseResponse).ArrayMax;
        pFVar18 = (pTVar16->AllocatorInstance).Data;
        (pUVar6->ImpulseResponse).ArrayNum = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar4,*piVar2,&pTVar1->AllocatorInstance,iVar4,piVar2);
          if (iVar4 != 0) {
            memcpy((pTVar1->AllocatorInstance).Data,pFVar18,(longlong)iVar4 << 2);
          }
        }
      }
    }
    else {
      iVar9 = (pUVar6->IRData_DEPRECATED).ArrayNum;
      if (0 < iVar9) {
        (pUVar6->ImpulseResponse).ArrayNum = 0;
        if ((pUVar6->ImpulseResponse).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&(pUVar6->ImpulseResponse).AllocatorInstance,0,
                     &(pUVar6->ImpulseResponse).ArrayMax);
        }
        pUVar6 = (this->ImpulseResponse).field0_0x0.DebugPtr;
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar9,&(pUVar6->ImpulseResponse).AllocatorInstance,
                   &(pUVar6->ImpulseResponse).ArrayNum,&(pUVar6->ImpulseResponse).ArrayMax);
        iVar20 = 0;
        iVar9 = iVar9 / iVar4;
        pFVar7 = (pTVar16->AllocatorInstance).Data;
        lVar21 = 0;
        pFVar8 = (((this->ImpulseResponse).field0_0x0.DebugPtr)->ImpulseResponse).AllocatorInstance.
                 Data;
        lVar19 = 0;
        pFVar18 = pFVar7 + 8;
        do {
          iVar17 = 0;
          if (iVar9 < 4) {
            if (0 < iVar9) {
              lVar14 = 0;
              goto LAB_14f1072e3;
            }
          }
          else {
            lVar13 = (longlong)(iVar20 + iVar4 * 2);
            pFVar12 = pFVar8 + lVar13 * 4;
            uVar10 = (iVar9 - 4U >> 2) + 1;
            uVar11 = (ulonglong)uVar10;
            iVar17 = uVar10 * 4;
            lVar14 = (ulonglong)uVar10 * 4;
            pFVar15 = pFVar18;
            do {
              *(undefined4 *)(pFVar12 + (lVar21 - lVar13) * 4) = *(undefined4 *)(pFVar15 + -8);
              *(undefined4 *)(pFVar12 + ((lVar21 - lVar13) + (longlong)iVar4) * 4) =
                   *(undefined4 *)(pFVar15 + -4);
              *(undefined4 *)pFVar12 = *(undefined4 *)pFVar15;
              *(undefined4 *)(pFVar12 + ((iVar20 + iVar4 * 3) - lVar13) * 4) =
                   *(undefined4 *)(pFVar15 + 4);
              pFVar12 = pFVar12 + (longlong)(iVar4 * 4) * 4;
              uVar11 = uVar11 - 1;
              pFVar15 = pFVar15 + 0x10;
            } while (uVar11 != 0);
            if (iVar17 < iVar9) {
LAB_14f1072e3:
              pFVar12 = pFVar7 + (lVar14 + lVar19) * 4;
              uVar11 = (ulonglong)(uint)(iVar9 - iVar17);
              pFVar15 = pFVar8 + (longlong)(iVar17 * iVar4 + iVar20) * 4;
              do {
                uVar5 = *(undefined4 *)pFVar12;
                pFVar12 = pFVar12 + 4;
                *(undefined4 *)pFVar15 = uVar5;
                pFVar15 = pFVar15 + (longlong)iVar4 * 4;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
          }
          pFVar18 = pFVar18 + (longlong)iVar9 * 4;
          iVar20 = iVar20 + 1;
          lVar21 = lVar21 + 1;
          lVar19 = lVar19 + iVar9;
        } while (iVar20 < iVar4);
      }
    }
    pUVar6 = (this->Settings).ImpulseResponse_DEPRECATED.field0_0x0.DebugPtr;
    pTVar16 = &pUVar6->IRData_DEPRECATED;
    if (pTVar16 != (TArray<float,TSizedDefaultAllocator<32>_> *)local_78) {
      pFVar18 = (pTVar16->AllocatorInstance).Data;
      if (pFVar18 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar18);
      }
      (pTVar16->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (pUVar6->IRData_DEPRECATED).ArrayNum = 0;
      (pUVar6->IRData_DEPRECATED).ArrayMax = 0;
    }
    (this->Settings).ImpulseResponse_DEPRECATED.field0_0x0.DebugPtr = (UAudioImpulseResponse *)0x0;
  }
  if ((this->Settings).AllowHardwareAcceleration_DEPRECATED == false) {
    this->bEnableHardwareAcceleration = false;
    (this->Settings).AllowHardwareAcceleration_DEPRECATED = true;
  }
  return;
}

// UpdateSettings @ 14f109920

void __thiscall
USubmixEffectConvolutionReverbPreset::UpdateSettings(USubmixEffectConvolutionReverbPreset *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FSubmixEffectConvolutionReverbSettings::operator=(&this->SettingsCopy,&this->Settings);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    USoundEffectPreset::Update((USoundEffectPreset *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// execSetImpulseResponse @ 14f111be0

void __cdecl
USubmixEffectConvolutionReverbPreset::execSetImpulseResponse
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res8;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  *(UObject **)&param_1[2].field_0x18 = pUVar2;
  if (pUVar2 != (UObject *)0x0) {
    *(undefined4 *)&param_1[2].field_0x20 = *(undefined4 *)&pUVar2[1].field_0x18;
  }
  RebuildConvolutionReverb((USubmixEffectConvolutionReverbPreset *)param_1);
  return;
}

// execSetSettings @ 14f1165c0

void __cdecl
USubmixEffectConvolutionReverbPreset::execSetSettings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *lpCriticalSection;
  FProperty *pFVar1;
  FSubmixEffectConvolutionReverbSettings *pFVar2;
  FSubmixEffectConvolutionReverbSettings local_38;
  
  local_38.NormalizationVolumeDb = -24.0;
  local_38.WetVolumeDb = 0.0;
  local_38.DryVolumeDb = -96.0;
  local_38.bBypass = false;
  local_38.bMixInputChannelFormatToImpulseResponseFormat = true;
  local_38.bMixReverbOutputToOutputChannelFormat = true;
  local_38.SurroundRearChannelBleedDb = -60.0;
  local_38.bInvertRearChannelBleedPhase = false;
  local_38.bSurroundRearChannelFlip = false;
  local_38.SurroundRearChannelBleedAmount_DEPRECATED = 0.0;
  local_38.ImpulseResponse_DEPRECATED.field0_0x0.DebugPtr =
       (TObjectPtr<UAudioImpulseResponse>_u_0)0x0;
  local_38.AllowHardwareAcceleration_DEPRECATED = true;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar2 = &local_38;
  if ((FSubmixEffectConvolutionReverbSettings *)param_2->MostRecentPropertyAddress !=
      (FSubmixEffectConvolutionReverbSettings *)0x0) {
    pFVar2 = (FSubmixEffectConvolutionReverbSettings *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FSubmixEffectConvolutionReverbSettings::operator=
            ((FSubmixEffectConvolutionReverbSettings *)&param_1[2].field_0x20,pFVar2);
  if (*(longlong *)&param_1[2].field_0x18 != 0) {
    *(undefined4 *)&param_1[2].field_0x20 =
         *(undefined4 *)(*(longlong *)&param_1[2].field_0x18 + 0x40);
  }
  lpCriticalSection = &param_1[4].field_0x8;
  if (lpCriticalSection != (undefined1 *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FSubmixEffectConvolutionReverbSettings::operator=
              ((FSubmixEffectConvolutionReverbSettings *)&param_1[5].field_0x8,
               (FSubmixEffectConvolutionReverbSettings *)&param_1[2].field_0x20);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    USoundEffectPreset::Update((USoundEffectPreset *)param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

