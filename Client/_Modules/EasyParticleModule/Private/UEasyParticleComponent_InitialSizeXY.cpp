// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 6

// StaticClass @ 14acb1730

UClass * __cdecl UEasyParticleComponent_InitialSizeXY::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InitialSizeXY.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InitialSizeXY",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InitialSizeXY.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_InitialSizeXY,0x3a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_InitialSizeXY>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InitialSizeXY>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InitialSizeXY.InnerSingleton;
}

// UEasyParticleComponent_InitialSizeXY @ 14acb6e20

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_InitialSizeXY * __thiscall
UEasyParticleComponent_InitialSizeXY::UEasyParticleComponent_InitialSizeXY
          (UEasyParticleComponent_InitialSizeXY *this,FVTableHelper *param_1)

{
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialSizeXY__6B_;
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->InitialSizeX);
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->InitialSizeY);
  return this;
}

// ~UEasyParticleComponent_InitialSizeXY @ 14acb7a70

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleComponent_InitialSizeXY::~UEasyParticleComponent_InitialSizeXY
          (UEasyParticleComponent_InitialSizeXY *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialSizeXY__6B_;
  FEasyParticlePropertyFloat::~FEasyParticlePropertyFloat(&this->InitialSizeY);
  FEasyParticlePropertyFloat::~FEasyParticlePropertyFloat(&this->InitialSizeX);
  UEasyParticleComponent::~UEasyParticleComponent((UEasyParticleComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14acb9d60

UClass * __cdecl UEasyParticleComponent_InitialSizeXY::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InitialSizeXY.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InitialSizeXY",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InitialSizeXY.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_InitialSizeXY,0x3a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_InitialSizeXY>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InitialSizeXY>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InitialSizeXY.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_InitialSizeXY @ 14acbd580

void __cdecl
UEasyParticleComponent_InitialSizeXY::StaticRegisterNativesUEasyParticleComponent_InitialSizeXY
          (void)

{
  return;
}

// UEasyParticleComponent_InitialSizeXY @ 14acc0da0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_InitialSizeXY * __thiscall
UEasyParticleComponent_InitialSizeXY::UEasyParticleComponent_InitialSizeXY
          (UEasyParticleComponent_InitialSizeXY *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  UClass *pUVar2;
  FString local_18;
  
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialSizeXY__6B_;
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->InitialSizeX);
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->InitialSizeY);
  pUVar2 = Z_Construct_UClass_UEasyParticleComponent_InitialSizeXY_Runtime_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->_padding_ = (longlong)pUVar2;
  ::FString::FString(&local_18,"InitialSizeXY");
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
  (this->InitialSizeX).Type = Float;
  (this->InitialSizeX).FloatValue = 200.0;
  (this->InitialSizeY).Type = Float;
  (this->InitialSizeY).FloatValue = 200.0;
  return this;
}

