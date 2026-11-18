// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// FTransformSource @ 143fd6260

FTransformSource * __thiscall
GeometryCollection::Facades::FTransformSource::FTransformSource
          (FTransformSource *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FTransformSource *pFVar4;
  FValueType *pFVar5;
  FValueType *pFVar6;
  FValueType *pFVar7;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  FName local_30;
  
  (this->SourceNameAttribute).ConstCollection = param_1;
  pFVar5 = (FValueType *)0x0;
  (this->SourceNameAttribute).Collection = param_1;
  (this->SourceNameAttribute).Name = SourceNameAttributeName;
  (this->SourceNameAttribute).Group = TransformSourceGroupName;
  (this->SourceNameAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->SourceNameAttribute).DefaultGroupDependency.Number = 0;
  local_68 = SourceNameAttributeName;
  local_60 = TransformSourceGroupName;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_68);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar5;
  }
  pFVar6 = pFVar5;
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FStringType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar6 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar6 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTransformSource *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->SourceNameAttribute).AttributeArray = (TManagedArray<FString> *)pFVar6;
  (this->SourceNameAttribute).ConstAttributeArray = (TManagedArray<FString> *)pFVar6;
  (this->SourceGuidAttribute).ConstCollection = param_1;
  (this->SourceGuidAttribute).Collection = param_1;
  (this->SourceGuidAttribute).Name = SourceGuidAttributeName;
  (this->SourceGuidAttribute).Group = TransformSourceGroupName;
  (this->SourceGuidAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->SourceGuidAttribute).DefaultGroupDependency.Number = 0;
  local_58 = SourceGuidAttributeName;
  local_50 = TransformSourceGroupName;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_58);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar5;
  }
  pFVar6 = pFVar5;
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FStringType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar6 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar6 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTransformSource *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->SourceGuidAttribute).AttributeArray = (TManagedArray<FString> *)pFVar6;
  (this->SourceGuidAttribute).ConstAttributeArray = (TManagedArray<FString> *)pFVar6;
  (this->SourceRootsAttribute).ConstCollection = param_1;
  (this->SourceRootsAttribute).Collection = param_1;
  (this->SourceRootsAttribute).Name = SourceRootsAttributeName;
  (this->SourceRootsAttribute).Group = TransformSourceGroupName;
  (this->SourceRootsAttribute).DefaultGroupDependency = FTransformCollection::TransformGroup;
  local_48 = SourceRootsAttributeName;
  local_40 = TransformSourceGroupName;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_48);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar5;
  }
  pFVar6 = pFVar5;
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FIntArrayType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar6 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar6 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTransformSource *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->SourceRootsAttribute).AttributeArray =
       (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)pFVar6;
  (this->SourceRootsAttribute).ConstAttributeArray =
       (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)pFVar6;
  (this->SourceSkeletalMeshNameAttribute).ConstCollection = param_1;
  (this->SourceSkeletalMeshNameAttribute).Collection = param_1;
  (this->SourceSkeletalMeshNameAttribute).Name = SourceSkeletalMeshNameAttributeName;
  (this->SourceSkeletalMeshNameAttribute).Group = TransformSourceGroupName;
  (this->SourceSkeletalMeshNameAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->SourceSkeletalMeshNameAttribute).DefaultGroupDependency.Number = 0;
  local_38 = SourceSkeletalMeshNameAttributeName;
  local_30 = TransformSourceGroupName;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_38);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar5;
  }
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FStringType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar5 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar5 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTransformSource *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->SourceSkeletalMeshNameAttribute).AttributeArray = (TManagedArray<FString> *)pFVar5;
  (this->SourceSkeletalMeshNameAttribute).ConstAttributeArray = (TManagedArray<FString> *)pFVar5;
  return this;
}

// FTransformSource @ 143fd6560

FTransformSource * __thiscall
GeometryCollection::Facades::FTransformSource::FTransformSource
          (FTransformSource *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FTransformSource *pFVar4;
  char *pcVar5;
  TManagedArray<FString> *pTVar6;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar7;
  char *pcVar8;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  FName local_30;
  
  (this->SourceNameAttribute).ConstCollection = param_1;
  pcVar8 = (char *)0x0;
  (this->SourceNameAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->SourceNameAttribute).Name = SourceNameAttributeName;
  (this->SourceNameAttribute).Group = TransformSourceGroupName;
  (this->SourceNameAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->SourceNameAttribute).DefaultGroupDependency.Number = 0;
  (this->SourceNameAttribute).AttributeArray = (TManagedArray<FString> *)0x0;
  local_68 = SourceNameAttributeName;
  local_60 = TransformSourceGroupName;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_68);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar8;
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\b')) {
    pTVar6 = (TManagedArray<FString> *)0x0;
  }
  else {
    pTVar6 = *(TManagedArray<FString> **)(pcVar5 + 0x20);
    if (pTVar6 == (TManagedArray<FString> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FTransformSource *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->SourceNameAttribute).ConstAttributeArray = pTVar6;
  (this->SourceGuidAttribute).ConstCollection = param_1;
  (this->SourceGuidAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->SourceGuidAttribute).Name = SourceGuidAttributeName;
  (this->SourceGuidAttribute).Group = TransformSourceGroupName;
  (this->SourceGuidAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->SourceGuidAttribute).DefaultGroupDependency.Number = 0;
  (this->SourceGuidAttribute).AttributeArray = (TManagedArray<FString> *)0x0;
  local_58 = SourceGuidAttributeName;
  local_50 = TransformSourceGroupName;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_58);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar8;
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\b')) {
    pTVar6 = (TManagedArray<FString> *)0x0;
  }
  else {
    pTVar6 = *(TManagedArray<FString> **)(pcVar5 + 0x20);
    if (pTVar6 == (TManagedArray<FString> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FTransformSource *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->SourceGuidAttribute).ConstAttributeArray = pTVar6;
  (this->SourceRootsAttribute).ConstCollection = param_1;
  (this->SourceRootsAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->SourceRootsAttribute).Name = SourceRootsAttributeName;
  (this->SourceRootsAttribute).Group = TransformSourceGroupName;
  (this->SourceRootsAttribute).DefaultGroupDependency = FTransformCollection::TransformGroup;
  (this->SourceRootsAttribute).AttributeArray =
       (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0;
  local_48 = SourceRootsAttributeName;
  local_40 = TransformSourceGroupName;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_48);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar8;
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\x0e')) {
    pTVar7 = (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0;
  }
  else {
    pTVar7 = *(TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> **)
              (pcVar5 + 0x20);
    if (pTVar7 == (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FTransformSource *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->SourceRootsAttribute).ConstAttributeArray = pTVar7;
  (this->SourceSkeletalMeshNameAttribute).ConstCollection = param_1;
  (this->SourceSkeletalMeshNameAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->SourceSkeletalMeshNameAttribute).Name = SourceSkeletalMeshNameAttributeName;
  (this->SourceSkeletalMeshNameAttribute).Group = TransformSourceGroupName;
  (this->SourceSkeletalMeshNameAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->SourceSkeletalMeshNameAttribute).DefaultGroupDependency.Number = 0;
  (this->SourceSkeletalMeshNameAttribute).AttributeArray = (TManagedArray<FString> *)0x0;
  local_38 = SourceSkeletalMeshNameAttributeName;
  local_30 = TransformSourceGroupName;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_38);
  pcVar5 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar5 = pcVar8;
  }
  if ((pcVar5 != (char *)0x0) && (*pcVar5 == '\b')) {
    pTVar6 = *(TManagedArray<FString> **)(pcVar5 + 0x20);
    if (pTVar6 == (TManagedArray<FString> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FTransformSource *)(*pcVar1)();
        return pFVar4;
      }
    }
    (this->SourceSkeletalMeshNameAttribute).ConstAttributeArray = pTVar6;
    return this;
  }
  (this->SourceSkeletalMeshNameAttribute).ConstAttributeArray = (TManagedArray<FString> *)0x0;
  return this;
}

// AddTransformSource @ 143fdb000

void __thiscall
GeometryCollection::Facades::FTransformSource::AddTransformSource
          (FTransformSource *this,FString *param_1,FString *param_2,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_3,FString *param_4)

{
  TManagedArray<FString> *pTVar1;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  if ((this->SourceNameAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionTransformSourceFacade.cpp"
                       ,0x3a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->SourceNameAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionTransformSourceFacade.cpp"
                       ,0x29,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TManagedArrayAccessor<FString>::Add(&this->SourceNameAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<FString>::Add(&this->SourceGuidAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>::Add
            (&this->SourceRootsAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<FString>::Add
            (&this->SourceSkeletalMeshNameAttribute,MakePersistent,(FName)0x0);
  if ((this->SourceNameAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x41,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = FManagedArrayCollection::AddElements
                    ((this->SourceNameAttribute).Collection,1,(this->SourceNameAttribute).Group);
  if (((this->SourceNameAttribute).AttributeArray == (TManagedArray<FString> *)0x0) ||
     ((this->SourceNameAttribute).Collection == (FManagedArrayCollection *)0x0)) {
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
  uVar7 = ~uVar5 >> 0x1f;
  ((this->SourceNameAttribute).AttributeArray)->field_0x8 = 1;
  pTVar1 = (this->SourceNameAttribute).AttributeArray;
  uVar6 = 0;
  if ((int)uVar5 < *(int *)&pTVar1->field_0x18) {
    uVar6 = uVar7;
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
  lVar8 = (longlong)(int)uVar5 * 0x10;
  ::FString::operator=((FString *)(*(longlong *)&pTVar1->field_0x10 + lVar8),param_1);
  if (((this->SourceGuidAttribute).AttributeArray == (TManagedArray<FString> *)0x0) ||
     ((this->SourceGuidAttribute).Collection == (FManagedArrayCollection *)0x0)) {
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
  ((this->SourceGuidAttribute).AttributeArray)->field_0x8 = 1;
  pTVar1 = (this->SourceGuidAttribute).AttributeArray;
  uVar6 = 0;
  if ((int)uVar5 < *(int *)&pTVar1->field_0x18) {
    uVar6 = uVar7;
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
  ::FString::operator=((FString *)(*(longlong *)&pTVar1->field_0x10 + lVar8),param_2);
  if (((this->SourceRootsAttribute).AttributeArray ==
       (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0) ||
     ((this->SourceRootsAttribute).Collection == (FManagedArrayCollection *)0x0)) {
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
  ((this->SourceRootsAttribute).AttributeArray)->field_0x8 = 1;
  pTVar2 = (this->SourceRootsAttribute).AttributeArray;
  uVar6 = 0;
  if ((int)uVar5 < *(int *)&pTVar2->field_0x18) {
    uVar6 = uVar7;
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
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
             ((longlong)(int)uVar5 * 0x50 + *(longlong *)&pTVar2->field_0x10),param_3);
  if (((this->SourceSkeletalMeshNameAttribute).AttributeArray == (TManagedArray<FString> *)0x0) ||
     ((this->SourceSkeletalMeshNameAttribute).Collection == (FManagedArrayCollection *)0x0)) {
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
  ((this->SourceSkeletalMeshNameAttribute).AttributeArray)->field_0x8 = 1;
  pTVar1 = (this->SourceSkeletalMeshNameAttribute).AttributeArray;
  uVar6 = 0;
  if ((int)uVar5 < *(int *)&pTVar1->field_0x18) {
    uVar6 = uVar7;
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
  ::FString::operator=((FString *)(*(longlong *)&pTVar1->field_0x10 + lVar8),param_4);
  return;
}

// DefineSchema @ 143fe8090

void __thiscall GeometryCollection::Facades::FTransformSource::DefineSchema(FTransformSource *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->SourceNameAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionTransformSourceFacade.cpp"
                       ,0x29,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TManagedArrayAccessor<FString>::Add(&this->SourceNameAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<FString>::Add(&this->SourceGuidAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>::Add
            (&this->SourceRootsAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<FString>::Add
            (&this->SourceSkeletalMeshNameAttribute,MakePersistent,(FName)0x0);
  return;
}

// GetTransformSource @ 143fea8b0

TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> * __thiscall
GeometryCollection::Facades::FTransformSource::GetTransformSource
          (FTransformSource *this,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *__return_storage_ptr__,
          FString *param_1,FString *param_2,FString *param_3)

{
  int iVar1;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar2;
  TManagedArray<FString> *pTVar3;
  TManagedArray<FString> *pTVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar11;
  FString *pFVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  
  if ((((this->SourceNameAttribute).ConstAttributeArray != (TManagedArray<FString> *)0x0) &&
      ((this->SourceGuidAttribute).ConstAttributeArray != (TManagedArray<FString> *)0x0)) &&
     ((this->SourceRootsAttribute).ConstAttributeArray !=
      (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0)) {
    pTVar2 = (this->SourceRootsAttribute).ConstAttributeArray;
    pTVar3 = (this->SourceGuidAttribute).ConstAttributeArray;
    if (((this->SourceNameAttribute).ConstAttributeArray == (TManagedArray<FString> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x67,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar6)();
      return pTVar11;
    }
    pTVar4 = (this->SourceNameAttribute).ConstAttributeArray;
    if (pTVar4 == (TManagedArray<FString> *)0x0) {
      iVar8 = FManagedArrayCollection::NumElements
                        ((this->SourceNameAttribute).ConstCollection,
                         (this->SourceNameAttribute).Group);
    }
    else {
      iVar8 = (**(code **)(*(longlong *)pTVar4 + 0x60))(pTVar4);
    }
    uVar13 = 0;
    if (0 < iVar8) {
      uVar16 = uVar13;
      uVar17 = uVar13;
      do {
        uVar15 = (uint)uVar13;
        uVar14 = ~uVar15 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar15 < *(int *)&pTVar3->field_0x18) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar11 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar6)();
          return pTVar11;
        }
        lVar5 = *(longlong *)&pTVar3->field_0x10;
        iVar10 = *(int *)(lVar5 + 8 + uVar16);
        iVar1 = (param_2->Data).ArrayNum;
        if (iVar10 == iVar1) {
          if (1 < iVar10) {
            iVar10 = FGenericPlatformStricmp::Stricmp
                               (*(wchar_t **)(lVar5 + uVar16),
                                (wchar_t *)(param_2->Data).AllocatorInstance.Data);
            bVar7 = iVar10 == 0;
            goto LAB_143fea9fe;
          }
LAB_143feaa09:
          uVar9 = 0;
          if ((int)uVar15 < *(int *)&pTVar4->field_0x18) {
            uVar9 = uVar14;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            pTVar11 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar6)();
            return pTVar11;
          }
          iVar10 = *(int *)(*(longlong *)&pTVar4->field_0x10 + 8 + uVar16);
          iVar1 = (param_1->Data).ArrayNum;
          if (iVar10 == iVar1) {
            if (1 < iVar10) {
              iVar10 = wcscmp(*(wchar_t **)(*(longlong *)&pTVar4->field_0x10 + uVar16),
                              (wchar_t *)(param_1->Data).AllocatorInstance.Data);
              bVar7 = iVar10 == 0;
              goto LAB_143feaa7a;
            }
          }
          else {
            bVar7 = iVar10 + iVar1 == 1;
LAB_143feaa7a:
            if (!bVar7) goto LAB_143feaaf5;
          }
          if (((this->SourceSkeletalMeshNameAttribute).ConstAttributeArray ==
               (TManagedArray<FString> *)0x0) ||
             (pFVar12 = TManagedArrayAccessor<FString>::operator[]
                                  (&this->SourceSkeletalMeshNameAttribute,uVar15),
             (pFVar12->Data).ArrayNum < 2)) {
LAB_143feab61:
            uVar9 = 0;
            if ((int)uVar15 < *(int *)&pTVar2->field_0x18) {
              uVar9 = uVar14;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              pTVar11 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*pcVar6)();
              return pTVar11;
            }
            lVar5 = *(longlong *)&pTVar2->field_0x10;
            *(undefined8 *)&__return_storage_ptr__->Elements = 0;
            *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
            *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
            *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
            *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
            *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
            *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
            (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
            __return_storage_ptr__->HashSize = 0;
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                      (__return_storage_ptr__,
                       (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                       ((longlong)(int)uVar15 * 0x50 + lVar5));
            return __return_storage_ptr__;
          }
          pFVar12 = TManagedArrayAccessor<FString>::operator[]
                              (&this->SourceSkeletalMeshNameAttribute,uVar15);
          iVar10 = (pFVar12->Data).ArrayNum;
          iVar1 = (param_3->Data).ArrayNum;
          if (iVar10 == iVar1) {
            if (iVar10 < 2) goto LAB_143feab61;
            iVar10 = wcscmp((wchar_t *)(pFVar12->Data).AllocatorInstance.Data,
                            (wchar_t *)(param_3->Data).AllocatorInstance.Data);
            bVar7 = iVar10 == 0;
          }
          else {
            bVar7 = iVar1 + iVar10 == 1;
          }
          if (bVar7) goto LAB_143feab61;
        }
        else {
          bVar7 = iVar10 + iVar1 == 1;
LAB_143fea9fe:
          if (bVar7) goto LAB_143feaa09;
        }
LAB_143feaaf5:
        uVar13 = (ulonglong)(uVar15 + 1);
        uVar17 = uVar17 + 1;
        uVar16 = uVar16 + 0x10;
      } while ((longlong)uVar17 < (longlong)iVar8);
    }
  }
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x18 = 0;
  (__return_storage_ptr__->Hash).InlineData[0] = '\0';
  (__return_storage_ptr__->Hash).InlineData[1] = '\0';
  (__return_storage_ptr__->Hash).InlineData[2] = '\0';
  (__return_storage_ptr__->Hash).InlineData[3] = '\0';
  (__return_storage_ptr__->Hash)._padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->HashSize = 0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  return __return_storage_ptr__;
}

// IsValid @ 143fefe10

bool __thiscall GeometryCollection::Facades::FTransformSource::IsValid(FTransformSource *this)

{
  if ((((this->SourceNameAttribute).ConstAttributeArray != (TManagedArray<FString> *)0x0) &&
      ((this->SourceGuidAttribute).ConstAttributeArray != (TManagedArray<FString> *)0x0)) &&
     ((this->SourceRootsAttribute).ConstAttributeArray !=
      (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0)) {
    return true;
  }
  return false;
}

