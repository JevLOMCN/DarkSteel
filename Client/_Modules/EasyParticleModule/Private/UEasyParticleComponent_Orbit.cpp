// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 6

// StaticClass @ 14acb24b0

UClass * __cdecl UEasyParticleComponent_Orbit::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_Orbit.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_Orbit",
               &Z_Registration_Info_UClass_UEasyParticleComponent_Orbit.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_Orbit,0x548,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_Orbit>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_Orbit>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_Orbit.InnerSingleton;
}

// UEasyParticleComponent_Orbit @ 14acb7060

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_Orbit * __thiscall
UEasyParticleComponent_Orbit::UEasyParticleComponent_Orbit
          (UEasyParticleComponent_Orbit *this,FVTableHelper *param_1)

{
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Orbit__6B_;
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->InitialRotation);
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->Radius);
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->RotationRate);
  return this;
}

// ~UEasyParticleComponent_Orbit @ 14acb7bc0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleComponent_Orbit::~UEasyParticleComponent_Orbit(UEasyParticleComponent_Orbit *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Orbit__6B_;
  FEasyParticlePropertyFloat::~FEasyParticlePropertyFloat(&this->RotationRate);
  FEasyParticlePropertyFloat::~FEasyParticlePropertyFloat(&this->Radius);
  FEasyParticlePropertyFloat::~FEasyParticlePropertyFloat(&this->InitialRotation);
  UEasyParticleComponent::~UEasyParticleComponent((UEasyParticleComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14acba360

UClass * __cdecl UEasyParticleComponent_Orbit::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_Orbit.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_Orbit",
               &Z_Registration_Info_UClass_UEasyParticleComponent_Orbit.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_Orbit,0x548,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_Orbit>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_Orbit>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_Orbit.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_Orbit @ 14acbd600

void __cdecl UEasyParticleComponent_Orbit::StaticRegisterNativesUEasyParticleComponent_Orbit(void)

{
  return;
}

// UEasyParticleComponent_Orbit @ 14acc1300

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_Orbit * __thiscall
UEasyParticleComponent_Orbit::UEasyParticleComponent_Orbit
          (UEasyParticleComponent_Orbit *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  UClass *pUVar2;
  FString local_18;
  
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Orbit__6B_;
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->InitialRotation);
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->Radius);
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->RotationRate);
  pUVar2 = Z_Construct_UClass_UEasyParticleComponent_Orbit_Runtime_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->_padding_ = (longlong)pUVar2;
  ::FString::FString(&local_18,"Orbit");
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
  *(undefined1 *)&this->_padding_ = 1;
  (this->InitialRotation).Type = FloatRange;
  (this->InitialRotation).FloatRangeValue.Min = 0.0;
  (this->InitialRotation).FloatRangeValue.Max = 360.0;
  (this->Radius).Type = FloatRange;
  (this->Radius).FloatRangeValue.Min = 20.0;
  (this->Radius).FloatRangeValue.Max = 50.0;
  (this->RotationRate).Type = FloatRange;
  (this->RotationRate).FloatRangeValue.Min = 20.0;
  (this->RotationRate).FloatRangeValue.Max = 50.0;
  return this;
}

