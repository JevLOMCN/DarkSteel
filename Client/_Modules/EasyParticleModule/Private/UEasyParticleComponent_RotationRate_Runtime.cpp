// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 8

// StaticClass @ 14acb2b40

UClass * __cdecl UEasyParticleComponent_RotationRate_Runtime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_RotationRate_Runtime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_RotationRate_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_RotationRate_Runtime.
                InnerSingleton,StaticRegisterNativesUEasyParticleComponent_RotationRate_Runtime,0x40
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_RotationRate_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_RotationRate_Runtime>,
               local_res8,UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_RotationRate_Runtime.InnerSingleton;
}

// UEasyParticleComponent_RotationRate_Runtime @ 14acb71f0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_RotationRate_Runtime * __thiscall
UEasyParticleComponent_RotationRate_Runtime::UEasyParticleComponent_RotationRate_Runtime
          (UEasyParticleComponent_RotationRate_Runtime *this,FVTableHelper *param_1)

{
  uint uVar1;
  
  UEasyParticleComponentRuntime::UEasyParticleComponentRuntime
            ((UEasyParticleComponentRuntime *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_RotationRate_Runtime__6B_;
  uVar1 = rand();
  (this->Factor).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return this;
}

// ~UEasyParticleComponent_RotationRate_Runtime @ 14acb7cb0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleComponent_RotationRate_Runtime::~UEasyParticleComponent_RotationRate_Runtime
          (UEasyParticleComponent_RotationRate_Runtime *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponent_RotationRate_Runtime__6B_;
  UEasyParticleComponentRuntime::~UEasyParticleComponentRuntime
            ((UEasyParticleComponentRuntime *)this);
  return;
}

// GetPrivateStaticClass @ 14acba720

UClass * __cdecl UEasyParticleComponent_RotationRate_Runtime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_RotationRate_Runtime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_RotationRate_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_RotationRate_Runtime.
                InnerSingleton,StaticRegisterNativesUEasyParticleComponent_RotationRate_Runtime,0x40
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_RotationRate_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_RotationRate_Runtime>,
               local_res8,UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_RotationRate_Runtime.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_RotationRate_Runtime @ 14acbd650

void __cdecl
UEasyParticleComponent_RotationRate_Runtime::
StaticRegisterNativesUEasyParticleComponent_RotationRate_Runtime(void)

{
  return;
}

// UEasyParticleComponent_RotationRate_Runtime @ 14acc16c0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_RotationRate_Runtime * __thiscall
UEasyParticleComponent_RotationRate_Runtime::UEasyParticleComponent_RotationRate_Runtime
          (UEasyParticleComponent_RotationRate_Runtime *this,FObjectInitializer *param_1)

{
  uint uVar1;
  
  UEasyParticleComponentRuntime::UEasyParticleComponentRuntime
            ((UEasyParticleComponentRuntime *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_RotationRate_Runtime__6B_;
  uVar1 = rand();
  (this->Factor).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return this;
}

// Reset_Implementation @ 14acc8a60

void __thiscall
UEasyParticleComponent_RotationRate_Runtime::Reset_Implementation
          (UEasyParticleComponent_RotationRate_Runtime *this)

{
  uint uVar1;
  
  uVar1 = rand();
  (this->Factor).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return;
}

// Tick_Implementation @ 14acca350

void __thiscall
UEasyParticleComponent_RotationRate_Runtime::Tick_Implementation
          (UEasyParticleComponent_RotationRate_Runtime *this,FGeometry *param_1,float param_2)

{
  int iVar1;
  UEasyParticleState *pUVar2;
  UClass *pUVar3;
  FUIParticleFactorParam *pFVar4;
  longlong lVar5;
  float fVar6;
  FUIParticleFactorParam local_28;
  
  lVar5 = this->_padding_;
  if (lVar5 != 0) {
    pUVar3 = Z_Construct_UClass_UEasyParticleComponent_RotationRate_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14acca390;
  }
  lVar5 = 0;
LAB_14acca390:
  pUVar2 = (UEasyParticleState *)this->_padding_;
  if ((pUVar2 != (UEasyParticleState *)0x0) && (lVar5 != 0)) {
    pFVar4 = FUIParticleFactorParam::FUIParticleFactorParam(&local_28,&this->Factor,pUVar2);
    fVar6 = FEasyParticlePropertyFloat::GetValue_Float
                      ((FEasyParticlePropertyFloat *)(lVar5 + 0x50),pFVar4);
    (pUVar2->BackBufferState).RotationRate = fVar6;
  }
  return;
}

