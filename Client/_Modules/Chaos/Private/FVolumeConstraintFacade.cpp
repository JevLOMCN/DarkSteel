// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 9

// FVolumeConstraintFacade @ 143fd6f60

FVolumeConstraintFacade * __thiscall
GeometryCollection::Facades::FVolumeConstraintFacade::FVolumeConstraintFacade
          (FVolumeConstraintFacade *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FVolumeConstraintFacade *pFVar4;
  FValueType *pFVar5;
  FValueType *pFVar6;
  FValueType *pFVar7;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  
  this->Collection = param_1;
  this->ConstCollection = param_1;
  (this->VolumeIndexAttribute).ConstCollection = param_1;
  (this->VolumeIndexAttribute).Collection = param_1;
  (this->VolumeIndexAttribute).Name = VolumeIndex;
  (this->VolumeIndexAttribute).Group = GroupName;
  (this->VolumeIndexAttribute).DefaultGroupDependency = FGeometryCollection::VerticesGroup;
  local_58 = VolumeIndex;
  local_50 = GroupName;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_58);
  pFVar7 = (FValueType *)0x0;
  pFVar6 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar6 = pFVar7;
  }
  pFVar5 = pFVar7;
  if ((pFVar6 != (FValueType *)0x0) && (pFVar6->ArrayType == FIntVector4Type)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar6);
    pFVar5 = (FValueType *)pFVar6->ManagedArray;
    if ((pFVar5 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVolumeConstraintFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->VolumeIndexAttribute).AttributeArray = (TManagedArray<UE::Math::TIntVector4<int>_> *)pFVar5
  ;
  (this->VolumeIndexAttribute).ConstAttributeArray =
       (TManagedArray<UE::Math::TIntVector4<int>_> *)pFVar5;
  (this->StiffnessAttribute).ConstCollection = param_1;
  (this->StiffnessAttribute).Collection = param_1;
  (this->StiffnessAttribute).Name = Stiffness;
  (this->StiffnessAttribute).Group = GroupName;
  (this->StiffnessAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->StiffnessAttribute).DefaultGroupDependency.Number = 0;
  local_48 = Stiffness;
  local_40 = GroupName;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_48);
  pFVar6 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar6 = pFVar7;
  }
  if ((pFVar6 != (FValueType *)0x0) && (pFVar6->ArrayType == FFloatType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar6);
    pFVar7 = (FValueType *)pFVar6->ManagedArray;
    if ((pFVar7 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVolumeConstraintFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar7->GroupIndexDependency).Number = 1;
  }
  (this->StiffnessAttribute).AttributeArray = (TManagedArray<float> *)pFVar7;
  (this->StiffnessAttribute).ConstAttributeArray = (TManagedArray<float> *)pFVar7;
  if ((this->Collection == (FManagedArrayCollection *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionVolumeConstraintFacade.cpp"
                         ,0x27,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FVolumeConstraintFacade *)(*pcVar1)();
    return pFVar4;
  }
  TManagedArrayAccessor<UE::Math::TIntVector4<int>_>::Add
            (&this->VolumeIndexAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<float>::Add(&this->StiffnessAttribute,MakePersistent,(FName)0x0);
  return this;
}

// FVolumeConstraintFacade @ 143fd7150

FVolumeConstraintFacade * __thiscall
GeometryCollection::Facades::FVolumeConstraintFacade::FVolumeConstraintFacade
          (FVolumeConstraintFacade *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FVolumeConstraintFacade *pFVar4;
  TManagedArray<float> *pTVar5;
  char *pcVar6;
  TManagedArray<UE::Math::TIntVector4<int>_> *pTVar7;
  FName local_18;
  FName local_10;
  
  this->ConstCollection = param_1;
  this->Collection = (FManagedArrayCollection *)0x0;
  (this->VolumeIndexAttribute).ConstCollection = param_1;
  (this->VolumeIndexAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->VolumeIndexAttribute).Name = VolumeIndex;
  (this->VolumeIndexAttribute).Group = GroupName;
  (this->VolumeIndexAttribute).DefaultGroupDependency = FGeometryCollection::VerticesGroup;
  (this->VolumeIndexAttribute).AttributeArray = (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0;
  local_18 = VolumeIndex;
  local_10 = GroupName;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_18);
  pcVar6 = &pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar6 = (char *)0x0;
  }
  if ((pcVar6 == (char *)0x0) || (*pcVar6 != '!')) {
    pTVar7 = (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0;
  }
  else {
    pTVar7 = *(TManagedArray<UE::Math::TIntVector4<int>_> **)(pcVar6 + 0x20);
    if (pTVar7 == (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FVolumeConstraintFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  (this->VolumeIndexAttribute).ConstAttributeArray = pTVar7;
  (this->StiffnessAttribute).ConstCollection = param_1;
  (this->StiffnessAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->StiffnessAttribute).Name = Stiffness;
  (this->StiffnessAttribute).Group = GroupName;
  (this->StiffnessAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->StiffnessAttribute).DefaultGroupDependency.Number = 0;
  (this->StiffnessAttribute).AttributeArray = (TManagedArray<float> *)0x0;
  pTVar5 = FManagedArrayCollection::FindAttributeTyped<float>(param_1,Stiffness,GroupName);
  (this->StiffnessAttribute).ConstAttributeArray = pTVar5;
  return this;
}

// AddVolumeConstraint @ 143fdb3a0

int __thiscall
GeometryCollection::Facades::FVolumeConstraintFacade::AddVolumeConstraint
          (FVolumeConstraintFacade *this,TIntVector4<int> *param_1,float param_2)

{
  undefined8 *puVar1;
  TManagedArray<UE::Math::TIntVector4<int>_> *pTVar2;
  TManagedArray<float> *pTVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionVolumeConstraintFacade.cpp"
                       ,0x2f,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      iVar8 = (*pcVar4)();
      return iVar8;
    }
  }
  if (((this->VolumeIndexAttribute).ConstAttributeArray !=
       (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0) &&
     ((this->StiffnessAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0)) {
    if ((this->VolumeIndexAttribute).Collection == (FManagedArrayCollection *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x41,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        iVar8 = (*pcVar4)();
        return iVar8;
      }
    }
    uVar9 = FManagedArrayCollection::AddElements
                      ((this->VolumeIndexAttribute).Collection,1,(this->VolumeIndexAttribute).Group)
    ;
    uVar5 = *(undefined8 *)&param_1->field0_0x0;
    uVar6 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    if (((this->VolumeIndexAttribute).AttributeArray ==
         (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0) ||
       ((this->VolumeIndexAttribute).Collection == (FManagedArrayCollection *)0x0)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        iVar8 = (*pcVar4)();
        return iVar8;
      }
    }
    ((this->VolumeIndexAttribute).AttributeArray)->field_0x8 = 1;
    pTVar2 = (this->VolumeIndexAttribute).AttributeArray;
    uVar10 = 0;
    if ((int)uVar9 < *(int *)&pTVar2->field_0x18) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        iVar8 = (*pcVar4)();
        return iVar8;
      }
    }
    puVar1 = (undefined8 *)(*(longlong *)&pTVar2->field_0x10 + (longlong)(int)uVar9 * 0x10);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    if (((this->StiffnessAttribute).AttributeArray == (TManagedArray<float> *)0x0) ||
       ((this->StiffnessAttribute).Collection == (FManagedArrayCollection *)0x0)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        iVar8 = (*pcVar4)();
        return iVar8;
      }
    }
    ((this->StiffnessAttribute).AttributeArray)->field_0x8 = 1;
    pTVar3 = (this->StiffnessAttribute).AttributeArray;
    uVar10 = 0;
    if ((int)uVar9 < *(int *)&pTVar3->field_0x18) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        iVar8 = (*pcVar4)();
        return iVar8;
      }
    }
    *(float *)(*(longlong *)&pTVar3->field_0x10 + (longlong)(int)uVar9 * 4) = param_2;
    return uVar9;
  }
  return -1;
}

// DefineSchema @ 143fe85b0

void __thiscall
GeometryCollection::Facades::FVolumeConstraintFacade::DefineSchema(FVolumeConstraintFacade *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionVolumeConstraintFacade.cpp"
                       ,0x27,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TManagedArrayAccessor<UE::Math::TIntVector4<int>_>::Add
            (&this->VolumeIndexAttribute,MakePersistent,(FName)0x0);
  TManagedArrayAccessor<float>::Add(&this->StiffnessAttribute,MakePersistent,(FName)0x0);
  return;
}

// GetStiffness @ 143fea7d0

float __thiscall
GeometryCollection::Facades::FVolumeConstraintFacade::GetStiffness
          (FVolumeConstraintFacade *this,int param_1)

{
  TManagedArray<float> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  
  if ((((this->VolumeIndexAttribute).ConstAttributeArray !=
        (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0) &&
      ((this->StiffnessAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0)) &&
     (-1 < param_1)) {
    iVar4 = (**(code **)(*(longlong *)(this->StiffnessAttribute).ConstAttributeArray + 0x60))();
    if (param_1 < iVar4) {
      if ((this->StiffnessAttribute).ConstAttributeArray == (TManagedArray<float> *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x60,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          fVar6 = (float)(*pcVar2)();
          return fVar6;
        }
      }
      pTVar1 = (this->StiffnessAttribute).ConstAttributeArray;
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
          fVar6 = (float)(*pcVar2)();
          return fVar6;
        }
      }
      return *(float *)(*(longlong *)&pTVar1->field_0x10 + (longlong)param_1 * 4);
    }
  }
  return 0.0;
}

// GetVolumeIndex @ 143feb4e0

TIntVector4<int> * __thiscall
GeometryCollection::Facades::FVolumeConstraintFacade::GetVolumeIndex
          (FVolumeConstraintFacade *this,TIntVector4<int> *__return_storage_ptr__,int param_1)

{
  TManagedArray<UE::Math::TIntVector4<int>_> *pTVar1;
  undefined8 uVar2;
  int iVar3;
  TIntVector4<int> *pTVar4;
  
  pTVar1 = (this->VolumeIndexAttribute).ConstAttributeArray;
  if (((pTVar1 != (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0) &&
      ((this->StiffnessAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0)) &&
     (-1 < param_1)) {
    iVar3 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    if (param_1 < iVar3) {
      pTVar4 = TManagedArrayAccessor<UE::Math::TIntVector4<int>_>::operator[]
                         (&this->VolumeIndexAttribute,param_1);
      uVar2 = *(undefined8 *)((longlong)&pTVar4->field0_0x0 + 8);
      *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&pTVar4->field0_0x0;
      *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar2;
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0xffffffffffffffff;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0xffffffffffffffff;
  return __return_storage_ptr__;
}

// IsValid @ 143fefe80

bool __thiscall
GeometryCollection::Facades::FVolumeConstraintFacade::IsValid(FVolumeConstraintFacade *this)

{
  if (((this->VolumeIndexAttribute).ConstAttributeArray !=
       (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0) &&
     ((this->StiffnessAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0)) {
    return true;
  }
  return false;
}

// RemoveInvalidVolumeConstraint @ 143ff7390

int __thiscall
GeometryCollection::Facades::FVolumeConstraintFacade::RemoveInvalidVolumeConstraint
          (FVolumeConstraintFacade *this)

{
  FManagedArrayCollection *this_00;
  TManagedArray<UE::Math::TIntVector4<int>_> *pTVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  FName FVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  uint local_48 [2];
  ForAnyElementType local_40;
  uint local_38;
  uint local_34 [3];
  
  if ((this->Collection == (FManagedArrayCollection *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionVolumeConstraintFacade.cpp"
                         ,0x4e,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38 = 0;
  local_34[0] = 0;
  uVar9 = 0;
  if (((this->VolumeIndexAttribute).ConstAttributeArray !=
       (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0) &&
     (uVar9 = 0, (this->StiffnessAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0)) {
    this_00 = this->Collection;
    FVar8 = FManagedArrayCollection::GetDependency
                      ((this->VolumeIndexAttribute).ConstCollection,(FName)local_res8,
                       (this->VolumeIndexAttribute).Name);
    iVar5 = FManagedArrayCollection::NumElements(this_00,*(FName *)FVar8);
    local_48[0] = 0;
LAB_143ff7440:
    do {
      pTVar1 = (this->VolumeIndexAttribute).ConstAttributeArray;
      if (pTVar1 == (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0) {
        iVar6 = FManagedArrayCollection::NumElements
                          ((this->VolumeIndexAttribute).ConstCollection,
                           (this->VolumeIndexAttribute).Group);
      }
      else {
        iVar6 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
      }
      uVar9 = 0;
      if (iVar6 <= (int)local_48[0]) {
        (**(code **)(this->Collection->_padding_ + 0x28))
                  (this->Collection,&GroupName,&local_40,0x101);
        uVar9 = (ulonglong)local_38;
        break;
      }
      do {
        uVar3 = local_48[0];
        lVar10 = (longlong)(int)local_48[0];
        if (((this->VolumeIndexAttribute).ConstAttributeArray ==
             (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                               ,0x60,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        pTVar1 = (this->VolumeIndexAttribute).ConstAttributeArray;
        uVar7 = 0;
        if ((int)uVar3 < *(int *)&pTVar1->field_0x18) {
          uVar7 = ~uVar3 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        uVar3 = local_48[0];
        if (*(int *)(*(longlong *)&pTVar1->field_0x10 + (uVar9 + lVar10 * 4) * 4) < 0) {
LAB_143ff759b:
          if (((local_40.Data <= (FScriptContainerElement *)local_48) &&
              ((FScriptContainerElement *)local_48 < local_40.Data + (longlong)(int)local_34[0] * 4)
              ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar4)) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
          if (local_38 == local_34[0]) {
            local_38 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_40,(int *)local_34);
          }
          *(uint *)(local_40.Data + (longlong)(int)local_38 * 4) = local_48[0];
          local_48[0] = local_48[0] + 1;
          local_38 = local_38 + 1;
          goto LAB_143ff7440;
        }
        lVar10 = (longlong)(int)local_48[0];
        if (((this->VolumeIndexAttribute).ConstAttributeArray ==
             (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                               ,0x60,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        pTVar1 = (this->VolumeIndexAttribute).ConstAttributeArray;
        uVar7 = 0;
        if ((int)uVar3 < *(int *)&pTVar1->field_0x18) {
          uVar7 = ~uVar3 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        if (iVar5 < *(int *)(*(longlong *)&pTVar1->field_0x10 + (uVar9 + lVar10 * 4) * 4))
        goto LAB_143ff759b;
        uVar9 = uVar9 + 1;
      } while ((longlong)uVar9 < 4);
      local_48[0] = local_48[0] + 1;
    } while( true );
  }
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
  return (int)uVar9;
}

// RemoveVolumeConstraintBetween @ 143ff77d0

int __thiscall
GeometryCollection::Facades::FVolumeConstraintFacade::RemoveVolumeConstraintBetween
          (FVolumeConstraintFacade *this,TFunctionRef<bool___cdecl(int)> *param_1,
          TFunctionRef<bool___cdecl(int)> *param_2)

{
  undefined4 uVar1;
  TManagedArray<UE::Math::TIntVector4<int>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  undefined4 local_res8 [2];
  TFunctionRef<bool___cdecl(int)> *local_res10;
  undefined4 local_res20 [2];
  uint local_58 [2];
  ForAnyElementType local_50;
  int local_48;
  int local_44 [3];
  
  local_res10 = param_1;
  if ((this->Collection == (FManagedArrayCollection *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionVolumeConstraintFacade.cpp"
                         ,0x65,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    iVar10 = (*pcVar3)();
    return iVar10;
  }
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = 0;
  local_44[0] = 0;
  if (((this->VolumeIndexAttribute).ConstAttributeArray !=
       (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0) &&
     ((this->StiffnessAttribute).ConstAttributeArray != (TManagedArray<float> *)0x0)) {
    local_58[0] = 0;
    iVar10 = FManagedArrayCollection::NumElements(this->Collection,GroupName);
    if ((int)local_58[0] < iVar10) {
      do {
        uVar5 = local_58[0];
        if (((this->VolumeIndexAttribute).ConstAttributeArray ==
             (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                               ,0x60,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          iVar10 = (*pcVar3)();
          return iVar10;
        }
        pTVar2 = (this->VolumeIndexAttribute).ConstAttributeArray;
        uVar11 = 0;
        if ((int)uVar5 < *(int *)&pTVar2->field_0x18) {
          uVar11 = ~uVar5 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          iVar10 = (*pcVar3)();
          return iVar10;
        }
        uVar1 = *(undefined4 *)(*(longlong *)&pTVar2->field_0x10 + (longlong)(int)uVar5 * 0x10);
        local_res8[0] = uVar1;
        cVar7 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_res8);
        local_res20[0] = uVar1;
        cVar8 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_res20);
        uVar5 = local_58[0];
        lVar12 = (longlong)(int)local_58[0];
        if (((this->VolumeIndexAttribute).ConstAttributeArray ==
             (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                               ,0x60,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          iVar10 = (*pcVar3)();
          return iVar10;
        }
        pTVar2 = (this->VolumeIndexAttribute).ConstAttributeArray;
        uVar11 = 0;
        if ((int)uVar5 < *(int *)&pTVar2->field_0x18) {
          uVar11 = ~uVar5 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          iVar10 = (*pcVar3)();
          return iVar10;
        }
        uVar1 = *(undefined4 *)(*(longlong *)&pTVar2->field_0x10 + 4 + lVar12 * 0x10);
        if ((cVar7 == '\0') &&
           (local_res8[0] = uVar1,
           cVar7 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_res8),
           cVar7 == '\0')) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if ((cVar8 == '\0') &&
           (local_res20[0] = uVar1,
           cVar7 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_res20),
           cVar7 == '\0')) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        uVar5 = local_58[0];
        lVar12 = (longlong)(int)local_58[0];
        if (((this->VolumeIndexAttribute).ConstAttributeArray ==
             (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                               ,0x60,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          iVar10 = (*pcVar3)();
          return iVar10;
        }
        pTVar2 = (this->VolumeIndexAttribute).ConstAttributeArray;
        uVar11 = 0;
        if ((int)uVar5 < *(int *)&pTVar2->field_0x18) {
          uVar11 = ~uVar5 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          iVar10 = (*pcVar3)();
          return iVar10;
        }
        uVar1 = *(undefined4 *)(*(longlong *)&pTVar2->field_0x10 + 8 + lVar12 * 0x10);
        if (bVar6) {
LAB_143ff7aa7:
          bVar6 = true;
        }
        else {
          local_res8[0] = uVar1;
          cVar7 = (**(code **)local_res10)(*(undefined8 *)&local_res10->field_0x8,local_res8);
          bVar6 = false;
          if (cVar7 != '\0') goto LAB_143ff7aa7;
        }
        if ((bVar4) ||
           (local_res20[0] = uVar1,
           cVar7 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_res20),
           cVar7 != '\0')) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        uVar5 = local_58[0];
        lVar12 = (longlong)(int)local_58[0];
        if (((this->VolumeIndexAttribute).ConstAttributeArray ==
             (TManagedArray<UE::Math::TIntVector4<int>_> *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                               ,0x60,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          iVar10 = (*pcVar3)();
          return iVar10;
        }
        pTVar2 = (this->VolumeIndexAttribute).ConstAttributeArray;
        uVar11 = 0;
        if ((int)uVar5 < *(int *)&pTVar2->field_0x18) {
          uVar11 = ~uVar5 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          iVar10 = (*pcVar3)();
          return iVar10;
        }
        param_1 = local_res10;
        uVar1 = *(undefined4 *)(*(longlong *)&pTVar2->field_0x10 + 0xc + lVar12 * 0x10);
        if ((bVar6) ||
           (local_res8[0] = uVar1,
           cVar7 = (**(code **)local_res10)(*(undefined8 *)&local_res10->field_0x8,local_res8),
           cVar7 != '\0')) {
          bVar6 = true;
        }
        else {
          bVar6 = false;
        }
        if (bVar4) {
LAB_143ff7b92:
          bVar4 = true;
        }
        else {
          local_res20[0] = uVar1;
          cVar7 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_res20);
          bVar4 = false;
          if (cVar7 != '\0') goto LAB_143ff7b92;
        }
        if ((bVar6) && (bVar4)) {
          if ((local_50.Data <= (FScriptContainerElement *)local_58) &&
             (((FScriptContainerElement *)local_58 < local_50.Data + (longlong)local_44[0] * 4 &&
              (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)))) {
            pcVar3 = (code *)swi(3);
            iVar10 = (*pcVar3)();
            return iVar10;
          }
          if (local_48 == local_44[0]) {
            local_48 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_50,local_44);
          }
          *(uint *)(local_50.Data + (longlong)local_48 * 4) = local_58[0];
          local_48 = local_48 + 1;
        }
        local_58[0] = local_58[0] + 1;
        iVar10 = FManagedArrayCollection::NumElements(this->Collection,GroupName);
      } while ((int)local_58[0] < iVar10);
    }
    (**(code **)(this->Collection->_padding_ + 0x28))(this->Collection,&GroupName,&local_50,0x101);
  }
  iVar10 = local_48;
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  return iVar10;
}

