// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 6

// StaticClass @ 14aca4e50

UClass * __cdecl UEasyParticleComponent_InitialSize::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InitialSize.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InitialSize",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InitialSize.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_InitialSize,0x1f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_InitialSize>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InitialSize>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InitialSize.InnerSingleton;
}

// UEasyParticleComponent_InitialSize @ 14acaa070

UEasyParticleComponent_InitialSize * __thiscall
UEasyParticleComponent_InitialSize::UEasyParticleComponent_InitialSize
          (UEasyParticleComponent_InitialSize *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialSize__6B_;
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->InitialSize);
  return this;
}

// ~UEasyParticleComponent_InitialSize @ 14acaac30

void __thiscall
UEasyParticleComponent_InitialSize::~UEasyParticleComponent_InitialSize
          (UEasyParticleComponent_InitialSize *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialSize__6B_;
  FEasyParticlePropertyFloat::~FEasyParticlePropertyFloat(&this->InitialSize);
  this->_padding_ = (longlong)&___7UEasyParticleComponent__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14acadc40

UClass * __cdecl UEasyParticleComponent_InitialSize::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InitialSize.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InitialSize",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InitialSize.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_InitialSize,0x1f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_InitialSize>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InitialSize>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InitialSize.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_InitialSize @ 14acae410

void __cdecl
UEasyParticleComponent_InitialSize::StaticRegisterNativesUEasyParticleComponent_InitialSize(void)

{
  return;
}

// UEasyParticleComponent_InitialSize @ 14acc0cd0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_InitialSize * __thiscall
UEasyParticleComponent_InitialSize::UEasyParticleComponent_InitialSize
          (UEasyParticleComponent_InitialSize *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  UClass *pUVar2;
  FString local_18;
  
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialSize__6B_;
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->InitialSize);
  pUVar2 = Z_Construct_UClass_UEasyParticleComponent_InitialSize_Runtime_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->_padding_ = (longlong)pUVar2;
  ::FString::FString(&local_18,"InitialSize");
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
  (this->InitialSize).Type = Float;
  (this->InitialSize).FloatValue = 200.0;
  return this;
}

