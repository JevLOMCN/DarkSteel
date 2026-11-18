// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 2

// FNetTraceCollector @ 1442295f0

FNetTraceCollector * __thiscall
FNetTraceCollector::FNetTraceCollector(FNetTraceCollector *this,uint param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  TArray<FNetTracePacketContentEvent,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FNetTraceCollector *pFVar8;
  ForElementType<FNetTracePacketContentEvent> FVar9;
  void *_Dst;
  uint uVar10;
  
  (this->Events).AllocatorInstance.SecondaryData = (ForElementType<FNetTracePacketContentEvent>)0x0;
  piVar1 = &(this->Events).ArrayNum;
  *piVar1 = 0;
  piVar2 = &(this->Events).ArrayMax;
  *piVar2 = 0x100;
  piVar3 = &(this->ReferencedObjectIds).ArrayMax;
  (this->ReferencedObjectIds).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned___int64>)0x0;
  pTVar4 = &this->Events;
  (this->ReferencedObjectIds).ArrayNum = 0;
  *piVar3 = 0x80;
  iVar7 = (this->Events).ArrayNum;
  if (iVar7 < (int)param_1) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FNetTracePacketContentEvent>_>
              (0x10,8,param_1 - iVar7,&pTVar4->AllocatorInstance,piVar1,piVar2);
  }
  else {
    if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
    }
    if ((int)param_1 < iVar7) {
      uVar10 = iVar7 - param_1;
      if (((int)(uVar10 | param_1) < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FNetTraceCollector *)(*pcVar5)();
        return pFVar8;
      }
      if (uVar10 != 0) {
        FVar9 = (this->Events).AllocatorInstance.SecondaryData;
        if (FVar9 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
          FVar9 = (ForElementType<FNetTracePacketContentEvent>)pTVar4;
        }
        _Dst = (void *)((longlong)FVar9 + (longlong)(int)param_1 * 0x10);
        iVar7 = ((this->Events).ArrayNum - uVar10) - param_1;
        if (iVar7 != 0) {
          memmove(_Dst,(void *)((longlong)(int)uVar10 * 0x10 + (longlong)_Dst),(longlong)iVar7 << 4)
          ;
        }
        piVar1 = &(this->Events).ArrayNum;
        *piVar1 = *piVar1 - uVar10;
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FNetTracePacketContentEvent>_>
                  (0x10,8,&pTVar4->AllocatorInstance,(this->Events).ArrayNum,piVar2);
      }
    }
  }
  this->EventCount = 0;
  this->CurrentNestingLevel = 0;
  this->OffsetStackLevel = 0;
  this->LastBunchEventIndex = 0;
  this->BunchEventCount = 0;
  this->PendingBunchEventIndex = 0xffffffff;
  this->OffsetStack[0] = 0;
  (this->ReferencedObjectIds).ArrayNum = 0;
  if ((this->ReferencedObjectIds).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_>
              (8,8,0,&(this->ReferencedObjectIds).AllocatorInstance,0,piVar3);
  }
  return this;
}

// AddReferencedObjectId @ 14426c150

void __thiscall FNetTraceCollector::AddReferencedObjectId(FNetTraceCollector *this,ulong64 param_1)

{
  TArray<unsigned___int64,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<unsigned___int64> FVar6;
  ulong64 local_res10 [3];
  
  FVar6 = (this->ReferencedObjectIds).AllocatorInstance.SecondaryData;
  pTVar1 = &this->ReferencedObjectIds;
  if (FVar6 == (ForElementType<unsigned___int64>)0x0) {
    FVar6 = (ForElementType<unsigned___int64>)pTVar1;
  }
  local_res10[0] = param_1;
  if (((ulonglong)FVar6 <= local_res10) &&
     (local_res10 <
      (ulong64 *)((longlong)FVar6 + (longlong)(this->ReferencedObjectIds).ArrayMax * 8))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->ReferencedObjectIds).ArrayNum;
  piVar2 = &(this->ReferencedObjectIds).ArrayMax;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->ReferencedObjectIds).ArrayNum = iVar5 + 1;
  FVar6 = (this->ReferencedObjectIds).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<unsigned___int64>)0x0) {
    FVar6 = (ForElementType<unsigned___int64>)pTVar1;
  }
  *(ulong64 *)((longlong)FVar6 + (longlong)iVar5 * 8) = local_res10[0];
  return;
}

