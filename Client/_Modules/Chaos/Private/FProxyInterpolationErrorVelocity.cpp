// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 9

// FProxyInterpolationErrorVelocity @ 1440cc020

FProxyInterpolationErrorVelocity * __thiscall
FProxyInterpolationErrorVelocity::FProxyInterpolationErrorVelocity
          (FProxyInterpolationErrorVelocity *this,int param_1,int param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  *(int *)&this->field_0x8 = param_1;
  *(undefined ***)this = &___7FProxyInterpolationError__6B_;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined4 *)&this->field_0x18 = 0;
  *(int *)&this->field_0xc = param_2;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&this->field_0x20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&this->field_0x28 = uVar1;
  *(double *)&this->field_0x30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&this->field_0x38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&this->field_0x40 = uVar1;
  *(double *)&this->field_0x48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)&this->field_0x50 = UE::Math::TQuat<double>::Identity.X;
  *(double *)&this->field_0x58 = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  *(double *)&this->field_0x60 = UE::Math::TQuat<double>::Identity.Z;
  *(double *)&this->field_0x68 = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  *(double *)&this->field_0x70 = UE::Math::TQuat<double>::Identity.X;
  *(double *)&this->field_0x78 = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  *(double *)&this->field_0x80 = UE::Math::TQuat<double>::Identity.Z;
  *(double *)&this->field_0x88 = dVar2;
  *(undefined8 *)&this->field_0x90 = 0;
  *(undefined ***)this = &___7FProxyInterpolationErrorVelocity__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&this->ErrorVelocitySmoothingV =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&(this->ErrorVelocitySmoothingV).field_0x8 = uVar1;
  *(double *)&(this->ErrorVelocitySmoothingV).field_0x10 =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&this->ErrorVelocitySmoothingX =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&(this->ErrorVelocitySmoothingX).field_0x8 = uVar1;
  *(double *)&(this->ErrorVelocitySmoothingX).field_0x10 =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&this->ErrorVelocitySmoothingXPrev =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&(this->ErrorVelocitySmoothingXPrev).field_0x8 = uVar1;
  *(double *)&(this->ErrorVelocitySmoothingXPrev).field_0x10 =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->ErrorVelocitySmoothingCount = 0;
  return this;
}

// ~FProxyInterpolationErrorVelocity @ 1440cd6d0

void __thiscall
FProxyInterpolationErrorVelocity::~FProxyInterpolationErrorVelocity
          (FProxyInterpolationErrorVelocity *this)

{
  *(undefined ***)this = &___7FProxyInterpolationError__6B_;
  if (*(void **)&this->field_0x90 != (void *)0x0) {
    ::operator_delete(*(void **)&this->field_0x90,0x24);
  }
  *(undefined ***)this = &___7FProxyInterpolationBase__6B_;
  return;
}

// GetErrorVelocitySmoothingAlpha @ 1440e4110

float __thiscall
FProxyInterpolationErrorVelocity::GetErrorVelocitySmoothingAlpha
          (FProxyInterpolationErrorVelocity *this,int param_1)

{
  return (float)this->ErrorVelocitySmoothingCount / (float)param_1;
}

// GetErrorVelocitySmoothingX @ 1440e4160

TVector<double,3> * __thiscall
FProxyInterpolationErrorVelocity::GetErrorVelocitySmoothingX
          (FProxyInterpolationErrorVelocity *this,TVector<double,3> *__return_storage_ptr__,
          float param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = *(double *)&(this->ErrorVelocitySmoothingXPrev).field_0x10;
  dVar2 = *(double *)&(this->ErrorVelocitySmoothingXPrev).field_0x8;
  dVar5 = (double)param_1;
  dVar3 = *(double *)&(this->ErrorVelocitySmoothingX).field_0x8;
  *(double *)__return_storage_ptr__ =
       (*(double *)&this->ErrorVelocitySmoothingX - *(double *)&this->ErrorVelocitySmoothingXPrev) *
       dVar5 + *(double *)&this->ErrorVelocitySmoothingXPrev;
  dVar4 = *(double *)&(this->ErrorVelocitySmoothingX).field_0x10;
  *(double *)&__return_storage_ptr__->field_0x8 = (dVar3 - dVar2) * dVar5 + dVar2;
  *(double *)&__return_storage_ptr__->field_0x10 = (dVar4 - dVar1) * dVar5 + dVar1;
  return __return_storage_ptr__;
}

// GetInterpolationType @ 1440e4f40

EProxyInterpolationType __thiscall
FProxyInterpolationErrorVelocity::GetInterpolationType(FProxyInterpolationErrorVelocity *this)

{
  return ErrorVelocity;
}

// IsErrorVelocitySmoothing @ 1440e8470

bool __thiscall
FProxyInterpolationErrorVelocity::IsErrorVelocitySmoothing(FProxyInterpolationErrorVelocity *this)

{
  return 0 < this->ErrorVelocitySmoothingCount;
}

// SetVelocitySmoothing @ 1440f2060

void __thiscall
FProxyInterpolationErrorVelocity::SetVelocitySmoothing
          (FProxyInterpolationErrorVelocity *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)param_1;
  uVar3 = *(undefined8 *)&param_1->field_0x8;
  this->ErrorVelocitySmoothingCount = param_3;
  uVar1 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&this->ErrorVelocitySmoothingV = uVar2;
  *(undefined8 *)&(this->ErrorVelocitySmoothingV).field_0x8 = uVar3;
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)&param_2->field_0x8;
  *(undefined8 *)&(this->ErrorVelocitySmoothingV).field_0x10 = uVar1;
  uVar1 = *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&this->ErrorVelocitySmoothingX = uVar2;
  *(undefined8 *)&(this->ErrorVelocitySmoothingX).field_0x8 = uVar3;
  *(undefined8 *)&this->ErrorVelocitySmoothingXPrev = uVar2;
  *(undefined8 *)&(this->ErrorVelocitySmoothingXPrev).field_0x8 = uVar3;
  *(undefined8 *)&(this->ErrorVelocitySmoothingX).field_0x10 = uVar1;
  *(undefined8 *)&(this->ErrorVelocitySmoothingXPrev).field_0x10 = uVar1;
  return;
}

// StepErrorVelocitySmoothingData @ 1440f2460

void __thiscall
FProxyInterpolationErrorVelocity::StepErrorVelocitySmoothingData
          (FProxyInterpolationErrorVelocity *this,double param_1)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  
  cVar6 = (**(code **)(*(longlong *)this + 0x48))();
  if (cVar6 != '\0') {
    uVar5 = *(undefined8 *)&(this->ErrorVelocitySmoothingX).field_0x8;
    uVar1 = *(undefined8 *)&(this->ErrorVelocitySmoothingX).field_0x10;
    iVar7 = *(int *)&this->field_0x14;
    *(undefined8 *)&this->ErrorVelocitySmoothingXPrev =
         *(undefined8 *)&this->ErrorVelocitySmoothingX;
    *(undefined8 *)&(this->ErrorVelocitySmoothingXPrev).field_0x8 = uVar5;
    *(undefined8 *)&(this->ErrorVelocitySmoothingXPrev).field_0x10 = uVar1;
    dVar9 = (double)iVar7 * param_1;
    dVar2 = *(double *)&(this->ErrorVelocitySmoothingV).field_0x10;
    dVar3 = *(double *)&this->ErrorVelocitySmoothingV;
    dVar4 = *(double *)&this->ErrorVelocitySmoothingX;
    *(double *)&(this->ErrorVelocitySmoothingX).field_0x8 =
         dVar9 * *(double *)&(this->ErrorVelocitySmoothingV).field_0x8 +
         *(double *)&(this->ErrorVelocitySmoothingX).field_0x8;
    *(double *)&(this->ErrorVelocitySmoothingX).field_0x10 =
         dVar9 * dVar2 + *(double *)&(this->ErrorVelocitySmoothingX).field_0x10;
    *(double *)&this->ErrorVelocitySmoothingX = dVar9 * dVar3 + dVar4;
    iVar8 = this->ErrorVelocitySmoothingCount - *(int *)&this->field_0x14;
    iVar7 = 0;
    if (0 < iVar8) {
      iVar7 = iVar8;
    }
    this->ErrorVelocitySmoothingCount = iVar7;
  }
  return;
}

// UpdateError @ 1440f7420

bool __thiscall
FProxyInterpolationErrorVelocity::UpdateError
          (FProxyInterpolationErrorVelocity *this,int param_1,double param_2)

{
  bool bVar1;
  
  bVar1 = FProxyInterpolationError::UpdateError((FProxyInterpolationError *)this,param_1,param_2);
  if (bVar1) {
    (**(code **)(*(longlong *)this + 0x80))(this,SUB84(param_2,0));
    return true;
  }
  return false;
}

