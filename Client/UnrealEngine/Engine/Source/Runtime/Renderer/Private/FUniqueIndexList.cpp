// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// Add @ 144c26460

void __thiscall FUniqueIndexList::Add(FUniqueIndexList *this,int param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  int *piVar1;
  uint *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ForElementType<unsigned_int> FVar9;
  uint local_res10 [2];
  
  this_00 = &this->IndicesMarkedToUpdate;
  iVar8 = (this->IndicesMarkedToUpdate).NumBits;
  local_res10[0] = param_1;
  if ((iVar8 < param_1 + 1) && (iVar8 = (param_1 + 0x40U & 0xffffffc0) - iVar8, -1 < iVar8)) {
    iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(this_00,iVar8);
    TBitArray<FDefaultBitArrayAllocator>::SetRange(this_00,iVar7,iVar8,false);
  }
  uVar5 = local_res10[0];
  if (((int)local_res10[0] < 0) || ((this->IndicesMarkedToUpdate).NumBits <= (int)local_res10[0])) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar9 = (this->IndicesMarkedToUpdate).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<unsigned_int>)0x0) {
    FVar9 = (ForElementType<unsigned_int>)this_00;
  }
  if ((*(uint *)((longlong)FVar9 + (longlong)((int)(uVar5 + ((int)uVar5 >> 0x1f & 0x1fU)) >> 5) * 4)
       >> (uVar5 & 0x1f) & 1) == 0) {
    pFVar3 = (this->Indices).AllocatorInstance.Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_res10) &&
       ((FScriptContainerElement *)local_res10 < pFVar3 + (longlong)(this->Indices).ArrayMax * 4)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar8 = (this->Indices).ArrayNum;
    piVar1 = &(this->Indices).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)this,piVar1);
    }
    uVar5 = local_res10[0];
    pFVar3 = (this->Indices).AllocatorInstance.Data;
    (this->Indices).ArrayNum = iVar8 + 1;
    *(uint *)(pFVar3 + (longlong)iVar8 * 4) = local_res10[0];
    if (((int)local_res10[0] < 0) || ((this->IndicesMarkedToUpdate).NumBits <= (int)local_res10[0]))
    {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FVar9 = (this->IndicesMarkedToUpdate).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<unsigned_int>)0x0) {
      FVar9 = (ForElementType<unsigned_int>)this_00;
    }
    puVar2 = (uint *)((longlong)FVar9 +
                     (longlong)((int)(uVar5 + ((int)uVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)uVar5 & 0x1f);
  }
  return;
}

// Reset @ 144c5c380

void __thiscall FUniqueIndexList::Reset(FUniqueIndexList *this)

{
  (this->Indices).ArrayNum = 0;
  if ((this->Indices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,&(this->Indices).ArrayMax);
  }
  (this->IndicesMarkedToUpdate).NumBits = 0;
  return;
}

