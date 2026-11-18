// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryDataflowNodes
// Functions: 2

// operator() @ 150599d50

bool __thiscall
`FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>_&,TObjectPtr<UDynamicMesh>_>'::__l7::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>&___ptr64,TObjectPtr<class_UDynamicMesh>_>(UE::Dataflow::FContext&___ptr64,TObjectPtr<UDynamicMesh>&___ptr64,TObjectPtr<class_UDynamicMesh>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150599d90

bool __thiscall
`FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>,TObjectPtr<UDynamicMesh>_>'::__l7::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3734611412631158242>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3734611412631158242>,
                       &`public:___cdecl_`public:_void___cdecl_FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>,TObjectPtr<class_UDynamicMesh>_>(UE::Dataflow::FContext&___ptr64,TObjectPtr<UDynamicMesh>&&___ptr64,TObjectPtr<class_UDynamicMesh>_const*___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

