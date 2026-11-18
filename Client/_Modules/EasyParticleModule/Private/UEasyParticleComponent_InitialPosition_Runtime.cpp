// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 8

// StaticClass @ 14aca4210

UClass * __cdecl UEasyParticleComponent_InitialPosition_Runtime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InitialPosition_Runtime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InitialPosition_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InitialPosition_Runtime.
                InnerSingleton,StaticRegisterNativesUEasyParticleComponent_InitialPosition_Runtime,
               0x40,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_InitialPosition_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InitialPosition_Runtime>,
               local_res8,UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InitialPosition_Runtime.InnerSingleton;
}

// UEasyParticleComponent_InitialPosition_Runtime @ 14aca9ee0

UEasyParticleComponent_InitialPosition_Runtime * __thiscall
UEasyParticleComponent_InitialPosition_Runtime::UEasyParticleComponent_InitialPosition_Runtime
          (UEasyParticleComponent_InitialPosition_Runtime *this,FVTableHelper *param_1)

{
  uint uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialPosition_Runtime__6B_;
  uVar1 = rand();
  (this->FactorX).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  uVar1 = rand();
  (this->FactorY).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return this;
}

// ~UEasyParticleComponent_InitialPosition_Runtime @ 14acaab30

void __thiscall
UEasyParticleComponent_InitialPosition_Runtime::~UEasyParticleComponent_InitialPosition_Runtime
          (UEasyParticleComponent_InitialPosition_Runtime *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponentRuntime__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14acad880

UClass * __cdecl UEasyParticleComponent_InitialPosition_Runtime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InitialPosition_Runtime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InitialPosition_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InitialPosition_Runtime.
                InnerSingleton,StaticRegisterNativesUEasyParticleComponent_InitialPosition_Runtime,
               0x40,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_InitialPosition_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InitialPosition_Runtime>,
               local_res8,UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InitialPosition_Runtime.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_InitialPosition_Runtime @ 14acae3c0

void __cdecl
UEasyParticleComponent_InitialPosition_Runtime::
StaticRegisterNativesUEasyParticleComponent_InitialPosition_Runtime(void)

{
  return;
}

// UEasyParticleComponent_InitialPosition_Runtime @ 14acc0a00

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_InitialPosition_Runtime * __thiscall
UEasyParticleComponent_InitialPosition_Runtime::UEasyParticleComponent_InitialPosition_Runtime
          (UEasyParticleComponent_InitialPosition_Runtime *this,FObjectInitializer *param_1)

{
  uint uVar1;
  
  UEasyParticleComponentRuntime::UEasyParticleComponentRuntime
            ((UEasyParticleComponentRuntime *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_InitialPosition_Runtime__6B_;
  uVar1 = rand();
  (this->FactorX).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  uVar1 = rand();
  (this->FactorY).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return this;
}

// Init_Implementation @ 14acc5550

void __thiscall
UEasyParticleComponent_InitialPosition_Runtime::Init_Implementation
          (UEasyParticleComponent_InitialPosition_Runtime *this,FGeometry *param_1)

{
  int iVar1;
  UEasyParticleState *pUVar2;
  TVector2<double>_u_0 TVar3;
  double dVar4;
  UClass *pUVar5;
  FUIParticleFactorParam *pFVar6;
  UEasyParticleState *pUVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  FUIParticleFactorParam local_48 [2];
  
  lVar8 = this->_padding_;
  if (lVar8 != 0) {
    pUVar5 = Z_Construct_UClass_UEasyParticleComponent_InitialPosition_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14acc5590;
  }
  lVar8 = 0;
LAB_14acc5590:
  pUVar2 = (UEasyParticleState *)this->_padding_;
  if ((pUVar2 != (UEasyParticleState *)0x0) && (lVar8 != 0)) {
    pFVar6 = FUIParticleFactorParam::FUIParticleFactorParam(local_48,&this->FactorX,pUVar2);
    fVar9 = FEasyParticlePropertyFloat::GetValue_Float
                      ((FEasyParticlePropertyFloat *)(lVar8 + 0x50),pFVar6);
    pFVar6 = FUIParticleFactorParam::FUIParticleFactorParam
                       (local_48,&this->FactorY,(UEasyParticleState *)this->_padding_);
    fVar10 = FEasyParticlePropertyFloat::GetValue_Float
                       ((FEasyParticlePropertyFloat *)(lVar8 + 0x1f8),pFVar6);
    pUVar7 = UEasyParticleState::GetParent((UEasyParticleState *)this->_padding_);
    dVar4 = (double)fVar9;
    dVar11 = (double)fVar10;
    if (pUVar7 != (UEasyParticleState *)0x0) {
      dVar4 = dVar4 + (pUVar7->BackBufferState).Position.field0_0x0._s_0.X;
      dVar11 = dVar11 + (pUVar7->BackBufferState).Position.field0_0x0._s_0.Y;
    }
    TVar3._8_4_ = SUB84(dVar11,0);
    TVar3._s_0.X = dVar4;
    TVar3._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    (pUVar2->InitialState).Position.field0_0x0 = TVar3;
  }
  return;
}

// Reset_Implementation @ 14acc8790

void __thiscall
UEasyParticleComponent_InitialPosition_Runtime::Reset_Implementation
          (UEasyParticleComponent_InitialPosition_Runtime *this)

{
  uint uVar1;
  
  uVar1 = rand();
  (this->FactorX).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  uVar1 = rand();
  (this->FactorY).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return;
}

