// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 16

// StaticClass @ 14f0a0820

UClass * __cdecl USourceEffectEQPreset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectEQPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectEQPreset",
               &Z_Registration_Info_UClass_USourceEffectEQPreset.InnerSingleton,
               StaticRegisterNativesUSourceEffectEQPreset,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USourceEffectEQPreset>,
               InternalVTableHelperCtorCaller<USourceEffectEQPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectEQPreset.InnerSingleton;
}

// USourceEffectEQPreset @ 14f0ba490

USourceEffectEQPreset * __thiscall
USourceEffectEQPreset::USourceEffectEQPreset(USourceEffectEQPreset *this,FVTableHelper *param_1)

{
  USoundEffectSourcePreset::USoundEffectSourcePreset((USoundEffectSourcePreset *)this,param_1);
  this->_padding_ = (longlong)&___7USourceEffectEQPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).EQBands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SettingsCopy).EQBands.ArrayNum = 0;
  (this->SettingsCopy).EQBands.ArrayMax = 0;
  (this->Settings).EQBands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Settings).EQBands.ArrayNum = 0;
  (this->Settings).EQBands.ArrayMax = 0;
  return this;
}

// USourceEffectEQPreset @ 14f0ba4f0

USourceEffectEQPreset * __thiscall
USourceEffectEQPreset::USourceEffectEQPreset
          (USourceEffectEQPreset *this,FObjectInitializer *param_1)

{
  USoundEffectSourcePreset::USoundEffectSourcePreset((USoundEffectSourcePreset *)this,param_1);
  this->_padding_ = (longlong)&___7USourceEffectEQPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).EQBands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SettingsCopy).EQBands.ArrayNum = 0;
  (this->SettingsCopy).EQBands.ArrayMax = 0;
  (this->Settings).EQBands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Settings).EQBands.ArrayNum = 0;
  (this->Settings).EQBands.ArrayMax = 0;
  return this;
}

// ~USourceEffectEQPreset @ 14f0c0380

void __thiscall USourceEffectEQPreset::~USourceEffectEQPreset(USourceEffectEQPreset *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USourceEffectEQPreset__6B_;
  pFVar1 = (this->Settings).EQBands.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SettingsCopy).EQBands.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSourcePreset::~USoundEffectSourcePreset((USoundEffectSourcePreset *)this);
  return;
}

// CanFilter @ 14f0cbb50

bool __thiscall USourceEffectEQPreset::CanFilter(USourceEffectEQPreset *this)

{
  return false;
}

// CreateNewEffect @ 14f0d0750

FSoundEffectBase * __thiscall USourceEffectEQPreset::CreateNewEffect(USourceEffectEQPreset *this)

{
  FSoundEffectBase *this_00;
  
  this_00 = ::operator_new(0xb0);
  if (this_00 != (FSoundEffectBase *)0x0) {
    FSoundEffectBase::FSoundEffectBase(this_00);
    this_00[1].SettingsCritSect.CriticalSection.Opaque1[0] = (void *)0xffffffffffffffff;
    this_00[1]._padding_ = 0;
    this_00[1]._padding_ = 0;
    this_00[1].SettingsCritSect.CriticalSection.Opaque2[0] = 0;
    this_00[1].SettingsCritSect.CriticalSection.Opaque2[1] = 0;
    this_00[1].SettingsCritSect.CriticalSection.Opaque3[0] = (void *)0x0;
    this_00[1].CurrentAudioThreadSettingsData.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    this_00->_padding_ = (longlong)&___7FSourceEffectEQ__6B_;
    this_00[1].SettingsCritSect.CriticalSection.Opaque3[1] = (void *)0x0;
    this_00[1].SettingsCritSect.CriticalSection.Opaque3[2] = (void *)0x0;
    return this_00;
  }
  return (FSoundEffectBase *)0x0;
}

// CreateNewPreset @ 14f0d1740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USoundEffectPreset * __thiscall
USourceEffectEQPreset::CreateNewPreset
          (USourceEffectEQPreset *this,UObject *param_1,FName param_2,EObjectFlags param_3)

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

// GetAssetActionName @ 14f0d8830

FText * __thiscall
USourceEffectEQPreset::GetAssetActionName(USourceEffectEQPreset *this,FText *__return_storage_ptr__)

{
  FText::FromString(__return_storage_ptr__,"SourceEffectEQ");
  return __return_storage_ptr__;
}

// GetPresetColor @ 14f0dbc70

FColor __thiscall USourceEffectEQPreset::GetPresetColor(USourceEffectEQPreset *this)

{
  undefined4 *in_RDX;
  
  *in_RDX = 0xff359e99;
  return (FColor)SUB84(in_RDX,0);
}

// GetPrivateStaticClass @ 14f0dc540

UClass * __cdecl USourceEffectEQPreset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectEQPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectEQPreset",
               &Z_Registration_Info_UClass_USourceEffectEQPreset.InnerSingleton,
               StaticRegisterNativesUSourceEffectEQPreset,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USourceEffectEQPreset>,
               InternalVTableHelperCtorCaller<USourceEffectEQPreset>,local_res8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectEQPreset.InnerSingleton;
}

// GetSupportedClass @ 14f0dee10

UClass * __thiscall USourceEffectEQPreset::GetSupportedClass(USourceEffectEQPreset *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USourceEffectEQPreset.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SourceEffectEQPreset",
               &Z_Registration_Info_UClass_USourceEffectEQPreset.InnerSingleton,
               StaticRegisterNativesUSourceEffectEQPreset,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USourceEffectEQPreset>,
               InternalVTableHelperCtorCaller<USourceEffectEQPreset>,aFStackX_8,
               USoundEffectSourcePreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USourceEffectEQPreset.InnerSingleton;
}

// HasAssetActions @ 14f0df520

bool __thiscall USourceEffectEQPreset::HasAssetActions(USourceEffectEQPreset *this)

{
  return true;
}

// Init @ 14f0e5ca0

void __thiscall USourceEffectEQPreset::Init(USourceEffectEQPreset *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FSourceEffectEQSettings::operator=(&this->SettingsCopy,&this->Settings);
                    /* WARNING: Could not recover jumptable at 0x00014f0e5cdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetSettings @ 14f101380

void __thiscall
USourceEffectEQPreset::SetSettings(USourceEffectEQPreset *this,FSourceEffectEQSettings *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FSourceEffectEQSettings::operator=(&this->SettingsCopy,param_1);
    USoundEffectPreset::Update((USoundEffectPreset *)this);
                    /* WARNING: Could not recover jumptable at 0x00014f1013d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StaticRegisterNativesUSourceEffectEQPreset @ 14f103700

void __cdecl USourceEffectEQPreset::StaticRegisterNativesUSourceEffectEQPreset(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_USourceEffectEQPreset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetSettings @ 14f1159b0

void __cdecl USourceEffectEQPreset::execSetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *lpCriticalSection;
  FProperty *pFVar1;
  FSourceEffectEQSettings *pFVar2;
  FSourceEffectEQSettings local_18;
  
  local_18.EQBands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.EQBands.ArrayNum = 0;
  local_18.EQBands.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar2 = &local_18;
  if ((FSourceEffectEQSettings *)param_2->MostRecentPropertyAddress !=
      (FSourceEffectEQSettings *)0x0) {
    pFVar2 = (FSourceEffectEQSettings *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lpCriticalSection = &param_1[2].field_0x18;
  if (lpCriticalSection != (undefined1 *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FSourceEffectEQSettings::operator=((FSourceEffectEQSettings *)&param_1[3].field_0x18,pFVar2);
    USoundEffectPreset::Update((USoundEffectPreset *)param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (local_18.EQBands.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.EQBands.AllocatorInstance.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

