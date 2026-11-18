// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 3

// GetCustomAllocation @ 142afdb00

void * __thiscall
UE::FLinearBlockAllocator::GetCustomAllocation
          (FLinearBlockAllocator *this,ulong64 param_1,uint param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  void *local_18 [2];
  
  local_18[0] = FMemory::Malloc(param_1,param_2);
  pFVar2 = (this->BlockAllocs).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->BlockAllocs).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar3)();
      return pvVar6;
    }
  }
  iVar5 = (this->BlockAllocs).ArrayNum;
  piVar1 = &(this->BlockAllocs).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  (this->BlockAllocs).ArrayNum = iVar5 + 1;
  *(void **)((this->BlockAllocs).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return local_18[0];
}

// GetNewBlock @ 142affaa0

FBlock * __thiscall UE::FLinearBlockAllocator::GetNewBlock(FLinearBlockAllocator *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FBlock *pFVar6;
  FBlock *local_18 [2];
  
  pFVar6 = FMemory::Malloc(this->BlockSize,this->BlockAlignment);
  pFVar6->NextOffset = 4;
  pFVar2 = (this->BlockAllocs).AllocatorInstance.Data;
  local_18[0] = pFVar6;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->BlockAllocs).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FBlock *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = (this->BlockAllocs).ArrayNum;
  piVar1 = &(this->BlockAllocs).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  (this->BlockAllocs).ArrayNum = iVar5 + 1;
  *(FBlock **)((this->BlockAllocs).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
  return pFVar6;
}

// RequiresCustomAllocation @ 142b16d00

bool __thiscall
UE::FLinearBlockAllocator::RequiresCustomAllocation
          (FLinearBlockAllocator *this,ulong64 param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = this->BlockAlignment + 4;
  return this->BlockSize < param_1 + 4 + (ulonglong)(((param_2 - 1) + iVar1 & -param_2) - iVar1);
}

