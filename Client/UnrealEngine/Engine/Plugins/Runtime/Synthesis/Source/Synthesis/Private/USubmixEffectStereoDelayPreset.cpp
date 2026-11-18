// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 16

// StaticClass @ 14f0a41e0

UClass * __cdecl USubmixEffectStereoDelayPreset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectStereoDelayPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SubmixEffectStereoDelayPreset",
               &Z_Registration_Info_UClass_USubmixEffectStereoDelayPreset.InnerSingleton,
               StaticRegisterNativesUSubmixEffectStereoDelayPreset,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USubmixEffectStereoDelayPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectStereoDelayPreset>,local_res8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectStereoDelayPreset.InnerSingleton;
}

// USubmixEffectStereoDelayPreset @ 14f0bb710

USubmixEffectStereoDelayPreset * __thiscall
USubmixEffectStereoDelayPreset::USubmixEffectStereoDelayPreset
          (USubmixEffectStereoDelayPreset *this,FVTableHelper *param_1)

{
  USoundEffectSubmixPreset::USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this,param_1);
  this->_padding_ = (longlong)&___7USubmixEffectStereoDelayPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).DelayMode = PingPong;
  (this->SettingsCopy).DelayTimeMsec = 500.0;
  (this->SettingsCopy).Feedback = 0.1;
  (this->SettingsCopy).DelayRatio = 0.2;
  (this->SettingsCopy).WetLevel = 0.4;
  (this->SettingsCopy).DryLevel = 1.0;
  (this->SettingsCopy).bFilterEnabled = false;
  (this->SettingsCopy).FilterType = Lowpass;
  (this->SettingsCopy).FilterFrequency = 20000.0;
  (this->SettingsCopy).FilterQ = 2.0;
  (this->Settings).DelayMode = PingPong;
  (this->Settings).DelayTimeMsec = 500.0;
  (this->Settings).Feedback = 0.1;
  (this->Settings).DelayRatio = 0.2;
  (this->Settings).WetLevel = 0.4;
  (this->Settings).DryLevel = 1.0;
  (this->Settings).bFilterEnabled = false;
  (this->Settings).FilterType = Lowpass;
  (this->Settings).FilterFrequency = 20000.0;
  (this->Settings).FilterQ = 2.0;
  return this;
}

// USubmixEffectStereoDelayPreset @ 14f0bb800

USubmixEffectStereoDelayPreset * __thiscall
USubmixEffectStereoDelayPreset::USubmixEffectStereoDelayPreset
          (USubmixEffectStereoDelayPreset *this,FObjectInitializer *param_1)

{
  USoundEffectSubmixPreset::USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this,param_1);
  this->_padding_ = (longlong)&___7USubmixEffectStereoDelayPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).DelayMode = PingPong;
  (this->SettingsCopy).DelayTimeMsec = 500.0;
  (this->SettingsCopy).Feedback = 0.1;
  (this->SettingsCopy).DelayRatio = 0.2;
  (this->SettingsCopy).WetLevel = 0.4;
  (this->SettingsCopy).DryLevel = 1.0;
  (this->SettingsCopy).bFilterEnabled = false;
  (this->SettingsCopy).FilterType = Lowpass;
  (this->SettingsCopy).FilterFrequency = 20000.0;
  (this->SettingsCopy).FilterQ = 2.0;
  (this->Settings).DelayMode = PingPong;
  (this->Settings).DelayTimeMsec = 500.0;
  (this->Settings).Feedback = 0.1;
  (this->Settings).DelayRatio = 0.2;
  (this->Settings).WetLevel = 0.4;
  (this->Settings).DryLevel = 1.0;
  (this->Settings).bFilterEnabled = false;
  (this->Settings).FilterType = Lowpass;
  (this->Settings).FilterFrequency = 20000.0;
  (this->Settings).FilterQ = 2.0;
  return this;
}

// ~USubmixEffectStereoDelayPreset @ 14f0c07d0

void __thiscall
USubmixEffectStereoDelayPreset::~USubmixEffectStereoDelayPreset
          (USubmixEffectStereoDelayPreset *this)

{
  this->_padding_ = (longlong)&___7USubmixEffectStereoDelayPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSubmixPreset::~USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this);
  return;
}

// CanFilter @ 14f0cbc60

bool __thiscall USubmixEffectStereoDelayPreset::CanFilter(USubmixEffectStereoDelayPreset *this)

{
  return false;
}

// CreateNewEffect @ 14f0d1150

FSoundEffectBase * __thiscall
USubmixEffectStereoDelayPreset::CreateNewEffect(USubmixEffectStereoDelayPreset *this)

{
  FSoundEffectBase *this_00;
  
  this_00 = ::operator_new(0xf0);
  if (this_00 != (FSoundEffectBase *)0x0) {
    FSoundEffectBase::FSoundEffectBase(this_00);
    *(undefined4 *)&this_00[1]._padding_ = 0xffffffff;
    this_00[1]._padding_ = 0;
    this_00->_padding_ = (longlong)&___7FSubmixEffectStereoDelay__6B_;
    *(undefined4 *)this_00[1].SettingsCritSect.CriticalSection.Opaque1 = 0;
    *(undefined4 *)((longlong)this_00[1].SettingsCritSect.CriticalSection.Opaque1 + 4) = 0xffffffff;
    this_00[1].SettingsCritSect.CriticalSection.Opaque2[0] = 0;
    this_00[1].SettingsCritSect.CriticalSection.Opaque2[1] = 0;
    this_00[1].SettingsCritSect.CriticalSection.Opaque3[0] = (void *)0x0;
    Audio::FDelayStereo::FDelayStereo
              ((FDelayStereo *)(this_00[1].SettingsCritSect.CriticalSection.Opaque3 + 1));
    return this_00;
  }
  return (FSoundEffectBase *)0x0;
}

// CreateNewPreset @ 14f0d2840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USoundEffectPreset * __thiscall
USubmixEffectStereoDelayPreset::CreateNewPreset
          (USubmixEffectStereoDelayPreset *this,UObject *param_1,FName param_2,EObjectFlags param_3)

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

// GetAssetActionName @ 14f0d8b60

FText * __thiscall
USubmixEffectStereoDelayPreset::GetAssetActionName
          (USubmixEffectStereoDelayPreset *this,FText *__return_storage_ptr__)

{
  FText::FromString(__return_storage_ptr__,"SubmixEffectStereoDelay");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14f0dd2c0

UClass * __cdecl USubmixEffectStereoDelayPreset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectStereoDelayPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SubmixEffectStereoDelayPreset",
               &Z_Registration_Info_UClass_USubmixEffectStereoDelayPreset.InnerSingleton,
               StaticRegisterNativesUSubmixEffectStereoDelayPreset,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USubmixEffectStereoDelayPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectStereoDelayPreset>,local_res8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectStereoDelayPreset.InnerSingleton;
}

// GetSupportedClass @ 14f0def20

UClass * __thiscall
USubmixEffectStereoDelayPreset::GetSupportedClass(USubmixEffectStereoDelayPreset *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectStereoDelayPreset.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SubmixEffectStereoDelayPreset",
               &Z_Registration_Info_UClass_USubmixEffectStereoDelayPreset.InnerSingleton,
               StaticRegisterNativesUSubmixEffectStereoDelayPreset,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USubmixEffectStereoDelayPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectStereoDelayPreset>,aFStackX_8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectStereoDelayPreset.InnerSingleton;
}

// HasAssetActions @ 14f0df630

bool __thiscall
USubmixEffectStereoDelayPreset::HasAssetActions(USubmixEffectStereoDelayPreset *this)

{
  return true;
}

// Init @ 14f0e6370

void __thiscall USubmixEffectStereoDelayPreset::Init(USubmixEffectStereoDelayPreset *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined3 uVar8;
  bool bVar9;
  EStereoDelayFiltertype EVar10;
  undefined2 uVar11;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar8 = *(undefined3 *)&(this->Settings).field_0x1;
    fVar2 = (this->Settings).DelayTimeMsec;
    fVar3 = (this->Settings).Feedback;
    fVar4 = (this->Settings).DelayRatio;
    fVar1 = (this->Settings).FilterQ;
    fVar5 = (this->Settings).WetLevel;
    fVar6 = (this->Settings).DryLevel;
    bVar9 = (this->Settings).bFilterEnabled;
    EVar10 = (this->Settings).FilterType;
    uVar11 = *(undefined2 *)&(this->Settings).field_0x1a;
    fVar7 = (this->Settings).FilterFrequency;
    (this->SettingsCopy).DelayMode = (this->Settings).DelayMode;
    *(undefined3 *)&(this->SettingsCopy).field_0x1 = uVar8;
    (this->SettingsCopy).DelayTimeMsec = fVar2;
    (this->SettingsCopy).Feedback = fVar3;
    (this->SettingsCopy).DelayRatio = fVar4;
    (this->SettingsCopy).WetLevel = fVar5;
    (this->SettingsCopy).DryLevel = fVar6;
    (this->SettingsCopy).bFilterEnabled = bVar9;
    (this->SettingsCopy).FilterType = EVar10;
    *(undefined2 *)&(this->SettingsCopy).field_0x1a = uVar11;
    (this->SettingsCopy).FilterFrequency = fVar7;
    (this->SettingsCopy).FilterQ = fVar1;
                    /* WARNING: Could not recover jumptable at 0x00014f0e63c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnInit @ 14f0ea960

void __thiscall USubmixEffectStereoDelayPreset::OnInit(USubmixEffectStereoDelayPreset *this)

{
  return;
}

// SetSettings @ 14f101b80

void __thiscall
USubmixEffectStereoDelayPreset::SetSettings
          (USubmixEffectStereoDelayPreset *this,FSubmixEffectStereoDelaySettings *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined3 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  EStereoDelayFiltertype EVar6;
  undefined2 uVar7;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar1 = *(undefined3 *)&param_1->field_0x1;
    fVar2 = param_1->DelayTimeMsec;
    fVar3 = param_1->Feedback;
    fVar4 = param_1->DelayRatio;
    (this->SettingsCopy).DelayMode = param_1->DelayMode;
    *(undefined3 *)&(this->SettingsCopy).field_0x1 = uVar1;
    (this->SettingsCopy).DelayTimeMsec = fVar2;
    (this->SettingsCopy).Feedback = fVar3;
    (this->SettingsCopy).DelayRatio = fVar4;
    fVar2 = param_1->DryLevel;
    bVar5 = param_1->bFilterEnabled;
    EVar6 = param_1->FilterType;
    uVar7 = *(undefined2 *)&param_1->field_0x1a;
    fVar3 = param_1->FilterFrequency;
    (this->SettingsCopy).WetLevel = param_1->WetLevel;
    (this->SettingsCopy).DryLevel = fVar2;
    (this->SettingsCopy).bFilterEnabled = bVar5;
    (this->SettingsCopy).FilterType = EVar6;
    *(undefined2 *)&(this->SettingsCopy).field_0x1a = uVar7;
    (this->SettingsCopy).FilterFrequency = fVar3;
    (this->SettingsCopy).FilterQ = param_1->FilterQ;
    USoundEffectPreset::Update((USoundEffectPreset *)this);
                    /* WARNING: Could not recover jumptable at 0x00014f101bdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StaticRegisterNativesUSubmixEffectStereoDelayPreset @ 14f103b80

void __cdecl
USubmixEffectStereoDelayPreset::StaticRegisterNativesUSubmixEffectStereoDelayPreset(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetSettings @ 14f116b10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
USubmixEffectStereoDelayPreset::execSetSettings(UObject *param_1,FFrame *param_2,void *param_3)

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
  uchar local_38 [4];
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined4 local_24;
  undefined2 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_38[0] = '\x02';
  local_34 = ___xmm_3ecccccd3e4ccccd3dcccccd43fa0000;
  uStack_2c = _UNK_15314dde8;
  local_24 = 0x3f800000;
  local_20 = 0;
  local_1c = 0x469c4000;
  local_18 = 0x40000000;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  puVar17 = local_38;
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
    uVar9 = puVar17[0x18];
    uVar10 = puVar17[0x19];
    uVar11 = puVar17[0x1a];
    uVar12 = puVar17[0x1b];
    uVar13 = puVar17[0x1c];
    uVar14 = puVar17[0x1d];
    uVar15 = puVar17[0x1e];
    uVar16 = puVar17[0x1f];
    param_1[4].field_0x0 = puVar17[0x10];
    param_1[4].field_0x1 = uVar2;
    param_1[4].field_0x2 = uVar3;
    param_1[4].field_0x3 = uVar4;
    param_1[4].field_0x4 = uVar5;
    param_1[4].field_0x5 = uVar6;
    param_1[4].field_0x6 = uVar7;
    param_1[4].field_0x7 = uVar8;
    param_1[4].field_0x8 = uVar9;
    param_1[4].field_0x9 = uVar10;
    param_1[4].field_0xa = uVar11;
    param_1[4].field_0xb = uVar12;
    param_1[4].field_0xc = uVar13;
    param_1[4].field_0xd = uVar14;
    param_1[4].field_0xe = uVar15;
    param_1[4].field_0xf = uVar16;
    uVar2 = puVar17[0x21];
    uVar3 = puVar17[0x22];
    uVar4 = puVar17[0x23];
    param_1[4].field_0x10 = puVar17[0x20];
    param_1[4].field_0x11 = uVar2;
    param_1[4].field_0x12 = uVar3;
    param_1[4].field_0x13 = uVar4;
    USoundEffectPreset::Update((USoundEffectPreset *)param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

