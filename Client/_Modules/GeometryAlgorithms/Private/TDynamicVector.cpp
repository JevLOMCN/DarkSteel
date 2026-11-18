// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 1

// ~TDynamicVector<double,512> @ 1495a8950

void __thiscall
UE::Geometry::TDynamicVector<double,512>::~TDynamicVector<double,512>
          (TDynamicVector<double,512> *this)

{
  TArray<UE::Geometry::TDynamicVector<double,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  
  pTVar1 = &this->Blocks;
  lVar6 = (longlong)(this->Blocks).ArrayNum;
  uVar8 = 0;
  if (0 < lVar6) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->Blocks).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::operator_delete(*(void **)((pTVar1->AllocatorInstance).Data + lVar7 * 8),0x1000);
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar6);
  }
  (this->Blocks).ArrayNum = 0;
  if ((this->Blocks).ArrayMax != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,&(this->Blocks).ArrayMax);
  }
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar2);
  return;
}

