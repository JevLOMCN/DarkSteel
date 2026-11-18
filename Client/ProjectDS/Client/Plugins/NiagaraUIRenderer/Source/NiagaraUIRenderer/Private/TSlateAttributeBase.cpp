// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraUIRenderer
// Functions: 1

// Set @ 14d299550

bool __thiscall
SlateAttributePrivate::
TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
::Set(TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      *this,SWidget *param_1,TVector2<double> *param_2)

{
  double dVar1;
  
  FSlateAttributeImpl::ProtectedUnregisterAttribute((FSlateAttributeImpl *)this,param_1,Member);
  if (((param_2->field0_0x0)._s_0.X == (this->Value).field0_0x0._s_0.X) &&
     ((param_2->field0_0x0)._s_0.Y == (this->Value).field0_0x0._s_0.Y)) {
    return false;
  }
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (this->Value).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->Value).field0_0x0._s_0.Y = dVar1;
  FSlateAttributeImpl::ProtectedInvalidateWidget((FSlateAttributeImpl *)this,param_1,Member,None);
  return true;
}

