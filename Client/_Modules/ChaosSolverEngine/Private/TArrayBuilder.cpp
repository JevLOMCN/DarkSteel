// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 1

// Add @ 14630cde0

TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> * __thiscall
TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add
          (TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *this,FMessageAddress *param_1
          )

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar7;
  
  pFVar2 = (this->Array).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)(this->Array).ArrayMax * 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  iVar6 = (this->Array).ArrayNum;
  piVar1 = &(this->Array).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,(ForAnyElementType *)this,piVar1);
  }
  (this->Array).ArrayNum = iVar6 + 1;
  uVar4 = *(undefined8 *)&(param_1->UniqueId).C;
  pFVar2 = (this->Array).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
  *(undefined8 *)pFVar2 = *(undefined8 *)&param_1->UniqueId;
  *(undefined8 *)(pFVar2 + 8) = uVar4;
  return this;
}

