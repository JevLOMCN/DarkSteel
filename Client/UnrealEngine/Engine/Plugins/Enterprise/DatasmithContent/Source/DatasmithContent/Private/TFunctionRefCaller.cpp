// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 1

// Call @ 14e2f8670

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UDatasmithOptionsBase::Serialize'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  FArchive *pFVar1;
  
  pFVar1 = StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(*(FSlotBase **)param_1);
  pFVar1->field_0x2a =
       pFVar1->field_0x2a ^ (**(char **)((longlong)param_1 + 8) << 2 ^ pFVar1->field_0x2a) & 4U;
  return;
}

