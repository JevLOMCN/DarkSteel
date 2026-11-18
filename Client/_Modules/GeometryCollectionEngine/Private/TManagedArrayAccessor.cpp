// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 1

// Add @ 1463a86e0

TManagedArray<UE::Math::TVector<double>_> * __thiscall
TManagedArrayAccessor<UE::Math::TVector<double>_>::Add
          (TManagedArrayAccessor<UE::Math::TVector<double>_> *this,EPersistencePolicy param_1,
          FName param_2)

{
  FName FVar1;
  FManagedArrayCollection *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TManagedArray<UE::Math::TVector<double>_> *pTVar8;
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
      pTVar8 = (TManagedArray<UE::Math::TVector<double>_> *)(*pcVar4)();
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
          pTVar8 = (TManagedArray<UE::Math::TVector<double>_> *)(*pcVar4)();
          return pTVar8;
        }
      }
      FManagedArrayCollection::RemoveAttribute(this->Collection,this->Name,this->Group);
      this->AttributeArray = (TManagedArray<UE::Math::TVector<double>_> *)0x0;
      this->ConstAttributeArray = (TManagedArray<UE::Math::TVector<double>_> *)0x0;
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
        goto LAB_1463a8812;
        iVar7 = *(int *)(*(longlong *)&pFVar2->GroupInfo + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  FManagedArrayCollection::AddGroup(this->Collection,this->Group);
LAB_1463a8812:
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
    FManagedArrayCollection::AddNewAttributeImpl<UE::Math::TVector<double>_>
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
      pTVar8 = (TManagedArray<UE::Math::TVector<double>_> *)(*pcVar4)();
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
      pTVar8 = (TManagedArray<UE::Math::TVector<double>_> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pTVar8 = FManagedArrayCollection::FValueType::ModifyTypedPtr<UE::Math::TVector<double>_>
                     ((FValueType *)&pTVar9->field_0x10);
  this->AttributeArray = pTVar8;
  this->ConstAttributeArray = pTVar8;
  return pTVar8;
}

