// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 25

// StaticClass @ 14f0a5340

UClass * __cdecl USubmixEffectMultibandCompressorPreset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectMultibandCompressorPreset.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SubmixEffectMultibandCompressorPreset",
               &Z_Registration_Info_UClass_USubmixEffectMultibandCompressorPreset.InnerSingleton,
               StaticRegisterNativesUSubmixEffectMultibandCompressorPreset,0x100,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USubmixEffectMultibandCompressorPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectMultibandCompressorPreset>,local_res8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectMultibandCompressorPreset.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 14f0aaac0

void __cdecl
`USubmixEffectMultibandCompressorPreset::ResetKey'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (FSubmixEffectMultibandCompressor *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TSharedPtr<Audio::FPatchOutput,1> *pTVar1;
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &(param_1->KeySource).Patch;
  uStack_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<Audio::FPatchOutput,1> *)&uStack_18) {
    pTVar1->Object = (FPatchOutput *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(param_1->KeySource).Patch.SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  lpCriticalSection = &(param_1->KeySource).MutateSourceCritSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (param_1->KeySource).NumChannels = 0;
    (param_1->KeySource).ObjectId = 0xffffffff;
    (param_1->KeySource).Type = Default;
                    /* WARNING: Could not recover jumptable at 0x00014f0f8013. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// USubmixEffectMultibandCompressorPreset @ 14f0bb570

USubmixEffectMultibandCompressorPreset * __thiscall
USubmixEffectMultibandCompressorPreset::USubmixEffectMultibandCompressorPreset
          (USubmixEffectMultibandCompressorPreset *this,FVTableHelper *param_1)

{
  USoundEffectSubmixPreset::USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this,param_1);
  this->_padding_ = (longlong)&___7USubmixEffectMultibandCompressorPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).DynamicsProcessorType = Compressor;
  (this->SettingsCopy).PeakMode = RootMeanSquared;
  (this->SettingsCopy).ExternalAudioBus.field0_0x0.DebugPtr = (UAudioBus *)0x0;
  (this->SettingsCopy).ExternalSubmix.field0_0x0.DebugPtr = (USoundSubmix *)0x0;
  (this->SettingsCopy).KeyGainDb = 0.0;
  (this->SettingsCopy).bKeyAudition = false;
  (this->SettingsCopy).Bands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SettingsCopy).Bands.ArrayNum = 0;
  (this->SettingsCopy).Bands.ArrayMax = 0;
  (this->Settings).ExternalAudioBus.field0_0x0.DebugPtr = (UAudioBus *)0x0;
  (this->Settings).ExternalSubmix.field0_0x0.DebugPtr = (USoundSubmix *)0x0;
  (this->Settings).KeyGainDb = 0.0;
  (this->Settings).bKeyAudition = false;
  (this->Settings).Bands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Settings).Bands.ArrayNum = 0;
  (this->Settings).Bands.ArrayMax = 0;
  (this->SettingsCopy).LinkMode = Average;
  (this->SettingsCopy).LookAheadMsec = 3.0;
  (this->SettingsCopy).bAnalogMode = true;
  (this->SettingsCopy).bFourPole = true;
  (this->SettingsCopy).bBypass = false;
  (this->SettingsCopy).KeySource = Default;
  (this->Settings).DynamicsProcessorType = Compressor;
  (this->Settings).PeakMode = RootMeanSquared;
  (this->Settings).LinkMode = Average;
  (this->Settings).LookAheadMsec = 3.0;
  (this->Settings).bAnalogMode = true;
  (this->Settings).bFourPole = true;
  (this->Settings).bBypass = false;
  (this->Settings).KeySource = Default;
  return this;
}

// USubmixEffectMultibandCompressorPreset @ 14f0bb640

USubmixEffectMultibandCompressorPreset * __thiscall
USubmixEffectMultibandCompressorPreset::USubmixEffectMultibandCompressorPreset
          (USubmixEffectMultibandCompressorPreset *this,FObjectInitializer *param_1)

{
  USoundEffectSubmixPreset::USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this,param_1);
  this->_padding_ = (longlong)&___7USubmixEffectMultibandCompressorPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).DynamicsProcessorType = Compressor;
  (this->SettingsCopy).PeakMode = RootMeanSquared;
  (this->SettingsCopy).ExternalAudioBus.field0_0x0.DebugPtr = (UAudioBus *)0x0;
  (this->SettingsCopy).ExternalSubmix.field0_0x0.DebugPtr = (USoundSubmix *)0x0;
  (this->SettingsCopy).KeyGainDb = 0.0;
  (this->SettingsCopy).bKeyAudition = false;
  (this->SettingsCopy).Bands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SettingsCopy).Bands.ArrayNum = 0;
  (this->SettingsCopy).Bands.ArrayMax = 0;
  (this->Settings).ExternalAudioBus.field0_0x0.DebugPtr = (UAudioBus *)0x0;
  (this->Settings).ExternalSubmix.field0_0x0.DebugPtr = (USoundSubmix *)0x0;
  (this->Settings).KeyGainDb = 0.0;
  (this->Settings).bKeyAudition = false;
  (this->Settings).Bands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Settings).Bands.ArrayNum = 0;
  (this->Settings).Bands.ArrayMax = 0;
  (this->SettingsCopy).LinkMode = Average;
  (this->SettingsCopy).LookAheadMsec = 3.0;
  (this->SettingsCopy).bAnalogMode = true;
  (this->SettingsCopy).bFourPole = true;
  (this->SettingsCopy).bBypass = false;
  (this->SettingsCopy).KeySource = Default;
  (this->Settings).DynamicsProcessorType = Compressor;
  (this->Settings).PeakMode = RootMeanSquared;
  (this->Settings).LinkMode = Average;
  (this->Settings).LookAheadMsec = 3.0;
  (this->Settings).bAnalogMode = true;
  (this->Settings).bFourPole = true;
  (this->Settings).bBypass = false;
  (this->Settings).KeySource = Default;
  return this;
}

// ~USubmixEffectMultibandCompressorPreset @ 14f0c0770

void __thiscall
USubmixEffectMultibandCompressorPreset::~USubmixEffectMultibandCompressorPreset
          (USubmixEffectMultibandCompressorPreset *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USubmixEffectMultibandCompressorPreset__6B_;
  pFVar1 = (this->Settings).Bands.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SettingsCopy).Bands.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSubmixPreset::~USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this);
  return;
}

// CanFilter @ 14f0cbc50

bool __thiscall
USubmixEffectMultibandCompressorPreset::CanFilter(USubmixEffectMultibandCompressorPreset *this)

{
  return false;
}

// CreateNewEffect @ 14f0d1120

FSoundEffectBase * __thiscall
USubmixEffectMultibandCompressorPreset::CreateNewEffect
          (USubmixEffectMultibandCompressorPreset *this)

{
  FSubmixEffectMultibandCompressor *pFVar1;
  
  pFVar1 = ::operator_new(0x260);
  if (pFVar1 != (FSubmixEffectMultibandCompressor *)0x0) {
    pFVar1 = FSubmixEffectMultibandCompressor::FSubmixEffectMultibandCompressor(pFVar1);
    return (FSoundEffectBase *)pFVar1;
  }
  return (FSoundEffectBase *)0x0;
}

// CreateNewPreset @ 14f0d2740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USoundEffectPreset * __thiscall
USubmixEffectMultibandCompressorPreset::CreateNewPreset
          (USubmixEffectMultibandCompressorPreset *this,UObject *param_1,FName param_2,
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

// GetAssetActionName @ 14f0d8b30

FText * __thiscall
USubmixEffectMultibandCompressorPreset::GetAssetActionName
          (USubmixEffectMultibandCompressorPreset *this,FText *__return_storage_ptr__)

{
  FText::FromString(__return_storage_ptr__,"SubmixEffectMultibandCompressor");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14f0dd200

UClass * __cdecl USubmixEffectMultibandCompressorPreset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectMultibandCompressorPreset.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SubmixEffectMultibandCompressorPreset",
               &Z_Registration_Info_UClass_USubmixEffectMultibandCompressorPreset.InnerSingleton,
               StaticRegisterNativesUSubmixEffectMultibandCompressorPreset,0x100,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USubmixEffectMultibandCompressorPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectMultibandCompressorPreset>,local_res8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectMultibandCompressorPreset.InnerSingleton;
}

// GetSettings @ 14f0ddf50

FSubmixEffectMultibandCompressorSettings * __thiscall
USubmixEffectMultibandCompressorPreset::GetSettings
          (USubmixEffectMultibandCompressorPreset *this,
          FSubmixEffectMultibandCompressorSettings *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FDynamicsBandSettings,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  UAudioBus *pUVar4;
  USoundSubmix *pUVar5;
  FScriptContainerElement *_Src;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    __return_storage_ptr__->DynamicsProcessorType = (this->SettingsCopy).DynamicsProcessorType;
    __return_storage_ptr__->PeakMode = (this->SettingsCopy).PeakMode;
    __return_storage_ptr__->LinkMode = (this->SettingsCopy).LinkMode;
    __return_storage_ptr__->LookAheadMsec = (this->SettingsCopy).LookAheadMsec;
    __return_storage_ptr__->bAnalogMode = (this->SettingsCopy).bAnalogMode;
    __return_storage_ptr__->bFourPole = (this->SettingsCopy).bFourPole;
    __return_storage_ptr__->bBypass = (this->SettingsCopy).bBypass;
    __return_storage_ptr__->KeySource = (this->SettingsCopy).KeySource;
    pUVar4 = (this->SettingsCopy).ExternalAudioBus.field0_0x0.DebugPtr;
    (__return_storage_ptr__->ExternalAudioBus).field0_0x0.DebugPtr = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UAudioBus *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    pUVar5 = (this->SettingsCopy).ExternalSubmix.field0_0x0.DebugPtr;
    (__return_storage_ptr__->ExternalSubmix).field0_0x0.DebugPtr = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (USoundSubmix *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    pTVar1 = &__return_storage_ptr__->Bands;
    __return_storage_ptr__->KeyGainDb = (this->SettingsCopy).KeyGainDb;
    __return_storage_ptr__->bKeyAudition = (this->SettingsCopy).bKeyAudition;
    piVar2 = &(__return_storage_ptr__->Bands).ArrayMax;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar3 = (this->SettingsCopy).Bands.ArrayNum;
    _Src = (this->SettingsCopy).Bands.AllocatorInstance.Data;
    (__return_storage_ptr__->Bands).ArrayNum = iVar3;
    if (iVar3 == 0) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
      memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 5);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetSupportedClass @ 14f0def10

UClass * __thiscall
USubmixEffectMultibandCompressorPreset::GetSupportedClass
          (USubmixEffectMultibandCompressorPreset *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectMultibandCompressorPreset.InnerSingleton ==
      (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SubmixEffectMultibandCompressorPreset",
               &Z_Registration_Info_UClass_USubmixEffectMultibandCompressorPreset.InnerSingleton,
               StaticRegisterNativesUSubmixEffectMultibandCompressorPreset,0x100,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USubmixEffectMultibandCompressorPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectMultibandCompressorPreset>,aFStackX_8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectMultibandCompressorPreset.InnerSingleton;
}

// HasAssetActions @ 14f0df620

bool __thiscall
USubmixEffectMultibandCompressorPreset::HasAssetActions
          (USubmixEffectMultibandCompressorPreset *this)

{
  return true;
}

// Init @ 14f0e6310

void __thiscall
USubmixEffectMultibandCompressorPreset::Init(USubmixEffectMultibandCompressorPreset *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FSubmixEffectMultibandCompressorSettings::operator=(&this->SettingsCopy,&this->Settings);
                    /* WARNING: Could not recover jumptable at 0x00014f0e634f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnInit @ 14f0ea930

void __thiscall
USubmixEffectMultibandCompressorPreset::OnInit(USubmixEffectMultibandCompressorPreset *this)

{
  ESubmixEffectDynamicsKeySource EVar1;
  
  EVar1 = (this->Settings).KeySource;
  if (EVar1 == AudioBus) {
    SetAudioBus(this,(this->Settings).ExternalAudioBus.field0_0x0.DebugPtr);
    return;
  }
  if (EVar1 == Submix) {
    SetExternalSubmix(this,(this->Settings).ExternalSubmix.field0_0x0.DebugPtr);
    return;
  }
  return;
}

// ResetKey @ 14f0f8030

void __thiscall
USubmixEffectMultibandCompressorPreset::ResetKey(USubmixEffectMultibandCompressorPreset *this)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &
             ___7__TFunction_OwnedObject_P6AXAEAVFSubmixEffectMultibandCompressor___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_20 = `USubmixEffectMultibandCompressorPreset::ResetKey'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(FSubmixEffectMultibandCompressor_&),void,FSubmixEffectMultibandCompressor_&>
                ::Call;
  USoundEffectPreset::EffectCommand<FSubmixEffectMultibandCompressor>
            ((USoundEffectPreset *)this,
             (TFunction<void___cdecl(FSubmixEffectMultibandCompressor_&)> *)local_38);
  return;
}

// SetAudioBus @ 14f0f8fc0

void __thiscall
USubmixEffectMultibandCompressorPreset::SetAudioBus
          (USubmixEffectMultibandCompressorPreset *this,UAudioBus *param_1)

{
  USubmixEffectMultibandCompressorPreset *local_68;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  undefined3 uStack_5b;
  undefined **local_58;
  code *local_50;
  undefined8 local_40;
  code *local_38 [5];
  undefined8 *local_10;
  
  if (param_1 != (UAudioBus *)0x0) {
    uStack_60 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    local_58 = (undefined **)CONCAT44(local_58._4_4_,param_1->AudioBusChannels + 1);
    uStack_5c = 1;
    local_38[0] = (code *)0x0;
    local_68 = this;
    local_10 = FMemory::Malloc(0x20,8);
    *local_10 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`USubmixEffectMultibandCompressorPreset::SetKey'::`5'::<lambda_1>,0,1>
                 ::_vftable_;
    local_10[1] = local_68;
    local_10[2] = CONCAT44(_uStack_5c,uStack_60);
    local_10[3] = local_58;
    if (local_10 + 1 != (undefined8 *)0x0) {
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`USubmixEffectMultibandCompressorPreset::SetKey'::__l5::<lambda_1>,void,FSubmixEffectMultibandCompressor_&>
                    ::Call;
    }
    USoundEffectPreset::EffectCommand<FSubmixEffectMultibandCompressor>
              ((USoundEffectPreset *)this,
               (TFunction<void___cdecl(FSubmixEffectMultibandCompressor_&)> *)local_38);
    return;
  }
  local_40 = 0;
  local_58 = &
             ___7__TFunction_OwnedObject_P6AXAEAVFSubmixEffectMultibandCompressor___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_50 = `USubmixEffectMultibandCompressorPreset::ResetKey'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_68 = (USubmixEffectMultibandCompressorPreset *)
             UE::Core::Private::Function::
             TFunctionRefCaller<void_(__cdecl*)(FSubmixEffectMultibandCompressor_&),void,FSubmixEffectMultibandCompressor_&>
             ::Call;
  USoundEffectPreset::EffectCommand<FSubmixEffectMultibandCompressor>
            ((USoundEffectPreset *)this,
             (TFunction<void___cdecl(FSubmixEffectMultibandCompressor_&)> *)&local_68);
  return;
}

// SetExternalSubmix @ 14f0fb080

void __thiscall
USubmixEffectMultibandCompressorPreset::SetExternalSubmix
          (USubmixEffectMultibandCompressorPreset *this,USoundSubmix *param_1)

{
  USubmixEffectMultibandCompressorPreset *local_68;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  undefined3 uStack_5b;
  undefined **local_58;
  code *local_50;
  undefined8 local_40;
  code *local_38 [5];
  undefined8 *local_10;
  
  if (param_1 != (USoundSubmix *)0x0) {
    uStack_60 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    local_58 = (undefined **)((ulonglong)local_58 & 0xffffffff00000000);
    local_38[0] = (code *)0x0;
    uStack_5c = 2;
    local_68 = this;
    local_10 = FMemory::Malloc(0x20,8);
    *local_10 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`USubmixEffectMultibandCompressorPreset::SetKey'::`5'::<lambda_1>,0,1>
                 ::_vftable_;
    local_10[1] = local_68;
    local_10[2] = CONCAT44(_uStack_5c,uStack_60);
    local_10[3] = local_58;
    if (local_10 + 1 != (undefined8 *)0x0) {
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`USubmixEffectMultibandCompressorPreset::SetKey'::__l5::<lambda_1>,void,FSubmixEffectMultibandCompressor_&>
                    ::Call;
    }
    USoundEffectPreset::EffectCommand<FSubmixEffectMultibandCompressor>
              ((USoundEffectPreset *)this,
               (TFunction<void___cdecl(FSubmixEffectMultibandCompressor_&)> *)local_38);
    return;
  }
  local_40 = 0;
  local_58 = &
             ___7__TFunction_OwnedObject_P6AXAEAVFSubmixEffectMultibandCompressor___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_50 = `USubmixEffectMultibandCompressorPreset::ResetKey'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_68 = (USubmixEffectMultibandCompressorPreset *)
             UE::Core::Private::Function::
             TFunctionRefCaller<void_(__cdecl*)(FSubmixEffectMultibandCompressor_&),void,FSubmixEffectMultibandCompressor_&>
             ::Call;
  USoundEffectPreset::EffectCommand<FSubmixEffectMultibandCompressor>
            ((USoundEffectPreset *)this,
             (TFunction<void___cdecl(FSubmixEffectMultibandCompressor_&)> *)&local_68);
  return;
}

// SetKey @ 14f0fcf60

void __thiscall
USubmixEffectMultibandCompressorPreset::SetKey
          (USubmixEffectMultibandCompressorPreset *this,ESubmixEffectDynamicsKeySource param_1,
          UObject *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uStack_4c;
  undefined4 uStack_44;
  code *local_38 [5];
  undefined8 *local_10;
  
  if (param_2 != (UObject *)0x0) {
    uVar1 = *(undefined4 *)&param_2->field_0xc;
    uStack_4c = CONCAT31(uStack_4c._1_3_,param_1);
    local_38[0] = (code *)0x0;
    local_10 = FMemory::Malloc(0x20,8);
    *local_10 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`USubmixEffectMultibandCompressorPreset::SetKey'::`5'::<lambda_1>,0,1>
                 ::_vftable_;
    local_10[1] = this;
    local_10[2] = CONCAT44(uStack_4c,uVar1);
    local_10[3] = CONCAT44(uStack_44,param_3);
    if (local_10 + 1 != (undefined8 *)0x0) {
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`USubmixEffectMultibandCompressorPreset::SetKey'::__l5::<lambda_1>,void,FSubmixEffectMultibandCompressor_&>
                    ::Call;
    }
    USoundEffectPreset::EffectCommand<FSubmixEffectMultibandCompressor>
              ((USoundEffectPreset *)this,
               (TFunction<void___cdecl(FSubmixEffectMultibandCompressor_&)> *)local_38);
  }
  return;
}

// SetSettings @ 14f101ae0

void __thiscall
USubmixEffectMultibandCompressorPreset::SetSettings
          (USubmixEffectMultibandCompressorPreset *this,
          FSubmixEffectMultibandCompressorSettings *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *local_38 [2];
  undefined **local_28;
  FSubmixEffectMultibandCompressorSettings *local_20;
  undefined8 local_10;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FSubmixEffectMultibandCompressorSettings::operator=(&this->SettingsCopy,param_1);
    USoundEffectPreset::Update((USoundEffectPreset *)this);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_10 = 0;
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`USubmixEffectMultibandCompressorPreset::SetSettings'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`USubmixEffectMultibandCompressorPreset::SetSettings'::__l2::<lambda_1>,void,FSubmixEffectMultibandCompressor_&>
                  ::Call;
    local_20 = param_1;
    USoundEffectPreset::IterateEffects<FSubmixEffectMultibandCompressor>
              ((USoundEffectPreset *)this,
               (TFunction<void___cdecl(FSubmixEffectMultibandCompressor_&)> *)local_38);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StaticRegisterNativesUSubmixEffectMultibandCompressorPreset @ 14f103b40

void __cdecl
USubmixEffectMultibandCompressorPreset::StaticRegisterNativesUSubmixEffectMultibandCompressorPreset
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_USubmixEffectMultibandCompressorPreset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execResetKey @ 14f10d5c0

void __cdecl
USubmixEffectMultibandCompressorPreset::execResetKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &
             ___7__TFunction_OwnedObject_P6AXAEAVFSubmixEffectMultibandCompressor___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_20 = `USubmixEffectMultibandCompressorPreset::ResetKey'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(FSubmixEffectMultibandCompressor_&),void,FSubmixEffectMultibandCompressor_&>
                ::Call;
  USoundEffectPreset::EffectCommand<FSubmixEffectMultibandCompressor>
            ((USoundEffectPreset *)param_1,
             (TFunction<void___cdecl(FSubmixEffectMultibandCompressor_&)> *)local_38);
  return;
}

// execSetAudioBus @ 14f10dfa0

void __cdecl
USubmixEffectMultibandCompressorPreset::execSetAudioBus
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TFunction<void___cdecl(FSubmixEffectMultibandCompressor_&)> *pTVar2;
  longlong local_res10 [3];
  UObject *local_68;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  undefined3 uStack_5b;
  undefined **local_58;
  code *local_50;
  undefined8 local_40;
  code *local_38 [5];
  undefined8 *local_10;
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == 0) {
    local_40 = 0;
    local_58 = &
               ___7__TFunction_OwnedObject_P6AXAEAVFSubmixEffectMultibandCompressor___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    pTVar2 = (TFunction<void___cdecl(FSubmixEffectMultibandCompressor_&)> *)&local_68;
    local_50 = `USubmixEffectMultibandCompressorPreset::ResetKey'::__l2::<lambda_1>::
               <lambda_invoker_cdecl>;
    local_68 = (UObject *)
               UE::Core::Private::Function::
               TFunctionRefCaller<void_(__cdecl*)(FSubmixEffectMultibandCompressor_&),void,FSubmixEffectMultibandCompressor_&>
               ::Call;
  }
  else {
    uStack_60 = *(undefined4 *)(local_res10[0] + 0xc);
    local_58 = (undefined **)CONCAT44(local_58._4_4_,*(byte *)(local_res10[0] + 0x30) + 1);
    uStack_5c = 1;
    local_38[0] = (code *)0x0;
    local_68 = param_1;
    local_10 = FMemory::Malloc(0x20,8);
    *local_10 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`USubmixEffectMultibandCompressorPreset::SetKey'::`5'::<lambda_1>,0,1>
                 ::_vftable_;
    local_10[1] = local_68;
    local_10[2] = CONCAT44(_uStack_5c,uStack_60);
    local_10[3] = local_58;
    if (local_10 + 1 != (undefined8 *)0x0) {
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`USubmixEffectMultibandCompressorPreset::SetKey'::__l5::<lambda_1>,void,FSubmixEffectMultibandCompressor_&>
                    ::Call;
    }
    pTVar2 = (TFunction<void___cdecl(FSubmixEffectMultibandCompressor_&)> *)local_38;
  }
  USoundEffectPreset::EffectCommand<FSubmixEffectMultibandCompressor>
            ((USoundEffectPreset *)param_1,pTVar2);
  return;
}

// execSetExternalSubmix @ 14f10f960

void __cdecl
USubmixEffectMultibandCompressorPreset::execSetExternalSubmix
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TFunction<void___cdecl(FSubmixEffectMultibandCompressor_&)> *pTVar2;
  longlong local_res10;
  UObject *local_68;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  undefined3 uStack_5b;
  undefined8 local_58;
  code *local_50;
  undefined8 local_40;
  code *local_38 [5];
  undefined8 *local_10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == 0) {
    local_40 = 0;
    local_58 = &
               ___7__TFunction_OwnedObject_P6AXAEAVFSubmixEffectMultibandCompressor___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    pTVar2 = (TFunction<void___cdecl(FSubmixEffectMultibandCompressor_&)> *)&local_68;
    local_50 = `USubmixEffectMultibandCompressorPreset::ResetKey'::__l2::<lambda_1>::
               <lambda_invoker_cdecl>;
    local_68 = (UObject *)
               UE::Core::Private::Function::
               TFunctionRefCaller<void_(__cdecl*)(FSubmixEffectMultibandCompressor_&),void,FSubmixEffectMultibandCompressor_&>
               ::Call;
  }
  else {
    uStack_60 = *(undefined4 *)(local_res10 + 0xc);
    uStack_5c = 2;
    local_58 = (undefined **)((ulonglong)local_58._4_4_ << 0x20);
    local_38[0] = (code *)0x0;
    local_68 = param_1;
    local_10 = FMemory::Malloc(0x20,8);
    *local_10 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`USubmixEffectMultibandCompressorPreset::SetKey'::`5'::<lambda_1>,0,1>
                 ::_vftable_;
    local_10[1] = local_68;
    local_10[2] = CONCAT44(_uStack_5c,uStack_60);
    local_10[3] = local_58;
    if (local_10 + 1 != (undefined8 *)0x0) {
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`USubmixEffectMultibandCompressorPreset::SetKey'::__l5::<lambda_1>,void,FSubmixEffectMultibandCompressor_&>
                    ::Call;
    }
    pTVar2 = (TFunction<void___cdecl(FSubmixEffectMultibandCompressor_&)> *)local_38;
  }
  USoundEffectPreset::EffectCommand<FSubmixEffectMultibandCompressor>
            ((USoundEffectPreset *)param_1,pTVar2);
  return;
}

// execSetSettings @ 14f1169c0

void __cdecl
USubmixEffectMultibandCompressorPreset::execSetSettings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *lpCriticalSection;
  FProperty *pFVar1;
  FSubmixEffectMultibandCompressorSettings *pFVar2;
  code *local_78 [2];
  undefined **local_68;
  FSubmixEffectMultibandCompressorSettings *local_60;
  undefined8 local_50;
  FSubmixEffectMultibandCompressorSettings local_48;
  
  local_48.DynamicsProcessorType = Compressor;
  local_48.PeakMode = RootMeanSquared;
  local_48.LinkMode = Average;
  local_48.LookAheadMsec = 3.0;
  local_48.bAnalogMode = true;
  local_48.bFourPole = true;
  local_48.bBypass = false;
  local_48.KeySource = Default;
  local_48.ExternalAudioBus.field0_0x0.DebugPtr = (TObjectPtr<UAudioBus>_u_0)0x0;
  local_48.ExternalSubmix.field0_0x0.DebugPtr = (TObjectPtr<USoundSubmix>_u_0)0x0;
  local_48.KeyGainDb = 0.0;
  local_48.bKeyAudition = false;
  local_48.Bands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Bands.ArrayNum = 0;
  local_48.Bands.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pFVar2 = &local_48;
  if ((FSubmixEffectMultibandCompressorSettings *)param_2->MostRecentPropertyAddress !=
      (FSubmixEffectMultibandCompressorSettings *)0x0) {
    pFVar2 = (FSubmixEffectMultibandCompressorSettings *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lpCriticalSection = &param_1[2].field_0x18;
  if (lpCriticalSection != (undefined1 *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FSubmixEffectMultibandCompressorSettings::operator=
              ((FSubmixEffectMultibandCompressorSettings *)&param_1[3].field_0x18,pFVar2);
    USoundEffectPreset::Update((USoundEffectPreset *)param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_50 = 0;
    local_68 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`USubmixEffectMultibandCompressorPreset::SetSettings'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`USubmixEffectMultibandCompressorPreset::SetSettings'::__l2::<lambda_1>,void,FSubmixEffectMultibandCompressor_&>
                  ::Call;
    local_60 = pFVar2;
    USoundEffectPreset::IterateEffects<FSubmixEffectMultibandCompressor>
              ((USoundEffectPreset *)param_1,
               (TFunction<void___cdecl(FSubmixEffectMultibandCompressor_&)> *)local_78);
    if (local_48.Bands.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Bands.AllocatorInstance.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

