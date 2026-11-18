// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 6

// StaticClass @ 14aca5c30

UClass * __cdecl UEasyParticleComponent_Color::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_Color.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_Color",
               &Z_Registration_Info_UClass_UEasyParticleComponent_Color.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_Color,0x6b0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_Color>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_Color>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_Color.InnerSingleton;
}

// UEasyParticleComponent_Color @ 14aca98a0

UEasyParticleComponent_Color * __thiscall
UEasyParticleComponent_Color::UEasyParticleComponent_Color
          (UEasyParticleComponent_Color *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Color__6B_;
  FEasyParticlePropertyColor::FEasyParticlePropertyColor(&this->InitialColor);
  return this;
}

// ~UEasyParticleComponent_Color @ 14acaa6c0

void __thiscall
UEasyParticleComponent_Color::~UEasyParticleComponent_Color(UEasyParticleComponent_Color *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Color__6B_;
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

// GetPrivateStaticClass @ 14acaca40

UClass * __cdecl UEasyParticleComponent_Color::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_Color.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_Color",
               &Z_Registration_Info_UClass_UEasyParticleComponent_Color.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_Color,0x6b0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_Color>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_Color>,local_res8,
               UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_Color.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_Color @ 14acae290

void __cdecl UEasyParticleComponent_Color::StaticRegisterNativesUEasyParticleComponent_Color(void)

{
  return;
}

// UEasyParticleComponent_Color @ 14acb6560

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_Color * __thiscall
UEasyParticleComponent_Color::UEasyParticleComponent_Color
          (UEasyParticleComponent_Color *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  UClass *pUVar2;
  FString local_18;
  
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Color__6B_;
  FEasyParticlePropertyColor::FEasyParticlePropertyColor(&this->InitialColor);
  pUVar2 = Z_Construct_UClass_UEasyParticleComponent_Color_Runtime_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->_padding_ = (longlong)pUVar2;
  ::FString::FString(&local_18,"Color");
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

