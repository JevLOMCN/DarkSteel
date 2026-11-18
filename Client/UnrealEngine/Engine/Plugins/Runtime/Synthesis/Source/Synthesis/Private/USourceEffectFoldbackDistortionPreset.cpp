// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 16

// StaticClass @ 14f0a5a10

UClass * __cdecl USourceEffectFoldbackDistortionPreset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectFoldbackDistortionPreset.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectFoldbackDistortionPreset",
               &Z_Registration_Info_UClass_USourceEffectFoldbackDistortionPreset.InnerSingleton,
               StaticRegisterNativesUSourceEffectFoldbackDistortionPreset,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USourceEffectFoldbackDistortionPreset>,
               InternalVTableHelperCtorCaller<USourceEffectFoldbackDistortionPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectFoldbackDistortionPreset.InnerSingleton;
}

// USourceEffectFoldbackDistortionPreset @ 14f0ba750

USourceEffectFoldbackDistortionPreset * __thiscall
USourceEffectFoldbackDistortionPreset::USourceEffectFoldbackDistortionPreset
          (USourceEffectFoldbackDistortionPreset *this,FVTableHelper *param_1)

{
  USoundEffectSourcePreset::USoundEffectSourcePreset((USoundEffectSourcePreset *)this,param_1);
  this->_padding_ = (longlong)&___7USourceEffectFoldbackDistortionPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).ThresholdDb = -6.0;
  (this->SettingsCopy).InputGainDb = 0.0;
  (this->Settings).InputGainDb = 0.0;
  (this->SettingsCopy).OutputGainDb = -3.0;
  (this->Settings).ThresholdDb = -6.0;
  (this->Settings).OutputGainDb = -3.0;
  return this;
}

// USourceEffectFoldbackDistortionPreset @ 14f0ba7c0

USourceEffectFoldbackDistortionPreset * __thiscall
USourceEffectFoldbackDistortionPreset::USourceEffectFoldbackDistortionPreset
          (USourceEffectFoldbackDistortionPreset *this,FObjectInitializer *param_1)

{
  USoundEffectSourcePreset::USoundEffectSourcePreset((USoundEffectSourcePreset *)this,param_1);
  this->_padding_ = (longlong)&___7USourceEffectFoldbackDistortionPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).ThresholdDb = -6.0;
  (this->SettingsCopy).InputGainDb = 0.0;
  (this->Settings).InputGainDb = 0.0;
  (this->SettingsCopy).OutputGainDb = -3.0;
  (this->Settings).ThresholdDb = -6.0;
  (this->Settings).OutputGainDb = -3.0;
  return this;
}

// ~USourceEffectFoldbackDistortionPreset @ 14f0c0470

void __thiscall
USourceEffectFoldbackDistortionPreset::~USourceEffectFoldbackDistortionPreset
          (USourceEffectFoldbackDistortionPreset *this)

{
  this->_padding_ = (longlong)&___7USourceEffectFoldbackDistortionPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSourcePreset::~USoundEffectSourcePreset((USoundEffectSourcePreset *)this);
  return;
}

// CanFilter @ 14f0cbb80

bool __thiscall
USourceEffectFoldbackDistortionPreset::CanFilter(USourceEffectFoldbackDistortionPreset *this)

{
  return false;
}

// CreateNewEffect @ 14f0d09b0

FSoundEffectBase * __thiscall
USourceEffectFoldbackDistortionPreset::CreateNewEffect(USourceEffectFoldbackDistortionPreset *this)

{
  FSoundEffectBase *this_00;
  
  this_00 = ::operator_new(0xa0);
  if (this_00 != (FSoundEffectBase *)0x0) {
    FSoundEffectBase::FSoundEffectBase(this_00);
    this_00[1].SettingsCritSect.CriticalSection.Opaque1[0] = (void *)0xffffffffffffffff;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00->_padding_ = (longlong)&___7FSourceEffectFoldbackDistortion__6B_;
    Audio::FFoldbackDistortion::FFoldbackDistortion
              ((FFoldbackDistortion *)this_00[1].SettingsCritSect.CriticalSection.Opaque2);
    return this_00;
  }
  return (FSoundEffectBase *)0x0;
}

// CreateNewPreset @ 14f0d1a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USoundEffectPreset * __thiscall
USourceEffectFoldbackDistortionPreset::CreateNewPreset
          (USourceEffectFoldbackDistortionPreset *this,UObject *param_1,FName param_2,
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

// GetAssetActionName @ 14f0d88c0

FText * __thiscall
USourceEffectFoldbackDistortionPreset::GetAssetActionName
          (USourceEffectFoldbackDistortionPreset *this,FText *__return_storage_ptr__)

{
  FText::FromString(__return_storage_ptr__,"SourceEffectFoldbackDistortion");
  return __return_storage_ptr__;
}

// GetPresetColor @ 14f0dbca0

FColor __thiscall
USourceEffectFoldbackDistortionPreset::GetPresetColor(USourceEffectFoldbackDistortionPreset *this)

{
  undefined4 *in_RDX;
  
  *in_RDX = 0xff38e19c;
  return (FColor)SUB84(in_RDX,0);
}

// GetPrivateStaticClass @ 14f0dc780

UClass * __cdecl USourceEffectFoldbackDistortionPreset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectFoldbackDistortionPreset.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectFoldbackDistortionPreset",
               &Z_Registration_Info_UClass_USourceEffectFoldbackDistortionPreset.InnerSingleton,
               StaticRegisterNativesUSourceEffectFoldbackDistortionPreset,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USourceEffectFoldbackDistortionPreset>,
               InternalVTableHelperCtorCaller<USourceEffectFoldbackDistortionPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectFoldbackDistortionPreset.InnerSingleton;
}

// GetSupportedClass @ 14f0dee40

UClass * __thiscall
USourceEffectFoldbackDistortionPreset::GetSupportedClass
          (USourceEffectFoldbackDistortionPreset *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectFoldbackDistortionPreset.InnerSingleton ==
      (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectFoldbackDistortionPreset",
               &Z_Registration_Info_UClass_USourceEffectFoldbackDistortionPreset.InnerSingleton,
               StaticRegisterNativesUSourceEffectFoldbackDistortionPreset,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USourceEffectFoldbackDistortionPreset>,
               InternalVTableHelperCtorCaller<USourceEffectFoldbackDistortionPreset>,aFStackX_8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectFoldbackDistortionPreset.InnerSingleton;
}

// HasAssetActions @ 14f0df550

bool __thiscall
USourceEffectFoldbackDistortionPreset::HasAssetActions(USourceEffectFoldbackDistortionPreset *this)

{
  return true;
}

// Init @ 14f0e5dc0

void __thiscall
USourceEffectFoldbackDistortionPreset::Init(USourceEffectFoldbackDistortionPreset *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  float fVar2;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    fVar2 = (this->Settings).ThresholdDb;
    fVar1 = (this->Settings).OutputGainDb;
    (this->SettingsCopy).InputGainDb = (this->Settings).InputGainDb;
    (this->SettingsCopy).ThresholdDb = fVar2;
    (this->SettingsCopy).OutputGainDb = fVar1;
                    /* WARNING: Could not recover jumptable at 0x00014f0e5e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetSettings @ 14f1014d0

void __thiscall
USourceEffectFoldbackDistortionPreset::SetSettings
          (USourceEffectFoldbackDistortionPreset *this,
          FSourceEffectFoldbackDistortionSettings *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    fVar1 = param_1->ThresholdDb;
    (this->SettingsCopy).InputGainDb = param_1->InputGainDb;
    (this->SettingsCopy).ThresholdDb = fVar1;
    (this->SettingsCopy).OutputGainDb = param_1->OutputGainDb;
    USoundEffectPreset::Update((USoundEffectPreset *)this);
                    /* WARNING: Could not recover jumptable at 0x00014f101526. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StaticRegisterNativesUSourceEffectFoldbackDistortionPreset @ 14f1037c0

void __cdecl
USourceEffectFoldbackDistortionPreset::StaticRegisterNativesUSourceEffectFoldbackDistortionPreset
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_USourceEffectFoldbackDistortionPreset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetSettings @ 14f115c90

void __cdecl
USourceEffectFoldbackDistortionPreset::execSetSettings
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
  uchar *puVar9;
  uchar local_18 [16];
  
  local_18[0] = '\0';
  local_18[1] = '\0';
  local_18[2] = '\0';
  local_18[3] = '\0';
  local_18[4] = '\0';
  local_18[5] = '\0';
  local_18[6] = 0xc0;
  local_18[7] = 0xc0;
  local_18[8] = '\0';
  local_18[9] = '\0';
  local_18[10] = '@';
  local_18[0xb] = 0xc0;
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

