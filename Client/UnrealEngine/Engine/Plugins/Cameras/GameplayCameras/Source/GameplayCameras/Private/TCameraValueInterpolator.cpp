// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 13

// ~TCameraValueInterpolator<double> @ 14d5909f0

void __thiscall
UE::Cameras::TCameraValueInterpolator<double>::~TCameraValueInterpolator<double>
          (TCameraValueInterpolator<double> *this)

{
  this->_padding_ = (longlong)&___7__TCameraValueInterpolator_N_Cameras_UE__6B_;
  return;
}

// ~TCameraValueInterpolator<UE::Math::TVector2<double>_> @ 14d590a10

void __thiscall
UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>::
~TCameraValueInterpolator<UE::Math::TVector2<double>_>
          (TCameraValueInterpolator<UE::Math::TVector2<double>_> *this)

{
  this->_padding_ =
       (longlong)&___7__TCameraValueInterpolator_U__TVector2_N_Math_UE___Cameras_UE__6B_;
  return;
}

// ~TCameraValueInterpolator<UE::Math::TVector<double>_> @ 14d590a30

void __thiscall
UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>::
~TCameraValueInterpolator<UE::Math::TVector<double>_>
          (TCameraValueInterpolator<UE::Math::TVector<double>_> *this)

{
  this->_padding_ = (longlong)&___7__TCameraValueInterpolator_U__TVector_N_Math_UE___Cameras_UE__6B_
  ;
  return;
}

// OnReset @ 14d5c25f0

void __thiscall
UE::Cameras::TCameraValueInterpolator<double>::OnReset
          (TCameraValueInterpolator<double> *this,double param_1,double param_2)

{
  return;
}

// OnReset @ 14d5c2600

void __thiscall
UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>::OnReset
          (TCameraValueInterpolator<UE::Math::TVector2<double>_> *this,TVector2<double> *param_1,
          TVector2<double> *param_2)

{
  return;
}

// OnReset @ 14d5c2610

void __thiscall
UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>::OnReset
          (TCameraValueInterpolator<UE::Math::TVector<double>_> *this,TVector<double> *param_1,
          TVector<double> *param_2)

{
  return;
}

// OnRun @ 14d5c2620

void __thiscall
UE::Cameras::TCameraValueInterpolator<double>::OnRun
          (TCameraValueInterpolator<double> *this,FCameraValueInterpolationParams *param_1,
          FCameraValueInterpolationResult *param_2)

{
  return;
}

// OnRun @ 14d5c2630

void __thiscall
UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>::OnRun
          (TCameraValueInterpolator<UE::Math::TVector2<double>_> *this,
          FCameraValueInterpolationParams *param_1,FCameraValueInterpolationResult *param_2)

{
  return;
}

// OnRun @ 14d5c2640

void __thiscall
UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>::OnRun
          (TCameraValueInterpolator<UE::Math::TVector<double>_> *this,
          FCameraValueInterpolationParams *param_1,FCameraValueInterpolationResult *param_2)

{
  return;
}

// OnSerialize @ 14d5c3570

void __thiscall
UE::Cameras::TCameraValueInterpolator<double>::OnSerialize
          (TCameraValueInterpolator<double> *this,FCameraValueInterpolatorSerializeParams *param_1,
          FArchive *param_2)

{
  return;
}

// OnSerialize @ 14d5c3580

void __thiscall
UE::Cameras::TCameraValueInterpolator<UE::Math::TVector2<double>_>::OnSerialize
          (TCameraValueInterpolator<UE::Math::TVector2<double>_> *this,
          FCameraValueInterpolatorSerializeParams *param_1,FArchive *param_2)

{
  return;
}

// OnSerialize @ 14d5c3590

void __thiscall
UE::Cameras::TCameraValueInterpolator<UE::Math::TVector<double>_>::OnSerialize
          (TCameraValueInterpolator<UE::Math::TVector<double>_> *this,
          FCameraValueInterpolatorSerializeParams *param_1,FArchive *param_2)

{
  return;
}

// Serialize @ 14d6718a0

void __thiscall
UE::Cameras::TCameraValueInterpolator<double>::Serialize
          (TCameraValueInterpolator<double> *this,FCameraValueInterpolatorSerializeParams *param_1,
          FArchive *param_2)

{
  double *pdVar1;
  double *pdVar2;
  
  pdVar1 = &this->CurrentValue;
  pdVar2 = (double *)**(longlong **)&param_2->field_0x8;
  if ((double *)(*(longlong **)&param_2->field_0x8)[1] < pdVar2 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,pdVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,(ulong64 *)pdVar1);
    }
  }
  else {
    *pdVar1 = *pdVar2;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 8;
  }
  pdVar1 = &this->TargetValue;
  pdVar2 = (double *)**(longlong **)&param_2->field_0x8;
  if ((double *)(*(longlong **)&param_2->field_0x8)[1] < pdVar2 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,pdVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,(ulong64 *)pdVar1);
    }
  }
  else {
    *pdVar1 = *pdVar2;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 8;
  }
  ::operator<<(param_2,&this->bIsFinished);
                    /* WARNING: Could not recover jumptable at 0x00014d671974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,param_1,param_2);
  return;
}

