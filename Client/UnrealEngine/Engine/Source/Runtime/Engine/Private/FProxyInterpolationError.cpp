// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetOrCreateErrorInterpolationSettings @ 14830b440

FErrorInterpolationSettings * __thiscall
FProxyInterpolationError::GetOrCreateErrorInterpolationSettings(FProxyInterpolationError *this)

{
  TUniquePtr<FErrorInterpolationSettings,TDefaultDelete<FErrorInterpolationSettings>_> *pTVar1;
  FErrorInterpolationSettings *pFVar2;
  FErrorInterpolationSettings *pFVar3;
  longlong local_18 [2];
  
  pTVar1 = &this->ErrorInterpolationSettings;
  if (pTVar1->Ptr == (FErrorInterpolationSettings *)0x0) {
    pFVar3 = ::operator_new(0x24);
    if (pFVar3 != (FErrorInterpolationSettings *)0x0) {
      pFVar3->ErrorCorrectionDuration = 0.3;
      pFVar3->MaximumErrorCorrectionBeforeSnapping = 250.0;
      pFVar3->MaximumErrorCorrectionDesyncTimeBeforeSnapping = 0.6;
      pFVar3->ErrorDirectionalDecayMultiplier = 0.0;
      pFVar3->bApplyExponentialDecay = false;
      pFVar3->ExponentialDecayLinearHalfLife = 0.06;
      pFVar3->ExponentialDecayAngularHalfLife = 0.06;
      pFVar3->MinimumLinearThreshold = 0.1;
      pFVar3->MinimumAngularThreshold = 0.001;
    }
    if (pTVar1 != (TUniquePtr<FErrorInterpolationSettings,TDefaultDelete<FErrorInterpolationSettings>_>
                   *)local_18) {
      pFVar2 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar3;
      if (pFVar2 == (FErrorInterpolationSettings *)0x0) {
        return pFVar3;
      }
      ::operator_delete(pFVar2,0x24);
      return pTVar1->Ptr;
    }
    if (pFVar3 != (FErrorInterpolationSettings *)0x0) {
      ::operator_delete(pFVar3,0x24);
    }
  }
  return pTVar1->Ptr;
}

