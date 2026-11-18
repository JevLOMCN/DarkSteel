// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 13

// FCollectionAnchoringFacade @ 143f85f00

FCollectionAnchoringFacade * __thiscall
Chaos::Facades::FCollectionAnchoringFacade::FCollectionAnchoringFacade
          (FCollectionAnchoringFacade *this,FManagedArrayCollection *param_1)

{
  TManagedArray<int> *pTVar1;
  TManagedArray<bool> *pTVar2;
  FName local_res10;
  
  ::FName::FName(&local_res10,"InitialDynamicState");
  (this->InitialDynamicStateAttribute).Name = local_res10;
  (this->InitialDynamicStateAttribute).ConstCollection = param_1;
  (this->InitialDynamicStateAttribute).Collection = param_1;
  (this->InitialDynamicStateAttribute).Group = FTransformCollection::TransformGroup;
  (this->InitialDynamicStateAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->InitialDynamicStateAttribute).DefaultGroupDependency.Number = 0;
  pTVar1 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_res10,FTransformCollection::TransformGroup);
  (this->InitialDynamicStateAttribute).AttributeArray = pTVar1;
  (this->InitialDynamicStateAttribute).ConstAttributeArray = pTVar1;
  ::FName::FName(&local_res10,"Anchored");
  (this->AnchoredAttribute).Name = local_res10;
  (this->AnchoredAttribute).ConstCollection = param_1;
  (this->AnchoredAttribute).Collection = param_1;
  (this->AnchoredAttribute).Group = FTransformCollection::TransformGroup;
  (this->AnchoredAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->AnchoredAttribute).DefaultGroupDependency.Number = 0;
  pTVar2 = FManagedArrayCollection::FindAttributeTyped<bool>
                     (param_1,local_res10,FTransformCollection::TransformGroup);
  (this->AnchoredAttribute).AttributeArray = pTVar2;
  (this->AnchoredAttribute).ConstAttributeArray = pTVar2;
  return this;
}

// FCollectionAnchoringFacade @ 143f85fd0

FCollectionAnchoringFacade * __thiscall
Chaos::Facades::FCollectionAnchoringFacade::FCollectionAnchoringFacade
          (FCollectionAnchoringFacade *this,FManagedArrayCollection *param_1)

{
  TManagedArray<bool> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TManagedArray<int> *pTVar4;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar5;
  FCollectionAnchoringFacade *pFVar6;
  char *pcVar7;
  FName local_res18;
  FName local_res20;
  FName local_28;
  FName local_20;
  
  ::FName::FName(&local_res18,"InitialDynamicState");
  (this->InitialDynamicStateAttribute).Name = local_res18;
  (this->InitialDynamicStateAttribute).ConstCollection = param_1;
  (this->InitialDynamicStateAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->InitialDynamicStateAttribute).Group = FTransformCollection::TransformGroup;
  (this->InitialDynamicStateAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->InitialDynamicStateAttribute).DefaultGroupDependency.Number = 0;
  (this->InitialDynamicStateAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_res18,FTransformCollection::TransformGroup);
  (this->InitialDynamicStateAttribute).ConstAttributeArray = pTVar4;
  ::FName::FName(&local_res20,"Anchored");
  (this->AnchoredAttribute).Name = local_res20;
  (this->AnchoredAttribute).ConstCollection = param_1;
  (this->AnchoredAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->AnchoredAttribute).Group = FTransformCollection::TransformGroup;
  (this->AnchoredAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->AnchoredAttribute).DefaultGroupDependency.Number = 0;
  (this->AnchoredAttribute).AttributeArray = (TManagedArray<bool> *)0x0;
  local_28 = local_res20;
  local_20 = FTransformCollection::TransformGroup;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_28);
  pcVar7 = &pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar7 = (char *)0x0;
  }
  if ((pcVar7 != (char *)0x0) && (*pcVar7 == '\x06')) {
    pTVar1 = *(TManagedArray<bool> **)(pcVar7 + 0x20);
    if (pTVar1 == (TManagedArray<bool> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FCollectionAnchoringFacade *)(*pcVar2)();
        return pFVar6;
      }
    }
    (this->AnchoredAttribute).ConstAttributeArray = pTVar1;
    return this;
  }
  (this->AnchoredAttribute).ConstAttributeArray = (TManagedArray<bool> *)0x0;
  return this;
}

// AddAnchoredAttribute @ 143f93370

void __thiscall
Chaos::Facades::FCollectionAnchoringFacade::AddAnchoredAttribute(FCollectionAnchoringFacade *this)

{
  TManagedArray<bool> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  
  if (((this->InitialDynamicStateAttribute).Collection == (FManagedArrayCollection *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionAnchoringFacade.cpp"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->AnchoredAttribute).Collection == (FManagedArrayCollection *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0xa1,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = FManagedArrayCollection::HasAttribute
                    ((this->AnchoredAttribute).Collection,(this->AnchoredAttribute).Name,
                     (this->AnchoredAttribute).Group);
  if (!bVar3) {
    TManagedArrayAccessor<bool>::Add(&this->AnchoredAttribute,MakePersistent,(FName)0x0);
    pTVar1 = (this->AnchoredAttribute).AttributeArray;
    iVar6 = 0;
    if (0 < *(int *)&pTVar1->field_0x28) {
      do {
        if (((iVar6 < 0) || (*(int *)&pTVar1->field_0x28 <= iVar6)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        puVar5 = &pTVar1->field_0x10;
        if (*(undefined1 **)&pTVar1->field_0x20 != (undefined1 *)0x0) {
          puVar5 = *(undefined1 **)&pTVar1->field_0x20;
        }
        iVar4 = iVar6;
        if (iVar6 < 0) {
          iVar4 = iVar6 + 0x1f;
        }
        iVar7 = iVar6 + 1;
        *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) =
             *(uint *)(puVar5 + (longlong)(iVar4 >> 5) * 4) & ~(1 << ((byte)iVar6 & 0x1f));
        iVar6 = iVar7;
      } while (iVar7 < *(int *)&pTVar1->field_0x28);
    }
  }
  return;
}

// CopyAnchoredAttribute @ 143fa6f00

void __thiscall
Chaos::Facades::FCollectionAnchoringFacade::CopyAnchoredAttribute
          (FCollectionAnchoringFacade *this,FCollectionAnchoringFacade *param_1)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<bool> *pTVar3;
  
  if ((this->InitialDynamicStateAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionAnchoringFacade.cpp"
                       ,0x29,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_1->AnchoredAttribute).ConstAttributeArray != (TManagedArray<bool> *)0x0) {
    if ((this->AnchoredAttribute).Collection == (FManagedArrayCollection *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0xb6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FManagedArrayCollection::CopyAttribute
              ((this->AnchoredAttribute).Collection,(param_1->AnchoredAttribute).ConstCollection,
               (param_1->AnchoredAttribute).Name,(this->AnchoredAttribute).Name,
               (this->AnchoredAttribute).Group);
    pTVar3 = FManagedArrayCollection::FindAttributeTyped<bool>
                       ((this->AnchoredAttribute).Collection,(this->AnchoredAttribute).Name,
                        (this->AnchoredAttribute).Group);
    (this->AnchoredAttribute).AttributeArray = pTVar3;
    (this->AnchoredAttribute).ConstAttributeArray = pTVar3;
  }
  return;
}

// GetInitialDynamicState @ 143fb0d60

EObjectStateType __thiscall
Chaos::Facades::FCollectionAnchoringFacade::GetInitialDynamicState
          (FCollectionAnchoringFacade *this,int param_1)

{
  TManagedArray<int> *pTVar1;
  code *pcVar2;
  bool bVar3;
  EObjectStateType EVar4;
  uint uVar5;
  
  if ((this->InitialDynamicStateAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x67,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  pTVar1 = (this->InitialDynamicStateAttribute).ConstAttributeArray;
  uVar5 = 0;
  if (param_1 < *(int *)&pTVar1->field_0x18) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  return *(EObjectStateType *)(*(longlong *)&pTVar1->field_0x10 + (longlong)param_1 * 4);
}

// HasAnchoredAttribute @ 143fb3ea0

bool __thiscall
Chaos::Facades::FCollectionAnchoringFacade::HasAnchoredAttribute(FCollectionAnchoringFacade *this)

{
  return (this->AnchoredAttribute).ConstAttributeArray != (TManagedArray<bool> *)0x0;
}

// HasInitialDynamicStateAttribute @ 143fb4530

bool __thiscall
Chaos::Facades::FCollectionAnchoringFacade::HasInitialDynamicStateAttribute
          (FCollectionAnchoringFacade *this)

{
  return (this->InitialDynamicStateAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0;
}

// IsAnchored @ 143fb75b0

bool __thiscall
Chaos::Facades::FCollectionAnchoringFacade::IsAnchored(FCollectionAnchoringFacade *this,int param_1)

{
  TManagedArray<bool> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  
  pTVar1 = (this->AnchoredAttribute).ConstAttributeArray;
  if (pTVar1 == (TManagedArray<bool> *)0x0) {
    return false;
  }
  if ((param_1 < 0) || (*(int *)&pTVar1->field_0x28 <= param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5c6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  puVar5 = *(undefined1 **)&pTVar1->field_0x20;
  if (*(undefined1 **)&pTVar1->field_0x20 == (undefined1 *)0x0) {
    puVar5 = &pTVar1->field_0x10;
  }
  return (*(uint *)(puVar5 + (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
          (param_1 & 0x1fU) & 1) != 0;
}

// IsValid @ 143fb7ab0

bool __thiscall
Chaos::Facades::FCollectionAnchoringFacade::IsValid(FCollectionAnchoringFacade *this)

{
  if (((this->InitialDynamicStateAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0) &&
     ((this->AnchoredAttribute).ConstAttributeArray != (TManagedArray<bool> *)0x0)) {
    return true;
  }
  return false;
}

// SetAnchored @ 143fc7580

void __thiscall
Chaos::Facades::FCollectionAnchoringFacade::SetAnchored
          (FCollectionAnchoringFacade *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  TManagedArray<bool> *pTVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  undefined1 *puVar11;
  undefined1 local_res8 [8];
  
  if ((this->InitialDynamicStateAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionAnchoringFacade.cpp"
                       ,0x5e,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (((this->AnchoredAttribute).AttributeArray == (TManagedArray<bool> *)0x0) ||
     ((this->AnchoredAttribute).Collection == (FManagedArrayCollection *)0x0)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttributeArray!=nullptr && !IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x74,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  ((this->AnchoredAttribute).AttributeArray)->field_0x8 = 1;
  pFVar10 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  pTVar5 = (this->AnchoredAttribute).AttributeArray;
  pFVar1 = pFVar10 + (longlong)iVar3 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar10 == pFVar1) break;
    iVar4 = *(int *)pFVar10;
    if ((iVar4 < 0) || (*(int *)&pTVar5->field_0x28 <= iVar4)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    puVar11 = &pTVar5->field_0x10;
    if (*(undefined1 **)&pTVar5->field_0x20 != (undefined1 *)0x0) {
      puVar11 = *(undefined1 **)&pTVar5->field_0x20;
    }
    iVar8 = iVar4;
    if (iVar4 < 0) {
      iVar8 = iVar4 + 0x1f;
    }
    lVar2 = (longlong)(iVar8 >> 5) * 4;
    uVar9 = 1 << ((byte)iVar4 & 0x1f);
    if (param_2) {
      *(uint *)(puVar11 + lVar2) = uVar9 | *(uint *)(puVar11 + lVar2);
      pFVar10 = pFVar10 + 4;
    }
    else {
      *(uint *)(puVar11 + lVar2) = ~uVar9 & *(uint *)(puVar11 + lVar2);
      pFVar10 = pFVar10 + 4;
    }
  }
  return;
}

// SetAnchored @ 143fc76f0

void __thiscall
Chaos::Facades::FCollectionAnchoringFacade::SetAnchored
          (FCollectionAnchoringFacade *this,int param_1,bool param_2)

{
  uint uVar1;
  TManagedArray<bool> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined1 *puVar6;
  
  if ((this->InitialDynamicStateAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionAnchoringFacade.cpp"
                       ,0x58,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((this->AnchoredAttribute).AttributeArray == (TManagedArray<bool> *)0x0) ||
     ((this->AnchoredAttribute).Collection == (FManagedArrayCollection *)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AttributeArray!=nullptr && !IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x74,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ((this->AnchoredAttribute).AttributeArray)->field_0x8 = 1;
  pTVar2 = (this->AnchoredAttribute).AttributeArray;
  if ((param_1 < 0) || (*(int *)&pTVar2->field_0x28 <= param_1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar6 = *(undefined1 **)&pTVar2->field_0x20;
  if (*(undefined1 **)&pTVar2->field_0x20 == (undefined1 *)0x0) {
    puVar6 = &pTVar2->field_0x10;
  }
  uVar5 = 1 << ((byte)param_1 & 0x1f);
  uVar1 = *(uint *)(puVar6 + (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4);
  if (param_2) {
    uVar5 = uVar5 | uVar1;
  }
  else {
    uVar5 = ~uVar5 & uVar1;
  }
  *(uint *)(puVar6 + (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4) = uVar5;
  return;
}

// SetInitialDynamicState @ 143fc8820

void __thiscall
Chaos::Facades::FCollectionAnchoringFacade::SetInitialDynamicState
          (FCollectionAnchoringFacade *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          EObjectStateType param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  TManagedArray<int> *pTVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res18 [16];
  
  if (((this->InitialDynamicStateAttribute).Collection == (FManagedArrayCollection *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionAnchoringFacade.cpp"
                         ,0x42,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_2 == Sleeping) || ('\x04' < (char)param_2)) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4699425341221896124>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionAnchoringFacade.cpp"
                       ,0x44,
                       "State != EObjectStateType::Sleeping && State < EObjectStateType::Count");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    if ((((this->InitialDynamicStateAttribute).AttributeArray == (TManagedArray<int> *)0x0) ||
        ((this->InitialDynamicStateAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("AttributeArray!=nullptr && !IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x74,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    ((this->InitialDynamicStateAttribute).AttributeArray)->field_0x8 = 1;
    pFVar8 = (param_1->AllocatorInstance).Data;
    iVar2 = param_1->ArrayNum;
    pTVar4 = (this->InitialDynamicStateAttribute).AttributeArray;
    pFVar1 = pFVar8 + (longlong)iVar2 * 4;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar8 == pFVar1) break;
      uVar3 = *(uint *)pFVar8;
      if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)&pTVar4->field_0x18)) {
        uVar7 = 0;
        if ((int)uVar3 < *(int *)&pTVar4->field_0x18) {
          uVar7 = ~uVar3 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(int *)(*(longlong *)&pTVar4->field_0x10 + (longlong)(int)uVar3 * 4) = (int)(char)param_2;
      }
      pFVar8 = pFVar8 + 4;
    }
  }
  return;
}

// SetInitialDynamicState @ 143fc89b0

void __thiscall
Chaos::Facades::FCollectionAnchoringFacade::SetInitialDynamicState
          (FCollectionAnchoringFacade *this,int param_1,EObjectStateType param_2)

{
  TManagedArray<int> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  if ((this->InitialDynamicStateAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionAnchoringFacade.cpp"
                       ,0x38,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((param_2 != Sleeping) && ((char)param_2 < '\x05')) {
    if (((this->InitialDynamicStateAttribute).AttributeArray == (TManagedArray<int> *)0x0) ||
       ((this->InitialDynamicStateAttribute).Collection == (FManagedArrayCollection *)0x0)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    ((this->InitialDynamicStateAttribute).AttributeArray)->field_0x8 = 1;
    pTVar1 = (this->InitialDynamicStateAttribute).AttributeArray;
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
    *(int *)(*(longlong *)&pTVar1->field_0x10 + (longlong)param_1 * 4) = (int)(char)param_2;
    return;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_4699425341221896134>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionAnchoringFacade.cpp"
                     ,0x3a,"State != EObjectStateType::Sleeping && State < EObjectStateType::Count")
  ;
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

