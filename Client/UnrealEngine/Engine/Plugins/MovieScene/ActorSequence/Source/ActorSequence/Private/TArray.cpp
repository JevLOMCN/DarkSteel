// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ActorSequence
// Functions: 3

// AddUniqueImpl<FActorSequenceObjectReference_const_&> @ 14ead04d0

int __thiscall
TArray<FActorSequenceObjectReference,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<FActorSequenceObjectReference_const_&>
          (TArray<FActorSequenceObjectReference,TSizedDefaultAllocator<32>_> *this,
          FActorSequenceObjectReference *param_1)

{
  FActorSequenceObjectReference *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    pFVar1 = (FActorSequenceObjectReference *)(this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
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
    FActorSequenceObjectReference::FActorSequenceObjectReference
              ((FActorSequenceObjectReference *)
               ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x28),param_1);
  }
  return iVar4;
}

// Find @ 14ead2030

int __thiscall
TArray<FActorSequenceObjectReference,TSizedDefaultAllocator<32>_>::Find
          (TArray<FActorSequenceObjectReference,TSizedDefaultAllocator<32>_> *this,
          FActorSequenceObjectReference *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  
  pFVar3 = (this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  pFVar5 = pFVar3;
  do {
    if (pFVar5 == pFVar3 + (longlong)iVar1 * 0x28) {
      return -1;
    }
    if (((*(uint *)(pFVar5 + 0xc) == (param_1->ActorId).C &&
         *(uint *)(pFVar5 + 8) == (param_1->ActorId).B) &&
        *(uint *)(pFVar5 + 4) == (param_1->ActorId).A) &&
        *(uint *)(pFVar5 + 0x10) == (param_1->ActorId).D) {
      iVar4 = *(int *)(pFVar5 + 0x20);
      iVar2 = (param_1->PathToComponent).Data.ArrayNum;
      if (iVar4 == iVar2) {
        if (iVar4 < 2) goto LAB_14ead20d0;
        iVar4 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(pFVar5 + 0x18),
                           (wchar_t *)(param_1->PathToComponent).Data.AllocatorInstance.Data);
        bVar6 = iVar4 == 0;
      }
      else {
        bVar6 = iVar4 + iVar2 == 1;
      }
      if (bVar6) {
LAB_14ead20d0:
        return (int)(((longlong)pFVar5 - (longlong)pFVar3) / 0x28);
      }
    }
    pFVar5 = pFVar5 + 0x28;
  } while( true );
}

// RemoveAtSwapImpl @ 14ead2730

void __thiscall
TArray<FActorSequenceObjectReferences,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FActorSequenceObjectReferences,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x10;
  DestructItems<FActorSequenceObjectReference,int>
            (*(FActorSequenceObjectReference **)_Dst,*(int *)(_Dst + 8));
  if (*(void **)_Dst != (void *)0x0) {
    FMemory::Free(*(void **)_Dst);
  }
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x10,(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

