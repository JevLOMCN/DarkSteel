// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 6

// StaticClass @ 14aca50d0

UClass * __cdecl UEasyParticleComponent_Basic::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_Basic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_Basic",
               &Z_Registration_Info_UClass_UEasyParticleComponent_Basic.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_Basic,0x558,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_Basic>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_Basic>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_Basic.InnerSingleton;
}

// UEasyParticleComponent_Basic @ 14aca9730

UEasyParticleComponent_Basic * __thiscall
UEasyParticleComponent_Basic::UEasyParticleComponent_Basic
          (UEasyParticleComponent_Basic *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Basic__6B_;
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->MaxParticleCount);
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->SpawnRate);
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->Lifetime);
  return this;
}

// ~UEasyParticleComponent_Basic @ 14acaa5b0

void __thiscall
UEasyParticleComponent_Basic::~UEasyParticleComponent_Basic(UEasyParticleComponent_Basic *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Basic__6B_;
  FEasyParticlePropertyFloat::~FEasyParticlePropertyFloat(&this->Lifetime);
  FEasyParticlePropertyFloat::~FEasyParticlePropertyFloat(&this->SpawnRate);
  FEasyParticlePropertyFloat::~FEasyParticlePropertyFloat(&this->MaxParticleCount);
  this->_padding_ = (longlong)&___7UEasyParticleComponent__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14acac740

UClass * __cdecl UEasyParticleComponent_Basic::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_Basic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_Basic",
               &Z_Registration_Info_UClass_UEasyParticleComponent_Basic.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_Basic,0x558,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_Basic>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_Basic>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_Basic.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_Basic @ 14acae250

void __cdecl UEasyParticleComponent_Basic::StaticRegisterNativesUEasyParticleComponent_Basic(void)

{
  return;
}

// UEasyParticleComponent_Basic @ 14acb6290

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_Basic * __thiscall
UEasyParticleComponent_Basic::UEasyParticleComponent_Basic
          (UEasyParticleComponent_Basic *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  UClass *pUVar2;
  FString local_18;
  
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Basic__6B_;
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->MaxParticleCount);
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->SpawnRate);
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->Lifetime);
  pUVar2 = Z_Construct_UClass_UEasyParticleComponent_Basic_Runtime_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->_padding_ = (longlong)pUVar2;
  ::FString::FString(&local_18,"Basic");
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
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 3;
  this->EmitSeconds = 1.0;
  (this->MaxParticleCount).Type = Float;
  (this->MaxParticleCount).FloatValue = 20.0;
  (this->SpawnRate).Type = Float;
  (this->SpawnRate).FloatValue = 10.0;
  (this->Lifetime).Type = Float;
  (this->Lifetime).FloatValue = 1.0;
  return this;
}

