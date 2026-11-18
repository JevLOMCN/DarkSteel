// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 9

// StaticClass @ 14acb2570

UClass * __cdecl UEasyParticleComponent_Orbit_Runtime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_Orbit_Runtime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_Orbit_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_Orbit_Runtime.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_Orbit_Runtime,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_Orbit_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_Orbit_Runtime>,local_res8,
               UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_Orbit_Runtime.InnerSingleton;
}

// UEasyParticleComponent_Orbit_Runtime @ 14acb70b0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_Orbit_Runtime * __thiscall
UEasyParticleComponent_Orbit_Runtime::UEasyParticleComponent_Orbit_Runtime
          (UEasyParticleComponent_Orbit_Runtime *this,FVTableHelper *param_1)

{
  uint uVar1;
  
  UEasyParticleComponentRuntime::UEasyParticleComponentRuntime
            ((UEasyParticleComponentRuntime *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Orbit_Runtime__6B_;
  uVar1 = rand();
  (this->FactorInitialRotation).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  uVar1 = rand();
  (this->FactorRadius).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  uVar1 = rand();
  (this->FactorRotationRate).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  this->OrbitRotation = 0.0;
  return this;
}

// ~UEasyParticleComponent_Orbit_Runtime @ 14acb7c10

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleComponent_Orbit_Runtime::~UEasyParticleComponent_Orbit_Runtime
          (UEasyParticleComponent_Orbit_Runtime *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Orbit_Runtime__6B_;
  UEasyParticleComponentRuntime::~UEasyParticleComponentRuntime
            ((UEasyParticleComponentRuntime *)this);
  return;
}

// GetPrivateStaticClass @ 14acba420

UClass * __cdecl UEasyParticleComponent_Orbit_Runtime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_Orbit_Runtime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_Orbit_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_Orbit_Runtime.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_Orbit_Runtime,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_Orbit_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_Orbit_Runtime>,local_res8,
               UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_Orbit_Runtime.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_Orbit_Runtime @ 14acbd610

void __cdecl
UEasyParticleComponent_Orbit_Runtime::StaticRegisterNativesUEasyParticleComponent_Orbit_Runtime
          (void)

{
  return;
}

// UEasyParticleComponent_Orbit_Runtime @ 14acc1440

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_Orbit_Runtime * __thiscall
UEasyParticleComponent_Orbit_Runtime::UEasyParticleComponent_Orbit_Runtime
          (UEasyParticleComponent_Orbit_Runtime *this,FObjectInitializer *param_1)

{
  uint uVar1;
  
  UEasyParticleComponentRuntime::UEasyParticleComponentRuntime
            ((UEasyParticleComponentRuntime *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Orbit_Runtime__6B_;
  uVar1 = rand();
  (this->FactorInitialRotation).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  uVar1 = rand();
  (this->FactorRadius).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  uVar1 = rand();
  (this->FactorRotationRate).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  this->OrbitRotation = 0.0;
  return this;
}

// Init_Implementation @ 14acc5b20

void __thiscall
UEasyParticleComponent_Orbit_Runtime::Init_Implementation
          (UEasyParticleComponent_Orbit_Runtime *this,FGeometry *param_1)

{
  int iVar1;
  UEasyParticleState *pUVar2;
  TVector2<double>_u_0 TVar3;
  double dVar4;
  TVector2<double>_u_0 TVar5;
  double dVar6;
  UClass *pUVar7;
  FUIParticleFactorParam *pFVar8;
  UEasyParticleState *pUVar9;
  longlong lVar10;
  float fVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  FUIParticleFactorParam local_58 [2];
  
  lVar10 = this->_padding_;
  if (lVar10 != 0) {
    pUVar7 = Z_Construct_UClass_UEasyParticleComponent_Orbit_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)iVar1 * 8)
        == &pUVar7->_padding_)) goto LAB_14acc5b5b;
  }
  lVar10 = 0;
LAB_14acc5b5b:
  if (((UEasyParticleState *)this->_padding_ != (UEasyParticleState *)0x0) && (lVar10 != 0)) {
    pFVar8 = FUIParticleFactorParam::FUIParticleFactorParam
                       (local_58,&this->FactorInitialRotation,(UEasyParticleState *)this->_padding_)
    ;
    fVar11 = FEasyParticlePropertyFloat::GetValue_Float
                       ((FEasyParticlePropertyFloat *)(lVar10 + 0x50),pFVar8);
    pUVar2 = (UEasyParticleState *)this->_padding_;
    this->OrbitRotation = fVar11;
    pFVar8 = FUIParticleFactorParam::FUIParticleFactorParam(local_58,&this->FactorRadius,pUVar2);
    fVar11 = FEasyParticlePropertyFloat::GetValue_Float
                       ((FEasyParticlePropertyFloat *)(lVar10 + 0x1f8),pFVar8);
    __libm_sse2_sincos_();
    dVar6 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) * (double)fVar11;
    dVar4 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * (double)fVar11;
    pUVar9 = UEasyParticleState::GetParent((UEasyParticleState *)this->_padding_);
    if (pUVar9 == (UEasyParticleState *)0x0) {
      TVar3._8_4_ = SUB84(dVar4,0);
      TVar3._s_0.X = dVar6;
      TVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      (pUVar2->CurrentState).Position.field0_0x0 = TVar3;
    }
    else {
      dVar4 = dVar4 + (pUVar9->BackBufferState).Position.field0_0x0._s_0.Y;
      TVar5._8_4_ = SUB84(dVar4,0);
      TVar5._s_0.X = dVar6 + (pUVar9->BackBufferState).Position.field0_0x0._s_0.X;
      TVar5._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      (pUVar2->CurrentState).Position.field0_0x0 = TVar5;
    }
  }
  return;
}

// Reset_Implementation @ 14acc89c0

void __thiscall
UEasyParticleComponent_Orbit_Runtime::Reset_Implementation
          (UEasyParticleComponent_Orbit_Runtime *this)

{
  uint uVar1;
  
  this->OrbitRotation = 0.0;
  uVar1 = rand();
  (this->FactorRadius).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  uVar1 = rand();
  (this->FactorRotationRate).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return;
}

// Tick_Implementation @ 14acca0b0

void __thiscall
UEasyParticleComponent_Orbit_Runtime::Tick_Implementation
          (UEasyParticleComponent_Orbit_Runtime *this,FGeometry *param_1,float param_2)

{
  int iVar1;
  UEasyParticleState *pUVar2;
  TVector2<double>_u_0 TVar3;
  double dVar4;
  TVector2<double>_u_0 TVar5;
  double dVar6;
  UClass *pUVar7;
  FUIParticleFactorParam *pFVar8;
  UEasyParticleState *pUVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  FUIParticleFactorParam local_58 [2];
  
  lVar10 = this->_padding_;
  if (lVar10 != 0) {
    pUVar7 = Z_Construct_UClass_UEasyParticleComponent_Orbit_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)iVar1 * 8)
        == &pUVar7->_padding_)) goto LAB_14acca0f8;
  }
  lVar10 = 0;
LAB_14acca0f8:
  pUVar2 = (UEasyParticleState *)this->_padding_;
  if ((pUVar2 != (UEasyParticleState *)0x0) && (lVar10 != 0)) {
    pFVar8 = FUIParticleFactorParam::FUIParticleFactorParam(local_58,&this->FactorRadius,pUVar2);
    fVar11 = FEasyParticlePropertyFloat::GetValue_Float
                       ((FEasyParticlePropertyFloat *)(lVar10 + 0x1f8),pFVar8);
    pFVar8 = FUIParticleFactorParam::FUIParticleFactorParam
                       (local_58,&this->FactorRotationRate,(UEasyParticleState *)this->_padding_);
    fVar12 = FEasyParticlePropertyFloat::GetValue_Float
                       ((FEasyParticlePropertyFloat *)(lVar10 + 0x3a0),pFVar8);
    fVar12 = FGenericPlatformMath::Fmod(fVar12 * param_2 + this->OrbitRotation,__real_43b40000);
    this->OrbitRotation = fVar12;
    __libm_sse2_sincos_();
    dVar6 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) * (double)fVar11;
    dVar4 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * (double)fVar11;
    pUVar9 = UEasyParticleState::GetParent((UEasyParticleState *)this->_padding_);
    if (pUVar9 == (UEasyParticleState *)0x0) {
      TVar3._8_4_ = SUB84(dVar4,0);
      TVar3._s_0.X = dVar6;
      TVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      (pUVar2->BackBufferState).Position.field0_0x0 = TVar3;
    }
    else {
      dVar4 = dVar4 + (pUVar9->BackBufferState).Position.field0_0x0._s_0.Y;
      TVar5._8_4_ = SUB84(dVar4,0);
      TVar5._s_0.X = dVar6 + (pUVar9->BackBufferState).Position.field0_0x0._s_0.X;
      TVar5._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      (pUVar2->BackBufferState).Position.field0_0x0 = TVar5;
    }
  }
  return;
}

