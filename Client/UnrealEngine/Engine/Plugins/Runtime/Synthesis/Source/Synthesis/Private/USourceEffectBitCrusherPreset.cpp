// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 34

// StaticClass @ 14f0a4050

UClass * __cdecl USourceEffectBitCrusherPreset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectBitCrusherPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectBitCrusherPreset",
               &Z_Registration_Info_UClass_USourceEffectBitCrusherPreset.InnerSingleton,
               StaticRegisterNativesUSourceEffectBitCrusherPreset,0x1f0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USourceEffectBitCrusherPreset>,
               InternalVTableHelperCtorCaller<USourceEffectBitCrusherPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectBitCrusherPreset.InnerSingleton;
}

// USourceEffectBitCrusherPreset @ 14f0b9e20

USourceEffectBitCrusherPreset * __thiscall
USourceEffectBitCrusherPreset::USourceEffectBitCrusherPreset
          (USourceEffectBitCrusherPreset *this,FVTableHelper *param_1)

{
  USoundEffectSourcePreset::USoundEffectSourcePreset((USoundEffectSourcePreset *)this,param_1);
  this->_padding_ = (longlong)&___7USourceEffectBitCrusherPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  *(undefined8 *)&(this->SettingsCopy).SampleRateModulation.Modulators.Elements = 0;
  *(undefined8 *)&(this->SettingsCopy).SampleRateModulation.Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SettingsCopy).SampleRateModulation.Modulators.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SettingsCopy).SampleRateModulation.Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SettingsCopy).SampleRateModulation.Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SettingsCopy).SampleRateModulation.Modulators.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->SettingsCopy).SampleRateModulation.Modulators.Elements.field_0x30 =
       0xffffffff;
  (this->SettingsCopy).SampleRateModulation.Modulators.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->SettingsCopy).SampleRateModulation.Modulators.HashSize = 0;
  *(undefined8 *)&(this->SettingsCopy).BitModulation.Modulators.Elements = 0;
  *(undefined8 *)&(this->SettingsCopy).BitModulation.Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SettingsCopy).BitModulation.Modulators.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SettingsCopy).BitModulation.Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SettingsCopy).BitModulation.Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SettingsCopy).BitModulation.Modulators.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->SettingsCopy).BitModulation.Modulators.Elements.field_0x30 = 0xffffffff;
  (this->SettingsCopy).BitModulation.Modulators.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->SettingsCopy).BitModulation.Modulators.HashSize = 0;
  (this->SettingsCopy).SampleRateModulation.Value = 8000.0;
  (this->SettingsCopy).BitModulation.Value = 8.0;
  *(undefined8 *)&(this->Settings).SampleRateModulation.Modulators.Elements = 0;
  *(undefined8 *)&(this->Settings).SampleRateModulation.Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Settings).SampleRateModulation.Modulators.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Settings).SampleRateModulation.Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Settings).SampleRateModulation.Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Settings).SampleRateModulation.Modulators.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->Settings).SampleRateModulation.Modulators.Elements.field_0x30 = 0xffffffff;
  (this->Settings).SampleRateModulation.Modulators.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->Settings).SampleRateModulation.Modulators.HashSize = 0;
  *(undefined8 *)&(this->Settings).BitModulation.Modulators.Elements = 0;
  *(undefined8 *)&(this->Settings).BitModulation.Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Settings).BitModulation.Modulators.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Settings).BitModulation.Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Settings).BitModulation.Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Settings).BitModulation.Modulators.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->Settings).BitModulation.Modulators.Elements.field_0x30 = 0xffffffff;
  (this->Settings).BitModulation.Modulators.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Settings).BitModulation.Modulators.HashSize = 0;
  (this->Settings).SampleRateModulation.Value = 8000.0;
  (this->Settings).BitModulation.Value = 8.0;
  return this;
}

// USourceEffectBitCrusherPreset @ 14f0b9f90

USourceEffectBitCrusherPreset * __thiscall
USourceEffectBitCrusherPreset::USourceEffectBitCrusherPreset
          (USourceEffectBitCrusherPreset *this,FObjectInitializer *param_1)

{
  USoundEffectSourcePreset::USoundEffectSourcePreset((USoundEffectSourcePreset *)this,param_1);
  this->_padding_ = (longlong)&___7USourceEffectBitCrusherPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  *(undefined8 *)&(this->SettingsCopy).SampleRateModulation.Modulators.Elements = 0;
  *(undefined8 *)&(this->SettingsCopy).SampleRateModulation.Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SettingsCopy).SampleRateModulation.Modulators.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SettingsCopy).SampleRateModulation.Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SettingsCopy).SampleRateModulation.Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SettingsCopy).SampleRateModulation.Modulators.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->SettingsCopy).SampleRateModulation.Modulators.Elements.field_0x30 =
       0xffffffff;
  (this->SettingsCopy).SampleRateModulation.Modulators.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->SettingsCopy).SampleRateModulation.Modulators.HashSize = 0;
  *(undefined8 *)&(this->SettingsCopy).BitModulation.Modulators.Elements = 0;
  *(undefined8 *)&(this->SettingsCopy).BitModulation.Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SettingsCopy).BitModulation.Modulators.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SettingsCopy).BitModulation.Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SettingsCopy).BitModulation.Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SettingsCopy).BitModulation.Modulators.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->SettingsCopy).BitModulation.Modulators.Elements.field_0x30 = 0xffffffff;
  (this->SettingsCopy).BitModulation.Modulators.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->SettingsCopy).BitModulation.Modulators.HashSize = 0;
  (this->SettingsCopy).SampleRateModulation.Value = 8000.0;
  (this->SettingsCopy).BitModulation.Value = 8.0;
  *(undefined8 *)&(this->Settings).SampleRateModulation.Modulators.Elements = 0;
  *(undefined8 *)&(this->Settings).SampleRateModulation.Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Settings).SampleRateModulation.Modulators.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Settings).SampleRateModulation.Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Settings).SampleRateModulation.Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Settings).SampleRateModulation.Modulators.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->Settings).SampleRateModulation.Modulators.Elements.field_0x30 = 0xffffffff;
  (this->Settings).SampleRateModulation.Modulators.Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->Settings).SampleRateModulation.Modulators.HashSize = 0;
  *(undefined8 *)&(this->Settings).BitModulation.Modulators.Elements = 0;
  *(undefined8 *)&(this->Settings).BitModulation.Modulators.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Settings).BitModulation.Modulators.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Settings).BitModulation.Modulators.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Settings).BitModulation.Modulators.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Settings).BitModulation.Modulators.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->Settings).BitModulation.Modulators.Elements.field_0x30 = 0xffffffff;
  (this->Settings).BitModulation.Modulators.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Settings).BitModulation.Modulators.HashSize = 0;
  (this->Settings).SampleRateModulation.Value = 8000.0;
  (this->Settings).BitModulation.Value = 8.0;
  return this;
}

// ~USourceEffectBitCrusherPreset @ 14f0c01e0

void __thiscall
USourceEffectBitCrusherPreset::~USourceEffectBitCrusherPreset(USourceEffectBitCrusherPreset *this)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&___7USourceEffectBitCrusherPreset__6B_;
  (this->Settings).BitModulation.Modulators.HashSize = 0;
  FVar1 = (this->Settings).BitModulation.Modulators.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Settings).BitModulation.Modulators.Elements);
  (this->Settings).SampleRateModulation.Modulators.HashSize = 0;
  FVar1 = (this->Settings).SampleRateModulation.Modulators.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Settings).SampleRateModulation.Modulators.Elements);
  (this->SettingsCopy).BitModulation.Modulators.HashSize = 0;
  FVar1 = (this->SettingsCopy).BitModulation.Modulators.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SettingsCopy).BitModulation.Modulators.Elements);
  (this->SettingsCopy).SampleRateModulation.Modulators.HashSize = 0;
  FVar1 = (this->SettingsCopy).SampleRateModulation.Modulators.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SettingsCopy).SampleRateModulation.Modulators.Elements);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSourcePreset::~USoundEffectSourcePreset((USoundEffectSourcePreset *)this);
  return;
}

// operator() @ 14f0c2200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`USourceEffectBitCrusherPreset::SetBitModulator'::__l2::<lambda_1>::operator()
          (void *this,FSourceEffectBitCrusher *param_1)

{
  undefined1 auStack_a8 [32];
  USoundModulatorBase *local_88;
  USoundModulatorBase *local_80;
  initializer_list<USoundModulatorBase_const_*> local_78;
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
  local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = *(USoundModulatorBase **)this;
  local_78._First = &local_88;
  local_78._Last = &local_80;
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
  ::
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
            (&local_68,&local_78);
  Audio::FModulationDestination::UpdateModulators(&param_1->BitMod,&local_68);
  local_68.HashSize = 0;
  if (local_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<USoundModulatorBase_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<USoundModulatorBase_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_68.Elements);
  return;
}

// operator() @ 14f0c2af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`USourceEffectBitCrusherPreset::SetSampleRateModulator'::__l2::<lambda_1>::operator()
          (void *this,FSourceEffectBitCrusher *param_1)

{
  undefined1 auStack_a8 [32];
  USoundModulatorBase *local_88;
  USoundModulatorBase *local_80;
  initializer_list<USoundModulatorBase_const_*> local_78;
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
  local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88 = *(USoundModulatorBase **)this;
  local_78._First = &local_88;
  local_78._Last = &local_80;
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
  ::
  TSet<USoundModulatorBase_const_*,DefaultKeyFuncs<USoundModulatorBase_const_*,0>,FDefaultSetAllocator>
            (&local_68,&local_78);
  Audio::FModulationDestination::UpdateModulators(&param_1->SampleRateMod,&local_68);
  local_68.HashSize = 0;
  if (local_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<USoundModulatorBase_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<USoundModulatorBase_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_68.Elements);
  return;
}

// CanFilter @ 14f0cbb10

bool __thiscall USourceEffectBitCrusherPreset::CanFilter(USourceEffectBitCrusherPreset *this)

{
  return false;
}

// CreateNewEffect @ 14f0d03f0

FSoundEffectBase * __thiscall
USourceEffectBitCrusherPreset::CreateNewEffect(USourceEffectBitCrusherPreset *this)

{
  FSoundEffectBase *this_00;
  
  this_00 = ::operator_new(0x180);
  if (this_00 != (FSoundEffectBase *)0x0) {
    FSoundEffectBase::FSoundEffectBase(this_00);
    this_00[1].SettingsCritSect.CriticalSection.Opaque1[0] = (void *)0xffffffffffffffff;
    this_00->_padding_ = (longlong)&___7FSourceEffectBitCrusher__6B_;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    Audio::FBitCrusher::FBitCrusher
              ((FBitCrusher *)this_00[1].SettingsCritSect.CriticalSection.Opaque2);
    this_00[1].bChanged = (FThreadSafeBool)0x0;
    this_00[1].Preset.WeakPtr.ObjectIndex = 0;
    *(undefined8 *)&this_00[1].Preset.WeakPtr.ObjectSerialNumber = 0;
    this_00[1].CommandQueue.Tail = (TNode *)0x0;
    *(undefined4 *)&this_00[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this_00[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this_00[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this_00[2]._padding_ + 4) = 0;
    this_00[2].SettingsCritSect.CriticalSection.Opaque2[0] = 0;
    this_00[2].SettingsCritSect.CriticalSection.Opaque2[1] = 0;
    *(undefined4 *)this_00[2].SettingsCritSect.CriticalSection.Opaque3 = 0;
    this_00[2].SettingsCritSect.CriticalSection.Opaque3[2] = (void *)0x0;
    this_00[2].CurrentAudioThreadSettingsData.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined8 *)&this_00[2].Preset.WeakPtr.ObjectSerialNumber = 0;
    this_00[2].bIsRunning = (FThreadSafeBool)0x0;
    this_00[2].bIsActive = (FThreadSafeBool)0x80;
    *(undefined4 *)&this_00[2].CommandQueue.Head = 0xffffffff;
    *(undefined4 *)((longlong)&this_00[2].CommandQueue.Head + 4) = 0;
    this_00[3]._padding_ = 0;
    *(undefined4 *)&this_00[3]._padding_ = 0;
    this_00[1].CurrentAudioThreadSettingsData.ArrayNum = 0x45fa0000;
    *(undefined4 *)(this_00[2].SettingsCritSect.CriticalSection.Opaque3 + 1) = 0x41000000;
    Audio::FModulationDestination::FModulationDestination
              ((FModulationDestination *)&this_00[3].SettingsCritSect);
    Audio::FModulationDestination::FModulationDestination
              ((FModulationDestination *)this_00[3].SettingsCritSect.CriticalSection.Opaque3);
    return this_00;
  }
  return (FSoundEffectBase *)0x0;
}

// CreateNewPreset @ 14f0d1340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USoundEffectPreset * __thiscall
USourceEffectBitCrusherPreset::CreateNewPreset
          (USourceEffectBitCrusherPreset *this,UObject *param_1,FName param_2,EObjectFlags param_3)

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

// GetAssetActionName @ 14f0d8770

FText * __thiscall
USourceEffectBitCrusherPreset::GetAssetActionName
          (USourceEffectBitCrusherPreset *this,FText *__return_storage_ptr__)

{
  FText::FromString(__return_storage_ptr__,"SourceEffectBitCrusher");
  return __return_storage_ptr__;
}

// GetPresetColor @ 14f0dbc40

FColor __thiscall USourceEffectBitCrusherPreset::GetPresetColor(USourceEffectBitCrusherPreset *this)

{
  undefined4 *in_RDX;
  
  *in_RDX = 0xffc4b979;
  return (FColor)SUB84(in_RDX,0);
}

// GetPrivateStaticClass @ 14f0dc240

UClass * __cdecl USourceEffectBitCrusherPreset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectBitCrusherPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectBitCrusherPreset",
               &Z_Registration_Info_UClass_USourceEffectBitCrusherPreset.InnerSingleton,
               StaticRegisterNativesUSourceEffectBitCrusherPreset,0x1f0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USourceEffectBitCrusherPreset>,
               InternalVTableHelperCtorCaller<USourceEffectBitCrusherPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectBitCrusherPreset.InnerSingleton;
}

// GetSupportedClass @ 14f0dedd0

UClass * __thiscall
USourceEffectBitCrusherPreset::GetSupportedClass(USourceEffectBitCrusherPreset *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectBitCrusherPreset.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectBitCrusherPreset",
               &Z_Registration_Info_UClass_USourceEffectBitCrusherPreset.InnerSingleton,
               StaticRegisterNativesUSourceEffectBitCrusherPreset,0x1f0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USourceEffectBitCrusherPreset>,
               InternalVTableHelperCtorCaller<USourceEffectBitCrusherPreset>,aFStackX_8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectBitCrusherPreset.InnerSingleton;
}

// HasAssetActions @ 14f0df4e0

bool __thiscall USourceEffectBitCrusherPreset::HasAssetActions(USourceEffectBitCrusherPreset *this)

{
  return true;
}

// Init @ 14f0e5af0

void __thiscall USourceEffectBitCrusherPreset::Init(USourceEffectBitCrusherPreset *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->SettingsCopy).SampleRateModulation.Value = (this->Settings).SampleRateModulation.Value;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::operator=(&(this->SettingsCopy).SampleRateModulation.Modulators,
                &(this->Settings).SampleRateModulation.Modulators);
    (this->SettingsCopy).BitModulation.Value = (this->Settings).BitModulation.Value;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::operator=(&(this->SettingsCopy).BitModulation.Modulators,
                &(this->Settings).BitModulation.Modulators);
                    /* WARNING: Could not recover jumptable at 0x00014f0e5b5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnInit @ 14f0ea0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall USourceEffectBitCrusherPreset::OnInit(USourceEffectBitCrusherPreset *this)

{
  int iVar1;
  undefined1 auStackY_d8 [32];
  <lambda_1> local_a8;
  code *local_98 [2];
  undefined **local_88;
  undefined1 *local_80;
  undefined8 local_70;
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_3c = 0x80;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_34 = 0;
  local_28 = (ForElementType<FSetElementId>)0x0;
  local_20 = 0;
  local_38 = 0xffffffff;
  Algo::
  Transform<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>,TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>_&,__USourceEffectBitCrusherPreset::OnInit_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
            (&(this->Settings).BitModulation.Modulators,
             (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
              *)local_68,local_a8);
  local_70 = 0;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetBitModulators'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_80 = local_68;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectBitCrusherPreset::SetBitModulators'::__l2::<lambda_1>,void,FSourceEffectBitCrusher_&>
                ::Call;
  USoundEffectPreset::IterateEffects<FSourceEffectBitCrusher>
            ((USoundEffectPreset *)this,
             (TFunction<void___cdecl(FSourceEffectBitCrusher_&)> *)local_98);
  local_20 = 0;
  if (local_28 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_28);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (ForElementType<FSetElementId>)0x0;
  local_20 = 0;
  Algo::
  Transform<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>,TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>_&,__USourceEffectBitCrusherPreset::OnInit_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
            (&(this->Settings).SampleRateModulation.Modulators,
             (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
              *)local_68,local_a8);
  local_70 = 0;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSampleRateModulators'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_80 = local_68;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectBitCrusherPreset::SetSampleRateModulators'::__l2::<lambda_1>,void,FSourceEffectBitCrusher_&>
                ::Call;
  USoundEffectPreset::IterateEffects<FSourceEffectBitCrusher>
            ((USoundEffectPreset *)this,
             (TFunction<void___cdecl(FSourceEffectBitCrusher_&)> *)local_98);
  local_20 = 0;
  if (local_28 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_28);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return;
}

// SetBitModulator @ 14f0f9140

void __thiscall
USourceEffectBitCrusherPreset::SetBitModulator
          (USourceEffectBitCrusherPreset *this,USoundModulatorBase *param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USoundModulatorBase *local_20;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetBitModulator'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectBitCrusherPreset::SetBitModulator'::__l2::<lambda_1>,void,FSourceEffectBitCrusher_&>
                ::Call;
  local_20 = param_1;
  USoundEffectPreset::IterateEffects<FSourceEffectBitCrusher>
            ((USoundEffectPreset *)this,
             (TFunction<void___cdecl(FSourceEffectBitCrusher_&)> *)local_38);
  return;
}

// SetBitModulators @ 14f0f91a0

void __thiscall
USourceEffectBitCrusherPreset::SetBitModulators
          (USourceEffectBitCrusherPreset *this,
          TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
          *param_1)

{
  code *local_38 [2];
  undefined **local_28;
  TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
  *local_20;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetBitModulators'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectBitCrusherPreset::SetBitModulators'::__l2::<lambda_1>,void,FSourceEffectBitCrusher_&>
                ::Call;
  local_20 = param_1;
  USoundEffectPreset::IterateEffects<FSourceEffectBitCrusher>
            ((USoundEffectPreset *)this,
             (TFunction<void___cdecl(FSourceEffectBitCrusher_&)> *)local_38);
  return;
}

// SetBits @ 14f0f91e0

void __thiscall
USourceEffectBitCrusherPreset::SetBits(USourceEffectBitCrusherPreset *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  float local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetBits'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectBitCrusherPreset::SetBits'::__l2::<lambda_1>,void,FSourceEffectBitCrusherSettings_&>
                ::Call;
  local_20 = param_1;
  UpdateSettings(this,(TUniqueFunction<void___cdecl(FSourceEffectBitCrusherSettings_&)> *)local_38);
  return;
}

// SetModulationSettings @ 14f0fe830

void __thiscall
USourceEffectBitCrusherPreset::SetModulationSettings
          (USourceEffectBitCrusherPreset *this,FSourceEffectBitCrusherSettings *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->SettingsCopy).SampleRateModulation.Value = (param_1->SampleRateModulation).Value;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::operator=(&(this->SettingsCopy).SampleRateModulation.Modulators,
                &(param_1->SampleRateModulation).Modulators);
    (this->SettingsCopy).BitModulation.Value = (param_1->BitModulation).Value;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::operator=(&(this->SettingsCopy).BitModulation.Modulators,&(param_1->BitModulation).Modulators)
    ;
    USoundEffectPreset::Update((USoundEffectPreset *)this);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                    /* WARNING: Could not recover jumptable at 0x00014f0fe8ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x2e8))(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetSampleRate @ 14f100c10

void __thiscall
USourceEffectBitCrusherPreset::SetSampleRate(USourceEffectBitCrusherPreset *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  float local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSampleRate'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectBitCrusherPreset::SetSampleRate'::__l2::<lambda_1>,void,FSourceEffectBitCrusherSettings_&>
                ::Call;
  local_20 = param_1;
  UpdateSettings(this,(TUniqueFunction<void___cdecl(FSourceEffectBitCrusherSettings_&)> *)local_38);
  return;
}

// SetSampleRateModulator @ 14f100cf0

void __thiscall
USourceEffectBitCrusherPreset::SetSampleRateModulator
          (USourceEffectBitCrusherPreset *this,USoundModulatorBase *param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USoundModulatorBase *local_20;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSampleRateModulator'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectBitCrusherPreset::SetSampleRateModulator'::__l2::<lambda_1>,void,FSourceEffectBitCrusher_&>
                ::Call;
  local_20 = param_1;
  USoundEffectPreset::IterateEffects<FSourceEffectBitCrusher>
            ((USoundEffectPreset *)this,
             (TFunction<void___cdecl(FSourceEffectBitCrusher_&)> *)local_38);
  return;
}

// SetSampleRateModulators @ 14f100d50

void __thiscall
USourceEffectBitCrusherPreset::SetSampleRateModulators
          (USourceEffectBitCrusherPreset *this,
          TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
          *param_1)

{
  code *local_38 [2];
  undefined **local_28;
  TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
  *local_20;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSampleRateModulators'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectBitCrusherPreset::SetSampleRateModulators'::__l2::<lambda_1>,void,FSourceEffectBitCrusher_&>
                ::Call;
  local_20 = param_1;
  USoundEffectPreset::IterateEffects<FSourceEffectBitCrusher>
            ((USoundEffectPreset *)this,
             (TFunction<void___cdecl(FSourceEffectBitCrusher_&)> *)local_38);
  return;
}

// SetSettings @ 14f1011a0

void __thiscall
USourceEffectBitCrusherPreset::SetSettings
          (USourceEffectBitCrusherPreset *this,FSourceEffectBitCrusherBaseSettings *param_1)

{
  code *local_38 [2];
  undefined **local_28;
  float local_20;
  float local_1c;
  undefined8 local_10;
  
  local_20 = (*param_1).SampleRate;
  local_1c = (*param_1).BitDepth;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSettings'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectBitCrusherPreset::SetSettings'::__l2::<lambda_1>,void,FSourceEffectBitCrusherSettings_&>
                ::Call;
  UpdateSettings(this,(TUniqueFunction<void___cdecl(FSourceEffectBitCrusherSettings_&)> *)local_38);
  return;
}

// StaticRegisterNativesUSourceEffectBitCrusherPreset @ 14f103600

void __cdecl USourceEffectBitCrusherPreset::StaticRegisterNativesUSourceEffectBitCrusherPreset(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_USourceEffectBitCrusherPreset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateSettings @ 14f109720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
USourceEffectBitCrusherPreset::UpdateSettings
          (USourceEffectBitCrusherPreset *this,
          TUniqueFunction<void___cdecl(FSourceEffectBitCrusherSettings_&)> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_48;
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar1 = *(code **)param_1;
    plVar3 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_1->field_0x28;
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2,&this->SettingsCopy);
    USoundEffectPreset::Update((USoundEffectPreset *)this);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (*(longlong *)param_1 != 0) {
      plVar3 = (longlong *)&param_1->field_0x10;
      if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
        plVar3 = *(longlong **)&param_1->field_0x28;
      }
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// execSetBitModulator @ 14f10e0e0

void __cdecl
USourceEffectBitCrusherPreset::execSetBitModulator(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10 [3];
  code *local_38 [2];
  undefined **local_28;
  undefined8 local_20;
  undefined8 local_10;
  
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
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetBitModulator'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_20 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectBitCrusherPreset::SetBitModulator'::__l2::<lambda_1>,void,FSourceEffectBitCrusher_&>
                ::Call;
  USoundEffectPreset::IterateEffects<FSourceEffectBitCrusher>
            ((USoundEffectPreset *)param_1,
             (TFunction<void___cdecl(FSourceEffectBitCrusher_&)> *)local_38);
  return;
}

// execSetBitModulators @ 14f10e190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
USourceEffectBitCrusherPreset::execSetBitModulators(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ulonglong uVar2;
  undefined1 auStackY_d8 [32];
  code *local_a8 [2];
  undefined **local_98;
  ForAnyElementType *local_90;
  undefined8 local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_68.MaxBits = 0x80;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_80 = 0;
  local_90 = &local_78;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    local_90 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  local_98 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetBitModulators'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_a8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectBitCrusherPreset::SetBitModulators'::__l2::<lambda_1>,void,FSourceEffectBitCrusher_&>
                ::Call;
  USoundEffectPreset::IterateEffects<FSourceEffectBitCrusher>
            ((USoundEffectPreset *)param_1,
             (TFunction<void___cdecl(FSourceEffectBitCrusher_&)> *)local_a8);
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  uVar2 = local_70 >> 0x20;
  local_70 = local_70 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&local_78,0,(int *)((longlong)&local_70 + 4));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_68.NumBits = 0;
  if (0x80 < (uint)local_68.MaxBits) {
    local_68.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return;
}

// execSetBits @ 14f10e310

void __cdecl
USourceEffectBitCrusherPreset::execSetBits(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [6];
  code *local_38 [2];
  undefined **local_28;
  undefined4 local_20;
  undefined8 local_10;
  
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
  local_10 = 0;
  local_20 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetBits'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectBitCrusherPreset::SetBits'::__l2::<lambda_1>,void,FSourceEffectBitCrusherSettings_&>
                ::Call;
  UpdateSettings((USourceEffectBitCrusherPreset *)param_1,
                 (TUniqueFunction<void___cdecl(FSourceEffectBitCrusherSettings_&)> *)local_38);
  return;
}

// execSetModulationSettings @ 14f113380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
USourceEffectBitCrusherPreset::execSetModulationSettings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *lpCriticalSection;
  FProperty *pFVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  ulonglong uVar5;
  int iVar6;
  uchar *puVar7;
  undefined1 auStackY_108 [32];
  uchar local_d8 [8];
  ForAnyElementType local_d0;
  undefined8 local_c8;
  TBitArray<FDefaultBitArrayAllocator> local_c0;
  undefined8 uStack_a0;
  void *local_90;
  undefined4 local_88;
  undefined4 local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8 = 0;
  local_c0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_c0._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  uStack_a0 = _UNK_150631d98;
  local_90 = (void *)0x0;
  local_88 = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_68.MaxBits = 0x80;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_d8[0] = '\0';
  local_d8[1] = '\0';
  local_d8[2] = 0xfa;
  local_d8[3] = 'E';
  local_80 = 0x41000000;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_d8);
  }
  puVar7 = local_d8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lpCriticalSection = &param_1[2].field_0x18;
  if (lpCriticalSection != (undefined1 *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar2 = puVar7[1];
    uVar3 = puVar7[2];
    uVar4 = puVar7[3];
    param_1[3].field_0x18 = puVar7[0];
    param_1[3].field_0x19 = uVar2;
    param_1[3].field_0x1a = uVar3;
    param_1[3].field_0x1b = uVar4;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)&param_1[3].field_0x20,
                (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)(puVar7 + 8));
    uVar2 = puVar7[0x59];
    uVar3 = puVar7[0x5a];
    uVar4 = puVar7[0x5b];
    param_1[5].field_0x20 = puVar7[0x58];
    param_1[5].field_0x21 = uVar2;
    param_1[5].field_0x22 = uVar3;
    param_1[5].field_0x23 = uVar4;
    TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
    ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)(param_1 + 6),
                (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                 *)(puVar7 + 0x60));
    USoundEffectPreset::Update((USoundEffectPreset *)param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (**(code **)(*(longlong *)param_1 + 0x2e8))(param_1);
    local_30 = 0;
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
    }
    uVar5 = local_70 >> 0x20;
    local_70 = local_70 & 0xffffffff00000000;
    if ((int)uVar5 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_78,0,(int *)((longlong)&local_70 + 4));
    }
    local_48 = 0xffffffff;
    local_44 = 0;
    local_68.NumBits = 0;
    if (0x80 < (uint)local_68.MaxBits) {
      local_68.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
    }
    if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
    }
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
    }
    local_88 = 0;
    if (local_90 != (void *)0x0) {
      FMemory::Free(local_90);
    }
    uVar5 = local_c8 >> 0x20;
    local_c8 = local_c8 & 0xffffffff00000000;
    if ((int)uVar5 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&local_d0,0,(int *)((longlong)&local_c8 + 4));
    }
    iVar6 = local_c0.MaxBits;
    uStack_a0 = 0xffffffff;
    local_c0._24_8_ = (ulonglong)(uint)local_c0.MaxBits << 0x20;
    if (0x80 < (uint)iVar6) {
      local_c0.NumBits = 0;
      local_c0.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_c0,0);
    }
    if (local_c0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_c0.AllocatorInstance.SecondaryData);
    }
    if (local_d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// execSetSampleRate @ 14f115050

void __cdecl
USourceEffectBitCrusherPreset::execSetSampleRate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [6];
  code *local_38 [2];
  undefined **local_28;
  undefined4 local_20;
  undefined8 local_10;
  
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
  local_10 = 0;
  local_20 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSampleRate'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectBitCrusherPreset::SetSampleRate'::__l2::<lambda_1>,void,FSourceEffectBitCrusherSettings_&>
                ::Call;
  UpdateSettings((USourceEffectBitCrusherPreset *)param_1,
                 (TUniqueFunction<void___cdecl(FSourceEffectBitCrusherSettings_&)> *)local_38);
  return;
}

// execSetSampleRateModulator @ 14f115110

void __cdecl
USourceEffectBitCrusherPreset::execSetSampleRateModulator
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10 [3];
  code *local_38 [2];
  undefined **local_28;
  undefined8 local_20;
  undefined8 local_10;
  
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
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSampleRateModulator'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_20 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectBitCrusherPreset::SetSampleRateModulator'::__l2::<lambda_1>,void,FSourceEffectBitCrusher_&>
                ::Call;
  USoundEffectPreset::IterateEffects<FSourceEffectBitCrusher>
            ((USoundEffectPreset *)param_1,
             (TFunction<void___cdecl(FSourceEffectBitCrusher_&)> *)local_38);
  return;
}

// execSetSampleRateModulators @ 14f1151c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
USourceEffectBitCrusherPreset::execSetSampleRateModulators
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ulonglong uVar2;
  undefined1 auStackY_d8 [32];
  code *local_a8 [2];
  undefined **local_98;
  ForAnyElementType *local_90;
  undefined8 local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_68.MaxBits = 0x80;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_80 = 0;
  local_90 = &local_78;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    local_90 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  local_98 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSampleRateModulators'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_a8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectBitCrusherPreset::SetSampleRateModulators'::__l2::<lambda_1>,void,FSourceEffectBitCrusher_&>
                ::Call;
  USoundEffectPreset::IterateEffects<FSourceEffectBitCrusher>
            ((USoundEffectPreset *)param_1,
             (TFunction<void___cdecl(FSourceEffectBitCrusher_&)> *)local_a8);
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  uVar2 = local_70 >> 0x20;
  local_70 = local_70 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&local_78,0,(int *)((longlong)&local_70 + 4));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_68.NumBits = 0;
  if (0x80 < (uint)local_68.MaxBits) {
    local_68.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return;
}

// execSetSettings @ 14f1155a0

void __cdecl
USourceEffectBitCrusherPreset::execSetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_res10 [24];
  code *local_38 [2];
  undefined **local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_10;
  
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = 0xfa;
  local_res10[3] = 'E';
  local_res10[4] = '\0';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = 'A';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_10 = 0;
  puVar2 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_20._0_1_ = puVar2[0];
  local_20._1_1_ = puVar2[1];
  local_20._2_1_ = puVar2[2];
  local_20._3_1_ = puVar2[3];
  local_1c._0_1_ = puVar2[4];
  local_1c._1_1_ = puVar2[5];
  local_1c._2_1_ = puVar2[6];
  local_1c._3_1_ = puVar2[7];
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSettings'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectBitCrusherPreset::SetSettings'::__l2::<lambda_1>,void,FSourceEffectBitCrusherSettings_&>
                ::Call;
  UpdateSettings((USourceEffectBitCrusherPreset *)param_1,
                 (TUniqueFunction<void___cdecl(FSourceEffectBitCrusherSettings_&)> *)local_38);
  return;
}

