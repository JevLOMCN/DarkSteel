// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 15

// FCollectionConnectionGraphFacade @ 143f86100

FCollectionConnectionGraphFacade * __thiscall
GeometryCollection::Facades::FCollectionConnectionGraphFacade::FCollectionConnectionGraphFacade
          (FCollectionConnectionGraphFacade *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FCollectionConnectionGraphFacade *pFVar4;
  TManagedArray<int> *pTVar5;
  FValueType *pFVar6;
  FValueType *pFVar7;
  FValueType *pFVar8;
  FName local_res18;
  FName local_res20;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  FName local_30;
  
  pFVar6 = (FValueType *)0x0;
  ::FName::FName(&local_res18,"Connections");
  (this->ConnectionsAttribute).Name = local_res18;
  (this->ConnectionsAttribute).ConstCollection = param_1;
  (this->ConnectionsAttribute).Collection = param_1;
  (this->ConnectionsAttribute).Group = FTransformCollection::TransformGroup;
  (this->ConnectionsAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->ConnectionsAttribute).DefaultGroupDependency.Number = 0;
  local_40 = FTransformCollection::TransformGroup;
  local_48 = local_res18;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_48);
  pFVar8 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar8 = pFVar6;
  }
  pFVar7 = pFVar6;
  if ((pFVar8 != (FValueType *)0x0) && (pFVar8->ArrayType == FIntArrayType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar8);
    pFVar7 = (FValueType *)pFVar8->ManagedArray;
    if ((pFVar7 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FCollectionConnectionGraphFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar7->GroupIndexDependency).Number = 1;
  }
  (this->ConnectionsAttribute).AttributeArray =
       (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)pFVar7;
  (this->ConnectionsAttribute).ConstAttributeArray =
       (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)pFVar7;
  ::FName::FName(&local_res20,"ConnectionEdgeStarts");
  (this->ConnectionEdgeStartAttribute).Name = local_res20;
  (this->ConnectionEdgeStartAttribute).ConstCollection = param_1;
  (this->ConnectionEdgeStartAttribute).Collection = param_1;
  (this->ConnectionEdgeStartAttribute).Group = ConnectionGroupName;
  (this->ConnectionEdgeStartAttribute).DefaultGroupDependency = FTransformCollection::TransformGroup
  ;
  pTVar5 = FManagedArrayCollection::FindAttributeTyped<int>(param_1,local_res20,ConnectionGroupName)
  ;
  (this->ConnectionEdgeStartAttribute).AttributeArray = pTVar5;
  (this->ConnectionEdgeStartAttribute).ConstAttributeArray = pTVar5;
  ::FName::FName(&local_58,"ConnectionEdgeEnds");
  (this->ConnectionEdgeEndAttribute).Name = local_58;
  (this->ConnectionEdgeEndAttribute).ConstCollection = param_1;
  (this->ConnectionEdgeEndAttribute).Collection = param_1;
  (this->ConnectionEdgeEndAttribute).Group = ConnectionGroupName;
  (this->ConnectionEdgeEndAttribute).DefaultGroupDependency = FTransformCollection::TransformGroup;
  pTVar5 = FManagedArrayCollection::FindAttributeTyped<int>(param_1,local_58,ConnectionGroupName);
  (this->ConnectionEdgeEndAttribute).AttributeArray = pTVar5;
  (this->ConnectionEdgeEndAttribute).ConstAttributeArray = pTVar5;
  ::FName::FName(&local_50,"ConnectionEdgeContacts");
  (this->ConnectionEdgeContactAttribute).Name = local_50;
  (this->ConnectionEdgeContactAttribute).ConstCollection = param_1;
  (this->ConnectionEdgeContactAttribute).Collection = param_1;
  (this->ConnectionEdgeContactAttribute).Group = ConnectionGroupName;
  (this->ConnectionEdgeContactAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->ConnectionEdgeContactAttribute).DefaultGroupDependency.Number = 0;
  local_38 = local_50;
  local_30 = ConnectionGroupName;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_38);
  pFVar8 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar8 = pFVar6;
  }
  if ((pFVar8 != (FValueType *)0x0) && (pFVar8->ArrayType == FFloatType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar8);
    pFVar6 = (FValueType *)pFVar8->ManagedArray;
    if ((pFVar6 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FCollectionConnectionGraphFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->ConnectionEdgeContactAttribute).AttributeArray = (TManagedArray<float> *)pFVar6;
  (this->ConnectionEdgeContactAttribute).ConstAttributeArray = (TManagedArray<float> *)pFVar6;
  return this;
}

// FCollectionConnectionGraphFacade @ 143f86360

FCollectionConnectionGraphFacade * __thiscall
GeometryCollection::Facades::FCollectionConnectionGraphFacade::FCollectionConnectionGraphFacade
          (FCollectionConnectionGraphFacade *this,FManagedArrayCollection *param_1)

{
  TManagedArray<float> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  FCollectionConnectionGraphFacade *pFVar5;
  TManagedArray<int> *pTVar6;
  char *pcVar7;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar8;
  FName local_res18;
  FName local_res20;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  FName local_30;
  
  ::FName::FName(&local_res18,"Connections");
  (this->ConnectionsAttribute).Name = local_res18;
  (this->ConnectionsAttribute).ConstCollection = param_1;
  (this->ConnectionsAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->ConnectionsAttribute).Group = FTransformCollection::TransformGroup;
  (this->ConnectionsAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->ConnectionsAttribute).DefaultGroupDependency.Number = 0;
  (this->ConnectionsAttribute).AttributeArray =
       (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0;
  local_40 = FTransformCollection::TransformGroup;
  local_48 = local_res18;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_48);
  pcVar7 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar7 = (char *)0x0;
  }
  if ((pcVar7 == (char *)0x0) || (*pcVar7 != '\x0e')) {
    pTVar8 = (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0;
  }
  else {
    pTVar8 = *(TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> **)
              (pcVar7 + 0x20);
    if (pTVar8 == (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FCollectionConnectionGraphFacade *)(*pcVar2)();
        return pFVar5;
      }
    }
  }
  (this->ConnectionsAttribute).ConstAttributeArray = pTVar8;
  ::FName::FName(&local_res20,"ConnectionEdgeStarts");
  (this->ConnectionEdgeStartAttribute).Name = local_res20;
  (this->ConnectionEdgeStartAttribute).ConstCollection = param_1;
  (this->ConnectionEdgeStartAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->ConnectionEdgeStartAttribute).Group = ConnectionGroupName;
  (this->ConnectionEdgeStartAttribute).DefaultGroupDependency = FTransformCollection::TransformGroup
  ;
  (this->ConnectionEdgeStartAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<int>(param_1,local_res20,ConnectionGroupName)
  ;
  (this->ConnectionEdgeStartAttribute).ConstAttributeArray = pTVar6;
  ::FName::FName(&local_58,"ConnectionEdgeEnds");
  (this->ConnectionEdgeEndAttribute).Name = local_58;
  (this->ConnectionEdgeEndAttribute).ConstCollection = param_1;
  (this->ConnectionEdgeEndAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->ConnectionEdgeEndAttribute).Group = ConnectionGroupName;
  (this->ConnectionEdgeEndAttribute).DefaultGroupDependency = FTransformCollection::TransformGroup;
  (this->ConnectionEdgeEndAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar6 = FManagedArrayCollection::FindAttributeTyped<int>(param_1,local_58,ConnectionGroupName);
  (this->ConnectionEdgeEndAttribute).ConstAttributeArray = pTVar6;
  ::FName::FName(&local_50,"ConnectionEdgeContacts");
  (this->ConnectionEdgeContactAttribute).Name = local_50;
  (this->ConnectionEdgeContactAttribute).ConstCollection = param_1;
  (this->ConnectionEdgeContactAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->ConnectionEdgeContactAttribute).Group = ConnectionGroupName;
  (this->ConnectionEdgeContactAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->ConnectionEdgeContactAttribute).DefaultGroupDependency.Number = 0;
  (this->ConnectionEdgeContactAttribute).AttributeArray = (TManagedArray<float> *)0x0;
  local_38 = local_50;
  local_30 = ConnectionGroupName;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_38);
  pcVar7 = &pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar7 = (char *)0x0;
  }
  if ((pcVar7 != (char *)0x0) && (*pcVar7 == '\t')) {
    pTVar1 = *(TManagedArray<float> **)(pcVar7 + 0x20);
    if (pTVar1 == (TManagedArray<float> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FCollectionConnectionGraphFacade *)(*pcVar2)();
        return pFVar5;
      }
    }
    (this->ConnectionEdgeContactAttribute).ConstAttributeArray = pTVar1;
    return this;
  }
  (this->ConnectionEdgeContactAttribute).ConstAttributeArray = (TManagedArray<float> *)0x0;
  return this;
}

// ClearAttributes @ 143fa4ac0

void __thiscall
GeometryCollection::Facades::FCollectionConnectionGraphFacade::ClearAttributes
          (FCollectionConnectionGraphFacade *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ConnectionEdgeStartAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionConnectionGraphFacade.cpp"
                       ,0x35,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->ConnectionEdgeStartAttribute).Collection == (FManagedArrayCollection *)0x0) {
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
  FManagedArrayCollection::RemoveAttribute
            ((this->ConnectionEdgeStartAttribute).Collection,
             (this->ConnectionEdgeStartAttribute).Name,(this->ConnectionEdgeStartAttribute).Group);
  (this->ConnectionEdgeStartAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  (this->ConnectionEdgeStartAttribute).ConstAttributeArray = (TManagedArray<int> *)0x0;
  if ((this->ConnectionEdgeEndAttribute).Collection == (FManagedArrayCollection *)0x0) {
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
  FManagedArrayCollection::RemoveAttribute
            ((this->ConnectionEdgeEndAttribute).Collection,(this->ConnectionEdgeEndAttribute).Name,
             (this->ConnectionEdgeEndAttribute).Group);
  (this->ConnectionEdgeEndAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  (this->ConnectionEdgeEndAttribute).ConstAttributeArray = (TManagedArray<int> *)0x0;
  return;
}

// Connect @ 143fa63d0

void __thiscall
GeometryCollection::Facades::FCollectionConnectionGraphFacade::Connect
          (FCollectionConnectionGraphFacade *this,int param_1,int param_2)

{
  TManagedArray<int> *pTVar1;
  TManagedArray<int> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  if ((this->ConnectionEdgeContactAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0) {
    ConnectWithContact(this,param_1,param_2,__real_3f800000);
  }
  if ((this->ConnectionEdgeStartAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionConnectionGraphFacade.cpp"
                       ,0x4a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((this->ConnectionEdgeStartAttribute).AttributeArray == (TManagedArray<int> *)0x0) ||
     ((this->ConnectionEdgeStartAttribute).Collection == (FManagedArrayCollection *)0x0)) {
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
  ((this->ConnectionEdgeStartAttribute).AttributeArray)->field_0x8 = 1;
  pTVar1 = (this->ConnectionEdgeStartAttribute).AttributeArray;
  if (((this->ConnectionEdgeEndAttribute).AttributeArray == (TManagedArray<int> *)0x0) ||
     ((this->ConnectionEdgeEndAttribute).Collection == (FManagedArrayCollection *)0x0)) {
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
  ((this->ConnectionEdgeEndAttribute).AttributeArray)->field_0x8 = 1;
  pTVar2 = (this->ConnectionEdgeEndAttribute).AttributeArray;
  if ((this->ConnectionEdgeStartAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x2b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = FManagedArrayCollection::AddElements
                    ((this->ConnectionEdgeStartAttribute).Collection,1,ConnectionGroupName);
  uVar6 = 0;
  if ((int)uVar5 < *(int *)&pTVar1->field_0x18) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
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
  *(int *)(*(longlong *)&pTVar1->field_0x10 + (longlong)(int)uVar5 * 4) = param_1;
  uVar6 = 0;
  if ((int)uVar5 < *(int *)&pTVar2->field_0x18) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
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
  *(int *)(*(longlong *)&pTVar2->field_0x10 + (longlong)(int)uVar5 * 4) = param_2;
  return;
}

// ConnectWithContact @ 143fa65d0

void __thiscall
GeometryCollection::Facades::FCollectionConnectionGraphFacade::ConnectWithContact
          (FCollectionConnectionGraphFacade *this,int param_1,int param_2,float param_3)

{
  TManagedArray<float> *pTVar1;
  TManagedArray<int> *pTVar2;
  TManagedArray<int> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  if (((this->ConnectionEdgeStartAttribute).Collection == (FManagedArrayCollection *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionConnectionGraphFacade.cpp"
                         ,0x66,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar9 = 0;
  if ((this->ConnectionEdgeContactAttribute).ConstAttributeArray == (TManagedArray<float> *)0x0) {
    if (((this->ConnectionEdgeContactAttribute).Collection == (FManagedArrayCollection *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0xa1,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar5 = FManagedArrayCollection::HasAttribute
                      ((this->ConnectionEdgeContactAttribute).Collection,
                       (this->ConnectionEdgeContactAttribute).Name,
                       (this->ConnectionEdgeContactAttribute).Group);
    if (!bVar5) {
      TManagedArrayAccessor<float>::Add
                (&this->ConnectionEdgeContactAttribute,MakePersistent,(FName)0x0);
      pTVar1 = (this->ConnectionEdgeContactAttribute).AttributeArray;
      uVar11 = uVar9;
      if (0 < *(int *)&pTVar1->field_0x18) {
        do {
          uVar8 = (uint)uVar9;
          uVar6 = 0;
          if ((int)uVar8 < *(int *)&pTVar1->field_0x18) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar9 = (ulonglong)(uVar8 + 1);
          *(undefined4 *)(uVar11 + *(longlong *)&pTVar1->field_0x10) = 0x3f800000;
          uVar11 = uVar11 + 4;
        } while ((int)(uVar8 + 1) < *(int *)&pTVar1->field_0x18);
      }
    }
  }
  if ((((this->ConnectionEdgeStartAttribute).AttributeArray == (TManagedArray<int> *)0x0) ||
      ((this->ConnectionEdgeStartAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ((this->ConnectionEdgeStartAttribute).AttributeArray)->field_0x8 = 1;
  pTVar2 = (this->ConnectionEdgeStartAttribute).AttributeArray;
  if ((((this->ConnectionEdgeEndAttribute).AttributeArray == (TManagedArray<int> *)0x0) ||
      ((this->ConnectionEdgeEndAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ((this->ConnectionEdgeEndAttribute).AttributeArray)->field_0x8 = 1;
  pTVar3 = (this->ConnectionEdgeEndAttribute).AttributeArray;
  if ((((this->ConnectionEdgeContactAttribute).AttributeArray == (TManagedArray<float> *)0x0) ||
      ((this->ConnectionEdgeContactAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ((this->ConnectionEdgeContactAttribute).AttributeArray)->field_0x8 = 1;
  pTVar1 = (this->ConnectionEdgeContactAttribute).AttributeArray;
  if (((this->ConnectionEdgeStartAttribute).Collection == (FManagedArrayCollection *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x2b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = FManagedArrayCollection::AddElements
                    ((this->ConnectionEdgeStartAttribute).Collection,1,ConnectionGroupName);
  lVar12 = (longlong)(int)uVar7;
  uVar10 = ~uVar7 >> 0x1f;
  uVar8 = 0;
  uVar6 = uVar8;
  if ((int)uVar7 < *(int *)&pTVar2->field_0x18) {
    uVar6 = uVar10;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(int *)(*(longlong *)&pTVar2->field_0x10 + lVar12 * 4) = param_1;
  uVar6 = uVar8;
  if ((int)uVar7 < *(int *)&pTVar3->field_0x18) {
    uVar6 = uVar10;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(int *)(*(longlong *)&pTVar3->field_0x10 + lVar12 * 4) = param_2;
  if ((int)uVar7 < *(int *)&pTVar1->field_0x18) {
    uVar8 = uVar10;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(float *)(*(longlong *)&pTVar1->field_0x10 + lVar12 * 4) = param_3;
  return;
}

// DefineSchema @ 143fa9040

void __thiscall
GeometryCollection::Facades::FCollectionConnectionGraphFacade::DefineSchema
          (FCollectionConnectionGraphFacade *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ConnectionEdgeStartAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionConnectionGraphFacade.cpp"
                       ,0x2e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TManagedArrayAccessor<int>::Add(&this->ConnectionEdgeStartAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<int>::Add(&this->ConnectionEdgeEndAttribute,MakePersistent,(FName)0x0);
  return;
}

// EnableContactAreas @ 143faa870

void __thiscall
GeometryCollection::Facades::FCollectionConnectionGraphFacade::EnableContactAreas
          (FCollectionConnectionGraphFacade *this,bool param_1,float param_2)

{
  FManagedArrayCollection *pFVar1;
  TManagedArray<float> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  pFVar1 = (this->ConnectionEdgeContactAttribute).Collection;
  if (param_1) {
    if (pFVar1 == (FManagedArrayCollection *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0xa1,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    bVar4 = FManagedArrayCollection::HasAttribute
                      ((this->ConnectionEdgeContactAttribute).Collection,
                       (this->ConnectionEdgeContactAttribute).Name,
                       (this->ConnectionEdgeContactAttribute).Group);
    if (!bVar4) {
      TManagedArrayAccessor<float>::Add
                (&this->ConnectionEdgeContactAttribute,MakePersistent,(FName)0x0);
      pTVar2 = (this->ConnectionEdgeContactAttribute).AttributeArray;
      uVar6 = 0;
      if (0 < *(int *)&pTVar2->field_0x18) {
        lVar7 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar6 < *(int *)&pTVar2->field_0x18) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if (uVar5 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          uVar6 = uVar6 + 1;
          *(float *)(lVar7 + *(longlong *)&pTVar2->field_0x10) = param_2;
          lVar7 = lVar7 + 4;
        } while ((int)uVar6 < *(int *)&pTVar2->field_0x18);
        return;
      }
    }
  }
  else {
    if (pFVar1 == (FManagedArrayCollection *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0xbf,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FManagedArrayCollection::RemoveAttribute
              ((this->ConnectionEdgeContactAttribute).Collection,
               (this->ConnectionEdgeContactAttribute).Name,
               (this->ConnectionEdgeContactAttribute).Group);
    (this->ConnectionEdgeContactAttribute).AttributeArray = (TManagedArray<float> *)0x0;
    (this->ConnectionEdgeContactAttribute).ConstAttributeArray = (TManagedArray<float> *)0x0;
  }
  return;
}

// GetConnection @ 143faff50

TTuple<int,int> __thiscall
GeometryCollection::Facades::FCollectionConnectionGraphFacade::GetConnection
          (FCollectionConnectionGraphFacade *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 in_register_00000014;
  TTuple<int,int> TVar3;
  int in_R8D;
  
  TVar3._4_4_ = in_register_00000014;
  TVar3._0_4_ = param_1;
  piVar1 = TManagedArrayAccessor<int>::operator[](&this->ConnectionEdgeEndAttribute,in_R8D);
  piVar2 = TManagedArrayAccessor<int>::operator[](&this->ConnectionEdgeStartAttribute,in_R8D);
  *(int *)TVar3 = *piVar2;
  *(int *)((longlong)TVar3 + 4) = *piVar1;
  return TVar3;
}

// GetConnectionContactArea @ 143faffc0

float __thiscall
GeometryCollection::Facades::FCollectionConnectionGraphFacade::GetConnectionContactArea
          (FCollectionConnectionGraphFacade *this,int param_1)

{
  float *pfVar1;
  
  pfVar1 = TManagedArrayAccessor<float>::operator[](&this->ConnectionEdgeContactAttribute,param_1);
  return *pfVar1;
}

// HasContactAreas @ 143fb4460

bool __thiscall
GeometryCollection::Facades::FCollectionConnectionGraphFacade::HasContactAreas
          (FCollectionConnectionGraphFacade *this)

{
  return (this->ConnectionEdgeContactAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0;
}

// HasValidConnections @ 143fb4610

bool __thiscall
GeometryCollection::Facades::FCollectionConnectionGraphFacade::HasValidConnections
          (FCollectionConnectionGraphFacade *this)

{
  TManagedArray<int> *pTVar1;
  TManagedArray<int> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  
  iVar7 = FManagedArrayCollection::NumElements
                    ((this->ConnectionEdgeStartAttribute).ConstCollection,
                     FTransformCollection::TransformGroup);
  if (((this->ConnectionEdgeStartAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x67,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pTVar1 = (this->ConnectionEdgeStartAttribute).ConstAttributeArray;
  if (((this->ConnectionEdgeEndAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x67,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pTVar2 = (this->ConnectionEdgeEndAttribute).ConstAttributeArray;
  uVar10 = 0;
  iVar8 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
  if (0 < iVar8) {
    lVar12 = 0;
    do {
      uVar11 = ~uVar10 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar10 < *(int *)&pTVar1->field_0x18) {
        uVar9 = uVar11;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if (*(int *)(*(longlong *)&pTVar1->field_0x10 + lVar12 * 4) < 0) {
        return false;
      }
      uVar9 = 0;
      if ((int)uVar10 < *(int *)&pTVar1->field_0x18) {
        uVar9 = uVar11;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if (iVar7 <= *(int *)(*(longlong *)&pTVar1->field_0x10 + lVar12 * 4)) {
        return false;
      }
      uVar9 = 0;
      if ((int)uVar10 < *(int *)&pTVar2->field_0x18) {
        uVar9 = uVar11;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if (*(int *)(*(longlong *)&pTVar2->field_0x10 + lVar12 * 4) < 0) {
        return false;
      }
      uVar9 = 0;
      if ((int)uVar10 < *(int *)&pTVar2->field_0x18) {
        uVar9 = uVar11;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if (iVar7 <= *(int *)(*(longlong *)&pTVar2->field_0x10 + lVar12 * 4)) {
        return false;
      }
      uVar9 = 0;
      if ((int)uVar10 < *(int *)&pTVar1->field_0x18) {
        uVar9 = uVar11;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      lVar3 = *(longlong *)&pTVar1->field_0x10;
      uVar9 = 0;
      if ((int)uVar10 < *(int *)&pTVar2->field_0x18) {
        uVar9 = uVar11;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if (*(int *)(lVar3 + lVar12 * 4) == *(int *)(*(longlong *)&pTVar2->field_0x10 + lVar12 * 4)) {
        return false;
      }
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 1;
      iVar8 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    } while ((int)uVar10 < iVar8);
  }
  return true;
}

// IsValid @ 143fb7ad0

bool __thiscall
GeometryCollection::Facades::FCollectionConnectionGraphFacade::IsValid
          (FCollectionConnectionGraphFacade *this)

{
  if (((this->ConnectionEdgeStartAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0) &&
     ((this->ConnectionEdgeEndAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)) {
    return true;
  }
  return false;
}

// NumConnections @ 143fb9130

int __thiscall
GeometryCollection::Facades::FCollectionConnectionGraphFacade::NumConnections
          (FCollectionConnectionGraphFacade *this)

{
  int iVar1;
  
  iVar1 = FManagedArrayCollection::NumElements
                    ((this->ConnectionEdgeStartAttribute).ConstCollection,ConnectionGroupName);
  return iVar1;
}

// ReserveAdditionalConnections @ 143fc5d90

void __thiscall
GeometryCollection::Facades::FCollectionConnectionGraphFacade::ReserveAdditionalConnections
          (FCollectionConnectionGraphFacade *this,int param_1)

{
  TManagedArray<int> *pTVar1;
  FManagedArrayCollection *this_00;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  
  if ((this->ConnectionEdgeStartAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionConnectionGraphFacade.cpp"
                       ,0x3d,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->ConnectionEdgeStartAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x2b,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar3 = ConnectionGroupName;
  pTVar1 = (this->ConnectionEdgeStartAttribute).ConstAttributeArray;
  this_00 = (this->ConnectionEdgeStartAttribute).Collection;
  if (pTVar1 == (TManagedArray<int> *)0x0) {
    iVar5 = FManagedArrayCollection::NumElements
                      ((this->ConnectionEdgeStartAttribute).ConstCollection,
                       (this->ConnectionEdgeStartAttribute).Group);
  }
  else {
    iVar5 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
  }
  FManagedArrayCollection::Reserve(this_00,iVar5 + param_1,FVar3);
  return;
}

// ResetConnections @ 143fc5fd0

void __thiscall
GeometryCollection::Facades::FCollectionConnectionGraphFacade::ResetConnections
          (FCollectionConnectionGraphFacade *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ConnectionEdgeStartAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionConnectionGraphFacade.cpp"
                       ,0x7d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->ConnectionEdgeStartAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x2b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FManagedArrayCollection::EmptyGroup
            ((this->ConnectionEdgeStartAttribute).Collection,ConnectionGroupName);
  return;
}

