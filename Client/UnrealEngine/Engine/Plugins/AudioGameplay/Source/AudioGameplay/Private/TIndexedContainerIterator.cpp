// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplay
// Functions: 3

// RemoveCurrent @ 14d98ff90

void __thiscall
TIndexedContainerIterator<TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>,FBoolParamCallback,int>
::RemoveCurrent(TIndexedContainerIterator<TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_>,FBoolParamCallback,int>
                *this)

{
  FScriptContainerElement *this_00;
  uint uVar1;
  TArray<FBoolParamCallback,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
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
  this_00 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar1 * 0x18;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  iVar6 = pTVar2->ArrayNum + ~uVar1;
  if (iVar6 != 0) {
    memmove(this_00,this_00 + 0x18,(longlong)iVar6 * 0x18);
  }
  pTVar2->ArrayNum = pTVar2->ArrayNum + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,&pTVar2->AllocatorInstance,pTVar2->ArrayNum,&pTVar2->ArrayMax);
  this->Index = this->Index + -1;
  return;
}

// RemoveCurrent @ 14d990070

void __thiscall
TIndexedContainerIterator<TArray<FSoundCallback,TSizedDefaultAllocator<32>_>,FSoundCallback,int>::
RemoveCurrent(TIndexedContainerIterator<TArray<FSoundCallback,TSizedDefaultAllocator<32>_>,FSoundCallback,int>
              *this)

{
  FScriptContainerElement *this_00;
  uint uVar1;
  TArray<FSoundCallback,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
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
  this_00 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar1 * 0x18;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  iVar6 = pTVar2->ArrayNum + ~uVar1;
  if (iVar6 != 0) {
    memmove(this_00,this_00 + 0x18,(longlong)iVar6 * 0x18);
  }
  pTVar2->ArrayNum = pTVar2->ArrayNum + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,&pTVar2->AllocatorInstance,pTVar2->ArrayNum,&pTVar2->ArrayMax);
  this->Index = this->Index + -1;
  return;
}

// RemoveCurrent @ 14d990150

void __thiscall
TIndexedContainerIterator<TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>,FStringParamCallback,int>
::RemoveCurrent(TIndexedContainerIterator<TArray<FStringParamCallback,TSizedDefaultAllocator<32>_>,FStringParamCallback,int>
                *this)

{
  FScriptContainerElement *this_00;
  uint uVar1;
  TArray<FStringParamCallback,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
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
  this_00 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar1 * 0x18;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  iVar6 = pTVar2->ArrayNum + ~uVar1;
  if (iVar6 != 0) {
    memmove(this_00,this_00 + 0x18,(longlong)iVar6 * 0x18);
  }
  pTVar2->ArrayNum = pTVar2->ArrayNum + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,&pTVar2->AllocatorInstance,pTVar2->ArrayNum,&pTVar2->ArrayMax);
  this->Index = this->Index + -1;
  return;
}

