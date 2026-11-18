// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// ~TChunkedPackedArray<FTextKeyState::FKeyData,16> @ 141737e10

void __thiscall
TChunkedPackedArray<FTextKeyState::FKeyData,16>::~TChunkedPackedArray<FTextKeyState::FKeyData,16>
          (TChunkedPackedArray<FTextKeyState::FKeyData,16> *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Chunks).AllocatorInstance.Data;
  iVar1 = (this->Chunks).ArrayNum;
  pFVar2 = pFVar3 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->Chunks).ArrayNum != iVar1) {
      `TCheckedPointerIterator<unsigned_char_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar2) break;
    FMemory::Free(*(void **)pFVar3);
    pFVar3 = pFVar3 + 8;
  }
  pFVar2 = (this->ChunkCursors).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Chunks).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// Add @ 141741c00

int __thiscall
TChunkedPackedArray<FTextKeyState::FKeyData,16>::Add
          (TChunkedPackedArray<FTextKeyState::FKeyData,16> *this,uint param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  undefined4 local_38 [2];
  void *local_30;
  
  iVar5 = (this->Chunks).ArrayNum;
  if (iVar5 != 0) {
    uVar6 = iVar5 - 1;
    uVar7 = 0;
    if ((int)uVar6 < (this->ChunkCursors).ArrayNum) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    if (*(int *)((this->ChunkCursors).AllocatorInstance.Data + (longlong)(int)uVar6 * 4) + param_1 <
        0x10001) goto LAB_141741e21;
  }
  piVar8 = &(this->Chunks).ArrayNum;
  local_30 = FMemory::Malloc(0x10000,8);
  pFVar2 = (this->Chunks).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_30) &&
      ((FScriptContainerElement *)&local_30 < pFVar2 + (longlong)(this->Chunks).ArrayMax * 8)) &&
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
  iVar5 = *piVar8;
  piVar1 = &(this->Chunks).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
    *piVar8 = iVar5;
  }
  *piVar8 = iVar5 + 1;
  local_38[0] = 0;
  *(void **)((this->Chunks).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_30;
  pFVar2 = (this->ChunkCursors).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)(this->ChunkCursors).ArrayMax * 4))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = (this->ChunkCursors).ArrayNum;
  if (iVar5 == (this->ChunkCursors).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->ChunkCursors).AllocatorInstance,&(this->ChunkCursors).ArrayMax)
    ;
  }
  (this->ChunkCursors).ArrayNum = iVar5 + 1;
  *(undefined4 *)((this->ChunkCursors).AllocatorInstance.Data + (longlong)iVar5 * 4) = local_38[0];
LAB_141741e21:
  piVar8 = &(this->ChunkCursors).ArrayNum;
  uVar7 = (this->Chunks).ArrayNum - 1;
  uVar6 = 0;
  if ((int)uVar7 < *piVar8) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  uVar6 = *(uint *)((this->ChunkCursors).AllocatorInstance.Data + (longlong)(int)uVar7 * 4);
  uVar9 = 0;
  if ((int)uVar7 < *piVar8) {
    uVar9 = ~uVar7 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  pFVar2 = (this->ChunkCursors).AllocatorInstance.Data + (longlong)(int)uVar7 * 4;
  *(uint *)pFVar2 = *(int *)pFVar2 + param_1;
  this->Count = this->Count + 1;
  return uVar7 * 0x10000 | uVar6;
}

// Get @ 14175b350

FKeyData * __thiscall
TChunkedPackedArray<FTextKeyState::FKeyData,16>::Get
          (TChunkedPackedArray<FTextKeyState::FKeyData,16> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FKeyData *pFVar4;
  uint uVar5;
  
  uVar5 = param_1 >> 0x10;
  uVar3 = 0;
  if ((int)uVar5 < (this->Chunks).ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FKeyData *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FKeyData *)
         ((ulonglong)(ushort)param_1 +
         *(longlong *)((this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar5 * 8));
}

