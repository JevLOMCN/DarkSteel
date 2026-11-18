// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 8

// StaticClass @ 14aca3d80

UClass * __cdecl UEasyParticleComponent_InitialPivot_Runtime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InitialPivot_Runtime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InitialPivot_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InitialPivot_Runtime.
                InnerSingleton,StaticRegisterNativesUEasyParticleComponent_InitialPivot_Runtime,0x40
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_InitialPivot_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InitialPivot_Runtime>,
               local_res8,UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InitialPivot_Runtime.InnerSingleton;
}

// UEasyParticleComponent_InitialPivot_Runtime @ 14aca9d70

UEasyParticleComponent_InitialPivot_Runtime * __thiscall
UEasyParticleComponent_InitialPivot_Runtime::UEasyParticleComponent_InitialPivot_Runtime
          (UEasyParticleComponent_InitialPivot_Runtime *this,FVTableHelper *param_1)

{
  uint uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialPivot_Runtime__6B_;
  uVar1 = rand();
  (this->FactorX).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  uVar1 = rand();
  (this->FactorY).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return this;
}

// ~UEasyParticleComponent_InitialPivot_Runtime @ 14acaaa50

void __thiscall
UEasyParticleComponent_InitialPivot_Runtime::~UEasyParticleComponent_InitialPivot_Runtime
          (UEasyParticleComponent_InitialPivot_Runtime *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponentRuntime__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14acad580

UClass * __cdecl UEasyParticleComponent_InitialPivot_Runtime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InitialPivot_Runtime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InitialPivot_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InitialPivot_Runtime.
                InnerSingleton,StaticRegisterNativesUEasyParticleComponent_InitialPivot_Runtime,0x40
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_InitialPivot_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InitialPivot_Runtime>,
               local_res8,UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InitialPivot_Runtime.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_InitialPivot_Runtime @ 14acae380

void __cdecl
UEasyParticleComponent_InitialPivot_Runtime::
StaticRegisterNativesUEasyParticleComponent_InitialPivot_Runtime(void)

{
  return;
}

// UEasyParticleComponent_InitialPivot_Runtime @ 14acc0750

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_InitialPivot_Runtime * __thiscall
UEasyParticleComponent_InitialPivot_Runtime::UEasyParticleComponent_InitialPivot_Runtime
          (UEasyParticleComponent_InitialPivot_Runtime *this,FObjectInitializer *param_1)

{
  uint uVar1;
  
  UEasyParticleComponentRuntime::UEasyParticleComponentRuntime
            ((UEasyParticleComponentRuntime *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialPivot_Runtime__6B_;
  uVar1 = rand();
  (this->FactorX).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  uVar1 = rand();
  (this->FactorY).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return this;
}

// Init_Implementation @ 14acc53b0

void __thiscall
UEasyParticleComponent_InitialPivot_Runtime::Init_Implementation
          (UEasyParticleComponent_InitialPivot_Runtime *this,FGeometry *param_1)

{
  int iVar1;
  UEasyParticleState *pUVar2;
  TVector2<double>_u_0 TVar3;
  UClass *pUVar4;
  FUIParticleFactorParam *pFVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  FUIParticleFactorParam local_58;
  FUIParticleFactorParam local_3c;
  
  lVar6 = this->_padding_;
  if (lVar6 != 0) {
    pUVar4 = Z_Construct_UClass_UEasyParticleComponent_InitialPivot_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14acc53f0;
  }
  lVar6 = 0;
LAB_14acc53f0:
  pUVar2 = (UEasyParticleState *)this->_padding_;
  if ((pUVar2 != (UEasyParticleState *)0x0) && (lVar6 != 0)) {
    pFVar5 = FUIParticleFactorParam::FUIParticleFactorParam(&local_58,&this->FactorX,pUVar2);
    fVar7 = FEasyParticlePropertyFloat::GetValue_Float
                      ((FEasyParticlePropertyFloat *)(lVar6 + 0x50),pFVar5);
    pFVar5 = FUIParticleFactorParam::FUIParticleFactorParam
                       (&local_3c,&this->FactorY,(UEasyParticleState *)this->_padding_);
    fVar8 = FEasyParticlePropertyFloat::GetValue_Float
                      ((FEasyParticlePropertyFloat *)(lVar6 + 0x1f8),pFVar5);
    TVar3._8_4_ = SUB84((double)fVar8,0);
    TVar3._s_0.X = (double)fVar7;
    TVar3._12_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
    (pUVar2->InitialState).Pivot.field0_0x0 = TVar3;
  }
  return;
}

// Reset_Implementation @ 14acc86d0

void __thiscall
UEasyParticleComponent_InitialPivot_Runtime::Reset_Implementation
          (UEasyParticleComponent_InitialPivot_Runtime *this)

{
  uint uVar1;
  
  uVar1 = rand();
  (this->FactorX).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  uVar1 = rand();
  (this->FactorY).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return;
}

