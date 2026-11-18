// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonInput
// Functions: 3

// AddUniqueImpl<TSoftClassPtr<UCommonInputBaseControllerData>_const_&> @ 14a76ee20

int __thiscall
TArray<TSoftClassPtr<UCommonInputBaseControllerData>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TSoftClassPtr<UCommonInputBaseControllerData>_const_&>
          (TArray<TSoftClassPtr<UCommonInputBaseControllerData>,TSizedDefaultAllocator<32>_> *this,
          TSoftClassPtr<UCommonInputBaseControllerData> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    pFVar1 = (this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 0x28)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    iVar4 = this->ArrayNum;
    if (iVar4 == this->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x828,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar4 + 1;
    TPersistentObjectPtr<FSoftObjectPath>::TPersistentObjectPtr<FSoftObjectPath>
              ((TPersistentObjectPtr<FSoftObjectPath> *)
               ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x28),
               (TPersistentObjectPtr<FSoftObjectPath> *)param_1);
  }
  return iVar4;
}

// Find @ 14a774be0

int __thiscall
TArray<TSoftClassPtr<UCommonInputBaseControllerData>,TSizedDefaultAllocator<32>_>::Find
          (TArray<TSoftClassPtr<UCommonInputBaseControllerData>,TSizedDefaultAllocator<32>_> *this,
          TSoftClassPtr<UCommonInputBaseControllerData> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar2 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  if (pFVar2 != pFVar2 + (longlong)iVar1 * 0x28) {
    pFVar4 = pFVar2;
    do {
      bVar3 = FSoftObjectPath::operator==
                        ((FSoftObjectPath *)(pFVar4 + 8),
                         (FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
      if (bVar3) {
        return (int)(((longlong)pFVar4 - (longlong)pFVar2) / 0x28);
      }
      pFVar4 = pFVar4 + 0x28;
    } while (pFVar4 != pFVar2 + (longlong)iVar1 * 0x28);
  }
  return -1;
}

// RemoveAtSwapImpl @ 14a778850

void __thiscall
TArray<TSoftClassPtr<UCommonInputBaseControllerData>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<TSoftClassPtr<UCommonInputBaseControllerData>,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (*(void **)(pFVar1 + (longlong)param_1 * 0x28 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar1 + (longlong)param_1 * 0x28 + 0x18));
  }
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(pFVar1 + (longlong)param_1 * 0x28,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x28,
            (longlong)iVar2 * 0x28);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

