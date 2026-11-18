// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// <lambda_invoker_cdecl> @ 141a47ee0

bool __cdecl
`FCbFieldBinaryTest::RunTest'::__l2::FCbBinaryAccessors::<lambda_5_>::<lambda_invoker_cdecl>
          (FCbFieldView *param_1)

{
  return (param_1->TypeWithFlags & CustomById) == IntegerPositive;
}

// <lambda_invoker_cdecl> @ 141a47f00

FSharedBuffer __cdecl
`FCbFieldBinaryTest::RunTest'::__l2::FCbBinaryAccessors::<lambda_6_>::<lambda_invoker_cdecl>
          (FCbFieldView *param_1,FSharedBuffer *param_2)

{
  FCbField::AsBinary((FCbField *)param_2,(FSharedBuffer *)param_1);
  return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)param_1;
}

