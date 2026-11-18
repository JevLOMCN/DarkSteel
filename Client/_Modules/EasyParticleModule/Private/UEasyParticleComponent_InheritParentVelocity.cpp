// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 6

// StaticClass @ 14aca6990

UClass * __cdecl UEasyParticleComponent_InheritParentVelocity::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InheritParentVelocity.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InheritParentVelocity",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InheritParentVelocity.
                InnerSingleton,StaticRegisterNativesUEasyParticleComponent_InheritParentVelocity,
               0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_InheritParentVelocity>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InheritParentVelocity>,
               local_res8,UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InheritParentVelocity.InnerSingleton;
}

// UEasyParticleComponent_InheritParentVelocity @ 14aca9b50

UEasyParticleComponent_InheritParentVelocity * __thiscall
UEasyParticleComponent_InheritParentVelocity::UEasyParticleComponent_InheritParentVelocity
          (UEasyParticleComponent_InheritParentVelocity *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InheritParentVelocity__6B_;
  return this;
}

// ~UEasyParticleComponent_InheritParentVelocity @ 14acaa8a0

void __thiscall
UEasyParticleComponent_InheritParentVelocity::~UEasyParticleComponent_InheritParentVelocity
          (UEasyParticleComponent_InheritParentVelocity *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponent__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14acad040

UClass * __cdecl UEasyParticleComponent_InheritParentVelocity::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InheritParentVelocity.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InheritParentVelocity",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InheritParentVelocity.
                InnerSingleton,StaticRegisterNativesUEasyParticleComponent_InheritParentVelocity,
               0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_InheritParentVelocity>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InheritParentVelocity>,
               local_res8,UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InheritParentVelocity.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_InheritParentVelocity @ 14acae310

void __cdecl
UEasyParticleComponent_InheritParentVelocity::
StaticRegisterNativesUEasyParticleComponent_InheritParentVelocity(void)

{
  return;
}

// UEasyParticleComponent_InheritParentVelocity @ 14acb6a90

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_InheritParentVelocity * __thiscall
UEasyParticleComponent_InheritParentVelocity::UEasyParticleComponent_InheritParentVelocity
          (UEasyParticleComponent_InheritParentVelocity *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  UClass *pUVar2;
  FString local_18;
  
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InheritParentVelocity__6B_;
  pUVar2 = Z_Construct_UClass_UEasyParticleComponent_InheritParentVelocity_Runtime_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->_padding_ = (longlong)pUVar2;
  ::FString::FString(&local_18,"InheritParentVelocity");
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
  return this;
}

