// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SkeletalMeshDescription
// Functions: 2

// Get @ 1443a3720

TArrayView<int,int> * __thiscall
TAttributeArrayContainer<int>::Get
          (TAttributeArrayContainer<int> *this,TArrayView<int,int> *__return_storage_ptr__,
          int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArrayView<int,int> *pTVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  uVar6 = param_1 >> 8;
  uVar4 = 0;
  if ((int)uVar6 < (this->Chunks).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<int,int> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pFVar7 = (this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar6 * 0xc18;
  iVar1 = *(int *)(pFVar7 + ((ulonglong)(uint)param_1 & 0xff) * 4 + 0x410);
  __return_storage_ptr__->DataPtr =
       (int *)(*(longlong *)pFVar7 +
              (longlong)*(int *)(pFVar7 + ((ulonglong)(uint)param_1 & 0xff) * 4 + 0x10) * 4);
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<int,int> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// Get @ 1443a3800

TArrayView<int_const_,int> * __thiscall
TAttributeArrayContainer<int>::Get
          (TAttributeArrayContainer<int> *this,TArrayView<int_const_,int> *__return_storage_ptr__,
          int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArrayView<int_const_,int> *pTVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  uVar6 = param_1 >> 8;
  uVar4 = 0;
  if ((int)uVar6 < (this->Chunks).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<int_const_,int> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pFVar7 = (this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar6 * 0xc18;
  iVar1 = *(int *)(pFVar7 + ((ulonglong)(uint)param_1 & 0xff) * 4 + 0x410);
  __return_storage_ptr__->DataPtr =
       (int *)(*(longlong *)pFVar7 +
              (longlong)*(int *)(pFVar7 + ((ulonglong)(uint)param_1 & 0xff) * 4 + 0x10) * 4);
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArrayView<int_const_,int> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

