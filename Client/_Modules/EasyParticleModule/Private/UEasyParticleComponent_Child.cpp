// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 8

// StaticClass @ 14aca5390

UClass * __cdecl UEasyParticleComponent_Child::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_Child.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_Child",
               &Z_Registration_Info_UClass_UEasyParticleComponent_Child.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_Child,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_Child>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_Child>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_Child.InnerSingleton;
}

// UEasyParticleComponent_Child @ 14aca9820

UEasyParticleComponent_Child * __thiscall
UEasyParticleComponent_Child::UEasyParticleComponent_Child
          (UEasyParticleComponent_Child *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Child__6B_;
  return this;
}

// ~UEasyParticleComponent_Child @ 14acaa630

void __thiscall
UEasyParticleComponent_Child::~UEasyParticleComponent_Child(UEasyParticleComponent_Child *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponent__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14acac8c0

UClass * __cdecl UEasyParticleComponent_Child::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_Child.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_Child",
               &Z_Registration_Info_UClass_UEasyParticleComponent_Child.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_Child,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_Child>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_Child>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_Child.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_Child @ 14acae270

void __cdecl UEasyParticleComponent_Child::StaticRegisterNativesUEasyParticleComponent_Child(void)

{
  return;
}

// UEasyParticleComponent_Child @ 14acb6460

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_Child * __thiscall
UEasyParticleComponent_Child::UEasyParticleComponent_Child
          (UEasyParticleComponent_Child *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  UClass *pUVar2;
  FString local_18;
  
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Child__6B_;
  pUVar2 = Z_Construct_UClass_UEasyParticleComponent_Child_Runtime_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->_padding_ = (longlong)pUVar2;
  ::FString::FString(&local_18,"Child");
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

// GetAsset @ 14acb9830

UEasyParticleAsset * __thiscall
UEasyParticleComponent_Child::GetAsset(UEasyParticleComponent_Child *this)

{
  return this->Asset;
}

// SetAsset @ 14acbd550

void __thiscall
UEasyParticleComponent_Child::SetAsset
          (UEasyParticleComponent_Child *this,UEasyParticleAsset *param_1)

{
  this->Asset = param_1;
  return;
}

