// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 16

// StaticClass @ 14f0a3140

UClass * __cdecl USourceEffectDynamicsProcessorPreset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectDynamicsProcessorPreset.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectDynamicsProcessorPreset",
               &Z_Registration_Info_UClass_USourceEffectDynamicsProcessorPreset.InnerSingleton,
               StaticRegisterNativesUSourceEffectDynamicsProcessorPreset,0xe8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USourceEffectDynamicsProcessorPreset>,
               InternalVTableHelperCtorCaller<USourceEffectDynamicsProcessorPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectDynamicsProcessorPreset.InnerSingleton;
}

// USourceEffectDynamicsProcessorPreset @ 14f0ba2b0

USourceEffectDynamicsProcessorPreset * __thiscall
USourceEffectDynamicsProcessorPreset::USourceEffectDynamicsProcessorPreset
          (USourceEffectDynamicsProcessorPreset *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  USoundEffectSourcePreset::USoundEffectSourcePreset((USoundEffectSourcePreset *)this,param_1);
  this->_padding_ = (longlong)&___7USourceEffectDynamicsProcessorPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).bStereoLinked = 1;
  (this->SettingsCopy).bAnalogMode = 1;
  (this->SettingsCopy).bBypass = '\0';
  (this->Settings).bStereoLinked = 1;
  (this->Settings).bAnalogMode = 1;
  (this->Settings).bBypass = '\0';
  (this->SettingsCopy).OutputGainDb = 0.0;
  (this->Settings).OutputGainDb = 0.0;
  (this->SettingsCopy).DynamicsProcessorType = Compressor;
  (this->SettingsCopy).PeakMode = RootMeanSquared;
  (this->SettingsCopy).LookAheadMsec = 3.0;
  (this->SettingsCopy).AttackTimeMsec = 10.0;
  (this->SettingsCopy).ReleaseTimeMsec = 100.0;
  (this->SettingsCopy).ThresholdDb = -6.0;
  (this->SettingsCopy).Ratio = 1.5;
  (this->SettingsCopy).KneeBandwidthDb = 10.0;
  (this->SettingsCopy).InputGainDb = 0.0;
  (this->Settings).DynamicsProcessorType = Compressor;
  (this->Settings).PeakMode = RootMeanSquared;
  (this->Settings).LookAheadMsec = 3.0;
  (this->Settings).AttackTimeMsec = 10.0;
  (this->Settings).ReleaseTimeMsec = 100.0;
  (this->Settings).ThresholdDb = -6.0;
  (this->Settings).Ratio = 1.5;
  (this->Settings).KneeBandwidthDb = 10.0;
  (this->Settings).InputGainDb = 0.0;
  return this;
}

// USourceEffectDynamicsProcessorPreset @ 14f0ba3a0

USourceEffectDynamicsProcessorPreset * __thiscall
USourceEffectDynamicsProcessorPreset::USourceEffectDynamicsProcessorPreset
          (USourceEffectDynamicsProcessorPreset *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  USoundEffectSourcePreset::USoundEffectSourcePreset((USoundEffectSourcePreset *)this,param_1);
  this->_padding_ = (longlong)&___7USourceEffectDynamicsProcessorPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).bStereoLinked = 1;
  (this->SettingsCopy).bAnalogMode = 1;
  (this->SettingsCopy).bBypass = '\0';
  (this->Settings).bStereoLinked = 1;
  (this->Settings).bAnalogMode = 1;
  (this->Settings).bBypass = '\0';
  (this->SettingsCopy).OutputGainDb = 0.0;
  (this->Settings).OutputGainDb = 0.0;
  (this->SettingsCopy).DynamicsProcessorType = Compressor;
  (this->SettingsCopy).PeakMode = RootMeanSquared;
  (this->SettingsCopy).LookAheadMsec = 3.0;
  (this->SettingsCopy).AttackTimeMsec = 10.0;
  (this->SettingsCopy).ReleaseTimeMsec = 100.0;
  (this->SettingsCopy).ThresholdDb = -6.0;
  (this->SettingsCopy).Ratio = 1.5;
  (this->SettingsCopy).KneeBandwidthDb = 10.0;
  (this->SettingsCopy).InputGainDb = 0.0;
  (this->Settings).DynamicsProcessorType = Compressor;
  (this->Settings).PeakMode = RootMeanSquared;
  (this->Settings).LookAheadMsec = 3.0;
  (this->Settings).AttackTimeMsec = 10.0;
  (this->Settings).ReleaseTimeMsec = 100.0;
  (this->Settings).ThresholdDb = -6.0;
  (this->Settings).Ratio = 1.5;
  (this->Settings).KneeBandwidthDb = 10.0;
  (this->Settings).InputGainDb = 0.0;
  return this;
}

// ~USourceEffectDynamicsProcessorPreset @ 14f0c0350

void __thiscall
USourceEffectDynamicsProcessorPreset::~USourceEffectDynamicsProcessorPreset
          (USourceEffectDynamicsProcessorPreset *this)

{
  this->_padding_ = (longlong)&___7USourceEffectDynamicsProcessorPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSourcePreset::~USoundEffectSourcePreset((USoundEffectSourcePreset *)this);
  return;
}

// CanFilter @ 14f0cbb40

bool __thiscall
USourceEffectDynamicsProcessorPreset::CanFilter(USourceEffectDynamicsProcessorPreset *this)

{
  return false;
}

// CreateNewEffect @ 14f0d06e0

FSoundEffectBase * __thiscall
USourceEffectDynamicsProcessorPreset::CreateNewEffect(USourceEffectDynamicsProcessorPreset *this)

{
  FSoundEffectBase *this_00;
  
  this_00 = ::operator_new(400);
  if (this_00 != (FSoundEffectBase *)0x0) {
    FSoundEffectBase::FSoundEffectBase(this_00);
    this_00[1].SettingsCritSect.CriticalSection.Opaque1[0] = (void *)0xffffffffffffffff;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00->_padding_ = (longlong)&___7FSourceEffectDynamicsProcessor__6B_;
    Audio::FDynamicsProcessor::FDynamicsProcessor
              ((FDynamicsProcessor *)this_00[1].SettingsCritSect.CriticalSection.Opaque2);
    *(undefined1 *)(this_00[3].SettingsCritSect.CriticalSection.Opaque3 + 2) = 0;
    return this_00;
  }
  return (FSoundEffectBase *)0x0;
}

// CreateNewPreset @ 14f0d1640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USoundEffectPreset * __thiscall
USourceEffectDynamicsProcessorPreset::CreateNewPreset
          (USourceEffectDynamicsProcessorPreset *this,UObject *param_1,FName param_2,
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

// GetAssetActionName @ 14f0d8800

FText * __thiscall
USourceEffectDynamicsProcessorPreset::GetAssetActionName
          (USourceEffectDynamicsProcessorPreset *this,FText *__return_storage_ptr__)

{
  FText::FromString(__return_storage_ptr__,"SourceEffectDynamicsProcessor");
  return __return_storage_ptr__;
}

// GetPresetColor @ 14f0dbc60

FColor __thiscall
USourceEffectDynamicsProcessorPreset::GetPresetColor(USourceEffectDynamicsProcessorPreset *this)

{
  undefined4 *in_RDX;
  
  *in_RDX = 0xffdac70b;
  return (FColor)SUB84(in_RDX,0);
}

// GetPrivateStaticClass @ 14f0dc480

UClass * __cdecl USourceEffectDynamicsProcessorPreset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectDynamicsProcessorPreset.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectDynamicsProcessorPreset",
               &Z_Registration_Info_UClass_USourceEffectDynamicsProcessorPreset.InnerSingleton,
               StaticRegisterNativesUSourceEffectDynamicsProcessorPreset,0xe8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USourceEffectDynamicsProcessorPreset>,
               InternalVTableHelperCtorCaller<USourceEffectDynamicsProcessorPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectDynamicsProcessorPreset.InnerSingleton;
}

// GetSupportedClass @ 14f0dee00

UClass * __thiscall
USourceEffectDynamicsProcessorPreset::GetSupportedClass(USourceEffectDynamicsProcessorPreset *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectDynamicsProcessorPreset.InnerSingleton ==
      (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectDynamicsProcessorPreset",
               &Z_Registration_Info_UClass_USourceEffectDynamicsProcessorPreset.InnerSingleton,
               StaticRegisterNativesUSourceEffectDynamicsProcessorPreset,0xe8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USourceEffectDynamicsProcessorPreset>,
               InternalVTableHelperCtorCaller<USourceEffectDynamicsProcessorPreset>,aFStackX_8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectDynamicsProcessorPreset.InnerSingleton;
}

// HasAssetActions @ 14f0df510

bool __thiscall
USourceEffectDynamicsProcessorPreset::HasAssetActions(USourceEffectDynamicsProcessorPreset *this)

{
  return true;
}

// Init @ 14f0e5c20

void __thiscall
USourceEffectDynamicsProcessorPreset::Init(USourceEffectDynamicsProcessorPreset *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ESourceEffectDynamicsPeakMode EVar6;
  undefined2 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    EVar6 = (this->Settings).PeakMode;
    uVar7 = *(undefined2 *)&(this->Settings).field_0x2;
    fVar8 = (this->Settings).LookAheadMsec;
    fVar9 = (this->Settings).AttackTimeMsec;
    fVar10 = (this->Settings).ReleaseTimeMsec;
    uVar1 = *(undefined4 *)&(this->Settings).field_0x28;
    fVar2 = (this->Settings).ThresholdDb;
    fVar3 = (this->Settings).Ratio;
    fVar4 = (this->Settings).KneeBandwidthDb;
    fVar5 = (this->Settings).InputGainDb;
    (this->SettingsCopy).DynamicsProcessorType = (this->Settings).DynamicsProcessorType;
    (this->SettingsCopy).PeakMode = EVar6;
    *(undefined2 *)&(this->SettingsCopy).field_0x2 = uVar7;
    (this->SettingsCopy).LookAheadMsec = fVar8;
    (this->SettingsCopy).AttackTimeMsec = fVar9;
    (this->SettingsCopy).ReleaseTimeMsec = fVar10;
    fVar8 = (this->Settings).OutputGainDb;
    uVar11 = *(undefined4 *)&(this->Settings).field_0x24;
    (this->SettingsCopy).ThresholdDb = fVar2;
    (this->SettingsCopy).Ratio = fVar3;
    (this->SettingsCopy).KneeBandwidthDb = fVar4;
    (this->SettingsCopy).InputGainDb = fVar5;
    (this->SettingsCopy).OutputGainDb = fVar8;
    *(undefined4 *)&(this->SettingsCopy).field_0x24 = uVar11;
    *(undefined4 *)&(this->SettingsCopy).field_0x28 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00014f0e5c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetSettings @ 14f101300

void __thiscall
USourceEffectDynamicsProcessorPreset::SetSettings
          (USourceEffectDynamicsProcessorPreset *this,
          FSourceEffectDynamicsProcessorSettings *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ESourceEffectDynamicsPeakMode EVar1;
  undefined2 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    EVar1 = param_1->PeakMode;
    uVar2 = *(undefined2 *)&param_1->field_0x2;
    fVar3 = param_1->LookAheadMsec;
    fVar4 = param_1->AttackTimeMsec;
    fVar5 = param_1->ReleaseTimeMsec;
    (this->SettingsCopy).DynamicsProcessorType = param_1->DynamicsProcessorType;
    (this->SettingsCopy).PeakMode = EVar1;
    *(undefined2 *)&(this->SettingsCopy).field_0x2 = uVar2;
    (this->SettingsCopy).LookAheadMsec = fVar3;
    (this->SettingsCopy).AttackTimeMsec = fVar4;
    (this->SettingsCopy).ReleaseTimeMsec = fVar5;
    fVar3 = param_1->Ratio;
    fVar4 = param_1->KneeBandwidthDb;
    fVar5 = param_1->InputGainDb;
    (this->SettingsCopy).ThresholdDb = param_1->ThresholdDb;
    (this->SettingsCopy).Ratio = fVar3;
    (this->SettingsCopy).KneeBandwidthDb = fVar4;
    (this->SettingsCopy).InputGainDb = fVar5;
    uVar6 = *(undefined4 *)&param_1->field_0x24;
    (this->SettingsCopy).OutputGainDb = param_1->OutputGainDb;
    *(undefined4 *)&(this->SettingsCopy).field_0x24 = uVar6;
    *(undefined4 *)&(this->SettingsCopy).field_0x28 = *(undefined4 *)&param_1->field_0x28;
    USoundEffectPreset::Update((USoundEffectPreset *)this);
                    /* WARNING: Could not recover jumptable at 0x00014f10136c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StaticRegisterNativesUSourceEffectDynamicsProcessorPreset @ 14f1036c0

void __cdecl
USourceEffectDynamicsProcessorPreset::StaticRegisterNativesUSourceEffectDynamicsProcessorPreset
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetSettings @ 14f1158a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
USourceEffectDynamicsProcessorPreset::execSetSettings
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  undefined8 local_24;
  undefined8 uStack_1c;
  uint local_14;
  byte local_10;
  
  uStack_1c = _UNK_15314dd88;
  local_24 = ___xmm_0000000000000000412000003fc00000;
  local_14 = local_14 | 3;
  local_10 = local_10 & 0xfe;
  local_38[0] = '\0';
  local_38[1] = '\x01';
  local_34 = ___xmm_c0c0000042c800004120000040400000;
  uStack_2c = _UNK_15314de48;
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
    uVar5 = puVar17[0x24];
    uVar6 = puVar17[0x25];
    uVar7 = puVar17[0x26];
    uVar8 = puVar17[0x27];
    param_1[4].field_0x10 = puVar17[0x20];
    param_1[4].field_0x11 = uVar2;
    param_1[4].field_0x12 = uVar3;
    param_1[4].field_0x13 = uVar4;
    param_1[4].field_0x14 = uVar5;
    param_1[4].field_0x15 = uVar6;
    param_1[4].field_0x16 = uVar7;
    param_1[4].field_0x17 = uVar8;
    uVar2 = puVar17[0x29];
    uVar3 = puVar17[0x2a];
    uVar4 = puVar17[0x2b];
    param_1[4].field_0x18 = puVar17[0x28];
    param_1[4].field_0x19 = uVar2;
    param_1[4].field_0x1a = uVar3;
    param_1[4].field_0x1b = uVar4;
    USoundEffectPreset::Update((USoundEffectPreset *)param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

