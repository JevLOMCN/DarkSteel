// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 8

// StaticClass @ 14acb2940

UClass * __cdecl UEasyParticleComponent_RadialAcceleration_Runtime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_RadialAcceleration_Runtime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_RadialAcceleration_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_RadialAcceleration_Runtime.
                InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_RadialAcceleration_Runtime,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_RadialAcceleration_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_RadialAcceleration_Runtime>,
               local_res8,UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_RadialAcceleration_Runtime.InnerSingleton
  ;
}

// UEasyParticleComponent_RadialAcceleration_Runtime @ 14acb7170

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_RadialAcceleration_Runtime * __thiscall
UEasyParticleComponent_RadialAcceleration_Runtime::UEasyParticleComponent_RadialAcceleration_Runtime
          (UEasyParticleComponent_RadialAcceleration_Runtime *this,FVTableHelper *param_1)

{
  uint uVar1;
  
  UEasyParticleComponentRuntime::UEasyParticleComponentRuntime
            ((UEasyParticleComponentRuntime *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_RadialAcceleration_Runtime__6B_;
  uVar1 = rand();
  (this->Factor).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return this;
}

// ~UEasyParticleComponent_RadialAcceleration_Runtime @ 14acb7c60

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleComponent_RadialAcceleration_Runtime::
~UEasyParticleComponent_RadialAcceleration_Runtime
          (UEasyParticleComponent_RadialAcceleration_Runtime *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponent_RadialAcceleration_Runtime__6B_;
  UEasyParticleComponentRuntime::~UEasyParticleComponentRuntime
            ((UEasyParticleComponentRuntime *)this);
  return;
}

// GetPrivateStaticClass @ 14acba5a0

UClass * __cdecl UEasyParticleComponent_RadialAcceleration_Runtime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_RadialAcceleration_Runtime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_RadialAcceleration_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_RadialAcceleration_Runtime.
                InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_RadialAcceleration_Runtime,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_RadialAcceleration_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_RadialAcceleration_Runtime>,
               local_res8,UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_RadialAcceleration_Runtime.InnerSingleton
  ;
}

// StaticRegisterNativesUEasyParticleComponent_RadialAcceleration_Runtime @ 14acbd630

void __cdecl
UEasyParticleComponent_RadialAcceleration_Runtime::
StaticRegisterNativesUEasyParticleComponent_RadialAcceleration_Runtime(void)

{
  return;
}

// UEasyParticleComponent_RadialAcceleration_Runtime @ 14acc15a0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_RadialAcceleration_Runtime * __thiscall
UEasyParticleComponent_RadialAcceleration_Runtime::UEasyParticleComponent_RadialAcceleration_Runtime
          (UEasyParticleComponent_RadialAcceleration_Runtime *this,FObjectInitializer *param_1)

{
  uint uVar1;
  
  UEasyParticleComponentRuntime::UEasyParticleComponentRuntime
            ((UEasyParticleComponentRuntime *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_RadialAcceleration_Runtime__6B_;
  uVar1 = rand();
  (this->Factor).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return this;
}

// Reset_Implementation @ 14acc8a20

void __thiscall
UEasyParticleComponent_RadialAcceleration_Runtime::Reset_Implementation
          (UEasyParticleComponent_RadialAcceleration_Runtime *this)

{
  uint uVar1;
  
  uVar1 = rand();
  (this->Factor).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return;
}

// Tick_Implementation @ 14acca210

void __thiscall
UEasyParticleComponent_RadialAcceleration_Runtime::Tick_Implementation
          (UEasyParticleComponent_RadialAcceleration_Runtime *this,FGeometry *param_1,float param_2)

{
  int iVar1;
  UEasyParticleState *pUVar2;
  TVector2<double>_u_0 TVar3;
  UClass *pUVar4;
  FUIParticleFactorParam *pFVar5;
  longlong lVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  FUIParticleFactorParam local_48 [2];
  
  lVar6 = this->_padding_;
  if (lVar6 != 0) {
    pUVar4 = Z_Construct_UClass_UEasyParticleComponent_RadialAcceleration_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14acca258;
  }
  lVar6 = 0;
LAB_14acca258:
  pUVar2 = (UEasyParticleState *)this->_padding_;
  if ((pUVar2 != (UEasyParticleState *)0x0) && (lVar6 != 0)) {
    pFVar5 = FUIParticleFactorParam::FUIParticleFactorParam(local_48,&this->Factor,pUVar2);
    fVar7 = FEasyParticlePropertyFloat::GetValue_Float
                      ((FEasyParticlePropertyFloat *)(lVar6 + 0x50),pFVar5);
    dVar9 = (pUVar2->BackBufferState).Position.field0_0x0._s_0.X -
            (pUVar2->InitialState).Position.field0_0x0._s_0.X;
    dVar10 = (pUVar2->BackBufferState).Position.field0_0x0._s_0.Y -
             (pUVar2->InitialState).Position.field0_0x0._s_0.Y;
    dVar8 = dVar10 * dVar10 + dVar9 * dVar9;
    if (dVar8 <= __real_3e45798ee0000000) {
      dVar9 = 0.0;
      dVar10 = 0.0;
    }
    else {
      dVar8 = __real_3ff0000000000000 / SQRT(dVar8);
      dVar9 = dVar9 * dVar8;
      dVar10 = dVar10 * dVar8;
    }
    dVar8 = (double)fVar7 * dVar10 * (double)param_2 +
            (pUVar2->BackBufferState).Velocity.field0_0x0._s_0.Y;
    TVar3._8_4_ = SUB84(dVar8,0);
    TVar3._s_0.X = (double)fVar7 * dVar9 * (double)param_2 +
                   (pUVar2->BackBufferState).Velocity.field0_0x0._s_0.X;
    TVar3._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    (pUVar2->BackBufferState).Velocity.field0_0x0 = TVar3;
  }
  return;
}

