// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 3

// Apply @ 149692050

void __thiscall FTransformProxyChange::Apply(FTransformProxyChange *this,UObject *param_1)

{
  bool bVar1;
  UTransformProxy *pUVar2;
  TTransform<double> local_68;
  
  pUVar2 = CastChecked<UTransformProxy,UObject>(param_1);
  bVar1 = pUVar2->bSetPivotMode;
  pUVar2->bSetPivotMode = this->bSetPivotMode;
  (**(code **)(pUVar2->_padding_ + 0x2c8))(pUVar2,&this->To);
  local_68.Rotation.XY.m128d_f64[0] = (this->To).Rotation.XY.m128d_f64[0];
  local_68.Rotation.XY.m128d_f64[1] = (this->To).Rotation.XY.m128d_f64[1];
  local_68.Rotation.ZW.m128d_f64[0] = (this->To).Rotation.ZW.m128d_f64[0];
  local_68.Rotation.ZW.m128d_f64[1] = (this->To).Rotation.ZW.m128d_f64[1];
  local_68.Translation.XY.m128d_f64[0] = (this->To).Translation.XY.m128d_f64[0];
  local_68.Translation.XY.m128d_f64[1] = (this->To).Translation.XY.m128d_f64[1];
  local_68.Translation.ZW.m128d_f64[0] = (this->To).Translation.ZW.m128d_f64[0];
  local_68.Translation.ZW.m128d_f64[1] = (this->To).Translation.ZW.m128d_f64[1];
  local_68.Scale3D.XY.m128d_f64[0] = (this->To).Scale3D.XY.m128d_f64[0];
  local_68.Scale3D.XY.m128d_f64[1] = (this->To).Scale3D.XY.m128d_f64[1];
  local_68.Scale3D.ZW.m128d_f64[0] = (this->To).Scale3D.ZW.m128d_f64[0];
  local_68.Scale3D.ZW.m128d_f64[1] = (this->To).Scale3D.ZW.m128d_f64[1];
  TMulticastDelegate<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
  ::Broadcast(&pUVar2->OnTransformChangedUndoRedo,pUVar2,&local_68);
  pUVar2->bSetPivotMode = bVar1;
  return;
}

// Revert @ 1496bbd70

void __thiscall FTransformProxyChange::Revert(FTransformProxyChange *this,UObject *param_1)

{
  bool bVar1;
  UTransformProxy *pUVar2;
  TTransform<double> local_68;
  
  pUVar2 = CastChecked<UTransformProxy,UObject>(param_1);
  bVar1 = pUVar2->bSetPivotMode;
  pUVar2->bSetPivotMode = this->bSetPivotMode;
  (**(code **)(pUVar2->_padding_ + 0x2c8))(pUVar2,&this->From);
  local_68.Rotation.XY.m128d_f64[0] = (this->From).Rotation.XY.m128d_f64[0];
  local_68.Rotation.XY.m128d_f64[1] = (this->From).Rotation.XY.m128d_f64[1];
  local_68.Rotation.ZW.m128d_f64[0] = (this->From).Rotation.ZW.m128d_f64[0];
  local_68.Rotation.ZW.m128d_f64[1] = (this->From).Rotation.ZW.m128d_f64[1];
  local_68.Translation.XY.m128d_f64[0] = (this->From).Translation.XY.m128d_f64[0];
  local_68.Translation.XY.m128d_f64[1] = (this->From).Translation.XY.m128d_f64[1];
  local_68.Translation.ZW.m128d_f64[0] = (this->From).Translation.ZW.m128d_f64[0];
  local_68.Translation.ZW.m128d_f64[1] = (this->From).Translation.ZW.m128d_f64[1];
  local_68.Scale3D.XY.m128d_f64[0] = (this->From).Scale3D.XY.m128d_f64[0];
  local_68.Scale3D.XY.m128d_f64[1] = (this->From).Scale3D.XY.m128d_f64[1];
  local_68.Scale3D.ZW.m128d_f64[0] = (this->From).Scale3D.ZW.m128d_f64[0];
  local_68.Scale3D.ZW.m128d_f64[1] = (this->From).Scale3D.ZW.m128d_f64[1];
  TMulticastDelegate<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
  ::Broadcast(&pUVar2->OnTransformChangedUndoRedo,pUVar2,&local_68);
  pUVar2->bSetPivotMode = bVar1;
  return;
}

// ToString @ 1496c32d0

FString * __thiscall
FTransformProxyChange::ToString(FTransformProxyChange *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FTransformProxyChange");
  return __return_storage_ptr__;
}

