// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// FCollectionInstancedMeshFacade @ 143f875c0

FCollectionInstancedMeshFacade * __thiscall
GeometryCollection::Facades::FCollectionInstancedMeshFacade::FCollectionInstancedMeshFacade
          (FCollectionInstancedMeshFacade *this,FManagedArrayCollection *param_1)

{
  TManagedArray<int> *pTVar1;
  FName local_res10;
  
  ::FName::FName(&local_res10,"AutoInstanceMeshIndex");
  (this->InstancedMeshIndexAttribute).Name = local_res10;
  (this->InstancedMeshIndexAttribute).ConstCollection = param_1;
  (this->InstancedMeshIndexAttribute).Collection = param_1;
  (this->InstancedMeshIndexAttribute).Group = FTransformCollection::TransformGroup;
  (this->InstancedMeshIndexAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->InstancedMeshIndexAttribute).DefaultGroupDependency.Number = 0;
  pTVar1 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_res10,FTransformCollection::TransformGroup);
  (this->InstancedMeshIndexAttribute).AttributeArray = pTVar1;
  (this->InstancedMeshIndexAttribute).ConstAttributeArray = pTVar1;
  return this;
}

// FCollectionInstancedMeshFacade @ 143f87640

FCollectionInstancedMeshFacade * __thiscall
GeometryCollection::Facades::FCollectionInstancedMeshFacade::FCollectionInstancedMeshFacade
          (FCollectionInstancedMeshFacade *this,FManagedArrayCollection *param_1)

{
  TManagedArray<int> *pTVar1;
  FName local_res10;
  
  ::FName::FName(&local_res10,"AutoInstanceMeshIndex");
  (this->InstancedMeshIndexAttribute).Name = local_res10;
  (this->InstancedMeshIndexAttribute).ConstCollection = param_1;
  (this->InstancedMeshIndexAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->InstancedMeshIndexAttribute).Group = FTransformCollection::TransformGroup;
  (this->InstancedMeshIndexAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->InstancedMeshIndexAttribute).DefaultGroupDependency.Number = 0;
  (this->InstancedMeshIndexAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar1 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,local_res10,FTransformCollection::TransformGroup);
  (this->InstancedMeshIndexAttribute).ConstAttributeArray = pTVar1;
  return this;
}

// DefineSchema @ 143fa9270

void __thiscall
GeometryCollection::Facades::FCollectionInstancedMeshFacade::DefineSchema
          (FCollectionInstancedMeshFacade *this)

{
  code *pcVar1;
  bool bVar2;
  int local_res8 [8];
  
  local_res8[0] = -1;
  if ((this->InstancedMeshIndexAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0xa1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  bVar2 = FManagedArrayCollection::HasAttribute
                    ((this->InstancedMeshIndexAttribute).Collection,
                     (this->InstancedMeshIndexAttribute).Name,
                     (this->InstancedMeshIndexAttribute).Group);
  if (!bVar2) {
    TManagedArrayAccessor<int>::Add(&this->InstancedMeshIndexAttribute,MakePersistent,(FName)0x0);
    TManagedArrayBase<int>::Fill
              ((TManagedArrayBase<int> *)(this->InstancedMeshIndexAttribute).AttributeArray,
               local_res8);
  }
  return;
}

// GetIndex @ 143fb0c10

int __thiscall
GeometryCollection::Facades::FCollectionInstancedMeshFacade::GetIndex
          (FCollectionInstancedMeshFacade *this,int param_1)

{
  TManagedArray<int> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  if ((this->InstancedMeshIndexAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x67,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  pTVar1 = (this->InstancedMeshIndexAttribute).ConstAttributeArray;
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
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  return *(int *)(*(longlong *)&pTVar1->field_0x10 + (longlong)param_1 * 4);
}

// GetNumIndices @ 143fb1600

int __thiscall
GeometryCollection::Facades::FCollectionInstancedMeshFacade::GetNumIndices
          (FCollectionInstancedMeshFacade *this)

{
  TManagedArray<int> *pTVar1;
  int iVar2;
  
  pTVar1 = (this->InstancedMeshIndexAttribute).ConstAttributeArray;
  if (pTVar1 != (TManagedArray<int> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143fb160c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
    return iVar2;
  }
  return 0;
}

// IsConst @ 143fb77e0

bool __thiscall
GeometryCollection::Facades::FCollectionInstancedMeshFacade::IsConst
          (FCollectionInstancedMeshFacade *this)

{
  return (this->InstancedMeshIndexAttribute).Collection == (FManagedArrayCollection *)0x0;
}

// IsValid @ 143fb7ba0

bool __thiscall
GeometryCollection::Facades::FCollectionInstancedMeshFacade::IsValid
          (FCollectionInstancedMeshFacade *this)

{
  return (this->InstancedMeshIndexAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0;
}

// SetIndex @ 143fc8730

void __thiscall
GeometryCollection::Facades::FCollectionInstancedMeshFacade::SetIndex
          (FCollectionInstancedMeshFacade *this,int param_1,int param_2)

{
  TManagedArray<int> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  if ((this->InstancedMeshIndexAttribute).Collection == (FManagedArrayCollection *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionInstancedMeshFacade.cpp"
                       ,0x2d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (((this->InstancedMeshIndexAttribute).AttributeArray == (TManagedArray<int> *)0x0) ||
     ((this->InstancedMeshIndexAttribute).Collection == (FManagedArrayCollection *)0x0)) {
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
  ((this->InstancedMeshIndexAttribute).AttributeArray)->field_0x8 = 1;
  pTVar1 = (this->InstancedMeshIndexAttribute).AttributeArray;
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
  *(int *)(*(longlong *)&pTVar1->field_0x10 + (longlong)param_1 * 4) = param_2;
  return;
}

