// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 8

// StaticClass @ 14aca61b0

UClass * __cdecl UEasyParticleComponent_FollowParentPosition_Runtime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_FollowParentPosition_Runtime.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_FollowParentPosition_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_FollowParentPosition_Runtime.
                InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_FollowParentPosition_Runtime,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_FollowParentPosition_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_FollowParentPosition_Runtime>,
               local_res8,UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_FollowParentPosition_Runtime.
         InnerSingleton;
}

// UEasyParticleComponent_FollowParentPosition_Runtime @ 14aca9a60

UEasyParticleComponent_FollowParentPosition_Runtime * __thiscall
UEasyParticleComponent_FollowParentPosition_Runtime::
UEasyParticleComponent_FollowParentPosition_Runtime
          (UEasyParticleComponent_FollowParentPosition_Runtime *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UEasyParticleComponent_FollowParentPosition_Runtime__6B_;
  return this;
}

// ~UEasyParticleComponent_FollowParentPosition_Runtime @ 14acaa800

void __thiscall
UEasyParticleComponent_FollowParentPosition_Runtime::
~UEasyParticleComponent_FollowParentPosition_Runtime
          (UEasyParticleComponent_FollowParentPosition_Runtime *this)

{
  *(undefined ***)this = &___7UEasyParticleComponentRuntime__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14acace00

UClass * __cdecl UEasyParticleComponent_FollowParentPosition_Runtime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_FollowParentPosition_Runtime.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_FollowParentPosition_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_FollowParentPosition_Runtime.
                InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_FollowParentPosition_Runtime,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UEasyParticleComponent_FollowParentPosition_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_FollowParentPosition_Runtime>,
               local_res8,UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_FollowParentPosition_Runtime.
         InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_FollowParentPosition_Runtime @ 14acae2e0

void __cdecl
UEasyParticleComponent_FollowParentPosition_Runtime::
StaticRegisterNativesUEasyParticleComponent_FollowParentPosition_Runtime(void)

{
  return;
}

// UEasyParticleComponent_FollowParentPosition_Runtime @ 14acb68e0

UEasyParticleComponent_FollowParentPosition_Runtime * __thiscall
UEasyParticleComponent_FollowParentPosition_Runtime::
UEasyParticleComponent_FollowParentPosition_Runtime
          (UEasyParticleComponent_FollowParentPosition_Runtime *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined ***)this = &___7UEasyParticleComponent_FollowParentPosition_Runtime__6B_;
  return this;
}

// PostTick_Implementation @ 14acbca90

void __thiscall
UEasyParticleComponent_FollowParentPosition_Runtime::PostTick_Implementation
          (UEasyParticleComponent_FollowParentPosition_Runtime *this,FGeometry *param_1,
          float param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  UClass *pUVar4;
  UEasyParticleState *pUVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)&this->field_0x28;
  if (lVar6 != 0) {
    pUVar4 = Z_Construct_UClass_UEasyParticleComponent_FollowParentPosition_NoRegister();
    iVar3 = (int)pUVar4->_padding_;
    if ((iVar3 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar3 * 8) ==
        &pUVar4->_padding_)) goto LAB_14acbcacb;
  }
  lVar6 = 0;
LAB_14acbcacb:
  if ((*(UEasyParticleState **)&this->field_0x30 != (UEasyParticleState *)0x0) && (lVar6 != 0)) {
    pUVar5 = UEasyParticleState::GetParent(*(UEasyParticleState **)&this->field_0x30);
    if (pUVar5 != (UEasyParticleState *)0x0) {
      lVar6 = *(longlong *)&this->field_0x30;
      dVar1 = (pUVar5->BackBufferState).Position.field0_0x0._s_0.Y;
      dVar2 = (pUVar5->CurrentState).Position.field0_0x0._s_0.Y;
      *(double *)(lVar6 + 0x168) =
           ((pUVar5->BackBufferState).Position.field0_0x0._s_0.X -
           (pUVar5->CurrentState).Position.field0_0x0._s_0.X) + *(double *)(lVar6 + 0x168);
      *(double *)(lVar6 + 0x170) = (dVar1 - dVar2) + *(double *)(lVar6 + 0x170);
    }
  }
  return;
}

// Reset_Implementation @ 14acbd430

void __thiscall
UEasyParticleComponent_FollowParentPosition_Runtime::Reset_Implementation
          (UEasyParticleComponent_FollowParentPosition_Runtime *this)

{
  return;
}

