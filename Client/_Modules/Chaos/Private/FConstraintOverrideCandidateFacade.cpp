// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 7

// FConstraintOverrideCandidateFacade @ 143f88bf0

FConstraintOverrideCandidateFacade * __thiscall
GeometryCollection::Facades::FConstraintOverrideCandidateFacade::FConstraintOverrideCandidateFacade
          (FConstraintOverrideCandidateFacade *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<int> *pTVar3;
  FConstraintOverrideCandidateFacade *pFVar4;
  
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
  (this->BoneIndexAttribute).ConstCollection = param_1;
  (this->BoneIndexAttribute).Collection = param_1;
  (this->BoneIndexAttribute).Name = BoneIndex;
  (this->BoneIndexAttribute).Group = GroupName;
  (this->BoneIndexAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BoneIndexAttribute).DefaultGroupDependency.Number = 0;
  pTVar3 = FManagedArrayCollection::FindAttributeTyped<int>(param_1,BoneIndex,GroupName);
  (this->BoneIndexAttribute).AttributeArray = pTVar3;
  (this->BoneIndexAttribute).ConstAttributeArray = pTVar3;
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionConstraintOverrideFacade.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FConstraintOverrideCandidateFacade *)(*pcVar1)();
      return pFVar4;
    }
  }
  TManagedArrayAccessor<int>::Add
            (&this->TargetIndexAttribute,MakePersistent,FGeometryCollection::VerticesGroup);
  TManagedArrayAccessor<int>::Add
            (&this->BoneIndexAttribute,MakePersistent,FTransformCollection::TransformGroup);
  return this;
}

// FConstraintOverrideCandidateFacade @ 143f88d10

FConstraintOverrideCandidateFacade * __thiscall
GeometryCollection::Facades::FConstraintOverrideCandidateFacade::FConstraintOverrideCandidateFacade
          (FConstraintOverrideCandidateFacade *this,FManagedArrayCollection *param_1)

{
  TManagedArray<int> *pTVar1;
  
  this->ConstCollection = param_1;
  this->Collection = (FManagedArrayCollection *)0x0;
  (this->TargetIndexAttribute).ConstCollection = param_1;
  (this->TargetIndexAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->TargetIndexAttribute).Name = TargetIndex;
  (this->TargetIndexAttribute).Group = GroupName;
  (this->TargetIndexAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TargetIndexAttribute).DefaultGroupDependency.Number = 0;
  (this->TargetIndexAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar1 = FManagedArrayCollection::FindAttributeTyped<int>(param_1,TargetIndex,GroupName);
  (this->TargetIndexAttribute).ConstAttributeArray = pTVar1;
  (this->BoneIndexAttribute).ConstCollection = param_1;
  (this->BoneIndexAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->BoneIndexAttribute).Name = BoneIndex;
  (this->BoneIndexAttribute).Group = GroupName;
  (this->BoneIndexAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BoneIndexAttribute).DefaultGroupDependency.Number = 0;
  (this->BoneIndexAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar1 = FManagedArrayCollection::FindAttributeTyped<int>(param_1,BoneIndex,GroupName);
  (this->BoneIndexAttribute).ConstAttributeArray = pTVar1;
  return this;
}

// Add @ 143f92e50

int __thiscall
GeometryCollection::Facades::FConstraintOverrideCandidateFacade::Add
          (FConstraintOverrideCandidateFacade *this,FConstraintOverridesCandidateData *param_1)

{
  TManagedArray<int> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  
  if ((this->Collection == (FManagedArrayCollection *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionConstraintOverrideFacade.cpp"
                         ,0x3a,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  pTVar1 = (this->TargetIndexAttribute).ConstAttributeArray;
  if ((pTVar1 == (TManagedArray<int> *)0x0) ||
     ((this->BoneIndexAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0)) {
    return -1;
  }
  piVar2 = *(int **)&pTVar1->field_0x10;
  if (piVar2 != piVar2 + *(int *)&pTVar1->field_0x18) {
    piVar8 = piVar2;
    do {
      if (*piVar8 == param_1->VertexIndex) {
        uVar6 = (uint)((longlong)piVar8 - (longlong)piVar2 >> 2);
        if (uVar6 != 0xffffffff) goto LAB_143f92f2d;
        break;
      }
      piVar8 = piVar8 + 1;
    } while (piVar8 != piVar2 + *(int *)&pTVar1->field_0x18);
  }
  if (((this->TargetIndexAttribute).Collection == (FManagedArrayCollection *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x41,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  uVar6 = FManagedArrayCollection::AddElements
                    ((this->TargetIndexAttribute).Collection,1,(this->TargetIndexAttribute).Group);
LAB_143f92f2d:
  iVar5 = param_1->VertexIndex;
  if ((((this->TargetIndexAttribute).AttributeArray == (TManagedArray<int> *)0x0) ||
      ((this->TargetIndexAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  ((this->TargetIndexAttribute).AttributeArray)->field_0x8 = 1;
  pTVar1 = (this->TargetIndexAttribute).AttributeArray;
  uVar7 = 0;
  if ((int)uVar6 < *(int *)&pTVar1->field_0x18) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  *(int *)(*(longlong *)&pTVar1->field_0x10 + (longlong)(int)uVar6 * 4) = iVar5;
  iVar5 = param_1->BoneIndex;
  if ((((this->BoneIndexAttribute).AttributeArray == (TManagedArray<int> *)0x0) ||
      ((this->BoneIndexAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  ((this->BoneIndexAttribute).AttributeArray)->field_0x8 = 1;
  pTVar1 = (this->BoneIndexAttribute).AttributeArray;
  uVar7 = 0;
  if ((int)uVar6 < *(int *)&pTVar1->field_0x18) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  *(int *)(*(longlong *)&pTVar1->field_0x10 + (longlong)(int)uVar6 * 4) = iVar5;
  return uVar6;
}

// Clear @ 143fa4980

void __thiscall
GeometryCollection::Facades::FConstraintOverrideCandidateFacade::Clear
          (FConstraintOverrideCandidateFacade *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionConstraintOverrideFacade.cpp"
                       ,0x4d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (((this->TargetIndexAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0) &&
     ((this->BoneIndexAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)) {
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

// DefineSchema @ 143fa9660

void __thiscall
GeometryCollection::Facades::FConstraintOverrideCandidateFacade::DefineSchema
          (FConstraintOverrideCandidateFacade *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionConstraintOverrideFacade.cpp"
                       ,0x2c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TManagedArrayAccessor<int>::Add
            (&this->TargetIndexAttribute,MakePersistent,FGeometryCollection::VerticesGroup);
  TManagedArrayAccessor<int>::Add
            (&this->BoneIndexAttribute,MakePersistent,FTransformCollection::TransformGroup);
  return;
}

// Get @ 143fae3e0

FConstraintOverridesCandidateData __thiscall
GeometryCollection::Facades::FConstraintOverrideCandidateFacade::Get
          (FConstraintOverrideCandidateFacade *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TManagedArray<int> *pTVar4;
  FConstraintOverridesCandidateData FVar5;
  uint uVar6;
  int in_register_00000014;
  uint in_R8D;
  
  FVar5.BoneIndex = in_register_00000014;
  FVar5.VertexIndex = param_1;
  pTVar4 = (this->TargetIndexAttribute).ConstAttributeArray;
  *(undefined8 *)FVar5 = 0xffffffffffffffff;
  if (((pTVar4 != (TManagedArray<int> *)0x0) &&
      ((this->BoneIndexAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
     (-1 < (int)in_R8D)) {
    iVar3 = (**(code **)(*(longlong *)pTVar4 + 0x60))();
    if ((int)in_R8D < iVar3) {
      pTVar4 = TManagedArrayAccessor<int>::Get(&this->TargetIndexAttribute);
      uVar6 = 0;
      if ((int)in_R8D < *(int *)&pTVar4->field_0x18) {
        uVar6 = ~in_R8D >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          FVar5 = (FConstraintOverridesCandidateData)(*pcVar1)();
          return FVar5;
        }
      }
      *(undefined4 *)FVar5 =
           *(undefined4 *)(*(longlong *)&pTVar4->field_0x10 + (longlong)(int)in_R8D * 4);
    }
    pTVar4 = (this->BoneIndexAttribute).ConstAttributeArray;
    if (pTVar4 == (TManagedArray<int> *)0x0) {
      iVar3 = FManagedArrayCollection::NumElements
                        ((this->BoneIndexAttribute).ConstCollection,(this->BoneIndexAttribute).Group
                        );
    }
    else {
      iVar3 = (**(code **)(*(longlong *)pTVar4 + 0x60))();
    }
    if ((int)in_R8D < iVar3) {
      pTVar4 = TManagedArrayAccessor<int>::Get(&this->BoneIndexAttribute);
      uVar6 = 0;
      if ((int)in_R8D < *(int *)&pTVar4->field_0x18) {
        uVar6 = ~in_R8D >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          FVar5 = (FConstraintOverridesCandidateData)(*pcVar1)();
          return FVar5;
        }
      }
      *(undefined4 *)((longlong)FVar5 + 4) =
           *(undefined4 *)(*(longlong *)&pTVar4->field_0x10 + (longlong)(int)in_R8D * 4);
    }
    return FVar5;
  }
  return FVar5;
}

// IsValid @ 143fb7cc0

bool __thiscall
GeometryCollection::Facades::FConstraintOverrideCandidateFacade::IsValid
          (FConstraintOverrideCandidateFacade *this)

{
  if (((this->TargetIndexAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0) &&
     ((this->BoneIndexAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0)) {
    return true;
  }
  return false;
}

