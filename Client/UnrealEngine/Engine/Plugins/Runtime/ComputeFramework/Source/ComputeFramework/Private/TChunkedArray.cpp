// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 2

// operator[] @ 1494c65b0

FString * __thiscall
TChunkedArray<FString,512,TSizedDefaultAllocator<32>_>::operator[]
          (TChunkedArray<FString,512,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = param_1 >> 0x1f & 0x1f;
  uVar3 = param_1 + uVar6;
  uVar7 = (int)uVar3 >> 5;
  uVar5 = 0;
  if ((int)uVar7 < (this->Chunks).Array.ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FString *)
         ((ulonglong)((uVar3 & 0x1f) - uVar6) * 0x10 +
         *(longlong *)((this->Chunks).Array.AllocatorInstance.Data + (longlong)(int)uVar7 * 8));
}

// Add @ 1494c7e80

int __thiscall
TChunkedArray<FString,512,TSizedDefaultAllocator<32>_>::Add
          (TChunkedArray<FString,512,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  void *local_18 [2];
  
  if ((param_1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count>=0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ChunkedArray.h"
                         ,0xf4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar1 = this->NumElements;
  iVar5 = iVar1 + param_1;
  iVar6 = iVar5 + 0x1f;
  this->NumElements = iVar5;
  iVar5 = (this->Chunks).Array.ArrayNum;
  iVar6 = (int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5;
  if (iVar5 < iVar6) {
    uVar10 = (ulonglong)(uint)(iVar6 - iVar5);
    do {
      pvVar7 = ::operator_new(0x200);
      local_18[0] = (void *)0x0;
      if (pvVar7 != (void *)0x0) {
        lVar9 = 0x20;
        lVar8 = (longlong)pvVar7 + 0xc;
        do {
          *(undefined8 *)(lVar8 + -0xc) = 0;
          *(undefined8 *)(lVar8 + -4) = 0;
          lVar8 = lVar8 + 0x10;
          lVar9 = lVar9 + -1;
          local_18[0] = pvVar7;
        } while (lVar9 != 0);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar2 + (longlong)(this->Chunks).Array.ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
      iVar5 = (this->Chunks).Array.ArrayNum;
      if (iVar5 == (this->Chunks).Array.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,&(this->Chunks).Array.ArrayMax);
      }
      pFVar2 = (this->Chunks).Array.AllocatorInstance.Data;
      (this->Chunks).Array.ArrayNum = iVar5 + 1;
      *(void **)(pFVar2 + (longlong)iVar5 * 8) = local_18[0];
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return iVar1;
}

