// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// CreateImpl @ 14711bd30

FStructSharedMemory * __cdecl FStructSharedMemory::CreateImpl(UScriptStruct *param_1,uchar *param_2)

{
  UScriptStruct *pUVar1;
  FStructSharedMemory *pFVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar3 = (uint)*(short *)((longlong)&param_1->_padding_ + 4);
  pFVar2 = FMemory::Malloc((longlong)
                           (int)(((int)param_1->_padding_ + -1 + uVar3 & -uVar3) +
                                (uVar3 + 7 & -uVar3)),uVar3);
  (pFVar2->ScriptStruct).field0_0x0.DebugPtr = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pUVar1 = (pFVar2->ScriptStruct).field0_0x0.DebugPtr;
  lVar4 = (longlong)*(short *)((longlong)&pUVar1->_padding_ + 4);
  (**(code **)(pUVar1->_padding_ + 0x2f8))
            (pUVar1,(longlong)&(pFVar2->ScriptStruct).field0_0x0 + lVar4 + 7 & -lVar4,1);
  if (param_2 != (uchar *)0x0) {
    pUVar1 = (pFVar2->ScriptStruct).field0_0x0.DebugPtr;
    lVar4 = (longlong)*(short *)((longlong)&pUVar1->_padding_ + 4);
    UScriptStruct::CopyScriptStruct
              (pUVar1,(void *)((longlong)&(pFVar2->ScriptStruct).field0_0x0 + lVar4 + 7 & -lVar4),
               param_2,1);
  }
  return pFVar2;
}

