// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 27

// StaticClass @ 14f0a6d30

UClass * __cdecl USubmixEffectFilterPreset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectFilterPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SubmixEffectFilterPreset",
               &Z_Registration_Info_UClass_USubmixEffectFilterPreset.InnerSingleton,
               StaticRegisterNativesUSubmixEffectFilterPreset,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USubmixEffectFilterPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectFilterPreset>,local_res8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectFilterPreset.InnerSingleton;
}

// USubmixEffectFilterPreset @ 14f0bb370

USubmixEffectFilterPreset * __thiscall
USubmixEffectFilterPreset::USubmixEffectFilterPreset
          (USubmixEffectFilterPreset *this,FVTableHelper *param_1)

{
  USoundEffectSubmixPreset::USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this,param_1);
  this->_padding_ = (longlong)&___7USubmixEffectFilterPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).FilterType = LowPass;
  (this->SettingsCopy).FilterAlgorithm = OnePole;
  (this->SettingsCopy).FilterFrequency = 20000.0;
  (this->SettingsCopy).FilterQ = 2.0;
  (this->Settings).FilterType = LowPass;
  (this->Settings).FilterAlgorithm = OnePole;
  (this->Settings).FilterFrequency = 20000.0;
  (this->Settings).FilterQ = 2.0;
  return this;
}

// USubmixEffectFilterPreset @ 14f0bb3e0

USubmixEffectFilterPreset * __thiscall
USubmixEffectFilterPreset::USubmixEffectFilterPreset
          (USubmixEffectFilterPreset *this,FObjectInitializer *param_1)

{
  USoundEffectSubmixPreset::USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this,param_1);
  this->_padding_ = (longlong)&___7USubmixEffectFilterPreset__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCritSect,4000);
  (this->SettingsCopy).FilterType = LowPass;
  (this->SettingsCopy).FilterAlgorithm = OnePole;
  (this->SettingsCopy).FilterFrequency = 20000.0;
  (this->SettingsCopy).FilterQ = 2.0;
  (this->Settings).FilterType = LowPass;
  (this->Settings).FilterAlgorithm = OnePole;
  (this->Settings).FilterFrequency = 20000.0;
  (this->Settings).FilterQ = 2.0;
  return this;
}

// ~USubmixEffectFilterPreset @ 14f0c0710

void __thiscall
USubmixEffectFilterPreset::~USubmixEffectFilterPreset(USubmixEffectFilterPreset *this)

{
  this->_padding_ = (longlong)&___7USubmixEffectFilterPreset__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCritSect);
  USoundEffectSubmixPreset::~USoundEffectSubmixPreset((USoundEffectSubmixPreset *)this);
  return;
}

// CanFilter @ 14f0cbc30

bool __thiscall USubmixEffectFilterPreset::CanFilter(USubmixEffectFilterPreset *this)

{
  return false;
}

// CreateNewEffect @ 14f0d0f40

FSoundEffectBase * __thiscall
USubmixEffectFilterPreset::CreateNewEffect(USubmixEffectFilterPreset *this)

{
  FSoundEffectBase *this_00;
  
  this_00 = ::operator_new(0x510);
  if (this_00 != (FSoundEffectBase *)0x0) {
    FSoundEffectBase::FSoundEffectBase(this_00);
    *(undefined4 *)&this_00[1]._padding_ = 0xffffffff;
    this_00[1]._padding_ = 0;
    this_00->_padding_ = (longlong)&___7FSubmixEffectFilter__6B_;
    *(undefined4 *)this_00[1].SettingsCritSect.CriticalSection.Opaque1 = 0;
    *(undefined4 *)((longlong)this_00[1].SettingsCritSect.CriticalSection.Opaque1 + 4) = 0xffffffff;
    this_00[1].SettingsCritSect.CriticalSection.Opaque2[0] = 0;
    Audio::FOnePoleFilter::FOnePoleFilter
              ((FOnePoleFilter *)this_00[1].SettingsCritSect.CriticalSection.Opaque3);
    Audio::FStateVariableFilter::FStateVariableFilter((FStateVariableFilter *)&this_00[2].bChanged);
    Audio::FLadderFilter::FLadderFilter((FLadderFilter *)&this_00[4].SettingsCritSect);
    this_00[0xb].SettingsCritSect.CriticalSection.Opaque3[0] = (void *)0x0;
    *(undefined2 *)(this_00[0xb].SettingsCritSect.CriticalSection.Opaque3 + 1) = 0;
    *(undefined8 *)((longlong)this_00[0xb].SettingsCritSect.CriticalSection.Opaque3 + 0xc) = 0;
    *(undefined8 *)((longlong)this_00[0xb].SettingsCritSect.CriticalSection.Opaque3 + 0x14) = 0;
    *(undefined4 *)
     ((longlong)&this_00[0xb].CurrentAudioThreadSettingsData.AllocatorInstance.Data + 4) = 0;
    return this_00;
  }
  return (FSoundEffectBase *)0x0;
}

// CreateNewPreset @ 14f0d2540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USoundEffectPreset * __thiscall
USubmixEffectFilterPreset::CreateNewPreset
          (USubmixEffectFilterPreset *this,UObject *param_1,FName param_2,EObjectFlags param_3)

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

// GetAssetActionName @ 14f0d8ad0

FText * __thiscall
USubmixEffectFilterPreset::GetAssetActionName
          (USubmixEffectFilterPreset *this,FText *__return_storage_ptr__)

{
  FText::FromString(__return_storage_ptr__,"SubmixEffectFilter");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14f0dd080

UClass * __cdecl USubmixEffectFilterPreset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectFilterPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SubmixEffectFilterPreset",
               &Z_Registration_Info_UClass_USubmixEffectFilterPreset.InnerSingleton,
               StaticRegisterNativesUSubmixEffectFilterPreset,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USubmixEffectFilterPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectFilterPreset>,local_res8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectFilterPreset.InnerSingleton;
}

// GetSupportedClass @ 14f0deef0

UClass * __thiscall USubmixEffectFilterPreset::GetSupportedClass(USubmixEffectFilterPreset *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USubmixEffectFilterPreset.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Synthesis",L"SubmixEffectFilterPreset",
               &Z_Registration_Info_UClass_USubmixEffectFilterPreset.InnerSingleton,
               StaticRegisterNativesUSubmixEffectFilterPreset,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USubmixEffectFilterPreset>,
               InternalVTableHelperCtorCaller<USubmixEffectFilterPreset>,aFStackX_8,
               USoundEffectSubmixPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USubmixEffectFilterPreset.InnerSingleton;
}

// HasAssetActions @ 14f0df600

bool __thiscall USubmixEffectFilterPreset::HasAssetActions(USubmixEffectFilterPreset *this)

{
  return true;
}

// Init @ 14f0e6260

void __thiscall USubmixEffectFilterPreset::Init(USubmixEffectFilterPreset *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar1;
  ESubmixFilterAlgorithm EVar2;
  undefined2 uVar3;
  float fVar4;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    EVar2 = (this->Settings).FilterAlgorithm;
    uVar3 = *(undefined2 *)&(this->Settings).field_0x2;
    fVar4 = (this->Settings).FilterFrequency;
    fVar1 = (this->Settings).FilterQ;
    (this->SettingsCopy).FilterType = (this->Settings).FilterType;
    (this->SettingsCopy).FilterAlgorithm = EVar2;
    *(undefined2 *)&(this->SettingsCopy).field_0x2 = uVar3;
    (this->SettingsCopy).FilterFrequency = fVar4;
    (this->SettingsCopy).FilterQ = fVar1;
                    /* WARNING: Could not recover jumptable at 0x00014f0e62a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetFilterAlgorithm @ 14f0fb420

void __thiscall
USubmixEffectFilterPreset::SetFilterAlgorithm
          (USubmixEffectFilterPreset *this,ESubmixFilterAlgorithm param_1)

{
  code *local_38 [2];
  undefined **local_28;
  ESubmixFilterAlgorithm local_20;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterAlgorithm'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USubmixEffectFilterPreset::SetFilterAlgorithm'::__l2::<lambda_1>,void,FSubmixEffectFilter_&>
                ::Call;
  local_20 = param_1;
  USoundEffectPreset::EffectCommand<FSubmixEffectFilter>
            ((USoundEffectPreset *)this,(TFunction<void___cdecl(FSubmixEffectFilter_&)> *)local_38);
  return;
}

// SetFilterCutoffFrequency @ 14f0fb4c0

void __thiscall
USubmixEffectFilterPreset::SetFilterCutoffFrequency(USubmixEffectFilterPreset *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  float local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterCutoffFrequency'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USubmixEffectFilterPreset::SetFilterCutoffFrequency'::__l2::<lambda_1>,void,FSubmixEffectFilter_&>
                ::Call;
  local_20 = param_1;
  USoundEffectPreset::EffectCommand<FSubmixEffectFilter>
            ((USoundEffectPreset *)this,(TFunction<void___cdecl(FSubmixEffectFilter_&)> *)local_38);
  return;
}

// SetFilterCutoffFrequencyMod @ 14f0fb540

void __thiscall
USubmixEffectFilterPreset::SetFilterCutoffFrequencyMod
          (USubmixEffectFilterPreset *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  float local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterCutoffFrequencyMod'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USubmixEffectFilterPreset::SetFilterCutoffFrequencyMod'::__l2::<lambda_1>,void,FSubmixEffectFilter_&>
                ::Call;
  local_20 = param_1;
  USoundEffectPreset::EffectCommand<FSubmixEffectFilter>
            ((USoundEffectPreset *)this,(TFunction<void___cdecl(FSubmixEffectFilter_&)> *)local_38);
  return;
}

// SetFilterQ @ 14f0fbcc0

void __thiscall USubmixEffectFilterPreset::SetFilterQ(USubmixEffectFilterPreset *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  float local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterQ'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USubmixEffectFilterPreset::SetFilterQ'::__l2::<lambda_1>,void,FSubmixEffectFilter_&>
                ::Call;
  local_20 = param_1;
  USoundEffectPreset::EffectCommand<FSubmixEffectFilter>
            ((USoundEffectPreset *)this,(TFunction<void___cdecl(FSubmixEffectFilter_&)> *)local_38);
  return;
}

// SetFilterQMod @ 14f0fbe60

void __thiscall
USubmixEffectFilterPreset::SetFilterQMod(USubmixEffectFilterPreset *this,float param_1)

{
  code *local_38 [2];
  undefined **local_28;
  float local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterQMod'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USubmixEffectFilterPreset::SetFilterQMod'::__l2::<lambda_1>,void,FSubmixEffectFilter_&>
                ::Call;
  local_20 = param_1;
  USoundEffectPreset::EffectCommand<FSubmixEffectFilter>
            ((USoundEffectPreset *)this,(TFunction<void___cdecl(FSubmixEffectFilter_&)> *)local_38);
  return;
}

// SetFilterType @ 14f0fbff0

void __thiscall
USubmixEffectFilterPreset::SetFilterType(USubmixEffectFilterPreset *this,ESubmixFilterType param_1)

{
  code *local_38 [2];
  undefined **local_28;
  ESubmixFilterType local_20;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterType'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USubmixEffectFilterPreset::SetFilterType'::__l2::<lambda_1>,void,FSubmixEffectFilter_&>
                ::Call;
  local_20 = param_1;
  USoundEffectPreset::EffectCommand<FSubmixEffectFilter>
            ((USoundEffectPreset *)this,(TFunction<void___cdecl(FSubmixEffectFilter_&)> *)local_38);
  return;
}

// SetSettings @ 14f101a10

void __thiscall
USubmixEffectFilterPreset::SetSettings
          (USubmixEffectFilterPreset *this,FSubmixEffectFilterSettings *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ESubmixFilterAlgorithm EVar1;
  undefined2 uVar2;
  float fVar3;
  
  lpCriticalSection = &this->SettingsCritSect;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    EVar1 = param_1->FilterAlgorithm;
    uVar2 = *(undefined2 *)&param_1->field_0x2;
    fVar3 = param_1->FilterFrequency;
    (this->SettingsCopy).FilterType = param_1->FilterType;
    (this->SettingsCopy).FilterAlgorithm = EVar1;
    *(undefined2 *)&(this->SettingsCopy).field_0x2 = uVar2;
    (this->SettingsCopy).FilterFrequency = fVar3;
    (this->SettingsCopy).FilterQ = param_1->FilterQ;
    USoundEffectPreset::Update((USoundEffectPreset *)this);
                    /* WARNING: Could not recover jumptable at 0x00014f101a66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// StaticRegisterNativesUSubmixEffectFilterPreset @ 14f103ac0

void __cdecl USubmixEffectFilterPreset::StaticRegisterNativesUSubmixEffectFilterPreset(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_USubmixEffectFilterPreset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetFilterAlgorithm @ 14f10fe60

void __cdecl
USubmixEffectFilterPreset::execSetFilterAlgorithm(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [24];
  code *local_38 [2];
  undefined **local_28;
  undefined1 local_20;
  undefined8 local_10;
  
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterAlgorithm'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_20 = local_res10[0];
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USubmixEffectFilterPreset::SetFilterAlgorithm'::__l2::<lambda_1>,void,FSubmixEffectFilter_&>
                ::Call;
  USoundEffectPreset::EffectCommand<FSubmixEffectFilter>
            ((USoundEffectPreset *)param_1,
             (TFunction<void___cdecl(FSubmixEffectFilter_&)> *)local_38);
  return;
}

// execSetFilterCutoffFrequency @ 14f10ff10

void __cdecl
USubmixEffectFilterPreset::execSetFilterCutoffFrequency
          (UObject *param_1,FFrame *param_2,void *param_3)

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
              TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterCutoffFrequency'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USubmixEffectFilterPreset::SetFilterCutoffFrequency'::__l2::<lambda_1>,void,FSubmixEffectFilter_&>
                ::Call;
  USoundEffectPreset::EffectCommand<FSubmixEffectFilter>
            ((USoundEffectPreset *)param_1,
             (TFunction<void___cdecl(FSubmixEffectFilter_&)> *)local_38);
  return;
}

// execSetFilterCutoffFrequencyMod @ 14f10ffd0

void __cdecl
USubmixEffectFilterPreset::execSetFilterCutoffFrequencyMod
          (UObject *param_1,FFrame *param_2,void *param_3)

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
              TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterCutoffFrequencyMod'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USubmixEffectFilterPreset::SetFilterCutoffFrequencyMod'::__l2::<lambda_1>,void,FSubmixEffectFilter_&>
                ::Call;
  USoundEffectPreset::EffectCommand<FSubmixEffectFilter>
            ((USoundEffectPreset *)param_1,
             (TFunction<void___cdecl(FSubmixEffectFilter_&)> *)local_38);
  return;
}

// execSetFilterQ @ 14f1108f0

void __cdecl
USubmixEffectFilterPreset::execSetFilterQ(UObject *param_1,FFrame *param_2,void *param_3)

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
              TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterQ'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USubmixEffectFilterPreset::SetFilterQ'::__l2::<lambda_1>,void,FSubmixEffectFilter_&>
                ::Call;
  USoundEffectPreset::EffectCommand<FSubmixEffectFilter>
            ((USoundEffectPreset *)param_1,
             (TFunction<void___cdecl(FSubmixEffectFilter_&)> *)local_38);
  return;
}

// execSetFilterQMod @ 14f110a70

void __cdecl
USubmixEffectFilterPreset::execSetFilterQMod(UObject *param_1,FFrame *param_2,void *param_3)

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
              TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterQMod'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USubmixEffectFilterPreset::SetFilterQMod'::__l2::<lambda_1>,void,FSubmixEffectFilter_&>
                ::Call;
  USoundEffectPreset::EffectCommand<FSubmixEffectFilter>
            ((USoundEffectPreset *)param_1,
             (TFunction<void___cdecl(FSubmixEffectFilter_&)> *)local_38);
  return;
}

// execSetFilterType @ 14f110c00

void __cdecl
USubmixEffectFilterPreset::execSetFilterType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [24];
  code *local_38 [2];
  undefined **local_28;
  undefined1 local_20;
  undefined8 local_10;
  
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterType'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_20 = local_res10[0];
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USubmixEffectFilterPreset::SetFilterType'::__l2::<lambda_1>,void,FSubmixEffectFilter_&>
                ::Call;
  USoundEffectPreset::EffectCommand<FSubmixEffectFilter>
            ((USoundEffectPreset *)param_1,
             (TFunction<void___cdecl(FSubmixEffectFilter_&)> *)local_38);
  return;
}

// execSetSettings @ 14f1167e0

void __cdecl
USubmixEffectFilterPreset::execSetSettings(UObject *param_1,FFrame *param_2,void *param_3)

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
  uchar local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  
  local_18[0] = '\0';
  local_18[1] = '\0';
  local_14 = 0x469c4000;
  local_10 = 0x40000000;
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

