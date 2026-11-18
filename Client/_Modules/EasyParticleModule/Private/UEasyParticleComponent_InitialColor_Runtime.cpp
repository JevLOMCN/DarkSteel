// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 8

// StaticClass @ 14aca6c50

UClass * __cdecl UEasyParticleComponent_InitialColor_Runtime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InitialColor_Runtime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InitialColor_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InitialColor_Runtime.
                InnerSingleton,StaticRegisterNativesUEasyParticleComponent_InitialColor_Runtime,0x48
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_InitialColor_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InitialColor_Runtime>,
               local_res8,UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InitialColor_Runtime.InnerSingleton;
}

// UEasyParticleComponent_InitialColor_Runtime @ 14aca9c00

UEasyParticleComponent_InitialColor_Runtime * __thiscall
UEasyParticleComponent_InitialColor_Runtime::UEasyParticleComponent_InitialColor_Runtime
          (UEasyParticleComponent_InitialColor_Runtime *this,FVTableHelper *param_1)

{
  float fVar1;
  uint uVar2;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialColor_Runtime__6B_;
  uVar2 = rand();
  fVar1 = __real_38000100;
  (this->FactorR).factor = (float)(uVar2 & 0x7fff) * __real_38000100;
  uVar2 = rand();
  (this->FactorG).factor = (float)(uVar2 & 0x7fff) * fVar1;
  uVar2 = rand();
  (this->FactorB).factor = (float)(uVar2 & 0x7fff) * fVar1;
  uVar2 = rand();
  (this->FactorA).factor = (float)(uVar2 & 0x7fff) * fVar1;
  return this;
}

// ~UEasyParticleComponent_InitialColor_Runtime @ 14acaa970

void __thiscall
UEasyParticleComponent_InitialColor_Runtime::~UEasyParticleComponent_InitialColor_Runtime
          (UEasyParticleComponent_InitialColor_Runtime *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponentRuntime__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14acad280

UClass * __cdecl UEasyParticleComponent_InitialColor_Runtime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InitialColor_Runtime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InitialColor_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InitialColor_Runtime.
                InnerSingleton,StaticRegisterNativesUEasyParticleComponent_InitialColor_Runtime,0x48
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_InitialColor_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InitialColor_Runtime>,
               local_res8,UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InitialColor_Runtime.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_InitialColor_Runtime @ 14acae340

void __cdecl
UEasyParticleComponent_InitialColor_Runtime::
StaticRegisterNativesUEasyParticleComponent_InitialColor_Runtime(void)

{
  return;
}

// UEasyParticleComponent_InitialColor_Runtime @ 14acb6c70

UEasyParticleComponent_InitialColor_Runtime * __thiscall
UEasyParticleComponent_InitialColor_Runtime::UEasyParticleComponent_InitialColor_Runtime
          (UEasyParticleComponent_InitialColor_Runtime *this,FObjectInitializer *param_1)

{
  float fVar1;
  uint uVar2;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialColor_Runtime__6B_;
  uVar2 = rand();
  fVar1 = __real_38000100;
  (this->FactorR).factor = (float)(uVar2 & 0x7fff) * __real_38000100;
  uVar2 = rand();
  (this->FactorG).factor = (float)(uVar2 & 0x7fff) * fVar1;
  uVar2 = rand();
  (this->FactorB).factor = (float)(uVar2 & 0x7fff) * fVar1;
  uVar2 = rand();
  (this->FactorA).factor = (float)(uVar2 & 0x7fff) * fVar1;
  return this;
}

// Init_Implementation @ 14acbbd20

void __thiscall
UEasyParticleComponent_InitialColor_Runtime::Init_Implementation
          (UEasyParticleComponent_InitialColor_Runtime *this,FGeometry *param_1)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  longlong lVar4;
  FLinearColor_u_0 local_38;
  FUIParticleFactorParam local_28;
  
  lVar4 = this->_padding_;
  if (lVar4 != 0) {
    pUVar3 = Z_Construct_UClass_UEasyParticleComponent_InitialColor_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14acbbd60;
  }
  lVar4 = 0;
LAB_14acbbd60:
  lVar2 = this->_padding_;
  if ((lVar2 != 0) && (lVar4 != 0)) {
    local_28.Factor2 = (this->FactorG).factor;
    local_28.Factor = (this->FactorR).factor;
    local_28.LifetimePercent = 0.0;
    local_28.Lifetime = (float)*(uint *)(lVar2 + 200);
    if (*(float *)(lVar2 + 0x40) != 0.0) {
      local_28.LifetimePercent = *(float *)(lVar2 + 200) / *(float *)(lVar2 + 0x40);
    }
    local_28.RootEmitterLifetime = *(float *)(lVar2 + 0x148);
    local_28.Factor3 = local_28.Factor2;
    local_28.Factor4 = local_28.Factor2;
    FEasyParticlePropertyColor::GetValue_Color
              ((FEasyParticlePropertyColor *)(lVar4 + 0x50),(FLinearColor *)&local_38._s_0,&local_28
              );
    *(undefined8 *)(lVar2 + 0x80) = local_38._0_8_;
    *(undefined8 *)(lVar2 + 0x88) = local_38._8_8_;
  }
  return;
}

// Reset_Implementation @ 14acbd4b0

void __thiscall
UEasyParticleComponent_InitialColor_Runtime::Reset_Implementation
          (UEasyParticleComponent_InitialColor_Runtime *this)

{
  float fVar1;
  uint uVar2;
  
  uVar2 = rand();
  fVar1 = __real_38000100;
  (this->FactorR).factor = (float)(uVar2 & 0x7fff) * __real_38000100;
  uVar2 = rand();
  (this->FactorG).factor = (float)(uVar2 & 0x7fff) * fVar1;
  uVar2 = rand();
  (this->FactorB).factor = (float)(uVar2 & 0x7fff) * fVar1;
  uVar2 = rand();
  (this->FactorA).factor = (float)(uVar2 & 0x7fff) * fVar1;
  return;
}

