// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// Create @ 143247120

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

IChunkDataAccess * __cdecl BuildPatchServices::FChunkDataAccessFactory::Create(uint param_1)

{
  undefined1 *puVar1;
  IChunkDataAccess *pIVar2;
  
  pIVar2 = ::operator_new(0x88);
  if (pIVar2 != (IChunkDataAccess *)0x0) {
    *(undefined4 *)(pIVar2 + 1) = 3;
    *pIVar2 = (IChunkDataAccess)&___7FChunkDataAccess_BuildPatchServices__6B_;
    puVar1 = &pIVar2[0xb].field_0x4;
    *(undefined8 *)&pIVar2[1].field_0x4 = 0x42;
    *(undefined8 *)&pIVar2[2].field_0x4 = 0;
    *(undefined8 *)&pIVar2[3].field_0x4 = 0;
    pIVar2[6] = (IChunkDataAccess)0x0;
    *(undefined4 *)&pIVar2[4].field_0x4 = 0x100000;
    *(undefined2 *)(pIVar2 + 5) = 0x100;
    pIVar2[7] = (IChunkDataAccess)0x0;
    pIVar2[8] = (IChunkDataAccess)0x0;
    *(undefined4 *)(pIVar2 + 9) = 0;
    pIVar2[10] = (IChunkDataAccess)0x0;
    *(undefined4 *)(pIVar2 + 0xb) = 0;
    *(undefined4 *)puVar1 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pIVar2 + 0xc),4000);
    if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
    }
    if (*(int *)puVar1 < (int)param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,param_1,(ForAnyElementType *)(pIVar2 + 10),*(int *)(pIVar2 + 0xb),(int *)puVar1
                );
    }
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(pIVar2 + 10),param_1,Default);
  }
  return pIVar2;
}

