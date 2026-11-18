// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 6

// StaticClass @ 14acb2fa0

UClass * __cdecl UEasyParticleComponent_ScalarParam::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_ScalarParam.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_ScalarParam",
               &Z_Registration_Info_UClass_UEasyParticleComponent_ScalarParam.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_ScalarParam,0x200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_ScalarParam>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_ScalarParam>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_ScalarParam.InnerSingleton;
}

// UEasyParticleComponent_ScalarParam @ 14acb72a0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_ScalarParam * __thiscall
UEasyParticleComponent_ScalarParam::UEasyParticleComponent_ScalarParam
          (UEasyParticleComponent_ScalarParam *this,FVTableHelper *param_1)

{
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_ScalarParam__6B_;
  (this->ScalarParamName).ComparisonIndex = 0;
  (this->ScalarParamName).Number = 0;
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->Value);
  return this;
}

// ~UEasyParticleComponent_ScalarParam @ 14acb7d10

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleComponent_ScalarParam::~UEasyParticleComponent_ScalarParam
          (UEasyParticleComponent_ScalarParam *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponent_ScalarParam__6B_;
  FEasyParticlePropertyFloat::~FEasyParticlePropertyFloat(&this->Value);
  UEasyParticleComponent::~UEasyParticleComponent((UEasyParticleComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14acba960

UClass * __cdecl UEasyParticleComponent_ScalarParam::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_ScalarParam.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_ScalarParam",
               &Z_Registration_Info_UClass_UEasyParticleComponent_ScalarParam.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_ScalarParam,0x200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_ScalarParam>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_ScalarParam>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_ScalarParam.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_ScalarParam @ 14acbd680

void __cdecl
UEasyParticleComponent_ScalarParam::StaticRegisterNativesUEasyParticleComponent_ScalarParam(void)

{
  return;
}

// UEasyParticleComponent_ScalarParam @ 14acc1800

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_ScalarParam * __thiscall
UEasyParticleComponent_ScalarParam::UEasyParticleComponent_ScalarParam
          (UEasyParticleComponent_ScalarParam *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  UClass *pUVar2;
  FString local_18;
  
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_ScalarParam__6B_;
  (this->ScalarParamName).ComparisonIndex = 0;
  (this->ScalarParamName).Number = 0;
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->Value);
  pUVar2 = Z_Construct_UClass_UEasyParticleComponent_ScalarParam_Runtime_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->_padding_ = (longlong)pUVar2;
  ::FString::FString(&local_18,"ScalarParam");
  plVar1 = &this->_padding_;
  if ((FString *)plVar1 != &local_18) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)local_18.Data.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_18.Data.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  (this->Value).Type = Float;
  (this->Value).FloatValue = 0.0;
  return this;
}

