// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// Add @ 142165e90

FNode __thiscall
UE::FPropertyPathNameTree::Add(FPropertyPathNameTree *this,FPropertyPathName *param_1,int param_2)

{
  int iVar1;
  FName FVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar6;
  TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  undefined4 in_register_00000084;
  int in_R9D;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FPropertyTypeNameNodeProxy local_res18;
  int local_res20 [2];
  FScriptContainerElement local_68 [8];
  FPropertyTypeNameNode local_60;
  FPropertyPathNameSegment local_50;
  
  iVar1 = (((FPropertyPathName *)CONCAT44(in_register_00000084,param_2))->Segments).ArrayNum;
  if (iVar1 <= in_R9D) {
    (param_1->Segments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    return (FNode)param_1;
  }
  FPropertyPathName::GetSegment
            ((FPropertyPathName *)CONCAT44(in_register_00000084,param_2),&local_50,in_R9D);
  local_60.Name = local_50.Name;
  local_60.InnerCount = local_50.Type.Index;
  local_res18.First =
       (FPropertyTypeNameNode *)
       ((longlong)GPropertyTypeNameTable.Blocks[(longlong)local_50.Type.Index >> 0xd] +
       (ulonglong)(local_50.Type.Index & 0x1fff) * 0xc);
  uVar3 = UE::GetTypeHash(&local_res18);
  FVar2 = local_60.Name;
  uVar4 = ::GetTypeHash(local_60.Name.ComparisonIndex);
  uVar4 = uVar4 + FVar2.Number;
  uVar4 = uVar4 * 0x40 + uVar3 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4;
  iVar5 = TSet<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>,TDefaultMapHashableKeyFuncs<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::FPropertyPathNameTree::FKey>
                    ((TSet<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>,TDefaultMapHashableKeyFuncs<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue,0>,FDefaultSetAllocator>
                      *)this,uVar4,(FKey *)&local_60);
  this_00 = (TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)0x0;
  if ((iVar5 == -1) || (lVar7 = (longlong)iVar5 * 0x98 + *(longlong *)&this->Nodes, lVar7 == 0)) {
    local_res18.First = &local_60;
    TSet<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>,TDefaultMapHashableKeyFuncs<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<UE::FPropertyPathNameTree::FKey_&&>_>
              ((TSet<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>,TDefaultMapHashableKeyFuncs<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue,0>,FDefaultSetAllocator>
                *)this,(uint)local_res20,
               (TKeyInitializer<UE::FPropertyPathNameTree::FKey_&&> *)(ulonglong)uVar4,
               (bool *)&local_res18);
    lVar7 = (longlong)local_res20[0] * 0x98 + *(longlong *)&this->Nodes;
  }
  pFVar8 = (FScriptContainerElement *)(lVar7 + 0x10);
  if (iVar1 <= in_R9D + 1) {
    (param_1->Segments).AllocatorInstance.Data = pFVar8;
    return (FNode)param_1;
  }
  if (*(longlong *)pFVar8 == 0) {
    pTVar6 = ::operator_new(0x50);
    if (pTVar6 != (TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)0x0) {
      *(undefined8 *)&pTVar6->field_0x10 = 0;
      *(undefined8 *)&pTVar6->field_0x18 = 0;
      *(undefined8 *)(pTVar6 + 1) = 0;
      *(undefined8 *)&pTVar6[1].field_0x10 = 0;
      *(undefined8 *)pTVar6 = 0;
      *(undefined8 *)&pTVar6->field_0x8 = 0;
      *(undefined8 *)&pTVar6->field_0x20 = 0;
      *(undefined4 *)&pTVar6->field_0x28 = 0;
      *(undefined4 *)&pTVar6->field_0x2c = 0x80;
      *(undefined4 *)&pTVar6->field_0x30 = 0xffffffff;
      *(undefined4 *)&pTVar6->field_0x34 = 0;
      *(undefined8 *)&pTVar6[1].field_0x8 = 0;
      this_00 = pTVar6;
    }
    if (pFVar8 == local_68) {
      if (this_00 ==
          (TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)0x0) goto LAB_142166073;
      *(undefined4 *)&this_00[1].field_0x10 = 0;
      if (*(void **)&this_00[1].field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this_00[1].field_0x8);
      }
      TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (this_00);
    }
    else {
      pTVar6 = *(TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 **)pFVar8;
      *(TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        **)pFVar8 = this_00;
      if (pTVar6 == (TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)0x0) goto LAB_142166073;
      *(undefined4 *)&pTVar6[1].field_0x10 = 0;
      if (*(void **)&pTVar6[1].field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&pTVar6[1].field_0x8);
      }
      TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (pTVar6);
      this_00 = pTVar6;
    }
    ::operator_delete(this_00,0x50);
  }
LAB_142166073:
  Add(*(FPropertyPathNameTree **)pFVar8,param_1,param_2);
  return (FNode)param_1;
}

// Empty @ 142175af0

void __thiscall UE::FPropertyPathNameTree::Empty(FPropertyPathNameTree *this)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = 1 < *(int *)&(this->Nodes).field_0x48;
  if (!bVar3) {
    TSet<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>,TDefaultMapHashableKeyFuncs<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>,TDefaultMapHashableKeyFuncs<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue,0>,FDefaultSetAllocator>
                      *)this);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this,0,*(int *)&(this->Nodes).field_0x8);
  puVar1 = &(this->Nodes).field_0xc;
  *(undefined4 *)&(this->Nodes).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x98,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->Nodes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Nodes).field_0x34 = 0;
  iVar2 = *(int *)&(this->Nodes).field_0x2c;
  *(undefined4 *)&(this->Nodes).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->Nodes).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Nodes).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->Nodes).field_0x48 = 1;
    TSet<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>,TDefaultMapHashableKeyFuncs<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>,TDefaultMapHashableKeyFuncs<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue,0>,FDefaultSetAllocator>
              *)this);
  }
  return;
}

// Find @ 142177810

FNode __thiscall
UE::FPropertyPathNameTree::Find(FPropertyPathNameTree *this,FPropertyPathName *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  undefined4 in_register_00000084;
  int in_R9D;
  FPropertyTypeNameNodeProxy local_res18;
  FKey local_48;
  FPropertyPathNameSegment local_38;
  
  iVar1 = (((FPropertyPathName *)CONCAT44(in_register_00000084,param_2))->Segments).ArrayNum;
  if (in_R9D < iVar1) {
    FPropertyPathName::GetSegment
              ((FPropertyPathName *)CONCAT44(in_register_00000084,param_2),&local_38,in_R9D);
    local_48.Type.Index = local_38.Type.Index;
    local_res18.First =
         (FPropertyTypeNameNode *)
         ((longlong)GPropertyTypeNameTable.Blocks[(longlong)local_38.Type.Index >> 0xd] +
         (ulonglong)(local_38.Type.Index & 0x1fff) * 0xc);
    uVar2 = UE::GetTypeHash(&local_res18);
    uVar3 = ::GetTypeHash(local_38.Name.ComparisonIndex);
    local_38.Name.Number = local_38.Name.Number + uVar3;
    iVar4 = TSet<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>,TDefaultMapHashableKeyFuncs<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue,0>,FDefaultSetAllocator>
            ::FindIndexByHash<UE::FPropertyPathNameTree::FKey>
                      ((TSet<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>,TDefaultMapHashableKeyFuncs<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue,0>,FDefaultSetAllocator>
                        *)this,local_38.Name.Number * 0x40 + uVar2 +
                               (local_38.Name.Number >> 2) + 0x9e3779b9 ^ local_38.Name.Number,
                       &local_48);
    if (iVar4 != -1) {
      lVar5 = (longlong)iVar4 * 0x98 + *(longlong *)&this->Nodes;
      pFVar6 = (FScriptContainerElement *)(lVar5 + 0x10);
      if (lVar5 == 0) {
        pFVar6 = (FScriptContainerElement *)0x0;
      }
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        if (iVar1 <= in_R9D + 1) {
          (param_1->Segments).AllocatorInstance.Data = pFVar6;
          return (FNode)param_1;
        }
        if (*(FPropertyPathNameTree **)pFVar6 != (FPropertyPathNameTree *)0x0) {
          Find(*(FPropertyPathNameTree **)pFVar6,param_1,param_2);
          return (FNode)param_1;
        }
      }
    }
  }
  (param_1->Segments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  return (FNode)param_1;
}

// Remove @ 142188a00

bool __thiscall
UE::FPropertyPathNameTree::Remove
          (FPropertyPathNameTree *this,FPropertyPathName *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  atomic<UE::FPropertyTypeNameNode_*> aVar8;
  longlong lVar9;
  longlong *plVar10;
  FPropertyTypeNameNodeProxy local_res10 [2];
  longlong local_res20;
  FKey local_60;
  FPropertyPathNameSegment local_50;
  
  iVar2 = (param_1->Segments).ArrayNum;
  if (iVar2 <= param_2) {
    return false;
  }
  FPropertyPathName::GetSegment(param_1,&local_50,param_2);
  local_60.Type.Index = local_50.Type.Index;
  lVar7 = (longlong)local_50.Type.Index >> 0xd;
  lVar1 = (ulonglong)(local_50.Type.Index & 0x1fff) * 0xc;
  local_res20 = lVar7 * 8;
  local_res10[0].First =
       (FPropertyTypeNameNode *)((longlong)GPropertyTypeNameTable.Blocks[lVar7] + lVar1);
  uVar4 = UE::GetTypeHash(local_res10);
  uVar5 = ::GetTypeHash(local_50.Name.ComparisonIndex);
  uVar5 = local_50.Name.Number + uVar5;
  iVar6 = TSet<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>,TDefaultMapHashableKeyFuncs<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::FPropertyPathNameTree::FKey>
                    ((TSet<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>,TDefaultMapHashableKeyFuncs<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue,0>,FDefaultSetAllocator>
                      *)this,uVar5 * 0x40 + uVar4 + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5,&local_60);
  if (iVar6 == -1) {
    return false;
  }
  lVar9 = (longlong)iVar6 * 0x98 + *(longlong *)&this->Nodes;
  plVar10 = (longlong *)(lVar9 + 0x10);
  if (lVar9 == 0) {
    plVar10 = (longlong *)0x0;
  }
  if (plVar10 == (longlong *)0x0) {
    return false;
  }
  if (param_2 + 1 < iVar2) {
    if ((FPropertyPathNameTree *)*plVar10 == (FPropertyPathNameTree *)0x0) {
      return false;
    }
    bVar3 = Remove((FPropertyPathNameTree *)*plVar10,param_1,param_2 + 1);
    if (!bVar3) {
      return false;
    }
    if (*(longlong *)((longlong)plVar10 + 0x1c) != 0) {
      return true;
    }
    if (*(int *)(*plVar10 + 8) != *(int *)(*plVar10 + 0x34)) {
      return true;
    }
    if (*(int *)&(this->Nodes).field_0x8 == *(int *)&(this->Nodes).field_0x34) {
      return true;
    }
    aVar8 = GPropertyTypeNameTable.Blocks[lVar7];
  }
  else {
    if (*(int *)&(this->Nodes).field_0x8 == *(int *)&(this->Nodes).field_0x34) {
      return true;
    }
    aVar8 = *(atomic<UE::FPropertyTypeNameNode_*> *)
             (&GPropertyTypeNameTable.Blocks[0].field_0x0 + local_res20);
  }
  local_res10[0].First = (FPropertyTypeNameNode *)((longlong)aVar8 + lVar1);
  uVar4 = UE::GetTypeHash(local_res10);
  uVar5 = ::GetTypeHash(local_50.Name.ComparisonIndex);
  local_50.Name.Number = local_50.Name.Number + uVar5;
  TSet<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>,TDefaultMapHashableKeyFuncs<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue,0>,FDefaultSetAllocator>
  ::RemoveImpl<UE::FPropertyPathNameTree::FKey>
            ((TSet<TTuple<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue>,TDefaultMapHashableKeyFuncs<UE::FPropertyPathNameTree::FKey,UE::FPropertyPathNameTree::FValue,0>,FDefaultSetAllocator>
              *)this,local_50.Name.Number * 0x40 + uVar4 + (local_50.Name.Number >> 2) + 0x9e3779b9
                     ^ local_50.Name.Number,&local_60);
  return true;
}

// CreateConstIterator @ 1422d25c0

FConstIterator * __thiscall
UE::FPropertyPathNameTree::CreateConstIterator
          (FPropertyPathNameTree *this,FConstIterator *__return_storage_ptr__)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(this->Nodes).field_0x28;
  puVar1 = &(this->Nodes).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(this->Nodes).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_1422d2658;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_1422d2658:
  *(FPropertyPathNameTree **)&__return_storage_ptr__->NodeIt = this;
  *(ulonglong *)&(__return_storage_ptr__->NodeIt).field_0x8 = CONCAT44(uVar5,iVar8);
  *(undefined1 **)&(__return_storage_ptr__->NodeIt).field_0x10 = puVar1;
  *(ulonglong *)&(__return_storage_ptr__->NodeIt).field_0x18 = CONCAT44(iVar6,0xffffffff);
  *(ulonglong *)&(__return_storage_ptr__->NodeIt).field_0x20 = CONCAT44(iVar6,iVar9);
  return __return_storage_ptr__;
}

