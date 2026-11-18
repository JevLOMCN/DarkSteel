// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 1

// Add @ 14b05d3a0

void __thiscall
Metasound::TVertexInterfaceImpl<Metasound::FOutputDataVertex>::Add
          (TVertexInterfaceImpl<Metasound::FOutputDataVertex> *this,FOutputDataVertex *param_1)

{
  int *piVar1;
  FOutputDataVertex *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FOutputDataVertex *pFVar7;
  
  pFVar2 = (FOutputDataVertex *)(this->Vertices).AllocatorInstance.Data;
  if (pFVar2 != pFVar2 + (this->Vertices).ArrayNum) {
    pFVar7 = pFVar2;
    do {
      if (*(longlong *)&pFVar7->field_0x8 == *(longlong *)&param_1->field_0x8) {
        *(longlong *)&pFVar7->field_0x8 = *(longlong *)&param_1->field_0x8;
        *(undefined8 *)&pFVar7->field_0x10 = *(undefined8 *)&param_1->field_0x10;
        *(undefined4 *)&pFVar7->field_0x18 = *(undefined4 *)&param_1->field_0x18;
        return;
      }
      pFVar7 = pFVar7 + 1;
    } while (pFVar7 != pFVar2 + (this->Vertices).ArrayNum);
  }
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->Vertices).ArrayMax)) {
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
  iVar5 = (this->Vertices).ArrayNum;
  piVar1 = &(this->Vertices).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)this,piVar1);
  }
  (this->Vertices).ArrayNum = iVar5 + 1;
  pFVar6 = (this->Vertices).AllocatorInstance.Data + (longlong)iVar5 * 0x20;
  *(undefined ***)pFVar6 = &___7FDataVertex_Metasound__6B_;
  *(undefined8 *)(pFVar6 + 8) = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)(pFVar6 + 0x10) = *(undefined8 *)&param_1->field_0x10;
  *(undefined4 *)(pFVar6 + 0x18) = *(undefined4 *)&param_1->field_0x18;
  *(undefined ***)pFVar6 = &___7FOutputDataVertex_Metasound__6B_;
  return;
}

