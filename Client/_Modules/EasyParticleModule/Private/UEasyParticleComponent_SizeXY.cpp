// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 6

// StaticClass @ 14acb37d0

UClass * __cdecl UEasyParticleComponent_SizeXY::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_SizeXY.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_SizeXY",
               &Z_Registration_Info_UClass_UEasyParticleComponent_SizeXY.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_SizeXY,0x3a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_SizeXY>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_SizeXY>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_SizeXY.InnerSingleton;
}

// UEasyParticleComponent_SizeXY @ 14acb7410

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_SizeXY * __thiscall
UEasyParticleComponent_SizeXY::UEasyParticleComponent_SizeXY
          (UEasyParticleComponent_SizeXY *this,FVTableHelper *param_1)

{
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_SizeXY__6B_;
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->SizeX);
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->SizeY);
  return this;
}

// ~UEasyParticleComponent_SizeXY @ 14acb7df0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleComponent_SizeXY::~UEasyParticleComponent_SizeXY(UEasyParticleComponent_SizeXY *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponent_SizeXY__6B_;
  FEasyParticlePropertyFloat::~FEasyParticlePropertyFloat(&this->SizeY);
  FEasyParticlePropertyFloat::~FEasyParticlePropertyFloat(&this->SizeX);
  UEasyParticleComponent::~UEasyParticleComponent((UEasyParticleComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14acbad20

UClass * __cdecl UEasyParticleComponent_SizeXY::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_SizeXY.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_SizeXY",
               &Z_Registration_Info_UClass_UEasyParticleComponent_SizeXY.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_SizeXY,0x3a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_SizeXY>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_SizeXY>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_SizeXY.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_SizeXY @ 14acbd6d0

void __cdecl UEasyParticleComponent_SizeXY::StaticRegisterNativesUEasyParticleComponent_SizeXY(void)

{
  return;
}

// UEasyParticleComponent_SizeXY @ 14acc1b70

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_SizeXY * __thiscall
UEasyParticleComponent_SizeXY::UEasyParticleComponent_SizeXY
          (UEasyParticleComponent_SizeXY *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  UClass *pUVar2;
  FString local_18;
  
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_SizeXY__6B_;
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->SizeX);
  FEasyParticlePropertyFloat::FEasyParticlePropertyFloat(&this->SizeY);
  pUVar2 = Z_Construct_UClass_UEasyParticleComponent_SizeXY_Runtime_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->_padding_ = (longlong)pUVar2;
  ::FString::FString(&local_18,"SizeXY");
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
  (this->SizeX).Type = Float;
  (this->SizeX).FloatValue = 200.0;
  (this->SizeY).Type = Float;
  (this->SizeY).FloatValue = 200.0;
  return this;
}

