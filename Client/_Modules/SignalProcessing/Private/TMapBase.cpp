// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 4

// FindOrAddImpl<int_const_&> @ 14449be80

FTarjanVertexInfo * __thiscall
TMapBase<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo,0>_>
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
  TSet<TTuple<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo>,TDefaultMapHashableKeyFuncs<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FTarjanVertexInfo *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x30);
}

// FindChecked @ 1444be460

FDepthFirstSortInfo * __thiscall
TMapBase<int,Audio::DirectedGraphAlgoPrivate::FDepthFirstSortInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Audio::DirectedGraphAlgoPrivate::FDepthFirstSortInfo,0>_>
::FindChecked(TMapBase<int,Audio::DirectedGraphAlgoPrivate::FDepthFirstSortInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Audio::DirectedGraphAlgoPrivate::FDepthFirstSortInfo,0>_>
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

// FindChecked @ 1444be500

FTarjanVertexInfo * __thiscall
TMapBase<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo,0>_>
::FindChecked(TMapBase<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Audio::DirectedGraphAlgoPrivate::FTarjanVertexInfo,0>_>
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

// FindChecked @ 1444fbb40

ScaleDegreeSet * __thiscall
TMapBase<enum_Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet,0>_>
::FindChecked(void *this,Scale param_1)

{
  code *pcVar1;
  bool bVar2;
  Scale SVar3;
  ScaleDegreeSet *pSVar4;
  Scale *pSVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    SVar3 = *(Scale *)(lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) - Minor_Dorian & param_1)
                               * 4);
    if (SVar3 != ~Major) {
      do {
        pSVar5 = (Scale *)((longlong)(int)SVar3 * 0x30 + *(longlong *)this);
        if (*pSVar5 == param_1) {
          if (pSVar5 != (Scale *)0x0) {
            return (ScaleDegreeSet *)(pSVar5 + 2);
          }
          break;
        }
        SVar3 = pSVar5[10];
      } while (SVar3 != ~Major);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (ScaleDegreeSet *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pSVar4 = (ScaleDegreeSet *)(*pcVar1)();
  return pSVar4;
}

