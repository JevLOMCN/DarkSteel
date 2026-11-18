// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraUIRenderer
// Functions: 2

// operator() @ 15057a620

bool __thiscall
`TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMaterialInterface>,TSharedPtr<FSlateMaterialBrush,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_652984193206188913>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_652984193206188913>,
                       &`public:___cdecl_`public:_bool___cdecl_TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMaterialInterface>,TSharedPtr<FSlateMaterialBrush,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::TRangedForIterator::operator!=(TSparseArray<class_TSparseSetElement<struct_TTuple<struct_TObjectPtr<class_UMaterialInterface>,class_TSharedPtr<struct_FSlateMaterialBrush,1>_>_>,class_TSparseArrayAllocator<class_TSizedDefaultAllocator<32>,class_FDefaultBitArrayAllocator>_>::TRangedForIterator_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15057a660

bool __thiscall
`TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_652984193206188913>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_652984193206188913>,
                       &`public:___cdecl_`public:_bool___cdecl_TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::TRangedForIterator::operator!=(TSparseArray<class_TSparseSetElement<struct_TTuple<struct_FNiagaraID,class_TArray<int,class_TSizedDefaultAllocator<32>_>_>_>,class_TSparseArrayAllocator<class_TSizedDefaultAllocator<32>,class_FDefaultBitArrayAllocator>_>::TRangedForIterator_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

