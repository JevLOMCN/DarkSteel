// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 16

// StaticClass @ 14f0a81e0

UClass * __cdecl USourceEffectFilterPreset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectFilterPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectFilterPreset",
               &Z_Registration_Info_UClass_USourceEffectFilterPreset.InnerSingleton,
               StaticRegisterNativesUSourceEffectFilterPreset,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USourceEffectFilterPreset>,
               InternalVTableHelperCtorCaller<USourceEffectFilterPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectFilterPreset.InnerSingleton;
}

// USourceEffectFilterPreset @ 14f0ba630

USourceEffectFilterPreset * __thiscall
USourceEffectFilterPreset::USourceEffectFilterPreset
          (USourceEffectFilterPreset *this,FVTableHelper *param_1)

{
  USoundEffectSourcePreset::USoundEffectSourcePreset((USoundEffectSourcePreset *)this,param_1);
  this->_padding_ = (longlong)&___7USourceEffectFilterPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).FilterCircuit = StateVariable;
  (this->SettingsCopy).FilterType = LowPass;
  (this->SettingsCopy).AudioBusModulation.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SettingsCopy).AudioBusModulation.ArrayNum = 0;
  (this->SettingsCopy).AudioBusModulation.ArrayMax = 0;
  (this->Settings).AudioBusModulation.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Settings).AudioBusModulation.ArrayNum = 0;
  (this->Settings).AudioBusModulation.ArrayMax = 0;
  (this->SettingsCopy).CutoffFrequency = 800.0;
  (this->SettingsCopy).FilterQ = 2.0;
  (this->Settings).FilterCircuit = StateVariable;
  (this->Settings).FilterType = LowPass;
  (this->Settings).CutoffFrequency = 800.0;
  (this->Settings).FilterQ = 2.0;
  return this;
}

// USourceEffectFilterPreset @ 14f0ba6c0

USourceEffectFilterPreset * __thiscall
USourceEffectFilterPreset::USourceEffectFilterPreset
          (USourceEffectFilterPreset *this,FObjectInitializer *param_1)

{
  USoundEffectSourcePreset::USoundEffectSourcePreset((USoundEffectSourcePreset *)this,param_1);
  this->_padding_ = (longlong)&___7USourceEffectFilterPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).FilterCircuit = StateVariable;
  (this->SettingsCopy).FilterType = LowPass;
  (this->SettingsCopy).AudioBusModulation.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SettingsCopy).AudioBusModulation.ArrayNum = 0;
  (this->SettingsCopy).AudioBusModulation.ArrayMax = 0;
  (this->Settings).AudioBusModulation.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Settings).AudioBusModulation.ArrayNum = 0;
  (this->Settings).AudioBusModulation.ArrayMax = 0;
  (this->SettingsCopy).CutoffFrequency = 800.0;
  (this->SettingsCopy).FilterQ = 2.0;
  (this->Settings).FilterCircuit = StateVariable;
  (this->Settings).FilterType = LowPass;
  (this->Settings).CutoffFrequency = 800.0;
  (this->Settings).FilterQ = 2.0;
  return this;
}

// ~USourceEffectFilterPreset @ 14f0c0410

void __thiscall
USourceEffectFilterPreset::~USourceEffectFilterPreset(USourceEffectFilterPreset *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USourceEffectFilterPreset__6B_;
  pFVar1 = (this->Settings).AudioBusModulation.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SettingsCopy).AudioBusModulation.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSourcePreset::~USoundEffectSourcePreset((USoundEffectSourcePreset *)this);
  return;
}

// CanFilter @ 14f0cbb70

bool __thiscall USourceEffectFilterPreset::CanFilter(USourceEffectFilterPreset *this)

{
  return false;
}

// CreateNewEffect @ 14f0d08a0

FSoundEffectBase * __thiscall
USourceEffectFilterPreset::CreateNewEffect(USourceEffectFilterPreset *this)

{
  FSoundEffectBase *this_00;
  
  this_00 = ::operator_new(0x550);
  if (this_00 != (FSoundEffectBase *)0x0) {
    FSoundEffectBase::FSoundEffectBase(this_00);
    this_00[1].SettingsCritSect.CriticalSection.Opaque1[0] = (void *)0xffffffffffffffff;
    this_00->_padding_ = (longlong)&___7FSourceEffectFilter__6B_;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    Audio::FStateVariableFilter::FStateVariableFilter
              ((FStateVariableFilter *)this_00[1].SettingsCritSect.CriticalSection.Opaque2);
    Audio::FLadderFilter::FLadderFilter
              ((FLadderFilter *)&this_00[2].Preset.WeakPtr.ObjectSerialNumber);
    Audio::FOnePoleFilter::FOnePoleFilter((FOnePoleFilter *)&this_00[9].CommandQueue);
    this_00[0xb].SettingsCritSect.CriticalSection.Opaque2[0] = 0;
    this_00[0xb].SettingsCritSect.CriticalSection.Opaque2[1] = 0;
    *(undefined4 *)this_00[0xb].SettingsCritSect.CriticalSection.Opaque3 = 0;
    *(undefined4 *)((longlong)this_00[0xb].SettingsCritSect.CriticalSection.Opaque3 + 4) =
         0x45fa0000;
    *(undefined4 *)(this_00[0xb].SettingsCritSect.CriticalSection.Opaque3 + 1) = 0x45fa0000;
    *(undefined4 *)((longlong)this_00[0xb].SettingsCritSect.CriticalSection.Opaque3 + 0xc) =
         0x40000000;
    *(undefined4 *)(this_00[0xb].SettingsCritSect.CriticalSection.Opaque3 + 2) = 0x40000000;
    *(undefined2 *)((longlong)this_00[0xb].SettingsCritSect.CriticalSection.Opaque3 + 0x14) = 1;
    this_00[0xb].CurrentAudioThreadSettingsData.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    this_00[0xb].CurrentAudioThreadSettingsData.ArrayNum = 0;
    this_00[0xb].CurrentAudioThreadSettingsData.ArrayMax = 0;
    this_00[0xb].bChanged = (FThreadSafeBool)0x0;
    this_00[0xb].Preset.WeakPtr.ObjectIndex = 0;
    *(undefined8 *)&this_00[0xb].Preset.WeakPtr.ObjectSerialNumber = 0;
    this_00[0xb].bIsRunning = (FThreadSafeBool)0x0;
    this_00[0xb].bIsActive = (FThreadSafeBool)0x0;
    this_00[0xb].CommandQueue.Head = (TNode *)0x0;
    this_00[0xb].CommandQueue.Tail = (TNode *)0x0;
    this_00[0xc]._padding_ = 0;
    return this_00;
  }
  return (FSoundEffectBase *)0x0;
}

// CreateNewPreset @ 14f0d1940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USoundEffectPreset * __thiscall
USourceEffectFilterPreset::CreateNewPreset
          (USourceEffectFilterPreset *this,UObject *param_1,FName param_2,EObjectFlags param_3)

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

// GetAssetActionName @ 14f0d8890

FText * __thiscall
USourceEffectFilterPreset::GetAssetActionName
          (USourceEffectFilterPreset *this,FText *__return_storage_ptr__)

{
  FText::FromString(__return_storage_ptr__,"SourceEffectFilter");
  return __return_storage_ptr__;
}

// GetPresetColor @ 14f0dbc90

FColor __thiscall USourceEffectFilterPreset::GetPresetColor(USourceEffectFilterPreset *this)

{
  undefined4 *in_RDX;
  
  *in_RDX = 0xff8b9862;
  return (FColor)SUB84(in_RDX,0);
}

// GetPrivateStaticClass @ 14f0dc6c0

UClass * __cdecl USourceEffectFilterPreset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectFilterPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectFilterPreset",
               &Z_Registration_Info_UClass_USourceEffectFilterPreset.InnerSingleton,
               StaticRegisterNativesUSourceEffectFilterPreset,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USourceEffectFilterPreset>,
               InternalVTableHelperCtorCaller<USourceEffectFilterPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectFilterPreset.InnerSingleton;
}

// GetSupportedClass @ 14f0dee30

UClass * __thiscall USourceEffectFilterPreset::GetSupportedClass(USourceEffectFilterPreset *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectFilterPreset.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectFilterPreset",
               &Z_Registration_Info_UClass_USourceEffectFilterPreset.InnerSingleton,
               StaticRegisterNativesUSourceEffectFilterPreset,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USourceEffectFilterPreset>,
               InternalVTableHelperCtorCaller<USourceEffectFilterPreset>,aFStackX_8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectFilterPreset.InnerSingleton;
}

// HasAssetActions @ 14f0df540

bool __thiscall USourceEffectFilterPreset::HasAssetActions(USourceEffectFilterPreset *this)

{
  return true;
}

// Init @ 14f0e5d60

void __thiscall USourceEffectFilterPreset::Init(USourceEffectFilterPreset *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FSourceEffectFilterSettings::operator=(&this->SettingsCopy,&this->Settings);
                    /* WARNING: Could not recover jumptable at 0x00014f0e5d9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetSettings @ 14f101460

void __thiscall
USourceEffectFilterPreset::SetSettings
          (USourceEffectFilterPreset *this,FSourceEffectFilterSettings *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FSourceEffectFilterSettings::operator=(&this->SettingsCopy,param_1);
    USoundEffectPreset::Update((USoundEffectPreset *)this);
                    /* WARNING: Could not recover jumptable at 0x00014f1014b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StaticRegisterNativesUSourceEffectFilterPreset @ 14f103780

void __cdecl USourceEffectFilterPreset::StaticRegisterNativesUSourceEffectFilterPreset(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_USourceEffectFilterPreset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetSettings @ 14f115b90

void __cdecl
USourceEffectFilterPreset::execSetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *lpCriticalSection;
  FProperty *pFVar1;
  FSourceEffectFilterSettings *pFVar2;
  FSourceEffectFilterSettings local_28;
  
  local_28.FilterCircuit = StateVariable;
  local_28.FilterType = LowPass;
  local_28.CutoffFrequency = 800.0;
  local_28.FilterQ = 2.0;
  local_28.AudioBusModulation.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.AudioBusModulation.ArrayNum = 0;
  local_28.AudioBusModulation.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar2 = &local_28;
  if ((FSourceEffectFilterSettings *)param_2->MostRecentPropertyAddress !=
      (FSourceEffectFilterSettings *)0x0) {
    pFVar2 = (FSourceEffectFilterSettings *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lpCriticalSection = &param_1[2].field_0x18;
  if (lpCriticalSection != (undefined1 *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FSourceEffectFilterSettings::operator=
              ((FSourceEffectFilterSettings *)&param_1[3].field_0x18,pFVar2);
    USoundEffectPreset::Update((USoundEffectPreset *)param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (local_28.AudioBusModulation.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AudioBusModulation.AllocatorInstance.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

