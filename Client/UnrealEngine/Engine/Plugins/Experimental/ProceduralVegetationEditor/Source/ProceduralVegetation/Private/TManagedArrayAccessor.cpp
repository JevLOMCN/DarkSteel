// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 17

// TManagedArrayAccessor<UE::Math::TVector<float>_> @ 14da5fca0

TManagedArrayAccessor<UE::Math::TVector<float>_> * __thiscall
TManagedArrayAccessor<UE::Math::TVector<float>_>::TManagedArrayAccessor<UE::Math::TVector<float>_>
          (TManagedArrayAccessor<UE::Math::TVector<float>_> *this,FManagedArrayCollection *param_1,
          FName *param_2,FName *param_3,FName *param_4)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArrayAccessor<UE::Math::TVector<float>_> *pTVar4;
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
  if ((this_00 != (FValueType *)0x0) && (this_00->ArrayType == FVectorType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(this_00);
    pFVar5 = (FValueType *)this_00->ManagedArray;
    if (pFVar5 == (FValueType *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x319,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArrayAccessor<UE::Math::TVector<float>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  this->AttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)pFVar5;
  this->ConstAttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)pFVar5;
  return this;
}

// TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14da5fd70

TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::
TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>
          (TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          FManagedArrayCollection *param_1,FName *param_2,FName *param_3,FName *param_4)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar4;
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
  if ((this_00 != (FValueType *)0x0) && (this_00->ArrayType == FFloatArrayType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(this_00);
    pFVar5 = (FValueType *)this_00->ManagedArray;
    if (pFVar5 == (FValueType *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x319,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  this->AttributeArray = (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)pFVar5;
  this->ConstAttributeArray = (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)pFVar5;
  return this;
}

// TManagedArrayAccessor<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> @ 14da5fe40

TManagedArrayAccessor<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> * __thiscall
TManagedArrayAccessor<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>::
TManagedArrayAccessor<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
          (TManagedArrayAccessor<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
           *this,FManagedArrayCollection *param_1,FName *param_2,FName *param_3,FName *param_4)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArrayAccessor<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *pTVar4;
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
  if ((this_00 != (FValueType *)0x0) && (this_00->ArrayType == FFVectorArrayType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(this_00);
    pFVar5 = (FValueType *)this_00->ManagedArray;
    if (pFVar5 == (FValueType *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x319,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArrayAccessor<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                  *)(*pcVar1)();
        return pTVar4;
      }
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  this->AttributeArray =
       (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)pFVar5;
  this->ConstAttributeArray =
       (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)pFVar5;
  return this;
}

// operator[] @ 14da682f0

TVector2<float> * __thiscall
TManagedArrayAccessor<UE::Math::TVector2<float>_>::operator[]
          (TManagedArrayAccessor<UE::Math::TVector2<float>_> *this,int param_1)

{
  TManagedArray<UE::Math::TVector2<float>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TVector2<float> *pTVar5;
  
  if (this->ConstAttributeArray == (TManagedArray<UE::Math::TVector2<float>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x60,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TVector2<float> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pTVar1 = this->ConstAttributeArray;
  uVar4 = 0;
  if (param_1 < *(int *)&pTVar1->field_0x18) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TVector2<float> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return (TVector2<float> *)(*(longlong *)&pTVar1->field_0x10 + (longlong)param_1 * 8);
}

// operator[] @ 14da68390

TVector<float> * __thiscall
TManagedArrayAccessor<UE::Math::TVector<float>_>::operator[]
          (TManagedArrayAccessor<UE::Math::TVector<float>_> *this,int param_1)

{
  TManagedArray<UE::Math::TVector<float>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TVector<float> *pTVar5;
  
  if (this->ConstAttributeArray == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x60,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TVector<float> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pTVar1 = this->ConstAttributeArray;
  uVar4 = 0;
  if (param_1 < *(int *)&pTVar1->field_0x18) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TVector<float> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return (TVector<float> *)(*(longlong *)&pTVar1->field_0x10 + (longlong)param_1 * 0xc);
}

// operator[] @ 14da68440

TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> * __thiscall
TManagedArrayAccessor<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>::operator[]
          (TManagedArrayAccessor<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
           *this,int param_1)

{
  TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar5;
  
  if (this->ConstAttributeArray ==
      (TManagedArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x60,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pTVar1 = this->ConstAttributeArray;
  uVar4 = 0;
  if (param_1 < *(int *)&pTVar1->field_0x18) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
         ((longlong)param_1 * 0x10 + *(longlong *)&pTVar1->field_0x10);
}

// Add @ 14da6a210

TManagedArray<UE::Math::TVector2<float>_> * __thiscall
TManagedArrayAccessor<UE::Math::TVector2<float>_>::Add
          (TManagedArrayAccessor<UE::Math::TVector2<float>_> *this,EPersistencePolicy param_1,
          FName param_2)

{
  FName FVar1;
  FManagedArrayCollection *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TManagedArray<UE::Math::TVector2<float>_> *pTVar8;
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
      pTVar8 = (TManagedArray<UE::Math::TVector2<float>_> *)(*pcVar4)();
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
          pTVar8 = (TManagedArray<UE::Math::TVector2<float>_> *)(*pcVar4)();
          return pTVar8;
        }
      }
      FManagedArrayCollection::RemoveAttribute(this->Collection,this->Name,this->Group);
      this->AttributeArray = (TManagedArray<UE::Math::TVector2<float>_> *)0x0;
      this->ConstAttributeArray = (TManagedArray<UE::Math::TVector2<float>_> *)0x0;
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
        goto LAB_14da6a342;
        iVar7 = *(int *)(*(longlong *)&pFVar2->GroupInfo + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,this->Group);
LAB_14da6a342:
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
    FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector2<float>_>
              (pFVar2,FVar1,FVar3,&local_18);
  }
  pTVar8 = FManagedArrayCollection::ModifyAttribute<UE::Math::TVector2<float>_>(pFVar2,FVar1,FVar3);
  this->AttributeArray = pTVar8;
  this->ConstAttributeArray = pTVar8;
  return pTVar8;
}

// Add @ 14da6a3e0

TManagedArray<FGuid> * __thiscall
TManagedArrayAccessor<FGuid>::Add
          (TManagedArrayAccessor<FGuid> *this,EPersistencePolicy param_1,FName param_2)

{
  FName FVar1;
  FManagedArrayCollection *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TManagedArray<FGuid> *pTVar8;
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
      pTVar8 = (TManagedArray<FGuid> *)(*pcVar4)();
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
          pTVar8 = (TManagedArray<FGuid> *)(*pcVar4)();
          return pTVar8;
        }
      }
      FManagedArrayCollection::RemoveAttribute(this->Collection,this->Name,this->Group);
      this->AttributeArray = (TManagedArray<FGuid> *)0x0;
      this->ConstAttributeArray = (TManagedArray<FGuid> *)0x0;
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
        goto LAB_14da6a512;
        iVar7 = *(int *)(*(longlong *)&pFVar2->GroupInfo + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,this->Group);
LAB_14da6a512:
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
    FManagedArrayCollection::AddNewAttributeImpl<FGuid>(pFVar2,FVar1,FVar3,&local_28);
  }
  bVar5 = FManagedArrayCollection::HasAttribute(pFVar2,FVar1,FVar3);
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x164,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TManagedArray<FGuid> *)(*pcVar4)();
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
      pTVar8 = (TManagedArray<FGuid> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pTVar8 = FManagedArrayCollection::FValueType::ModifyTypedPtr<FGuid>
                     ((FValueType *)&pTVar9->field_0x10);
  this->AttributeArray = pTVar8;
  this->ConstAttributeArray = pTVar8;
  return pTVar8;
}

// Get @ 14da928c0

TManagedArray<float> * __thiscall
TManagedArrayAccessor<float>::Get(TManagedArrayAccessor<float> *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<float> *pTVar3;
  
  if (this->ConstAttributeArray != (TManagedArray<float> *)0x0) {
    return this->ConstAttributeArray;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                     ,0x67,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TManagedArray<float> *)(*pcVar1)();
    return pTVar3;
  }
  return this->ConstAttributeArray;
}

// IsValidIndex @ 14da9b1c0

bool __thiscall
TManagedArrayAccessor<UE::Math::TVector<float>_>::IsValidIndex
          (TManagedArrayAccessor<UE::Math::TVector<float>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  
  if (this->ConstAttributeArray == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x3b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (-1 < param_1) {
    iVar4 = (**(code **)(*(longlong *)this->ConstAttributeArray + 0x60))();
    if (param_1 < iVar4) {
      return true;
    }
  }
  return false;
}

// IsValidIndex @ 14da9b230

bool __thiscall
TManagedArrayAccessor<FString>::IsValidIndex(TManagedArrayAccessor<FString> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  
  if (this->ConstAttributeArray == (TManagedArray<FString> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x3b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (-1 < param_1) {
    iVar4 = (**(code **)(*(longlong *)this->ConstAttributeArray + 0x60))();
    if (param_1 < iVar4) {
      return true;
    }
  }
  return false;
}

// ModifyAt @ 14da9d880

void __thiscall
TManagedArrayAccessor<UE::Math::TVector2<float>_>::ModifyAt
          (TManagedArrayAccessor<UE::Math::TVector2<float>_> *this,int param_1,
          TVector2<float> *param_2)

{
  TManagedArray<UE::Math::TVector2<float>_> *pTVar1;
  TVector2<float>_u_0 TVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  if ((this->AttributeArray == (TManagedArray<UE::Math::TVector2<float>_> *)0x0) ||
     (this->Collection == (FManagedArrayCollection *)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttributeArray != nullptr && !IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x7c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->AttributeArray->field_0x8 = 1;
  pTVar1 = this->AttributeArray;
  TVar2 = param_2->field0_0x0;
  uVar5 = 0;
  if (param_1 < *(int *)&pTVar1->field_0x18) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ((TVector2<float>_u_0 *)(*(longlong *)&pTVar1->field_0x10 + (longlong)param_1 * 8))->_s_0 =
       (TVector2<float>_u_0_s_0)TVar2;
  return;
}

// ModifyAt @ 14da9d940

void __thiscall
TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::ModifyAt
          (TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  if ((this->AttributeArray == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) ||
     (this->Collection == (FManagedArrayCollection *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttributeArray != nullptr && !IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x7c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->AttributeArray->field_0x8 = 1;
  pTVar1 = this->AttributeArray;
  uVar4 = 0;
  if (param_1 < *(int *)&pTVar1->field_0x18) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_1 * 0x10 + *(longlong *)&pTVar1->field_0x10),param_2);
  return;
}

// ModifyAt @ 14da9da10

void __thiscall
TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::ModifyAt
          (TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  if ((this->AttributeArray == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) ||
     (this->Collection == (FManagedArrayCollection *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttributeArray != nullptr && !IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x7c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->AttributeArray->field_0x8 = 1;
  pTVar1 = this->AttributeArray;
  uVar4 = 0;
  if (param_1 < *(int *)&pTVar1->field_0x18) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<float,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_1 * 0x10 + *(longlong *)&pTVar1->field_0x10),param_2);
  return;
}

// ModifyAt @ 14da9dae0

void __thiscall
TManagedArrayAccessor<FString>::ModifyAt
          (TManagedArrayAccessor<FString> *this,int param_1,FString *param_2)

{
  TManagedArray<FString> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  if ((this->AttributeArray == (TManagedArray<FString> *)0x0) ||
     (this->Collection == (FManagedArrayCollection *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttributeArray != nullptr && !IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x7c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->AttributeArray->field_0x8 = 1;
  pTVar1 = this->AttributeArray;
  uVar4 = 0;
  if (param_1 < *(int *)&pTVar1->field_0x18) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  ::FString::operator=
            ((FString *)((longlong)param_1 * 0x10 + *(longlong *)&pTVar1->field_0x10),param_2);
  return;
}

// RemoveElements @ 14daa1370

void __thiscall
TManagedArrayAccessor<int>::RemoveElements(TManagedArrayAccessor<int> *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x47,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014daa13d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->Collection->_padding_ + 0x20))(this->Collection,&this->Group,param_1,param_2);
  return;
}

// RemoveElements @ 14daa13e0

void __thiscall
TManagedArrayAccessor<UE::Math::TVector<float>_>::RemoveElements
          (TManagedArrayAccessor<UE::Math::TVector<float>_> *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x47,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014daa1444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->Collection->_padding_ + 0x20))(this->Collection,&this->Group,param_1,param_2);
  return;
}

