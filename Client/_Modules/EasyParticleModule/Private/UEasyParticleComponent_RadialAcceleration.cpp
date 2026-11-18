// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 6

// StaticClass @ 14acb26b0

UClass * __cdecl UEasyParticleComponent_RadialAcceleration::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_RadialAcceleration.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_RadialAcceleration",
               &Z_Registration_Info_UClass_UEasyParticleComponent_RadialAcceleration.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_RadialAcceleration,0x1f8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_RadialAcceleration>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_RadialAcceleration>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_RadialAcceleration.InnerSingleton;
}

// UEasyParticleComponent_RadialAcceleration @ 14acb7140

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_RadialAcceleration * __thiscall
UEasyParticleComponent_RadialAcceleration::UEasyParticleComponent_RadialAcceleration
          (UEasyParticleComponent_RadialAcceleration *this,FVTableHelper *param_1)

{
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_RadialAcceleration__6B_;
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->RadialAcceleration);
  return this;
}

// ~UEasyParticleComponent_RadialAcceleration @ 14acb7c30

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleComponent_RadialAcceleration::~UEasyParticleComponent_RadialAcceleration
          (UEasyParticleComponent_RadialAcceleration *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponent_RadialAcceleration__6B_;
  FEasyParticlePropertyFloat::~FEasyParticlePropertyFloat(&this->RadialAcceleration);
  UEasyParticleComponent::~UEasyParticleComponent((UEasyParticleComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14acba4e0

UClass * __cdecl UEasyParticleComponent_RadialAcceleration::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_RadialAcceleration.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_RadialAcceleration",
               &Z_Registration_Info_UClass_UEasyParticleComponent_RadialAcceleration.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_RadialAcceleration,0x1f8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_RadialAcceleration>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_RadialAcceleration>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_RadialAcceleration.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_RadialAcceleration @ 14acbd620

void __cdecl
UEasyParticleComponent_RadialAcceleration::
StaticRegisterNativesUEasyParticleComponent_RadialAcceleration(void)

{
  return;
}

// UEasyParticleComponent_RadialAcceleration @ 14acc14d0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_RadialAcceleration * __thiscall
UEasyParticleComponent_RadialAcceleration::UEasyParticleComponent_RadialAcceleration
          (UEasyParticleComponent_RadialAcceleration *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  UClass *pUVar2;
  FString local_18;
  
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_RadialAcceleration__6B_;
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->RadialAcceleration);
  pUVar2 = Z_Construct_UClass_UEasyParticleComponent_RadialAcceleration_Runtime_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->_padding_ = (longlong)pUVar2;
  ::FString::FString(&local_18,"RadialAcceleration");
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
  (this->RadialAcceleration).Type = Float;
  (this->RadialAcceleration).FloatValue = 10.0;
  return this;
}

