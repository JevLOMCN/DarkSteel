// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 1

// AllocateNewPushBlock @ 14c95c860

int __thiscall
UE::Geometry::TFIFOQueue<UE::Geometry::FVector3i,256>::AllocateNewPushBlock
          (TFIFOQueue<UE::Geometry::FVector3i,256> *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar5 = (this->Blocks).ArrayNum;
  uVar7 = 0xffffffff;
  if (this->FreeCount < 1) {
    piVar1 = &(this->Blocks).ArrayMax;
    uVar7 = uVar5;
    if (uVar5 == *piVar1) {
      uVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->Blocks).AllocatorInstance,piVar1);
      (this->Blocks).ArrayNum = uVar7;
    }
    pFVar2 = (this->Blocks).AllocatorInstance.Data;
    (this->Blocks).ArrayNum = uVar7 + 1;
    DefaultConstructItems<UE::Geometry::TFIFOQueue<UE::Geometry::FVector3i,256>::FBlock,int>
              (pFVar2 + (longlong)(int)uVar7 * 0x10,1);
    uVar7 = uVar5;
  }
  else {
    uVar8 = 0;
    if (0 < (int)uVar5) {
      lVar9 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar8 < (this->Blocks).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar6 = (*pcVar3)();
          return iVar6;
        }
        if ((this->Blocks).AllocatorInstance.Data[lVar9] != (FScriptContainerElement)0x0) {
          this->FreeCount = this->FreeCount + -1;
          uVar7 = uVar8;
          break;
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x10;
      } while ((int)uVar8 < (this->Blocks).ArrayNum);
    }
  }
  uVar5 = this->PushBlock;
  uVar8 = 0;
  if ((int)uVar5 < (this->Blocks).ArrayNum) {
    uVar8 = ~uVar5 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  *(uint *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10 + 4) = uVar7;
  uVar5 = 0;
  if ((int)uVar7 < (this->Blocks).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  (this->Blocks).AllocatorInstance.Data[(longlong)(int)uVar7 * 0x10] = (FScriptContainerElement)0x0;
  uVar5 = 0;
  if ((int)uVar7 < (this->Blocks).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  *(undefined4 *)((this->Blocks).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10 + 4) =
       0xffffffff;
  return uVar7;
}

