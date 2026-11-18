// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// Add @ 14c7d8c00

bool __thiscall UE::Geometry::FUniqueIndexSet::Add(FUniqueIndexSet *this,int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  ulonglong uVar8;
  int local_res10 [6];
  
  uVar2 = this->Bits[(int)(param_1 + (param_1 >> 0x1f & 0x3fU)) >> 6];
  uVar8 = 1L << ((byte)param_1 & 0x3f);
  if ((uVar8 & uVar2) != 0) {
    return false;
  }
  this->Bits[(int)(param_1 + (param_1 >> 0x1f & 0x3fU)) >> 6] = uVar2 | uVar8;
  pFVar3 = (this->Values).AllocatorInstance.Data;
  local_res10[0] = param_1;
  if (((pFVar3 <= (FScriptContainerElement *)local_res10) &&
      ((FScriptContainerElement *)local_res10 < pFVar3 + (longlong)(this->Values).ArrayMax * 4)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  iVar7 = (this->Values).ArrayNum;
  piVar1 = &(this->Values).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->Values).AllocatorInstance,piVar1);
  }
  (this->Values).ArrayNum = iVar7 + 1;
  *(int *)((this->Values).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_res10[0];
  return true;
}

