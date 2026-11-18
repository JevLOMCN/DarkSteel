// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionDepNodes
// Functions: 2

// GetFloatArray @ 14e96e5e0

TManagedArray<float> * __thiscall
UE::Private::FTransferFacade::GetFloatArray(FTransferFacade *this,FString *param_1,FString *param_2)

{
  FManagedArrayCollection *pFVar1;
  FName FVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  FName *pFVar7;
  TManagedArray<float> *pTVar8;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar9;
  FValueType *pFVar10;
  FValueType *this_00;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_98;
  FName local_90;
  FName local_88;
  undefined2 local_80;
  undefined2 uStack_7e;
  FConstructionParameters local_78 [2];
  undefined2 local_5e;
  FName local_5c;
  FName local_54;
  FName local_48;
  FName local_40;
  
  iVar12 = (param_2->Data).ArrayNum;
  pFVar10 = (FValueType *)0x0;
  pFVar1 = this->Collection;
  iVar14 = 0;
  iVar11 = iVar12 + -1;
  if (iVar12 == 0) {
    iVar11 = iVar14;
  }
  pFVar7 = ::FName::FName(&local_res10,iVar11,(wchar_t *)(param_2->Data).AllocatorInstance.Data,
                          FNAME_Add);
  FVar2 = *pFVar7;
  iVar12 = (param_1->Data).ArrayNum;
  iVar11 = iVar12 + -1;
  if (iVar12 == 0) {
    iVar11 = iVar14;
  }
  pFVar7 = ::FName::FName(&local_res18,iVar11,(wchar_t *)(param_1->Data).AllocatorInstance.Data,
                          FNAME_Add);
  bVar6 = FManagedArrayCollection::HasAttribute(pFVar1,*pFVar7,FVar2);
  iVar12 = 0;
  if (!bVar6) {
    pFVar1 = this->Collection;
    local_88.ComparisonIndex.Value = 0;
    local_88.Number = 0;
    iVar11 = (param_2->Data).ArrayNum;
    uStack_7e = local_5e;
    local_80._0_1_ = true;
    local_80._1_1_ = false;
    iVar13 = iVar11 + -1;
    if (iVar11 == 0) {
      iVar13 = iVar14;
    }
    pFVar7 = ::FName::FName(&local_res20,iVar13,(wchar_t *)(param_2->Data).AllocatorInstance.Data,
                            FNAME_Add);
    FVar2 = *pFVar7;
    iVar11 = (param_1->Data).ArrayNum;
    iVar14 = iVar11 + -1;
    if (iVar11 == 0) {
      iVar14 = iVar12;
    }
    pFVar7 = ::FName::FName(&local_98,iVar14,(wchar_t *)(param_1->Data).AllocatorInstance.Data,
                            FNAME_Add);
    local_78[0].GroupIndexDependency = local_88;
    FVar3 = *pFVar7;
    local_78[0].Saved = local_80._0_1_;
    local_78[0].bAllowCircularDependency = local_80._1_1_;
    local_78[0]._10_2_ = uStack_7e;
    bVar6 = FManagedArrayCollection::HasAttribute(pFVar1,FVar3,FVar2);
    if (!bVar6) {
      FManagedArrayCollection::AddNewAttributeImpl<float>(pFVar1,FVar3,FVar2,local_78);
    }
    bVar6 = FManagedArrayCollection::HasAttribute(pFVar1,FVar3,FVar2);
    if (!bVar6) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("HasAttribute(Name, Group)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x164,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TManagedArray<float> *)(*pcVar5)();
        return pTVar8;
      }
    }
    local_5c = FVar3;
    local_54 = FVar2;
    pTVar9 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                     *)&pFVar1->Map,(TTuple<FName,FName> *)&local_5c);
    if (pTVar9 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TManagedArray<float> *)(*pcVar5)();
        return pTVar8;
      }
    }
    FManagedArrayCollection::FValueType::ModifyTypedPtr<float>((FValueType *)&pTVar9->field_0x10);
  }
  iVar11 = (param_2->Data).ArrayNum;
  pFVar1 = this->Collection;
  iVar14 = iVar11 + -1;
  if (iVar11 == 0) {
    iVar14 = iVar12;
  }
  pFVar7 = ::FName::FName(&local_90,iVar14,(wchar_t *)(param_2->Data).AllocatorInstance.Data,
                          FNAME_Add);
  local_40 = *pFVar7;
  iVar11 = (param_1->Data).ArrayNum;
  iVar14 = iVar11 + -1;
  if (iVar11 == 0) {
    iVar14 = iVar12;
  }
  pFVar7 = ::FName::FName(&local_88,iVar14,(wchar_t *)(param_1->Data).AllocatorInstance.Data,
                          FNAME_Add);
  local_48 = *pFVar7;
  pTVar9 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar1->Map,(TTuple<FName,FName> *)&local_48);
  this_00 = (FValueType *)&pTVar9->field_0x10;
  if (pTVar9 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    this_00 = pFVar10;
  }
  if (this_00 != (FValueType *)0x0) {
    pFVar10 = (FValueType *)FManagedArrayCollection::FValueType::ModifyTypedPtr<float>(this_00);
  }
  pFVar4 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return (TManagedArray<float> *)pFVar10;
}

// GetFloatArray @ 14e96e870

TManagedArray<float> * __thiscall
UE::Private::FTransferFacade::GetFloatArray(FTransferFacade *this,FString *param_1,FString *param_2)

{
  int iVar1;
  FManagedArrayCollection *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar7;
  TManagedArray<float> *pTVar8;
  int iVar9;
  TManagedArray<float> *pTVar10;
  FName local_res8;
  FName local_res10;
  FName local_28;
  FName local_20;
  
  iVar1 = (param_2->Data).ArrayNum;
  pFVar2 = this->ConstCollection;
  pTVar8 = (TManagedArray<float> *)0x0;
  iVar9 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar9 = 0;
  }
  pFVar6 = ::FName::FName(&local_res8,iVar9,(wchar_t *)(param_2->Data).AllocatorInstance.Data,
                          FNAME_Add);
  local_20 = *pFVar6;
  iVar1 = (param_1->Data).ArrayNum;
  iVar9 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar9 = 0;
  }
  pFVar6 = ::FName::FName(&local_res10,iVar9,(wchar_t *)(param_1->Data).AllocatorInstance.Data,
                          FNAME_Add);
  local_28 = *pFVar6;
  pTVar7 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&pFVar2->Map,(TTuple<FName,FName> *)&local_28);
  pTVar10 = (TManagedArray<float> *)&pTVar7->field_0x10;
  if (pTVar7 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pTVar10 = pTVar8;
  }
  if (pTVar10 != (TManagedArray<float> *)0x0) {
    if (*(char *)pTVar10 != '\t') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSameType<T>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x303,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TManagedArray<float> *)(*pcVar4)();
        return pTVar8;
      }
    }
    pTVar8 = *(TManagedArray<float> **)(pTVar10 + 1);
    if (pTVar8 == (TManagedArray<float> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TManagedArray<float> *)(*pcVar4)();
        return pTVar8;
      }
    }
  }
  pFVar3 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return pTVar8;
}

