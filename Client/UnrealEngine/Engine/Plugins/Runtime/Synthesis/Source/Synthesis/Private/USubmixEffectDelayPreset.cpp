// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 24

// StaticClass @ 14f0a2ef0

UClass * __cdecl USubmixEffectDelayPreset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectDelayPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SubmixEffectDelayPreset",
               &Z_Registration_Info_UClass_USubmixEffectDelayPreset.InnerSingleton,
               StaticRegisterNativesUSubmixEffectDelayPreset,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USubmixEffectDelayPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectDelayPreset>,local_res8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectDelayPreset.InnerSingleton;
}

// USubmixEffectDelayPreset @ 14f0bb1f0

USubmixEffectDelayPreset * __thiscall
USubmixEffectDelayPreset::USubmixEffectDelayPreset
          (USubmixEffectDelayPreset *this,FVTableHelper *param_1)

{
  USoundEffectSubmixPreset::USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this,param_1);
  this->_padding_ = (longlong)&___7USubmixEffectDelayPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).MaximumDelayLength = 2000.0;
  (this->SettingsCopy).InterpolationTime = 400.0;
  (this->SettingsCopy).DelayLength = 1000.0;
  (this->Settings).MaximumDelayLength = 2000.0;
  (this->Settings).InterpolationTime = 400.0;
  (this->Settings).DelayLength = 1000.0;
  (this->DynamicSettings).MaximumDelayLength = 2000.0;
  (this->DynamicSettings).InterpolationTime = 400.0;
  (this->DynamicSettings).DelayLength = 1000.0;
  return this;
}

// USubmixEffectDelayPreset @ 14f0bb280

USubmixEffectDelayPreset * __thiscall
USubmixEffectDelayPreset::USubmixEffectDelayPreset
          (USubmixEffectDelayPreset *this,FObjectInitializer *param_1)

{
  USoundEffectSubmixPreset::USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this,param_1);
  this->_padding_ = (longlong)&___7USubmixEffectDelayPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).MaximumDelayLength = 2000.0;
  (this->SettingsCopy).InterpolationTime = 400.0;
  (this->SettingsCopy).DelayLength = 1000.0;
  (this->Settings).MaximumDelayLength = 2000.0;
  (this->Settings).InterpolationTime = 400.0;
  (this->Settings).DelayLength = 1000.0;
  (this->DynamicSettings).MaximumDelayLength = 2000.0;
  (this->DynamicSettings).InterpolationTime = 400.0;
  (this->DynamicSettings).DelayLength = 1000.0;
  return this;
}

// ~USubmixEffectDelayPreset @ 14f0c06c0

void __thiscall USubmixEffectDelayPreset::~USubmixEffectDelayPreset(USubmixEffectDelayPreset *this)

{
  this->_padding_ = (longlong)&___7USubmixEffectDelayPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSubmixPreset::~USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this);
  return;
}

// operator() @ 14f0c26c0

void __thiscall
`USubmixEffectDelayPreset::SetInterpolationTime'::__l2::<lambda_1>::operator()
          (void *this,FSubmixEffectDelay *param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  
  fVar4 = *(float *)this * __real_3a83126f;
  fVar2 = param_1->TargetDelayLineLength;
  param_1->InterpolationTime = fVar4;
  if ((param_1->InterpolationInfo).bIsInit != false) {
    (param_1->InterpolationInfo).bIsInit = false;
    (param_1->InterpolationInfo).DurationTicks = 0;
    (param_1->InterpolationInfo).CurrentTick = 0;
    (param_1->InterpolationInfo).CurrentValue = fVar2;
    return;
  }
  iVar3 = (int)(fVar4 * (param_1->InterpolationInfo).SampleRate);
  (param_1->InterpolationInfo).DurationTicks = iVar3;
  (param_1->InterpolationInfo).CurrentTick = 0;
  pfVar1 = &(param_1->InterpolationInfo).CurrentValue;
  if (iVar3 == 0) {
    *pfVar1 = fVar2;
    return;
  }
  fVar4 = *pfVar1;
  (param_1->InterpolationInfo).StartValue = fVar4;
  (param_1->InterpolationInfo).DeltaValue = fVar2 - fVar4;
  return;
}

// CanFilter @ 14f0cbc20

bool __thiscall USubmixEffectDelayPreset::CanFilter(USubmixEffectDelayPreset *this)

{
  return false;
}

// CreateNewEffect @ 14f0d0e40

FSoundEffectBase * __thiscall
USubmixEffectDelayPreset::CreateNewEffect(USubmixEffectDelayPreset *this)

{
  FSoundEffectBase *this_00;
  
  this_00 = ::operator_new(0x100);
  if (this_00 != (FSoundEffectBase *)0x0) {
    FSoundEffectBase::FSoundEffectBase(this_00);
    *(undefined4 *)&this_00[1]._padding_ = 0xffffffff;
    this_00[1]._padding_ = 0;
    this_00->_padding_ = (longlong)&___7FSubmixEffectDelay__6B_;
    *(undefined4 *)this_00[1].SettingsCritSect.CriticalSection.Opaque1 = 0;
    *(undefined4 *)((longlong)this_00[1].SettingsCritSect.CriticalSection.Opaque1 + 4) = 0xffffffff;
    *(undefined1 *)this_00[1].SettingsCritSect.CriticalSection.Opaque2 = 0;
    this_00[1].SettingsCritSect.CriticalSection.Opaque2[1] = 0x44fa0000;
    *(undefined4 *)this_00[1].SettingsCritSect.CriticalSection.Opaque3 = 0x43c80000;
    *(undefined4 *)((longlong)this_00[1].SettingsCritSect.CriticalSection.Opaque3 + 4) = 0x447a0000;
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)(this_00[1].SettingsCritSect.CriticalSection.Opaque3 + 1),4000);
    this_00[1].Preset.WeakPtr.ObjectSerialNumber = 0;
    this_00[1].ParentPresetUniqueId = 0x461c4000;
    this_00[1].bIsRunning = (FThreadSafeBool)0x0;
    *(undefined8 *)&this_00[1].bIsActive = 0x459c4000;
    *(undefined8 *)((longlong)&this_00[1].CommandQueue.Head + 4) = 0;
    *(undefined8 *)((longlong)&this_00[1].CommandQueue.Tail + 4) = 0x472c4400;
    *(undefined8 *)((longlong)&this_00[2]._padding_ + 4) = 0;
    *(undefined1 *)((longlong)&this_00[2]._padding_ + 4) = 1;
    this_00[2].SettingsCritSect.CriticalSection.Opaque1[0] = (void *)0x0;
    this_00[2].SettingsCritSect.CriticalSection.Opaque2[0] = 0;
    this_00[2].SettingsCritSect.CriticalSection.Opaque2[1] = 0;
    return this_00;
  }
  return (FSoundEffectBase *)0x0;
}

// CreateNewPreset @ 14f0d2440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USoundEffectPreset * __thiscall
USubmixEffectDelayPreset::CreateNewPreset
          (USubmixEffectDelayPreset *this,UObject *param_1,FName param_2,EObjectFlags param_3)

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

// GetAssetActionName @ 14f0d8aa0

FText * __thiscall
USubmixEffectDelayPreset::GetAssetActionName
          (USubmixEffectDelayPreset *this,FText *__return_storage_ptr__)

{
  FText::FromString(__return_storage_ptr__,"SubmixEffectDelay");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14f0dcf00

UClass * __cdecl USubmixEffectDelayPreset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectDelayPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SubmixEffectDelayPreset",
               &Z_Registration_Info_UClass_USubmixEffectDelayPreset.InnerSingleton,
               StaticRegisterNativesUSubmixEffectDelayPreset,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USubmixEffectDelayPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectDelayPreset>,local_res8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectDelayPreset.InnerSingleton;
}

// GetSupportedClass @ 14f0deee0

UClass * __thiscall USubmixEffectDelayPreset::GetSupportedClass(USubmixEffectDelayPreset *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectDelayPreset.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SubmixEffectDelayPreset",
               &Z_Registration_Info_UClass_USubmixEffectDelayPreset.InnerSingleton,
               StaticRegisterNativesUSubmixEffectDelayPreset,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USubmixEffectDelayPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectDelayPreset>,aFStackX_8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectDelayPreset.InnerSingleton;
}

// HasAssetActions @ 14f0df5f0

bool __thiscall USubmixEffectDelayPreset::HasAssetActions(USubmixEffectDelayPreset *this)

{
  return true;
}

// Init @ 14f0e6200

void __thiscall USubmixEffectDelayPreset::Init(USubmixEffectDelayPreset *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  float fVar2;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    fVar2 = (this->Settings).InterpolationTime;
    fVar1 = (this->Settings).DelayLength;
    (this->SettingsCopy).MaximumDelayLength = (this->Settings).MaximumDelayLength;
    (this->SettingsCopy).InterpolationTime = fVar2;
    (this->SettingsCopy).DelayLength = fVar1;
                    /* WARNING: Could not recover jumptable at 0x00014f0e6248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnInit @ 14f0ea900

void __thiscall USubmixEffectDelayPreset::OnInit(USubmixEffectDelayPreset *this)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (this->Settings).InterpolationTime;
  fVar1 = (this->Settings).DelayLength;
  (this->DynamicSettings).MaximumDelayLength = (this->Settings).MaximumDelayLength;
  (this->DynamicSettings).InterpolationTime = fVar2;
  (this->DynamicSettings).DelayLength = fVar1;
  return;
}

// SetDefaultSettings @ 14f0f9ed0

void __thiscall
USubmixEffectDelayPreset::SetDefaultSettings
          (USubmixEffectDelayPreset *this,FSubmixEffectDelaySettings *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  float fVar2;
  
  fVar1 = param_1->InterpolationTime;
  lpCriticalSection = &this->SettingsCritSect;
  (this->Settings).MaximumDelayLength = param_1->MaximumDelayLength;
  (this->Settings).InterpolationTime = fVar1;
  fVar1 = param_1->DelayLength;
  (this->Settings).DelayLength = fVar1;
  fVar2 = (this->Settings).InterpolationTime;
  (this->DynamicSettings).MaximumDelayLength = (this->Settings).MaximumDelayLength;
  (this->DynamicSettings).InterpolationTime = fVar2;
  (this->DynamicSettings).DelayLength = fVar1;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    fVar2 = (this->DynamicSettings).InterpolationTime;
    fVar1 = (this->DynamicSettings).DelayLength;
    (this->SettingsCopy).MaximumDelayLength = (this->DynamicSettings).MaximumDelayLength;
    (this->SettingsCopy).InterpolationTime = fVar2;
    (this->SettingsCopy).DelayLength = fVar1;
    USoundEffectPreset::Update((USoundEffectPreset *)this);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetDelay @ 14f0f9f70

void __thiscall USubmixEffectDelayPreset::SetDelay(USubmixEffectDelayPreset *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  float local_20;
  undefined8 local_10;
  
  (this->DynamicSettings).DelayLength = param_1;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USubmixEffectDelayPreset::SetDelay'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USubmixEffectDelayPreset::SetDelay'::__l2::<lambda_1>,void,FSubmixEffectDelay_&>
                ::Call;
  local_20 = param_1;
  USoundEffectPreset::EffectCommand<FSubmixEffectDelay>
            ((USoundEffectPreset *)this,(TFunction<void___cdecl(FSubmixEffectDelay_&)> *)local_38);
  return;
}

// SetInterpolationTime @ 14f0fcec0

void __thiscall
USubmixEffectDelayPreset::SetInterpolationTime(USubmixEffectDelayPreset *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  float local_20;
  undefined8 local_10;
  
  (this->DynamicSettings).InterpolationTime = param_1;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USubmixEffectDelayPreset::SetInterpolationTime'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USubmixEffectDelayPreset::SetInterpolationTime'::__l2::<lambda_1>,void,FSubmixEffectDelay_&>
                ::Call;
  local_20 = param_1;
  USoundEffectPreset::EffectCommand<FSubmixEffectDelay>
            ((USoundEffectPreset *)this,(TFunction<void___cdecl(FSubmixEffectDelay_&)> *)local_38);
  return;
}

// SetSettings @ 14f101990

void __thiscall
USubmixEffectDelayPreset::SetSettings
          (USubmixEffectDelayPreset *this,FSubmixEffectDelaySettings *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  float fVar2;
  
  fVar1 = param_1->InterpolationTime;
  lpCriticalSection = &this->SettingsCritSect;
  (this->DynamicSettings).MaximumDelayLength = param_1->MaximumDelayLength;
  (this->DynamicSettings).InterpolationTime = fVar1;
  (this->DynamicSettings).DelayLength = param_1->DelayLength;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    fVar2 = (this->DynamicSettings).InterpolationTime;
    fVar1 = (this->DynamicSettings).DelayLength;
    (this->SettingsCopy).MaximumDelayLength = (this->DynamicSettings).MaximumDelayLength;
    (this->SettingsCopy).InterpolationTime = fVar2;
    (this->SettingsCopy).DelayLength = fVar1;
    USoundEffectPreset::Update((USoundEffectPreset *)this);
                    /* WARNING: Could not recover jumptable at 0x00014f1019f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StaticRegisterNativesUSubmixEffectDelayPreset @ 14f103a40

void __cdecl USubmixEffectDelayPreset::StaticRegisterNativesUSubmixEffectDelayPreset(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_USubmixEffectDelayPreset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetMaxDelayInMilliseconds @ 14f10c530

void __cdecl
USubmixEffectDelayPreset::execGetMaxDelayInMilliseconds
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[4].field_0x8;
  return;
}

// execSetDefaultSettings @ 14f10eb10

void __cdecl
USubmixEffectDelayPreset::execSetDefaultSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *lpCriticalSection;
  undefined4 uVar1;
  FProperty *pFVar2;
  uchar *puVar3;
  uchar local_18 [16];
  
  local_18[0] = '\0';
  local_18[1] = '\0';
  local_18[2] = 0xfa;
  local_18[3] = 'D';
  local_18[4] = '\0';
  local_18[5] = '\0';
  local_18[6] = 200;
  local_18[7] = 'C';
  local_18[8] = '\0';
  local_18[9] = '\0';
  local_18[10] = 'z';
  local_18[0xb] = 'D';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  puVar3 = local_18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lpCriticalSection = &param_1[2].field_0x18;
  *(undefined8 *)&param_1[3].field_0x24 = *(undefined8 *)puVar3;
  uVar1 = *(undefined4 *)(puVar3 + 8);
  *(undefined4 *)&param_1[4].field_0x4 = uVar1;
  *(undefined8 *)&param_1[4].field_0x8 = *(undefined8 *)&param_1[3].field_0x24;
  *(undefined4 *)&param_1[4].field_0x10 = uVar1;
  if (lpCriticalSection != (undefined1 *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar1 = *(undefined4 *)&param_1[4].field_0x10;
    *(undefined8 *)&param_1[3].field_0x18 = *(undefined8 *)&param_1[4].field_0x8;
    *(undefined4 *)&param_1[3].field_0x20 = uVar1;
    USoundEffectPreset::Update((USoundEffectPreset *)param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// execSetDelay @ 14f10ec30

void __cdecl USubmixEffectDelayPreset::execSetDelay(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  undefined4 local_20;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_10 = 0;
  local_20 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USubmixEffectDelayPreset::SetDelay'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USubmixEffectDelayPreset::SetDelay'::__l2::<lambda_1>,void,FSubmixEffectDelay_&>
                ::Call;
  *(undefined4 *)&param_1[4].field_0x10 = local_res8[0];
  USoundEffectPreset::EffectCommand<FSubmixEffectDelay>
            ((USoundEffectPreset *)param_1,(TFunction<void___cdecl(FSubmixEffectDelay_&)> *)local_38
            );
  return;
}

// execSetInterpolationTime @ 14f111dd0

void __cdecl
USubmixEffectDelayPreset::execSetInterpolationTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  code *local_38 [2];
  undefined **local_28;
  undefined4 local_20;
  undefined8 local_10;
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_10 = 0;
  local_20 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USubmixEffectDelayPreset::SetInterpolationTime'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USubmixEffectDelayPreset::SetInterpolationTime'::__l2::<lambda_1>,void,FSubmixEffectDelay_&>
                ::Call;
  *(undefined4 *)&param_1[4].field_0xc = local_res8[0];
  USoundEffectPreset::EffectCommand<FSubmixEffectDelay>
            ((USoundEffectPreset *)param_1,(TFunction<void___cdecl(FSubmixEffectDelay_&)> *)local_38
            );
  return;
}

// execSetSettings @ 14f1166e0

void __cdecl
USubmixEffectDelayPreset::execSetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *lpCriticalSection;
  undefined4 uVar1;
  FProperty *pFVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar *puVar10;
  uchar local_18 [16];
  
  local_18[0] = '\0';
  local_18[1] = '\0';
  local_18[2] = 0xfa;
  local_18[3] = 'D';
  local_18[4] = '\0';
  local_18[5] = '\0';
  local_18[6] = 200;
  local_18[7] = 'C';
  local_18[8] = '\0';
  local_18[9] = '\0';
  local_18[10] = 'z';
  local_18[0xb] = 'D';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  puVar10 = local_18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar10 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lpCriticalSection = &param_1[2].field_0x18;
  uVar3 = puVar10[1];
  uVar4 = puVar10[2];
  uVar5 = puVar10[3];
  uVar6 = puVar10[4];
  uVar7 = puVar10[5];
  uVar8 = puVar10[6];
  uVar9 = puVar10[7];
  param_1[4].field_0x8 = puVar10[0];
  param_1[4].field_0x9 = uVar3;
  param_1[4].field_0xa = uVar4;
  param_1[4].field_0xb = uVar5;
  param_1[4].field_0xc = uVar6;
  param_1[4].field_0xd = uVar7;
  param_1[4].field_0xe = uVar8;
  param_1[4].field_0xf = uVar9;
  uVar3 = puVar10[9];
  uVar4 = puVar10[10];
  uVar5 = puVar10[0xb];
  param_1[4].field_0x10 = puVar10[8];
  param_1[4].field_0x11 = uVar3;
  param_1[4].field_0x12 = uVar4;
  param_1[4].field_0x13 = uVar5;
  if (lpCriticalSection != (undefined1 *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar1 = *(undefined4 *)&param_1[4].field_0x10;
    *(undefined8 *)&param_1[3].field_0x18 = *(undefined8 *)&param_1[4].field_0x8;
    *(undefined4 *)&param_1[3].field_0x20 = uVar1;
    USoundEffectPreset::Update((USoundEffectPreset *)param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

