// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 6

// StaticClass @ 14acb1fb0

UClass * __cdecl UEasyParticleComponent_InitialZOrderOffset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InitialZOrderOffset.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InitialZOrderOffset",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InitialZOrderOffset.InnerSingleton
               ,StaticRegisterNativesUEasyParticleComponent_InitialZOrderOffset,0x1f8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_InitialZOrderOffset>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InitialZOrderOffset>,local_res8
               ,UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InitialZOrderOffset.InnerSingleton;
}

// UEasyParticleComponent_InitialZOrderOffset @ 14acb6fe0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_InitialZOrderOffset * __thiscall
UEasyParticleComponent_InitialZOrderOffset::UEasyParticleComponent_InitialZOrderOffset
          (UEasyParticleComponent_InitialZOrderOffset *this,FVTableHelper *param_1)

{
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialZOrderOffset__6B_;
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->InitialZOrderOffset);
  return this;
}

// ~UEasyParticleComponent_InitialZOrderOffset @ 14acb7b70

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleComponent_InitialZOrderOffset::~UEasyParticleComponent_InitialZOrderOffset
          (UEasyParticleComponent_InitialZOrderOffset *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialZOrderOffset__6B_;
  FEasyParticlePropertyFloat::~FEasyParticlePropertyFloat(&this->InitialZOrderOffset);
  UEasyParticleComponent::~UEasyParticleComponent((UEasyParticleComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14acba1e0

UClass * __cdecl UEasyParticleComponent_InitialZOrderOffset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InitialZOrderOffset.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InitialZOrderOffset",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InitialZOrderOffset.InnerSingleton
               ,StaticRegisterNativesUEasyParticleComponent_InitialZOrderOffset,0x1f8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_InitialZOrderOffset>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InitialZOrderOffset>,local_res8
               ,UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InitialZOrderOffset.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_InitialZOrderOffset @ 14acbd5e0

void __cdecl
UEasyParticleComponent_InitialZOrderOffset::
StaticRegisterNativesUEasyParticleComponent_InitialZOrderOffset(void)

{
  return;
}

// UEasyParticleComponent_InitialZOrderOffset @ 14acc11e0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_InitialZOrderOffset * __thiscall
UEasyParticleComponent_InitialZOrderOffset::UEasyParticleComponent_InitialZOrderOffset
          (UEasyParticleComponent_InitialZOrderOffset *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  UClass *pUVar2;
  FString local_18;
  
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialZOrderOffset__6B_;
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->InitialZOrderOffset);
  pUVar2 = Z_Construct_UClass_UEasyParticleComponent_InitialZOrderOffset_Runtime_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->_padding_ = (longlong)pUVar2;
  ::FString::FString(&local_18,"InitialZOrderOffset");
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
  (this->InitialZOrderOffset).Type = Float;
  (this->InitialZOrderOffset).FloatValue = 1.0;
  return this;
}

