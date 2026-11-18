// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 8

// StaticClass @ 14acb1e70

UClass * __cdecl UEasyParticleComponent_InitialVelocity_Runtime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InitialVelocity_Runtime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InitialVelocity_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InitialVelocity_Runtime.
                InnerSingleton,StaticRegisterNativesUEasyParticleComponent_InitialVelocity_Runtime,
               0x40,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_InitialVelocity_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InitialVelocity_Runtime>,
               local_res8,UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InitialVelocity_Runtime.InnerSingleton;
}

// UEasyParticleComponent_InitialVelocity_Runtime @ 14acb6f70

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_InitialVelocity_Runtime * __thiscall
UEasyParticleComponent_InitialVelocity_Runtime::UEasyParticleComponent_InitialVelocity_Runtime
          (UEasyParticleComponent_InitialVelocity_Runtime *this,FVTableHelper *param_1)

{
  uint uVar1;
  
  UEasyParticleComponentRuntime::UEasyParticleComponentRuntime
            ((UEasyParticleComponentRuntime *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialVelocity_Runtime__6B_;
  uVar1 = rand();
  (this->FactorSpeed).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  uVar1 = rand();
  (this->FactorDirection).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return this;
}

// ~UEasyParticleComponent_InitialVelocity_Runtime @ 14acb7b50

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleComponent_InitialVelocity_Runtime::~UEasyParticleComponent_InitialVelocity_Runtime
          (UEasyParticleComponent_InitialVelocity_Runtime *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialVelocity_Runtime__6B_;
  UEasyParticleComponentRuntime::~UEasyParticleComponentRuntime
            ((UEasyParticleComponentRuntime *)this);
  return;
}

// GetPrivateStaticClass @ 14acba120

UClass * __cdecl UEasyParticleComponent_InitialVelocity_Runtime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InitialVelocity_Runtime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InitialVelocity_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InitialVelocity_Runtime.
                InnerSingleton,StaticRegisterNativesUEasyParticleComponent_InitialVelocity_Runtime,
               0x40,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_InitialVelocity_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InitialVelocity_Runtime>,
               local_res8,UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InitialVelocity_Runtime.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_InitialVelocity_Runtime @ 14acbd5d0

void __cdecl
UEasyParticleComponent_InitialVelocity_Runtime::
StaticRegisterNativesUEasyParticleComponent_InitialVelocity_Runtime(void)

{
  return;
}

// UEasyParticleComponent_InitialVelocity_Runtime @ 14acc1170

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_InitialVelocity_Runtime * __thiscall
UEasyParticleComponent_InitialVelocity_Runtime::UEasyParticleComponent_InitialVelocity_Runtime
          (UEasyParticleComponent_InitialVelocity_Runtime *this,FObjectInitializer *param_1)

{
  uint uVar1;
  
  UEasyParticleComponentRuntime::UEasyParticleComponentRuntime
            ((UEasyParticleComponentRuntime *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialVelocity_Runtime__6B_;
  uVar1 = rand();
  (this->FactorSpeed).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  uVar1 = rand();
  (this->FactorDirection).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return this;
}

// Init_Implementation @ 14acc59a0

void __thiscall
UEasyParticleComponent_InitialVelocity_Runtime::Init_Implementation
          (UEasyParticleComponent_InitialVelocity_Runtime *this,FGeometry *param_1)

{
  int iVar1;
  UEasyParticleState *pUVar2;
  TVector2<double>_u_0 TVar3;
  UClass *pUVar4;
  FUIParticleFactorParam *pFVar5;
  longlong lVar6;
  float fVar7;
  double extraout_XMM0_Qa;
  double dVar8;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  FUIParticleFactorParam local_38;
  
  lVar6 = this->_padding_;
  if (lVar6 != 0) {
    pUVar4 = Z_Construct_UClass_UEasyParticleComponent_InitialVelocity_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14acc59e0;
  }
  lVar6 = 0;
LAB_14acc59e0:
  pUVar2 = (UEasyParticleState *)this->_padding_;
  if ((pUVar2 != (UEasyParticleState *)0x0) && (lVar6 != 0)) {
    pFVar5 = FUIParticleFactorParam::FUIParticleFactorParam(&local_38,&this->FactorSpeed,pUVar2);
    fVar7 = FEasyParticlePropertyFloat::GetValue_Float
                      ((FEasyParticlePropertyFloat *)(lVar6 + 0x50),pFVar5);
    pFVar5 = FUIParticleFactorParam::FUIParticleFactorParam
                       (&local_38,&this->FactorDirection,(UEasyParticleState *)this->_padding_);
    FEasyParticlePropertyFloat::GetValue_Float((FEasyParticlePropertyFloat *)(lVar6 + 0x1f8),pFVar5)
    ;
    __libm_sse2_sincos_();
    dVar8 = extraout_XMM0_Qa * (double)fVar7;
    TVar3._8_4_ = SUB84(dVar8,0);
    TVar3._s_0.X = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) * (double)fVar7;
    TVar3._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    (pUVar2->InitialState).Velocity.field0_0x0 = TVar3;
  }
  return;
}

// Reset_Implementation @ 14acc8920

void __thiscall
UEasyParticleComponent_InitialVelocity_Runtime::Reset_Implementation
          (UEasyParticleComponent_InitialVelocity_Runtime *this)

{
  uint uVar1;
  
  uVar1 = rand();
  (this->FactorSpeed).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  uVar1 = rand();
  (this->FactorDirection).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return;
}

