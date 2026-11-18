// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 7

// FindOrAddImpl<int_const_&> @ 14dfeba20

FResidentGroomCacheChunk * __thiscall
TMapBase<int,FResidentGroomCacheChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FResidentGroomCacheChunk,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,FResidentGroomCacheChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FResidentGroomCacheChunk,0>_>
           *this,uint param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x28;
        if (*(int *)(lVar1 + (longlong)iVar2 * 0x28) == *param_2) {
          if (lVar3 != 0) goto LAB_14dfebab2;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x20);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,FResidentGroomCacheChunk>,TDefaultMapHashableKeyFuncs<int,FResidentGroomCacheChunk,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
LAB_14dfebab2:
  return (FResidentGroomCacheChunk *)(lVar3 + 8);
}

// Find @ 14e00d1c0

FGroomCacheStreamingData ** __thiscall
TMapBase<UGroomCache_*,FGroomCacheStreamingData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>_>
::Find(TMapBase<UGroomCache_*,FGroomCacheStreamingData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UGroomCache_*,FGroomCacheStreamingData_*,0>_>
       *this,UGroomCache *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  FGroomCacheStreamingData **ppFVar5;
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
        if (*(UGroomCache **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          ppFVar5 = (FGroomCacheStreamingData **)0x0;
          if (lVar1 != 0) {
            ppFVar5 = (FGroomCacheStreamingData **)(lVar1 + 8);
          }
          return ppFVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FGroomCacheStreamingData **)0x0;
}

// FindChecked @ 14e00ed90

FResidentGroomCacheChunk * __thiscall
TMapBase<int,FResidentGroomCacheChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FResidentGroomCacheChunk,0>_>
::FindChecked(TMapBase<int,FResidentGroomCacheChunk,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FResidentGroomCacheChunk,0>_>
              *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FResidentGroomCacheChunk *pFVar6;
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
            return (FResidentGroomCacheChunk *)(lVar1 + 8);
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
    return (FResidentGroomCacheChunk *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pFVar6 = (FResidentGroomCacheChunk *)(*pcVar3)();
  return pFVar6;
}

// FindOrAddImpl<unsigned___int64_const_&> @ 14e0cfcb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNDIHairStrandsData * __thiscall
TMapBase<unsigned___int64,FNDIHairStrandsData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIHairStrandsData,0>_>
::FindOrAddImpl<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,FNDIHairStrandsData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIHairStrandsData,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  ulong64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x450 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (ulong64 *)0x0) {
            return (FNDIHairStrandsData *)(puVar2 + 2);
          }
          break;
        }
        iVar1 = (int)puVar2[0x88];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned___int64,FNDIHairStrandsData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIHairStrandsData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FNDIHairStrandsData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x450 + 0x10);
}

// FindOrAddImpl<unsigned___int64_const_&> @ 14e0cfd60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FNDIVelocityGridData * __thiscall
TMapBase<unsigned___int64,FNDIVelocityGridData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVelocityGridData,0>_>
::FindOrAddImpl<unsigned___int64_const_&>
          (TMapBase<unsigned___int64,FNDIVelocityGridData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVelocityGridData,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  ulong64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x150 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (ulong64 *)0x0) {
            return (FNDIVelocityGridData *)(puVar2 + 2);
          }
          break;
        }
        iVar1 = (int)puVar2[0x28];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned___int64,FNDIVelocityGridData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVelocityGridData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FNDIVelocityGridData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x150 + 0x10);
}

// Find @ 14e0e7dc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNDIHairStrandsData * __thiscall
TMapBase<unsigned___int64,FNDIHairStrandsData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIHairStrandsData,0>_>
::Find(TMapBase<unsigned___int64,FNDIHairStrandsData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIHairStrandsData,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  FNDIHairStrandsData *pFVar2;
  ulong64 *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar3 = (ulong64 *)((longlong)iVar1 * 0x450 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar3 == param_1) {
          pFVar2 = (FNDIHairStrandsData *)0x0;
          if (puVar3 != (ulong64 *)0x0) {
            pFVar2 = (FNDIHairStrandsData *)(puVar3 + 2);
          }
          return pFVar2;
        }
        iVar1 = (int)puVar3[0x88];
      } while (iVar1 != -1);
    }
  }
  return (FNDIHairStrandsData *)0x0;
}

// Find @ 14e0e7e50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FNDIVelocityGridData * __thiscall
TMapBase<unsigned___int64,FNDIVelocityGridData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVelocityGridData,0>_>
::Find(TMapBase<unsigned___int64,FNDIVelocityGridData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIVelocityGridData,0>_>
       *this,ulong64 param_1)

{
  int iVar1;
  FNDIVelocityGridData *pFVar2;
  ulong64 *puVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar1 != -1) {
      do {
        puVar3 = (ulong64 *)((longlong)iVar1 * 0x150 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar3 == param_1) {
          pFVar2 = (FNDIVelocityGridData *)0x0;
          if (puVar3 != (ulong64 *)0x0) {
            pFVar2 = (FNDIVelocityGridData *)(puVar3 + 2);
          }
          return pFVar2;
        }
        iVar1 = (int)puVar3[0x28];
      } while (iVar1 != -1);
    }
  }
  return (FNDIVelocityGridData *)0x0;
}

