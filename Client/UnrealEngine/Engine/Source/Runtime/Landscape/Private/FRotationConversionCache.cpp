// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// GetOrCreatePayload @ 145f93250

FPayload * __thiscall FRotationConversionCache::GetOrCreatePayload(FRotationConversionCache *this)

{
  FPayload *pFVar1;
  double dVar2;
  FPayload *pFVar3;
  FRotationConversionCache local_18 [2];
  
  if ((this->PayloadPtr).Ptr == (FPayload *)0x0) {
    pFVar3 = ::operator_new(0x40);
    dVar2 = UE::Math::TQuat<double>::Identity.Y;
    if (pFVar3 == (FPayload *)0x0) {
      pFVar3 = (FPayload *)0x0;
    }
    else {
      (pFVar3->CachedQuat).X = UE::Math::TQuat<double>::Identity.X;
      (pFVar3->CachedQuat).Y = dVar2;
      dVar2 = UE::Math::TQuat<double>::Identity.W;
      (pFVar3->CachedQuat).Z = UE::Math::TQuat<double>::Identity.Z;
      (pFVar3->CachedQuat).W = dVar2;
      dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      (pFVar3->CachedRotator).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      (pFVar3->CachedRotator).Yaw = dVar2;
      (pFVar3->CachedRotator).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
    }
    if (this != local_18) {
      pFVar1 = (this->PayloadPtr).Ptr;
      (this->PayloadPtr).Ptr = pFVar3;
      pFVar3 = (FPayload *)0x0;
      ::operator_delete(pFVar1,0x40);
    }
    ::operator_delete(pFVar3,0x40);
    return (this->PayloadPtr).Ptr;
  }
  return (this->PayloadPtr).Ptr;
}

