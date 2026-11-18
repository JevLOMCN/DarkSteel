// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 6

// StaticClass @ 14acb2c80

UClass * __cdecl UEasyParticleComponent_RotationToVelocityDirection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_RotationToVelocityDirection.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_RotationToVelocityDirection",
               &Z_Registration_Info_UClass_UEasyParticleComponent_RotationToVelocityDirection.
                InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_RotationToVelocityDirection,0x50,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_RotationToVelocityDirection>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_RotationToVelocityDirection>,
               local_res8,UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_RotationToVelocityDirection.
         InnerSingleton;
}

// UEasyParticleComponent_RotationToVelocityDirection @ 14acb7240

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_RotationToVelocityDirection * __thiscall
UEasyParticleComponent_RotationToVelocityDirection::
UEasyParticleComponent_RotationToVelocityDirection
          (UEasyParticleComponent_RotationToVelocityDirection *this,FVTableHelper *param_1)

{
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  *(undefined ***)this = &___7UEasyParticleComponent_RotationToVelocityDirection__6B_;
  return this;
}

// ~UEasyParticleComponent_RotationToVelocityDirection @ 14acb7cd0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleComponent_RotationToVelocityDirection::
~UEasyParticleComponent_RotationToVelocityDirection
          (UEasyParticleComponent_RotationToVelocityDirection *this)

{
  *(undefined ***)this = &___7UEasyParticleComponent_RotationToVelocityDirection__6B_;
  UEasyParticleComponent::~UEasyParticleComponent((UEasyParticleComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14acba7e0

UClass * __cdecl UEasyParticleComponent_RotationToVelocityDirection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_RotationToVelocityDirection.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_RotationToVelocityDirection",
               &Z_Registration_Info_UClass_UEasyParticleComponent_RotationToVelocityDirection.
                InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_RotationToVelocityDirection,0x50,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_RotationToVelocityDirection>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_RotationToVelocityDirection>,
               local_res8,UEasyParticleComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_RotationToVelocityDirection.
         InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_RotationToVelocityDirection @ 14acbd660

void __cdecl
UEasyParticleComponent_RotationToVelocityDirection::
StaticRegisterNativesUEasyParticleComponent_RotationToVelocityDirection(void)

{
  return;
}

// UEasyParticleComponent_RotationToVelocityDirection @ 14acc1710

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_RotationToVelocityDirection * __thiscall
UEasyParticleComponent_RotationToVelocityDirection::
UEasyParticleComponent_RotationToVelocityDirection
          (UEasyParticleComponent_RotationToVelocityDirection *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  UClass *pUVar2;
  FString local_18;
  
  UEasyParticleComponent::UEasyParticleComponent((UEasyParticleComponent *)this,param_1);
  *(undefined ***)this = &___7UEasyParticleComponent_RotationToVelocityDirection__6B_;
  pUVar2 = Z_Construct_UClass_UEasyParticleComponent_RotationToVelocityDirection_Runtime_NoRegister
                     ();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  *(UClass **)&this->field_0x30 = pUVar2;
  ::FString::FString(&local_18,"RotationToVelocityDirection");
  puVar1 = &this->field_0x38;
  if ((FString *)puVar1 != &local_18) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = local_18.Data.AllocatorInstance.Data;
    *(int *)&this->field_0x40 = local_18.Data.ArrayNum;
    *(int *)&this->field_0x44 = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

