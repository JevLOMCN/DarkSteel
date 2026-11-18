// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 16

// StaticClass @ 14f09e720

UClass * __cdecl USourceEffectSimpleDelayPreset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectSimpleDelayPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectSimpleDelayPreset",
               &Z_Registration_Info_UClass_USourceEffectSimpleDelayPreset.InnerSingleton,
               StaticRegisterNativesUSourceEffectSimpleDelayPreset,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USourceEffectSimpleDelayPreset>,
               InternalVTableHelperCtorCaller<USourceEffectSimpleDelayPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectSimpleDelayPreset.InnerSingleton;
}

// USourceEffectSimpleDelayPreset @ 14f0bacb0

USourceEffectSimpleDelayPreset * __thiscall
USourceEffectSimpleDelayPreset::USourceEffectSimpleDelayPreset
          (USourceEffectSimpleDelayPreset *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  USoundEffectSourcePreset::USoundEffectSourcePreset((USoundEffectSourcePreset *)this,param_1);
  this->_padding_ = (longlong)&___7USourceEffectSimpleDelayPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).bDelayBasedOnDistance = 1;
  (this->SettingsCopy).bUseDistanceOverride = 1;
  (this->Settings).bDelayBasedOnDistance = 1;
  (this->Settings).bUseDistanceOverride = 1;
  (this->SettingsCopy).DryAmount = 0.0;
  (this->Settings).DryAmount = 0.0;
  (this->SettingsCopy).SpeedOfSound = 343.0;
  (this->SettingsCopy).DelayAmount = 0.0;
  (this->SettingsCopy).WetAmount = 1.0;
  (this->SettingsCopy).Feedback = 0.0;
  (this->Settings).SpeedOfSound = 343.0;
  (this->Settings).DelayAmount = 0.0;
  (this->Settings).WetAmount = 1.0;
  (this->Settings).Feedback = 0.0;
  return this;
}

// USourceEffectSimpleDelayPreset @ 14f0bad30

USourceEffectSimpleDelayPreset * __thiscall
USourceEffectSimpleDelayPreset::USourceEffectSimpleDelayPreset
          (USourceEffectSimpleDelayPreset *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  USoundEffectSourcePreset::USoundEffectSourcePreset((USoundEffectSourcePreset *)this,param_1);
  this->_padding_ = (longlong)&___7USourceEffectSimpleDelayPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).bDelayBasedOnDistance = 1;
  (this->SettingsCopy).bUseDistanceOverride = 1;
  (this->Settings).bDelayBasedOnDistance = 1;
  (this->Settings).bUseDistanceOverride = 1;
  (this->SettingsCopy).DryAmount = 0.0;
  (this->Settings).DryAmount = 0.0;
  (this->SettingsCopy).SpeedOfSound = 343.0;
  (this->SettingsCopy).DelayAmount = 0.0;
  (this->SettingsCopy).WetAmount = 1.0;
  (this->SettingsCopy).Feedback = 0.0;
  (this->Settings).SpeedOfSound = 343.0;
  (this->Settings).DelayAmount = 0.0;
  (this->Settings).WetAmount = 1.0;
  (this->Settings).Feedback = 0.0;
  return this;
}

// ~USourceEffectSimpleDelayPreset @ 14f0c05f0

void __thiscall
USourceEffectSimpleDelayPreset::~USourceEffectSimpleDelayPreset
          (USourceEffectSimpleDelayPreset *this)

{
  this->_padding_ = (longlong)&___7USourceEffectSimpleDelayPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSourcePreset::~USoundEffectSourcePreset((USoundEffectSourcePreset *)this);
  return;
}

// CanFilter @ 14f0cbbe0

bool __thiscall USourceEffectSimpleDelayPreset::CanFilter(USourceEffectSimpleDelayPreset *this)

{
  return false;
}

// CreateNewEffect @ 14f0d0c10

FSoundEffectBase * __thiscall
USourceEffectSimpleDelayPreset::CreateNewEffect(USourceEffectSimpleDelayPreset *this)

{
  FSoundEffectBase *this_00;
  
  this_00 = ::operator_new(0xd0);
  if (this_00 != (FSoundEffectBase *)0x0) {
    FSoundEffectBase::FSoundEffectBase(this_00);
    this_00[1].SettingsCritSect.CriticalSection.Opaque1[0] = (void *)0xffffffffffffffff;
    this_00[1].Preset.WeakPtr.ObjectIndex = this_00[1].Preset.WeakPtr.ObjectIndex | 3;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1].SettingsCritSect.CriticalSection.Opaque2[0] = 0;
    this_00[1].SettingsCritSect.CriticalSection.Opaque2[1] = 0;
    this_00[1].SettingsCritSect.CriticalSection.Opaque3[0] = (void *)0x0;
    this_00[1].SettingsCritSect.CriticalSection.Opaque3[1] = (void *)0x0;
    this_00[1].SettingsCritSect.CriticalSection.Opaque3[2] = (void *)0x0;
    this_00[1].CurrentAudioThreadSettingsData.ArrayNum = 0;
    this_00->_padding_ = (longlong)&___7FSourceEffectSimpleDelay__6B_;
    this_00[1].CurrentAudioThreadSettingsData.AllocatorInstance.Data =
         (FScriptContainerElement *)0x43ab8000;
    *(undefined8 *)&this_00[1].CurrentAudioThreadSettingsData.ArrayMax = 0x3f800000;
    *(undefined1 *)&this_00[1].Preset.WeakPtr.ObjectSerialNumber = 1;
    return this_00;
  }
  return (FSoundEffectBase *)0x0;
}

// CreateNewPreset @ 14f0d2040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USoundEffectPreset * __thiscall
USourceEffectSimpleDelayPreset::CreateNewPreset
          (USourceEffectSimpleDelayPreset *this,UObject *param_1,FName param_2,EObjectFlags param_3)

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

// GetAssetActionName @ 14f0d89e0

FText * __thiscall
USourceEffectSimpleDelayPreset::GetAssetActionName
          (USourceEffectSimpleDelayPreset *this,FText *__return_storage_ptr__)

{
  FText::FromString(__return_storage_ptr__,"SourceEffectSimpleDelay");
  return __return_storage_ptr__;
}

// GetPresetColor @ 14f0dbd00

FColor __thiscall
USourceEffectSimpleDelayPreset::GetPresetColor(USourceEffectSimpleDelayPreset *this)

{
  undefined4 *in_RDX;
  
  *in_RDX = 0xff64a555;
  return (FColor)SUB84(in_RDX,0);
}

// GetPrivateStaticClass @ 14f0dcc00

UClass * __cdecl USourceEffectSimpleDelayPreset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectSimpleDelayPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectSimpleDelayPreset",
               &Z_Registration_Info_UClass_USourceEffectSimpleDelayPreset.InnerSingleton,
               StaticRegisterNativesUSourceEffectSimpleDelayPreset,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USourceEffectSimpleDelayPreset>,
               InternalVTableHelperCtorCaller<USourceEffectSimpleDelayPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectSimpleDelayPreset.InnerSingleton;
}

// GetSupportedClass @ 14f0deea0

UClass * __thiscall
USourceEffectSimpleDelayPreset::GetSupportedClass(USourceEffectSimpleDelayPreset *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectSimpleDelayPreset.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectSimpleDelayPreset",
               &Z_Registration_Info_UClass_USourceEffectSimpleDelayPreset.InnerSingleton,
               StaticRegisterNativesUSourceEffectSimpleDelayPreset,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USourceEffectSimpleDelayPreset>,
               InternalVTableHelperCtorCaller<USourceEffectSimpleDelayPreset>,aFStackX_8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectSimpleDelayPreset.InnerSingleton;
}

// HasAssetActions @ 14f0df5b0

bool __thiscall
USourceEffectSimpleDelayPreset::HasAssetActions(USourceEffectSimpleDelayPreset *this)

{
  return true;
}

// Init @ 14f0e6080

void __thiscall USourceEffectSimpleDelayPreset::Init(USourceEffectSimpleDelayPreset *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    fVar1 = (this->Settings).DelayAmount;
    fVar2 = (this->Settings).DryAmount;
    fVar3 = (this->Settings).WetAmount;
    fVar4 = (this->Settings).Feedback;
    uVar5 = *(undefined4 *)&(this->Settings).field_0x14;
    (this->SettingsCopy).SpeedOfSound = (this->Settings).SpeedOfSound;
    (this->SettingsCopy).DelayAmount = fVar1;
    (this->SettingsCopy).DryAmount = fVar2;
    (this->SettingsCopy).WetAmount = fVar3;
    (this->SettingsCopy).Feedback = fVar4;
    *(undefined4 *)&(this->SettingsCopy).field_0x14 = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00014f0e60ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetSettings @ 14f1017c0

void __thiscall
USourceEffectSimpleDelayPreset::SetSettings
          (USourceEffectSimpleDelayPreset *this,FSourceEffectSimpleDelaySettings *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    fVar1 = param_1->DelayAmount;
    fVar2 = param_1->DryAmount;
    fVar3 = param_1->WetAmount;
    (this->SettingsCopy).SpeedOfSound = param_1->SpeedOfSound;
    (this->SettingsCopy).DelayAmount = fVar1;
    (this->SettingsCopy).DryAmount = fVar2;
    (this->SettingsCopy).WetAmount = fVar3;
    uVar4 = *(undefined4 *)&param_1->field_0x14;
    (this->SettingsCopy).Feedback = param_1->Feedback;
    *(undefined4 *)&(this->SettingsCopy).field_0x14 = uVar4;
    USoundEffectPreset::Update((USoundEffectPreset *)this);
                    /* WARNING: Could not recover jumptable at 0x00014f101818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StaticRegisterNativesUSourceEffectSimpleDelayPreset @ 14f103940

void __cdecl
USourceEffectSimpleDelayPreset::StaticRegisterNativesUSourceEffectSimpleDelayPreset(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_USourceEffectSimpleDelayPreset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetSettings @ 14f1162e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
USourceEffectSimpleDelayPreset::execSetSettings(UObject *param_1,FFrame *param_2,void *param_3)

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
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  uint local_14;
  
  uStack_20 = _UNK_15314de08;
  local_28 = ___xmm_3f800000000000000000000043ab8000;
  local_14 = local_14 | 3;
  local_18 = 0;
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
  puVar17 = (uchar *)&local_28;
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
    param_1[4].field_0x0 = puVar17[0x10];
    param_1[4].field_0x1 = uVar2;
    param_1[4].field_0x2 = uVar3;
    param_1[4].field_0x3 = uVar4;
    param_1[4].field_0x4 = uVar5;
    param_1[4].field_0x5 = uVar6;
    param_1[4].field_0x6 = uVar7;
    param_1[4].field_0x7 = uVar8;
    USoundEffectPreset::Update((USoundEffectPreset *)param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

