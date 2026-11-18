// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 6

// StaticClass @ 14aca6450

UClass * __cdecl UEasyParticleComponent_Gravity::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_Gravity.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_Gravity",
               &Z_Registration_Info_UClass_UEasyParticleComponent_Gravity.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_Gravity,0x3a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_Gravity>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_Gravity>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_Gravity.InnerSingleton;
}

// UEasyParticleComponent_Gravity @ 14aca9a90

UEasyParticleComponent_Gravity * __thiscall
UEasyParticleComponent_Gravity::UEasyParticleComponent_Gravity
          (UEasyParticleComponent_Gravity *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Gravity__6B_;
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->GravityX);
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->GravityY);
  return this;
}

// ~UEasyParticleComponent_Gravity @ 14acaa820

void __thiscall
UEasyParticleComponent_Gravity::~UEasyParticleComponent_Gravity
          (UEasyParticleComponent_Gravity *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Gravity__6B_;
  FEasyParticlePropertyFloat::~FEasyParticlePropertyFloat(&this->GravityY);
  FEasyParticlePropertyFloat::~FEasyParticlePropertyFloat(&this->GravityX);
  this->_padding_ = (longlong)&___7UEasyParticleComponent__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14acacec0

UClass * __cdecl UEasyParticleComponent_Gravity::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_Gravity.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_Gravity",
               &Z_Registration_Info_UClass_UEasyParticleComponent_Gravity.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_Gravity,0x3a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_Gravity>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_Gravity>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_Gravity.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_Gravity @ 14acae2f0

void __cdecl
UEasyParticleComponent_Gravity::StaticRegisterNativesUEasyParticleComponent_Gravity(void)

{
  return;
}

// UEasyParticleComponent_Gravity @ 14acb6920

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_Gravity * __thiscall
UEasyParticleComponent_Gravity::UEasyParticleComponent_Gravity
          (UEasyParticleComponent_Gravity *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  UClass *pUVar2;
  FString local_18;
  
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Gravity__6B_;
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->GravityX);
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->GravityY);
  pUVar2 = Z_Construct_UClass_UEasyParticleComponent_Gravity_Runtime_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->_padding_ = (longlong)pUVar2;
  ::FString::FString(&local_18,"Gravity");
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
  (this->GravityX).Type = Float;
  (this->GravityX).FloatValue = 0.0;
  (this->GravityY).Type = Float;
  (this->GravityY).FloatValue = 1.0;
  return this;
}

