// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 7

// ComputeDesiredSize @ 1425d2060

TVector2<double> * __thiscall
SNullWidgetContent::ComputeDesiredSize
          (SNullWidgetContent *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  return __return_storage_ptr__;
}

// ComputeVolatility @ 1425d2320

bool __thiscall SNullWidgetContent::ComputeVolatility(SNullWidgetContent *this)

{
  return false;
}

// GetChildren @ 1425dfcc0

FChildren * __thiscall SNullWidgetContent::GetChildren(SNullWidgetContent *this)

{
  return (FChildren *)&FNoChildren::NoChildrenInstance;
}

// OnArrangeChildren @ 1425eba50

void __thiscall
SNullWidgetContent::OnArrangeChildren
          (SNullWidgetContent *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  return;
}

// OnPaint @ 1425f0250

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SNullWidgetContent::OnPaint
          (SNullWidgetContent *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  return param_5;
}

// SetVisibility @ 1425fe7c0

void __thiscall
SNullWidgetContent::SetVisibility(SNullWidgetContent *this,TAttribute<EVisibility> *param_1)

{
  void *pvVar1;
  undefined1 local_res8 [32];
  
  if ((this->field_0x31 & 4) != 0) {
    `SNullWidgetContent::SetVisibility'::__l2::<lambda_1>::operator()(local_res8);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  return;
}

// operator() @ 150490690

bool __thiscall `SNullWidgetContent::SetVisibility'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7769625714256511017>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7769625714256511017>,
                       &`public:___cdecl_`private:_virtual_void___cdecl_SNullWidgetContent::SetVisibility(TAttribute<EVisibility>)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

