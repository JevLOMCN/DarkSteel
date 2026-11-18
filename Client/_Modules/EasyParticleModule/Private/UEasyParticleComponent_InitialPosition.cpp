// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 6

// StaticClass @ 14aca4140

UClass * __cdecl UEasyParticleComponent_InitialPosition::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InitialPosition.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InitialPosition",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InitialPosition.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_InitialPosition,0x3a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_InitialPosition>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InitialPosition>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InitialPosition.InnerSingleton;
}

// UEasyParticleComponent_InitialPosition @ 14aca9de0

UEasyParticleComponent_InitialPosition * __thiscall
UEasyParticleComponent_InitialPosition::UEasyParticleComponent_InitialPosition
          (UEasyParticleComponent_InitialPosition *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialPosition__6B_;
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->InitialPositionX);
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->InitialPositionY);
  return this;
}

// ~UEasyParticleComponent_InitialPosition @ 14acaaa70

void __thiscall
UEasyParticleComponent_InitialPosition::~UEasyParticleComponent_InitialPosition
          (UEasyParticleComponent_InitialPosition *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialPosition__6B_;
  FEasyParticlePropertyFloat::~FEasyParticlePropertyFloat(&this->InitialPositionY);
  FEasyParticlePropertyFloat::~FEasyParticlePropertyFloat(&this->InitialPositionX);
  this->_padding_ = (longlong)&___7UEasyParticleComponent__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14acad640

UClass * __cdecl UEasyParticleComponent_InitialPosition::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InitialPosition.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InitialPosition",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InitialPosition.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_InitialPosition,0x3a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_InitialPosition>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InitialPosition>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InitialPosition.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_InitialPosition @ 14acae390

void __cdecl
UEasyParticleComponent_InitialPosition::StaticRegisterNativesUEasyParticleComponent_InitialPosition
          (void)

{
  return;
}

// UEasyParticleComponent_InitialPosition @ 14acc07c0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_InitialPosition * __thiscall
UEasyParticleComponent_InitialPosition::UEasyParticleComponent_InitialPosition
          (UEasyParticleComponent_InitialPosition *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  UClass *pUVar2;
  FString local_18;
  
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialPosition__6B_;
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->InitialPositionX);
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->InitialPositionY);
  pUVar2 = Z_Construct_UClass_UEasyParticleComponent_InitialPosition_Runtime_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->_padding_ = (longlong)pUVar2;
  ::FString::FString(&local_18,"InitialPosition");
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
  (this->InitialPositionX).Type = FloatRange;
  (this->InitialPositionX).FloatRangeValue.Min = -100.0;
  (this->InitialPositionX).FloatRangeValue.Max = 100.0;
  (this->InitialPositionY).Type = FloatRange;
  (this->InitialPositionY).FloatRangeValue.Min = -100.0;
  (this->InitialPositionY).FloatRangeValue.Max = 100.0;
  return this;
}

