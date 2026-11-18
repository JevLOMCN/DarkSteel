// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MathCore
// Functions: 4

// FindOrAddImpl<int_const_&> @ 143329d80

FDirectedTreeElement * __thiscall
TMapBase<int,UE::MathCore::Graph::FDirectedTreeElement,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::FDirectedTreeElement,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,UE::MathCore::Graph::FDirectedTreeElement,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::FDirectedTreeElement,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (FDirectedTreeElement *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[6];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,UE::MathCore::Graph::FDirectedTreeElement>,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::FDirectedTreeElement,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FDirectedTreeElement *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<int_const_&> @ 143329e30

FTarjanVertexInfo * __thiscall
TMapBase<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (FTarjanVertexInfo *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[10];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,UE::MathCore::Graph::Private::FTarjanVertexInfo>,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FTarjanVertexInfo *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x30);
}

// FindChecked @ 14332c330

FDepthFirstSortInfo * __thiscall
TMapBase<int,UE::MathCore::Graph::Private::FDepthFirstSortInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FDepthFirstSortInfo,0>_>
::FindChecked(TMapBase<int,UE::MathCore::Graph::Private::FDepthFirstSortInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FDepthFirstSortInfo,0>_>
              *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FDepthFirstSortInfo *pFVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x28;
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x28) == param_1) {
          if (lVar1 != 0) {
            return (FDepthFirstSortInfo *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x20);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (FDepthFirstSortInfo *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pFVar6 = (FDepthFirstSortInfo *)(*pcVar3)();
  return pFVar6;
}

// FindChecked @ 14332c3d0

FTarjanVertexInfo * __thiscall
TMapBase<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>_>
::FindChecked(TMapBase<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::MathCore::Graph::Private::FTarjanVertexInfo,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTarjanVertexInfo *pFVar4;
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
        piVar5 = (int *)((longlong)iVar3 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (FTarjanVertexInfo *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[10];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FTarjanVertexInfo *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FTarjanVertexInfo *)(*pcVar1)();
  return pFVar4;
}

