// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 11

// StaticClass @ 14aca5190

UClass * __cdecl UEasyParticleComponent_Basic_Runtime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_Basic_Runtime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_Basic_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_Basic_Runtime.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_Basic_Runtime,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_Basic_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_Basic_Runtime>,local_res8,
               UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_Basic_Runtime.InnerSingleton;
}

// UEasyParticleComponent_Basic_Runtime @ 14aca9790

UEasyParticleComponent_Basic_Runtime * __thiscall
UEasyParticleComponent_Basic_Runtime::UEasyParticleComponent_Basic_Runtime
          (UEasyParticleComponent_Basic_Runtime *this,FVTableHelper *param_1)

{
  uint uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Basic_Runtime__6B_;
  uVar1 = rand();
  (this->MaxParticleCountFactor).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  uVar1 = rand();
  (this->SpawnRateFactor).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  uVar1 = rand();
  (this->LifetimeFactor).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return this;
}

// ~UEasyParticleComponent_Basic_Runtime @ 14acaa610

void __thiscall
UEasyParticleComponent_Basic_Runtime::~UEasyParticleComponent_Basic_Runtime
          (UEasyParticleComponent_Basic_Runtime *this)

{
  this->_padding_ = (longlong)&___7UEasyParticleComponentRuntime__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14acac800

UClass * __cdecl UEasyParticleComponent_Basic_Runtime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEasyParticleComponent_Basic_Runtime.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EasyParticleModule",L"EasyParticleComponent_Basic_Runtime",
               &Z_Registration_Info_UClass_UEasyParticleComponent_Basic_Runtime.InnerSingleton,
               StaticRegisterNativesUEasyParticleComponent_Basic_Runtime,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEasyParticleComponent_Basic_Runtime>,
               InternalVTableHelperCtorCaller<UEasyParticleComponent_Basic_Runtime>,local_res8,
               UEasyParticleComponentRuntime::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEasyParticleComponent_Basic_Runtime.InnerSingleton;
}

// StaticRegisterNativesUEasyParticleComponent_Basic_Runtime @ 14acae260

void __cdecl
UEasyParticleComponent_Basic_Runtime::StaticRegisterNativesUEasyParticleComponent_Basic_Runtime
          (void)

{
  return;
}

// UEasyParticleComponent_Basic_Runtime @ 14acb63d0

UEasyParticleComponent_Basic_Runtime * __thiscall
UEasyParticleComponent_Basic_Runtime::UEasyParticleComponent_Basic_Runtime
          (UEasyParticleComponent_Basic_Runtime *this,FObjectInitializer *param_1)

{
  uint uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UEasyParticleComponent_Basic_Runtime__6B_;
  uVar1 = rand();
  (this->MaxParticleCountFactor).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  uVar1 = rand();
  (this->SpawnRateFactor).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  uVar1 = rand();
  (this->LifetimeFactor).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return this;
}

// Init_Implementation @ 14acbb6a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UEasyParticleComponent_Basic_Runtime::Init_Implementation
          (UEasyParticleComponent_Basic_Runtime *this,FGeometry *param_1)

{
  int iVar1;
  UEasyParticleState *this_00;
  longlong lVar2;
  TVector2<double>_u_0 TVar3;
  TVector2<double> TVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  UEasyParticleState *pUVar7;
  longlong lVar8;
  float fVar9;
  double dVar10;
  float local_res8;
  float fStackX_c;
  FUIParticleFactorParam local_28;
  
  lVar8 = this->_padding_;
  if (lVar8 != 0) {
    pUVar5 = Z_Construct_UClass_UEasyParticleComponent_Basic_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14acbb6ea;
  }
  lVar8 = 0;
LAB_14acbb6ea:
  this_00 = (UEasyParticleState *)this->_padding_;
  if ((this_00 != (UEasyParticleState *)0x0) && (lVar8 != 0)) {
    pUVar6 = UEasyParticleState::GetBrushObject(this_00);
    if (pUVar6 == (UObject *)0x0) {
      UEasyParticleState::SetBrush
                ((UEasyParticleState *)this->_padding_,*(UObject **)(lVar8 + 0x50));
    }
    lVar2 = this->_padding_;
    local_28.Factor = (this->LifetimeFactor).factor;
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
    fVar9 = FEasyParticlePropertyFloat::GetValue_Float
                      ((FEasyParticlePropertyFloat *)(lVar8 + 0x3b0),&local_28);
    (this_00->InitialState).Lifetime = fVar9;
    pUVar7 = UEasyParticleState::GetParent((UEasyParticleState *)this->_padding_);
    if (pUVar7 != (UEasyParticleState *)0x0) {
      (this_00->InitialState).RootEmitterLifetime = (pUVar7->CurrentState).RootEmitterLifetime;
      dVar10 = (pUVar7->BackBufferState).Position.field0_0x0._s_0.Y;
      (this_00->InitialState).Position.field0_0x0._s_0.X =
           (pUVar7->BackBufferState).Position.field0_0x0._s_0.X;
      (this_00->InitialState).Position.field0_0x0._s_0.Y = dVar10;
    }
    dVar10 = _UNK_1512468d8;
    (this_00->InitialState).Size.field0_0x0._s_0.X = ___xmm_40590000000000004059000000000000;
    (this_00->InitialState).Size.field0_0x0._s_0.Y = dVar10;
    (this_00->InitialState).AutoSizeScale = 1.0;
    fStackX_c = SUB84(param_1->Size,4);
    local_res8 = SUB84(param_1->Size,0);
    dVar10 = (double)(fStackX_c * __real_3f000000 * (param_1->AccumulatedRenderTransform).M.M[1][1]
                      + local_res8 * __real_3f000000 *
                        (param_1->AccumulatedRenderTransform).M.M[0][1] +
                     (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y);
    TVar3._8_4_ = SUB84(dVar10,0);
    TVar3._s_0.X = (double)(fStackX_c * __real_3f000000 *
                            (param_1->AccumulatedRenderTransform).M.M[1][0] +
                            local_res8 * __real_3f000000 *
                            (param_1->AccumulatedRenderTransform).M.M[0][0] +
                           (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X);
    TVar3._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    (this_00->InitialState).WidgetPositionAbsolute.field0_0x0 = TVar3;
    TVar4 = UE::Math::TVector2<double>::ZeroVector;
    (this_00->InitialState).DrawEffect = None;
    (this_00->InitialState).Velocity.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar4.field0_0x0;
  }
  return;
}

// IsEnd @ 14acbbf60

bool __thiscall
UEasyParticleComponent_Basic_Runtime::IsEnd(UEasyParticleComponent_Basic_Runtime *this)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    return *(float *)(lVar1 + 0x40) < *(float *)(lVar1 + 200) ||
           *(float *)(lVar1 + 0x40) == *(float *)(lVar1 + 200);
  }
  return true;
}

// OnSubEmitterCreate @ 14acbc370

void __thiscall
UEasyParticleComponent_Basic_Runtime::OnSubEmitterCreate
          (UEasyParticleComponent_Basic_Runtime *this,
          FEasyParticleComponentRuntime_Child_SubEmitter *param_1)

{
  int iVar1;
  UClass *pUVar2;
  longlong lVar3;
  
  lVar3 = this->_padding_;
  if (lVar3 != 0) {
    pUVar2 = Z_Construct_UClass_UEasyParticleComponent_Basic_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14acbc3b3;
  }
  lVar3 = 0;
LAB_14acbc3b3:
  if (((param_1 != (FEasyParticleComponentRuntime_Child_SubEmitter *)0x0) && (lVar3 != 0)) &&
     (this->_padding_ != 0)) {
    param_1->Deadtime = *(float *)(lVar3 + 0x58);
    param_1->ChildLayer = *(int *)(this->_padding_ + 0x2a0);
  }
  return;
}

// Reset_Implementation @ 14acbd2d0

void __thiscall
UEasyParticleComponent_Basic_Runtime::Reset_Implementation
          (UEasyParticleComponent_Basic_Runtime *this)

{
  uint uVar1;
  
  uVar1 = rand();
  (this->LifetimeFactor).factor = (float)(uVar1 & 0x7fff) * __real_38000100;
  return;
}

// Tick_Implementation @ 14acbda30

void __thiscall
UEasyParticleComponent_Basic_Runtime::Tick_Implementation
          (UEasyParticleComponent_Basic_Runtime *this,FGeometry *param_1,float param_2)

{
  longlong lVar1;
  UEasyParticleState *pUVar2;
  
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    *(float *)(lVar1 + 0x150) = param_2 + *(float *)(lVar1 + 0x150);
    pUVar2 = UEasyParticleState::GetParent((UEasyParticleState *)this->_padding_);
    if (pUVar2 != (UEasyParticleState *)0x0) {
      *(float *)(lVar1 + 0x1d0) = (pUVar2->BackBufferState).RootEmitterLifetime;
    }
  }
  return;
}

