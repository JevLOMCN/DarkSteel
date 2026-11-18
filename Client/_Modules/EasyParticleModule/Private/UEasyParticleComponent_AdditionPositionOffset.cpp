// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 6

// StaticClass @ 14aca4cd0

UClass * __cdecl UEasyParticleComponent_AdditionPositionOffset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_AdditionPositionOffset.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_AdditionPositionOffset",
               &Z_Registration_Info_UClass_UEasyParticleComponent_AdditionPositionOffset.
                InnerSingleton,StaticRegisterNativesUEasyParticleComponent_AdditionPositionOffset,
               0x548,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_AdditionPositionOffset>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_AdditionPositionOffset>,
               local_res8,UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_AdditionPositionOffset.InnerSingleton;
}

// UEasyParticleComponent_AdditionPositionOffset @ 14aca9640

UEasyParticleComponent_AdditionPositionOffset * __thiscall
UEasyParticleComponent_AdditionPositionOffset::UEasyParticleComponent_AdditionPositionOffset
          (UEasyParticleComponent_AdditionPositionOffset *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UEasyParticleComponent_AdditionPositionOffset__6B_;
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->InitialTime);
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->Frequency);
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->Amplitude);
  return this;
}

// ~UEasyParticleComponent_AdditionPositionOffset @ 14acaa530

void __thiscall
UEasyParticleComponent_AdditionPositionOffset::~UEasyParticleComponent_AdditionPositionOffset
          (UEasyParticleComponent_AdditionPositionOffset *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponent_AdditionPositionOffset__6B_;
  FEasyParticlePropertyFloat::~FEasyParticlePropertyFloat(&this->Amplitude);
  FEasyParticlePropertyFloat::~FEasyParticlePropertyFloat(&this->Frequency);
  FEasyParticlePropertyFloat::~FEasyParticlePropertyFloat(&this->InitialTime);
  this->_padding_ = (longlong)&___7UEasyParticleComponent__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14acac5c0

UClass * __cdecl UEasyParticleComponent_AdditionPositionOffset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_AdditionPositionOffset.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_AdditionPositionOffset",
               &Z_Registration_Info_UClass_UEasyParticleComponent_AdditionPositionOffset.
                InnerSingleton,StaticRegisterNativesUEasyParticleComponent_AdditionPositionOffset,
               0x548,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_AdditionPositionOffset>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_AdditionPositionOffset>,
               local_res8,UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_AdditionPositionOffset.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_AdditionPositionOffset @ 14acae230

void __cdecl
UEasyParticleComponent_AdditionPositionOffset::
StaticRegisterNativesUEasyParticleComponent_AdditionPositionOffset(void)

{
  return;
}

// UEasyParticleComponent_AdditionPositionOffset @ 14acb60c0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_AdditionPositionOffset * __thiscall
UEasyParticleComponent_AdditionPositionOffset::UEasyParticleComponent_AdditionPositionOffset
          (UEasyParticleComponent_AdditionPositionOffset *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  UClass *pUVar2;
  FString local_18;
  
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_AdditionPositionOffset__6B_;
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->InitialTime);
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->Frequency);
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->Amplitude);
  pUVar2 = Z_Construct_UClass_UEasyParticleComponent_AdditionPositionOffset_Runtime_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->_padding_ = (longlong)pUVar2;
  ::FString::FString(&local_18,"AdditionPositionOffset");
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
  (this->InitialTime).Type = Float;
  (this->InitialTime).FloatValue = 0.0;
  (this->Frequency).Type = FloatRange;
  (this->Frequency).FloatRangeValue.Min = 20.0;
  (this->Frequency).FloatRangeValue.Max = 50.0;
  (this->Amplitude).Type = FloatRange;
  (this->Amplitude).FloatRangeValue.Min = 20.0;
  (this->Amplitude).FloatRangeValue.Max = 50.0;
  return this;
}

