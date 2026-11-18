// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 6

// StaticClass @ 14acb32b0

UClass * __cdecl UEasyParticleComponent_Size::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_Size.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_Size",
               &Z_Registration_Info_UClass_UEasyParticleComponent_Size.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_Size,0x1f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_Size>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_Size>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_Size.InnerSingleton;
}

// UEasyParticleComponent_Size @ 14acb7330

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_Size * __thiscall
UEasyParticleComponent_Size::UEasyParticleComponent_Size
          (UEasyParticleComponent_Size *this,FVTableHelper *param_1)

{
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Size__6B_;
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->Size);
  return this;
}

// ~UEasyParticleComponent_Size @ 14acb7d60

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleComponent_Size::~UEasyParticleComponent_Size(UEasyParticleComponent_Size *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Size__6B_;
  FEasyParticlePropertyFloat::~FEasyParticlePropertyFloat(&this->Size);
  UEasyParticleComponent::~UEasyParticleComponent((UEasyParticleComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14acbaae0

UClass * __cdecl UEasyParticleComponent_Size::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_Size.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_Size",
               &Z_Registration_Info_UClass_UEasyParticleComponent_Size.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_Size,0x1f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_Size>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_Size>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_Size.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_Size @ 14acbd6a0

void __cdecl UEasyParticleComponent_Size::StaticRegisterNativesUEasyParticleComponent_Size(void)

{
  return;
}

// UEasyParticleComponent_Size @ 14acc1930

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_Size * __thiscall
UEasyParticleComponent_Size::UEasyParticleComponent_Size
          (UEasyParticleComponent_Size *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  UClass *pUVar2;
  FString local_18;
  
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Size__6B_;
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->Size);
  pUVar2 = Z_Construct_UClass_UEasyParticleComponent_Size_Runtime_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->_padding_ = (longlong)pUVar2;
  ::FString::FString(&local_18,"Size");
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
  (this->Size).Type = Float;
  (this->Size).FloatValue = 200.0;
  return this;
}

