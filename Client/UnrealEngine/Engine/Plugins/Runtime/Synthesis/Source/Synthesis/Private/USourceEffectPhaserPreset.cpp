// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 16

// StaticClass @ 14f0a91e0

UClass * __cdecl USourceEffectPhaserPreset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectPhaserPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectPhaserPreset",
               &Z_Registration_Info_UClass_USourceEffectPhaserPreset.InnerSingleton,
               StaticRegisterNativesUSourceEffectPhaserPreset,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USourceEffectPhaserPreset>,
               InternalVTableHelperCtorCaller<USourceEffectPhaserPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectPhaserPreset.InnerSingleton;
}

// USourceEffectPhaserPreset @ 14f0baa50

USourceEffectPhaserPreset * __thiscall
USourceEffectPhaserPreset::USourceEffectPhaserPreset
          (USourceEffectPhaserPreset *this,FVTableHelper *param_1)

{
  USoundEffectSourcePreset::USoundEffectSourcePreset((USoundEffectSourcePreset *)this,param_1);
  this->_padding_ = (longlong)&___7USourceEffectPhaserPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).WetLevel = 0.2;
  (this->SettingsCopy).Frequency = 2.0;
  (this->SettingsCopy).Feedback = 0.3;
  (this->SettingsCopy).LFOType = Sine;
  (this->SettingsCopy).UseQuadraturePhase = false;
  (this->Settings).WetLevel = 0.2;
  (this->Settings).Frequency = 2.0;
  (this->Settings).Feedback = 0.3;
  (this->Settings).LFOType = Sine;
  (this->Settings).UseQuadraturePhase = false;
  return this;
}

// USourceEffectPhaserPreset @ 14f0baae0

USourceEffectPhaserPreset * __thiscall
USourceEffectPhaserPreset::USourceEffectPhaserPreset
          (USourceEffectPhaserPreset *this,FObjectInitializer *param_1)

{
  USoundEffectSourcePreset::USoundEffectSourcePreset((USoundEffectSourcePreset *)this,param_1);
  this->_padding_ = (longlong)&___7USourceEffectPhaserPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).WetLevel = 0.2;
  (this->SettingsCopy).Frequency = 2.0;
  (this->SettingsCopy).Feedback = 0.3;
  (this->SettingsCopy).LFOType = Sine;
  (this->SettingsCopy).UseQuadraturePhase = false;
  (this->Settings).WetLevel = 0.2;
  (this->Settings).Frequency = 2.0;
  (this->Settings).Feedback = 0.3;
  (this->Settings).LFOType = Sine;
  (this->Settings).UseQuadraturePhase = false;
  return this;
}

// ~USourceEffectPhaserPreset @ 14f0c0590

void __thiscall
USourceEffectPhaserPreset::~USourceEffectPhaserPreset(USourceEffectPhaserPreset *this)

{
  this->_padding_ = (longlong)&___7USourceEffectPhaserPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSourcePreset::~USoundEffectSourcePreset((USoundEffectSourcePreset *)this);
  return;
}

// CanFilter @ 14f0cbbc0

bool __thiscall USourceEffectPhaserPreset::CanFilter(USourceEffectPhaserPreset *this)

{
  return false;
}

// CreateNewEffect @ 14f0d0b40

FSoundEffectBase * __thiscall
USourceEffectPhaserPreset::CreateNewEffect(USourceEffectPhaserPreset *this)

{
  FSoundEffectBase *this_00;
  
  this_00 = ::operator_new(0x4c0);
  if (this_00 != (FSoundEffectBase *)0x0) {
    FSoundEffectBase::FSoundEffectBase(this_00);
    this_00[1].SettingsCritSect.CriticalSection.Opaque1[0] = (void *)0xffffffffffffffff;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00->_padding_ = (longlong)&___7FSourceEffectPhaser__6B_;
    Audio::FPhaser::FPhaser((FPhaser *)this_00[1].SettingsCritSect.CriticalSection.Opaque2);
    return this_00;
  }
  return (FSoundEffectBase *)0x0;
}

// CreateNewPreset @ 14f0d1e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USoundEffectPreset * __thiscall
USourceEffectPhaserPreset::CreateNewPreset
          (USourceEffectPhaserPreset *this,UObject *param_1,FName param_2,EObjectFlags param_3)

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

// GetAssetActionName @ 14f0d8980

FText * __thiscall
USourceEffectPhaserPreset::GetAssetActionName
          (USourceEffectPhaserPreset *this,FText *__return_storage_ptr__)

{
  FText::FromString(__return_storage_ptr__,"SourceEffectPhaser");
  return __return_storage_ptr__;
}

// GetPresetColor @ 14f0dbce0

FColor __thiscall USourceEffectPhaserPreset::GetPresetColor(USourceEffectPhaserPreset *this)

{
  undefined4 *in_RDX;
  
  *in_RDX = 0xff8c0404;
  return (FColor)SUB84(in_RDX,0);
}

// GetPrivateStaticClass @ 14f0dca80

UClass * __cdecl USourceEffectPhaserPreset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectPhaserPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectPhaserPreset",
               &Z_Registration_Info_UClass_USourceEffectPhaserPreset.InnerSingleton,
               StaticRegisterNativesUSourceEffectPhaserPreset,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USourceEffectPhaserPreset>,
               InternalVTableHelperCtorCaller<USourceEffectPhaserPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectPhaserPreset.InnerSingleton;
}

// GetSupportedClass @ 14f0dee80

UClass * __thiscall USourceEffectPhaserPreset::GetSupportedClass(USourceEffectPhaserPreset *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectPhaserPreset.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectPhaserPreset",
               &Z_Registration_Info_UClass_USourceEffectPhaserPreset.InnerSingleton,
               StaticRegisterNativesUSourceEffectPhaserPreset,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USourceEffectPhaserPreset>,
               InternalVTableHelperCtorCaller<USourceEffectPhaserPreset>,aFStackX_8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectPhaserPreset.InnerSingleton;
}

// HasAssetActions @ 14f0df590

bool __thiscall USourceEffectPhaserPreset::HasAssetActions(USourceEffectPhaserPreset *this)

{
  return true;
}

// Init @ 14f0e5f80

void __thiscall USourceEffectPhaserPreset::Init(USourceEffectPhaserPreset *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  float fVar2;
  EPhaserLFOType EVar3;
  bool bVar4;
  undefined2 uVar5;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    fVar1 = (this->Settings).Frequency;
    fVar2 = (this->Settings).Feedback;
    EVar3 = (this->Settings).LFOType;
    bVar4 = (this->Settings).UseQuadraturePhase;
    uVar5 = *(undefined2 *)&(this->Settings).field_0xe;
    (this->SettingsCopy).WetLevel = (this->Settings).WetLevel;
    (this->SettingsCopy).Frequency = fVar1;
    (this->SettingsCopy).Feedback = fVar2;
    (this->SettingsCopy).LFOType = EVar3;
    (this->SettingsCopy).UseQuadraturePhase = bVar4;
    *(undefined2 *)&(this->SettingsCopy).field_0xe = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00014f0e5fba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetSettings @ 14f1016b0

void __thiscall
USourceEffectPhaserPreset::SetSettings
          (USourceEffectPhaserPreset *this,FSourceEffectPhaserSettings *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  float fVar2;
  EPhaserLFOType EVar3;
  bool bVar4;
  undefined2 uVar5;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    fVar1 = param_1->Frequency;
    fVar2 = param_1->Feedback;
    EVar3 = param_1->LFOType;
    bVar4 = param_1->UseQuadraturePhase;
    uVar5 = *(undefined2 *)&param_1->field_0xe;
    (this->SettingsCopy).WetLevel = param_1->WetLevel;
    (this->SettingsCopy).Frequency = fVar1;
    (this->SettingsCopy).Feedback = fVar2;
    (this->SettingsCopy).LFOType = EVar3;
    (this->SettingsCopy).UseQuadraturePhase = bVar4;
    *(undefined2 *)&(this->SettingsCopy).field_0xe = uVar5;
    USoundEffectPreset::Update((USoundEffectPreset *)this);
                    /* WARNING: Could not recover jumptable at 0x00014f1016fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StaticRegisterNativesUSourceEffectPhaserPreset @ 14f1038c0

void __cdecl USourceEffectPhaserPreset::StaticRegisterNativesUSourceEffectPhaserPreset(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_USourceEffectPhaserPreset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetSettings @ 14f1160c0

void __cdecl
USourceEffectPhaserPreset::execSetSettings(UObject *param_1,FFrame *param_2,void *param_3)

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
  uchar local_18 [16];
  
  local_18[0] = 0xcd;
  local_18[1] = 0xcc;
  local_18[2] = 'L';
  local_18[3] = '>';
  local_18[4] = '\0';
  local_18[5] = '\0';
  local_18[6] = '\0';
  local_18[7] = '@';
  local_18[8] = 0x9a;
  local_18[9] = 0x99;
  local_18[10] = 0x99;
  local_18[0xb] = '>';
  local_18[0xc] = '\0';
  local_18[0xd] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  puVar17 = local_18;
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
    USoundEffectPreset::Update((USoundEffectPreset *)param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

