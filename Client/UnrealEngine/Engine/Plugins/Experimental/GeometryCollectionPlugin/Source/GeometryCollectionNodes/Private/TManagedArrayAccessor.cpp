// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 8

// TManagedArrayAccessor<UE::Math::TIntVector3<int>_> @ 14e90fa50

TManagedArrayAccessor<UE::Math::TIntVector3<int>_> * __thiscall
TManagedArrayAccessor<UE::Math::TIntVector3<int>_>::
TManagedArrayAccessor<UE::Math::TIntVector3<int>_>
          (TManagedArrayAccessor<UE::Math::TIntVector3<int>_> *this,FManagedArrayCollection *param_1
          ,FName *param_2,FName *param_3,FName *param_4)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArrayAccessor<UE::Math::TIntVector3<int>_> *pTVar4;
  FValueType *pFVar5;
  FValueType *this_00;
  FName local_18;
  FName local_10;
  
  this->ConstCollection = param_1;
  this->Collection = param_1;
  this->Name = *param_2;
  this->Group = *param_3;
  this->DefaultGroupDependency = *param_4;
  local_18 = *param_2;
  local_10 = *param_3;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_18);
  pFVar5 = (FValueType *)0x0;
  this_00 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    this_00 = pFVar5;
  }
  if ((this_00 != (FValueType *)0x0) && (this_00->ArrayType == FIntVectorType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(this_00);
    pFVar5 = (FValueType *)this_00->ManagedArray;
    if (pFVar5 == (FValueType *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x319,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArrayAccessor<UE::Math::TIntVector3<int>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  this->AttributeArray = (TManagedArray<UE::Math::TIntVector3<int>_> *)pFVar5;
  this->ConstAttributeArray = (TManagedArray<UE::Math::TIntVector3<int>_> *)pFVar5;
  return this;
}

// Add @ 14e938900

TManagedArray<unsigned_char> * __thiscall
TManagedArrayAccessor<unsigned_char>::Add
          (TManagedArrayAccessor<unsigned_char> *this,EPersistencePolicy param_1,FName param_2)

{
  FName FVar1;
  FManagedArrayCollection *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TManagedArray<unsigned_char> *pTVar8;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar9;
  undefined1 *puVar10;
  ushort local_30;
  undefined2 uStack_2e;
  FConstructionParameters local_28;
  FName local_18;
  FName local_10;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x85,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TManagedArray<unsigned_char> *)(*pcVar4)();
      return pTVar8;
    }
  }
  if (param_1 == MakePersistent) {
    bVar5 = FManagedArrayCollection::IsAttributePersistent
                      (this->ConstCollection,this->Name,this->Group);
    if (!bVar5) {
      if (this->Collection == (FManagedArrayCollection *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0xbf,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TManagedArray<unsigned_char> *)(*pcVar4)();
          return pTVar8;
        }
      }
      FManagedArrayCollection::RemoveAttribute(this->Collection,this->Name,this->Group);
      this->AttributeArray = (TManagedArray<unsigned_char> *)0x0;
      this->ConstAttributeArray = (TManagedArray<unsigned_char> *)0x0;
    }
  }
  FVar1 = this->Group;
  pFVar2 = this->Collection;
  uVar6 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(pFVar2->GroupInfo).field_0x8 != *(int *)&(pFVar2->GroupInfo).field_0x34) {
    puVar10 = *(undefined1 **)&(pFVar2->GroupInfo).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(pFVar2->GroupInfo).field_0x38;
    }
    iVar7 = *(int *)(puVar10 +
                    (ulonglong)(*(int *)&(pFVar2->GroupInfo).field_0x48 - 1U & FVar1.Number + uVar6)
                    * 4);
    if (iVar7 != -1) {
      do {
        if (*(FName *)(*(longlong *)&pFVar2->GroupInfo + (longlong)iVar7 * 0x14) == FVar1)
        goto LAB_14e938a32;
        iVar7 = *(int *)(*(longlong *)&pFVar2->GroupInfo + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,this->Group);
LAB_14e938a32:
  pFVar2 = this->Collection;
  FVar1 = this->Name;
  local_28.GroupIndexDependency = this->DefaultGroupDependency;
  if (param_2 != (FName)0x0) {
    local_28.GroupIndexDependency = param_2;
  }
  FVar3 = this->Group;
  local_28.Saved = param_1 == MakePersistent;
  local_28.bAllowCircularDependency = false;
  local_28._10_2_ = uStack_2e;
  bVar5 = FManagedArrayCollection::HasAttribute(pFVar2,FVar1,FVar3);
  if (!bVar5) {
    FManagedArrayCollection::AddNewAttributeImpl<unsigned_char>(pFVar2,FVar1,FVar3,&local_28);
  }
  bVar5 = FManagedArrayCollection::HasAttribute(pFVar2,FVar1,FVar3);
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x164,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TManagedArray<unsigned_char> *)(*pcVar4)();
      return pTVar8;
    }
  }
  local_18 = FVar1;
  local_10 = FVar3;
  pTVar9 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  if (pTVar9 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TManagedArray<unsigned_char> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pTVar8 = FManagedArrayCollection::FValueType::ModifyTypedPtr<unsigned_char>
                     ((FValueType *)&pTVar9->field_0x10);
  this->AttributeArray = pTVar8;
  this->ConstAttributeArray = pTVar8;
  return pTVar8;
}

// Add @ 14e938b50

TManagedArray<double> * __thiscall
TManagedArrayAccessor<double>::Add
          (TManagedArrayAccessor<double> *this,EPersistencePolicy param_1,FName param_2)

{
  FName FVar1;
  FManagedArrayCollection *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TManagedArray<double> *pTVar8;
  undefined1 *puVar9;
  ushort local_20;
  undefined2 uStack_1e;
  FConstructionParameters local_18;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x85,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TManagedArray<double> *)(*pcVar4)();
      return pTVar8;
    }
  }
  if (param_1 == MakePersistent) {
    bVar5 = FManagedArrayCollection::IsAttributePersistent
                      (this->ConstCollection,this->Name,this->Group);
    if (!bVar5) {
      if (this->Collection == (FManagedArrayCollection *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0xbf,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TManagedArray<double> *)(*pcVar4)();
          return pTVar8;
        }
      }
      FManagedArrayCollection::RemoveAttribute(this->Collection,this->Name,this->Group);
      this->AttributeArray = (TManagedArray<double> *)0x0;
      this->ConstAttributeArray = (TManagedArray<double> *)0x0;
    }
  }
  FVar1 = this->Group;
  pFVar2 = this->Collection;
  uVar6 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(pFVar2->GroupInfo).field_0x8 != *(int *)&(pFVar2->GroupInfo).field_0x34) {
    puVar9 = *(undefined1 **)&(pFVar2->GroupInfo).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(pFVar2->GroupInfo).field_0x38;
    }
    iVar7 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(pFVar2->GroupInfo).field_0x48 - 1U & FVar1.Number + uVar6)
                              * 4);
    if (iVar7 != -1) {
      do {
        if (*(FName *)(*(longlong *)&pFVar2->GroupInfo + (longlong)iVar7 * 0x14) == FVar1)
        goto LAB_14e938c82;
        iVar7 = *(int *)(*(longlong *)&pFVar2->GroupInfo + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,this->Group);
LAB_14e938c82:
  pFVar2 = this->Collection;
  FVar1 = this->Name;
  local_18.GroupIndexDependency = this->DefaultGroupDependency;
  if (param_2 != (FName)0x0) {
    local_18.GroupIndexDependency = param_2;
  }
  FVar3 = this->Group;
  local_18.Saved = param_1 == MakePersistent;
  local_18.bAllowCircularDependency = false;
  local_18._10_2_ = uStack_1e;
  bVar5 = FManagedArrayCollection::HasAttribute(pFVar2,FVar1,FVar3);
  if (!bVar5) {
    FManagedArrayCollection::AddNewAttributeImpl<double>(pFVar2,FVar1,FVar3,&local_18);
  }
  pTVar8 = FManagedArrayCollection::ModifyAttribute<double>(pFVar2,FVar1,FVar3);
  this->AttributeArray = pTVar8;
  this->ConstAttributeArray = pTVar8;
  return pTVar8;
}

// Add @ 14e938d20

TManagedArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_> * __thiscall
TManagedArrayAccessor<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_>::Add
          (TManagedArrayAccessor<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_>
           *this,EPersistencePolicy param_1,FName param_2)

{
  FName FVar1;
  FManagedArrayCollection *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TManagedArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_> *pTVar8;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar9;
  undefined1 *puVar10;
  ushort local_30;
  undefined2 uStack_2e;
  FConstructionParameters local_28;
  FName local_18;
  FName local_10;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x85,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TManagedArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar4)();
      return pTVar8;
    }
  }
  if (param_1 == MakePersistent) {
    bVar5 = FManagedArrayCollection::IsAttributePersistent
                      (this->ConstCollection,this->Name,this->Group);
    if (!bVar5) {
      if (this->Collection == (FManagedArrayCollection *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0xbf,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TManagedArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_> *
                   )(*pcVar4)();
          return pTVar8;
        }
      }
      FManagedArrayCollection::RemoveAttribute(this->Collection,this->Name,this->Group);
      this->AttributeArray =
           (TManagedArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_> *)0x0;
      this->ConstAttributeArray =
           (TManagedArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_> *)0x0;
    }
  }
  FVar1 = this->Group;
  pFVar2 = this->Collection;
  uVar6 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(pFVar2->GroupInfo).field_0x8 != *(int *)&(pFVar2->GroupInfo).field_0x34) {
    puVar10 = *(undefined1 **)&(pFVar2->GroupInfo).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(pFVar2->GroupInfo).field_0x38;
    }
    iVar7 = *(int *)(puVar10 +
                    (ulonglong)(*(int *)&(pFVar2->GroupInfo).field_0x48 - 1U & FVar1.Number + uVar6)
                    * 4);
    if (iVar7 != -1) {
      do {
        if (*(FName *)(*(longlong *)&pFVar2->GroupInfo + (longlong)iVar7 * 0x14) == FVar1)
        goto LAB_14e938e52;
        iVar7 = *(int *)(*(longlong *)&pFVar2->GroupInfo + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,this->Group);
LAB_14e938e52:
  pFVar2 = this->Collection;
  FVar1 = this->Name;
  local_28.GroupIndexDependency = this->DefaultGroupDependency;
  if (param_2 != (FName)0x0) {
    local_28.GroupIndexDependency = param_2;
  }
  FVar3 = this->Group;
  local_28.Saved = param_1 == MakePersistent;
  local_28.bAllowCircularDependency = false;
  local_28._10_2_ = uStack_2e;
  bVar5 = FManagedArrayCollection::HasAttribute(pFVar2,FVar1,FVar3);
  if (!bVar5) {
    FManagedArrayCollection::
    AddNewAttributeImpl<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_>
              (pFVar2,FVar1,FVar3,&local_28);
  }
  bVar5 = FManagedArrayCollection::HasAttribute(pFVar2,FVar1,FVar3);
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x164,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TManagedArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar4)();
      return pTVar8;
    }
  }
  local_18 = FVar1;
  local_10 = FVar3;
  pTVar9 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  if (pTVar9 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TManagedArray<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar4)();
      return pTVar8;
    }
  }
  pTVar8 = FManagedArrayCollection::FValueType::
           ModifyTypedPtr<TArray<UE::Math::TIntVector2<int>,TSizedDefaultAllocator<32>_>_>
                     ((FValueType *)&pTVar9->field_0x10);
  this->AttributeArray = pTVar8;
  this->ConstAttributeArray = pTVar8;
  return pTVar8;
}

// Add @ 14e938f70

TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> * __thiscall
TManagedArrayAccessor<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>::Add
          (TManagedArrayAccessor<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
           *this,EPersistencePolicy param_1,FName param_2)

{
  FName FVar1;
  FManagedArrayCollection *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *pTVar8;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar9;
  undefined1 *puVar10;
  ushort local_30;
  undefined2 uStack_2e;
  FConstructionParameters local_28;
  FName local_18;
  FName local_10;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x85,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar4)();
      return pTVar8;
    }
  }
  if (param_1 == MakePersistent) {
    bVar5 = FManagedArrayCollection::IsAttributePersistent
                      (this->ConstCollection,this->Name,this->Group);
    if (!bVar5) {
      if (this->Collection == (FManagedArrayCollection *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0xbf,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)
                   (*pcVar4)();
          return pTVar8;
        }
      }
      FManagedArrayCollection::RemoveAttribute(this->Collection,this->Name,this->Group);
      this->AttributeArray =
           (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)0x0;
      this->ConstAttributeArray =
           (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)0x0;
    }
  }
  FVar1 = this->Group;
  pFVar2 = this->Collection;
  uVar6 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(pFVar2->GroupInfo).field_0x8 != *(int *)&(pFVar2->GroupInfo).field_0x34) {
    puVar10 = *(undefined1 **)&(pFVar2->GroupInfo).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(pFVar2->GroupInfo).field_0x38;
    }
    iVar7 = *(int *)(puVar10 +
                    (ulonglong)(*(int *)&(pFVar2->GroupInfo).field_0x48 - 1U & FVar1.Number + uVar6)
                    * 4);
    if (iVar7 != -1) {
      do {
        if (*(FName *)(*(longlong *)&pFVar2->GroupInfo + (longlong)iVar7 * 0x14) == FVar1)
        goto LAB_14e9390a2;
        iVar7 = *(int *)(*(longlong *)&pFVar2->GroupInfo + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,this->Group);
LAB_14e9390a2:
  pFVar2 = this->Collection;
  FVar1 = this->Name;
  local_28.GroupIndexDependency = this->DefaultGroupDependency;
  if (param_2 != (FName)0x0) {
    local_28.GroupIndexDependency = param_2;
  }
  FVar3 = this->Group;
  local_28.Saved = param_1 == MakePersistent;
  local_28.bAllowCircularDependency = false;
  local_28._10_2_ = uStack_2e;
  bVar5 = FManagedArrayCollection::HasAttribute(pFVar2,FVar1,FVar3);
  if (!bVar5) {
    FManagedArrayCollection::
    AddNewAttributeImpl<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
              (pFVar2,FVar1,FVar3,&local_28);
  }
  bVar5 = FManagedArrayCollection::HasAttribute(pFVar2,FVar1,FVar3);
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x164,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar4)();
      return pTVar8;
    }
  }
  local_18 = FVar1;
  local_10 = FVar3;
  pTVar9 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_18);
  if (pTVar9 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar4)();
      return pTVar8;
    }
  }
  pTVar8 = FManagedArrayCollection::FValueType::
           ModifyTypedPtr<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                     ((FValueType *)&pTVar9->field_0x10);
  this->AttributeArray = pTVar8;
  this->ConstAttributeArray = pTVar8;
  return pTVar8;
}

// AddAndFill @ 14e9391c0

void __thiscall
TManagedArrayAccessor<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>::AddAndFill
          (TManagedArrayAccessor<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
           *this,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_1,
          EPersistencePolicy param_2,FName param_3)

{
  int *piVar1;
  int iVar2;
  TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *pTVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar9;
  
  if ((this->Collection == (FManagedArrayCollection *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0xa1,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar5 = FManagedArrayCollection::HasAttribute(this->Collection,this->Name,this->Group);
  if (!bVar5) {
    Add(this,param_2,param_3);
    pTVar3 = this->AttributeArray;
    uVar7 = 0;
    if (0 < *(int *)&pTVar3->field_0x18) {
      lVar8 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar7 < *(int *)&pTVar3->field_0x18) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar9 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                 (*(longlong *)&pTVar3->field_0x10 + lVar8);
        if (pTVar9 != param_1) {
          iVar2 = param_1->ArrayNum;
          piVar1 = &pTVar9->ArrayMax;
          _Src = (param_1->AllocatorInstance).Data;
          pTVar9->ArrayNum = iVar2;
          if ((iVar2 == 0) && (*piVar1 == 0)) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,iVar2,*piVar1,(ForAnyElementType *)pTVar9,iVar2,piVar1);
            if (iVar2 != 0) {
              memcpy((pTVar9->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0xc);
            }
          }
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 0x10;
      } while ((int)uVar7 < *(int *)&pTVar3->field_0x18);
    }
  }
  return;
}

// AddAndFill @ 14e939350

void __thiscall
TManagedArrayAccessor<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>::AddAndFill
          (TManagedArrayAccessor<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *this,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1,EPersistencePolicy param_2,
          FName param_3)

{
  undefined1 *puVar1;
  undefined1 *this_00;
  int iVar2;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_01;
  
  if ((this->Collection == (FManagedArrayCollection *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0xa1,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar5 = FManagedArrayCollection::HasAttribute(this->Collection,this->Name,this->Group);
  if (!bVar5) {
    Add(this,param_2,param_3);
    pTVar3 = this->AttributeArray;
    uVar7 = 0;
    if (0 < *(int *)&pTVar3->field_0x18) {
      lVar8 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar7 < *(int *)&pTVar3->field_0x18) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_01 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                  (*(longlong *)&pTVar3->field_0x10 + lVar8);
        if (this_01 != param_1) {
          UE::Core::Private::
          CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                    (&this_01->Hash,&this_01->HashSize,&param_1->Hash,param_1->HashSize);
          iVar2 = *(int *)&(param_1->Elements).field_0x8;
          TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Empty((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this_01,iVar2);
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,iVar2,(ForAnyElementType *)this_01,(int *)&(this_01->Elements).field_0x8,
                     (int *)&(this_01->Elements).field_0xc);
          puVar1 = &(param_1->Elements).field_0x10;
          this_00 = &(this_01->Elements).field_0x10;
          *(undefined4 *)&(this_01->Elements).field_0x30 =
               *(undefined4 *)&(param_1->Elements).field_0x30;
          *(undefined4 *)&(this_01->Elements).field_0x34 =
               *(undefined4 *)&(param_1->Elements).field_0x34;
          if (this_00 != puVar1) {
            TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                      ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                       (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
          }
          if (iVar2 != 0) {
            memcpy(*(void **)&this_01->Elements,*(void **)&param_1->Elements,(longlong)iVar2 * 0xc);
          }
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 0x50;
      } while ((int)uVar7 < *(int *)&pTVar3->field_0x18);
    }
  }
  return;
}

// Get @ 14e951f60

TManagedArray<UE::Math::TTransform<float>_> * __thiscall
TManagedArrayAccessor<UE::Math::TTransform<float>_>::Get
          (TManagedArrayAccessor<UE::Math::TTransform<float>_> *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TTransform<float>_> *pTVar3;
  
  if (this->ConstAttributeArray != (TManagedArray<UE::Math::TTransform<float>_> *)0x0) {
    return this->ConstAttributeArray;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                     ,0x67,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TManagedArray<UE::Math::TTransform<float>_> *)(*pcVar1)();
    return pTVar3;
  }
  return this->ConstAttributeArray;
}

