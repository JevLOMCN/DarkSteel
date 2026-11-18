// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SkeletalMeshDescription
// Functions: 3

// FindOrAddImpl<FVertexID_const_&> @ 14438dbd0

TArray<FTriangleID_const_,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FVertexID_const_,TArray<FTriangleID_const_,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVertexID_const_,TArray<FTriangleID_const_,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FVertexID_const_&>
          (TMapBase<FVertexID_const_,TArray<FTriangleID_const_,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVertexID_const_,TArray<FTriangleID_const_,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FVertexID *param_2)

{
  FVertexID FVar1;
  FVertexID *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FVertexID *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    FVar1 = *(FVertexID *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4)
    ;
    if (FVar1 != (FVertexID)0xffffffff) {
      do {
        pFVar2 = (FVertexID *)((longlong)(int)FVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FVertexID *)0x0) {
            return (TArray<FTriangleID_const_,TSizedDefaultAllocator<32>_> *)(pFVar2 + 2);
          }
          break;
        }
        FVar1 = pFVar2[6];
      } while (FVar1 != (FVertexID)0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FVertexID_const_,TArray<FTriangleID_const_,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FVertexID_const_,TArray<FTriangleID_const_,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FVertexID_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FVertexID_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<FTriangleID_const_,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// Find @ 1443a0980

TTransform<double> * __thiscall
TMapBase<FName,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TTransform<double>,0>_>
::Find(TMapBase<FName,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TTransform<double>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  TTransform<double> *pTVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x80 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pTVar4 = (TTransform<double> *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pTVar4 = (TTransform<double> *)(pFVar2 + 2);
          }
          return pTVar4;
        }
        uVar1 = pFVar2[0xe].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TTransform<double> *)0x0;
}

// Find @ 1443a0a20

FAttributesSetEntry * __thiscall
TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
::Find(TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FAttributesSetEntry *pFVar5;
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
          pFVar5 = (FAttributesSetEntry *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FAttributesSetEntry *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (FAttributesSetEntry *)0x0;
}

