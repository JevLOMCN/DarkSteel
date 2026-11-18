// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 3

// FindOrAddImpl<UGeometryCacheTrackStreamable_*_const_&> @ 14ca03120

FStreamingGeometryCacheData ** __thiscall
TMapBase<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>_>
::FindOrAddImpl<UGeometryCacheTrackStreamable_*_const_&>
          (TMapBase<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>_>
           *this,uint param_1,UGeometryCacheTrackStreamable **param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  UGeometryCacheTrackStreamable **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x18;
        if (*(UGeometryCacheTrackStreamable **)(lVar1 + (longlong)iVar2 * 0x18) == *param_2) {
          if (lVar3 != 0) goto LAB_14ca031b2;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UGeometryCacheTrackStreamable_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<UGeometryCacheTrackStreamable_*_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_14ca031b2:
  return (FStreamingGeometryCacheData **)(lVar3 + 8);
}

// Find @ 14ca15ac0

FStreamingGeometryCacheData ** __thiscall
TMapBase<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>_>
::Find(TMapBase<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>_>
       *this,UGeometryCacheTrackStreamable *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  FStreamingGeometryCacheData **ppFVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(UGeometryCacheTrackStreamable **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          ppFVar5 = (FStreamingGeometryCacheData **)0x0;
          if (lVar1 != 0) {
            ppFVar5 = (FStreamingGeometryCacheData **)(lVar1 + 8);
          }
          return ppFVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FStreamingGeometryCacheData **)0x0;
}

// FindChecked @ 14ca15b70

FResidentChunk * __thiscall
TMapBase<int,FResidentChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>_>
::FindChecked(TMapBase<int,FResidentChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>_>
              *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FResidentChunk *pFVar6;
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
            return (FResidentChunk *)(lVar1 + 8);
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
    return (FResidentChunk *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pFVar6 = (FResidentChunk *)(*pcVar3)();
  return pFVar6;
}

