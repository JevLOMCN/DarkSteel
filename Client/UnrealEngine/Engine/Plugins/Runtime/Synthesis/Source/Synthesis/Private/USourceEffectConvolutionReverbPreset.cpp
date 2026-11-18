// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 22

// StaticClass @ 14f0a90a0

UClass * __cdecl USourceEffectConvolutionReverbPreset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectConvolutionReverbPreset.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectConvolutionReverbPreset",
               &Z_Registration_Info_UClass_USourceEffectConvolutionReverbPreset.InnerSingleton,
               StaticRegisterNativesUSourceEffectConvolutionReverbPreset,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USourceEffectConvolutionReverbPreset>,
               InternalVTableHelperCtorCaller<USourceEffectConvolutionReverbPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectConvolutionReverbPreset.InnerSingleton;
}

// USourceEffectConvolutionReverbPreset @ 14f0ba1a0

USourceEffectConvolutionReverbPreset * __thiscall
USourceEffectConvolutionReverbPreset::USourceEffectConvolutionReverbPreset
          (USourceEffectConvolutionReverbPreset *this,FVTableHelper *param_1)

{
  USoundEffectSourcePreset::USoundEffectSourcePreset((USoundEffectSourcePreset *)this,param_1);
  this->_padding_ = (longlong)&___7USourceEffectConvolutionReverbPreset__6B_;
  (this->ImpulseResponse).field0_0x0.DebugPtr = (UAudioImpulseResponse *)0x0;
  (this->Settings).NormalizationVolumeDb = -24.0;
  (this->Settings).WetVolumeDb = 0.0;
  (this->Settings).DryVolumeDb = -96.0;
  (this->Settings).bBypass = false;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).NormalizationVolumeDb = -24.0;
  (this->SettingsCopy).WetVolumeDb = 0.0;
  (this->SettingsCopy).DryVolumeDb = -96.0;
  (this->SettingsCopy).bBypass = false;
  return this;
}

// USourceEffectConvolutionReverbPreset @ 14f0ba220

USourceEffectConvolutionReverbPreset * __thiscall
USourceEffectConvolutionReverbPreset::USourceEffectConvolutionReverbPreset
          (USourceEffectConvolutionReverbPreset *this,FObjectInitializer *param_1)

{
  USoundEffectSourcePreset::USoundEffectSourcePreset((USoundEffectSourcePreset *)this,param_1);
  this->BlockSize = BlockSize1024;
  this->bEnableHardwareAcceleration = true;
  this->_padding_ = (longlong)&___7USourceEffectConvolutionReverbPreset__6B_;
  (this->ImpulseResponse).field0_0x0.DebugPtr = (UAudioImpulseResponse *)0x0;
  (this->Settings).NormalizationVolumeDb = -24.0;
  (this->Settings).WetVolumeDb = 0.0;
  (this->Settings).DryVolumeDb = -96.0;
  (this->Settings).bBypass = false;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).NormalizationVolumeDb = -24.0;
  (this->SettingsCopy).WetVolumeDb = 0.0;
  (this->SettingsCopy).DryVolumeDb = -96.0;
  (this->SettingsCopy).bBypass = false;
  return this;
}

// ~USourceEffectConvolutionReverbPreset @ 14f0c0310

void __thiscall
USourceEffectConvolutionReverbPreset::~USourceEffectConvolutionReverbPreset
          (USourceEffectConvolutionReverbPreset *this)

{
  this->_padding_ = (longlong)&___7USourceEffectConvolutionReverbPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSourcePreset::~USoundEffectSourcePreset((USoundEffectSourcePreset *)this);
  return;
}

// CanFilter @ 14f0cbb30

bool __thiscall
USourceEffectConvolutionReverbPreset::CanFilter(USourceEffectConvolutionReverbPreset *this)

{
  return false;
}

// CreateNewEffect @ 14f0d05e0

FSoundEffectBase * __thiscall
USourceEffectConvolutionReverbPreset::CreateNewEffect(USourceEffectConvolutionReverbPreset *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FSourceEffectConvolutionReverb *this_00;
  FSourceEffectConvolutionReverbSettings local_18;
  
  this_00 = ::operator_new(0xb0);
  if (this_00 == (FSourceEffectConvolutionReverb *)0x0) {
    this_00 = (FSourceEffectConvolutionReverb *)0x0;
  }
  else {
    FSoundEffectBase::FSoundEffectBase((FSoundEffectBase *)this_00);
    *(undefined8 *)&this_00->field_0x80 = 0xffffffffffffffff;
    *(undefined ***)this_00 = &___7FSourceEffectConvolutionReverb__6B_;
    *(undefined8 *)&this_00->field_0x70 = 0;
    *(undefined8 *)&this_00->field_0x78 = 0;
    MakeShared<Audio::FEffectConvolutionReverb,1>(&this_00->Reverb);
    this_00->WetVolume = 1.0;
    this_00->DryVolume = 1.0;
    this_00->NumChannels = 0;
    FSourceEffectConvolutionReverb::UpdateConvolutionReverb
              (this_00,(USourceEffectConvolutionReverbPreset *)&stack0x00000010);
    if (this != (USourceEffectConvolutionReverbPreset *)0x0) {
      lpCriticalSection = &this->SettingsCritSect;
      if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        local_18.NormalizationVolumeDb = (this->SettingsCopy).NormalizationVolumeDb;
        local_18.WetVolumeDb = (this->SettingsCopy).WetVolumeDb;
        local_18.DryVolumeDb = (this->SettingsCopy).DryVolumeDb;
        local_18.bBypass = (this->SettingsCopy).bBypass;
        local_18._13_3_ = *(undefined3 *)&(this->SettingsCopy).field_0xd;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        FSourceEffectConvolutionReverb::SetConvolutionReverbParameters(this_00,&local_18);
        return (FSoundEffectBase *)this_00;
      }
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
  }
  return (FSoundEffectBase *)this_00;
}

// CreateNewPreset @ 14f0d1540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USoundEffectPreset * __thiscall
USourceEffectConvolutionReverbPreset::CreateNewPreset
          (USourceEffectConvolutionReverbPreset *this,UObject *param_1,FName param_2,
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

// GetAssetActionName @ 14f0d87d0

FText * __thiscall
USourceEffectConvolutionReverbPreset::GetAssetActionName
          (USourceEffectConvolutionReverbPreset *this,FText *__return_storage_ptr__)

{
  FText::FromString(__return_storage_ptr__,L"SourceEffectConvolutionReverb");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14f0dc3c0

UClass * __cdecl USourceEffectConvolutionReverbPreset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectConvolutionReverbPreset.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectConvolutionReverbPreset",
               &Z_Registration_Info_UClass_USourceEffectConvolutionReverbPreset.InnerSingleton,
               StaticRegisterNativesUSourceEffectConvolutionReverbPreset,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USourceEffectConvolutionReverbPreset>,
               InternalVTableHelperCtorCaller<USourceEffectConvolutionReverbPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectConvolutionReverbPreset.InnerSingleton;
}

// GetSettings @ 14f0dde10

FSourceEffectConvolutionReverbSettings * __thiscall
USourceEffectConvolutionReverbPreset::GetSettings
          (USourceEffectConvolutionReverbPreset *this,
          FSourceEffectConvolutionReverbSettings *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  float fVar2;
  bool bVar3;
  undefined3 uVar4;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    fVar1 = (this->SettingsCopy).WetVolumeDb;
    fVar2 = (this->SettingsCopy).DryVolumeDb;
    bVar3 = (this->SettingsCopy).bBypass;
    uVar4 = *(undefined3 *)&(this->SettingsCopy).field_0xd;
    __return_storage_ptr__->NormalizationVolumeDb = (this->SettingsCopy).NormalizationVolumeDb;
    __return_storage_ptr__->WetVolumeDb = fVar1;
    __return_storage_ptr__->DryVolumeDb = fVar2;
    __return_storage_ptr__->bBypass = bVar3;
    *(undefined3 *)&__return_storage_ptr__->field_0xd = uVar4;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetSupportedClass @ 14f0dedf0

UClass * __thiscall
USourceEffectConvolutionReverbPreset::GetSupportedClass(USourceEffectConvolutionReverbPreset *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectConvolutionReverbPreset.InnerSingleton ==
      (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectConvolutionReverbPreset",
               &Z_Registration_Info_UClass_USourceEffectConvolutionReverbPreset.InnerSingleton,
               StaticRegisterNativesUSourceEffectConvolutionReverbPreset,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USourceEffectConvolutionReverbPreset>,
               InternalVTableHelperCtorCaller<USourceEffectConvolutionReverbPreset>,aFStackX_8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectConvolutionReverbPreset.InnerSingleton;
}

// HasAssetActions @ 14f0df500

bool __thiscall
USourceEffectConvolutionReverbPreset::HasAssetActions(USourceEffectConvolutionReverbPreset *this)

{
  return true;
}

// Init @ 14f0e5bd0

void __thiscall
USourceEffectConvolutionReverbPreset::Init(USourceEffectConvolutionReverbPreset *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  float fVar2;
  bool bVar3;
  undefined3 uVar4;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    fVar1 = (this->Settings).WetVolumeDb;
    fVar2 = (this->Settings).DryVolumeDb;
    bVar3 = (this->Settings).bBypass;
    uVar4 = *(undefined3 *)&(this->Settings).field_0xd;
    (this->SettingsCopy).NormalizationVolumeDb = (this->Settings).NormalizationVolumeDb;
    (this->SettingsCopy).WetVolumeDb = fVar1;
    (this->SettingsCopy).DryVolumeDb = fVar2;
    (this->SettingsCopy).bBypass = bVar3;
    *(undefined3 *)&(this->SettingsCopy).field_0xd = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00014f0e5c0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// PostLoad @ 14f0f1920

void __thiscall
USourceEffectConvolutionReverbPreset::PostLoad(USourceEffectConvolutionReverbPreset *this)

{
  UAudioImpulseResponse *pUVar1;
  
  UObject::PostLoad((UObject *)this);
  pUVar1 = (this->ImpulseResponse).field0_0x0.DebugPtr;
  if (pUVar1 != (UAudioImpulseResponse *)0x0) {
    (this->Settings).NormalizationVolumeDb = pUVar1->NormalizationVolumeDb;
  }
  return;
}

// RebuildConvolutionReverb @ 14f0f4830

void __thiscall
USourceEffectConvolutionReverbPreset::RebuildConvolutionReverb
          (USourceEffectConvolutionReverbPreset *this)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  UAudioImpulseResponse *pUVar4;
  FScriptContainerElement *_Src;
  atomic<int> aVar5;
  float fVar6;
  float _X;
  longlong *plVar7;
  atomic<int> aVar8;
  ulonglong uVar9;
  TReferenceControllerBase<1> *pTVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  float fVar14;
  undefined1 local_res8 [8];
  uint local_res10;
  longlong *local_res18;
  FConvolutionReverbInitData local_a8;
  
  _X = __real_41200000;
  fVar6 = __real_3d4ccccd;
  local_res10 = (uint)this->_padding_;
  uVar9 = (ulonglong)(int)local_res10;
  plVar12 = (longlong *)this->_padding_;
  local_res18 = plVar12 + uVar9 * 2;
  do {
    plVar7 = local_res18;
    if ((int)this->_padding_ != (int)uVar9) {
      `TCheckedPointerIterator<TWeakPtr<FSoundEffectBase,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar12 == plVar7) {
      return;
    }
    pTVar2 = (TReferenceControllerBase<1> *)plVar12[1];
    pTVar10 = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      aVar5 = pTVar2->SharedReferenceCount;
      do {
        pTVar10 = (TReferenceControllerBase<1> *)0x0;
        if (aVar5 == (atomic<int>)0x0) goto LAB_14f0f48d1;
        LOCK();
        aVar8 = pTVar2->SharedReferenceCount;
        bVar13 = aVar5 == aVar8;
        if (bVar13) {
          pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
          aVar8 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar8;
      } while (!bVar13);
      lVar3 = *plVar12;
      pTVar10 = pTVar2;
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
        if (this != (USourceEffectConvolutionReverbPreset *)0x0) {
          pUVar4 = (this->ImpulseResponse).field0_0x0.DebugPtr;
          if (pUVar4 != (UAudioImpulseResponse *)0x0) {
            if (&local_a8.Samples != &pUVar4->ImpulseResponse) {
              local_a8.Samples.ArrayNum = (pUVar4->ImpulseResponse).ArrayNum;
              lVar11 = (longlong)local_a8.Samples.ArrayNum;
              _Src = (pUVar4->ImpulseResponse).AllocatorInstance.Data;
              if (local_a8.Samples.ArrayNum != 0) {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,local_a8.Samples.ArrayNum,0,&local_a8.Samples.AllocatorInstance,
                           local_a8.Samples.ArrayNum,&local_a8.Samples.ArrayMax);
                memcpy(local_a8.Samples.AllocatorInstance.Data,_Src,lVar11 << 2);
              }
            }
            local_a8.AlgorithmSettings.NumImpulseResponses = pUVar4->NumChannels;
            local_a8.ImpulseSampleRate = (float)pUVar4->SampleRate;
            if (pUVar4->bTrueStereo == false) {
LAB_14f0f49cf:
              local_a8.bIsImpulseTrueStereo = false;
            }
            else {
              local_a8.bIsImpulseTrueStereo = true;
              if ((pUVar4->NumChannels & 1) != 0) goto LAB_14f0f49cf;
            }
            fVar14 = powf(_X,pUVar4->NormalizationVolumeDb * fVar6);
            local_a8.NormalizationVolume = fVar14;
          }
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
        }
        Audio::FEffectConvolutionReverb::SetInitData
                  (*(FEffectConvolutionReverb **)(lVar3 + 0x88),&local_a8);
        lVar11 = *(longlong *)(lVar3 + 0x88);
        lpCriticalSection = (LPCRITICAL_SECTION)(lVar11 + 0x20);
        if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection(lpCriticalSection);
        piVar1 = (int *)(lVar11 + 0x48);
        *piVar1 = *piVar1 + 1;
        LeaveCriticalSection(lpCriticalSection);
        if (local_a8.GainMatrix.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.GainMatrix.AllocatorInstance.Data);
        }
        if (local_a8.Samples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Samples.AllocatorInstance.Data);
        }
        Audio::FEffectConvolutionReverb::BuildReverb(*(FEffectConvolutionReverb **)(lVar3 + 0x88));
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
    }
LAB_14f0f48d1:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    uVar9 = (ulonglong)local_res10;
    plVar12 = plVar12 + 2;
  } while( true );
}

// SetImpulseResponse @ 14f0fcae0

void __thiscall
USourceEffectConvolutionReverbPreset::SetImpulseResponse
          (USourceEffectConvolutionReverbPreset *this,UAudioImpulseResponse *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UAudioImpulseResponse *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->ImpulseResponse).field0_0x0.DebugPtr = param_1;
  }
  else {
    (this->ImpulseResponse).field0_0x0.DebugPtr = param_1;
    if (param_1 == (UAudioImpulseResponse *)0x0) goto LAB_14f0fcb1b;
  }
  (this->Settings).NormalizationVolumeDb = param_1->NormalizationVolumeDb;
LAB_14f0fcb1b:
  RebuildConvolutionReverb(this);
  return;
}

// SetImpulseResponseSettings @ 14f0fcba0

void __thiscall
USourceEffectConvolutionReverbPreset::SetImpulseResponseSettings
          (USourceEffectConvolutionReverbPreset *this,UAudioImpulseResponse *param_1)

{
  if (param_1 != (UAudioImpulseResponse *)0x0) {
    (this->Settings).NormalizationVolumeDb = param_1->NormalizationVolumeDb;
  }
  return;
}

// SetSettings @ 14f101290

void __thiscall
USourceEffectConvolutionReverbPreset::SetSettings
          (USourceEffectConvolutionReverbPreset *this,
          FSourceEffectConvolutionReverbSettings *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  UAudioImpulseResponse *pUVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  undefined3 uVar5;
  
  fVar2 = param_1->WetVolumeDb;
  fVar3 = param_1->DryVolumeDb;
  bVar4 = param_1->bBypass;
  uVar5 = *(undefined3 *)&param_1->field_0xd;
  pUVar1 = (this->ImpulseResponse).field0_0x0.DebugPtr;
  (this->Settings).NormalizationVolumeDb = param_1->NormalizationVolumeDb;
  (this->Settings).WetVolumeDb = fVar2;
  (this->Settings).DryVolumeDb = fVar3;
  (this->Settings).bBypass = bVar4;
  *(undefined3 *)&(this->Settings).field_0xd = uVar5;
  if (pUVar1 != (UAudioImpulseResponse *)0x0) {
    (this->Settings).NormalizationVolumeDb = pUVar1->NormalizationVolumeDb;
  }
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    fVar2 = (this->Settings).WetVolumeDb;
    fVar3 = (this->Settings).DryVolumeDb;
    bVar4 = (this->Settings).bBypass;
    uVar5 = *(undefined3 *)&(this->Settings).field_0xd;
    (this->SettingsCopy).NormalizationVolumeDb = (this->Settings).NormalizationVolumeDb;
    (this->SettingsCopy).WetVolumeDb = fVar2;
    (this->SettingsCopy).DryVolumeDb = fVar3;
    (this->SettingsCopy).bBypass = bVar4;
    *(undefined3 *)&(this->SettingsCopy).field_0xd = uVar5;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    USoundEffectPreset::Update((USoundEffectPreset *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StaticRegisterNativesUSourceEffectConvolutionReverbPreset @ 14f103680

void __cdecl
USourceEffectConvolutionReverbPreset::StaticRegisterNativesUSourceEffectConvolutionReverbPreset
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_USourceEffectConvolutionReverbPreset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateSettings @ 14f1098c0

void __thiscall
USourceEffectConvolutionReverbPreset::UpdateSettings(USourceEffectConvolutionReverbPreset *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  float fVar2;
  bool bVar3;
  undefined3 uVar4;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    fVar1 = (this->Settings).WetVolumeDb;
    fVar2 = (this->Settings).DryVolumeDb;
    bVar3 = (this->Settings).bBypass;
    uVar4 = *(undefined3 *)&(this->Settings).field_0xd;
    (this->SettingsCopy).NormalizationVolumeDb = (this->Settings).NormalizationVolumeDb;
    (this->SettingsCopy).WetVolumeDb = fVar1;
    (this->SettingsCopy).DryVolumeDb = fVar2;
    (this->SettingsCopy).bBypass = bVar3;
    *(undefined3 *)&(this->SettingsCopy).field_0xd = uVar4;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    USoundEffectPreset::Update((USoundEffectPreset *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// execSetImpulseResponse @ 14f111b30

void __cdecl
USourceEffectConvolutionReverbPreset::execSetImpulseResponse
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
  RebuildConvolutionReverb((USourceEffectConvolutionReverbPreset *)param_1);
  return;
}

// execSetSettings @ 14f1157a0

void __cdecl
USourceEffectConvolutionReverbPreset::execSetSettings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *lpCriticalSection;
  FProperty *pFVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
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
  uchar uVar17;
  uchar uVar18;
  uchar uVar19;
  uchar uVar20;
  uchar *puVar21;
  uchar local_18 [16];
  
  local_18[0] = '\0';
  local_18[1] = '\0';
  local_18[2] = 0xc0;
  local_18[3] = 0xc1;
  local_18[4] = '\0';
  local_18[5] = '\0';
  local_18[6] = '\0';
  local_18[7] = '\0';
  local_18[8] = '\0';
  local_18[9] = '\0';
  local_18[10] = 0xc0;
  local_18[0xb] = 0xc2;
  local_18[0xc] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  puVar21 = local_18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar21 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar6 = puVar21[1];
  uVar7 = puVar21[2];
  uVar8 = puVar21[3];
  uVar9 = puVar21[4];
  uVar10 = puVar21[5];
  uVar11 = puVar21[6];
  uVar12 = puVar21[7];
  uVar13 = puVar21[8];
  uVar14 = puVar21[9];
  uVar15 = puVar21[10];
  uVar16 = puVar21[0xb];
  uVar17 = puVar21[0xc];
  uVar18 = puVar21[0xd];
  uVar19 = puVar21[0xe];
  uVar20 = puVar21[0xf];
  lVar2 = *(longlong *)&param_1[2].field_0x18;
  param_1[2].field_0x20 = puVar21[0];
  param_1[2].field_0x21 = uVar6;
  param_1[2].field_0x22 = uVar7;
  param_1[2].field_0x23 = uVar8;
  param_1[2].field_0x24 = uVar9;
  param_1[2].field_0x25 = uVar10;
  param_1[2].field_0x26 = uVar11;
  param_1[2].field_0x27 = uVar12;
  param_1[3].field_0x0 = uVar13;
  param_1[3].field_0x1 = uVar14;
  param_1[3].field_0x2 = uVar15;
  param_1[3].field_0x3 = uVar16;
  param_1[3].field_0x4 = uVar17;
  param_1[3].field_0x5 = uVar18;
  param_1[3].field_0x6 = uVar19;
  param_1[3].field_0x7 = uVar20;
  if (lVar2 != 0) {
    *(undefined4 *)&param_1[2].field_0x20 = *(undefined4 *)(lVar2 + 0x40);
  }
  lpCriticalSection = &param_1[3].field_0x10;
  if (lpCriticalSection != (undefined1 *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar3 = *(undefined4 *)&param_1[2].field_0x24;
    uVar4 = *(undefined4 *)(param_1 + 3);
    uVar5 = *(undefined4 *)&param_1[3].field_0x4;
    *(undefined4 *)&param_1[4].field_0x10 = *(undefined4 *)&param_1[2].field_0x20;
    *(undefined4 *)&param_1[4].field_0x14 = uVar3;
    *(undefined4 *)&param_1[4].field_0x18 = uVar4;
    *(undefined4 *)&param_1[4].field_0x1c = uVar5;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    USoundEffectPreset::Update((USoundEffectPreset *)param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

