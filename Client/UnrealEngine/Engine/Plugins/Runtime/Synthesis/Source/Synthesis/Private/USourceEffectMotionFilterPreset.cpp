// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 16

// StaticClass @ 14f0a2da0

UClass * __cdecl USourceEffectMotionFilterPreset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectMotionFilterPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectMotionFilterPreset",
               &Z_Registration_Info_UClass_USourceEffectMotionFilterPreset.InnerSingleton,
               StaticRegisterNativesUSourceEffectMotionFilterPreset,0x180,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USourceEffectMotionFilterPreset>,
               InternalVTableHelperCtorCaller<USourceEffectMotionFilterPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectMotionFilterPreset.InnerSingleton;
}

// USourceEffectMotionFilterPreset @ 14f0ba910

USourceEffectMotionFilterPreset * __thiscall
USourceEffectMotionFilterPreset::USourceEffectMotionFilterPreset
          (USourceEffectMotionFilterPreset *this,FVTableHelper *param_1)

{
  USoundEffectSourcePreset::USoundEffectSourcePreset((USoundEffectSourcePreset *)this,param_1);
  this->_padding_ = (longlong)&___7USourceEffectMotionFilterPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  FSourceEffectMotionFilterSettings::FSourceEffectMotionFilterSettings(&this->SettingsCopy);
  FSourceEffectMotionFilterSettings::FSourceEffectMotionFilterSettings(&this->Settings);
  return this;
}

// USourceEffectMotionFilterPreset @ 14f0ba960

USourceEffectMotionFilterPreset * __thiscall
USourceEffectMotionFilterPreset::USourceEffectMotionFilterPreset
          (USourceEffectMotionFilterPreset *this,FObjectInitializer *param_1)

{
  USoundEffectSourcePreset::USoundEffectSourcePreset((USoundEffectSourcePreset *)this,param_1);
  this->_padding_ = (longlong)&___7USourceEffectMotionFilterPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  FSourceEffectMotionFilterSettings::FSourceEffectMotionFilterSettings(&this->SettingsCopy);
  FSourceEffectMotionFilterSettings::FSourceEffectMotionFilterSettings(&this->Settings);
  return this;
}

// ~USourceEffectMotionFilterPreset @ 14f0c04d0

void __thiscall
USourceEffectMotionFilterPreset::~USourceEffectMotionFilterPreset
          (USourceEffectMotionFilterPreset *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7USourceEffectMotionFilterPreset__6B_;
  *(undefined4 *)&(this->Settings).ModulationMappings.field_0x48 = 0;
  pvVar1 = *(void **)&(this->Settings).ModulationMappings.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Settings).ModulationMappings);
  *(undefined4 *)&(this->SettingsCopy).ModulationMappings.field_0x48 = 0;
  pvVar1 = *(void **)&(this->SettingsCopy).ModulationMappings.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SettingsCopy).ModulationMappings);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSourcePreset::~USoundEffectSourcePreset((USoundEffectSourcePreset *)this);
  return;
}

// CanFilter @ 14f0cbba0

bool __thiscall USourceEffectMotionFilterPreset::CanFilter(USourceEffectMotionFilterPreset *this)

{
  return false;
}

// CreateNewEffect @ 14f0d0aa0

FSoundEffectBase * __thiscall
USourceEffectMotionFilterPreset::CreateNewEffect(USourceEffectMotionFilterPreset *this)

{
  FSourceEffectMotionFilter *pFVar1;
  
  pFVar1 = ::operator_new(0xb60);
  if (pFVar1 != (FSourceEffectMotionFilter *)0x0) {
    pFVar1 = FSourceEffectMotionFilter::FSourceEffectMotionFilter(pFVar1);
    return (FSoundEffectBase *)pFVar1;
  }
  return (FSoundEffectBase *)0x0;
}

// CreateNewPreset @ 14f0d1c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USoundEffectPreset * __thiscall
USourceEffectMotionFilterPreset::CreateNewPreset
          (USourceEffectMotionFilterPreset *this,UObject *param_1,FName param_2,EObjectFlags param_3
          )

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

// GetAssetActionName @ 14f0d8920

FText * __thiscall
USourceEffectMotionFilterPreset::GetAssetActionName
          (USourceEffectMotionFilterPreset *this,FText *__return_storage_ptr__)

{
  FText::FromString(__return_storage_ptr__,"SourceEffectMotionFilter");
  return __return_storage_ptr__;
}

// GetPresetColor @ 14f0dbcc0

FColor __thiscall
USourceEffectMotionFilterPreset::GetPresetColor(USourceEffectMotionFilterPreset *this)

{
  undefined4 *in_RDX;
  
  *in_RDX = 0xff00b9d3;
  return (FColor)SUB84(in_RDX,0);
}

// GetPrivateStaticClass @ 14f0dc900

UClass * __cdecl USourceEffectMotionFilterPreset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectMotionFilterPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectMotionFilterPreset",
               &Z_Registration_Info_UClass_USourceEffectMotionFilterPreset.InnerSingleton,
               StaticRegisterNativesUSourceEffectMotionFilterPreset,0x180,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USourceEffectMotionFilterPreset>,
               InternalVTableHelperCtorCaller<USourceEffectMotionFilterPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectMotionFilterPreset.InnerSingleton;
}

// GetSupportedClass @ 14f0dee60

UClass * __thiscall
USourceEffectMotionFilterPreset::GetSupportedClass(USourceEffectMotionFilterPreset *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectMotionFilterPreset.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectMotionFilterPreset",
               &Z_Registration_Info_UClass_USourceEffectMotionFilterPreset.InnerSingleton,
               StaticRegisterNativesUSourceEffectMotionFilterPreset,0x180,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USourceEffectMotionFilterPreset>,
               InternalVTableHelperCtorCaller<USourceEffectMotionFilterPreset>,aFStackX_8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectMotionFilterPreset.InnerSingleton;
}

// HasAssetActions @ 14f0df570

bool __thiscall
USourceEffectMotionFilterPreset::HasAssetActions(USourceEffectMotionFilterPreset *this)

{
  return true;
}

// Init @ 14f0e5e70

void __thiscall USourceEffectMotionFilterPreset::Init(USourceEffectMotionFilterPreset *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ESourceEffectMotionFilterType EVar1;
  undefined2 uVar2;
  float fVar3;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->SettingsCopy).MotionFilterTopology = (this->Settings).MotionFilterTopology;
    (this->SettingsCopy).MotionFilterMix = (this->Settings).MotionFilterMix;
    EVar1 = (this->Settings).FilterASettings.FilterType;
    uVar2 = *(undefined2 *)&(this->Settings).FilterASettings.field_0x2;
    fVar3 = (this->Settings).FilterASettings.CutoffFrequency;
    (this->SettingsCopy).FilterASettings.FilterCircuit =
         (this->Settings).FilterASettings.FilterCircuit;
    (this->SettingsCopy).FilterASettings.FilterType = EVar1;
    *(undefined2 *)&(this->SettingsCopy).FilterASettings.field_0x2 = uVar2;
    (this->SettingsCopy).FilterASettings.CutoffFrequency = fVar3;
    (this->SettingsCopy).FilterASettings.FilterQ = (this->Settings).FilterASettings.FilterQ;
    EVar1 = (this->Settings).FilterBSettings.FilterType;
    uVar2 = *(undefined2 *)&(this->Settings).FilterBSettings.field_0x2;
    fVar3 = (this->Settings).FilterBSettings.CutoffFrequency;
    (this->SettingsCopy).FilterBSettings.FilterCircuit =
         (this->Settings).FilterBSettings.FilterCircuit;
    (this->SettingsCopy).FilterBSettings.FilterType = EVar1;
    *(undefined2 *)&(this->SettingsCopy).FilterBSettings.field_0x2 = uVar2;
    (this->SettingsCopy).FilterBSettings.CutoffFrequency = fVar3;
    (this->SettingsCopy).FilterBSettings.FilterQ = (this->Settings).FilterBSettings.FilterQ;
    TSet<TTuple<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>,TDefaultMapHashableKeyFuncs<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings,0>,FDefaultSetAllocator>
    ::operator=(&(this->SettingsCopy).ModulationMappings,
                (TSet<TTuple<ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>,TDefaultMapHashableKeyFuncs<ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings,0>,FDefaultSetAllocator>
                 *)&(this->Settings).ModulationMappings);
    (this->SettingsCopy).DryVolumeDb = (this->Settings).DryVolumeDb;
                    /* WARNING: Could not recover jumptable at 0x00014f0e5f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetSettings @ 14f1015a0

void __thiscall
USourceEffectMotionFilterPreset::SetSettings
          (USourceEffectMotionFilterPreset *this,FSourceEffectMotionFilterSettings *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ESourceEffectMotionFilterType EVar1;
  undefined2 uVar2;
  float fVar3;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->SettingsCopy).MotionFilterTopology = param_1->MotionFilterTopology;
    (this->SettingsCopy).MotionFilterMix = param_1->MotionFilterMix;
    EVar1 = (param_1->FilterASettings).FilterType;
    uVar2 = *(undefined2 *)&(param_1->FilterASettings).field_0x2;
    fVar3 = (param_1->FilterASettings).CutoffFrequency;
    (this->SettingsCopy).FilterASettings.FilterCircuit = (param_1->FilterASettings).FilterCircuit;
    (this->SettingsCopy).FilterASettings.FilterType = EVar1;
    *(undefined2 *)&(this->SettingsCopy).FilterASettings.field_0x2 = uVar2;
    (this->SettingsCopy).FilterASettings.CutoffFrequency = fVar3;
    (this->SettingsCopy).FilterASettings.FilterQ = (param_1->FilterASettings).FilterQ;
    EVar1 = (param_1->FilterBSettings).FilterType;
    uVar2 = *(undefined2 *)&(param_1->FilterBSettings).field_0x2;
    fVar3 = (param_1->FilterBSettings).CutoffFrequency;
    (this->SettingsCopy).FilterBSettings.FilterCircuit = (param_1->FilterBSettings).FilterCircuit;
    (this->SettingsCopy).FilterBSettings.FilterType = EVar1;
    *(undefined2 *)&(this->SettingsCopy).FilterBSettings.field_0x2 = uVar2;
    (this->SettingsCopy).FilterBSettings.CutoffFrequency = fVar3;
    (this->SettingsCopy).FilterBSettings.FilterQ = (param_1->FilterBSettings).FilterQ;
    TSet<TTuple<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>,TDefaultMapHashableKeyFuncs<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings,0>,FDefaultSetAllocator>
    ::operator=(&(this->SettingsCopy).ModulationMappings,
                (TSet<TTuple<ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>,TDefaultMapHashableKeyFuncs<ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings,0>,FDefaultSetAllocator>
                 *)&param_1->ModulationMappings);
    (this->SettingsCopy).DryVolumeDb = param_1->DryVolumeDb;
    USoundEffectPreset::Update((USoundEffectPreset *)this);
                    /* WARNING: Could not recover jumptable at 0x00014f10163c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StaticRegisterNativesUSourceEffectMotionFilterPreset @ 14f103840

void __cdecl
USourceEffectMotionFilterPreset::StaticRegisterNativesUSourceEffectMotionFilterPreset(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_USourceEffectMotionFilterPreset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetSettings @ 14f115e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
USourceEffectMotionFilterPreset::execSetSettings(UObject *param_1,FFrame *param_2,void *param_3)

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
  undefined1 auStack_b8 [32];
  undefined1 local_98 [104];
  undefined4 local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FSourceEffectMotionFilterSettings::FSourceEffectMotionFilterSettings
            ((FSourceEffectMotionFilterSettings *)local_98);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  puVar9 = local_98;
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
    uVar5 = puVar9[0xc];
    uVar6 = puVar9[0xd];
    uVar7 = puVar9[0xe];
    uVar8 = puVar9[0xf];
    param_1[3].field_0x20 = puVar9[8];
    param_1[3].field_0x21 = uVar2;
    param_1[3].field_0x22 = uVar3;
    param_1[3].field_0x23 = uVar4;
    param_1[3].field_0x24 = uVar5;
    param_1[3].field_0x25 = uVar6;
    param_1[3].field_0x26 = uVar7;
    param_1[3].field_0x27 = uVar8;
    uVar2 = puVar9[0x11];
    uVar3 = puVar9[0x12];
    uVar4 = puVar9[0x13];
    param_1[4].field_0x0 = puVar9[0x10];
    param_1[4].field_0x1 = uVar2;
    param_1[4].field_0x2 = uVar3;
    param_1[4].field_0x3 = uVar4;
    uVar2 = puVar9[0x15];
    uVar3 = puVar9[0x16];
    uVar4 = puVar9[0x17];
    uVar5 = puVar9[0x18];
    uVar6 = puVar9[0x19];
    uVar7 = puVar9[0x1a];
    uVar8 = puVar9[0x1b];
    param_1[4].field_0x4 = puVar9[0x14];
    param_1[4].field_0x5 = uVar2;
    param_1[4].field_0x6 = uVar3;
    param_1[4].field_0x7 = uVar4;
    param_1[4].field_0x8 = uVar5;
    param_1[4].field_0x9 = uVar6;
    param_1[4].field_0xa = uVar7;
    param_1[4].field_0xb = uVar8;
    uVar2 = puVar9[0x1d];
    uVar3 = puVar9[0x1e];
    uVar4 = puVar9[0x1f];
    param_1[4].field_0xc = puVar9[0x1c];
    param_1[4].field_0xd = uVar2;
    param_1[4].field_0xe = uVar3;
    param_1[4].field_0xf = uVar4;
    TSet<TTuple<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>,TDefaultMapHashableKeyFuncs<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings,0>,FDefaultSetAllocator>
    ::operator=(&param_1[4].field_0x10,
                (TSet<TTuple<ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>,TDefaultMapHashableKeyFuncs<ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings,0>,FDefaultSetAllocator>
                 *)(puVar9 + 0x20));
    uVar2 = puVar9[0x71];
    uVar3 = puVar9[0x72];
    uVar4 = puVar9[0x73];
    param_1[6].field_0x10 = puVar9[0x70];
    param_1[6].field_0x11 = uVar2;
    param_1[6].field_0x12 = uVar3;
    param_1[6].field_0x13 = uVar4;
    USoundEffectPreset::Update((USoundEffectPreset *)param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_30 = 0;
    if ((void *)local_98._96_8_ != (void *)0x0) {
      FMemory::Free((void *)local_98._96_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (local_98 + 0x20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

