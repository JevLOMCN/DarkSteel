// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 20

// StaticClass @ 14f0a60d0

UClass * __cdecl USourceEffectEnvelopeFollowerPreset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectEnvelopeFollowerPreset.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectEnvelopeFollowerPreset",
               &Z_Registration_Info_UClass_USourceEffectEnvelopeFollowerPreset.InnerSingleton,
               StaticRegisterNativesUSourceEffectEnvelopeFollowerPreset,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USourceEffectEnvelopeFollowerPreset>,
               InternalVTableHelperCtorCaller<USourceEffectEnvelopeFollowerPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectEnvelopeFollowerPreset.InnerSingleton;
}

// USourceEffectEnvelopeFollowerPreset @ 14f0ba550

USourceEffectEnvelopeFollowerPreset * __thiscall
USourceEffectEnvelopeFollowerPreset::USourceEffectEnvelopeFollowerPreset
          (USourceEffectEnvelopeFollowerPreset *this,FVTableHelper *param_1)

{
  USoundEffectSourcePreset::USoundEffectSourcePreset((USoundEffectSourcePreset *)this,param_1);
  this->_padding_ = (longlong)&___7USourceEffectEnvelopeFollowerPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).AttackTime = 10.0;
  (this->SettingsCopy).ReleaseTime = 100.0;
  (this->SettingsCopy).PeakMode = Peak;
  (this->SettingsCopy).bIsAnalogMode = true;
  (this->Settings).AttackTime = 10.0;
  (this->Settings).ReleaseTime = 100.0;
  (this->Settings).PeakMode = Peak;
  (this->Settings).bIsAnalogMode = true;
  return this;
}

// USourceEffectEnvelopeFollowerPreset @ 14f0ba5c0

USourceEffectEnvelopeFollowerPreset * __thiscall
USourceEffectEnvelopeFollowerPreset::USourceEffectEnvelopeFollowerPreset
          (USourceEffectEnvelopeFollowerPreset *this,FObjectInitializer *param_1)

{
  USoundEffectSourcePreset::USoundEffectSourcePreset((USoundEffectSourcePreset *)this,param_1);
  this->_padding_ = (longlong)&___7USourceEffectEnvelopeFollowerPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).AttackTime = 10.0;
  (this->SettingsCopy).ReleaseTime = 100.0;
  (this->SettingsCopy).PeakMode = Peak;
  (this->SettingsCopy).bIsAnalogMode = true;
  (this->Settings).AttackTime = 10.0;
  (this->Settings).ReleaseTime = 100.0;
  (this->Settings).PeakMode = Peak;
  (this->Settings).bIsAnalogMode = true;
  return this;
}

// ~USourceEffectEnvelopeFollowerPreset @ 14f0c03e0

void __thiscall
USourceEffectEnvelopeFollowerPreset::~USourceEffectEnvelopeFollowerPreset
          (USourceEffectEnvelopeFollowerPreset *this)

{
  this->_padding_ = (longlong)&___7USourceEffectEnvelopeFollowerPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSourcePreset::~USoundEffectSourcePreset((USoundEffectSourcePreset *)this);
  return;
}

// CanFilter @ 14f0cbb60

bool __thiscall
USourceEffectEnvelopeFollowerPreset::CanFilter(USourceEffectEnvelopeFollowerPreset *this)

{
  return false;
}

// CreateNewEffect @ 14f0d07d0

FSoundEffectBase * __thiscall
USourceEffectEnvelopeFollowerPreset::CreateNewEffect(USourceEffectEnvelopeFollowerPreset *this)

{
  long *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  FSoundEffectBase *this_01;
  
  this_01 = ::operator_new(0xd0);
  if (this_01 != (FSoundEffectBase *)0x0) {
    FSoundEffectBase::FSoundEffectBase(this_01);
    fVar3 = __real_473b8000;
    fVar2 = __real_42c80000;
    fVar1 = __real_41200000;
    this_00 = this_01[1].SettingsCritSect.CriticalSection.Opaque2;
    this_01->_padding_ = (longlong)&___7FSourceEffectEnvelopeFollower__6B_;
    this_01[1]._padding_ = 0;
    this_01[1]._padding_ = 0;
    this_01[1].SettingsCritSect.CriticalSection.Opaque1[0] = (void *)0xffffffffffffffff;
    Audio::FAttackRelease::FAttackRelease((FAttackRelease *)this_00,fVar3,fVar1,fVar2,true);
    fVar1 = __real_40a00000;
    *(undefined4 *)(this_01[1].SettingsCritSect.CriticalSection.Opaque3 + 2) = 0;
    *(undefined8 *)((longlong)this_01[1].SettingsCritSect.CriticalSection.Opaque3 + 0x14) = 2;
    *(undefined8 *)((longlong)&this_01[1].CurrentAudioThreadSettingsData.AllocatorInstance.Data + 4)
         = 0x40a00000;
    this_01[1].CurrentAudioThreadSettingsData.ArrayMax = 0x3f800000;
    Audio::FInlineEnvelopeFollower::SetAnalysisWindow((FInlineEnvelopeFollower *)this_00,fVar1);
    return this_01;
  }
  return (FSoundEffectBase *)0x0;
}

// CreateNewPreset @ 14f0d1840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USoundEffectPreset * __thiscall
USourceEffectEnvelopeFollowerPreset::CreateNewPreset
          (USourceEffectEnvelopeFollowerPreset *this,UObject *param_1,FName param_2,
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

// GetAssetActionName @ 14f0d8860

FText * __thiscall
USourceEffectEnvelopeFollowerPreset::GetAssetActionName
          (USourceEffectEnvelopeFollowerPreset *this,FText *__return_storage_ptr__)

{
  FText::FromString(__return_storage_ptr__,"SourceEffectEnvelopeFollower");
  return __return_storage_ptr__;
}

// GetPresetColor @ 14f0dbc80

FColor __thiscall
USourceEffectEnvelopeFollowerPreset::GetPresetColor(USourceEffectEnvelopeFollowerPreset *this)

{
  undefined4 *in_RDX;
  
  *in_RDX = 0xfff8da4e;
  return (FColor)SUB84(in_RDX,0);
}

// GetPrivateStaticClass @ 14f0dc600

UClass * __cdecl USourceEffectEnvelopeFollowerPreset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectEnvelopeFollowerPreset.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectEnvelopeFollowerPreset",
               &Z_Registration_Info_UClass_USourceEffectEnvelopeFollowerPreset.InnerSingleton,
               StaticRegisterNativesUSourceEffectEnvelopeFollowerPreset,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USourceEffectEnvelopeFollowerPreset>,
               InternalVTableHelperCtorCaller<USourceEffectEnvelopeFollowerPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectEnvelopeFollowerPreset.InnerSingleton;
}

// GetSupportedClass @ 14f0dee20

UClass * __thiscall
USourceEffectEnvelopeFollowerPreset::GetSupportedClass(USourceEffectEnvelopeFollowerPreset *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectEnvelopeFollowerPreset.InnerSingleton == (UClass *)0x0
     ) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectEnvelopeFollowerPreset",
               &Z_Registration_Info_UClass_USourceEffectEnvelopeFollowerPreset.InnerSingleton,
               StaticRegisterNativesUSourceEffectEnvelopeFollowerPreset,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USourceEffectEnvelopeFollowerPreset>,
               InternalVTableHelperCtorCaller<USourceEffectEnvelopeFollowerPreset>,aFStackX_8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectEnvelopeFollowerPreset.InnerSingleton;
}

// HasAssetActions @ 14f0df530

bool __thiscall
USourceEffectEnvelopeFollowerPreset::HasAssetActions(USourceEffectEnvelopeFollowerPreset *this)

{
  return true;
}

// Init @ 14f0e5d00

void __thiscall USourceEffectEnvelopeFollowerPreset::Init(USourceEffectEnvelopeFollowerPreset *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  EEnvelopeFollowerPeakMode EVar2;
  bool bVar3;
  undefined2 uVar4;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    fVar1 = (this->Settings).ReleaseTime;
    EVar2 = (this->Settings).PeakMode;
    bVar3 = (this->Settings).bIsAnalogMode;
    uVar4 = *(undefined2 *)&(this->Settings).field_0xa;
    (this->SettingsCopy).AttackTime = (this->Settings).AttackTime;
    (this->SettingsCopy).ReleaseTime = fVar1;
    (this->SettingsCopy).PeakMode = EVar2;
    (this->SettingsCopy).bIsAnalogMode = bVar3;
    *(undefined2 *)&(this->SettingsCopy).field_0xa = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00014f0e5d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RegisterEnvelopeFollowerListener @ 14f0f6810

void __thiscall
USourceEffectEnvelopeFollowerPreset::RegisterEnvelopeFollowerListener
          (USourceEffectEnvelopeFollowerPreset *this,UEnvelopeFollowerListener *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  InitEnvelopeFollowerNotifier();
  if (SourceEffectEnvFollowerNotifier.Object == (FSourceEffectEnvFollowerNotifier *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FSourceEffectEnvFollowerNotifier::RegisterEnvelopFollowerListener
            (SourceEffectEnvFollowerNotifier.Object,*(uint *)((longlong)&this->_padding_ + 4),
             param_1);
  return;
}

// SetSettings @ 14f1013f0

void __thiscall
USourceEffectEnvelopeFollowerPreset::SetSettings
          (USourceEffectEnvelopeFollowerPreset *this,FSourceEffectEnvelopeFollowerSettings *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  bool bVar2;
  undefined2 uVar3;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    fVar1 = param_1->ReleaseTime;
    (this->SettingsCopy).AttackTime = param_1->AttackTime;
    (this->SettingsCopy).ReleaseTime = fVar1;
    bVar2 = param_1->bIsAnalogMode;
    uVar3 = *(undefined2 *)&param_1->field_0xa;
    (this->SettingsCopy).PeakMode = param_1->PeakMode;
    (this->SettingsCopy).bIsAnalogMode = bVar2;
    *(undefined2 *)&(this->SettingsCopy).field_0xa = uVar3;
    USoundEffectPreset::Update((USoundEffectPreset *)this);
                    /* WARNING: Could not recover jumptable at 0x00014f101446. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StaticRegisterNativesUSourceEffectEnvelopeFollowerPreset @ 14f103740

void __cdecl
USourceEffectEnvelopeFollowerPreset::StaticRegisterNativesUSourceEffectEnvelopeFollowerPreset(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UnregisterEnvelopeFollowerListener @ 14f1065a0

void __thiscall
USourceEffectEnvelopeFollowerPreset::UnregisterEnvelopeFollowerListener
          (USourceEffectEnvelopeFollowerPreset *this,UEnvelopeFollowerListener *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  InitEnvelopeFollowerNotifier();
  if (SourceEffectEnvFollowerNotifier.Object == (FSourceEffectEnvFollowerNotifier *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014f106603. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(SourceEffectEnvFollowerNotifier.Object)->_padding_)
            (&(SourceEffectEnvFollowerNotifier.Object)->_padding_,
             *(undefined4 *)((longlong)&this->_padding_ + 4),param_1);
  return;
}

// execRegisterEnvelopeFollowerListener @ 14f10d460

void __cdecl
USourceEffectEnvelopeFollowerPreset::execRegisterEnvelopeFollowerListener
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  UEnvelopeFollowerListener *pUVar3;
  bool bVar4;
  UEnvelopeFollowerListener *local_res8;
  
  local_res8 = (UEnvelopeFollowerListener *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar3 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  InitEnvelopeFollowerNotifier();
  if (SourceEffectEnvFollowerNotifier.Object == (FSourceEffectEnvFollowerNotifier *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FSourceEffectEnvFollowerNotifier::RegisterEnvelopFollowerListener
            (SourceEffectEnvFollowerNotifier.Object,*(uint *)&param_1->field_0xc,pUVar3);
  return;
}

// execSetSettings @ 14f115aa0

void __cdecl
USourceEffectEnvelopeFollowerPreset::execSetSettings(UObject *param_1,FFrame *param_2,void *param_3)

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
  uchar local_18 [16];
  
  local_18[0] = '\0';
  local_18[1] = '\0';
  local_18[2] = ' ';
  local_18[3] = 'A';
  local_18[4] = '\0';
  local_18[5] = '\0';
  local_18[6] = 200;
  local_18[7] = 'B';
  local_18[8] = '\x02';
  local_18[9] = '\x01';
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
  puVar9 = local_18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lpCriticalSection = &param_1[2].field_0x18;
  if (lpCriticalSection != (undefined1 *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar2 = puVar9[1];
    uVar3 = puVar9[2];
    uVar4 = puVar9[3];
    uVar5 = puVar9[4];
    uVar6 = puVar9[5];
    uVar7 = puVar9[6];
    uVar8 = puVar9[7];
    param_1[3].field_0x18 = puVar9[0];
    param_1[3].field_0x19 = uVar2;
    param_1[3].field_0x1a = uVar3;
    param_1[3].field_0x1b = uVar4;
    param_1[3].field_0x1c = uVar5;
    param_1[3].field_0x1d = uVar6;
    param_1[3].field_0x1e = uVar7;
    param_1[3].field_0x1f = uVar8;
    uVar2 = puVar9[9];
    uVar3 = puVar9[10];
    uVar4 = puVar9[0xb];
    param_1[3].field_0x20 = puVar9[8];
    param_1[3].field_0x21 = uVar2;
    param_1[3].field_0x22 = uVar3;
    param_1[3].field_0x23 = uVar4;
    USoundEffectPreset::Update((USoundEffectPreset *)param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// execUnregisterEnvelopeFollowerListener @ 14f118780

void __cdecl
USourceEffectEnvelopeFollowerPreset::execUnregisterEnvelopeFollowerListener
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  uVar3 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  InitEnvelopeFollowerNotifier();
  if (SourceEffectEnvFollowerNotifier.Object == (FSourceEffectEnvFollowerNotifier *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (**(code **)(SourceEffectEnvFollowerNotifier.Object)->_padding_)
            (&(SourceEffectEnvFollowerNotifier.Object)->_padding_,*(undefined4 *)&param_1->field_0xc
             ,uVar3);
  return;
}

