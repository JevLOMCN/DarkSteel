// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 8

// StaticClass @ 14acb3370

UClass * __cdecl UEasyParticleComponent_Size_Runtime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_Size_Runtime.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_Size_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_Size_Runtime.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_Size_Runtime,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_Size_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_Size_Runtime>,local_res8,
               UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_Size_Runtime.InnerSingleton;
}

// UEasyParticleComponent_Size_Runtime @ 14acb74c0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_Size_Runtime * __thiscall
UEasyParticleComponent_Size_Runtime::UEasyParticleComponent_Size_Runtime
          (UEasyParticleComponent_Size_Runtime *this,FVTableHelper *param_1)

{
  uint uVar1;
  
  UEasyParticleComponentRuntime::UEasyParticleComponentRuntime
            ((UEasyParticleComponentRuntime *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Size_Runtime__6B_;
  uVar1 = rand();
  (this->Factor).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return this;
}

// ~UEasyParticleComponent_Size_Runtime @ 14acb7e50

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

void __thiscall
UEasyParticleComponent_Size_Runtime::~UEasyParticleComponent_Size_Runtime
          (UEasyParticleComponent_Size_Runtime *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Size_Runtime__6B_;
  UEasyParticleComponentRuntime::~UEasyParticleComponentRuntime
            ((UEasyParticleComponentRuntime *)this);
  return;
}

// GetPrivateStaticClass @ 14acbaea0

UClass * __cdecl UEasyParticleComponent_Size_Runtime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_Size_Runtime.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_Size_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_Size_Runtime.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_Size_Runtime,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_Size_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_Size_Runtime>,local_res8,
               UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_Size_Runtime.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_Size_Runtime @ 14acbd6f0

void __cdecl
UEasyParticleComponent_Size_Runtime::StaticRegisterNativesUEasyParticleComponent_Size_Runtime(void)

{
  return;
}

// UEasyParticleComponent_Size_Runtime @ 14acc1ce0

/* WARNING: Enum "EComponentPriority": Some values do not have unique names */

UEasyParticleComponent_Size_Runtime * __thiscall
UEasyParticleComponent_Size_Runtime::UEasyParticleComponent_Size_Runtime
          (UEasyParticleComponent_Size_Runtime *this,FObjectInitializer *param_1)

{
  uint uVar1;
  
  UEasyParticleComponentRuntime::UEasyParticleComponentRuntime
            ((UEasyParticleComponentRuntime *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Size_Runtime__6B_;
  uVar1 = rand();
  (this->Factor).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return this;
}

// Reset_Implementation @ 14acc8bb0

void __thiscall
UEasyParticleComponent_Size_Runtime::Reset_Implementation(UEasyParticleComponent_Size_Runtime *this)

{
  uint uVar1;
  
  uVar1 = rand();
  (this->Factor).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return;
}

// Tick_Implementation @ 14acca5d0

void __thiscall
UEasyParticleComponent_Size_Runtime::Tick_Implementation
          (UEasyParticleComponent_Size_Runtime *this,FGeometry *param_1,float param_2)

{
  int iVar1;
  UEasyParticleState *pUVar2;
  TVector2<double>_u_0 TVar3;
  UClass *pUVar4;
  FUIParticleFactorParam *pFVar5;
  longlong lVar6;
  float fVar7;
  double dVar8;
  FUIParticleFactorParam local_28;
  
  lVar6 = this->_padding_;
  if (lVar6 != 0) {
    pUVar4 = Z_Construct_UClass_UEasyParticleComponent_Size_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14acca610;
  }
  lVar6 = 0;
LAB_14acca610:
  pUVar2 = (UEasyParticleState *)this->_padding_;
  if ((pUVar2 != (UEasyParticleState *)0x0) && (lVar6 != 0)) {
    pFVar5 = FUIParticleFactorParam::FUIParticleFactorParam(&local_28,&this->Factor,pUVar2);
    fVar7 = FEasyParticlePropertyFloat::GetValue_Float
                      ((FEasyParticlePropertyFloat *)(lVar6 + 0x50),pFVar5);
    dVar8 = (double)fVar7;
    TVar3._8_4_ = SUB84(dVar8,0);
    TVar3._s_0.X = dVar8;
    TVar3._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    (pUVar2->BackBufferState).Size.field0_0x0 = TVar3;
  }
  return;
}

