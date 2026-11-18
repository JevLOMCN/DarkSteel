// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 67

// operator[] @ 14388d670

int * __thiscall
TManagedArrayAccessor<int>::operator[](TManagedArrayAccessor<int> *this,int param_1)

{
  TManagedArray<int> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  
  if (this->ConstAttributeArray == (TManagedArray<int> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x60,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      piVar5 = (int *)(*pcVar2)();
      return piVar5;
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
      piVar5 = (int *)(*pcVar2)();
      return piVar5;
    }
  }
  return (int *)(*(longlong *)&pTVar1->field_0x10 + (longlong)param_1 * 4);
}

// Add @ 143898ac0

TManagedArray<int> * __thiscall
TManagedArrayAccessor<int>::Add
          (TManagedArrayAccessor<int> *this,EPersistencePolicy param_1,FName param_2)

{
  FName FVar1;
  FManagedArrayCollection *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TManagedArray<int> *pTVar8;
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
      pTVar8 = (TManagedArray<int> *)(*pcVar4)();
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
          pTVar8 = (TManagedArray<int> *)(*pcVar4)();
          return pTVar8;
        }
      }
      FManagedArrayCollection::RemoveAttribute(this->Collection,this->Name,this->Group);
      this->AttributeArray = (TManagedArray<int> *)0x0;
      this->ConstAttributeArray = (TManagedArray<int> *)0x0;
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
        goto LAB_143898bf2;
        iVar7 = *(int *)(*(longlong *)&pFVar2->GroupInfo + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,this->Group);
LAB_143898bf2:
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
    FManagedArrayCollection::AddNewAttributeImpl<int>(pFVar2,FVar1,FVar3,&local_28);
  }
  bVar5 = FManagedArrayCollection::HasAttribute(pFVar2,FVar1,FVar3);
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x164,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TManagedArray<int> *)(*pcVar4)();
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
      pTVar8 = (TManagedArray<int> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pTVar8 = FManagedArrayCollection::FValueType::ModifyTypedPtr<int>
                     ((FValueType *)&pTVar9->field_0x10);
  this->AttributeArray = pTVar8;
  this->ConstAttributeArray = pTVar8;
  return pTVar8;
}

// Add @ 143898d10

TManagedArray<float> * __thiscall
TManagedArrayAccessor<float>::Add
          (TManagedArrayAccessor<float> *this,EPersistencePolicy param_1,FName param_2)

{
  FName FVar1;
  FManagedArrayCollection *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TManagedArray<float> *pTVar8;
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
      pTVar8 = (TManagedArray<float> *)(*pcVar4)();
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
          pTVar8 = (TManagedArray<float> *)(*pcVar4)();
          return pTVar8;
        }
      }
      FManagedArrayCollection::RemoveAttribute(this->Collection,this->Name,this->Group);
      this->AttributeArray = (TManagedArray<float> *)0x0;
      this->ConstAttributeArray = (TManagedArray<float> *)0x0;
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
        goto LAB_143898e42;
        iVar7 = *(int *)(*(longlong *)&pFVar2->GroupInfo + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,this->Group);
LAB_143898e42:
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
    FManagedArrayCollection::AddNewAttributeImpl<float>(pFVar2,FVar1,FVar3,&local_28);
  }
  bVar5 = FManagedArrayCollection::HasAttribute(pFVar2,FVar1,FVar3);
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x164,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TManagedArray<float> *)(*pcVar4)();
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
      pTVar8 = (TManagedArray<float> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pTVar8 = FManagedArrayCollection::FValueType::ModifyTypedPtr<float>
                     ((FValueType *)&pTVar9->field_0x10);
  this->AttributeArray = pTVar8;
  this->ConstAttributeArray = pTVar8;
  return pTVar8;
}

// Add @ 143898f60

TManagedArray<UE::Math::TIntVector2<unsigned_int>_> * __thiscall
TManagedArrayAccessor<UE::Math::TIntVector2<unsigned_int>_>::Add
          (TManagedArrayAccessor<UE::Math::TIntVector2<unsigned_int>_> *this,
          EPersistencePolicy param_1,FName param_2)

{
  FName FVar1;
  FManagedArrayCollection *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TManagedArray<UE::Math::TIntVector2<unsigned_int>_> *pTVar8;
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
      pTVar8 = (TManagedArray<UE::Math::TIntVector2<unsigned_int>_> *)(*pcVar4)();
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
          pTVar8 = (TManagedArray<UE::Math::TIntVector2<unsigned_int>_> *)(*pcVar4)();
          return pTVar8;
        }
      }
      FManagedArrayCollection::RemoveAttribute(this->Collection,this->Name,this->Group);
      this->AttributeArray = (TManagedArray<UE::Math::TIntVector2<unsigned_int>_> *)0x0;
      this->ConstAttributeArray = (TManagedArray<UE::Math::TIntVector2<unsigned_int>_> *)0x0;
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
        goto LAB_143899092;
        iVar7 = *(int *)(*(longlong *)&pFVar2->GroupInfo + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,this->Group);
LAB_143899092:
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
    FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector2<unsigned_int>_>
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
      pTVar8 = (TManagedArray<UE::Math::TIntVector2<unsigned_int>_> *)(*pcVar4)();
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
      pTVar8 = (TManagedArray<UE::Math::TIntVector2<unsigned_int>_> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pTVar8 = FManagedArrayCollection::FValueType::ModifyTypedPtr<UE::Math::TIntVector2<unsigned_int>_>
                     ((FValueType *)&pTVar9->field_0x10);
  this->AttributeArray = pTVar8;
  this->ConstAttributeArray = pTVar8;
  return pTVar8;
}

// Add @ 1438991b0

TManagedArray<FString> * __thiscall
TManagedArrayAccessor<FString>::Add
          (TManagedArrayAccessor<FString> *this,EPersistencePolicy param_1,FName param_2)

{
  FName FVar1;
  FManagedArrayCollection *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TManagedArray<FString> *pTVar7;
  undefined1 *puVar8;
  ushort local_20;
  undefined2 uStack_1e;
  FConstructionParameters local_18;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x85,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TManagedArray<FString> *)(*pcVar3)();
      return pTVar7;
    }
  }
  if (param_1 == MakePersistent) {
    bVar4 = FManagedArrayCollection::IsAttributePersistent
                      (this->ConstCollection,this->Name,this->Group);
    if (!bVar4) {
      if (this->Collection == (FManagedArrayCollection *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0xbf,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TManagedArray<FString> *)(*pcVar3)();
          return pTVar7;
        }
      }
      FManagedArrayCollection::RemoveAttribute(this->Collection,this->Name,this->Group);
      this->AttributeArray = (TManagedArray<FString> *)0x0;
      this->ConstAttributeArray = (TManagedArray<FString> *)0x0;
    }
  }
  FVar1 = this->Group;
  pFVar2 = this->Collection;
  uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(pFVar2->GroupInfo).field_0x8 != *(int *)&(pFVar2->GroupInfo).field_0x34) {
    puVar8 = *(undefined1 **)&(pFVar2->GroupInfo).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(pFVar2->GroupInfo).field_0x38;
    }
    iVar6 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(pFVar2->GroupInfo).field_0x48 - 1U & FVar1.Number + uVar5)
                              * 4);
    if (iVar6 != -1) {
      do {
        if (*(FName *)(*(longlong *)&pFVar2->GroupInfo + (longlong)iVar6 * 0x14) == FVar1)
        goto LAB_1438992e2;
        iVar6 = *(int *)(*(longlong *)&pFVar2->GroupInfo + 0xc + (longlong)iVar6 * 0x14);
      } while (iVar6 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,this->Group);
LAB_1438992e2:
  local_18.GroupIndexDependency = this->DefaultGroupDependency;
  if (param_2 != (FName)0x0) {
    local_18.GroupIndexDependency = param_2;
  }
  local_18.Saved = param_1 == MakePersistent;
  local_18.bAllowCircularDependency = false;
  local_18._10_2_ = uStack_1e;
  pTVar7 = FManagedArrayCollection::AddAttribute<FString>
                     (this->Collection,this->Name,this->Group,&local_18);
  this->AttributeArray = pTVar7;
  this->ConstAttributeArray = pTVar7;
  return pTVar7;
}

// ModifyAt @ 1438c3f20

void __thiscall
TManagedArrayAccessor<int>::ModifyAt(TManagedArrayAccessor<int> *this,int param_1,int *param_2)

{
  int iVar1;
  TManagedArray<int> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  if ((this->AttributeArray == (TManagedArray<int> *)0x0) ||
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
  pTVar2 = this->AttributeArray;
  iVar1 = *param_2;
  uVar5 = 0;
  if (param_1 < *(int *)&pTVar2->field_0x18) {
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
  *(int *)(*(longlong *)&pTVar2->field_0x10 + (longlong)param_1 * 4) = iVar1;
  return;
}

// TManagedArrayAccessor<float> @ 143f85350

TManagedArrayAccessor<float> * __thiscall
TManagedArrayAccessor<float>::TManagedArrayAccessor<float>
          (TManagedArrayAccessor<float> *this,FManagedArrayCollection *param_1,FName *param_2,
          FName *param_3,FName *param_4)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArrayAccessor<float> *pTVar4;
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
  if ((this_00 != (FValueType *)0x0) && (this_00->ArrayType == FFloatType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(this_00);
    pFVar5 = (FValueType *)this_00->ManagedArray;
    if (pFVar5 == (FValueType *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x319,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArrayAccessor<float> *)(*pcVar1)();
        return pTVar4;
      }
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  this->AttributeArray = (TManagedArray<float> *)pFVar5;
  this->ConstAttributeArray = (TManagedArray<float> *)pFVar5;
  return this;
}

// TManagedArrayAccessor<float> @ 143f85420

TManagedArrayAccessor<float> * __thiscall
TManagedArrayAccessor<float>::TManagedArrayAccessor<float>
          (TManagedArrayAccessor<float> *this,FManagedArrayCollection *param_1,FName *param_2,
          FName *param_3,FName *param_4)

{
  TManagedArray<float> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  TManagedArrayAccessor<float> *pTVar5;
  char *pcVar6;
  FName local_18;
  FName local_10;
  
  this->ConstCollection = param_1;
  this->Collection = (FManagedArrayCollection *)0x0;
  this->Name = *param_2;
  this->Group = *param_3;
  this->DefaultGroupDependency = *param_4;
  this->AttributeArray = (TManagedArray<float> *)0x0;
  local_18 = *param_2;
  local_10 = *param_3;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_18);
  pcVar6 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = (char *)0x0;
  }
  if ((pcVar6 != (char *)0x0) && (*pcVar6 == '\t')) {
    pTVar1 = *(TManagedArray<float> **)(pcVar6 + 0x20);
    if (pTVar1 == (TManagedArray<float> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TManagedArrayAccessor<float> *)(*pcVar2)();
        return pTVar5;
      }
    }
    this->ConstAttributeArray = pTVar1;
    return this;
  }
  this->ConstAttributeArray = (TManagedArray<float> *)0x0;
  return this;
}

// TManagedArrayAccessor<UE::Math::TIntVector4<int>_> @ 143f854f0

TManagedArrayAccessor<UE::Math::TIntVector4<int>_> * __thiscall
TManagedArrayAccessor<UE::Math::TIntVector4<int>_>::
TManagedArrayAccessor<UE::Math::TIntVector4<int>_>
          (TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *this,FManagedArrayCollection *param_1
          ,FName *param_2,FName *param_3,FName *param_4)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *pTVar4;
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
  if ((this_00 != (FValueType *)0x0) && (this_00->ArrayType == FIntVector4Type)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(this_00);
    pFVar5 = (FValueType *)this_00->ManagedArray;
    if (pFVar5 == (FValueType *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x319,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  this->AttributeArray = (TManagedArray<UE::Math::TIntVector4<int>_> *)pFVar5;
  this->ConstAttributeArray = (TManagedArray<UE::Math::TIntVector4<int>_> *)pFVar5;
  return this;
}

// TManagedArrayAccessor<UE::Math::TVector4<float>_> @ 143f855c0

TManagedArrayAccessor<UE::Math::TVector4<float>_> * __thiscall
TManagedArrayAccessor<UE::Math::TVector4<float>_>::TManagedArrayAccessor<UE::Math::TVector4<float>_>
          (TManagedArrayAccessor<UE::Math::TVector4<float>_> *this,FManagedArrayCollection *param_1,
          FName *param_2,FName *param_3,FName *param_4)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArrayAccessor<UE::Math::TVector4<float>_> *pTVar4;
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
  if ((this_00 != (FValueType *)0x0) && (this_00->ArrayType == FVector4fType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(this_00);
    pFVar5 = (FValueType *)this_00->ManagedArray;
    if (pFVar5 == (FValueType *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x319,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArrayAccessor<UE::Math::TVector4<float>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  this->AttributeArray = (TManagedArray<UE::Math::TVector4<float>_> *)pFVar5;
  this->ConstAttributeArray = (TManagedArray<UE::Math::TVector4<float>_> *)pFVar5;
  return this;
}

// TManagedArrayAccessor<UE::Math::TVector4<float>_> @ 143f85690

TManagedArrayAccessor<UE::Math::TVector4<float>_> * __thiscall
TManagedArrayAccessor<UE::Math::TVector4<float>_>::TManagedArrayAccessor<UE::Math::TVector4<float>_>
          (TManagedArrayAccessor<UE::Math::TVector4<float>_> *this,FManagedArrayCollection *param_1,
          FName *param_2,FName *param_3,FName *param_4)

{
  TManagedArray<UE::Math::TVector4<float>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  TManagedArrayAccessor<UE::Math::TVector4<float>_> *pTVar5;
  char *pcVar6;
  FName local_18;
  FName local_10;
  
  this->ConstCollection = param_1;
  this->Collection = (FManagedArrayCollection *)0x0;
  this->Name = *param_2;
  this->Group = *param_3;
  this->DefaultGroupDependency = *param_4;
  this->AttributeArray = (TManagedArray<UE::Math::TVector4<float>_> *)0x0;
  local_18 = *param_2;
  local_10 = *param_3;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_18);
  pcVar6 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = (char *)0x0;
  }
  if ((pcVar6 != (char *)0x0) && (*pcVar6 == '\'')) {
    pTVar1 = *(TManagedArray<UE::Math::TVector4<float>_> **)(pcVar6 + 0x20);
    if (pTVar1 == (TManagedArray<UE::Math::TVector4<float>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TManagedArrayAccessor<UE::Math::TVector4<float>_> *)(*pcVar2)();
        return pTVar5;
      }
    }
    this->ConstAttributeArray = pTVar1;
    return this;
  }
  this->ConstAttributeArray = (TManagedArray<UE::Math::TVector4<float>_> *)0x0;
  return this;
}

// TManagedArrayAccessor<UE::Math::TVector<float>_> @ 143f85760

TManagedArrayAccessor<UE::Math::TVector<float>_> * __thiscall
TManagedArrayAccessor<UE::Math::TVector<float>_>::TManagedArrayAccessor<UE::Math::TVector<float>_>
          (TManagedArrayAccessor<UE::Math::TVector<float>_> *this,FManagedArrayCollection *param_1,
          FName *param_2,FName *param_3,FName *param_4)

{
  TManagedArray<UE::Math::TVector<float>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  TManagedArrayAccessor<UE::Math::TVector<float>_> *pTVar5;
  char *pcVar6;
  FName local_18;
  FName local_10;
  
  this->ConstCollection = param_1;
  this->Collection = (FManagedArrayCollection *)0x0;
  this->Name = *param_2;
  this->Group = *param_3;
  this->DefaultGroupDependency = *param_4;
  this->AttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  local_18 = *param_2;
  local_10 = *param_3;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_18);
  pcVar6 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = (char *)0x0;
  }
  if ((pcVar6 != (char *)0x0) && (*pcVar6 == '\x01')) {
    pTVar1 = *(TManagedArray<UE::Math::TVector<float>_> **)(pcVar6 + 0x20);
    if (pTVar1 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TManagedArrayAccessor<UE::Math::TVector<float>_> *)(*pcVar2)();
        return pTVar5;
      }
    }
    this->ConstAttributeArray = pTVar1;
    return this;
  }
  this->ConstAttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  return this;
}

// TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_> @ 143f85830

TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::
TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          FManagedArrayCollection *param_1,FName *param_2,FName *param_3,FName *param_4)

{
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar5;
  char *pcVar6;
  FName local_18;
  FName local_10;
  
  this->ConstCollection = param_1;
  this->Collection = (FManagedArrayCollection *)0x0;
  this->Name = *param_2;
  this->Group = *param_3;
  this->DefaultGroupDependency = *param_4;
  this->AttributeArray = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
  local_18 = *param_2;
  local_10 = *param_3;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_18);
  pcVar6 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = (char *)0x0;
  }
  if ((pcVar6 != (char *)0x0) && (*pcVar6 == '%')) {
    pTVar1 = *(TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> **)(pcVar6 + 0x20);
    if (pTVar1 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar2)();
        return pTVar5;
      }
    }
    this->ConstAttributeArray = pTVar1;
    return this;
  }
  this->ConstAttributeArray = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
  return this;
}

// operator[] @ 143f8e5a0

float * __thiscall
TManagedArrayAccessor<float>::operator[](TManagedArrayAccessor<float> *this,int param_1)

{
  TManagedArray<float> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  float *pfVar5;
  
  if (this->ConstAttributeArray == (TManagedArray<float> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x60,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pfVar5 = (float *)(*pcVar2)();
      return pfVar5;
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
      pfVar5 = (float *)(*pcVar2)();
      return pfVar5;
    }
  }
  return (float *)(*(longlong *)&pTVar1->field_0x10 + (longlong)param_1 * 4);
}

// operator[] @ 143f8e640

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
          (TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_> *this,int param_1)

{
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  
  if (this->ConstAttributeArray == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x60,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
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
      pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return (TArray<int,TSizedDefaultAllocator<32>_> *)
         ((longlong)param_1 * 0x10 + *(longlong *)&pTVar1->field_0x10);
}

// operator[] @ 143f8e6f0

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::operator[]
          (TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_> *this,int param_1)

{
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar5;
  
  if (this->ConstAttributeArray == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0)
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x60,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
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
      pTVar5 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return (TArray<float,TSizedDefaultAllocator<32>_> *)
         ((longlong)param_1 * 0x10 + *(longlong *)&pTVar1->field_0x10);
}

// operator[] @ 143f8e7a0

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __thiscall
TManagedArrayAccessor<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>::operator[]
          (TManagedArrayAccessor<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *this,
          int param_1)

{
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar5;
  
  if (this->ConstAttributeArray ==
      (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x60,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar2)();
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
      pTVar5 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
         ((longlong)param_1 * 0x50 + *(longlong *)&pTVar1->field_0x10);
}

// Add @ 143f90b40

TManagedArray<UE::Math::TBox<double>_> * __thiscall
TManagedArrayAccessor<UE::Math::TBox<double>_>::Add
          (TManagedArrayAccessor<UE::Math::TBox<double>_> *this,EPersistencePolicy param_1,
          FName param_2)

{
  FName FVar1;
  FManagedArrayCollection *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TManagedArray<UE::Math::TBox<double>_> *pTVar8;
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
      pTVar8 = (TManagedArray<UE::Math::TBox<double>_> *)(*pcVar4)();
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
          pTVar8 = (TManagedArray<UE::Math::TBox<double>_> *)(*pcVar4)();
          return pTVar8;
        }
      }
      FManagedArrayCollection::RemoveAttribute(this->Collection,this->Name,this->Group);
      this->AttributeArray = (TManagedArray<UE::Math::TBox<double>_> *)0x0;
      this->ConstAttributeArray = (TManagedArray<UE::Math::TBox<double>_> *)0x0;
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
        goto LAB_143f90c72;
        iVar7 = *(int *)(*(longlong *)&pFVar2->GroupInfo + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,this->Group);
LAB_143f90c72:
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
    FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TBox<double>_>
              (pFVar2,FVar1,FVar3,&local_18);
  }
  pTVar8 = FManagedArrayCollection::ModifyAttribute<UE::Math::TBox<double>_>(pFVar2,FVar1,FVar3);
  this->AttributeArray = pTVar8;
  this->ConstAttributeArray = pTVar8;
  return pTVar8;
}

// Add @ 143f90d10

TManagedArray<UE::Math::TIntVector2<int>_> * __thiscall
TManagedArrayAccessor<UE::Math::TIntVector2<int>_>::Add
          (TManagedArrayAccessor<UE::Math::TIntVector2<int>_> *this,EPersistencePolicy param_1,
          FName param_2)

{
  FName FVar1;
  FManagedArrayCollection *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TManagedArray<UE::Math::TIntVector2<int>_> *pTVar8;
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
      pTVar8 = (TManagedArray<UE::Math::TIntVector2<int>_> *)(*pcVar4)();
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
          pTVar8 = (TManagedArray<UE::Math::TIntVector2<int>_> *)(*pcVar4)();
          return pTVar8;
        }
      }
      FManagedArrayCollection::RemoveAttribute(this->Collection,this->Name,this->Group);
      this->AttributeArray = (TManagedArray<UE::Math::TIntVector2<int>_> *)0x0;
      this->ConstAttributeArray = (TManagedArray<UE::Math::TIntVector2<int>_> *)0x0;
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
        goto LAB_143f90e42;
        iVar7 = *(int *)(*(longlong *)&pFVar2->GroupInfo + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,this->Group);
LAB_143f90e42:
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
    FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector2<int>_>
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
      pTVar8 = (TManagedArray<UE::Math::TIntVector2<int>_> *)(*pcVar4)();
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
      pTVar8 = (TManagedArray<UE::Math::TIntVector2<int>_> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pTVar8 = FManagedArrayCollection::FValueType::ModifyTypedPtr<UE::Math::TIntVector2<int>_>
                     ((FValueType *)&pTVar9->field_0x10);
  this->AttributeArray = pTVar8;
  this->ConstAttributeArray = pTVar8;
  return pTVar8;
}

// Add @ 143f90f60

TManagedArray<UE::Math::TIntVector3<int>_> * __thiscall
TManagedArrayAccessor<UE::Math::TIntVector3<int>_>::Add
          (TManagedArrayAccessor<UE::Math::TIntVector3<int>_> *this,EPersistencePolicy param_1,
          FName param_2)

{
  FName FVar1;
  FManagedArrayCollection *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar8;
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
      pTVar8 = (TManagedArray<UE::Math::TIntVector3<int>_> *)(*pcVar4)();
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
          pTVar8 = (TManagedArray<UE::Math::TIntVector3<int>_> *)(*pcVar4)();
          return pTVar8;
        }
      }
      FManagedArrayCollection::RemoveAttribute(this->Collection,this->Name,this->Group);
      this->AttributeArray = (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0;
      this->ConstAttributeArray = (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0;
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
        goto LAB_143f91092;
        iVar7 = *(int *)(*(longlong *)&pFVar2->GroupInfo + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,this->Group);
LAB_143f91092:
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
    FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector3<int>_>
              (pFVar2,FVar1,FVar3,&local_18);
  }
  pTVar8 = FManagedArrayCollection::ModifyAttribute<UE::Math::TIntVector3<int>_>(pFVar2,FVar1,FVar3)
  ;
  this->AttributeArray = pTVar8;
  this->ConstAttributeArray = pTVar8;
  return pTVar8;
}

// Add @ 143f91130

TManagedArray<UE::Math::TIntVector4<int>_> * __thiscall
TManagedArrayAccessor<UE::Math::TIntVector4<int>_>::Add
          (TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *this,EPersistencePolicy param_1,
          FName param_2)

{
  FName FVar1;
  FManagedArrayCollection *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TManagedArray<UE::Math::TIntVector4<int>_> *pTVar8;
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
      pTVar8 = (TManagedArray<UE::Math::TIntVector4<int>_> *)(*pcVar4)();
      return pTVar8;
    }
  }
  if (param_1 == MakePersistent) {
    bVar5 = FManagedArrayCollection::IsAttributePersistent
                      (this->ConstCollection,this->Name,this->Group);
    if (!bVar5) {
      Remove(this);
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
        goto LAB_143f91222;
        iVar7 = *(int *)(*(longlong *)&pFVar2->GroupInfo + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,this->Group);
LAB_143f91222:
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
    FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TIntVector4<int>_>
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
      pTVar8 = (TManagedArray<UE::Math::TIntVector4<int>_> *)(*pcVar4)();
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
      pTVar8 = (TManagedArray<UE::Math::TIntVector4<int>_> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pTVar8 = FManagedArrayCollection::FValueType::ModifyTypedPtr<UE::Math::TIntVector4<int>_>
                     ((FValueType *)&pTVar9->field_0x10);
  this->AttributeArray = pTVar8;
  this->ConstAttributeArray = pTVar8;
  return pTVar8;
}

// Add @ 143f91340

TManagedArray<UE::Math::TQuat<float>_> * __thiscall
TManagedArrayAccessor<UE::Math::TQuat<float>_>::Add
          (TManagedArrayAccessor<UE::Math::TQuat<float>_> *this,EPersistencePolicy param_1,
          FName param_2)

{
  FName FVar1;
  FManagedArrayCollection *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TManagedArray<UE::Math::TQuat<float>_> *pTVar8;
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
      pTVar8 = (TManagedArray<UE::Math::TQuat<float>_> *)(*pcVar4)();
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
          pTVar8 = (TManagedArray<UE::Math::TQuat<float>_> *)(*pcVar4)();
          return pTVar8;
        }
      }
      FManagedArrayCollection::RemoveAttribute(this->Collection,this->Name,this->Group);
      this->AttributeArray = (TManagedArray<UE::Math::TQuat<float>_> *)0x0;
      this->ConstAttributeArray = (TManagedArray<UE::Math::TQuat<float>_> *)0x0;
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
        goto LAB_143f91472;
        iVar7 = *(int *)(*(longlong *)&pFVar2->GroupInfo + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,this->Group);
LAB_143f91472:
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
    FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TQuat<float>_>
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
      pTVar8 = (TManagedArray<UE::Math::TQuat<float>_> *)(*pcVar4)();
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
      pTVar8 = (TManagedArray<UE::Math::TQuat<float>_> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pTVar8 = FManagedArrayCollection::FValueType::ModifyTypedPtr<UE::Math::TQuat<float>_>
                     ((FValueType *)&pTVar9->field_0x10);
  this->AttributeArray = pTVar8;
  this->ConstAttributeArray = pTVar8;
  return pTVar8;
}

// Add @ 143f91590

TManagedArray<UE::Math::TTransform<double>_> * __thiscall
TManagedArrayAccessor<UE::Math::TTransform<double>_>::Add
          (TManagedArrayAccessor<UE::Math::TTransform<double>_> *this,EPersistencePolicy param_1,
          FName param_2)

{
  FName FVar1;
  FManagedArrayCollection *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TManagedArray<UE::Math::TTransform<double>_> *pTVar8;
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
      pTVar8 = (TManagedArray<UE::Math::TTransform<double>_> *)(*pcVar4)();
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
          pTVar8 = (TManagedArray<UE::Math::TTransform<double>_> *)(*pcVar4)();
          return pTVar8;
        }
      }
      FManagedArrayCollection::RemoveAttribute(this->Collection,this->Name,this->Group);
      this->AttributeArray = (TManagedArray<UE::Math::TTransform<double>_> *)0x0;
      this->ConstAttributeArray = (TManagedArray<UE::Math::TTransform<double>_> *)0x0;
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
        goto LAB_143f916c2;
        iVar7 = *(int *)(*(longlong *)&pFVar2->GroupInfo + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,this->Group);
LAB_143f916c2:
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
    FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TTransform<double>_>
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
      pTVar8 = (TManagedArray<UE::Math::TTransform<double>_> *)(*pcVar4)();
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
      pTVar8 = (TManagedArray<UE::Math::TTransform<double>_> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pTVar8 = FManagedArrayCollection::FValueType::ModifyTypedPtr<UE::Math::TTransform<double>_>
                     ((FValueType *)&pTVar9->field_0x10);
  this->AttributeArray = pTVar8;
  this->ConstAttributeArray = pTVar8;
  return pTVar8;
}

// Add @ 143f917e0

TManagedArray<UE::Math::TVector4<float>_> * __thiscall
TManagedArrayAccessor<UE::Math::TVector4<float>_>::Add
          (TManagedArrayAccessor<UE::Math::TVector4<float>_> *this,EPersistencePolicy param_1,
          FName param_2)

{
  FName FVar1;
  FManagedArrayCollection *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TManagedArray<UE::Math::TVector4<float>_> *pTVar8;
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
      pTVar8 = (TManagedArray<UE::Math::TVector4<float>_> *)(*pcVar4)();
      return pTVar8;
    }
  }
  if (param_1 == MakePersistent) {
    bVar5 = FManagedArrayCollection::IsAttributePersistent
                      (this->ConstCollection,this->Name,this->Group);
    if (!bVar5) {
      Remove(this);
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
        goto LAB_143f918d2;
        iVar7 = *(int *)(*(longlong *)&pFVar2->GroupInfo + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,this->Group);
LAB_143f918d2:
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
    FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector4<float>_>
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
      pTVar8 = (TManagedArray<UE::Math::TVector4<float>_> *)(*pcVar4)();
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
      pTVar8 = (TManagedArray<UE::Math::TVector4<float>_> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pTVar8 = FManagedArrayCollection::FValueType::ModifyTypedPtr<UE::Math::TVector4<float>_>
                     ((FValueType *)&pTVar9->field_0x10);
  this->AttributeArray = pTVar8;
  this->ConstAttributeArray = pTVar8;
  return pTVar8;
}

// Add @ 143f919f0

TManagedArray<UE::Math::TVector<float>_> * __thiscall
TManagedArrayAccessor<UE::Math::TVector<float>_>::Add
          (TManagedArrayAccessor<UE::Math::TVector<float>_> *this,EPersistencePolicy param_1,
          FName param_2)

{
  FName FVar1;
  FManagedArrayCollection *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TManagedArray<UE::Math::TVector<float>_> *pTVar8;
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
      pTVar8 = (TManagedArray<UE::Math::TVector<float>_> *)(*pcVar4)();
      return pTVar8;
    }
  }
  if (param_1 == MakePersistent) {
    bVar5 = FManagedArrayCollection::IsAttributePersistent
                      (this->ConstCollection,this->Name,this->Group);
    if (!bVar5) {
      Remove(this);
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
        goto LAB_143f91ae2;
        iVar7 = *(int *)(*(longlong *)&pFVar2->GroupInfo + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,this->Group);
LAB_143f91ae2:
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
    FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector<float>_>
              (pFVar2,FVar1,FVar3,&local_18);
  }
  pTVar8 = FManagedArrayCollection::ModifyAttribute<UE::Math::TVector<float>_>(pFVar2,FVar1,FVar3);
  this->AttributeArray = pTVar8;
  this->ConstAttributeArray = pTVar8;
  return pTVar8;
}

// Add @ 143f91b80

TManagedArray<FGeometryCollectionSection> * __thiscall
TManagedArrayAccessor<FGeometryCollectionSection>::Add
          (TManagedArrayAccessor<FGeometryCollectionSection> *this,EPersistencePolicy param_1,
          FName param_2)

{
  FName FVar1;
  FManagedArrayCollection *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TManagedArray<FGeometryCollectionSection> *pTVar8;
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
      pTVar8 = (TManagedArray<FGeometryCollectionSection> *)(*pcVar4)();
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
          pTVar8 = (TManagedArray<FGeometryCollectionSection> *)(*pcVar4)();
          return pTVar8;
        }
      }
      FManagedArrayCollection::RemoveAttribute(this->Collection,this->Name,this->Group);
      this->AttributeArray = (TManagedArray<FGeometryCollectionSection> *)0x0;
      this->ConstAttributeArray = (TManagedArray<FGeometryCollectionSection> *)0x0;
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
        goto LAB_143f91cb2;
        iVar7 = *(int *)(*(longlong *)&pFVar2->GroupInfo + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,this->Group);
LAB_143f91cb2:
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
    FManagedArrayCollection::AddNewAttributeImpl<FGeometryCollectionSection>
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
      pTVar8 = (TManagedArray<FGeometryCollectionSection> *)(*pcVar4)();
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
      pTVar8 = (TManagedArray<FGeometryCollectionSection> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pTVar8 = FManagedArrayCollection::FValueType::ModifyTypedPtr<FGeometryCollectionSection>
                     ((FValueType *)&pTVar9->field_0x10);
  this->AttributeArray = pTVar8;
  this->ConstAttributeArray = pTVar8;
  return pTVar8;
}

// Add @ 143f91dd0

TManagedArray<FLinearColor> * __thiscall
TManagedArrayAccessor<FLinearColor>::Add
          (TManagedArrayAccessor<FLinearColor> *this,EPersistencePolicy param_1,FName param_2)

{
  FName FVar1;
  FManagedArrayCollection *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TManagedArray<FLinearColor> *pTVar8;
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
      pTVar8 = (TManagedArray<FLinearColor> *)(*pcVar4)();
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
          pTVar8 = (TManagedArray<FLinearColor> *)(*pcVar4)();
          return pTVar8;
        }
      }
      FManagedArrayCollection::RemoveAttribute(this->Collection,this->Name,this->Group);
      this->AttributeArray = (TManagedArray<FLinearColor> *)0x0;
      this->ConstAttributeArray = (TManagedArray<FLinearColor> *)0x0;
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
        goto LAB_143f91f02;
        iVar7 = *(int *)(*(longlong *)&pFVar2->GroupInfo + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,this->Group);
LAB_143f91f02:
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
    FManagedArrayCollection::AddNewAttributeImpl<FLinearColor>(pFVar2,FVar1,FVar3,&local_18);
  }
  pTVar8 = FManagedArrayCollection::ModifyAttribute<FLinearColor>(pFVar2,FVar1,FVar3);
  this->AttributeArray = pTVar8;
  this->ConstAttributeArray = pTVar8;
  return pTVar8;
}

// Add @ 143f91fa0

TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::Add
          (TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          EPersistencePolicy param_1,FName param_2)

{
  FName FVar1;
  FManagedArrayCollection *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar8;
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
      pTVar8 = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar4)();
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
          pTVar8 = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar4)();
          return pTVar8;
        }
      }
      FManagedArrayCollection::RemoveAttribute(this->Collection,this->Name,this->Group);
      this->AttributeArray = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
      this->ConstAttributeArray = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
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
        goto LAB_143f920d2;
        iVar7 = *(int *)(*(longlong *)&pFVar2->GroupInfo + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,this->Group);
LAB_143f920d2:
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
    FManagedArrayCollection::AddNewAttributeImpl<TArray<int,TSizedDefaultAllocator<32>_>_>
              (pFVar2,FVar1,FVar3,&local_18);
  }
  pTVar8 = FManagedArrayCollection::ModifyAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
                     (pFVar2,FVar1,FVar3);
  this->AttributeArray = pTVar8;
  this->ConstAttributeArray = pTVar8;
  return pTVar8;
}

// Add @ 143f92170

TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::Add
          (TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          EPersistencePolicy param_1,FName param_2)

{
  FName FVar1;
  FManagedArrayCollection *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar8;
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
      pTVar8 = (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar4)();
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
          pTVar8 = (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar4)();
          return pTVar8;
        }
      }
      FManagedArrayCollection::RemoveAttribute(this->Collection,this->Name,this->Group);
      this->AttributeArray = (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0;
      this->ConstAttributeArray = (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0;
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
        goto LAB_143f922a2;
        iVar7 = *(int *)(*(longlong *)&pFVar2->GroupInfo + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,this->Group);
LAB_143f922a2:
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
    FManagedArrayCollection::AddNewAttributeImpl<TArray<float,TSizedDefaultAllocator<32>_>_>
              (pFVar2,FVar1,FVar3,&local_18);
  }
  pTVar8 = FManagedArrayCollection::ModifyAttribute<TArray<float,TSizedDefaultAllocator<32>_>_>
                     (pFVar2,FVar1,FVar3);
  this->AttributeArray = pTVar8;
  this->ConstAttributeArray = pTVar8;
  return pTVar8;
}

// Add @ 143f92340

TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> * __thiscall
TManagedArrayAccessor<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>::Add
          (TManagedArrayAccessor<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
           *this,EPersistencePolicy param_1,FName param_2)

{
  FName FVar1;
  FManagedArrayCollection *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *pTVar8;
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
      pTVar8 = (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)
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
          pTVar8 = (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)
                   (*pcVar4)();
          return pTVar8;
        }
      }
      FManagedArrayCollection::RemoveAttribute(this->Collection,this->Name,this->Group);
      this->AttributeArray =
           (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)0x0;
      this->ConstAttributeArray =
           (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)0x0;
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
        goto LAB_143f92472;
        iVar7 = *(int *)(*(longlong *)&pFVar2->GroupInfo + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,this->Group);
LAB_143f92472:
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
    AddNewAttributeImpl<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
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
      pTVar8 = (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)
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
      pTVar8 = (TManagedArray<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar4)();
      return pTVar8;
    }
  }
  pTVar8 = FManagedArrayCollection::FValueType::
           ModifyTypedPtr<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
                     ((FValueType *)&pTVar9->field_0x10);
  this->AttributeArray = pTVar8;
  this->ConstAttributeArray = pTVar8;
  return pTVar8;
}

// Add @ 143f92590

TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> * __thiscall
TManagedArrayAccessor<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_>::Add
          (TManagedArrayAccessor<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_>
           *this,EPersistencePolicy param_1,FName param_2)

{
  FName FVar1;
  FManagedArrayCollection *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> *pTVar8;
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
      pTVar8 = (TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> *)
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
          pTVar8 = (TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> *
                   )(*pcVar4)();
          return pTVar8;
        }
      }
      FManagedArrayCollection::RemoveAttribute(this->Collection,this->Name,this->Group);
      this->AttributeArray =
           (TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> *)0x0;
      this->ConstAttributeArray =
           (TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> *)0x0;
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
        goto LAB_143f926c2;
        iVar7 = *(int *)(*(longlong *)&pFVar2->GroupInfo + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,this->Group);
LAB_143f926c2:
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
    AddNewAttributeImpl<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_>
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
      pTVar8 = (TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> *)
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
      pTVar8 = (TManagedArray<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar4)();
      return pTVar8;
    }
  }
  pTVar8 = FManagedArrayCollection::FValueType::
           ModifyTypedPtr<TArray<Chaos::PMatrix<double,3,3>,TSizedDefaultAllocator<32>_>_>
                     ((FValueType *)&pTVar9->field_0x10);
  this->AttributeArray = pTVar8;
  this->ConstAttributeArray = pTVar8;
  return pTVar8;
}

// Add @ 143f927e0

TManagedArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
* __thiscall
TManagedArrayAccessor<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
::Add(TManagedArrayAccessor<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
      *this,EPersistencePolicy param_1,FName param_2)

{
  FName FVar1;
  FManagedArrayCollection *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TManagedArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
  *pTVar8;
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
      pTVar8 = (TManagedArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar4)();
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
          pTVar8 = (TManagedArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
                    *)(*pcVar4)();
          return pTVar8;
        }
      }
      FManagedArrayCollection::RemoveAttribute(this->Collection,this->Name,this->Group);
      this->AttributeArray =
           (TManagedArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      this->ConstAttributeArray =
           (TManagedArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
            *)0x0;
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
        goto LAB_143f92912;
        iVar7 = *(int *)(*(longlong *)&pFVar2->GroupInfo + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,this->Group);
LAB_143f92912:
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
    AddNewAttributeImpl<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
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
      pTVar8 = (TManagedArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar4)();
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
      pTVar8 = (TManagedArray<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar4)();
      return pTVar8;
    }
  }
  pTVar8 = FManagedArrayCollection::FValueType::
           ModifyTypedPtr<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_>
                     ((FValueType *)&pTVar9->field_0x10);
  this->AttributeArray = pTVar8;
  this->ConstAttributeArray = pTVar8;
  return pTVar8;
}

// Add @ 143f92a30

TManagedArray<Chaos::FLinearCurve> * __thiscall
TManagedArrayAccessor<Chaos::FLinearCurve>::Add
          (TManagedArrayAccessor<Chaos::FLinearCurve> *this,EPersistencePolicy param_1,FName param_2
          )

{
  FName FVar1;
  FManagedArrayCollection *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TManagedArray<Chaos::FLinearCurve> *pTVar8;
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
      pTVar8 = (TManagedArray<Chaos::FLinearCurve> *)(*pcVar4)();
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
          pTVar8 = (TManagedArray<Chaos::FLinearCurve> *)(*pcVar4)();
          return pTVar8;
        }
      }
      FManagedArrayCollection::RemoveAttribute(this->Collection,this->Name,this->Group);
      this->AttributeArray = (TManagedArray<Chaos::FLinearCurve> *)0x0;
      this->ConstAttributeArray = (TManagedArray<Chaos::FLinearCurve> *)0x0;
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
        goto LAB_143f92b62;
        iVar7 = *(int *)(*(longlong *)&pFVar2->GroupInfo + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,this->Group);
LAB_143f92b62:
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
    FManagedArrayCollection::AddNewAttributeImpl<Chaos::FLinearCurve>(pFVar2,FVar1,FVar3,&local_28);
  }
  bVar5 = FManagedArrayCollection::HasAttribute(pFVar2,FVar1,FVar3);
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x164,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TManagedArray<Chaos::FLinearCurve> *)(*pcVar4)();
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
      pTVar8 = (TManagedArray<Chaos::FLinearCurve> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pTVar8 = FManagedArrayCollection::FValueType::ModifyTypedPtr<Chaos::FLinearCurve>
                     ((FValueType *)&pTVar9->field_0x10);
  this->AttributeArray = pTVar8;
  this->ConstAttributeArray = pTVar8;
  return pTVar8;
}

// Add @ 143f92c80

TManagedArray<bool> * __thiscall
TManagedArrayAccessor<bool>::Add
          (TManagedArrayAccessor<bool> *this,EPersistencePolicy param_1,FName param_2)

{
  FName FVar1;
  FManagedArrayCollection *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TManagedArray<bool> *pTVar8;
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
      pTVar8 = (TManagedArray<bool> *)(*pcVar4)();
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
          pTVar8 = (TManagedArray<bool> *)(*pcVar4)();
          return pTVar8;
        }
      }
      FManagedArrayCollection::RemoveAttribute(this->Collection,this->Name,this->Group);
      this->AttributeArray = (TManagedArray<bool> *)0x0;
      this->ConstAttributeArray = (TManagedArray<bool> *)0x0;
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
        goto LAB_143f92db2;
        iVar7 = *(int *)(*(longlong *)&pFVar2->GroupInfo + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,this->Group);
LAB_143f92db2:
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
    FManagedArrayCollection::AddNewAttributeImpl<bool>(pFVar2,FVar1,FVar3,&local_18);
  }
  pTVar8 = FManagedArrayCollection::ModifyAttribute<bool>(pFVar2,FVar1,FVar3);
  this->AttributeArray = pTVar8;
  this->ConstAttributeArray = pTVar8;
  return pTVar8;
}

// AddElements @ 143f95d20

int __thiscall
TManagedArrayAccessor<UE::Math::TIntVector3<int>_>::AddElements
          (TManagedArrayAccessor<UE::Math::TIntVector3<int>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x41,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = FManagedArrayCollection::AddElements(this->Collection,param_1,this->Group);
  return iVar3;
}

// AddElements @ 143f95d80

int __thiscall
TManagedArrayAccessor<UE::Math::TVector<float>_>::AddElements
          (TManagedArrayAccessor<UE::Math::TVector<float>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x41,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = FManagedArrayCollection::AddElements(this->Collection,param_1,this->Group);
  return iVar3;
}

// Get @ 143fae2f0

TManagedArray<int> * __thiscall TManagedArrayAccessor<int>::Get(TManagedArrayAccessor<int> *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<int> *pTVar3;
  
  if (this->ConstAttributeArray != (TManagedArray<int> *)0x0) {
    return this->ConstAttributeArray;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                     ,0x67,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TManagedArray<int> *)(*pcVar1)();
    return pTVar3;
  }
  return this->ConstAttributeArray;
}

// Get @ 143fae340

TManagedArray<UE::Math::TVector<float>_> * __thiscall
TManagedArrayAccessor<UE::Math::TVector<float>_>::Get
          (TManagedArrayAccessor<UE::Math::TVector<float>_> *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TVector<float>_> *pTVar3;
  
  if (this->ConstAttributeArray != (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    return this->ConstAttributeArray;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                     ,0x67,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TManagedArray<UE::Math::TVector<float>_> *)(*pcVar1)();
    return pTVar3;
  }
  return this->ConstAttributeArray;
}

// Get @ 143fae390

TManagedArray<bool> * __thiscall TManagedArrayAccessor<bool>::Get(TManagedArrayAccessor<bool> *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<bool> *pTVar3;
  
  if (this->ConstAttributeArray != (TManagedArray<bool> *)0x0) {
    return this->ConstAttributeArray;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                     ,0x67,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TManagedArray<bool> *)(*pcVar1)();
    return pTVar3;
  }
  return this->ConstAttributeArray;
}

// IsValidIndex @ 143fb7fa0

bool __thiscall
TManagedArrayAccessor<int>::IsValidIndex(TManagedArrayAccessor<int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  
  if (this->ConstAttributeArray == (TManagedArray<int> *)0x0) {
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

// IsValidIndex @ 143fb8010

bool __thiscall
TManagedArrayAccessor<float>::IsValidIndex(TManagedArrayAccessor<float> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  
  if (this->ConstAttributeArray == (TManagedArray<float> *)0x0) {
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

// IsValidIndex @ 143fb8080

bool __thiscall
TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::IsValidIndex
          (TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  
  if (this->ConstAttributeArray == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
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

// IsValidIndex @ 143fb80f0

bool __thiscall
TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::IsValidIndex
          (TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  
  if (this->ConstAttributeArray == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0)
  {
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

// IsValidIndex @ 143fb8160

bool __thiscall
TManagedArrayAccessor<bool>::IsValidIndex(TManagedArrayAccessor<bool> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  
  if (this->ConstAttributeArray == (TManagedArray<bool> *)0x0) {
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

// Modify @ 143fb82e0

TManagedArray<int> * __thiscall TManagedArrayAccessor<int>::Modify(TManagedArrayAccessor<int> *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<int> *pTVar3;
  
  if ((this->AttributeArray == (TManagedArray<int> *)0x0) ||
     (this->Collection == (FManagedArrayCollection *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttributeArray!=nullptr && !IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x74,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  this->AttributeArray->field_0x8 = 1;
  return this->AttributeArray;
}

// Modify @ 143fb8340

TManagedArray<float> * __thiscall
TManagedArrayAccessor<float>::Modify(TManagedArrayAccessor<float> *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<float> *pTVar3;
  
  if ((this->AttributeArray == (TManagedArray<float> *)0x0) ||
     (this->Collection == (FManagedArrayCollection *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttributeArray!=nullptr && !IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x74,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<float> *)(*pcVar1)();
      return pTVar3;
    }
  }
  this->AttributeArray->field_0x8 = 1;
  return this->AttributeArray;
}

// Modify @ 143fb83a0

TManagedArray<UE::Math::TBox<double>_> * __thiscall
TManagedArrayAccessor<UE::Math::TBox<double>_>::Modify
          (TManagedArrayAccessor<UE::Math::TBox<double>_> *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TBox<double>_> *pTVar3;
  
  if ((this->AttributeArray == (TManagedArray<UE::Math::TBox<double>_> *)0x0) ||
     (this->Collection == (FManagedArrayCollection *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttributeArray!=nullptr && !IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x74,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TBox<double>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  this->AttributeArray->field_0x8 = 1;
  return this->AttributeArray;
}

// Modify @ 143fb8400

TManagedArray<UE::Math::TIntVector3<int>_> * __thiscall
TManagedArrayAccessor<UE::Math::TIntVector3<int>_>::Modify
          (TManagedArrayAccessor<UE::Math::TIntVector3<int>_> *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar3;
  
  if ((this->AttributeArray == (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) ||
     (this->Collection == (FManagedArrayCollection *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttributeArray!=nullptr && !IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x74,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TIntVector3<int>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  this->AttributeArray->field_0x8 = 1;
  return this->AttributeArray;
}

// Modify @ 143fb8460

TManagedArray<UE::Math::TVector<float>_> * __thiscall
TManagedArrayAccessor<UE::Math::TVector<float>_>::Modify
          (TManagedArrayAccessor<UE::Math::TVector<float>_> *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TVector<float>_> *pTVar3;
  
  if ((this->AttributeArray == (TManagedArray<UE::Math::TVector<float>_> *)0x0) ||
     (this->Collection == (FManagedArrayCollection *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttributeArray!=nullptr && !IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x74,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<UE::Math::TVector<float>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  this->AttributeArray->field_0x8 = 1;
  return this->AttributeArray;
}

// Modify @ 143fb84c0

TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::Modify
          (TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar3;
  
  if ((this->AttributeArray == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) ||
     (this->Collection == (FManagedArrayCollection *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttributeArray!=nullptr && !IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x74,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  this->AttributeArray->field_0x8 = 1;
  return this->AttributeArray;
}

// Modify @ 143fb8520

TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_>::Modify
          (TManagedArrayAccessor<TArray<float,TSizedDefaultAllocator<32>_>_> *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar3;
  
  if ((this->AttributeArray == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) ||
     (this->Collection == (FManagedArrayCollection *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttributeArray!=nullptr && !IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x74,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  this->AttributeArray->field_0x8 = 1;
  return this->AttributeArray;
}

// Remove @ 143fbce70

void __thiscall TManagedArrayAccessor<int>::Remove(TManagedArrayAccessor<int> *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0xbf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FManagedArrayCollection::RemoveAttribute(this->Collection,this->Name,this->Group);
  this->AttributeArray = (TManagedArray<int> *)0x0;
  this->ConstAttributeArray = (TManagedArray<int> *)0x0;
  return;
}

// Remove @ 143fbced0

void __thiscall TManagedArrayAccessor<float>::Remove(TManagedArrayAccessor<float> *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0xbf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FManagedArrayCollection::RemoveAttribute(this->Collection,this->Name,this->Group);
  this->AttributeArray = (TManagedArray<float> *)0x0;
  this->ConstAttributeArray = (TManagedArray<float> *)0x0;
  return;
}

// Remove @ 143fbcf30

void __thiscall
TManagedArrayAccessor<UE::Math::TIntVector4<int>_>::Remove
          (TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0xbf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FManagedArrayCollection::RemoveAttribute(this->Collection,this->Name,this->Group);
  this->AttributeArray = (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0;
  this->ConstAttributeArray = (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0;
  return;
}

// Remove @ 143fbcf90

void __thiscall
TManagedArrayAccessor<UE::Math::TVector4<float>_>::Remove
          (TManagedArrayAccessor<UE::Math::TVector4<float>_> *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0xbf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FManagedArrayCollection::RemoveAttribute(this->Collection,this->Name,this->Group);
  this->AttributeArray = (TManagedArray<UE::Math::TVector4<float>_> *)0x0;
  this->ConstAttributeArray = (TManagedArray<UE::Math::TVector4<float>_> *)0x0;
  return;
}

// Remove @ 143fbcff0

void __thiscall
TManagedArrayAccessor<UE::Math::TVector<float>_>::Remove
          (TManagedArrayAccessor<UE::Math::TVector<float>_> *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0xbf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FManagedArrayCollection::RemoveAttribute(this->Collection,this->Name,this->Group);
  this->AttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  this->ConstAttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  return;
}

// operator[] @ 143fd7990

TIntVector4<int> * __thiscall
TManagedArrayAccessor<UE::Math::TIntVector4<int>_>::operator[]
          (TManagedArrayAccessor<UE::Math::TIntVector4<int>_> *this,int param_1)

{
  TManagedArray<UE::Math::TIntVector4<int>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TIntVector4<int> *pTVar5;
  
  if (this->ConstAttributeArray == (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x60,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TIntVector4<int> *)(*pcVar2)();
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
      pTVar5 = (TIntVector4<int> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return (TIntVector4<int> *)((longlong)param_1 * 0x10 + *(longlong *)&pTVar1->field_0x10);
}

// operator[] @ 143fd7a40

FString * __thiscall
TManagedArrayAccessor<FString>::operator[](TManagedArrayAccessor<FString> *this,int param_1)

{
  TManagedArray<FString> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  
  if (this->ConstAttributeArray == (TManagedArray<FString> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x60,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
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
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  return (FString *)((longlong)param_1 * 0x10 + *(longlong *)&pTVar1->field_0x10);
}

// Add @ 143fd84f0

TManagedArray<TObjectPtr<UObject>_> * __thiscall
TManagedArrayAccessor<TObjectPtr<UObject>_>::Add
          (TManagedArrayAccessor<TObjectPtr<UObject>_> *this,EPersistencePolicy param_1,
          FName param_2)

{
  FName FVar1;
  FManagedArrayCollection *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TManagedArray<TObjectPtr<UObject>_> *pTVar8;
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
      pTVar8 = (TManagedArray<TObjectPtr<UObject>_> *)(*pcVar4)();
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
          pTVar8 = (TManagedArray<TObjectPtr<UObject>_> *)(*pcVar4)();
          return pTVar8;
        }
      }
      FManagedArrayCollection::RemoveAttribute(this->Collection,this->Name,this->Group);
      this->AttributeArray = (TManagedArray<TObjectPtr<UObject>_> *)0x0;
      this->ConstAttributeArray = (TManagedArray<TObjectPtr<UObject>_> *)0x0;
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
        goto LAB_143fd8622;
        iVar7 = *(int *)(*(longlong *)&pFVar2->GroupInfo + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,this->Group);
LAB_143fd8622:
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
    FManagedArrayCollection::AddNewAttributeImpl<TObjectPtr<UObject>_>(pFVar2,FVar1,FVar3,&local_28)
    ;
  }
  bVar5 = FManagedArrayCollection::HasAttribute(pFVar2,FVar1,FVar3);
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasAttribute(Name, Group)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                       ,0x164,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TManagedArray<TObjectPtr<UObject>_> *)(*pcVar4)();
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
      pTVar8 = (TManagedArray<TObjectPtr<UObject>_> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pTVar8 = FManagedArrayCollection::FValueType::ModifyTypedPtr<TObjectPtr<UObject>_>
                     ((FValueType *)&pTVar9->field_0x10);
  this->AttributeArray = pTVar8;
  this->ConstAttributeArray = pTVar8;
  return pTVar8;
}

// Add @ 143fd8740

TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> * __thiscall
TManagedArrayAccessor<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>::Add
          (TManagedArrayAccessor<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *this,
          EPersistencePolicy param_1,FName param_2)

{
  FName FVar1;
  FManagedArrayCollection *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar7;
  undefined1 *puVar8;
  ushort local_20;
  undefined2 uStack_1e;
  FConstructionParameters local_18;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x85,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)(*pcVar3)();
      return pTVar7;
    }
  }
  if (param_1 == MakePersistent) {
    bVar4 = FManagedArrayCollection::IsAttributePersistent
                      (this->ConstCollection,this->Name,this->Group);
    if (!bVar4) {
      if (this->Collection == (FManagedArrayCollection *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0xbf,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)
                   (*pcVar3)();
          return pTVar7;
        }
      }
      FManagedArrayCollection::RemoveAttribute(this->Collection,this->Name,this->Group);
      this->AttributeArray =
           (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0;
      this->ConstAttributeArray =
           (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0;
    }
  }
  FVar1 = this->Group;
  pFVar2 = this->Collection;
  uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(pFVar2->GroupInfo).field_0x8 != *(int *)&(pFVar2->GroupInfo).field_0x34) {
    puVar8 = *(undefined1 **)&(pFVar2->GroupInfo).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(pFVar2->GroupInfo).field_0x38;
    }
    iVar6 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(pFVar2->GroupInfo).field_0x48 - 1U & FVar1.Number + uVar5)
                              * 4);
    if (iVar6 != -1) {
      do {
        if (*(FName *)(*(longlong *)&pFVar2->GroupInfo + (longlong)iVar6 * 0x14) == FVar1)
        goto LAB_143fd8872;
        iVar6 = *(int *)(*(longlong *)&pFVar2->GroupInfo + 0xc + (longlong)iVar6 * 0x14);
      } while (iVar6 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,this->Group);
LAB_143fd8872:
  local_18.GroupIndexDependency = this->DefaultGroupDependency;
  if (param_2 != (FName)0x0) {
    local_18.GroupIndexDependency = param_2;
  }
  local_18.Saved = param_1 == MakePersistent;
  local_18.bAllowCircularDependency = false;
  local_18._10_2_ = uStack_1e;
  pTVar7 = FManagedArrayCollection::
           AddAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                     (this->Collection,this->Name,this->Group,&local_18);
  this->AttributeArray = pTVar7;
  this->ConstAttributeArray = pTVar7;
  return pTVar7;
}

// AddElements @ 143fd9690

int __thiscall
TManagedArrayAccessor<FString>::AddElements(TManagedArrayAccessor<FString> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x41,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = FManagedArrayCollection::AddElements(this->Collection,param_1,this->Group);
  return iVar3;
}

// Get @ 143fe9180

TManagedArray<UE::Math::TIntVector3<int>_> * __thiscall
TManagedArrayAccessor<UE::Math::TIntVector3<int>_>::Get
          (TManagedArrayAccessor<UE::Math::TIntVector3<int>_> *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<UE::Math::TIntVector3<int>_> *pTVar3;
  
  if (this->ConstAttributeArray != (TManagedArray<UE::Math::TIntVector3<int>_> *)0x0) {
    return this->ConstAttributeArray;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                     ,0x67,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TManagedArray<UE::Math::TIntVector3<int>_> *)(*pcVar1)();
    return pTVar3;
  }
  return this->ConstAttributeArray;
}

// Modify @ 143ff0220

TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> * __thiscall
TManagedArrayAccessor<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>::Modify
          (TManagedArrayAccessor<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar3;
  
  if ((this->AttributeArray ==
       (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0) ||
     (this->Collection == (FManagedArrayCollection *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttributeArray!=nullptr && !IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x74,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  this->AttributeArray->field_0x8 = 1;
  return this->AttributeArray;
}

// Modify @ 143ff0280

TManagedArray<FString> * __thiscall
TManagedArrayAccessor<FString>::Modify(TManagedArrayAccessor<FString> *this)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<FString> *pTVar3;
  
  if ((this->AttributeArray == (TManagedArray<FString> *)0x0) ||
     (this->Collection == (FManagedArrayCollection *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttributeArray!=nullptr && !IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x74,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TManagedArray<FString> *)(*pcVar1)();
      return pTVar3;
    }
  }
  this->AttributeArray->field_0x8 = 1;
  return this->AttributeArray;
}

// ModifyAt @ 143ff02e0

void __thiscall
TManagedArrayAccessor<float>::ModifyAt
          (TManagedArrayAccessor<float> *this,int param_1,float *param_2)

{
  float fVar1;
  TManagedArray<float> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  if ((this->AttributeArray == (TManagedArray<float> *)0x0) ||
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
  pTVar2 = this->AttributeArray;
  fVar1 = *param_2;
  uVar5 = 0;
  if (param_1 < *(int *)&pTVar2->field_0x18) {
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
  *(float *)(*(longlong *)&pTVar2->field_0x10 + (longlong)param_1 * 4) = fVar1;
  return;
}

// TManagedArrayAccessor<TRefCountPtr<Chaos::FImplicitObject>_> @ 144012270

TManagedArrayAccessor<TRefCountPtr<Chaos::FImplicitObject>_> * __thiscall
TManagedArrayAccessor<TRefCountPtr<Chaos::FImplicitObject>_>::
TManagedArrayAccessor<TRefCountPtr<Chaos::FImplicitObject>_>
          (TManagedArrayAccessor<TRefCountPtr<Chaos::FImplicitObject>_> *this,
          FManagedArrayCollection *param_1,FName *param_2,FName *param_3,FName *param_4)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  TManagedArrayAccessor<TRefCountPtr<Chaos::FImplicitObject>_> *pTVar4;
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
  if ((this_00 != (FValueType *)0x0) && (this_00->ArrayType == FFImplicitObjectRefCountedPtrType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(this_00);
    pFVar5 = (FValueType *)this_00->ManagedArray;
    if (pFVar5 == (FValueType *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x319,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TManagedArrayAccessor<TRefCountPtr<Chaos::FImplicitObject>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  this->AttributeArray = (TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *)pFVar5;
  this->ConstAttributeArray = (TManagedArray<TRefCountPtr<Chaos::FImplicitObject>_> *)pFVar5;
  return this;
}

// ModifyAt @ 144125c60

void __thiscall
TManagedArrayAccessor<UE::Math::TVector<float>_>::ModifyAt
          (TManagedArrayAccessor<UE::Math::TVector<float>_> *this,int param_1,
          TVector<float> *param_2)

{
  undefined8 uVar1;
  float fVar2;
  TManagedArray<UE::Math::TVector<float>_> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  if (((this->AttributeArray == (TManagedArray<UE::Math::TVector<float>_> *)0x0) ||
      (this->Collection == (FManagedArrayCollection *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray != nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x7c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this->AttributeArray->field_0x8 = 1;
  uVar1 = *(undefined8 *)&param_2->field0_0x0;
  pTVar3 = this->AttributeArray;
  fVar2 = (param_2->field0_0x0)._s_0.Z;
  uVar7 = 0;
  if (param_1 < *(int *)&pTVar3->field_0x18) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *(longlong *)&pTVar3->field_0x10;
  *(undefined8 *)(lVar4 + (longlong)param_1 * 0xc) = uVar1;
  *(float *)(lVar4 + 8 + (longlong)param_1 * 0xc) = fVar2;
  return;
}

