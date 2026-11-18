// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 1

// GetElementPtr @ 148ba84b0

uchar * __thiscall FScriptSetHelper::GetElementPtr(FScriptSetHelper *this,int param_1)

{
  TScriptSparseSet<FDefaultSetAllocator> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uchar *puVar4;
  ForElementType<unsigned_int> FVar5;
  
  pTVar1 = this->Set;
  if ((pTVar1->Elements).Data.ArrayNum == (pTVar1->Elements).NumFreeIndices) {
    if (param_1 != 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InternalIndex == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x169e,
                         L"Legacy implementation was only allowing requesting InternalIndex 0 on an empty container."
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        puVar4 = (uchar *)(*pcVar2)();
        return puVar4;
      }
    }
    return (uchar *)0x0;
  }
  if ((-1 < param_1) && (param_1 < (pTVar1->Elements).AllocationFlags.NumBits)) {
    FVar5 = (pTVar1->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
    if (FVar5 == (ForElementType<unsigned_int>)0x0) {
      FVar5 = (ForElementType<unsigned_int>)&(pTVar1->Elements).AllocationFlags;
    }
    if ((*(uint *)((longlong)FVar5 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1)
        != 0) goto LAB_148ba8555;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidIndex(InternalIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                     ,0x16a2,L"Invalid internal index. Use IsValidIndex before calling this method."
                    );
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    puVar4 = (uchar *)(*pcVar2)();
    return puVar4;
  }
LAB_148ba8555:
  return (uchar *)((longlong)(param_1 * (this->SetLayout).SparseArrayLayout.Size) +
                  (this->Set->Elements).Data._padding_);
}

