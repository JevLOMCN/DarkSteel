// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 8

// StaticClass @ 14aca4990

UClass * __cdecl UEasyParticleComponent_Acceleration_Runtime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_Acceleration_Runtime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_Acceleration_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_Acceleration_Runtime.
                InnerSingleton,StaticRegisterNativesUEasyParticleComponent_Acceleration_Runtime,0x40
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_Acceleration_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_Acceleration_Runtime>,
               local_res8,UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_Acceleration_Runtime.InnerSingleton;
}

// UEasyParticleComponent_Acceleration_Runtime @ 14aca95f0

UEasyParticleComponent_Acceleration_Runtime * __thiscall
UEasyParticleComponent_Acceleration_Runtime::UEasyParticleComponent_Acceleration_Runtime
          (UEasyParticleComponent_Acceleration_Runtime *this,FVTableHelper *param_1)

{
  uint uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Acceleration_Runtime__6B_;
  uVar1 = rand();
  (this->Factor).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return this;
}

// ~UEasyParticleComponent_Acceleration_Runtime @ 14acaa510

void __thiscall
UEasyParticleComponent_Acceleration_Runtime::~UEasyParticleComponent_Acceleration_Runtime
          (UEasyParticleComponent_Acceleration_Runtime *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponentRuntime__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14acac500

UClass * __cdecl UEasyParticleComponent_Acceleration_Runtime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_Acceleration_Runtime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_Acceleration_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_Acceleration_Runtime.
                InnerSingleton,StaticRegisterNativesUEasyParticleComponent_Acceleration_Runtime,0x40
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_Acceleration_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_Acceleration_Runtime>,
               local_res8,UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_Acceleration_Runtime.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_Acceleration_Runtime @ 14acae220

void __cdecl
UEasyParticleComponent_Acceleration_Runtime::
StaticRegisterNativesUEasyParticleComponent_Acceleration_Runtime(void)

{
  return;
}

// UEasyParticleComponent_Acceleration_Runtime @ 14acb6070

UEasyParticleComponent_Acceleration_Runtime * __thiscall
UEasyParticleComponent_Acceleration_Runtime::UEasyParticleComponent_Acceleration_Runtime
          (UEasyParticleComponent_Acceleration_Runtime *this,FObjectInitializer *param_1)

{
  uint uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Acceleration_Runtime__6B_;
  uVar1 = rand();
  (this->Factor).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return this;
}

// Reset_Implementation @ 14acbd210

void __thiscall
UEasyParticleComponent_Acceleration_Runtime::Reset_Implementation
          (UEasyParticleComponent_Acceleration_Runtime *this)

{
  uint uVar1;
  
  uVar1 = rand();
  (this->Factor).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return;
}

// Tick_Implementation @ 14acbd8a0

void __thiscall
UEasyParticleComponent_Acceleration_Runtime::Tick_Implementation
          (UEasyParticleComponent_Acceleration_Runtime *this,FGeometry *param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  UClass *pUVar4;
  longlong lVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  FUIParticleFactorParam local_48 [2];
  
  lVar5 = this->_padding_;
  if (lVar5 != 0) {
    pUVar4 = Z_Construct_UClass_UEasyParticleComponent_Acceleration_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14acbd8e8;
  }
  lVar5 = 0;
LAB_14acbd8e8:
  lVar2 = this->_padding_;
  if ((lVar2 != 0) && (lVar5 != 0)) {
    local_48[0].Factor = (this->Factor).factor;
    local_48[0].LifetimePercent = 0.0;
    local_48[0].Lifetime = (float)*(uint *)(lVar2 + 200);
    if (*(float *)(lVar2 + 0x40) != 0.0) {
      local_48[0].LifetimePercent = *(float *)(lVar2 + 200) / *(float *)(lVar2 + 0x40);
    }
    local_48[0].RootEmitterLifetime = *(float *)(lVar2 + 0x148);
    fVar6 = FEasyParticlePropertyFloat::GetValue_Float
                      ((FEasyParticlePropertyFloat *)(lVar5 + 0x50),local_48);
    dVar8 = *(double *)(lVar2 + 0x158);
    dVar9 = *(double *)(lVar2 + 0x160);
    dVar7 = dVar9 * dVar9 + dVar8 * dVar8;
    if (dVar7 <= __real_3e45798ee0000000) {
      dVar8 = 0.0;
      dVar9 = 0.0;
    }
    else {
      dVar7 = __real_3ff0000000000000 / SQRT(dVar7);
      dVar8 = dVar8 * dVar7;
      dVar9 = dVar9 * dVar7;
    }
    dVar9 = (double)fVar6 * dVar9 * (double)param_2 + *(double *)(lVar2 + 0x160);
    auVar3._8_4_ = SUB84(dVar9,0);
    auVar3._0_8_ = (double)fVar6 * dVar8 * (double)param_2 + *(double *)(lVar2 + 0x158);
    auVar3._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    *(undefined1 (*) [16])(lVar2 + 0x158) = auVar3;
  }
  return;
}

