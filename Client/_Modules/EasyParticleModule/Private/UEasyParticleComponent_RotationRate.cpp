// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 6

// StaticClass @ 14acb2a80

UClass * __cdecl UEasyParticleComponent_RotationRate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_RotationRate.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_RotationRate",
               &Z_Registration_Info_UClass_UEasyParticleComponent_RotationRate.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_RotationRate,0x1f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_RotationRate>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_RotationRate>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_RotationRate.InnerSingleton;
}

// UEasyParticleComponent_RotationRate @ 14acb71c0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_RotationRate * __thiscall
UEasyParticleComponent_RotationRate::UEasyParticleComponent_RotationRate
          (UEasyParticleComponent_RotationRate *this,FVTableHelper *param_1)

{
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_RotationRate__6B_;
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->RotationRate);
  return this;
}

// ~UEasyParticleComponent_RotationRate @ 14acb7c80

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleComponent_RotationRate::~UEasyParticleComponent_RotationRate
          (UEasyParticleComponent_RotationRate *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponent_RotationRate__6B_;
  FEasyParticlePropertyFloat::~FEasyParticlePropertyFloat(&this->RotationRate);
  UEasyParticleComponent::~UEasyParticleComponent((UEasyParticleComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14acba660

UClass * __cdecl UEasyParticleComponent_RotationRate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_RotationRate.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_RotationRate",
               &Z_Registration_Info_UClass_UEasyParticleComponent_RotationRate.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_RotationRate,0x1f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_RotationRate>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_RotationRate>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_RotationRate.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_RotationRate @ 14acbd640

void __cdecl
UEasyParticleComponent_RotationRate::StaticRegisterNativesUEasyParticleComponent_RotationRate(void)

{
  return;
}

// UEasyParticleComponent_RotationRate @ 14acc15f0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_RotationRate * __thiscall
UEasyParticleComponent_RotationRate::UEasyParticleComponent_RotationRate
          (UEasyParticleComponent_RotationRate *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  UClass *pUVar2;
  FString local_18;
  
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_RotationRate__6B_;
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->RotationRate);
  pUVar2 = Z_Construct_UClass_UEasyParticleComponent_RotationRate_Runtime_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->_padding_ = (longlong)pUVar2;
  ::FString::FString(&local_18,"RotationRate");
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
  (this->RotationRate).Type = Float;
  (this->RotationRate).FloatValue = 0.0;
  return this;
}

