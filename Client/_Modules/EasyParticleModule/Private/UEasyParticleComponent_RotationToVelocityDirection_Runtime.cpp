// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 8

// StaticClass @ 14acb2d40

UClass * __cdecl UEasyParticleComponent_RotationToVelocityDirection_Runtime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_RotationToVelocityDirection_Runtime.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",
               L"EasyParticleComponent_RotationToVelocityDirection_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_RotationToVelocityDirection_Runtime
                .InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_RotationToVelocityDirection_Runtime,0x38,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_RotationToVelocityDirection_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_RotationToVelocityDirection_Runtime>
               ,local_res8,UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_RotationToVelocityDirection_Runtime.
         InnerSingleton;
}

// UEasyParticleComponent_RotationToVelocityDirection_Runtime @ 14acb7270

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_RotationToVelocityDirection_Runtime * __thiscall
UEasyParticleComponent_RotationToVelocityDirection_Runtime::
UEasyParticleComponent_RotationToVelocityDirection_Runtime
          (UEasyParticleComponent_RotationToVelocityDirection_Runtime *this,FVTableHelper *param_1)

{
  UEasyParticleComponentRuntime::UEasyParticleComponentRuntime
            ((UEasyParticleComponentRuntime *)this,param_1);
  *(undefined ***)this = &___7UEasyParticleComponent_RotationToVelocityDirection_Runtime__6B_;
  return this;
}

// ~UEasyParticleComponent_RotationToVelocityDirection_Runtime @ 14acb7cf0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleComponent_RotationToVelocityDirection_Runtime::
~UEasyParticleComponent_RotationToVelocityDirection_Runtime
          (UEasyParticleComponent_RotationToVelocityDirection_Runtime *this)

{
  *(undefined ***)this = &___7UEasyParticleComponent_RotationToVelocityDirection_Runtime__6B_;
  UEasyParticleComponentRuntime::~UEasyParticleComponentRuntime
            ((UEasyParticleComponentRuntime *)this);
  return;
}

// GetPrivateStaticClass @ 14acba8a0

UClass * __cdecl
UEasyParticleComponent_RotationToVelocityDirection_Runtime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_RotationToVelocityDirection_Runtime.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",
               L"EasyParticleComponent_RotationToVelocityDirection_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_RotationToVelocityDirection_Runtime
                .InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_RotationToVelocityDirection_Runtime,0x38,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_RotationToVelocityDirection_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_RotationToVelocityDirection_Runtime>
               ,local_res8,UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_RotationToVelocityDirection_Runtime.
         InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_RotationToVelocityDirection_Runtime @ 14acbd670

void __cdecl
UEasyParticleComponent_RotationToVelocityDirection_Runtime::
StaticRegisterNativesUEasyParticleComponent_RotationToVelocityDirection_Runtime(void)

{
  return;
}

// UEasyParticleComponent_RotationToVelocityDirection_Runtime @ 14acc17d0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_RotationToVelocityDirection_Runtime * __thiscall
UEasyParticleComponent_RotationToVelocityDirection_Runtime::
UEasyParticleComponent_RotationToVelocityDirection_Runtime
          (UEasyParticleComponent_RotationToVelocityDirection_Runtime *this,
          FObjectInitializer *param_1)

{
  UEasyParticleComponentRuntime::UEasyParticleComponentRuntime
            ((UEasyParticleComponentRuntime *)this,param_1);
  *(undefined ***)this = &___7UEasyParticleComponent_RotationToVelocityDirection_Runtime__6B_;
  return this;
}

// PostTick_Implementation @ 14acc7730

void __thiscall
UEasyParticleComponent_RotationToVelocityDirection_Runtime::PostTick_Implementation
          (UEasyParticleComponent_RotationToVelocityDirection_Runtime *this,FGeometry *param_1,
          float param_2)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  longlong lVar4;
  double dVar5;
  
  lVar4 = *(longlong *)&this->field_0x28;
  if (lVar4 != 0) {
    pUVar3 = Z_Construct_UClass_UEasyParticleComponent_RotationToVelocityDirection_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14acc776b;
  }
  lVar4 = 0;
LAB_14acc776b:
  lVar2 = *(longlong *)&this->field_0x30;
  if ((lVar2 != 0) && (lVar4 != 0)) {
    dVar5 = FGenericPlatformMath::Atan2
                      (*(double *)(lVar2 + 0x170) - *(double *)(lVar2 + 0xe8),
                       *(double *)(lVar2 + 0x168) - *(double *)(lVar2 + 0xe0));
    *(float *)(lVar2 + 0x188) = (float)dVar5;
  }
  return;
}

// Reset_Implementation @ 14acc8aa0

void __thiscall
UEasyParticleComponent_RotationToVelocityDirection_Runtime::Reset_Implementation
          (UEasyParticleComponent_RotationToVelocityDirection_Runtime *this)

{
  return;
}

