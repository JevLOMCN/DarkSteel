// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 8

// StaticClass @ 14acb35e0

UClass * __cdecl UEasyParticleComponent_SizeScaleBySpeed_Runtime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_SizeScaleBySpeed_Runtime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_SizeScaleBySpeed_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_SizeScaleBySpeed_Runtime.
                InnerSingleton,StaticRegisterNativesUEasyParticleComponent_SizeScaleBySpeed_Runtime,
               0x40,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_SizeScaleBySpeed_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_SizeScaleBySpeed_Runtime>,
               local_res8,UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_SizeScaleBySpeed_Runtime.InnerSingleton;
}

// UEasyParticleComponent_SizeScaleBySpeed_Runtime @ 14acb73a0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_SizeScaleBySpeed_Runtime * __thiscall
UEasyParticleComponent_SizeScaleBySpeed_Runtime::UEasyParticleComponent_SizeScaleBySpeed_Runtime
          (UEasyParticleComponent_SizeScaleBySpeed_Runtime *this,FVTableHelper *param_1)

{
  uint uVar1;
  
  UEasyParticleComponentRuntime::UEasyParticleComponentRuntime
            ((UEasyParticleComponentRuntime *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_SizeScaleBySpeed_Runtime__6B_;
  uVar1 = rand();
  (this->FactorX).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  uVar1 = rand();
  (this->FactorY).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return this;
}

// ~UEasyParticleComponent_SizeScaleBySpeed_Runtime @ 14acb7dd0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleComponent_SizeScaleBySpeed_Runtime::~UEasyParticleComponent_SizeScaleBySpeed_Runtime
          (UEasyParticleComponent_SizeScaleBySpeed_Runtime *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponent_SizeScaleBySpeed_Runtime__6B_;
  UEasyParticleComponentRuntime::~UEasyParticleComponentRuntime
            ((UEasyParticleComponentRuntime *)this);
  return;
}

// GetPrivateStaticClass @ 14acbac60

UClass * __cdecl UEasyParticleComponent_SizeScaleBySpeed_Runtime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_SizeScaleBySpeed_Runtime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_SizeScaleBySpeed_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_SizeScaleBySpeed_Runtime.
                InnerSingleton,StaticRegisterNativesUEasyParticleComponent_SizeScaleBySpeed_Runtime,
               0x40,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_SizeScaleBySpeed_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_SizeScaleBySpeed_Runtime>,
               local_res8,UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_SizeScaleBySpeed_Runtime.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_SizeScaleBySpeed_Runtime @ 14acbd6c0

void __cdecl
UEasyParticleComponent_SizeScaleBySpeed_Runtime::
StaticRegisterNativesUEasyParticleComponent_SizeScaleBySpeed_Runtime(void)

{
  return;
}

// UEasyParticleComponent_SizeScaleBySpeed_Runtime @ 14acc1b00

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_SizeScaleBySpeed_Runtime * __thiscall
UEasyParticleComponent_SizeScaleBySpeed_Runtime::UEasyParticleComponent_SizeScaleBySpeed_Runtime
          (UEasyParticleComponent_SizeScaleBySpeed_Runtime *this,FObjectInitializer *param_1)

{
  uint uVar1;
  
  UEasyParticleComponentRuntime::UEasyParticleComponentRuntime
            ((UEasyParticleComponentRuntime *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_SizeScaleBySpeed_Runtime__6B_;
  uVar1 = rand();
  (this->FactorX).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  uVar1 = rand();
  (this->FactorY).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return this;
}

// PostTick_Implementation @ 14acc77c0

void __thiscall
UEasyParticleComponent_SizeScaleBySpeed_Runtime::PostTick_Implementation
          (UEasyParticleComponent_SizeScaleBySpeed_Runtime *this,FGeometry *param_1,float param_2)

{
  int iVar1;
  UEasyParticleState *pUVar2;
  UClass *pUVar3;
  FUIParticleFactorParam *pFVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  undefined1 in_XMM3 [16];
  undefined1 auVar10 [16];
  FUIParticleFactorParam local_68 [3];
  
  lVar5 = this->_padding_;
  if (lVar5 != 0) {
    pUVar3 = Z_Construct_UClass_UEasyParticleComponent_SizeScaleBySpeed_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14acc780d;
  }
  lVar5 = 0;
LAB_14acc780d:
  pUVar2 = (UEasyParticleState *)this->_padding_;
  if ((pUVar2 != (UEasyParticleState *)0x0) && (lVar5 != 0)) {
    dVar9 = (pUVar2->BackBufferState).Position.field0_0x0._s_0.X -
            (pUVar2->CurrentState).Position.field0_0x0._s_0.X;
    dVar8 = (pUVar2->BackBufferState).Position.field0_0x0._s_0.Y -
            (pUVar2->CurrentState).Position.field0_0x0._s_0.Y;
    pFVar4 = FUIParticleFactorParam::FUIParticleFactorParam(local_68,&this->FactorX,pUVar2);
    fVar6 = FEasyParticlePropertyFloat::GetValue_Float
                      ((FEasyParticlePropertyFloat *)(lVar5 + 0x50),pFVar4);
    pFVar4 = FUIParticleFactorParam::FUIParticleFactorParam
                       (local_68,&this->FactorY,(UEasyParticleState *)this->_padding_);
    fVar7 = FEasyParticlePropertyFloat::GetValue_Float
                      ((FEasyParticlePropertyFloat *)(lVar5 + 0x1f8),pFVar4);
    if (param_2 == 0.0) {
      dVar9 = 0.0;
    }
    else {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = dVar9 * dVar9 + dVar8 * dVar8;
      auVar10 = sqrtpd(in_XMM3,auVar10);
      dVar9 = auVar10._0_8_ * (__real_3ff0000000000000 / (double)param_2);
    }
    dVar8 = (double)fVar7 * (double)(float)dVar9 * __real_3f847ae147ae147b;
    (pUVar2->BackBufferState).Size.field0_0x0._s_0.X =
         (double)fVar6 * (double)(float)dVar9 * __real_3f847ae147ae147b;
    (pUVar2->BackBufferState).Size.field0_0x0._s_0.Y = dVar8;
  }
  return;
}

// Reset_Implementation @ 14acc8af0

void __thiscall
UEasyParticleComponent_SizeScaleBySpeed_Runtime::Reset_Implementation
          (UEasyParticleComponent_SizeScaleBySpeed_Runtime *this)

{
  uint uVar1;
  
  uVar1 = rand();
  (this->FactorX).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  uVar1 = rand();
  (this->FactorY).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return;
}

