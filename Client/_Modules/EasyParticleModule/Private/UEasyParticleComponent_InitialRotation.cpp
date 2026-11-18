// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 6

// StaticClass @ 14aca4690

UClass * __cdecl UEasyParticleComponent_InitialRotation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InitialRotation.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InitialRotation",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InitialRotation.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_InitialRotation,0x1f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_InitialRotation>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InitialRotation>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InitialRotation.InnerSingleton;
}

// UEasyParticleComponent_InitialRotation @ 14aca9f50

UEasyParticleComponent_InitialRotation * __thiscall
UEasyParticleComponent_InitialRotation::UEasyParticleComponent_InitialRotation
          (UEasyParticleComponent_InitialRotation *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialRotation__6B_;
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->InitialRotation);
  return this;
}

// ~UEasyParticleComponent_InitialRotation @ 14acaab50

void __thiscall
UEasyParticleComponent_InitialRotation::~UEasyParticleComponent_InitialRotation
          (UEasyParticleComponent_InitialRotation *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialRotation__6B_;
  FEasyParticlePropertyFloat::~FEasyParticlePropertyFloat(&this->InitialRotation);
  this->_padding_ = (longlong)&___7UEasyParticleComponent__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14acad940

UClass * __cdecl UEasyParticleComponent_InitialRotation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InitialRotation.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InitialRotation",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InitialRotation.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_InitialRotation,0x1f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_InitialRotation>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InitialRotation>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InitialRotation.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_InitialRotation @ 14acae3d0

void __cdecl
UEasyParticleComponent_InitialRotation::StaticRegisterNativesUEasyParticleComponent_InitialRotation
          (void)

{
  return;
}

// UEasyParticleComponent_InitialRotation @ 14acc0a70

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_InitialRotation * __thiscall
UEasyParticleComponent_InitialRotation::UEasyParticleComponent_InitialRotation
          (UEasyParticleComponent_InitialRotation *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  UClass *pUVar2;
  FString local_18;
  
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialRotation__6B_;
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->InitialRotation);
  pUVar2 = Z_Construct_UClass_UEasyParticleComponent_InitialRotation_Runtime_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->_padding_ = (longlong)pUVar2;
  ::FString::FString(&local_18,"InitialRotation");
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
  (this->InitialRotation).Type = FloatRange;
  (this->InitialRotation).FloatRangeValue.Min = 0.0;
  (this->InitialRotation).FloatRangeValue.Max = 360.0;
  return this;
}

