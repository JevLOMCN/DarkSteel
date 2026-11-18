// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 8

// StaticClass @ 14aca6a50

UClass * __cdecl UEasyParticleComponent_InheritParentVelocity_Runtime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InheritParentVelocity_Runtime.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InheritParentVelocity_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InheritParentVelocity_Runtime.
                InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_InheritParentVelocity_Runtime,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_InheritParentVelocity_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InheritParentVelocity_Runtime>,
               local_res8,UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InheritParentVelocity_Runtime.
         InnerSingleton;
}

// UEasyParticleComponent_InheritParentVelocity_Runtime @ 14aca9b90

UEasyParticleComponent_InheritParentVelocity_Runtime * __thiscall
UEasyParticleComponent_InheritParentVelocity_Runtime::
UEasyParticleComponent_InheritParentVelocity_Runtime
          (UEasyParticleComponent_InheritParentVelocity_Runtime *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UEasyParticleComponent_InheritParentVelocity_Runtime__6B_;
  return this;
}

// ~UEasyParticleComponent_InheritParentVelocity_Runtime @ 14acaa8e0

void __thiscall
UEasyParticleComponent_InheritParentVelocity_Runtime::
~UEasyParticleComponent_InheritParentVelocity_Runtime
          (UEasyParticleComponent_InheritParentVelocity_Runtime *this)

{
  *(undefined ***)this = &___7UEasyParticleComponentRuntime__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14acad100

UClass * __cdecl UEasyParticleComponent_InheritParentVelocity_Runtime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_InheritParentVelocity_Runtime.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_InheritParentVelocity_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_InheritParentVelocity_Runtime.
                InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_InheritParentVelocity_Runtime,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_InheritParentVelocity_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_InheritParentVelocity_Runtime>,
               local_res8,UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_InheritParentVelocity_Runtime.
         InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_InheritParentVelocity_Runtime @ 14acae320

void __cdecl
UEasyParticleComponent_InheritParentVelocity_Runtime::
StaticRegisterNativesUEasyParticleComponent_InheritParentVelocity_Runtime(void)

{
  return;
}

// UEasyParticleComponent_InheritParentVelocity_Runtime @ 14acb6b50

UEasyParticleComponent_InheritParentVelocity_Runtime * __thiscall
UEasyParticleComponent_InheritParentVelocity_Runtime::
UEasyParticleComponent_InheritParentVelocity_Runtime
          (UEasyParticleComponent_InheritParentVelocity_Runtime *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UEasyParticleComponent_InheritParentVelocity_Runtime__6B_;
  return this;
}

// Init_Implementation @ 14acbbc20

void __thiscall
UEasyParticleComponent_InheritParentVelocity_Runtime::Init_Implementation
          (UEasyParticleComponent_InheritParentVelocity_Runtime *this,FGeometry *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  UClass *pUVar4;
  UEasyParticleState *pUVar5;
  longlong lVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  
  lVar6 = *(longlong *)&this->field_0x28;
  if (lVar6 != 0) {
    pUVar4 = Z_Construct_UClass_UEasyParticleComponent_InheritParentVelocity_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14acbbc5b;
  }
  lVar6 = 0;
LAB_14acbbc5b:
  if ((*(UEasyParticleState **)&this->field_0x30 != (UEasyParticleState *)0x0) && (lVar6 != 0)) {
    pUVar5 = UEasyParticleState::GetParent(*(UEasyParticleState **)&this->field_0x30);
    if (pUVar5 != (UEasyParticleState *)0x0) {
      fVar7 = (pUVar5->BackBufferState).Lifetime - (pUVar5->CurrentState).Lifetime;
      lVar2 = *(longlong *)&this->field_0x30;
      if (fVar7 == 0.0) {
        dVar8 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_8_;
        dVar9 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_8_;
      }
      else {
        dVar8 = __real_3ff0000000000000 / (double)fVar7;
        dVar9 = dVar8 * ((pUVar5->BackBufferState).Position.field0_0x0._s_0.Y -
                        (pUVar5->CurrentState).Position.field0_0x0._s_0.Y);
        dVar8 = dVar8 * ((pUVar5->BackBufferState).Position.field0_0x0._s_0.X -
                        (pUVar5->CurrentState).Position.field0_0x0._s_0.X);
      }
      dVar9 = (double)*(float *)(lVar6 + 0x50) * dVar9 + *(double *)(lVar2 + 0x50);
      auVar3._8_4_ = SUB84(dVar9,0);
      auVar3._0_8_ = (double)*(float *)(lVar6 + 0x50) * dVar8 + *(double *)(lVar2 + 0x48);
      auVar3._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      *(undefined1 (*) [16])(lVar2 + 0x48) = auVar3;
    }
  }
  return;
}

// Reset_Implementation @ 14acbd4a0

void __thiscall
UEasyParticleComponent_InheritParentVelocity_Runtime::Reset_Implementation
          (UEasyParticleComponent_InheritParentVelocity_Runtime *this)

{
  return;
}

