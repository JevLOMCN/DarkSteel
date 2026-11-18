// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 8

// StaticClass @ 14aca4d90

UClass * __cdecl UEasyParticleComponent_AdditionPositionOffset_Runtime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_AdditionPositionOffset_Runtime.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_AdditionPositionOffset_Runtime"
               ,&Z_Registration_Info_UClass_UEasyParticleComponent_AdditionPositionOffset_Runtime.
                 InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_AdditionPositionOffset_Runtime,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_AdditionPositionOffset_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_AdditionPositionOffset_Runtime>
               ,local_res8,UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_AdditionPositionOffset_Runtime.
         InnerSingleton;
}

// UEasyParticleComponent_AdditionPositionOffset_Runtime @ 14aca96a0

UEasyParticleComponent_AdditionPositionOffset_Runtime * __thiscall
UEasyParticleComponent_AdditionPositionOffset_Runtime::
UEasyParticleComponent_AdditionPositionOffset_Runtime
          (UEasyParticleComponent_AdditionPositionOffset_Runtime *this,FVTableHelper *param_1)

{
  uint uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_AdditionPositionOffset_Runtime__6B_;
  uVar1 = rand();
  (this->FactorInitialTime).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  uVar1 = rand();
  (this->FactorFrequency).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  uVar1 = rand();
  (this->FactorAmplitude).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return this;
}

// ~UEasyParticleComponent_AdditionPositionOffset_Runtime @ 14acaa590

void __thiscall
UEasyParticleComponent_AdditionPositionOffset_Runtime::
~UEasyParticleComponent_AdditionPositionOffset_Runtime
          (UEasyParticleComponent_AdditionPositionOffset_Runtime *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponentRuntime__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14acac680

UClass * __cdecl UEasyParticleComponent_AdditionPositionOffset_Runtime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_AdditionPositionOffset_Runtime.
      InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_AdditionPositionOffset_Runtime"
               ,&Z_Registration_Info_UClass_UEasyParticleComponent_AdditionPositionOffset_Runtime.
                 InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_AdditionPositionOffset_Runtime,0x48,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_AdditionPositionOffset_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_AdditionPositionOffset_Runtime>
               ,local_res8,UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_AdditionPositionOffset_Runtime.
         InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_AdditionPositionOffset_Runtime @ 14acae240

void __cdecl
UEasyParticleComponent_AdditionPositionOffset_Runtime::
StaticRegisterNativesUEasyParticleComponent_AdditionPositionOffset_Runtime(void)

{
  return;
}

// UEasyParticleComponent_AdditionPositionOffset_Runtime @ 14acb6200

UEasyParticleComponent_AdditionPositionOffset_Runtime * __thiscall
UEasyParticleComponent_AdditionPositionOffset_Runtime::
UEasyParticleComponent_AdditionPositionOffset_Runtime
          (UEasyParticleComponent_AdditionPositionOffset_Runtime *this,FObjectInitializer *param_1)

{
  uint uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UEasyParticleComponent_AdditionPositionOffset_Runtime__6B_;
  uVar1 = rand();
  (this->FactorInitialTime).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  uVar1 = rand();
  (this->FactorFrequency).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  uVar1 = rand();
  (this->FactorAmplitude).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return this;
}

// PostTick_Implementation @ 14acbc710

void __thiscall
UEasyParticleComponent_AdditionPositionOffset_Runtime::PostTick_Implementation
          (UEasyParticleComponent_AdditionPositionOffset_Runtime *this,FGeometry *param_1,
          float param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  double dVar5;
  UClass *pUVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  FUIParticleFactorParam local_88 [4];
  
  lVar7 = this->_padding_;
  if (lVar7 != 0) {
    pUVar6 = Z_Construct_UClass_UEasyParticleComponent_AdditionPositionOffset_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_14acbc75d;
  }
  lVar7 = 0;
LAB_14acbc75d:
  lVar2 = this->_padding_;
  if ((lVar2 != 0) && (lVar7 != 0)) {
    local_88[0].Factor = (this->FactorInitialTime).factor;
    local_88[0].LifetimePercent = 0.0;
    local_88[0].Lifetime = (float)*(uint *)(lVar2 + 200);
    if (*(float *)(lVar2 + 0x40) != 0.0) {
      local_88[0].LifetimePercent = *(float *)(lVar2 + 200) / *(float *)(lVar2 + 0x40);
    }
    local_88[0].RootEmitterLifetime = *(float *)(lVar2 + 0x148);
    fVar8 = FEasyParticlePropertyFloat::GetValue_Float
                      ((FEasyParticlePropertyFloat *)(lVar7 + 0x50),local_88);
    lVar3 = this->_padding_;
    local_88[0].Factor = (this->FactorFrequency).factor;
    local_88[0].Lifetime = 0.0;
    local_88[0].LifetimePercent = 0.0;
    local_88[0].RootEmitterLifetime = 0.0;
    if (lVar3 != 0) {
      local_88[0].LifetimePercent = 0.0;
      local_88[0].Lifetime = (float)*(uint *)(lVar3 + 200);
      if (*(float *)(lVar3 + 0x40) != 0.0) {
        local_88[0].LifetimePercent = *(float *)(lVar3 + 200) / *(float *)(lVar3 + 0x40);
      }
      local_88[0].RootEmitterLifetime = *(float *)(lVar3 + 0x148);
    }
    fVar9 = FEasyParticlePropertyFloat::GetValue_Float
                      ((FEasyParticlePropertyFloat *)(lVar7 + 0x1f8),local_88);
    lVar3 = this->_padding_;
    local_88[0].Factor = (this->FactorAmplitude).factor;
    local_88[0].Lifetime = 0.0;
    local_88[0].LifetimePercent = 0.0;
    local_88[0].RootEmitterLifetime = 0.0;
    if (lVar3 != 0) {
      local_88[0].LifetimePercent = 0.0;
      local_88[0].Lifetime = (float)*(uint *)(lVar3 + 200);
      if (*(float *)(lVar3 + 0x40) != 0.0) {
        local_88[0].LifetimePercent = *(float *)(lVar3 + 200) / *(float *)(lVar3 + 0x40);
      }
      local_88[0].RootEmitterLifetime = *(float *)(lVar3 + 0x148);
    }
    fVar10 = FEasyParticlePropertyFloat::GetValue_Float
                       ((FEasyParticlePropertyFloat *)(lVar7 + 0x3a0),local_88);
    dVar5 = *(double *)(lVar2 + 0x158) * __real_3c91a62633145c07 - *(double *)(lVar2 + 0x160);
    dVar13 = *(double *)(lVar2 + 0x160) * __real_3c91a62633145c07 + *(double *)(lVar2 + 0x158);
    dVar12 = dVar13 * dVar13 + dVar5 * dVar5;
    if (dVar12 <= __real_3e45798ee0000000) {
      dVar5 = 0.0;
      dVar13 = 0.0;
    }
    else {
      dVar12 = __real_3ff0000000000000 / SQRT(dVar12);
      dVar5 = dVar5 * dVar12;
      dVar13 = dVar13 * dVar12;
    }
    fVar11 = sinf((fVar8 + *(float *)(lVar2 + 200)) * fVar9);
    fVar8 = sinf((fVar8 + *(float *)(lVar2 + 0x150)) * fVar9);
    dVar12 = (double)((fVar11 - fVar8) * fVar10);
    dVar13 = dVar12 * dVar13 + *(double *)(lVar2 + 0x170);
    auVar4._8_4_ = SUB84(dVar13,0);
    auVar4._0_8_ = dVar12 * dVar5 + *(double *)(lVar2 + 0x168);
    auVar4._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    *(undefined1 (*) [16])(lVar2 + 0x168) = auVar4;
  }
  return;
}

// Reset_Implementation @ 14acbd250

void __thiscall
UEasyParticleComponent_AdditionPositionOffset_Runtime::Reset_Implementation
          (UEasyParticleComponent_AdditionPositionOffset_Runtime *this)

{
  uint uVar1;
  
  uVar1 = rand();
  (this->FactorInitialTime).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  uVar1 = rand();
  (this->FactorFrequency).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  uVar1 = rand();
  (this->FactorAmplitude).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return;
}

