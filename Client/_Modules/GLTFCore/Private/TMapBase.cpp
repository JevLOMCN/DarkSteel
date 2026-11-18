// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFCore
// Functions: 2

// FindChecked @ 14e635ba0

TMatrix<double> * __thiscall
TMapBase<int,UE::Math::TMatrix<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TMatrix<double>,0>_>
::FindChecked(TMapBase<int,UE::Math::TMatrix<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TMatrix<double>,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TMatrix<double> *pTVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0xa0 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (TMatrix<double> *)(piVar5 + 4);
          }
          break;
        }
        iVar3 = piVar5[0x24];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TMatrix<double> *)&DAT_00000010;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TMatrix<double> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14e635c50

FVertexID * __thiscall
TMapBase<int,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FVertexID,0>_>::
FindChecked(TMapBase<int,FVertexID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FVertexID,0>_>
            *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FVertexID *pFVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x10 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (FVertexID *)(piVar5 + 1);
          }
          break;
        }
        iVar3 = piVar5[2];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FVertexID *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FVertexID *)(*pcVar1)();
  return pFVar4;
}

