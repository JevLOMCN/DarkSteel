// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 10

// FGeometryCollectionDynamicStateFacade @ 143f890b0

FGeometryCollectionDynamicStateFacade * __thiscall
FGeometryCollectionDynamicStateFacade::FGeometryCollectionDynamicStateFacade
          (FGeometryCollectionDynamicStateFacade *this,FGeometryDynamicCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<bool> *pTVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  FGeometryCollectionDynamicStateFacade *pFVar5;
  FValueType *pFVar6;
  FValueType *pFVar7;
  FValueType *pFVar8;
  FName local_res20;
  FName local_48;
  FName local_40;
  FName local_38;
  FName local_30;
  
  (this->ActiveAttribute).ConstCollection = (FManagedArrayCollection *)param_1;
  (this->ActiveAttribute).Collection = (FManagedArrayCollection *)param_1;
  pFVar8 = (FValueType *)0x0;
  (this->ActiveAttribute).Name = FGeometryDynamicCollection::ActiveAttribute;
  (this->ActiveAttribute).Group = FTransformCollection::TransformGroup;
  (this->ActiveAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->ActiveAttribute).DefaultGroupDependency.Number = 0;
  pTVar3 = FManagedArrayCollection::FindAttributeTyped<bool>
                     ((FManagedArrayCollection *)param_1,FGeometryDynamicCollection::ActiveAttribute
                      ,FTransformCollection::TransformGroup);
  (this->ActiveAttribute).AttributeArray = pTVar3;
  (this->ActiveAttribute).ConstAttributeArray = pTVar3;
  (this->DynamicStateAttribute).ConstCollection = (FManagedArrayCollection *)param_1;
  (this->DynamicStateAttribute).Collection = (FManagedArrayCollection *)param_1;
  (this->DynamicStateAttribute).Name = FGeometryDynamicCollection::DynamicStateAttribute;
  (this->DynamicStateAttribute).Group = FTransformCollection::TransformGroup;
  (this->DynamicStateAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->DynamicStateAttribute).DefaultGroupDependency.Number = 0;
  local_48 = FGeometryDynamicCollection::DynamicStateAttribute;
  local_40 = FTransformCollection::TransformGroup;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->_padding_,(TTuple<FName,FName> *)&local_48);
  pFVar7 = (FValueType *)&pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar8;
  }
  pFVar6 = pFVar8;
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FUInt8Type)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar6 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar6 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FGeometryCollectionDynamicStateFacade *)(*pcVar1)();
      return pFVar5;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->DynamicStateAttribute).AttributeArray = (TManagedArray<unsigned_char> *)pFVar6;
  (this->DynamicStateAttribute).ConstAttributeArray = (TManagedArray<unsigned_char> *)pFVar6;
  ::FName::FName(&local_res20,"InternalClusterParentTypeArray");
  (this->InternalClusterParentTypeAttribute).Name = local_res20;
  (this->InternalClusterParentTypeAttribute).ConstCollection = (FManagedArrayCollection *)param_1;
  (this->InternalClusterParentTypeAttribute).Collection = (FManagedArrayCollection *)param_1;
  (this->InternalClusterParentTypeAttribute).Group = FTransformCollection::TransformGroup;
  (this->InternalClusterParentTypeAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->InternalClusterParentTypeAttribute).DefaultGroupDependency.Number = 0;
  local_38 = local_res20;
  local_30 = FTransformCollection::TransformGroup;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->_padding_,(TTuple<FName,FName> *)&local_38);
  pFVar7 = (FValueType *)&pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar8;
  }
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FUInt8Type)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar8 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar8 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FGeometryCollectionDynamicStateFacade *)(*pcVar1)();
      return pFVar5;
    }
    *(undefined1 *)&(pFVar8->GroupIndexDependency).Number = 1;
  }
  (this->InternalClusterParentTypeAttribute).AttributeArray = (TManagedArray<unsigned_char> *)pFVar8
  ;
  (this->InternalClusterParentTypeAttribute).ConstAttributeArray =
       (TManagedArray<unsigned_char> *)pFVar8;
  this->DynamicCollection = param_1;
  return this;
}

// HasBrokenOff @ 143fb3eb0

bool __thiscall
FGeometryCollectionDynamicStateFacade::HasBrokenOff
          (FGeometryCollectionDynamicStateFacade *this,int param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  TManagedArray<bool> *pTVar4;
  FGeometryDynamicCollection *pFVar5;
  TManagedArray<unsigned_char> *pTVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  longlong *plVar10;
  uint uVar11;
  undefined1 *puVar12;
  
  if (((this->ActiveAttribute).ConstAttributeArray == (TManagedArray<bool> *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x67,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  pTVar4 = (this->ActiveAttribute).ConstAttributeArray;
  if (((param_1 < 0) || (*(int *)&pTVar4->field_0x28 <= param_1)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  uVar11 = 1 << ((byte)param_1 & 0x1f);
  lVar1 = (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4;
  puVar12 = *(undefined1 **)&pTVar4->field_0x20;
  if (*(undefined1 **)&pTVar4->field_0x20 == (undefined1 *)0x0) {
    puVar12 = &pTVar4->field_0x10;
  }
  pFVar5 = this->DynamicCollection;
  uVar3 = *(uint *)(puVar12 + lVar1);
  if (((param_1 < 0) || ((int)pFVar5->_padding_ <= param_1)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  plVar10 = (longlong *)pFVar5->_padding_;
  if ((longlong *)pFVar5->_padding_ == (longlong *)0x0) {
    plVar10 = &pFVar5->_padding_;
  }
  if (((uVar3 & uVar11) != 0) && ((uVar11 & *(uint *)((longlong)plVar10 + lVar1)) == 0)) {
    if (((this->DynamicStateAttribute).ConstAttributeArray == (TManagedArray<unsigned_char> *)0x0)
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                              ,0x67,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    pTVar6 = (this->DynamicStateAttribute).ConstAttributeArray;
    uVar11 = 0;
    if (param_1 < *(int *)&pTVar6->field_0x18) {
      uVar11 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    cVar2 = *(char *)((longlong)param_1 + *(longlong *)&pTVar6->field_0x10);
    if ((cVar2 == '\x01') || (cVar2 == '\x04')) {
      return true;
    }
  }
  return false;
}

// HasChildren @ 143fb4080

bool __thiscall
FGeometryCollectionDynamicStateFacade::HasChildren
          (FGeometryCollectionDynamicStateFacade *this,int param_1)

{
  bool bVar1;
  
  bVar1 = FTransformDynamicCollection::HasChildren
                    ((FTransformDynamicCollection *)this->DynamicCollection,param_1);
  return bVar1;
}

// HasClusterUnionParent @ 143fb43b0

bool __thiscall
FGeometryCollectionDynamicStateFacade::HasClusterUnionParent
          (FGeometryCollectionDynamicStateFacade *this,int param_1)

{
  TManagedArray<unsigned_char> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  if ((this->InternalClusterParentTypeAttribute).ConstAttributeArray ==
      (TManagedArray<unsigned_char> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x67,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pTVar1 = (this->InternalClusterParentTypeAttribute).ConstAttributeArray;
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
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return *(char *)((longlong)param_1 + *(longlong *)&pTVar1->field_0x10) == '\x03';
}

// HasDynamicInternalClusterParent @ 143fb4480

bool __thiscall
FGeometryCollectionDynamicStateFacade::HasDynamicInternalClusterParent
          (FGeometryCollectionDynamicStateFacade *this,int param_1)

{
  TManagedArray<unsigned_char> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  if ((this->InternalClusterParentTypeAttribute).ConstAttributeArray ==
      (TManagedArray<unsigned_char> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x67,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pTVar1 = (this->InternalClusterParentTypeAttribute).ConstAttributeArray;
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
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return *(char *)((longlong)param_1 + *(longlong *)&pTVar1->field_0x10) == '\x02';
}

// HasInternalClusterParent @ 143fb4540

bool __thiscall
FGeometryCollectionDynamicStateFacade::HasInternalClusterParent
          (FGeometryCollectionDynamicStateFacade *this,int param_1)

{
  TManagedArray<unsigned_char> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  if ((this->InternalClusterParentTypeAttribute).ConstAttributeArray ==
      (TManagedArray<unsigned_char> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x67,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pTVar1 = (this->InternalClusterParentTypeAttribute).ConstAttributeArray;
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
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return *(char *)((longlong)param_1 + *(longlong *)&pTVar1->field_0x10) != '\0';
}

// IsActive @ 143fb74f0

bool __thiscall
FGeometryCollectionDynamicStateFacade::IsActive
          (FGeometryCollectionDynamicStateFacade *this,int param_1)

{
  TManagedArray<bool> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  
  if ((this->ActiveAttribute).ConstAttributeArray == (TManagedArray<bool> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x67,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pTVar1 = (this->ActiveAttribute).ConstAttributeArray;
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

// IsDynamicOrSleeping @ 143fb7800

bool __thiscall
FGeometryCollectionDynamicStateFacade::IsDynamicOrSleeping
          (FGeometryCollectionDynamicStateFacade *this,int param_1)

{
  char cVar1;
  TManagedArray<unsigned_char> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  if ((this->DynamicStateAttribute).ConstAttributeArray == (TManagedArray<unsigned_char> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x67,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pTVar2 = (this->DynamicStateAttribute).ConstAttributeArray;
  uVar6 = 0;
  if (param_1 < *(int *)&pTVar2->field_0x18) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  cVar1 = *(char *)((longlong)param_1 + *(longlong *)&pTVar2->field_0x10);
  if ((cVar1 != '\x01') && (cVar1 != '\x04')) {
    return false;
  }
  return true;
}

// IsSleeping @ 143fb79f0

bool __thiscall
FGeometryCollectionDynamicStateFacade::IsSleeping
          (FGeometryCollectionDynamicStateFacade *this,int param_1)

{
  TManagedArray<unsigned_char> *pTVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  if ((this->DynamicStateAttribute).ConstAttributeArray == (TManagedArray<unsigned_char> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x67,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pTVar1 = (this->DynamicStateAttribute).ConstAttributeArray;
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
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return *(char *)((longlong)param_1 + *(longlong *)&pTVar1->field_0x10) == '\x01';
}

// IsValid @ 143fb7d00

bool __thiscall
FGeometryCollectionDynamicStateFacade::IsValid(FGeometryCollectionDynamicStateFacade *this)

{
  if ((((this->ActiveAttribute).ConstAttributeArray != (TManagedArray<bool> *)0x0) &&
      ((this->DynamicStateAttribute).ConstAttributeArray != (TManagedArray<unsigned_char> *)0x0)) &&
     ((this->InternalClusterParentTypeAttribute).ConstAttributeArray !=
      (TManagedArray<unsigned_char> *)0x0)) {
    return true;
  }
  return false;
}

