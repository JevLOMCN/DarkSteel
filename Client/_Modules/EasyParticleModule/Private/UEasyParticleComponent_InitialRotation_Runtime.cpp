// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 8

// StaticClass @ 14aca4790

UClass * __cdecl UEasyParticleComponent_InitialRotation_Runtime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InitialRotation_Runtime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InitialRotation_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InitialRotation_Runtime.
                InnerSingleton,StaticRegisterNativesUEasyParticleComponent_InitialRotation_Runtime,
               0x40,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_InitialRotation_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InitialRotation_Runtime>,
               local_res8,UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InitialRotation_Runtime.InnerSingleton;
}

// UEasyParticleComponent_InitialRotation_Runtime @ 14acaa020

UEasyParticleComponent_InitialRotation_Runtime * __thiscall
UEasyParticleComponent_InitialRotation_Runtime::UEasyParticleComponent_InitialRotation_Runtime
          (UEasyParticleComponent_InitialRotation_Runtime *this,FVTableHelper *param_1)

{
  uint uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialRotation_Runtime__6B_;
  uVar1 = rand();
  (this->Factor).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return this;
}

// ~UEasyParticleComponent_InitialRotation_Runtime @ 14acaac10

void __thiscall
UEasyParticleComponent_InitialRotation_Runtime::~UEasyParticleComponent_InitialRotation_Runtime
          (UEasyParticleComponent_InitialRotation_Runtime *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponentRuntime__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14acadb80

UClass * __cdecl UEasyParticleComponent_InitialRotation_Runtime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InitialRotation_Runtime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InitialRotation_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InitialRotation_Runtime.
                InnerSingleton,StaticRegisterNativesUEasyParticleComponent_InitialRotation_Runtime,
               0x40,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_InitialRotation_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InitialRotation_Runtime>,
               local_res8,UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InitialRotation_Runtime.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_InitialRotation_Runtime @ 14acae400

void __cdecl
UEasyParticleComponent_InitialRotation_Runtime::
StaticRegisterNativesUEasyParticleComponent_InitialRotation_Runtime(void)

{
  return;
}

// UEasyParticleComponent_InitialRotation_Runtime @ 14acc0c80

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_InitialRotation_Runtime * __thiscall
UEasyParticleComponent_InitialRotation_Runtime::UEasyParticleComponent_InitialRotation_Runtime
          (UEasyParticleComponent_InitialRotation_Runtime *this,FObjectInitializer *param_1)

{
  uint uVar1;
  
  UEasyParticleComponentRuntime::UEasyParticleComponentRuntime
            ((UEasyParticleComponentRuntime *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialRotation_Runtime__6B_;
  uVar1 = rand();
  (this->Factor).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return this;
}

// Init_Implementation @ 14acc56e0

void __thiscall
UEasyParticleComponent_InitialRotation_Runtime::Init_Implementation
          (UEasyParticleComponent_InitialRotation_Runtime *this,FGeometry *param_1)

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
    pUVar3 = Z_Construct_UClass_UEasyParticleComponent_InitialRotation_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14acc5720;
  }
  lVar5 = 0;
LAB_14acc5720:
  pUVar2 = (UEasyParticleState *)this->_padding_;
  if ((pUVar2 != (UEasyParticleState *)0x0) && (lVar5 != 0)) {
    pFVar4 = FUIParticleFactorParam::FUIParticleFactorParam(&local_28,&this->Factor,pUVar2);
    fVar6 = FEasyParticlePropertyFloat::GetValue_Float
                      ((FEasyParticlePropertyFloat *)(lVar5 + 0x50),pFVar4);
    (pUVar2->InitialState).Rotation = fVar6;
  }
  return;
}

// Reset_Implementation @ 14acc8830

void __thiscall
UEasyParticleComponent_InitialRotation_Runtime::Reset_Implementation
          (UEasyParticleComponent_InitialRotation_Runtime *this)

{
  uint uVar1;
  
  uVar1 = rand();
  (this->Factor).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return;
}

