// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 6

// StaticClass @ 14aca3a40

UClass * __cdecl UEasyParticleComponent_InitialDrawEffect::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InitialDrawEffect.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InitialDrawEffect",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InitialDrawEffect.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_InitialDrawEffect,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_InitialDrawEffect>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InitialDrawEffect>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InitialDrawEffect.InnerSingleton;
}

// UEasyParticleComponent_InitialDrawEffect @ 14aca9cb0

UEasyParticleComponent_InitialDrawEffect * __thiscall
UEasyParticleComponent_InitialDrawEffect::UEasyParticleComponent_InitialDrawEffect
          (UEasyParticleComponent_InitialDrawEffect *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialDrawEffect__6B_;
  return this;
}

// ~UEasyParticleComponent_InitialDrawEffect @ 14acaa990

void __thiscall
UEasyParticleComponent_InitialDrawEffect::~UEasyParticleComponent_InitialDrawEffect
          (UEasyParticleComponent_InitialDrawEffect *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponent__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14acad340

UClass * __cdecl UEasyParticleComponent_InitialDrawEffect::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InitialDrawEffect.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InitialDrawEffect",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InitialDrawEffect.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_InitialDrawEffect,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_InitialDrawEffect>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InitialDrawEffect>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InitialDrawEffect.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_InitialDrawEffect @ 14acae350

void __cdecl
UEasyParticleComponent_InitialDrawEffect::
StaticRegisterNativesUEasyParticleComponent_InitialDrawEffect(void)

{
  return;
}

// UEasyParticleComponent_InitialDrawEffect @ 14acb6d20

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_InitialDrawEffect * __thiscall
UEasyParticleComponent_InitialDrawEffect::UEasyParticleComponent_InitialDrawEffect
          (UEasyParticleComponent_InitialDrawEffect *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  UClass *pUVar2;
  FString local_18;
  
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialDrawEffect__6B_;
  pUVar2 = Z_Construct_UClass_UEasyParticleComponent_InitialDrawEffect_Runtime_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->_padding_ = (longlong)pUVar2;
  ::FString::FString(&local_18,"InitialDrawEffect");
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
  this->DrawEffect = None;
  return this;
}

