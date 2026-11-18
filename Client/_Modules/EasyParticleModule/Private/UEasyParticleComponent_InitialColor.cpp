// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 6

// StaticClass @ 14aca6b90

UClass * __cdecl UEasyParticleComponent_InitialColor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InitialColor.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InitialColor",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InitialColor.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_InitialColor,0x6b0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_InitialColor>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InitialColor>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InitialColor.InnerSingleton;
}

// UEasyParticleComponent_InitialColor @ 14aca9bc0

UEasyParticleComponent_InitialColor * __thiscall
UEasyParticleComponent_InitialColor::UEasyParticleComponent_InitialColor
          (UEasyParticleComponent_InitialColor *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialColor__6B_;
  FEasyParticlePropertyColor::FEasyParticlePropertyColor(&this->InitialColor);
  return this;
}

// ~UEasyParticleComponent_InitialColor @ 14acaa900

void __thiscall
UEasyParticleComponent_InitialColor::~UEasyParticleComponent_InitialColor
          (UEasyParticleComponent_InitialColor *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialColor__6B_;
  FEasyParticleLinearColorCurve::~FEasyParticleLinearColorCurve
            (&(this->InitialColor).ColorCurveRangeValue.Max);
  FEasyParticleLinearColorCurve::~FEasyParticleLinearColorCurve
            (&(this->InitialColor).ColorCurveRangeValue.Min);
  FEasyParticleLinearColorCurve::~FEasyParticleLinearColorCurve
            (&(this->InitialColor).ColorCurveValue);
  this->_padding_ = (longlong)&___7UEasyParticleComponent__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14acad1c0

UClass * __cdecl UEasyParticleComponent_InitialColor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InitialColor.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InitialColor",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InitialColor.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_InitialColor,0x6b0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_InitialColor>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InitialColor>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InitialColor.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_InitialColor @ 14acae330

void __cdecl
UEasyParticleComponent_InitialColor::StaticRegisterNativesUEasyParticleComponent_InitialColor(void)

{
  return;
}

// UEasyParticleComponent_InitialColor @ 14acb6b90

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_InitialColor * __thiscall
UEasyParticleComponent_InitialColor::UEasyParticleComponent_InitialColor
          (UEasyParticleComponent_InitialColor *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  UClass *pUVar2;
  FString local_18;
  
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialColor__6B_;
  FEasyParticlePropertyColor::FEasyParticlePropertyColor(&this->InitialColor);
  pUVar2 = Z_Construct_UClass_UEasyParticleComponent_InitialColor_Runtime_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->_padding_ = (longlong)pUVar2;
  ::FString::FString(&local_18,"InitialColor");
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
  (this->InitialColor).Type = Color;
  (this->InitialColor).ColorValue.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  return this;
}

