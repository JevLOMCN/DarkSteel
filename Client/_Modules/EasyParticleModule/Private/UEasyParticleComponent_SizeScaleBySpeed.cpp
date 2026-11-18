// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 6

// StaticClass @ 14acb3520

UClass * __cdecl UEasyParticleComponent_SizeScaleBySpeed::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_SizeScaleBySpeed.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_SizeScaleBySpeed",
               &Z_Registration_Info_UClass_UEasyParticleComponent_SizeScaleBySpeed.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_SizeScaleBySpeed,0x3a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_SizeScaleBySpeed>
               ,InternalVTableHelperCtorCaller<UEasyParticleComponent_SizeScaleBySpeed>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_SizeScaleBySpeed.InnerSingleton;
}

// UEasyParticleComponent_SizeScaleBySpeed @ 14acb7360

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_SizeScaleBySpeed * __thiscall
UEasyParticleComponent_SizeScaleBySpeed::UEasyParticleComponent_SizeScaleBySpeed
          (UEasyParticleComponent_SizeScaleBySpeed *this,FVTableHelper *param_1)

{
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_SizeScaleBySpeed__6B_;
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->ScaleX);
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->ScaleY);
  return this;
}

// ~UEasyParticleComponent_SizeScaleBySpeed @ 14acb7d90

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleComponent_SizeScaleBySpeed::~UEasyParticleComponent_SizeScaleBySpeed
          (UEasyParticleComponent_SizeScaleBySpeed *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponent_SizeScaleBySpeed__6B_;
  FEasyParticlePropertyFloat::~FEasyParticlePropertyFloat(&this->ScaleY);
  FEasyParticlePropertyFloat::~FEasyParticlePropertyFloat(&this->ScaleX);
  UEasyParticleComponent::~UEasyParticleComponent((UEasyParticleComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14acbaba0

UClass * __cdecl UEasyParticleComponent_SizeScaleBySpeed::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_SizeScaleBySpeed.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_SizeScaleBySpeed",
               &Z_Registration_Info_UClass_UEasyParticleComponent_SizeScaleBySpeed.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_SizeScaleBySpeed,0x3a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_SizeScaleBySpeed>
               ,InternalVTableHelperCtorCaller<UEasyParticleComponent_SizeScaleBySpeed>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_SizeScaleBySpeed.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_SizeScaleBySpeed @ 14acbd6b0

void __cdecl
UEasyParticleComponent_SizeScaleBySpeed::
StaticRegisterNativesUEasyParticleComponent_SizeScaleBySpeed(void)

{
  return;
}

// UEasyParticleComponent_SizeScaleBySpeed @ 14acc1a00

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_SizeScaleBySpeed * __thiscall
UEasyParticleComponent_SizeScaleBySpeed::UEasyParticleComponent_SizeScaleBySpeed
          (UEasyParticleComponent_SizeScaleBySpeed *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  UClass *pUVar2;
  FString local_18;
  
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_SizeScaleBySpeed__6B_;
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->ScaleX);
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->ScaleY);
  pUVar2 = Z_Construct_UClass_UEasyParticleComponent_SizeScaleBySpeed_Runtime_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->_padding_ = (longlong)pUVar2;
  ::FString::FString(&local_18,"SizeScaleBySpeed");
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
  (this->ScaleX).Type = Float;
  (this->ScaleX).FloatValue = 1.0;
  (this->ScaleY).Type = Float;
  (this->ScaleY).FloatValue = 1.0;
  return this;
}

