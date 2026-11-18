// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Num @ 147a0d040

int __cdecl
UE::Core::Private::
TAdderReserverVTableImpl<int,TArray<FRichCurveEditInfoTemplate<FRealCurve_const_*>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>
::Num(void *param_1)

{
  return *(int *)((longlong)param_1 + 0x108);
}

// Reserve @ 147a0d050

void __cdecl
UE::Core::Private::
TAdderReserverVTableImpl<int,TArray<FRichCurveEditInfoTemplate<FRealCurve_const_*>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>
::Reserve(void *param_1,int param_2)

{
  if (-1 < param_2) {
    if (*(int *)((longlong)param_1 + 0x10c) < param_2) {
      ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FRichCurveEditInfoTemplate<FRealCurve_const_*>_>_>
                (0x10,8,param_2,param_1,*(int *)((longlong)param_1 + 0x108),
                 (int *)((longlong)param_1 + 0x10c));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)(uint)param_2);
}

