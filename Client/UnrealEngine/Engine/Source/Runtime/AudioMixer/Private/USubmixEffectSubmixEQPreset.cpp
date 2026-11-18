// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 15

// StaticClass @ 146536530

UClass * __cdecl USubmixEffectSubmixEQPreset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectSubmixEQPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"SubmixEffectSubmixEQPreset",
               &Z_Registration_Info_UClass_USubmixEffectSubmixEQPreset.InnerSingleton,
               StaticRegisterNativesUSubmixEffectSubmixEQPreset,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USubmixEffectSubmixEQPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectSubmixEQPreset>,local_res8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectSubmixEQPreset.InnerSingleton;
}

// USubmixEffectSubmixEQPreset @ 14653f050

USubmixEffectSubmixEQPreset * __thiscall
USubmixEffectSubmixEQPreset::USubmixEffectSubmixEQPreset
          (USubmixEffectSubmixEQPreset *this,FVTableHelper *param_1)

{
  USoundEffectSubmixPreset::USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this,param_1);
  this->_padding_ = (longlong)&___7USubmixEffectSubmixEQPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).EQBands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SettingsCopy).EQBands.ArrayNum = 0;
  (this->SettingsCopy).EQBands.ArrayMax = 0;
  (this->Settings).EQBands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Settings).EQBands.ArrayNum = 0;
  (this->Settings).EQBands.ArrayMax = 0;
  return this;
}

// USubmixEffectSubmixEQPreset @ 14653f0b0

USubmixEffectSubmixEQPreset * __thiscall
USubmixEffectSubmixEQPreset::USubmixEffectSubmixEQPreset
          (USubmixEffectSubmixEQPreset *this,FObjectInitializer *param_1)

{
  USoundEffectSubmixPreset::USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this,param_1);
  this->_padding_ = (longlong)&___7USubmixEffectSubmixEQPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).EQBands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SettingsCopy).EQBands.ArrayNum = 0;
  (this->SettingsCopy).EQBands.ArrayMax = 0;
  (this->Settings).EQBands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Settings).EQBands.ArrayNum = 0;
  (this->Settings).EQBands.ArrayMax = 0;
  return this;
}

// ~USubmixEffectSubmixEQPreset @ 146541530

void __thiscall
USubmixEffectSubmixEQPreset::~USubmixEffectSubmixEQPreset(USubmixEffectSubmixEQPreset *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USubmixEffectSubmixEQPreset__6B_;
  pFVar1 = (this->Settings).EQBands.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SettingsCopy).EQBands.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSubmixPreset::~USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this);
  return;
}

// CanFilter @ 146548ed0

bool __thiscall USubmixEffectSubmixEQPreset::CanFilter(USubmixEffectSubmixEQPreset *this)

{
  return false;
}

// CreateNewEffect @ 14654edd0

FSoundEffectBase * __thiscall
USubmixEffectSubmixEQPreset::CreateNewEffect(USubmixEffectSubmixEQPreset *this)

{
  FSoundEffectBase *this_00;
  
  this_00 = ::operator_new(0x120);
  if (this_00 != (FSoundEffectBase *)0x0) {
    FSoundEffectBase::FSoundEffectBase(this_00);
    *(undefined4 *)&this_00[1]._padding_ = 0xffffffff;
    this_00[1]._padding_ = 0;
    this_00->_padding_ = (longlong)&___7FSubmixEffectSubmixEQ__6B_;
    *(undefined4 *)this_00[1].SettingsCritSect.CriticalSection.Opaque1 = 0;
    *(undefined4 *)((longlong)this_00[1].SettingsCritSect.CriticalSection.Opaque1 + 4) = 0xffffffff;
    this_00[1].SettingsCritSect.CriticalSection.Opaque2[0] = 0;
    this_00[1].SettingsCritSect.CriticalSection.Opaque2[1] = 0;
    this_00[1].SettingsCritSect.CriticalSection.Opaque3[0] = (void *)0x0;
    *(undefined4 *)&this_00[1].CurrentAudioThreadSettingsData.AllocatorInstance.Data = 0;
    *(undefined4 *)((longlong)&this_00[1].CurrentAudioThreadSettingsData.AllocatorInstance.Data + 4)
         = 0x40000000;
    *(undefined1 *)&this_00[1].bChanged = 0;
    *(undefined8 *)&this_00[1].Preset.WeakPtr.ObjectSerialNumber = 0;
    this_00[1].bIsRunning = (FThreadSafeBool)0x0;
    this_00[1].bIsActive = (FThreadSafeBool)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this_00[1].CommandQueue,4000);
    this_00[2].SettingsCritSect.CriticalSection.Opaque2[0] = 0;
    this_00[2].SettingsCritSect.CriticalSection.Opaque2[1] = 0;
    this_00[2].SettingsCritSect.CriticalSection.Opaque3[0] = (void *)0x0;
    this_00[2].SettingsCritSect.CriticalSection.Opaque3[1] = (void *)0x0;
    this_00[2].SettingsCritSect.CriticalSection.Opaque3[2] = (void *)0x0;
    this_00[1].SettingsCritSect.CriticalSection.Opaque3[1] = (void *)0x0;
    this_00[1].SettingsCritSect.CriticalSection.Opaque3[2] = (void *)0x0;
    return this_00;
  }
  return (FSoundEffectBase *)0x0;
}

// CreateNewPreset @ 14654f0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USoundEffectPreset * __thiscall
USubmixEffectSubmixEQPreset::CreateNewPreset
          (USubmixEffectSubmixEQPreset *this,UObject *param_1,FName param_2,EObjectFlags param_3)

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

// GetAssetActionName @ 146555110

FText * __thiscall
USubmixEffectSubmixEQPreset::GetAssetActionName
          (USubmixEffectSubmixEQPreset *this,FText *__return_storage_ptr__)

{
  FText::FromString(__return_storage_ptr__,"SubmixEffectSubmixEQ");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14655a460

UClass * __cdecl USubmixEffectSubmixEQPreset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectSubmixEQPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"SubmixEffectSubmixEQPreset",
               &Z_Registration_Info_UClass_USubmixEffectSubmixEQPreset.InnerSingleton,
               StaticRegisterNativesUSubmixEffectSubmixEQPreset,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USubmixEffectSubmixEQPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectSubmixEQPreset>,local_res8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectSubmixEQPreset.InnerSingleton;
}

// GetSupportedClass @ 14655b7e0

UClass * __thiscall
USubmixEffectSubmixEQPreset::GetSupportedClass(USubmixEffectSubmixEQPreset *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectSubmixEQPreset.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"SubmixEffectSubmixEQPreset",
               &Z_Registration_Info_UClass_USubmixEffectSubmixEQPreset.InnerSingleton,
               StaticRegisterNativesUSubmixEffectSubmixEQPreset,0xb0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USubmixEffectSubmixEQPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectSubmixEQPreset>,aFStackX_8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectSubmixEQPreset.InnerSingleton;
}

// HasAssetActions @ 14655c380

bool __thiscall USubmixEffectSubmixEQPreset::HasAssetActions(USubmixEffectSubmixEQPreset *this)

{
  return true;
}

// Init @ 14655e2b0

void __thiscall USubmixEffectSubmixEQPreset::Init(USubmixEffectSubmixEQPreset *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FSubmixEffectSubmixEQSettings::operator=(&this->SettingsCopy,&this->Settings);
                    /* WARNING: Could not recover jumptable at 0x00014655e2ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetSettings @ 146574630

void __thiscall
USubmixEffectSubmixEQPreset::SetSettings
          (USubmixEffectSubmixEQPreset *this,FSubmixEffectSubmixEQSettings *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FSubmixEffectSubmixEQSettings::operator=(&this->SettingsCopy,param_1);
    USoundEffectPreset::Update((USoundEffectPreset *)this);
                    /* WARNING: Could not recover jumptable at 0x000146574680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StaticRegisterNativesUSubmixEffectSubmixEQPreset @ 146577a00

void __cdecl USubmixEffectSubmixEQPreset::StaticRegisterNativesUSubmixEffectSubmixEQPreset(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_USubmixEffectSubmixEQPreset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetSettings @ 146582a60

void __cdecl
USubmixEffectSubmixEQPreset::execSetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *lpCriticalSection;
  FProperty *pFVar1;
  FSubmixEffectSubmixEQSettings *pFVar2;
  FSubmixEffectSubmixEQSettings local_18;
  
  local_18.EQBands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.EQBands.ArrayNum = 0;
  local_18.EQBands.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar2 = &local_18;
  if ((FSubmixEffectSubmixEQSettings *)param_2->MostRecentPropertyAddress !=
      (FSubmixEffectSubmixEQSettings *)0x0) {
    pFVar2 = (FSubmixEffectSubmixEQSettings *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lpCriticalSection = &param_1[2].field_0x18;
  if (lpCriticalSection != (undefined1 *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FSubmixEffectSubmixEQSettings::operator=
              ((FSubmixEffectSubmixEQSettings *)&param_1[3].field_0x18,pFVar2);
    USoundEffectPreset::Update((USoundEffectPreset *)param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (local_18.EQBands.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.EQBands.AllocatorInstance.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

