// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 9

// FConstraintOverrideTargetFacade @ 143f88de0

FConstraintOverrideTargetFacade * __thiscall
GeometryCollection::Facades::FConstraintOverrideTargetFacade::FConstraintOverrideTargetFacade
          (FConstraintOverrideTargetFacade *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<int> *pTVar3;
  TManagedArray<UE::Math::TVector<float>_> *pTVar4;
  FConstraintOverrideTargetFacade *pFVar5;
  
  this->ConstCollection = param_1;
  this->Collection = param_1;
  (this->TargetIndexAttribute).ConstCollection = param_1;
  (this->TargetIndexAttribute).Collection = param_1;
  (this->TargetIndexAttribute).Name = TargetIndex;
  (this->TargetIndexAttribute).Group = GroupName;
  (this->TargetIndexAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TargetIndexAttribute).DefaultGroupDependency.Number = 0;
  pTVar3 = FManagedArrayCollection::FindAttributeTyped<int>(param_1,TargetIndex,GroupName);
  (this->TargetIndexAttribute).AttributeArray = pTVar3;
  (this->TargetIndexAttribute).ConstAttributeArray = pTVar3;
  (this->TargetPositionAttribute).ConstCollection = param_1;
  (this->TargetPositionAttribute).Collection = param_1;
  (this->TargetPositionAttribute).Name = TargetPosition;
  (this->TargetPositionAttribute).Group = GroupName;
  (this->TargetPositionAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TargetPositionAttribute).DefaultGroupDependency.Number = 0;
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector<float>_>
                     (param_1,TargetPosition,GroupName);
  (this->TargetPositionAttribute).AttributeArray = pTVar4;
  (this->TargetPositionAttribute).ConstAttributeArray = pTVar4;
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionConstraintOverrideFacade.cpp"
                       ,0x7d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FConstraintOverrideTargetFacade *)(*pcVar1)();
      return pFVar5;
    }
  }
  TManagedArrayAccessor<int>::Add
            (&this->TargetIndexAttribute,MakePersistent,FGeometryCollection::VerticesGroup);
  TManagedArrayAccessor<UE::Math::TVector<float>_>::Add
            (&this->TargetPositionAttribute,MakePersistent,(FName)0x0);
  return this;
}

// FConstraintOverrideTargetFacade @ 143f88ef0

FConstraintOverrideTargetFacade * __thiscall
GeometryCollection::Facades::FConstraintOverrideTargetFacade::FConstraintOverrideTargetFacade
          (FConstraintOverrideTargetFacade *this,FManagedArrayCollection *param_1)

{
  TManagedArray<UE::Math::TVector<float>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TManagedArray<int> *pTVar4;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar5;
  FConstraintOverrideTargetFacade *pFVar6;
  char *pcVar7;
  FName local_18;
  FName local_10;
  
  this->ConstCollection = param_1;
  this->Collection = (FManagedArrayCollection *)0x0;
  (this->TargetIndexAttribute).ConstCollection = param_1;
  (this->TargetIndexAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->TargetIndexAttribute).Name = TargetIndex;
  (this->TargetIndexAttribute).Group = GroupName;
  (this->TargetIndexAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TargetIndexAttribute).DefaultGroupDependency.Number = 0;
  (this->TargetIndexAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<int>(param_1,TargetIndex,GroupName);
  (this->TargetIndexAttribute).ConstAttributeArray = pTVar4;
  (this->TargetPositionAttribute).ConstCollection = param_1;
  (this->TargetPositionAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->TargetPositionAttribute).Name = TargetPosition;
  (this->TargetPositionAttribute).Group = GroupName;
  (this->TargetPositionAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TargetPositionAttribute).DefaultGroupDependency.Number = 0;
  (this->TargetPositionAttribute).AttributeArray = (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  local_18 = TargetPosition;
  local_10 = GroupName;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_18);
  pcVar7 = &pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar7 = (char *)0x0;
  }
  if ((pcVar7 != (char *)0x0) && (*pcVar7 == '\x01')) {
    pTVar1 = *(TManagedArray<UE::Math::TVector<float>_> **)(pcVar7 + 0x20);
    if (pTVar1 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FConstraintOverrideTargetFacade *)(*pcVar2)();
        return pFVar6;
      }
    }
    (this->TargetPositionAttribute).ConstAttributeArray = pTVar1;
    return this;
  }
  (this->TargetPositionAttribute).ConstAttributeArray =
       (TManagedArray<UE::Math::TVector<float>_> *)0x0;
  return this;
}

// Add @ 143f930b0

int __thiscall
GeometryCollection::Facades::FConstraintOverrideTargetFacade::Add
          (FConstraintOverrideTargetFacade *this,FConstraintOverridesTargetData *param_1)

{
  undefined8 uVar1;
  float fVar2;
  TManagedArray<int> *pTVar3;
  int *piVar4;
  TManagedArray<UE::Math::TVector<float>_> *pTVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  longlong lVar13;
  
  if ((this->Collection == (FManagedArrayCollection *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionConstraintOverrideFacade.cpp"
                         ,0x8b,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    iVar9 = (*pcVar7)();
    return iVar9;
  }
  pTVar3 = (this->TargetIndexAttribute).ConstAttributeArray;
  if ((pTVar3 == (TManagedArray<int> *)0x0) ||
     ((this->TargetPositionAttribute).ConstAttributeArray ==
      (TManagedArray<UE::Math::TVector<float>_> *)0x0)) {
    return -1;
  }
  piVar4 = *(int **)&pTVar3->field_0x10;
  if (piVar4 != piVar4 + *(int *)&pTVar3->field_0x18) {
    piVar12 = piVar4;
    do {
      if (*piVar12 == param_1->VertexIndex) {
        uVar10 = (uint)((longlong)piVar12 - (longlong)piVar4 >> 2);
        if (uVar10 != 0xffffffff) goto LAB_143f9318d;
        break;
      }
      piVar12 = piVar12 + 1;
    } while (piVar12 != piVar4 + *(int *)&pTVar3->field_0x18);
  }
  if (((this->TargetIndexAttribute).Collection == (FManagedArrayCollection *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x41,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    iVar9 = (*pcVar7)();
    return iVar9;
  }
  uVar10 = FManagedArrayCollection::AddElements
                     ((this->TargetIndexAttribute).Collection,1,(this->TargetIndexAttribute).Group);
LAB_143f9318d:
  iVar9 = param_1->VertexIndex;
  if ((((this->TargetIndexAttribute).AttributeArray == (TManagedArray<int> *)0x0) ||
      ((this->TargetIndexAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    iVar9 = (*pcVar7)();
    return iVar9;
  }
  ((this->TargetIndexAttribute).AttributeArray)->field_0x8 = 1;
  pTVar3 = (this->TargetIndexAttribute).AttributeArray;
  uVar11 = 0;
  if ((int)uVar10 < *(int *)&pTVar3->field_0x18) {
    uVar11 = ~uVar10 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    iVar9 = (*pcVar7)();
    return iVar9;
  }
  lVar13 = (longlong)(int)uVar10;
  *(int *)(*(longlong *)&pTVar3->field_0x10 + lVar13 * 4) = iVar9;
  uVar1 = *(undefined8 *)&(param_1->PositionTarget).field0_0x0;
  fVar2 = (param_1->PositionTarget).field0_0x0._s_0.Z;
  if ((((this->TargetPositionAttribute).AttributeArray ==
        (TManagedArray<UE::Math::TVector<float>_> *)0x0) ||
      ((this->TargetPositionAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    iVar9 = (*pcVar7)();
    return iVar9;
  }
  ((this->TargetPositionAttribute).AttributeArray)->field_0x8 = 1;
  pTVar5 = (this->TargetPositionAttribute).AttributeArray;
  uVar11 = 0;
  if ((int)uVar10 < *(int *)&pTVar5->field_0x18) {
    uVar11 = ~uVar10 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    iVar9 = (*pcVar7)();
    return iVar9;
  }
  lVar6 = *(longlong *)&pTVar5->field_0x10;
  *(undefined8 *)(lVar6 + lVar13 * 0xc) = uVar1;
  *(float *)(lVar6 + 8 + lVar13 * 0xc) = fVar2;
  return uVar10;
}

// Clear @ 143fa4a20

void __thiscall
GeometryCollection::Facades::FConstraintOverrideTargetFacade::Clear
          (FConstraintOverrideTargetFacade *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionConstraintOverrideFacade.cpp"
                       ,0x9e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (((this->TargetIndexAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0) &&
     ((this->TargetPositionAttribute).ConstAttributeArray !=
      (TManagedArray<UE::Math::TVector<float>_> *)0x0)) {
    if ((this->TargetIndexAttribute).Collection == (FManagedArrayCollection *)0x0) {
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
    FManagedArrayCollection::EmptyGroup((this->TargetIndexAttribute).Collection,GroupName);
    return;
  }
  return;
}

// DefineSchema @ 143fa96d0

void __thiscall
GeometryCollection::Facades::FConstraintOverrideTargetFacade::DefineSchema
          (FConstraintOverrideTargetFacade *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionConstraintOverrideFacade.cpp"
                       ,0x7d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TManagedArrayAccessor<int>::Add
            (&this->TargetIndexAttribute,MakePersistent,FGeometryCollection::VerticesGroup);
  TManagedArrayAccessor<UE::Math::TVector<float>_>::Add
            (&this->TargetPositionAttribute,MakePersistent,(FName)0x0);
  return;
}

// Get @ 143fae550

FConstraintOverridesTargetData * __thiscall
GeometryCollection::Facades::FConstraintOverrideTargetFacade::Get
          (FConstraintOverrideTargetFacade *this,
          FConstraintOverridesTargetData *__return_storage_ptr__,int param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TManagedArray<int> *pTVar5;
  FConstraintOverridesTargetData *pFVar6;
  TManagedArray<UE::Math::TVector<float>_> *pTVar7;
  uint uVar8;
  longlong lVar9;
  
  lVar9 = (longlong)param_1;
  pTVar5 = (this->TargetIndexAttribute).ConstAttributeArray;
  __return_storage_ptr__->VertexIndex = -1;
  if (((pTVar5 != (TManagedArray<int> *)0x0) &&
      ((this->TargetPositionAttribute).ConstAttributeArray !=
       (TManagedArray<UE::Math::TVector<float>_> *)0x0)) && (-1 < param_1)) {
    iVar4 = (**(code **)(*(longlong *)pTVar5 + 0x60))();
    if (param_1 < iVar4) {
      pTVar5 = TManagedArrayAccessor<int>::Get(&this->TargetIndexAttribute);
      uVar8 = 0;
      if (param_1 < *(int *)&pTVar5->field_0x18) {
        uVar8 = (uint)~param_1 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FConstraintOverridesTargetData *)(*pcVar2)();
          return pFVar6;
        }
      }
      __return_storage_ptr__->VertexIndex = *(int *)(*(longlong *)&pTVar5->field_0x10 + lVar9 * 4);
    }
    pTVar7 = (this->TargetPositionAttribute).ConstAttributeArray;
    if (pTVar7 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      iVar4 = FManagedArrayCollection::NumElements
                        ((this->TargetPositionAttribute).ConstCollection,
                         (this->TargetPositionAttribute).Group);
    }
    else {
      iVar4 = (**(code **)(*(longlong *)pTVar7 + 0x60))();
    }
    if (param_1 < iVar4) {
      pTVar7 = TManagedArrayAccessor<UE::Math::TVector<float>_>::Get(&this->TargetPositionAttribute)
      ;
      uVar8 = 0;
      if (param_1 < *(int *)&pTVar7->field_0x18) {
        uVar8 = (uint)~param_1 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FConstraintOverridesTargetData *)(*pcVar2)();
          return pFVar6;
        }
      }
      fVar1 = *(float *)(*(longlong *)&pTVar7->field_0x10 + 8 + lVar9 * 0xc);
      *(undefined8 *)&(__return_storage_ptr__->PositionTarget).field0_0x0 =
           *(undefined8 *)(*(longlong *)&pTVar7->field_0x10 + lVar9 * 0xc);
      (__return_storage_ptr__->PositionTarget).field0_0x0._s_0.Z = fVar1;
    }
    return __return_storage_ptr__;
  }
  return __return_storage_ptr__;
}

// GetIndex @ 143fb0cb0

int __thiscall
GeometryCollection::Facades::FConstraintOverrideTargetFacade::GetIndex
          (FConstraintOverrideTargetFacade *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TManagedArray<int> *pTVar4;
  uint uVar5;
  
  pTVar4 = (this->TargetIndexAttribute).ConstAttributeArray;
  if (((pTVar4 != (TManagedArray<int> *)0x0) &&
      ((this->TargetPositionAttribute).ConstAttributeArray !=
       (TManagedArray<UE::Math::TVector<float>_> *)0x0)) && (-1 < param_1)) {
    iVar3 = (**(code **)(*(longlong *)pTVar4 + 0x60))();
    if (param_1 < iVar3) {
      pTVar4 = TManagedArrayAccessor<int>::Get(&this->TargetIndexAttribute);
      uVar5 = 0;
      if (param_1 < *(int *)&pTVar4->field_0x18) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar3 = (*pcVar1)();
          return iVar3;
        }
      }
      return *(int *)(*(longlong *)&pTVar4->field_0x10 + (longlong)param_1 * 4);
    }
  }
  return -1;
}

// GetPosition @ 143fb1ae0

TVector<float> * __thiscall
GeometryCollection::Facades::FConstraintOverrideTargetFacade::GetPosition
          (FConstraintOverrideTargetFacade *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TManagedArray<UE::Math::TVector<float>_> *pTVar4;
  TVector<float> *pTVar5;
  uint uVar6;
  
  if ((((this->TargetIndexAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0) &&
      ((this->TargetPositionAttribute).ConstAttributeArray !=
       (TManagedArray<UE::Math::TVector<float>_> *)0x0)) && (-1 < param_1)) {
    pTVar4 = (this->TargetPositionAttribute).ConstAttributeArray;
    if (pTVar4 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
      iVar3 = FManagedArrayCollection::NumElements
                        ((this->TargetPositionAttribute).ConstCollection,
                         (this->TargetPositionAttribute).Group);
    }
    else {
      iVar3 = (**(code **)(*(longlong *)pTVar4 + 0x60))();
    }
    if (param_1 < iVar3) {
      pTVar4 = TManagedArrayAccessor<UE::Math::TVector<float>_>::Get(&this->TargetPositionAttribute)
      ;
      uVar6 = 0;
      if (param_1 < *(int *)&pTVar4->field_0x18) {
        uVar6 = (uint)~param_1 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pTVar5 = (TVector<float> *)(*pcVar1)();
          return pTVar5;
        }
      }
      return (TVector<float> *)(*(longlong *)&pTVar4->field_0x10 + (longlong)param_1 * 0xc);
    }
  }
  return &UE::Math::TVector<float>::ZeroVector;
}

// IsValid @ 143fb7ce0

bool __thiscall
GeometryCollection::Facades::FConstraintOverrideTargetFacade::IsValid
          (FConstraintOverrideTargetFacade *this)

{
  if (((this->TargetIndexAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0) &&
     ((this->TargetPositionAttribute).ConstAttributeArray !=
      (TManagedArray<UE::Math::TVector<float>_> *)0x0)) {
    return true;
  }
  return false;
}

