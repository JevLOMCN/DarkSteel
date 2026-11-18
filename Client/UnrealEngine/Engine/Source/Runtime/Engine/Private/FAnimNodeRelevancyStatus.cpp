// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetCurrentWeight @ 14755b560

float __thiscall FAnimNodeRelevancyStatus::GetCurrentWeight(FAnimNodeRelevancyStatus *this)

{
  return this->CurrentWeight;
}

// GetPreviousWeight @ 14755e850

float __thiscall FAnimNodeRelevancyStatus::GetPreviousWeight(FAnimNodeRelevancyStatus *this)

{
  return this->PreviousWeight;
}

// HasFullyBlendedIn @ 147563a00

bool __thiscall FAnimNodeRelevancyStatus::HasFullyBlendedIn(FAnimNodeRelevancyStatus *this)

{
  if ((__real_3f7fff58 < this->PreviousWeight || __real_3f7fff58 == this->PreviousWeight) &&
     (__real_3f7fff58 < this->CurrentWeight || __real_3f7fff58 == this->CurrentWeight)) {
    return true;
  }
  return false;
}

// HasFullyBlendedOut @ 147563a20

bool __thiscall FAnimNodeRelevancyStatus::HasFullyBlendedOut(FAnimNodeRelevancyStatus *this)

{
  if ((this->PreviousWeight <= __real_3727c5ac) && (this->CurrentWeight <= __real_3727c5ac)) {
    return true;
  }
  return false;
}

// IsFinishingBlendingIn @ 14756a4d0

bool __thiscall FAnimNodeRelevancyStatus::IsFinishingBlendingIn(FAnimNodeRelevancyStatus *this)

{
  if ((this->PreviousWeight <= __real_3f7fff58 && __real_3f7fff58 != this->PreviousWeight) &&
     (__real_3f7fff58 < this->CurrentWeight || __real_3f7fff58 == this->CurrentWeight)) {
    return true;
  }
  return false;
}

// IsFinishingBlendingOut @ 14756a4f0

bool __thiscall FAnimNodeRelevancyStatus::IsFinishingBlendingOut(FAnimNodeRelevancyStatus *this)

{
  if ((__real_3727c5ac < this->PreviousWeight) && (this->CurrentWeight <= __real_3727c5ac)) {
    return true;
  }
  return false;
}

// IsStartingBlendingIn @ 14756ae10

bool __thiscall FAnimNodeRelevancyStatus::IsStartingBlendingIn(FAnimNodeRelevancyStatus *this)

{
  if ((this->PreviousWeight <= __real_3727c5ac) && (__real_3727c5ac < this->CurrentWeight)) {
    return true;
  }
  return false;
}

// IsStartingBlendingOut @ 14756ae30

bool __thiscall FAnimNodeRelevancyStatus::IsStartingBlendingOut(FAnimNodeRelevancyStatus *this)

{
  if ((__real_3f7fff58 < this->PreviousWeight || __real_3f7fff58 == this->PreviousWeight) &&
     (this->CurrentWeight <= __real_3f7fff58 && __real_3f7fff58 != this->CurrentWeight)) {
    return true;
  }
  return false;
}

