// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 8

// StaticClass @ 14aca65c0

UClass * __cdecl UEasyParticleComponent_Gravity_Runtime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_Gravity_Runtime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_Gravity_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_Gravity_Runtime.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_Gravity_Runtime,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_Gravity_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_Gravity_Runtime>,local_res8,
               UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_Gravity_Runtime.InnerSingleton;
}

// UEasyParticleComponent_Gravity_Runtime @ 14aca9ae0

UEasyParticleComponent_Gravity_Runtime * __thiscall
UEasyParticleComponent_Gravity_Runtime::UEasyParticleComponent_Gravity_Runtime
          (UEasyParticleComponent_Gravity_Runtime *this,FVTableHelper *param_1)

{
  uint uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Gravity_Runtime__6B_;
  uVar1 = rand();
  (this->FactorX).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  uVar1 = rand();
  (this->FactorY).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return this;
}

// ~UEasyParticleComponent_Gravity_Runtime @ 14acaa880

void __thiscall
UEasyParticleComponent_Gravity_Runtime::~UEasyParticleComponent_Gravity_Runtime
          (UEasyParticleComponent_Gravity_Runtime *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponentRuntime__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14acacf80

UClass * __cdecl UEasyParticleComponent_Gravity_Runtime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_Gravity_Runtime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_Gravity_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_Gravity_Runtime.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_Gravity_Runtime,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_Gravity_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_Gravity_Runtime>,local_res8,
               UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_Gravity_Runtime.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_Gravity_Runtime @ 14acae300

void __cdecl
UEasyParticleComponent_Gravity_Runtime::StaticRegisterNativesUEasyParticleComponent_Gravity_Runtime
          (void)

{
  return;
}

// UEasyParticleComponent_Gravity_Runtime @ 14acb6a20

UEasyParticleComponent_Gravity_Runtime * __thiscall
UEasyParticleComponent_Gravity_Runtime::UEasyParticleComponent_Gravity_Runtime
          (UEasyParticleComponent_Gravity_Runtime *this,FObjectInitializer *param_1)

{
  uint uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Gravity_Runtime__6B_;
  uVar1 = rand();
  (this->FactorX).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  uVar1 = rand();
  (this->FactorY).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return this;
}

// Reset_Implementation @ 14acbd440

void __thiscall
UEasyParticleComponent_Gravity_Runtime::Reset_Implementation
          (UEasyParticleComponent_Gravity_Runtime *this)

{
  uint uVar1;
  
  uVar1 = rand();
  (this->FactorX).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  uVar1 = rand();
  (this->FactorY).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return;
}

// Tick_Implementation @ 14acbdb80

void __thiscall
UEasyParticleComponent_Gravity_Runtime::Tick_Implementation
          (UEasyParticleComponent_Gravity_Runtime *this,FGeometry *param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  UClass *pUVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  FUIParticleFactorParam local_58 [2];
  
  lVar6 = this->_padding_;
  if (lVar6 != 0) {
    pUVar5 = Z_Construct_UClass_UEasyParticleComponent_Gravity_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14acbdbca;
  }
  lVar6 = 0;
LAB_14acbdbca:
  lVar2 = this->_padding_;
  if ((lVar2 != 0) && (lVar6 != 0)) {
    local_58[0].Factor = (this->FactorX).factor;
    local_58[0].LifetimePercent = 0.0;
    local_58[0].Lifetime = (float)*(uint *)(lVar2 + 200);
    if (*(float *)(lVar2 + 0x40) != 0.0) {
      local_58[0].LifetimePercent = *(float *)(lVar2 + 200) / *(float *)(lVar2 + 0x40);
    }
    local_58[0].RootEmitterLifetime = *(float *)(lVar2 + 0x148);
    fVar7 = FEasyParticlePropertyFloat::GetValue_Float
                      ((FEasyParticlePropertyFloat *)(lVar6 + 0x50),local_58);
    lVar3 = this->_padding_;
    local_58[0].Factor = (this->FactorY).factor;
    local_58[0].Lifetime = 0.0;
    local_58[0].LifetimePercent = 0.0;
    local_58[0].RootEmitterLifetime = 0.0;
    if (lVar3 != 0) {
      local_58[0].LifetimePercent = 0.0;
      local_58[0].Lifetime = (float)*(uint *)(lVar3 + 200);
      if (*(float *)(lVar3 + 0x40) != 0.0) {
        local_58[0].LifetimePercent = *(float *)(lVar3 + 200) / *(float *)(lVar3 + 0x40);
      }
      local_58[0].RootEmitterLifetime = *(float *)(lVar3 + 0x148);
    }
    fVar8 = FEasyParticlePropertyFloat::GetValue_Float
                      ((FEasyParticlePropertyFloat *)(lVar6 + 0x1f8),local_58);
    dVar9 = (double)fVar8 * (double)param_2 + *(double *)(lVar2 + 0x160);
    auVar4._8_4_ = SUB84(dVar9,0);
    auVar4._0_8_ = (double)fVar7 * (double)param_2 + *(double *)(lVar2 + 0x158);
    auVar4._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    *(undefined1 (*) [16])(lVar2 + 0x158) = auVar4;
  }
  return;
}

