// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetPosition @ 14763f080

TVector<double> * __thiscall
FListenerProxy::GetPosition
          (FListenerProxy *this,TVector<double> *__return_storage_ptr__,bool param_1)

{
  double dVar1;
  double dVar2;
  
  if ((param_1) && (this->bUseAttenuationOverride != 0)) {
    dVar1 = (this->AttenuationOverride).field0_0x0._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (this->AttenuationOverride).field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (this->AttenuationOverride).field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
  dVar2 = (this->Transform).Translation.XY.m128d_f64[1];
  dVar1 = (this->Transform).Translation.ZW.m128d_f64[0];
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Transform).Translation.XY.m128d_f64[0];
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

