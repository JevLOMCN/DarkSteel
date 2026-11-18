// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 1

// AllocateIndex @ 144437450

FSparseArrayAllocationInfo * __thiscall
TSparseArrayBase<48,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::AllocateIndex(TSparseArrayBase<48,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *this,FSparseArrayAllocationInfo *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  uint *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FSparseArrayAllocationInfo *pFVar7;
  ForElementType<unsigned_int> FVar8;
  
  if (param_1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                       ,0x62,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSparseArrayAllocationInfo *)(*pcVar4)();
      return pFVar7;
    }
  }
  if ((this->Data).ArrayNum <= param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < GetMaxIndex()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                       ,99,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSparseArrayAllocationInfo *)(*pcVar4)();
      return pFVar7;
    }
  }
  piVar1 = &(this->AllocationFlags).NumBits;
  if ((param_1 < 0) || (*piVar1 <= param_1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSparseArrayAllocationInfo *)(*pcVar4)();
      return pFVar7;
    }
  }
  FVar8 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
  iVar6 = (int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5;
  if (FVar8 == (ForElementType<unsigned_int>)0x0) {
    FVar8 = (ForElementType<unsigned_int>)&this->AllocationFlags;
  }
  if ((*(uint *)((longlong)FVar8 + (longlong)iVar6 * 4) >> (param_1 & 0x1fU) & 1) != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!AllocationFlags[Index]",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                       ,100,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSparseArrayAllocationInfo *)(*pcVar4)();
      return pFVar7;
    }
  }
  if ((param_1 < 0) || (*piVar1 <= param_1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FSparseArrayAllocationInfo *)(*pcVar4)();
      return pFVar7;
    }
  }
  FVar8 = (this->AllocationFlags).AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<unsigned_int>)0x0) {
    FVar8 = (ForElementType<unsigned_int>)&this->AllocationFlags;
  }
  puVar2 = (uint *)((longlong)FVar8 + (longlong)iVar6 * 4);
  *puVar2 = *puVar2 | 1 << (sbyte)(param_1 & 0x1fU);
  pFVar3 = (this->Data).AllocatorInstance.Data;
  __return_storage_ptr__->Index = param_1;
  __return_storage_ptr__->Pointer = pFVar3 + (longlong)param_1 * 0x30;
  return __return_storage_ptr__;
}

