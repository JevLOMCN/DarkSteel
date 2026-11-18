// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 62

// StaticClass @ 14f0a02e0

UClass * __cdecl USourceEffectChorusPreset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectChorusPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectChorusPreset",
               &Z_Registration_Info_UClass_USourceEffectChorusPreset.InnerSingleton,
               StaticRegisterNativesUSourceEffectChorusPreset,0x4e0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<USourceEffectChorusPreset>,
               InternalVTableHelperCtorCaller<USourceEffectChorusPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectChorusPreset.InnerSingleton;
}

// USourceEffectChorusPreset @ 14f0ba100

USourceEffectChorusPreset * __thiscall
USourceEffectChorusPreset::USourceEffectChorusPreset
          (USourceEffectChorusPreset *this,FVTableHelper *param_1)

{
  USoundEffectSourcePreset::USoundEffectSourcePreset((USoundEffectSourcePreset *)this,param_1);
  this->_padding_ = (longlong)&___7USourceEffectChorusPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  FSourceEffectChorusSettings::FSourceEffectChorusSettings(&this->SettingsCopy);
  FSourceEffectChorusSettings::FSourceEffectChorusSettings(&this->Settings);
  return this;
}

// USourceEffectChorusPreset @ 14f0ba150

USourceEffectChorusPreset * __thiscall
USourceEffectChorusPreset::USourceEffectChorusPreset
          (USourceEffectChorusPreset *this,FObjectInitializer *param_1)

{
  USoundEffectSourcePreset::USoundEffectSourcePreset((USoundEffectSourcePreset *)this,param_1);
  this->_padding_ = (longlong)&___7USourceEffectChorusPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  FSourceEffectChorusSettings::FSourceEffectChorusSettings(&this->SettingsCopy);
  FSourceEffectChorusSettings::FSourceEffectChorusSettings(&this->Settings);
  return this;
}

// ~USourceEffectChorusPreset @ 14f0c02c0

void __thiscall
USourceEffectChorusPreset::~USourceEffectChorusPreset(USourceEffectChorusPreset *this)

{
  this->_padding_ = (longlong)&___7USourceEffectChorusPreset__6B_;
  FSourceEffectChorusSettings::~FSourceEffectChorusSettings(&this->Settings);
  FSourceEffectChorusSettings::~FSourceEffectChorusSettings(&this->SettingsCopy);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSourcePreset::~USoundEffectSourcePreset((USoundEffectSourcePreset *)this);
  return;
}

// operator() @ 14f0c22a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`USourceEffectChorusPreset::SetDepthModulator'::__l2::<lambda_1>::operator()
          (void *this,FSourceEffectChorus *param_1)

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
  Audio::FModulationDestination::UpdateModulators(&param_1->DepthMod,&local_68);
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

// operator() @ 14f0c2340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`USourceEffectChorusPreset::SetDryModulator'::__l2::<lambda_1>::operator()
          (void *this,FSourceEffectChorus *param_1)

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
  Audio::FModulationDestination::UpdateModulators(&param_1->DryMod,&local_68);
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

// operator() @ 14f0c23e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`USourceEffectChorusPreset::SetFeedbackModulator'::__l2::<lambda_1>::operator()
          (void *this,FSourceEffectChorus *param_1)

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
  Audio::FModulationDestination::UpdateModulators(&param_1->FeedbackMod,&local_68);
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

// operator() @ 14f0c2620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`USourceEffectChorusPreset::SetFrequencyModulator'::__l2::<lambda_1>::operator()
          (void *this,FSourceEffectChorus *param_1)

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
  Audio::FModulationDestination::UpdateModulators(&param_1->FrequencyMod,&local_68);
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

// operator() @ 14f0c2b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`USourceEffectChorusPreset::SetSpreadModulator'::__l2::<lambda_1>::operator()
          (void *this,FSourceEffectChorus *param_1)

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
  Audio::FModulationDestination::UpdateModulators(&param_1->SpreadMod,&local_68);
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

// operator() @ 14f0c33f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`USourceEffectChorusPreset::SetWetModulator'::__l2::<lambda_1>::operator()
          (void *this,FSourceEffectChorus *param_1)

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
  Audio::FModulationDestination::UpdateModulators(&param_1->WetMod,&local_68);
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

// CanFilter @ 14f0cbb20

bool __thiscall USourceEffectChorusPreset::CanFilter(USourceEffectChorusPreset *this)

{
  return false;
}

// CreateNewEffect @ 14f0d0520

FSoundEffectBase * __thiscall
USourceEffectChorusPreset::CreateNewEffect(USourceEffectChorusPreset *this)

{
  FSoundEffectBase *this_00;
  
  this_00 = ::operator_new(0x900);
  if (this_00 != (FSoundEffectBase *)0x0) {
    FSoundEffectBase::FSoundEffectBase(this_00);
    this_00[1].SettingsCritSect.CriticalSection.Opaque1[0] = (void *)0xffffffffffffffff;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00->_padding_ = (longlong)&___7FSourceEffectChorus__6B_;
    Audio::FChorus::FChorus((FChorus *)this_00[1].SettingsCritSect.CriticalSection.Opaque2);
    FSourceEffectChorusSettings::FSourceEffectChorusSettings
              ((FSourceEffectChorusSettings *)&this_00[0xe].Preset.WeakPtr.ObjectSerialNumber);
    Audio::FModulationDestination::FModulationDestination
              ((FModulationDestination *)&this_00[0x13].bChanged);
    Audio::FModulationDestination::FModulationDestination
              ((FModulationDestination *)&this_00[0x13].bIsRunning);
    Audio::FModulationDestination::FModulationDestination
              ((FModulationDestination *)&this_00[0x13].CommandQueue.Tail);
    Audio::FModulationDestination::FModulationDestination
              ((FModulationDestination *)&this_00[0x14]._padding_);
    Audio::FModulationDestination::FModulationDestination
              ((FModulationDestination *)this_00[0x14].SettingsCritSect.CriticalSection.Opaque2);
    Audio::FModulationDestination::FModulationDestination
              ((FModulationDestination *)
               (this_00[0x14].SettingsCritSect.CriticalSection.Opaque3 + 1));
    return this_00;
  }
  return (FSoundEffectBase *)0x0;
}

// CreateNewPreset @ 14f0d1440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USoundEffectPreset * __thiscall
USourceEffectChorusPreset::CreateNewPreset
          (USourceEffectChorusPreset *this,UObject *param_1,FName param_2,EObjectFlags param_3)

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

// GetAssetActionName @ 14f0d87a0

FText * __thiscall
USourceEffectChorusPreset::GetAssetActionName
          (USourceEffectChorusPreset *this,FText *__return_storage_ptr__)

{
  FText::FromString(__return_storage_ptr__,"SourceEffectChorus");
  return __return_storage_ptr__;
}

// GetPresetColor @ 14f0dbc50

FColor __thiscall USourceEffectChorusPreset::GetPresetColor(USourceEffectChorusPreset *this)

{
  undefined4 *in_RDX;
  
  *in_RDX = 0xff665579;
  return (FColor)SUB84(in_RDX,0);
}

// GetPrivateStaticClass @ 14f0dc300

UClass * __cdecl USourceEffectChorusPreset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectChorusPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectChorusPreset",
               &Z_Registration_Info_UClass_USourceEffectChorusPreset.InnerSingleton,
               StaticRegisterNativesUSourceEffectChorusPreset,0x4e0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<USourceEffectChorusPreset>,
               InternalVTableHelperCtorCaller<USourceEffectChorusPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectChorusPreset.InnerSingleton;
}

// GetSupportedClass @ 14f0dede0

UClass * __thiscall USourceEffectChorusPreset::GetSupportedClass(USourceEffectChorusPreset *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectChorusPreset.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectChorusPreset",
               &Z_Registration_Info_UClass_USourceEffectChorusPreset.InnerSingleton,
               StaticRegisterNativesUSourceEffectChorusPreset,0x4e0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<USourceEffectChorusPreset>,
               InternalVTableHelperCtorCaller<USourceEffectChorusPreset>,aFStackX_8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectChorusPreset.InnerSingleton;
}

// HasAssetActions @ 14f0df4f0

bool __thiscall USourceEffectChorusPreset::HasAssetActions(USourceEffectChorusPreset *this)

{
  return true;
}

// Init @ 14f0e5b70

void __thiscall USourceEffectChorusPreset::Init(USourceEffectChorusPreset *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FSourceEffectChorusSettings::operator=(&this->SettingsCopy,&this->Settings);
                    /* WARNING: Could not recover jumptable at 0x00014f0e5baf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnInit @ 14f0ea320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall USourceEffectChorusPreset::OnInit(USourceEffectChorusPreset *this)

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
  Transform<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>,TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>_&,__USourceEffectChorusPreset::OnInit_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
            (&(this->Settings).SpreadModulation.Modulators,
             (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
              *)local_68,local_a8);
  local_70 = 0;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetDepthModulators'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_80 = local_68;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetDepthModulators'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
                ::Call;
  USoundEffectPreset::IterateEffects<FSourceEffectChorus>
            ((USoundEffectPreset *)this,(TFunction<void___cdecl(FSourceEffectChorus_&)> *)local_98);
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
  Transform<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>,TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>_&,__USourceEffectChorusPreset::OnInit_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
            (&(this->Settings).DryModulation.Modulators,
             (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
              *)local_68,local_a8);
  local_70 = 0;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetDryModulators'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_80 = local_68;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetDryModulators'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
                ::Call;
  USoundEffectPreset::IterateEffects<FSourceEffectChorus>
            ((USoundEffectPreset *)this,(TFunction<void___cdecl(FSourceEffectChorus_&)> *)local_98);
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
  Transform<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>,TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>_&,__USourceEffectChorusPreset::OnInit_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
            (&(this->Settings).WetModulation.Modulators,
             (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
              *)local_68,local_a8);
  local_70 = 0;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetWetModulators'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_80 = local_68;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetWetModulators'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
                ::Call;
  USoundEffectPreset::IterateEffects<FSourceEffectChorus>
            ((USoundEffectPreset *)this,(TFunction<void___cdecl(FSourceEffectChorus_&)> *)local_98);
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
  Transform<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>,TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>_&,__USourceEffectChorusPreset::OnInit_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
            (&(this->Settings).FeedbackModulation.Modulators,
             (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
              *)local_68,local_a8);
  local_70 = 0;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetFeedbackModulators'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_80 = local_68;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetFeedbackModulators'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
                ::Call;
  USoundEffectPreset::IterateEffects<FSourceEffectChorus>
            ((USoundEffectPreset *)this,(TFunction<void___cdecl(FSourceEffectChorus_&)> *)local_98);
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
  Transform<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>,TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>_&,__USourceEffectChorusPreset::OnInit_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
            (&(this->Settings).FrequencyModulation.Modulators,
             (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
              *)local_68,local_a8);
  local_70 = 0;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetFrequencyModulators'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_80 = local_68;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetFrequencyModulators'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
                ::Call;
  USoundEffectPreset::IterateEffects<FSourceEffectChorus>
            ((USoundEffectPreset *)this,(TFunction<void___cdecl(FSourceEffectChorus_&)> *)local_98);
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
  Transform<TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>,TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>_&,__USourceEffectChorusPreset::OnInit_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
            (&(this->Settings).SpreadModulation.Modulators,
             (TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
              *)local_68,local_a8);
  local_70 = 0;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetSpreadModulators'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_80 = local_68;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetSpreadModulators'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
                ::Call;
  USoundEffectPreset::IterateEffects<FSourceEffectChorus>
            ((USoundEffectPreset *)this,(TFunction<void___cdecl(FSourceEffectChorus_&)> *)local_98);
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

// SetDepth @ 14f0fa060

void __thiscall USourceEffectChorusPreset::SetDepth(USourceEffectChorusPreset *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  float local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetDepth'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetDepth'::__l2::<lambda_1>,void,FSourceEffectChorusSettings_&>
                ::Call;
  local_20 = param_1;
  UpdateSettings(this,(TUniqueFunction<void___cdecl(FSourceEffectChorusSettings_&)> *)local_38);
  return;
}

// SetDepthModulator @ 14f0fa140

void __thiscall
USourceEffectChorusPreset::SetDepthModulator
          (USourceEffectChorusPreset *this,USoundModulatorBase *param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USoundModulatorBase *local_20;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetDepthModulator'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetDepthModulator'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
                ::Call;
  local_20 = param_1;
  USoundEffectPreset::IterateEffects<FSourceEffectChorus>
            ((USoundEffectPreset *)this,(TFunction<void___cdecl(FSourceEffectChorus_&)> *)local_38);
  return;
}

// SetDepthModulators @ 14f0fa1a0

void __thiscall
USourceEffectChorusPreset::SetDepthModulators
          (USourceEffectChorusPreset *this,
          TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
          *param_1)

{
  code *local_38 [2];
  undefined **local_28;
  TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
  *local_20;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetDepthModulators'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetDepthModulators'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
                ::Call;
  local_20 = param_1;
  USoundEffectPreset::IterateEffects<FSourceEffectChorus>
            ((USoundEffectPreset *)this,(TFunction<void___cdecl(FSourceEffectChorus_&)> *)local_38);
  return;
}

// SetDry @ 14f0fa230

void __thiscall USourceEffectChorusPreset::SetDry(USourceEffectChorusPreset *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  float local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetDry'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetDry'::__l2::<lambda_1>,void,FSourceEffectChorusSettings_&>
                ::Call;
  local_20 = param_1;
  UpdateSettings(this,(TUniqueFunction<void___cdecl(FSourceEffectChorusSettings_&)> *)local_38);
  return;
}

// SetDryModulator @ 14f0fa310

void __thiscall
USourceEffectChorusPreset::SetDryModulator
          (USourceEffectChorusPreset *this,USoundModulatorBase *param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USoundModulatorBase *local_20;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetDryModulator'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetDryModulator'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
                ::Call;
  local_20 = param_1;
  USoundEffectPreset::IterateEffects<FSourceEffectChorus>
            ((USoundEffectPreset *)this,(TFunction<void___cdecl(FSourceEffectChorus_&)> *)local_38);
  return;
}

// SetDryModulators @ 14f0fa370

void __thiscall
USourceEffectChorusPreset::SetDryModulators
          (USourceEffectChorusPreset *this,
          TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
          *param_1)

{
  code *local_38 [2];
  undefined **local_28;
  TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
  *local_20;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetDryModulators'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetDryModulators'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
                ::Call;
  local_20 = param_1;
  USoundEffectPreset::IterateEffects<FSourceEffectChorus>
            ((USoundEffectPreset *)this,(TFunction<void___cdecl(FSourceEffectChorus_&)> *)local_38);
  return;
}

// SetFeedback @ 14f0fb150

void __thiscall
USourceEffectChorusPreset::SetFeedback(USourceEffectChorusPreset *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  float local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetFeedback'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetFeedback'::__l2::<lambda_1>,void,FSourceEffectChorusSettings_&>
                ::Call;
  local_20 = param_1;
  UpdateSettings(this,(TUniqueFunction<void___cdecl(FSourceEffectChorusSettings_&)> *)local_38);
  return;
}

// SetFeedbackModulator @ 14f0fb230

void __thiscall
USourceEffectChorusPreset::SetFeedbackModulator
          (USourceEffectChorusPreset *this,USoundModulatorBase *param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USoundModulatorBase *local_20;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetFeedbackModulator'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetFeedbackModulator'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
                ::Call;
  local_20 = param_1;
  USoundEffectPreset::IterateEffects<FSourceEffectChorus>
            ((USoundEffectPreset *)this,(TFunction<void___cdecl(FSourceEffectChorus_&)> *)local_38);
  return;
}

// SetFeedbackModulators @ 14f0fb290

void __thiscall
USourceEffectChorusPreset::SetFeedbackModulators
          (USourceEffectChorusPreset *this,
          TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
          *param_1)

{
  code *local_38 [2];
  undefined **local_28;
  TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
  *local_20;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetFeedbackModulators'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetFeedbackModulators'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
                ::Call;
  local_20 = param_1;
  USoundEffectPreset::IterateEffects<FSourceEffectChorus>
            ((USoundEffectPreset *)this,(TFunction<void___cdecl(FSourceEffectChorus_&)> *)local_38);
  return;
}

// SetFrequency @ 14f0fc080

void __thiscall
USourceEffectChorusPreset::SetFrequency(USourceEffectChorusPreset *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  float local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetFrequency'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetFrequency'::__l2::<lambda_1>,void,FSourceEffectChorusSettings_&>
                ::Call;
  local_20 = param_1;
  UpdateSettings(this,(TUniqueFunction<void___cdecl(FSourceEffectChorusSettings_&)> *)local_38);
  return;
}

// SetFrequencyModulator @ 14f0fc220

void __thiscall
USourceEffectChorusPreset::SetFrequencyModulator
          (USourceEffectChorusPreset *this,USoundModulatorBase *param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USoundModulatorBase *local_20;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetFrequencyModulator'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetFrequencyModulator'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
                ::Call;
  local_20 = param_1;
  USoundEffectPreset::IterateEffects<FSourceEffectChorus>
            ((USoundEffectPreset *)this,(TFunction<void___cdecl(FSourceEffectChorus_&)> *)local_38);
  return;
}

// SetFrequencyModulators @ 14f0fc280

void __thiscall
USourceEffectChorusPreset::SetFrequencyModulators
          (USourceEffectChorusPreset *this,
          TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
          *param_1)

{
  code *local_38 [2];
  undefined **local_28;
  TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
  *local_20;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetFrequencyModulators'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetFrequencyModulators'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
                ::Call;
  local_20 = param_1;
  USoundEffectPreset::IterateEffects<FSourceEffectChorus>
            ((USoundEffectPreset *)this,(TFunction<void___cdecl(FSourceEffectChorus_&)> *)local_38);
  return;
}

// SetModulationSettings @ 14f0fe8d0

void __thiscall
USourceEffectChorusPreset::SetModulationSettings
          (USourceEffectChorusPreset *this,FSourceEffectChorusSettings *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FSourceEffectChorusSettings::operator=(&this->SettingsCopy,param_1);
    USoundEffectPreset::Update((USoundEffectPreset *)this);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
                    /* WARNING: Could not recover jumptable at 0x00014f0fe92c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x2e8))(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetSettings @ 14f101200

void __thiscall
USourceEffectChorusPreset::SetSettings
          (USourceEffectChorusPreset *this,FSourceEffectChorusBaseSettings *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *local_38 [5];
  undefined8 *local_10;
  
  uVar2 = *(undefined8 *)param_1;
  uVar3 = *(undefined8 *)&param_1->Feedback;
  local_38[0] = (code *)0x0;
  uVar1 = *(undefined8 *)&param_1->DryLevel;
  local_10 = FMemory::Malloc(0x20,8);
  local_10[1] = uVar2;
  local_10[2] = uVar3;
  *local_10 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`USourceEffectChorusPreset::SetSettings'::`2'::<lambda_1>,1,1>
               ::_vftable_;
  local_10[3] = uVar1;
  if (local_10 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`USourceEffectChorusPreset::SetSettings'::__l2::<lambda_1>,void,FSourceEffectChorusSettings_&>
                  ::Call;
  }
  UpdateSettings(this,(TUniqueFunction<void___cdecl(FSourceEffectChorusSettings_&)> *)local_38);
  return;
}

// SetSpread @ 14f1020f0

void __thiscall USourceEffectChorusPreset::SetSpread(USourceEffectChorusPreset *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  float local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetSpread'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetSpread'::__l2::<lambda_1>,void,FSourceEffectChorusSettings_&>
                ::Call;
  local_20 = param_1;
  UpdateSettings(this,(TUniqueFunction<void___cdecl(FSourceEffectChorusSettings_&)> *)local_38);
  return;
}

// SetSpreadModulator @ 14f1021d0

void __thiscall
USourceEffectChorusPreset::SetSpreadModulator
          (USourceEffectChorusPreset *this,USoundModulatorBase *param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USoundModulatorBase *local_20;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetSpreadModulator'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetSpreadModulator'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
                ::Call;
  local_20 = param_1;
  USoundEffectPreset::IterateEffects<FSourceEffectChorus>
            ((USoundEffectPreset *)this,(TFunction<void___cdecl(FSourceEffectChorus_&)> *)local_38);
  return;
}

// SetSpreadModulators @ 14f102230

void __thiscall
USourceEffectChorusPreset::SetSpreadModulators
          (USourceEffectChorusPreset *this,
          TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
          *param_1)

{
  code *local_38 [2];
  undefined **local_28;
  TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
  *local_20;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetSpreadModulators'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetSpreadModulators'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
                ::Call;
  local_20 = param_1;
  USoundEffectPreset::IterateEffects<FSourceEffectChorus>
            ((USoundEffectPreset *)this,(TFunction<void___cdecl(FSourceEffectChorus_&)> *)local_38);
  return;
}

// SetWet @ 14f1030a0

void __thiscall USourceEffectChorusPreset::SetWet(USourceEffectChorusPreset *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  float local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetWet'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetWet'::__l2::<lambda_1>,void,FSourceEffectChorusSettings_&>
                ::Call;
  local_20 = param_1;
  UpdateSettings(this,(TUniqueFunction<void___cdecl(FSourceEffectChorusSettings_&)> *)local_38);
  return;
}

// SetWetModulator @ 14f103180

void __thiscall
USourceEffectChorusPreset::SetWetModulator
          (USourceEffectChorusPreset *this,USoundModulatorBase *param_1)

{
  code *local_38 [2];
  undefined **local_28;
  USoundModulatorBase *local_20;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetWetModulator'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetWetModulator'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
                ::Call;
  local_20 = param_1;
  USoundEffectPreset::IterateEffects<FSourceEffectChorus>
            ((USoundEffectPreset *)this,(TFunction<void___cdecl(FSourceEffectChorus_&)> *)local_38);
  return;
}

// SetWetModulators @ 14f1031e0

void __thiscall
USourceEffectChorusPreset::SetWetModulators
          (USourceEffectChorusPreset *this,
          TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
          *param_1)

{
  code *local_38 [2];
  undefined **local_28;
  TSet<USoundModulatorBase_*,DefaultKeyFuncs<USoundModulatorBase_*,0>,FDefaultSetAllocator>
  *local_20;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetWetModulators'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetWetModulators'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
                ::Call;
  local_20 = param_1;
  USoundEffectPreset::IterateEffects<FSourceEffectChorus>
            ((USoundEffectPreset *)this,(TFunction<void___cdecl(FSourceEffectChorus_&)> *)local_38);
  return;
}

// StaticRegisterNativesUSourceEffectChorusPreset @ 14f103640

void __cdecl USourceEffectChorusPreset::StaticRegisterNativesUSourceEffectChorusPreset(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x14;
  local_18.DataPtr = Z_Construct_UClass_USourceEffectChorusPreset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateSettings @ 14f1097f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
USourceEffectChorusPreset::UpdateSettings
          (USourceEffectChorusPreset *this,
          TUniqueFunction<void___cdecl(FSourceEffectChorusSettings_&)> *param_1)

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

// execSetDepth @ 14f10ee20

void __cdecl USourceEffectChorusPreset::execSetDepth(UObject *param_1,FFrame *param_2,void *param_3)

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
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetDepth'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetDepth'::__l2::<lambda_1>,void,FSourceEffectChorusSettings_&>
                ::Call;
  UpdateSettings((USourceEffectChorusPreset *)param_1,
                 (TUniqueFunction<void___cdecl(FSourceEffectChorusSettings_&)> *)local_38);
  return;
}

// execSetDepthModulator @ 14f10eee0

void __cdecl
USourceEffectChorusPreset::execSetDepthModulator(UObject *param_1,FFrame *param_2,void *param_3)

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
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetDepthModulator'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_20 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetDepthModulator'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
                ::Call;
  USoundEffectPreset::IterateEffects<FSourceEffectChorus>
            ((USoundEffectPreset *)param_1,
             (TFunction<void___cdecl(FSourceEffectChorus_&)> *)local_38);
  return;
}

// execSetDepthModulators @ 14f10ef90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
USourceEffectChorusPreset::execSetDepthModulators(UObject *param_1,FFrame *param_2,void *param_3)

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
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetDepthModulators'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_a8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetDepthModulators'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
                ::Call;
  USoundEffectPreset::IterateEffects<FSourceEffectChorus>
            ((USoundEffectPreset *)param_1,
             (TFunction<void___cdecl(FSourceEffectChorus_&)> *)local_a8);
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

// execSetDry @ 14f10f110

void __cdecl USourceEffectChorusPreset::execSetDry(UObject *param_1,FFrame *param_2,void *param_3)

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
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetDry'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetDry'::__l2::<lambda_1>,void,FSourceEffectChorusSettings_&>
                ::Call;
  UpdateSettings((USourceEffectChorusPreset *)param_1,
                 (TUniqueFunction<void___cdecl(FSourceEffectChorusSettings_&)> *)local_38);
  return;
}

// execSetDryModulator @ 14f10f1d0

void __cdecl
USourceEffectChorusPreset::execSetDryModulator(UObject *param_1,FFrame *param_2,void *param_3)

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
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetDryModulator'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_20 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetDryModulator'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
                ::Call;
  USoundEffectPreset::IterateEffects<FSourceEffectChorus>
            ((USoundEffectPreset *)param_1,
             (TFunction<void___cdecl(FSourceEffectChorus_&)> *)local_38);
  return;
}

// execSetDryModulators @ 14f10f280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
USourceEffectChorusPreset::execSetDryModulators(UObject *param_1,FFrame *param_2,void *param_3)

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
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetDryModulators'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_a8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetDryModulators'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
                ::Call;
  USoundEffectPreset::IterateEffects<FSourceEffectChorus>
            ((USoundEffectPreset *)param_1,
             (TFunction<void___cdecl(FSourceEffectChorus_&)> *)local_a8);
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

// execSetFeedback @ 14f10faa0

void __cdecl
USourceEffectChorusPreset::execSetFeedback(UObject *param_1,FFrame *param_2,void *param_3)

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
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetFeedback'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetFeedback'::__l2::<lambda_1>,void,FSourceEffectChorusSettings_&>
                ::Call;
  UpdateSettings((USourceEffectChorusPreset *)param_1,
                 (TUniqueFunction<void___cdecl(FSourceEffectChorusSettings_&)> *)local_38);
  return;
}

// execSetFeedbackModulator @ 14f10fb60

void __cdecl
USourceEffectChorusPreset::execSetFeedbackModulator(UObject *param_1,FFrame *param_2,void *param_3)

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
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetFeedbackModulator'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_20 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetFeedbackModulator'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
                ::Call;
  USoundEffectPreset::IterateEffects<FSourceEffectChorus>
            ((USoundEffectPreset *)param_1,
             (TFunction<void___cdecl(FSourceEffectChorus_&)> *)local_38);
  return;
}

// execSetFeedbackModulators @ 14f10fc10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
USourceEffectChorusPreset::execSetFeedbackModulators(UObject *param_1,FFrame *param_2,void *param_3)

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
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetFeedbackModulators'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_a8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetFeedbackModulators'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
                ::Call;
  USoundEffectPreset::IterateEffects<FSourceEffectChorus>
            ((USoundEffectPreset *)param_1,
             (TFunction<void___cdecl(FSourceEffectChorus_&)> *)local_a8);
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

// execSetFrequency @ 14f110cb0

void __cdecl
USourceEffectChorusPreset::execSetFrequency(UObject *param_1,FFrame *param_2,void *param_3)

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
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetFrequency'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetFrequency'::__l2::<lambda_1>,void,FSourceEffectChorusSettings_&>
                ::Call;
  UpdateSettings((USourceEffectChorusPreset *)param_1,
                 (TUniqueFunction<void___cdecl(FSourceEffectChorusSettings_&)> *)local_38);
  return;
}

// execSetFrequencyModulator @ 14f110f00

void __cdecl
USourceEffectChorusPreset::execSetFrequencyModulator(UObject *param_1,FFrame *param_2,void *param_3)

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
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetFrequencyModulator'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_20 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetFrequencyModulator'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
                ::Call;
  USoundEffectPreset::IterateEffects<FSourceEffectChorus>
            ((USoundEffectPreset *)param_1,
             (TFunction<void___cdecl(FSourceEffectChorus_&)> *)local_38);
  return;
}

// execSetFrequencyModulators @ 14f110fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
USourceEffectChorusPreset::execSetFrequencyModulators
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
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetFrequencyModulators'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_a8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetFrequencyModulators'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
                ::Call;
  USoundEffectPreset::IterateEffects<FSourceEffectChorus>
            ((USoundEffectPreset *)param_1,
             (TFunction<void___cdecl(FSourceEffectChorus_&)> *)local_a8);
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

// execSetModulationSettings @ 14f113610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
USourceEffectChorusPreset::execSetModulationSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *lpCriticalSection;
  FProperty *pFVar1;
  FSourceEffectChorusSettings *pFVar2;
  undefined1 auStack_278 [32];
  FSourceEffectChorusSettings local_258;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_278;
  FSourceEffectChorusSettings::FSourceEffectChorusSettings(&local_258);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_258,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_258);
  }
  pFVar2 = &local_258;
  if ((FSourceEffectChorusSettings *)param_2->MostRecentPropertyAddress !=
      (FSourceEffectChorusSettings *)0x0) {
    pFVar2 = (FSourceEffectChorusSettings *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lpCriticalSection = &param_1[2].field_0x18;
  if (lpCriticalSection != (undefined1 *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FSourceEffectChorusSettings::operator=
              ((FSourceEffectChorusSettings *)&param_1[3].field_0x18,pFVar2);
    USoundEffectPreset::Update((USoundEffectPreset *)param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (**(code **)(*(longlong *)param_1 + 0x2e8))(param_1);
    FSourceEffectChorusSettings::~FSourceEffectChorusSettings(&local_258);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// execSetSettings @ 14f115680

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
USourceEffectChorusPreset::execSetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uchar *puVar5;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  code *local_58 [5];
  undefined8 *local_30;
  
  local_78 = ___xmm_3f0000003e99999a400000003e4ccccd;
  uStack_70 = _UNK_15314ddf8;
  local_68 = 0x3f000000;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_58[0] = (code *)0x0;
  puVar5 = (uchar *)&local_78;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar3 = *(undefined8 *)puVar5;
  uVar4 = *(undefined8 *)(puVar5 + 8);
  uVar1 = *(undefined8 *)(puVar5 + 0x10);
  local_30 = FMemory::Malloc(0x20,8);
  local_30[1] = uVar3;
  local_30[2] = uVar4;
  local_30[3] = uVar1;
  *local_30 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`USourceEffectChorusPreset::SetSettings'::`2'::<lambda_1>,1,1>
               ::_vftable_;
  if (local_30 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`USourceEffectChorusPreset::SetSettings'::__l2::<lambda_1>,void,FSourceEffectChorusSettings_&>
                  ::Call;
  }
  UpdateSettings((USourceEffectChorusPreset *)param_1,
                 (TUniqueFunction<void___cdecl(FSourceEffectChorusSettings_&)> *)local_58);
  return;
}

// execSetSpread @ 14f117210

void __cdecl
USourceEffectChorusPreset::execSetSpread(UObject *param_1,FFrame *param_2,void *param_3)

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
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetSpread'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetSpread'::__l2::<lambda_1>,void,FSourceEffectChorusSettings_&>
                ::Call;
  UpdateSettings((USourceEffectChorusPreset *)param_1,
                 (TUniqueFunction<void___cdecl(FSourceEffectChorusSettings_&)> *)local_38);
  return;
}

// execSetSpreadModulator @ 14f1172d0

void __cdecl
USourceEffectChorusPreset::execSetSpreadModulator(UObject *param_1,FFrame *param_2,void *param_3)

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
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetSpreadModulator'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_20 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetSpreadModulator'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
                ::Call;
  USoundEffectPreset::IterateEffects<FSourceEffectChorus>
            ((USoundEffectPreset *)param_1,
             (TFunction<void___cdecl(FSourceEffectChorus_&)> *)local_38);
  return;
}

// execSetSpreadModulators @ 14f117380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
USourceEffectChorusPreset::execSetSpreadModulators(UObject *param_1,FFrame *param_2,void *param_3)

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
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetSpreadModulators'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_a8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetSpreadModulators'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
                ::Call;
  USoundEffectPreset::IterateEffects<FSourceEffectChorus>
            ((USoundEffectPreset *)param_1,
             (TFunction<void___cdecl(FSourceEffectChorus_&)> *)local_a8);
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

// execSetWet @ 14f118490

void __cdecl USourceEffectChorusPreset::execSetWet(UObject *param_1,FFrame *param_2,void *param_3)

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
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetWet'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetWet'::__l2::<lambda_1>,void,FSourceEffectChorusSettings_&>
                ::Call;
  UpdateSettings((USourceEffectChorusPreset *)param_1,
                 (TUniqueFunction<void___cdecl(FSourceEffectChorusSettings_&)> *)local_38);
  return;
}

// execSetWetModulator @ 14f118550

void __cdecl
USourceEffectChorusPreset::execSetWetModulator(UObject *param_1,FFrame *param_2,void *param_3)

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
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetWetModulator'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_20 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetWetModulator'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
                ::Call;
  USoundEffectPreset::IterateEffects<FSourceEffectChorus>
            ((USoundEffectPreset *)param_1,
             (TFunction<void___cdecl(FSourceEffectChorus_&)> *)local_38);
  return;
}

// execSetWetModulators @ 14f118600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
USourceEffectChorusPreset::execSetWetModulators(UObject *param_1,FFrame *param_2,void *param_3)

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
              TFunction_OwnedObject<`USourceEffectChorusPreset::SetWetModulators'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_a8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USourceEffectChorusPreset::SetWetModulators'::__l2::<lambda_1>,void,FSourceEffectChorus_&>
                ::Call;
  USoundEffectPreset::IterateEffects<FSourceEffectChorus>
            ((USoundEffectPreset *)param_1,
             (TFunction<void___cdecl(FSourceEffectChorus_&)> *)local_a8);
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

