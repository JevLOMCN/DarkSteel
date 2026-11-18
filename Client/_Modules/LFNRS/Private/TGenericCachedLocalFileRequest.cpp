// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LFNRS
// Functions: 2

// GetCachedRequest @ 146cac060

bool __thiscall
TGenericCachedLocalFileRequest<FGotoResult>::GetCachedRequest
          (TGenericCachedLocalFileRequest<FGotoResult> *this)

{
  longlong lVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  TReferenceControllerBase<1> *pTVar9;
  LARGE_INTEGER local_res8;
  
  if (*(longlong *)&this->field_0x8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  lVar1 = *(longlong *)&this->field_0x8;
  if (*(int *)(lVar1 + 0x28) != *(int *)(lVar1 + 0x54)) {
    lVar8 = *(longlong *)(lVar1 + 0x60);
    if (*(longlong *)(lVar1 + 0x60) == 0) {
      lVar8 = lVar1 + 0x58;
    }
    uVar6 = *(uint *)(lVar8 + (ulonglong)(*(int *)(lVar1 + 0x68) - 1U & this->CacheKey) * 4);
    if (uVar6 != 0xffffffff) {
      do {
        puVar7 = (uint *)((longlong)(int)uVar6 * 0x20 + *(longlong *)(lVar1 + 0x20));
        if (*puVar7 == this->CacheKey) {
          if (puVar7 != (uint *)0x0) {
            pTVar9 = *(TReferenceControllerBase<1> **)(puVar7 + 4);
            pTVar2 = *(TArray<unsigned_char,TSizedDefaultAllocator<32>_> **)(puVar7 + 2);
            if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
              UNLOCK();
            }
            if (pTVar2 == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0)
            goto LAB_146cac0f9;
            QueryPerformanceCounter(&local_res8);
            pTVar2[1].AllocatorInstance.Data =
                 (FScriptContainerElement *)
                 ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                 __real_4170000000000000);
            TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                      ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this->field_0xe0,pTVar2
                      );
            bVar4 = true;
            goto LAB_146cac0fc;
          }
          break;
        }
        uVar6 = puVar7[6];
      } while (uVar6 != 0xffffffff);
    }
  }
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
LAB_146cac0f9:
  bVar4 = false;
LAB_146cac0fc:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return bVar4;
}

// GetCachedRequest @ 146cac180

bool __thiscall
TGenericCachedLocalFileRequest<FStreamingResultBase>::GetCachedRequest
          (TGenericCachedLocalFileRequest<FStreamingResultBase> *this)

{
  longlong lVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  TReferenceControllerBase<1> *pTVar9;
  LARGE_INTEGER local_res8;
  
  if (*(longlong *)&this->field_0x8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  lVar1 = *(longlong *)&this->field_0x8;
  if (*(int *)(lVar1 + 0x28) != *(int *)(lVar1 + 0x54)) {
    lVar8 = *(longlong *)(lVar1 + 0x60);
    if (*(longlong *)(lVar1 + 0x60) == 0) {
      lVar8 = lVar1 + 0x58;
    }
    uVar6 = *(uint *)(lVar8 + (ulonglong)(*(int *)(lVar1 + 0x68) - 1U & this->CacheKey) * 4);
    if (uVar6 != 0xffffffff) {
      do {
        puVar7 = (uint *)((longlong)(int)uVar6 * 0x20 + *(longlong *)(lVar1 + 0x20));
        if (*puVar7 == this->CacheKey) {
          if (puVar7 != (uint *)0x0) {
            pTVar9 = *(TReferenceControllerBase<1> **)(puVar7 + 4);
            pTVar2 = *(TArray<unsigned_char,TSizedDefaultAllocator<32>_> **)(puVar7 + 2);
            if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
              UNLOCK();
            }
            if (pTVar2 == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0)
            goto LAB_146cac219;
            QueryPerformanceCounter(&local_res8);
            pTVar2[1].AllocatorInstance.Data =
                 (FScriptContainerElement *)
                 ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                 __real_4170000000000000);
            TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                      ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&this->field_0xd0,pTVar2
                      );
            bVar4 = true;
            goto LAB_146cac21c;
          }
          break;
        }
        uVar6 = puVar7[6];
      } while (uVar6 != 0xffffffff);
    }
  }
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
LAB_146cac219:
  bVar4 = false;
LAB_146cac21c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return bVar4;
}

