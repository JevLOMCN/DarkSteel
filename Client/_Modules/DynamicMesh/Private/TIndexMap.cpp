// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// GetFrom @ 14c810070

int __thiscall UE::Geometry::TIndexMap<int>::GetFrom(TIndexMap<int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined1 *puVar6;
  
  if ((this->bWantReverse == false) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bWantReverse",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\GeometryTypes.h"
                         ,0xa3,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  if (*(int *)&(this->ReverseMap).field_0x8 != *(int *)&(this->ReverseMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->ReverseMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->ReverseMap).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)(*(int *)&(this->ReverseMap).field_0x48 - 1U & param_1) * 4
                    );
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x10 + *(longlong *)&this->ReverseMap);
        if (*piVar5 == param_1) {
          piVar4 = piVar5 + 1;
          if (piVar5 == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          if (piVar4 == (int *)0x0) {
            return -1;
          }
          return *piVar4;
        }
        iVar3 = piVar5[2];
      } while (iVar3 != -1);
    }
  }
  return -1;
}

