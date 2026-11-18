// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 2

// GetTo @ 1433b2580

int __thiscall UE::Geometry::TIndexMap<int>::GetTo(TIndexMap<int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined1 *puVar6;
  
  if ((this->bWantForward == false) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bWantForward",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\GeometryTypes.h"
                         ,0x9a,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  if (*(int *)&(this->ForwardMap).field_0x8 != *(int *)&(this->ForwardMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->ForwardMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->ForwardMap).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)(*(int *)&(this->ForwardMap).field_0x48 - 1U & param_1) * 4
                    );
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x10 + *(longlong *)&this->ForwardMap);
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

// Reserve @ 1433c5480

void __thiscall UE::Geometry::TIndexMap<int>::Reserve(TIndexMap<int> *this,int param_1)

{
  if (this->bWantForward != false) {
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reserve
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               this,param_1);
  }
  if (this->bWantReverse != false) {
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reserve
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               &this->ReverseMap,param_1);
  }
  return;
}

