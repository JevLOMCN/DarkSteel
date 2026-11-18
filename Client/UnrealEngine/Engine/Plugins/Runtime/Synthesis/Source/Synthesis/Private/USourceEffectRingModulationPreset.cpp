// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 16

// StaticClass @ 14f0aa180

UClass * __cdecl USourceEffectRingModulationPreset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectRingModulationPreset.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectRingModulationPreset",
               &Z_Registration_Info_UClass_USourceEffectRingModulationPreset.InnerSingleton,
               StaticRegisterNativesUSourceEffectRingModulationPreset,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USourceEffectRingModulationPreset>,
               InternalVTableHelperCtorCaller<USourceEffectRingModulationPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectRingModulationPreset.InnerSingleton;
}

// USourceEffectRingModulationPreset @ 14f0bab70

USourceEffectRingModulationPreset * __thiscall
USourceEffectRingModulationPreset::USourceEffectRingModulationPreset
          (USourceEffectRingModulationPreset *this,FVTableHelper *param_1)

{
  USoundEffectSourcePreset::USoundEffectSourcePreset((USoundEffectSourcePreset *)this,param_1);
  this->_padding_ = (longlong)&___7USourceEffectRingModulationPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).ModulatorType = Sine;
  (this->SettingsCopy).AudioBusModulator.field0_0x0.DebugPtr = (UAudioBus *)0x0;
  (this->Settings).ModulatorType = Sine;
  (this->Settings).AudioBusModulator.field0_0x0.DebugPtr = (UAudioBus *)0x0;
  (this->SettingsCopy).Frequency = 100.0;
  (this->SettingsCopy).Depth = 0.5;
  (this->SettingsCopy).DryLevel = 0.0;
  (this->SettingsCopy).WetLevel = 1.0;
  (this->Settings).Frequency = 100.0;
  (this->Settings).Depth = 0.5;
  (this->Settings).DryLevel = 0.0;
  (this->Settings).WetLevel = 1.0;
  return this;
}

// USourceEffectRingModulationPreset @ 14f0bac10

USourceEffectRingModulationPreset * __thiscall
USourceEffectRingModulationPreset::USourceEffectRingModulationPreset
          (USourceEffectRingModulationPreset *this,FObjectInitializer *param_1)

{
  USoundEffectSourcePreset::USoundEffectSourcePreset((USoundEffectSourcePreset *)this,param_1);
  this->_padding_ = (longlong)&___7USourceEffectRingModulationPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).ModulatorType = Sine;
  (this->SettingsCopy).AudioBusModulator.field0_0x0.DebugPtr = (UAudioBus *)0x0;
  (this->Settings).ModulatorType = Sine;
  (this->Settings).AudioBusModulator.field0_0x0.DebugPtr = (UAudioBus *)0x0;
  (this->SettingsCopy).Frequency = 100.0;
  (this->SettingsCopy).Depth = 0.5;
  (this->SettingsCopy).DryLevel = 0.0;
  (this->SettingsCopy).WetLevel = 1.0;
  (this->Settings).Frequency = 100.0;
  (this->Settings).Depth = 0.5;
  (this->Settings).DryLevel = 0.0;
  (this->Settings).WetLevel = 1.0;
  return this;
}

// ~USourceEffectRingModulationPreset @ 14f0c05c0

void __thiscall
USourceEffectRingModulationPreset::~USourceEffectRingModulationPreset
          (USourceEffectRingModulationPreset *this)

{
  this->_padding_ = (longlong)&___7USourceEffectRingModulationPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSourcePreset::~USoundEffectSourcePreset((USoundEffectSourcePreset *)this);
  return;
}

// CanFilter @ 14f0cbbd0

bool __thiscall
USourceEffectRingModulationPreset::CanFilter(USourceEffectRingModulationPreset *this)

{
  return false;
}

// CreateNewEffect @ 14f0d0ba0

FSoundEffectBase * __thiscall
USourceEffectRingModulationPreset::CreateNewEffect(USourceEffectRingModulationPreset *this)

{
  FSoundEffectBase *this_00;
  
  this_00 = ::operator_new(0x210);
  if (this_00 != (FSoundEffectBase *)0x0) {
    FSoundEffectBase::FSoundEffectBase(this_00);
    this_00[1]._padding_ = 0;
    this_00->_padding_ = (longlong)&___7FSourceEffectRingModulation__6B_;
    this_00[1]._padding_ = 0;
    this_00[1].SettingsCritSect.CriticalSection.Opaque1[0] = (void *)0xffffffffffffffff;
    Audio::FRingModulation::FRingModulation
              ((FRingModulation *)this_00[1].SettingsCritSect.CriticalSection.Opaque2);
    this_00[4].CurrentAudioThreadSettingsData.ArrayMax = 0;
    return this_00;
  }
  return (FSoundEffectBase *)0x0;
}

// CreateNewPreset @ 14f0d1f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USoundEffectPreset * __thiscall
USourceEffectRingModulationPreset::CreateNewPreset
          (USourceEffectRingModulationPreset *this,UObject *param_1,FName param_2,
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

// GetAssetActionName @ 14f0d89b0

FText * __thiscall
USourceEffectRingModulationPreset::GetAssetActionName
          (USourceEffectRingModulationPreset *this,FText *__return_storage_ptr__)

{
  FText::FromString(__return_storage_ptr__,"SourceEffectRingModulation");
  return __return_storage_ptr__;
}

// GetPresetColor @ 14f0dbcf0

FColor __thiscall
USourceEffectRingModulationPreset::GetPresetColor(USourceEffectRingModulationPreset *this)

{
  undefined4 *in_RDX;
  
  *in_RDX = 0xff7a7dc3;
  return (FColor)SUB84(in_RDX,0);
}

// GetPrivateStaticClass @ 14f0dcb40

UClass * __cdecl USourceEffectRingModulationPreset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectRingModulationPreset.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectRingModulationPreset",
               &Z_Registration_Info_UClass_USourceEffectRingModulationPreset.InnerSingleton,
               StaticRegisterNativesUSourceEffectRingModulationPreset,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USourceEffectRingModulationPreset>,
               InternalVTableHelperCtorCaller<USourceEffectRingModulationPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectRingModulationPreset.InnerSingleton;
}

// GetSupportedClass @ 14f0dee90

UClass * __thiscall
USourceEffectRingModulationPreset::GetSupportedClass(USourceEffectRingModulationPreset *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectRingModulationPreset.InnerSingleton == (UClass *)0x0)
  {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectRingModulationPreset",
               &Z_Registration_Info_UClass_USourceEffectRingModulationPreset.InnerSingleton,
               StaticRegisterNativesUSourceEffectRingModulationPreset,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USourceEffectRingModulationPreset>,
               InternalVTableHelperCtorCaller<USourceEffectRingModulationPreset>,aFStackX_8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectRingModulationPreset.InnerSingleton;
}

// HasAssetActions @ 14f0df5a0

bool __thiscall
USourceEffectRingModulationPreset::HasAssetActions(USourceEffectRingModulationPreset *this)

{
  return true;
}

// Init @ 14f0e5fd0

void __thiscall USourceEffectRingModulationPreset::Init(USourceEffectRingModulationPreset *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  UAudioBus *pUVar1;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->SettingsCopy).ModulatorType = (this->Settings).ModulatorType;
    (this->SettingsCopy).Frequency = (this->Settings).Frequency;
    (this->SettingsCopy).Depth = (this->Settings).Depth;
    (this->SettingsCopy).DryLevel = (this->Settings).DryLevel;
    (this->SettingsCopy).WetLevel = (this->Settings).WetLevel;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (this->Settings).AudioBusModulator.field0_0x0.DebugPtr, pUVar1 != (UAudioBus *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->SettingsCopy).AudioBusModulator.field0_0x0 =
         (this->Settings).AudioBusModulator.field0_0x0;
                    /* WARNING: Could not recover jumptable at 0x00014f0e6065. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetSettings @ 14f101710

void __thiscall
USourceEffectRingModulationPreset::SetSettings
          (USourceEffectRingModulationPreset *this,FSourceEffectRingModulationSettings *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  UAudioBus *pUVar1;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->SettingsCopy).ModulatorType = param_1->ModulatorType;
    (this->SettingsCopy).Frequency = param_1->Frequency;
    (this->SettingsCopy).Depth = param_1->Depth;
    (this->SettingsCopy).DryLevel = param_1->DryLevel;
    (this->SettingsCopy).WetLevel = param_1->WetLevel;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (param_1->AudioBusModulator).field0_0x0.DebugPtr, pUVar1 != (UAudioBus *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->SettingsCopy).AudioBusModulator.field0_0x0 = (param_1->AudioBusModulator).field0_0x0;
    USoundEffectPreset::Update((USoundEffectPreset *)this);
                    /* WARNING: Could not recover jumptable at 0x00014f1017a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StaticRegisterNativesUSourceEffectRingModulationPreset @ 14f103900

void __cdecl
USourceEffectRingModulationPreset::StaticRegisterNativesUSourceEffectRingModulationPreset(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_USourceEffectRingModulationPreset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetSettings @ 14f1161b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
USourceEffectRingModulationPreset::execSetSettings(UObject *param_1,FFrame *param_2,void *param_3)

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
  uchar *puVar9;
  uchar local_28 [4];
  undefined8 local_24;
  undefined8 uStack_1c;
  undefined8 local_10;
  
  local_28[0] = '\0';
  local_24 = ___xmm_3f800000000000003f00000042c80000;
  uStack_1c = _UNK_15314de18;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  puVar9 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lpCriticalSection = &param_1[2].field_0x18;
  if (lpCriticalSection != (undefined1 *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    param_1[3].field_0x18 = *puVar9;
    uVar2 = puVar9[5];
    uVar3 = puVar9[6];
    uVar4 = puVar9[7];
    param_1[3].field_0x1c = puVar9[4];
    param_1[3].field_0x1d = uVar2;
    param_1[3].field_0x1e = uVar3;
    param_1[3].field_0x1f = uVar4;
    uVar2 = puVar9[9];
    uVar3 = puVar9[10];
    uVar4 = puVar9[0xb];
    param_1[3].field_0x20 = puVar9[8];
    param_1[3].field_0x21 = uVar2;
    param_1[3].field_0x22 = uVar3;
    param_1[3].field_0x23 = uVar4;
    uVar2 = puVar9[0xd];
    uVar3 = puVar9[0xe];
    uVar4 = puVar9[0xf];
    param_1[3].field_0x24 = puVar9[0xc];
    param_1[3].field_0x25 = uVar2;
    param_1[3].field_0x26 = uVar3;
    param_1[3].field_0x27 = uVar4;
    uVar2 = puVar9[0x11];
    uVar3 = puVar9[0x12];
    uVar4 = puVar9[0x13];
    param_1[4].field_0x0 = puVar9[0x10];
    param_1[4].field_0x1 = uVar2;
    param_1[4].field_0x2 = uVar3;
    param_1[4].field_0x3 = uVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)(puVar9 + 0x18) != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)(puVar9 + 0x18));
    }
    uVar2 = puVar9[0x19];
    uVar3 = puVar9[0x1a];
    uVar4 = puVar9[0x1b];
    uVar5 = puVar9[0x1c];
    uVar6 = puVar9[0x1d];
    uVar7 = puVar9[0x1e];
    uVar8 = puVar9[0x1f];
    param_1[4].field_0x8 = puVar9[0x18];
    param_1[4].field_0x9 = uVar2;
    param_1[4].field_0xa = uVar3;
    param_1[4].field_0xb = uVar4;
    param_1[4].field_0xc = uVar5;
    param_1[4].field_0xd = uVar6;
    param_1[4].field_0xe = uVar7;
    param_1[4].field_0xf = uVar8;
    USoundEffectPreset::Update((USoundEffectPreset *)param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

