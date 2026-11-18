// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 6

// StaticClass @ 14acb1db0

UClass * __cdecl UEasyParticleComponent_InitialVelocity::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InitialVelocity.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InitialVelocity",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InitialVelocity.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_InitialVelocity,0x3a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_InitialVelocity>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InitialVelocity>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InitialVelocity.InnerSingleton;
}

// UEasyParticleComponent_InitialVelocity @ 14acb6f30

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_InitialVelocity * __thiscall
UEasyParticleComponent_InitialVelocity::UEasyParticleComponent_InitialVelocity
          (UEasyParticleComponent_InitialVelocity *this,FVTableHelper *param_1)

{
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialVelocity__6B_;
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->InitialVelocity);
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->InitialVelocityDirection);
  return this;
}

// ~UEasyParticleComponent_InitialVelocity @ 14acb7b10

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleComponent_InitialVelocity::~UEasyParticleComponent_InitialVelocity
          (UEasyParticleComponent_InitialVelocity *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialVelocity__6B_;
  FEasyParticlePropertyFloat::~FEasyParticlePropertyFloat(&this->InitialVelocityDirection);
  FEasyParticlePropertyFloat::~FEasyParticlePropertyFloat(&this->InitialVelocity);
  UEasyParticleComponent::~UEasyParticleComponent((UEasyParticleComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14acba060

UClass * __cdecl UEasyParticleComponent_InitialVelocity::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InitialVelocity.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InitialVelocity",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InitialVelocity.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_InitialVelocity,0x3a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_InitialVelocity>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InitialVelocity>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InitialVelocity.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_InitialVelocity @ 14acbd5c0

void __cdecl
UEasyParticleComponent_InitialVelocity::StaticRegisterNativesUEasyParticleComponent_InitialVelocity
          (void)

{
  return;
}

// UEasyParticleComponent_InitialVelocity @ 14acc1060

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_InitialVelocity * __thiscall
UEasyParticleComponent_InitialVelocity::UEasyParticleComponent_InitialVelocity
          (UEasyParticleComponent_InitialVelocity *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  UClass *pUVar2;
  FString local_18;
  
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialVelocity__6B_;
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->InitialVelocity);
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->InitialVelocityDirection);
  pUVar2 = Z_Construct_UClass_UEasyParticleComponent_InitialVelocity_Runtime_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->_padding_ = (longlong)pUVar2;
  ::FString::FString(&local_18,"InitialVelocity");
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
  (this->InitialVelocity).Type = Float;
  (this->InitialVelocity).FloatValue = 100.0;
  (this->InitialVelocityDirection).Type = FloatRange;
  (this->InitialVelocityDirection).FloatRangeValue.Min = 0.0;
  (this->InitialVelocityDirection).FloatRangeValue.Max = 360.0;
  return this;
}

