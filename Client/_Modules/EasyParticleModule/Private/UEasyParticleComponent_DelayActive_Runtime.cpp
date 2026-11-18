// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 7

// StaticClass @ 14aca5fb0

UClass * __cdecl UEasyParticleComponent_DelayActive_Runtime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_DelayActive_Runtime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_DelayActive_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_DelayActive_Runtime.InnerSingleton
               ,StaticRegisterNativesUEasyParticleComponent_DelayActive_Runtime,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_DelayActive_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_DelayActive_Runtime>,local_res8
               ,UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_DelayActive_Runtime.InnerSingleton;
}

// UEasyParticleComponent_DelayActive_Runtime @ 14aca99d0

UEasyParticleComponent_DelayActive_Runtime * __thiscall
UEasyParticleComponent_DelayActive_Runtime::UEasyParticleComponent_DelayActive_Runtime
          (UEasyParticleComponent_DelayActive_Runtime *this,FVTableHelper *param_1)

{
  uint uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_DelayActive_Runtime__6B_;
  uVar1 = rand();
  (this->Factor).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return this;
}

// ~UEasyParticleComponent_DelayActive_Runtime @ 14acaa7a0

void __thiscall
UEasyParticleComponent_DelayActive_Runtime::~UEasyParticleComponent_DelayActive_Runtime
          (UEasyParticleComponent_DelayActive_Runtime *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponentRuntime__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14acacc80

UClass * __cdecl UEasyParticleComponent_DelayActive_Runtime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_DelayActive_Runtime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_DelayActive_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_DelayActive_Runtime.InnerSingleton
               ,StaticRegisterNativesUEasyParticleComponent_DelayActive_Runtime,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_DelayActive_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_DelayActive_Runtime>,local_res8
               ,UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_DelayActive_Runtime.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_DelayActive_Runtime @ 14acae2c0

void __cdecl
UEasyParticleComponent_DelayActive_Runtime::
StaticRegisterNativesUEasyParticleComponent_DelayActive_Runtime(void)

{
  return;
}

// UEasyParticleComponent_DelayActive_Runtime @ 14acb67d0

UEasyParticleComponent_DelayActive_Runtime * __thiscall
UEasyParticleComponent_DelayActive_Runtime::UEasyParticleComponent_DelayActive_Runtime
          (UEasyParticleComponent_DelayActive_Runtime *this,FObjectInitializer *param_1)

{
  uint uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UEasyParticleComponent_DelayActive_Runtime__6B_;
  uVar1 = rand();
  (this->Factor).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return this;
}

// OnSubEmitterCreate @ 14acbc3f0

void __thiscall
UEasyParticleComponent_DelayActive_Runtime::OnSubEmitterCreate
          (UEasyParticleComponent_DelayActive_Runtime *this,
          FEasyParticleComponentRuntime_Child_SubEmitter *param_1)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  longlong lVar4;
  float fVar5;
  FUIParticleFactorParam local_28;
  
  lVar4 = this->_padding_;
  if (lVar4 != 0) {
    pUVar3 = Z_Construct_UClass_UEasyParticleComponent_DelayActive_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14acbc433;
  }
  lVar4 = 0;
LAB_14acbc433:
  if ((param_1 != (FEasyParticleComponentRuntime_Child_SubEmitter *)0x0) && (lVar4 != 0)) {
    lVar2 = this->_padding_;
    local_28.Factor = (this->Factor).factor;
    local_28.Lifetime = 0.0;
    local_28.LifetimePercent = 0.0;
    local_28.RootEmitterLifetime = 0.0;
    if (lVar2 != 0) {
      local_28.LifetimePercent = 0.0;
      local_28.Lifetime = (float)*(uint *)(lVar2 + 200);
      if (*(float *)(lVar2 + 0x40) != 0.0) {
        local_28.LifetimePercent = *(float *)(lVar2 + 200) / *(float *)(lVar2 + 0x40);
      }
      local_28.RootEmitterLifetime = *(float *)(lVar2 + 0x148);
    }
    fVar5 = FEasyParticlePropertyFloat::GetValue_Float
                      ((FEasyParticlePropertyFloat *)(lVar4 + 0x50),&local_28);
    param_1->DelayActive = fVar5;
  }
  return;
}

