// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 6

// StaticClass @ 14aca48d0

UClass * __cdecl UEasyParticleComponent_Acceleration::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_Acceleration.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_Acceleration",
               &Z_Registration_Info_UClass_UEasyParticleComponent_Acceleration.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_Acceleration,0x1f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_Acceleration>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_Acceleration>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_Acceleration.InnerSingleton;
}

// UEasyParticleComponent_Acceleration @ 14aca95b0

UEasyParticleComponent_Acceleration * __thiscall
UEasyParticleComponent_Acceleration::UEasyParticleComponent_Acceleration
          (UEasyParticleComponent_Acceleration *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Acceleration__6B_;
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->Acceleration);
  return this;
}

// ~UEasyParticleComponent_Acceleration @ 14acaa4c0

void __thiscall
UEasyParticleComponent_Acceleration::~UEasyParticleComponent_Acceleration
          (UEasyParticleComponent_Acceleration *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Acceleration__6B_;
  FEasyParticlePropertyFloat::~FEasyParticlePropertyFloat(&this->Acceleration);
  this->_padding_ = (longlong)&___7UEasyParticleComponent__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14acac440

UClass * __cdecl UEasyParticleComponent_Acceleration::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_Acceleration.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_Acceleration",
               &Z_Registration_Info_UClass_UEasyParticleComponent_Acceleration.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_Acceleration,0x1f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_Acceleration>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_Acceleration>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_Acceleration.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_Acceleration @ 14acae210

void __cdecl
UEasyParticleComponent_Acceleration::StaticRegisterNativesUEasyParticleComponent_Acceleration(void)

{
  return;
}

// UEasyParticleComponent_Acceleration @ 14acb5fa0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_Acceleration * __thiscall
UEasyParticleComponent_Acceleration::UEasyParticleComponent_Acceleration
          (UEasyParticleComponent_Acceleration *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  UClass *pUVar2;
  FString local_18;
  
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Acceleration__6B_;
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->Acceleration);
  pUVar2 = Z_Construct_UClass_UEasyParticleComponent_Acceleration_Runtime_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->_padding_ = (longlong)pUVar2;
  ::FString::FString(&local_18,"Acceleration");
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
  (this->Acceleration).Type = Float;
  (this->Acceleration).FloatValue = 10.0;
  return this;
}

