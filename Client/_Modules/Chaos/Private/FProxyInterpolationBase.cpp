// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 14

// ~FProxyInterpolationBase @ 1440cd670

void __thiscall FProxyInterpolationBase::~FProxyInterpolationBase(FProxyInterpolationBase *this)

{
  this->_padding_ = (longlong)&___7FProxyInterpolationBase__6B_;
  return;
}

// AccumlateErrorXR @ 1440d17e0

void __thiscall
FProxyInterpolationBase::AccumlateErrorXR
          (FProxyInterpolationBase *this,TVector<double,3> *param_1,TQuat<double> *param_2,
          int param_3,int param_4)

{
  return;
}

// DirectionalDecay @ 1440db470

bool __thiscall
FProxyInterpolationBase::DirectionalDecay(FProxyInterpolationBase *this,TVector<double,3> *param_1)

{
  undefined1 uVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_28 = *(undefined4 *)param_1;
  uStack_24 = *(undefined4 *)&param_1->field_0x4;
  uStack_20 = *(undefined4 *)&param_1->field_0x8;
  uStack_1c = *(undefined4 *)&param_1->field_0xc;
  local_18 = *(undefined8 *)&param_1->field_0x10;
  uVar1 = (**(code **)(this->_padding_ + 0x38))(local_28,&local_28,0);
  return (bool)uVar1;
}

// DirectionalDecay @ 1440db4a0

bool __thiscall
FProxyInterpolationBase::DirectionalDecay
          (FProxyInterpolationBase *this,TVector<double,3> *param_1,float param_2)

{
  return false;
}

// GetErrorInterpolationSettings @ 1440e3fe0

FErrorInterpolationSettings * __thiscall
FProxyInterpolationBase::GetErrorInterpolationSettings(FProxyInterpolationBase *this)

{
  return (FErrorInterpolationSettings *)0x0;
}

// GetErrorR @ 1440e4000

TQuat<double> * __thiscall
FProxyInterpolationBase::GetErrorR
          (FProxyInterpolationBase *this,TQuat<double> *__return_storage_ptr__,float param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = UE::Math::TQuat<double>::Identity.W;
  dVar2 = UE::Math::TQuat<double>::Identity.Z;
  dVar1 = UE::Math::TQuat<double>::Identity.Y;
  __return_storage_ptr__->X = UE::Math::TQuat<double>::Identity.X;
  __return_storage_ptr__->Y = dVar1;
  __return_storage_ptr__->Z = dVar2;
  __return_storage_ptr__->W = dVar3;
  return __return_storage_ptr__;
}

// GetErrorVelocitySmoothingAlpha @ 1440e4100

float __thiscall
FProxyInterpolationBase::GetErrorVelocitySmoothingAlpha(FProxyInterpolationBase *this,int param_1)

{
  return 0.0;
}

// GetErrorVelocitySmoothingX @ 1440e4130

TVector<double,3> * __thiscall
FProxyInterpolationBase::GetErrorVelocitySmoothingX
          (FProxyInterpolationBase *this,TVector<double,3> *__return_storage_ptr__,float param_1)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)__return_storage_ptr__ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
  *(double *)&__return_storage_ptr__->field_0x10 =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetErrorX @ 1440e41e0

TVector<double,3> * __thiscall
FProxyInterpolationBase::GetErrorX
          (FProxyInterpolationBase *this,TVector<double,3> *__return_storage_ptr__,float param_1)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)__return_storage_ptr__ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar1;
  *(double *)&__return_storage_ptr__->field_0x10 =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetInterpolationType @ 1440e4f20

EProxyInterpolationType __thiscall
FProxyInterpolationBase::GetInterpolationType(FProxyInterpolationBase *this)

{
  return Base;
}

// IsErrorSmoothing @ 1440e8450

bool __thiscall FProxyInterpolationBase::IsErrorSmoothing(FProxyInterpolationBase *this)

{
  return false;
}

// IsErrorVelocitySmoothing @ 1440e8460

bool __thiscall FProxyInterpolationBase::IsErrorVelocitySmoothing(FProxyInterpolationBase *this)

{
  return false;
}

// SetVelocitySmoothing @ 1440f2050

void __thiscall
FProxyInterpolationBase::SetVelocitySmoothing
          (FProxyInterpolationBase *this,TVector<double,3> *param_1,TVector<double,3> *param_2,
          int param_3)

{
  return;
}

// UpdateError @ 1440f7410

bool __thiscall
FProxyInterpolationBase::UpdateError(FProxyInterpolationBase *this,int param_1,double param_2)

{
  return false;
}

