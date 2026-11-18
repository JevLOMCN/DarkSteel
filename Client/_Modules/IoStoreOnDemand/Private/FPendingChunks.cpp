// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 2

// Append @ 1445b39b0

void __thiscall
UE::IoStore::FOnDemandInstallCache::FPendingChunks::Append
          (FPendingChunks *this,FIoBuffer *param_1,FIoHash *param_2)

{
  int *piVar1;
  BufCore *pBVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  
  if ((this->Chunks).ArrayNum != (this->ChunkHashes).ArrayNum) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Chunks.Num() == ChunkHashes.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                       ,0x698,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pBVar2 = (param_1->CorePtr).Reference;
  this->TotalSize = this->TotalSize + (ulonglong)CONCAT14(pBVar2->DataSizeHigh,pBVar2->DataSizeLow);
  pFVar3 = (this->ChunkHashes).AllocatorInstance.Data;
  if ((pFVar3 <= param_2) && (param_2 < pFVar3 + (longlong)(this->ChunkHashes).ArrayMax * 0x14)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->ChunkHashes).ArrayNum;
  piVar1 = &(this->ChunkHashes).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x414,&(this->ChunkHashes).AllocatorInstance,piVar1);
  }
  (this->ChunkHashes).ArrayNum = iVar8 + 1;
  uVar6 = *(undefined8 *)(param_2->Hash + 8);
  pFVar4 = (this->ChunkHashes).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar8 * 0x14;
  *(undefined8 *)pFVar3 = *(undefined8 *)param_2->Hash;
  *(undefined8 *)(pFVar3 + 8) = uVar6;
  *(undefined4 *)(pFVar4 + (longlong)iVar8 * 0x14 + 0x10) = *(undefined4 *)(param_2->Hash + 0x10);
  pFVar3 = (this->Chunks).AllocatorInstance.Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (longlong)(this->Chunks).ArrayMax * 8)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (this->Chunks).ArrayNum;
  piVar1 = &(this->Chunks).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  (this->Chunks).ArrayNum = iVar8 + 1;
  pFVar3 = (this->Chunks).AllocatorInstance.Data + (longlong)iVar8 * 8;
  *(undefined8 *)pFVar3 = 0;
  *(BufCore **)pFVar3 = (param_1->CorePtr).Reference;
  (param_1->CorePtr).Reference = (BufCore *)0x0;
  return;
}

// IsEmpty @ 1445ddcd0

bool __thiscall UE::IoStore::FOnDemandInstallCache::FPendingChunks::IsEmpty(FPendingChunks *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->Chunks).ArrayNum != (this->ChunkHashes).ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Chunks.Num() == ChunkHashes.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                       ,0x692,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (((this->TotalSize == 0) && ((this->Chunks).ArrayNum == 0)) &&
     ((this->ChunkHashes).ArrayNum == 0)) {
    return true;
  }
  return false;
}

