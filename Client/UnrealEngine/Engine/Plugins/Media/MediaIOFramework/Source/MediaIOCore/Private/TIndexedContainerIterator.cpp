// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 1

// RemoveCurrent @ 14d7ba980

void __thiscall
TIndexedContainerIterator<TArray<UMediaCapture::FQueuedCaptureData,TSizedDefaultAllocator<32>_>,UMediaCapture::FQueuedCaptureData,int>
::RemoveCurrent(TIndexedContainerIterator<TArray<UMediaCapture::FQueuedCaptureData,TSizedDefaultAllocator<32>_>,UMediaCapture::FQueuedCaptureData,int>
                *this)

{
  uint uVar1;
  TArray<UMediaCapture::FQueuedCaptureData,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *_Dst;
  
  uVar1 = this->Index;
  pTVar2 = this->Container;
  uVar5 = 0;
  if ((int)uVar1 < pTVar2->ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar1 * 0x40;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 0x38));
  iVar6 = pTVar2->ArrayNum + ~uVar1;
  if (iVar6 != 0) {
    memmove(_Dst,_Dst + 0x40,(longlong)iVar6 << 6);
  }
  pTVar2->ArrayNum = pTVar2->ArrayNum + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x40,8,&pTVar2->AllocatorInstance,pTVar2->ArrayNum,&pTVar2->ArrayMax);
  this->Index = this->Index + -1;
  return;
}

