// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 7

// FindOrAddImpl<UScriptStruct_const_*_const_&> @ 1471c8250

TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<UScriptStruct_const_*,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<UScriptStruct_const_*_const_&>
          (TMapBase<UScriptStruct_const_*,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,UScriptStruct **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  UScriptStruct **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((UScriptStruct *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_> *)
                   (plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UScriptStruct_const_*,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UScriptStruct_const_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<UScriptStruct_const_*_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<UE::Mass::FArchetypeGroupHandle_const_&> @ 1471c8300

TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<UE::Mass::FArchetypeGroupHandle,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mass::FArchetypeGroupHandle,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<UE::Mass::FArchetypeGroupHandle_const_&>
          (TMapBase<UE::Mass::FArchetypeGroupHandle,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mass::FArchetypeGroupHandle,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FArchetypeGroupHandle *param_2)

{
  uint *puVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FArchetypeGroupHandle *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar2 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        puVar1 = (uint *)((longlong)(int)uVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((*puVar1 == (*param_2).GroupType.Identifier) && (puVar1[1] == (*param_2).GroupID.ID)) {
          if ((uVar2 != 0xffffffff) && (puVar1 != (uint *)0x0)) {
            return (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)(puVar1 + 2);
          }
          break;
        }
        uVar2 = puVar1[6];
      } while (uVar2 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UE::Mass::FArchetypeGroupHandle,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Mass::FArchetypeGroupHandle,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UE::Mass::FArchetypeGroupHandle_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<UE::Mass::FArchetypeGroupHandle_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<FMassEntityHandle_const_&> @ 1471c83c0

FRelationInstanceData * __thiscall
TMapBase<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>_>
::FindOrAddImpl<FMassEntityHandle_const_&>
          (TMapBase<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>_>
           *this,uint param_1,FMassEntityHandle *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FMassEntityHandle *local_res20;
  
  iVar1 = TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMassEntityHandle>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FRelationInstanceData *)(lVar2 + 8);
  }
  local_res20 = param_2;
  TSet<TTuple<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData>,TDefaultMapHashableKeyFuncs<FMassEntityHandle,UE::Mass::FRelationData::FRelationInstanceData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FMassEntityHandle_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FMassEntityHandle_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FRelationInstanceData *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x30);
}

// FindOrAddImpl<FName_const_&,TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>_const_&> @ 1471c8460

TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)> * __thiscall
TMapBase<FName,TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>,0>_>
::
FindOrAddImpl<FName_const_&,TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>_const_&>
          (TMapBase<FName,TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>,0>_>
           *this,uint param_1,FName *param_2,
          TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>
          *param_3)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [2];
  FName *local_18;
  TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)> *local_10;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>
                    *)(pFVar2 + 2);
          }
          break;
        }
        uVar1 = pFVar2[8].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_18 = param_2;
  local_10 = param_3;
  TSet<TTuple<FName,TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>_>,TDefaultMapHashableKeyFuncs<FName,TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<FName_const_&,TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TPairInitializer<FName_const_&,TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)>_const_&>
              *)(ulonglong)param_1,(bool *)&local_18);
  return (TFunction<void___cdecl(TArray<UMassProcessor_const_*,TSizedDefaultAllocator<32>_>_&)> *)
         (*(longlong *)&(this->Pairs).Elements + 0x10 + (longlong)local_res8[0] * 0x50);
}

// FindOrAddImpl<TObjectKey<UScriptStruct_const_>_> @ 1471c8520

TArray<FSoftClassPath,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<TObjectKey<UScriptStruct_const_>_>
          (TMapBase<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,TObjectKey<UScriptStruct_const_> *param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  TObjectKey<UScriptStruct_const_> *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)((longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((*piVar1 == (param_2->ObjectKey).ObjectIndex) &&
           (piVar1[1] == (param_2->ObjectKey).ObjectSerialNumber)) {
          if ((iVar2 != -1) && (piVar1 != (int *)0x0)) {
            return (TArray<FSoftClassPath,TSizedDefaultAllocator<32>_> *)(piVar1 + 2);
          }
          break;
        }
        iVar2 = piVar1[6];
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<UScriptStruct_const_>,TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TObjectKey<UScriptStruct_const_>_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<TObjectKey<UScriptStruct_const_>_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<FSoftClassPath,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// Find @ 14721a0b0

TSharedRef<FRWAccessDetector,1> * __thiscall
TMapBase<UStruct_const_*,TSharedRef<FRWAccessDetector,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStruct_const_*,TSharedRef<FRWAccessDetector,1>,0>_>
::Find(TMapBase<UStruct_const_*,TSharedRef<FRWAccessDetector,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStruct_const_*,TSharedRef<FRWAccessDetector,1>,0>_>
       *this,UStruct *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedRef<FRWAccessDetector,1> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((UStruct *)*plVar2 == param_1) {
          pTVar4 = (TSharedRef<FRWAccessDetector,1> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TSharedRef<FRWAccessDetector,1> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TSharedRef<FRWAccessDetector,1> *)0x0;
}

// Find @ 14721a150

UScriptStruct ** __thiscall
TMapBase<FName,UScriptStruct_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_const_*,0>_>
::Find(TMapBase<FName,UScriptStruct_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_const_*,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  UScriptStruct **ppUVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x18) == param_1) {
          ppUVar5 = (UScriptStruct **)0x0;
          if (lVar1 != 0) {
            ppUVar5 = (UScriptStruct **)(lVar1 + 8);
          }
          return ppUVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (UScriptStruct **)0x0;
}

