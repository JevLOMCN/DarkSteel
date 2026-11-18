// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 24

// FCollectionTransformFacade @ 143fd3e50

FCollectionTransformFacade * __thiscall
GeometryCollection::Facades::FCollectionTransformFacade::FCollectionTransformFacade
          (FCollectionTransformFacade *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar3;
  FCollectionTransformFacade *pFVar4;
  FValueType *pFVar5;
  FValueType *pFVar6;
  FValueType *pFVar7;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  
  this->ConstCollection = param_1;
  pFVar5 = (FValueType *)0x0;
  this->Collection = param_1;
  (this->ParentAttribute).ConstCollection = param_1;
  (this->ParentAttribute).Collection = param_1;
  (this->ParentAttribute).Name = FTransformCollection::ParentAttribute;
  (this->ParentAttribute).Group = FTransformCollection::TransformGroup;
  (this->ParentAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->ParentAttribute).DefaultGroupDependency.Number = 0;
  local_70 = FTransformCollection::ParentAttribute;
  local_68 = FTransformCollection::TransformGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_70);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar5;
  }
  pFVar6 = pFVar5;
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FInt32Type)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar6 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar6 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FCollectionTransformFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->ParentAttribute).AttributeArray = (TManagedArray<int> *)pFVar6;
  (this->ParentAttribute).ConstAttributeArray = (TManagedArray<int> *)pFVar6;
  (this->ChildrenAttribute).ConstCollection = param_1;
  (this->ChildrenAttribute).Collection = param_1;
  (this->ChildrenAttribute).Name = FTransformCollection::ChildrenAttribute;
  (this->ChildrenAttribute).Group = FTransformCollection::TransformGroup;
  (this->ChildrenAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->ChildrenAttribute).DefaultGroupDependency.Number = 0;
  local_60 = FTransformCollection::ChildrenAttribute;
  local_58 = FTransformCollection::TransformGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_60);
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
      pFVar4 = (FCollectionTransformFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->ChildrenAttribute).AttributeArray =
       (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)pFVar6;
  (this->ChildrenAttribute).ConstAttributeArray =
       (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)pFVar6;
  (this->TransformAttribute).ConstCollection = param_1;
  (this->TransformAttribute).Collection = param_1;
  (this->TransformAttribute).Name = FTransformCollection::TransformAttribute;
  (this->TransformAttribute).Group = FTransformCollection::TransformGroup;
  (this->TransformAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TransformAttribute).DefaultGroupDependency.Number = 0;
  local_50 = FTransformCollection::TransformAttribute;
  local_48 = FTransformCollection::TransformGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_50);
  pFVar7 = (FValueType *)&pTVar3->field_0x10;
  if (pTVar3 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pFVar7 = pFVar5;
  }
  pFVar6 = pFVar5;
  if ((pFVar7 != (FValueType *)0x0) && (pFVar7->ArrayType == FTransform3fType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(pFVar7);
    pFVar6 = (FValueType *)pFVar7->ManagedArray;
    if ((pFVar6 == (FValueType *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedManagedArray != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                           ,0x319,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FCollectionTransformFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->TransformAttribute).AttributeArray = (TManagedArray<UE::Math::TTransform<float>_> *)pFVar6;
  (this->TransformAttribute).ConstAttributeArray =
       (TManagedArray<UE::Math::TTransform<float>_> *)pFVar6;
  ::FName::FName(&local_78,"BoneName");
  (this->BoneNameAttribute).Name = local_78;
  (this->BoneNameAttribute).ConstCollection = param_1;
  (this->BoneNameAttribute).Collection = param_1;
  (this->BoneNameAttribute).Group = FTransformCollection::TransformGroup;
  (this->BoneNameAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BoneNameAttribute).DefaultGroupDependency.Number = 0;
  local_40 = local_78;
  local_38 = FTransformCollection::TransformGroup;
  pTVar3 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_40);
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
      pFVar4 = (FCollectionTransformFacade *)(*pcVar1)();
      return pFVar4;
    }
    *(undefined1 *)&(pFVar5->GroupIndexDependency).Number = 1;
  }
  (this->BoneNameAttribute).AttributeArray = (TManagedArray<FString> *)pFVar5;
  (this->BoneNameAttribute).ConstAttributeArray = (TManagedArray<FString> *)pFVar5;
  return this;
}

// FCollectionTransformFacade @ 143fd4170

FCollectionTransformFacade * __thiscall
GeometryCollection::Facades::FCollectionTransformFacade::FCollectionTransformFacade
          (FCollectionTransformFacade *this,FManagedArrayCollection *param_1)

{
  TManagedArray<FString> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TManagedArray<int> *pTVar4;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar5;
  FCollectionTransformFacade *pFVar6;
  char *pcVar7;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar8;
  TManagedArray<UE::Math::TTransform<float>_> *pTVar9;
  char *pcVar10;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  
  this->ConstCollection = param_1;
  pcVar10 = (char *)0x0;
  this->Collection = (FManagedArrayCollection *)0x0;
  (this->ParentAttribute).ConstCollection = param_1;
  (this->ParentAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->ParentAttribute).Name = FTransformCollection::ParentAttribute;
  (this->ParentAttribute).Group = FTransformCollection::TransformGroup;
  (this->ParentAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->ParentAttribute).DefaultGroupDependency.Number = 0;
  (this->ParentAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar4 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,FTransformCollection::ParentAttribute,
                      FTransformCollection::TransformGroup);
  (this->ParentAttribute).ConstAttributeArray = pTVar4;
  (this->ChildrenAttribute).ConstCollection = param_1;
  (this->ChildrenAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->ChildrenAttribute).Name = FTransformCollection::ChildrenAttribute;
  (this->ChildrenAttribute).Group = FTransformCollection::TransformGroup;
  (this->ChildrenAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->ChildrenAttribute).DefaultGroupDependency.Number = 0;
  (this->ChildrenAttribute).AttributeArray =
       (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0;
  local_60 = FTransformCollection::ChildrenAttribute;
  local_58 = FTransformCollection::TransformGroup;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_60);
  pcVar7 = &pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar7 = pcVar10;
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
        pFVar6 = (FCollectionTransformFacade *)(*pcVar2)();
        return pFVar6;
      }
    }
  }
  (this->ChildrenAttribute).ConstAttributeArray = pTVar8;
  (this->TransformAttribute).ConstCollection = param_1;
  (this->TransformAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->TransformAttribute).Name = FTransformCollection::TransformAttribute;
  (this->TransformAttribute).Group = FTransformCollection::TransformGroup;
  (this->TransformAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->TransformAttribute).DefaultGroupDependency.Number = 0;
  (this->TransformAttribute).AttributeArray = (TManagedArray<UE::Math::TTransform<float>_> *)0x0;
  local_50 = FTransformCollection::TransformAttribute;
  local_48 = FTransformCollection::TransformGroup;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_50);
  pcVar7 = &pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar7 = pcVar10;
  }
  if ((pcVar7 == (char *)0x0) || (*pcVar7 != ',')) {
    pTVar9 = (TManagedArray<UE::Math::TTransform<float>_> *)0x0;
  }
  else {
    pTVar9 = *(TManagedArray<UE::Math::TTransform<float>_> **)(pcVar7 + 0x20);
    if (pTVar9 == (TManagedArray<UE::Math::TTransform<float>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FCollectionTransformFacade *)(*pcVar2)();
        return pFVar6;
      }
    }
  }
  (this->TransformAttribute).ConstAttributeArray = pTVar9;
  ::FName::FName(&local_68,"BoneName");
  (this->BoneNameAttribute).Name = local_68;
  (this->BoneNameAttribute).ConstCollection = param_1;
  (this->BoneNameAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->BoneNameAttribute).Group = FTransformCollection::TransformGroup;
  (this->BoneNameAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->BoneNameAttribute).DefaultGroupDependency.Number = 0;
  (this->BoneNameAttribute).AttributeArray = (TManagedArray<FString> *)0x0;
  local_40 = local_68;
  local_38 = FTransformCollection::TransformGroup;
  pTVar5 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_40);
  pcVar7 = &pTVar5->field_0x10;
  if (pTVar5 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    pcVar7 = pcVar10;
  }
  if ((pcVar7 != (char *)0x0) && (*pcVar7 == '\b')) {
    pTVar1 = *(TManagedArray<FString> **)(pcVar7 + 0x20);
    if (pTVar1 == (TManagedArray<FString> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x306,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FCollectionTransformFacade *)(*pcVar2)();
        return pFVar6;
      }
    }
    (this->BoneNameAttribute).ConstAttributeArray = pTVar1;
    return this;
  }
  (this->BoneNameAttribute).ConstAttributeArray = (TManagedArray<FString> *)0x0;
  return this;
}

// BoneName @ 143fde450

FString * __thiscall
GeometryCollection::Facades::FCollectionTransformFacade::BoneName
          (FCollectionTransformFacade *this,FString *__return_storage_ptr__,int param_1)

{
  int iVar1;
  FString *pFVar2;
  
  if (((this->BoneNameAttribute).ConstAttributeArray != (TManagedArray<FString> *)0x0) &&
     (-1 < param_1)) {
    iVar1 = (**(code **)(*(longlong *)(this->BoneNameAttribute).ConstAttributeArray + 0x60))();
    if (param_1 < iVar1) {
      pFVar2 = TManagedArrayAccessor<FString>::operator[](&this->BoneNameAttribute,param_1);
      ::FString::FString(__return_storage_ptr__,pFVar2);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// BoneNameIndexMap @ 143fde4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformFacade::BoneNameIndexMap
          (FCollectionTransformFacade *this,
          TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
          *__return_storage_ptr__)

{
  TManagedArray<FString> *pTVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_> *pTVar7;
  longlong lVar8;
  undefined1 auStackY_d8 [32];
  uint local_a8;
  undefined1 local_a4 [4];
  longlong local_a0;
  uint *local_98;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_5c = 0x80;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  if ((this->BoneNameAttribute).ConstAttributeArray != (TManagedArray<FString> *)0x0) {
    local_a8 = 0;
    while( true ) {
      pTVar1 = (this->BoneNameAttribute).ConstAttributeArray;
      if (pTVar1 == (TManagedArray<FString> *)0x0) {
        iVar5 = FManagedArrayCollection::NumElements
                          ((this->BoneNameAttribute).ConstCollection,(this->BoneNameAttribute).Group
                          );
      }
      else {
        iVar5 = (**(code **)(*(longlong *)pTVar1 + 0x60))();
      }
      uVar3 = local_a8;
      lVar8 = (longlong)(int)local_a8;
      if (iVar5 <= (int)local_a8) break;
      if (((this->BoneNameAttribute).ConstAttributeArray == (TManagedArray<FString> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                             ,0x60,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                  *)(*pcVar2)();
        return pTVar7;
      }
      pTVar1 = (this->BoneNameAttribute).ConstAttributeArray;
      uVar6 = 0;
      if ((int)uVar3 < *(int *)&pTVar1->field_0x18) {
        uVar6 = ~uVar3 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                  *)(*pcVar2)();
        return pTVar7;
      }
      local_a0 = lVar8 * 0x10 + *(longlong *)&pTVar1->field_0x10;
      local_98 = &local_a8;
      TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FString_const_&,int_const_&>_>
                ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                  *)local_88,(TPairInitializer<FString_const_&,int_const_&> *)local_a4,
                 (bool *)&local_a0);
      local_a8 = local_a8 + 1;
    }
  }
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
              *)__return_storage_ptr__,
             (TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
              *)local_88);
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,0,local_88._8_4_);
  iVar5 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_54 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return __return_storage_ptr__;
}

// BuildMatrix @ 143fdea80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMatrix<double> * __cdecl
GeometryCollection::Facades::FCollectionTransformFacade::BuildMatrix
          (TMatrix<double> *__return_storage_ptr__,TVector<double> *param_1,uchar param_2,
          TVector<double> *param_3,TVector<double> *param_4,TVector<double> *param_5,float param_6,
          TVector<double> *param_7,TVector<double> *param_8,bool param_9)

{
  double dVar1;
  TMatrix<double> *pTVar2;
  TMatrix<double> *pTVar3;
  uint extraout_XMM0_Da;
  uint extraout_XMM0_Da_00;
  uint extraout_XMM0_Da_01;
  uint extraout_XMM0_Db;
  uint extraout_XMM0_Db_00;
  uint extraout_XMM0_Db_01;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_858 [32];
  TMatrix<double> local_838;
  TMatrix<double> local_7b8;
  TMatrix<double> local_738;
  TMatrix<double> local_6b8;
  TMatrix<double> local_638;
  TMatrix<double> local_5b8;
  TMatrix<double> local_538;
  TMatrix<double> local_4b8;
  TMatrix<double> local_438;
  TMatrix<double> local_3b8;
  TMatrix<double> local_338;
  TMatrix<double> local_2b8;
  TMatrix<double> local_238;
  TMatrix<double> local_1b8;
  TMatrix<double> local_138;
  ulonglong local_b8;
  
  dVar1 = __real_3ff0000000000000;
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_858;
  local_5b8.M[0][0] = __real_3ff0000000000000;
  local_5b8.M[1][0] = 0.0;
  local_5b8.M[2][0] = 0.0;
  local_5b8.M[3][0] = (param_8->field0_0x0)._s_0.X;
  local_5b8.M[3][1] = (param_8->field0_0x0)._s_0.Y;
  local_5b8.M[0][1] = 0.0;
  local_5b8.M[3][2] = (param_8->field0_0x0)._s_0.Z;
  local_5b8.M[1][1] = __real_3ff0000000000000;
  local_5b8.M[2][1] = 0.0;
  local_5b8.M[0][2] = 0.0;
  local_5b8.M[1][2] = 0.0;
  local_5b8.M[2][2] = __real_3ff0000000000000;
  local_5b8.M[0][3] = 0.0;
  local_5b8.M[1][3] = 0.0;
  local_5b8.M[2][3] = 0.0;
  local_5b8.M[3][3] = __real_3ff0000000000000;
  UE::Math::TMatrix<double>::Inverse(&local_5b8,&local_1b8);
  local_4b8.M[1][1] = (double)param_6;
  local_4b8.M[1][0] = 0.0;
  local_4b8.M[2][0] = 0.0;
  local_4b8.M[0][0] = local_4b8.M[1][1] * (param_4->field0_0x0)._s_0.X;
  local_4b8.M[3][0] = 0.0;
  local_4b8.M[0][1] = 0.0;
  local_4b8.M[2][1] = 0.0;
  local_4b8.M[2][2] = local_4b8.M[1][1] * (param_4->field0_0x0)._s_0.Z;
  local_4b8.M[1][1] = local_4b8.M[1][1] * (param_4->field0_0x0)._s_0.Y;
  local_4b8.M[3][1] = 0.0;
  local_4b8.M[0][2] = 0.0;
  local_438.M[2][0] = (param_5->field0_0x0)._s_0.Y;
  local_438.M[2][1] = (param_5->field0_0x0)._s_0.Z;
  local_438.M[1][0] = (param_5->field0_0x0)._s_0.X;
  local_338.M[0][2] =
       (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[0][2]._4_4_,
                        UE::Math::TMatrix<double>::Identity.M[0][2]._0_4_);
  local_338.M[0][3] =
       (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[0][3]._4_4_,
                        UE::Math::TMatrix<double>::Identity.M[0][3]._0_4_);
  local_338.M[0][0] =
       (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[0][0]._4_4_,
                        UE::Math::TMatrix<double>::Identity.M[0][0]._0_4_);
  local_338.M[0][1] =
       (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[0][1]._4_4_,
                        UE::Math::TMatrix<double>::Identity.M[0][1]._0_4_);
  local_338.M[1][0] =
       (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[1][0]._4_4_,
                        UE::Math::TMatrix<double>::Identity.M[1][0]._0_4_);
  local_338.M[1][1] =
       (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[1][1]._4_4_,
                        UE::Math::TMatrix<double>::Identity.M[1][1]._0_4_);
  local_338.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  local_338.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_338.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  local_338.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
  local_4b8.M[1][2] = 0.0;
  local_4b8.M[3][2] = 0.0;
  local_4b8.M[0][3] = 0.0;
  local_4b8.M[1][3] = 0.0;
  local_4b8.M[2][3] = 0.0;
  local_4b8.M[3][3] = dVar1;
  local_438.M[0][0] = dVar1;
  local_438.M[3][0] = 0.0;
  local_438.M[0][1] = 0.0;
  local_438.M[1][1] = dVar1;
  local_438.M[3][1] = 0.0;
  local_438.M[0][2] = 0.0;
  local_438.M[1][2] = 0.0;
  local_438.M[2][2] = dVar1;
  local_438.M[3][2] = 0.0;
  local_438.M[0][3] = 0.0;
  local_438.M[1][3] = 0.0;
  local_438.M[2][3] = 0.0;
  local_438.M[3][3] = dVar1;
  local_338.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  local_338.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
  local_338.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  local_338.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
  local_538.M[3][0] = (param_7->field0_0x0)._s_0.X;
  local_538.M[3][1] = (param_7->field0_0x0)._s_0.Y;
  local_538.M[0][0] = dVar1;
  local_538.M[3][2] = (param_7->field0_0x0)._s_0.Z;
  local_538.M[1][0] = 0.0;
  local_538.M[2][0] = 0.0;
  local_538.M[0][1] = 0.0;
  local_538.M[1][1] = dVar1;
  local_538.M[2][1] = 0.0;
  local_538.M[0][2] = 0.0;
  local_538.M[1][2] = 0.0;
  local_538.M[2][2] = dVar1;
  local_538.M[0][3] = 0.0;
  local_538.M[1][3] = 0.0;
  local_538.M[2][3] = 0.0;
  local_538.M[3][3] = dVar1;
  local_338.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  local_338.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
  UE::Math::TMatrix<double>::Inverse(&local_538,&local_138);
  uVar17 = UE::Math::TMatrix<double>::Identity.M[1][1]._4_4_;
  uVar16 = UE::Math::TMatrix<double>::Identity.M[1][1]._0_4_;
  uVar15 = UE::Math::TMatrix<double>::Identity.M[1][0]._4_4_;
  uVar14 = UE::Math::TMatrix<double>::Identity.M[1][0]._0_4_;
  uVar13 = UE::Math::TMatrix<double>::Identity.M[0][3]._4_4_;
  uVar12 = UE::Math::TMatrix<double>::Identity.M[0][3]._0_4_;
  uVar11 = UE::Math::TMatrix<double>::Identity.M[0][2]._4_4_;
  uVar10 = UE::Math::TMatrix<double>::Identity.M[0][2]._0_4_;
  uVar9 = UE::Math::TMatrix<double>::Identity.M[0][1]._4_4_;
  uVar8 = UE::Math::TMatrix<double>::Identity.M[0][1]._0_4_;
  uVar7 = UE::Math::TMatrix<double>::Identity.M[0][0]._4_4_;
  uVar6 = UE::Math::TMatrix<double>::Identity.M[0][0]._0_4_;
  local_2b8.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  local_2b8.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_2b8.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  local_2b8.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
  local_2b8.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  local_2b8.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
  local_2b8.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  local_2b8.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
  local_2b8.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  local_2b8.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
  local_2b8.M[0][0]._0_4_ = UE::Math::TMatrix<double>::Identity.M[0][0]._0_4_;
  local_2b8.M[0][0]._4_4_ = UE::Math::TMatrix<double>::Identity.M[0][0]._4_4_;
  local_2b8.M[0][1]._0_4_ = UE::Math::TMatrix<double>::Identity.M[0][1]._0_4_;
  local_2b8.M[0][1]._4_4_ = UE::Math::TMatrix<double>::Identity.M[0][1]._4_4_;
  local_2b8.M[0][2]._0_4_ = UE::Math::TMatrix<double>::Identity.M[0][2]._0_4_;
  local_2b8.M[0][2]._4_4_ = UE::Math::TMatrix<double>::Identity.M[0][2]._4_4_;
  local_2b8.M[0][3]._0_4_ = UE::Math::TMatrix<double>::Identity.M[0][3]._0_4_;
  local_2b8.M[0][3]._4_4_ = UE::Math::TMatrix<double>::Identity.M[0][3]._4_4_;
  local_2b8.M[1][0]._0_4_ = UE::Math::TMatrix<double>::Identity.M[1][0]._0_4_;
  local_2b8.M[1][0]._4_4_ = UE::Math::TMatrix<double>::Identity.M[1][0]._4_4_;
  local_2b8.M[1][1]._0_4_ = UE::Math::TMatrix<double>::Identity.M[1][1]._0_4_;
  local_2b8.M[1][1]._4_4_ = UE::Math::TMatrix<double>::Identity.M[1][1]._4_4_;
  __libm_sse2_sincos_();
  __libm_sse2_sincos_();
  __libm_sse2_sincos_();
  uVar4 = (uint)__xmm_80000000000000008000000000000000;
  uVar5 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_638.M[0][0] = dVar1;
  local_638.M[2][1] = (double)CONCAT44(extraout_XMM0_Db ^ uVar5,extraout_XMM0_Da ^ uVar4);
  local_638.M[1][0] = 0.0;
  local_638.M[2][0] = 0.0;
  local_638.M[3][0] = 0.0;
  local_638.M[0][1] = 0.0;
  local_638.M[3][1] = 0.0;
  local_638.M[0][2] = 0.0;
  local_638.M[3][2] = 0.0;
  local_638.M[0][3] = 0.0;
  local_638.M[1][3] = 0.0;
  local_638.M[2][3] = 0.0;
  local_638.M[3][3] = dVar1;
  local_738.M[0][2] = (double)CONCAT44(extraout_XMM0_Db_00 ^ uVar5,extraout_XMM0_Da_00 ^ uVar4);
  local_738.M[1][0] = 0.0;
  local_738.M[3][0] = 0.0;
  local_738.M[0][1] = 0.0;
  local_738.M[1][1] = dVar1;
  local_738.M[2][1] = 0.0;
  local_738.M[3][1] = 0.0;
  local_738.M[1][2] = 0.0;
  local_738.M[3][2] = 0.0;
  local_738.M[0][3] = 0.0;
  local_738.M[1][3] = 0.0;
  local_738.M[2][3] = 0.0;
  local_738.M[3][3] = dVar1;
  local_6b8.M[1][0] = (double)CONCAT44(extraout_XMM0_Db_01 ^ uVar5,extraout_XMM0_Da_01 ^ uVar4);
  local_6b8.M[2][0] = 0.0;
  local_6b8.M[3][0] = 0.0;
  local_6b8.M[2][1] = 0.0;
  local_6b8.M[3][1] = 0.0;
  local_6b8.M[0][2] = 0.0;
  local_6b8.M[1][2] = 0.0;
  local_6b8.M[2][2] = dVar1;
  local_6b8.M[3][2] = 0.0;
  local_6b8.M[0][3] = 0.0;
  local_6b8.M[1][3] = 0.0;
  local_6b8.M[2][3] = 0.0;
  local_6b8.M[3][3] = dVar1;
  if (param_2 == '\0') {
    VectorMatrixMultiply(&local_838,&local_638,&local_738);
    pTVar2 = &local_6b8;
  }
  else if (param_2 == '\x01') {
    pTVar3 = &local_6b8;
    pTVar2 = &local_738;
LAB_143fdf130:
    VectorMatrixMultiply(&local_838,pTVar2,pTVar3);
    pTVar2 = &local_638;
  }
  else if (param_2 == '\x02') {
    VectorMatrixMultiply(&local_838,&local_6b8,&local_638);
    pTVar2 = &local_738;
  }
  else if (param_2 == '\x03') {
    VectorMatrixMultiply(&local_838,&local_638,&local_6b8);
    pTVar2 = &local_738;
  }
  else {
    if (param_2 != '\x04') {
      if (param_2 != '\x05') goto LAB_143fdf1f3;
      pTVar3 = &local_738;
      pTVar2 = &local_6b8;
      goto LAB_143fdf130;
    }
    VectorMatrixMultiply(&local_838,&local_738,&local_638);
    pTVar2 = &local_6b8;
  }
  local_7b8.M[0][0] = local_838.M[0][0];
  local_7b8.M[0][1] = local_838.M[0][1];
  local_7b8.M[0][2] = local_838.M[0][2];
  local_7b8.M[0][3] = local_838.M[0][3];
  local_7b8.M[1][0] = local_838.M[1][0];
  local_7b8.M[1][1] = local_838.M[1][1];
  local_7b8.M[1][2] = local_838.M[1][2];
  local_7b8.M[1][3] = local_838.M[1][3];
  local_7b8.M[2][0] = local_838.M[2][0];
  local_7b8.M[2][1] = local_838.M[2][1];
  local_7b8.M[2][2] = local_838.M[2][2];
  local_7b8.M[2][3] = local_838.M[2][3];
  local_7b8.M[3][0] = local_838.M[3][0];
  local_7b8.M[3][1] = local_838.M[3][1];
  local_7b8.M[3][2] = local_838.M[3][2];
  local_7b8.M[3][3] = local_838.M[3][3];
  VectorMatrixMultiply(&local_838,&local_7b8,pTVar2);
  local_7b8.M[0][2] = local_838.M[0][2];
  local_7b8.M[0][3] = local_838.M[0][3];
  local_7b8.M[0][0] = local_838.M[0][0];
  local_7b8.M[0][1] = local_838.M[0][1];
  local_7b8.M[1][2] = local_838.M[1][2];
  local_7b8.M[1][3] = local_838.M[1][3];
  local_7b8.M[1][0] = local_838.M[1][0];
  local_7b8.M[1][1] = local_838.M[1][1];
  local_7b8.M[2][2] = local_838.M[2][2];
  local_7b8.M[2][3] = local_838.M[2][3];
  local_7b8.M[2][0] = local_838.M[2][0];
  local_7b8.M[2][1] = local_838.M[2][1];
  local_7b8.M[3][2] = local_838.M[3][2];
  local_7b8.M[3][3] = local_838.M[3][3];
  local_7b8.M[3][0] = local_838.M[3][0];
  local_7b8.M[3][1] = local_838.M[3][1];
  uVar6 = UE::Math::TMatrix<double>::Identity.M[0][0]._0_4_;
  uVar7 = UE::Math::TMatrix<double>::Identity.M[0][0]._4_4_;
  uVar8 = UE::Math::TMatrix<double>::Identity.M[0][1]._0_4_;
  uVar9 = UE::Math::TMatrix<double>::Identity.M[0][1]._4_4_;
  uVar10 = UE::Math::TMatrix<double>::Identity.M[0][2]._0_4_;
  uVar11 = UE::Math::TMatrix<double>::Identity.M[0][2]._4_4_;
  uVar12 = UE::Math::TMatrix<double>::Identity.M[0][3]._0_4_;
  uVar13 = UE::Math::TMatrix<double>::Identity.M[0][3]._4_4_;
  uVar14 = UE::Math::TMatrix<double>::Identity.M[1][0]._0_4_;
  uVar15 = UE::Math::TMatrix<double>::Identity.M[1][0]._4_4_;
  uVar16 = UE::Math::TMatrix<double>::Identity.M[1][1]._0_4_;
  uVar17 = UE::Math::TMatrix<double>::Identity.M[1][1]._4_4_;
LAB_143fdf1f3:
  local_238.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  local_238.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_238.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  local_238.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
  local_238.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  local_238.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
  local_238.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  local_238.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
  local_238.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  local_238.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
  local_3b8.M[3][0] = (param_1->field0_0x0)._s_0.X;
  local_3b8.M[3][1] = (param_1->field0_0x0)._s_0.Y;
  local_3b8.M[0][0] = dVar1;
  local_3b8.M[3][2] = (param_1->field0_0x0)._s_0.Z;
  local_3b8.M[1][0] = 0.0;
  local_3b8.M[2][0] = 0.0;
  local_3b8.M[0][1] = 0.0;
  local_3b8.M[1][1] = dVar1;
  local_3b8.M[2][1] = 0.0;
  local_3b8.M[0][2] = 0.0;
  local_3b8.M[1][2] = 0.0;
  local_3b8.M[2][2] = dVar1;
  local_3b8.M[0][3] = 0.0;
  local_3b8.M[1][3] = 0.0;
  local_3b8.M[2][3] = 0.0;
  local_3b8.M[3][3] = dVar1;
  local_238.M[0][0]._0_4_ = uVar6;
  local_238.M[0][0]._4_4_ = uVar7;
  local_238.M[0][1]._0_4_ = uVar8;
  local_238.M[0][1]._4_4_ = uVar9;
  local_238.M[0][2]._0_4_ = uVar10;
  local_238.M[0][2]._4_4_ = uVar11;
  local_238.M[0][3]._0_4_ = uVar12;
  local_238.M[0][3]._4_4_ = uVar13;
  local_238.M[1][0]._0_4_ = uVar14;
  local_238.M[1][0]._4_4_ = uVar15;
  local_238.M[1][1]._0_4_ = uVar16;
  local_238.M[1][1]._4_4_ = uVar17;
  VectorMatrixMultiply(__return_storage_ptr__,&local_1b8,&local_4b8);
  VectorMatrixMultiply(&local_838,__return_storage_ptr__,&local_438);
  __return_storage_ptr__->M[0][0] = local_838.M[0][0];
  __return_storage_ptr__->M[0][1] = local_838.M[0][1];
  __return_storage_ptr__->M[0][2] = local_838.M[0][2];
  __return_storage_ptr__->M[0][3] = local_838.M[0][3];
  __return_storage_ptr__->M[1][0] = local_838.M[1][0];
  __return_storage_ptr__->M[1][1] = local_838.M[1][1];
  __return_storage_ptr__->M[1][2] = local_838.M[1][2];
  __return_storage_ptr__->M[1][3] = local_838.M[1][3];
  __return_storage_ptr__->M[2][0] = local_838.M[2][0];
  __return_storage_ptr__->M[2][1] = local_838.M[2][1];
  __return_storage_ptr__->M[2][2] = local_838.M[2][2];
  __return_storage_ptr__->M[2][3] = local_838.M[2][3];
  __return_storage_ptr__->M[3][0] = local_838.M[3][0];
  __return_storage_ptr__->M[3][1] = local_838.M[3][1];
  __return_storage_ptr__->M[3][2] = local_838.M[3][2];
  __return_storage_ptr__->M[3][3] = local_838.M[3][3];
  VectorMatrixMultiply(&local_838,__return_storage_ptr__,&local_5b8);
  __return_storage_ptr__->M[0][0] = local_838.M[0][0];
  __return_storage_ptr__->M[0][1] = local_838.M[0][1];
  __return_storage_ptr__->M[0][2] = local_838.M[0][2];
  __return_storage_ptr__->M[0][3] = local_838.M[0][3];
  __return_storage_ptr__->M[1][0] = local_838.M[1][0];
  __return_storage_ptr__->M[1][1] = local_838.M[1][1];
  __return_storage_ptr__->M[1][2] = local_838.M[1][2];
  __return_storage_ptr__->M[1][3] = local_838.M[1][3];
  __return_storage_ptr__->M[2][0] = local_838.M[2][0];
  __return_storage_ptr__->M[2][1] = local_838.M[2][1];
  __return_storage_ptr__->M[2][2] = local_838.M[2][2];
  __return_storage_ptr__->M[2][3] = local_838.M[2][3];
  __return_storage_ptr__->M[3][0] = local_838.M[3][0];
  __return_storage_ptr__->M[3][1] = local_838.M[3][1];
  __return_storage_ptr__->M[3][2] = local_838.M[3][2];
  __return_storage_ptr__->M[3][3] = local_838.M[3][3];
  VectorMatrixMultiply(&local_838,__return_storage_ptr__,&local_338);
  __return_storage_ptr__->M[0][0] = local_838.M[0][0];
  __return_storage_ptr__->M[0][1] = local_838.M[0][1];
  __return_storage_ptr__->M[0][2] = local_838.M[0][2];
  __return_storage_ptr__->M[0][3] = local_838.M[0][3];
  __return_storage_ptr__->M[1][0] = local_838.M[1][0];
  __return_storage_ptr__->M[1][1] = local_838.M[1][1];
  __return_storage_ptr__->M[1][2] = local_838.M[1][2];
  __return_storage_ptr__->M[1][3] = local_838.M[1][3];
  __return_storage_ptr__->M[2][0] = local_838.M[2][0];
  __return_storage_ptr__->M[2][1] = local_838.M[2][1];
  __return_storage_ptr__->M[2][2] = local_838.M[2][2];
  __return_storage_ptr__->M[2][3] = local_838.M[2][3];
  __return_storage_ptr__->M[3][0] = local_838.M[3][0];
  __return_storage_ptr__->M[3][1] = local_838.M[3][1];
  __return_storage_ptr__->M[3][2] = local_838.M[3][2];
  __return_storage_ptr__->M[3][3] = local_838.M[3][3];
  VectorMatrixMultiply(&local_838,__return_storage_ptr__,&local_138);
  __return_storage_ptr__->M[0][0] = local_838.M[0][0];
  __return_storage_ptr__->M[0][1] = local_838.M[0][1];
  __return_storage_ptr__->M[0][2] = local_838.M[0][2];
  __return_storage_ptr__->M[0][3] = local_838.M[0][3];
  __return_storage_ptr__->M[1][0] = local_838.M[1][0];
  __return_storage_ptr__->M[1][1] = local_838.M[1][1];
  __return_storage_ptr__->M[1][2] = local_838.M[1][2];
  __return_storage_ptr__->M[1][3] = local_838.M[1][3];
  __return_storage_ptr__->M[2][0] = local_838.M[2][0];
  __return_storage_ptr__->M[2][1] = local_838.M[2][1];
  __return_storage_ptr__->M[2][2] = local_838.M[2][2];
  __return_storage_ptr__->M[2][3] = local_838.M[2][3];
  __return_storage_ptr__->M[3][0] = local_838.M[3][0];
  __return_storage_ptr__->M[3][1] = local_838.M[3][1];
  __return_storage_ptr__->M[3][2] = local_838.M[3][2];
  __return_storage_ptr__->M[3][3] = local_838.M[3][3];
  VectorMatrixMultiply(&local_838,__return_storage_ptr__,&local_2b8);
  __return_storage_ptr__->M[0][0] = local_838.M[0][0];
  __return_storage_ptr__->M[0][1] = local_838.M[0][1];
  __return_storage_ptr__->M[0][2] = local_838.M[0][2];
  __return_storage_ptr__->M[0][3] = local_838.M[0][3];
  __return_storage_ptr__->M[1][0] = local_838.M[1][0];
  __return_storage_ptr__->M[1][1] = local_838.M[1][1];
  __return_storage_ptr__->M[1][2] = local_838.M[1][2];
  __return_storage_ptr__->M[1][3] = local_838.M[1][3];
  __return_storage_ptr__->M[2][0] = local_838.M[2][0];
  __return_storage_ptr__->M[2][1] = local_838.M[2][1];
  __return_storage_ptr__->M[2][2] = local_838.M[2][2];
  __return_storage_ptr__->M[2][3] = local_838.M[2][3];
  __return_storage_ptr__->M[3][0] = local_838.M[3][0];
  __return_storage_ptr__->M[3][1] = local_838.M[3][1];
  __return_storage_ptr__->M[3][2] = local_838.M[3][2];
  __return_storage_ptr__->M[3][3] = local_838.M[3][3];
  VectorMatrixMultiply(&local_838,__return_storage_ptr__,&local_7b8);
  __return_storage_ptr__->M[0][0] = local_838.M[0][0];
  __return_storage_ptr__->M[0][1] = local_838.M[0][1];
  __return_storage_ptr__->M[0][2] = local_838.M[0][2];
  __return_storage_ptr__->M[0][3] = local_838.M[0][3];
  __return_storage_ptr__->M[1][0] = local_838.M[1][0];
  __return_storage_ptr__->M[1][1] = local_838.M[1][1];
  __return_storage_ptr__->M[1][2] = local_838.M[1][2];
  __return_storage_ptr__->M[1][3] = local_838.M[1][3];
  __return_storage_ptr__->M[2][0] = local_838.M[2][0];
  __return_storage_ptr__->M[2][1] = local_838.M[2][1];
  __return_storage_ptr__->M[2][2] = local_838.M[2][2];
  __return_storage_ptr__->M[2][3] = local_838.M[2][3];
  __return_storage_ptr__->M[3][0] = local_838.M[3][0];
  __return_storage_ptr__->M[3][1] = local_838.M[3][1];
  __return_storage_ptr__->M[3][2] = local_838.M[3][2];
  __return_storage_ptr__->M[3][3] = local_838.M[3][3];
  VectorMatrixMultiply(&local_838,__return_storage_ptr__,&local_538);
  __return_storage_ptr__->M[0][0] = local_838.M[0][0];
  __return_storage_ptr__->M[0][1] = local_838.M[0][1];
  __return_storage_ptr__->M[0][2] = local_838.M[0][2];
  __return_storage_ptr__->M[0][3] = local_838.M[0][3];
  __return_storage_ptr__->M[1][0] = local_838.M[1][0];
  __return_storage_ptr__->M[1][1] = local_838.M[1][1];
  __return_storage_ptr__->M[1][2] = local_838.M[1][2];
  __return_storage_ptr__->M[1][3] = local_838.M[1][3];
  __return_storage_ptr__->M[2][0] = local_838.M[2][0];
  __return_storage_ptr__->M[2][1] = local_838.M[2][1];
  __return_storage_ptr__->M[2][2] = local_838.M[2][2];
  __return_storage_ptr__->M[2][3] = local_838.M[2][3];
  __return_storage_ptr__->M[3][0] = local_838.M[3][0];
  __return_storage_ptr__->M[3][1] = local_838.M[3][1];
  __return_storage_ptr__->M[3][2] = local_838.M[3][2];
  __return_storage_ptr__->M[3][3] = local_838.M[3][3];
  VectorMatrixMultiply(&local_838,__return_storage_ptr__,&local_238);
  __return_storage_ptr__->M[0][0] = local_838.M[0][0];
  __return_storage_ptr__->M[0][1] = local_838.M[0][1];
  __return_storage_ptr__->M[0][2] = local_838.M[0][2];
  __return_storage_ptr__->M[0][3] = local_838.M[0][3];
  __return_storage_ptr__->M[1][0] = local_838.M[1][0];
  __return_storage_ptr__->M[1][1] = local_838.M[1][1];
  __return_storage_ptr__->M[1][2] = local_838.M[1][2];
  __return_storage_ptr__->M[1][3] = local_838.M[1][3];
  __return_storage_ptr__->M[2][0] = local_838.M[2][0];
  __return_storage_ptr__->M[2][1] = local_838.M[2][1];
  __return_storage_ptr__->M[2][2] = local_838.M[2][2];
  __return_storage_ptr__->M[2][3] = local_838.M[2][3];
  __return_storage_ptr__->M[3][0] = local_838.M[3][0];
  __return_storage_ptr__->M[3][1] = local_838.M[3][1];
  __return_storage_ptr__->M[3][2] = local_838.M[3][2];
  __return_storage_ptr__->M[3][3] = local_838.M[3][3];
  VectorMatrixMultiply(&local_838,__return_storage_ptr__,&local_3b8);
  __return_storage_ptr__->M[0][0] = local_838.M[0][0];
  __return_storage_ptr__->M[0][1] = local_838.M[0][1];
  __return_storage_ptr__->M[0][2] = local_838.M[0][2];
  __return_storage_ptr__->M[0][3] = local_838.M[0][3];
  __return_storage_ptr__->M[1][0] = local_838.M[1][0];
  __return_storage_ptr__->M[1][1] = local_838.M[1][1];
  __return_storage_ptr__->M[1][2] = local_838.M[1][2];
  __return_storage_ptr__->M[1][3] = local_838.M[1][3];
  __return_storage_ptr__->M[2][0] = local_838.M[2][0];
  __return_storage_ptr__->M[2][1] = local_838.M[2][1];
  __return_storage_ptr__->M[2][2] = local_838.M[2][2];
  __return_storage_ptr__->M[2][3] = local_838.M[2][3];
  __return_storage_ptr__->M[3][0] = local_838.M[3][0];
  __return_storage_ptr__->M[3][1] = local_838.M[3][1];
  __return_storage_ptr__->M[3][2] = local_838.M[3][2];
  __return_storage_ptr__->M[3][3] = local_838.M[3][3];
  if (param_9) {
    pTVar2 = UE::Math::TMatrix<double>::Inverse(__return_storage_ptr__,&local_838);
    dVar1 = pTVar2->M[0][1];
    __return_storage_ptr__->M[0][0] = pTVar2->M[0][0];
    __return_storage_ptr__->M[0][1] = dVar1;
    dVar1 = pTVar2->M[0][3];
    __return_storage_ptr__->M[0][2] = pTVar2->M[0][2];
    __return_storage_ptr__->M[0][3] = dVar1;
    dVar1 = pTVar2->M[1][1];
    __return_storage_ptr__->M[1][0] = pTVar2->M[1][0];
    __return_storage_ptr__->M[1][1] = dVar1;
    dVar1 = pTVar2->M[1][3];
    __return_storage_ptr__->M[1][2] = pTVar2->M[1][2];
    __return_storage_ptr__->M[1][3] = dVar1;
    dVar1 = pTVar2->M[2][1];
    __return_storage_ptr__->M[2][0] = pTVar2->M[2][0];
    __return_storage_ptr__->M[2][1] = dVar1;
    dVar1 = pTVar2->M[2][3];
    __return_storage_ptr__->M[2][2] = pTVar2->M[2][2];
    __return_storage_ptr__->M[2][3] = dVar1;
    dVar1 = pTVar2->M[3][1];
    __return_storage_ptr__->M[3][0] = pTVar2->M[3][0];
    __return_storage_ptr__->M[3][1] = dVar1;
    dVar1 = pTVar2->M[3][3];
    __return_storage_ptr__->M[3][2] = pTVar2->M[3][2];
    __return_storage_ptr__->M[3][3] = dVar1;
  }
  return __return_storage_ptr__;
}

// BuildTransform @ 143fdf700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __cdecl
GeometryCollection::Facades::FCollectionTransformFacade::BuildTransform
          (TTransform<double> *__return_storage_ptr__,TVector<double> *param_1,uchar param_2,
          TVector<double> *param_3,TVector<double> *param_4,float param_5,TVector<double> *param_6,
          TVector<double> *param_7,bool param_8)

{
  TMatrix<double> *pTVar1;
  undefined1 auStackY_108 [32];
  TVector<double>_u_0 local_b8;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_b8._s_0.Z = 0.0;
  local_b8._s_0.X = 0.0;
  local_b8._s_0.Y = 0.0;
  pTVar1 = BuildMatrix(&local_98,param_1,param_2,param_3,param_4,(TVector<double> *)&local_b8._s_0,
                       param_5,param_6,param_7,param_8);
  UE::Math::TTransform<double>::SetFromMatrix(__return_storage_ptr__,pTVar1);
  return __return_storage_ptr__;
}

// ComputeCollectionSpaceTransform @ 143fe0530

TTransform<double> * __thiscall
GeometryCollection::Facades::FCollectionTransformFacade::ComputeCollectionSpaceTransform
          (FCollectionTransformFacade *this,TTransform<double> *__return_storage_ptr__,int param_1)

{
  TManagedArray<UE::Math::TTransform<float>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TTransform<double> *pTVar4;
  
  if ((this->TransformAttribute).ConstAttributeArray ==
      (TManagedArray<UE::Math::TTransform<float>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x67,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TTransform<double> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pTVar1 = (this->TransformAttribute).ConstAttributeArray;
  if ((this->ParentAttribute).ConstAttributeArray == (TManagedArray<int> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                       ,0x67,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TTransform<double> *)(*pcVar2)();
      return pTVar4;
    }
  }
  GeometryCollectionAlgo::GlobalMatrix
            (__return_storage_ptr__,pTVar1,(this->ParentAttribute).ConstAttributeArray,param_1);
  return __return_storage_ptr__;
}

// ComputeCollectionSpaceTransforms @ 143fe05f0

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformFacade::ComputeCollectionSpaceTransforms
          (FCollectionTransformFacade *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((((this->ParentAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0) &&
      ((this->ChildrenAttribute).ConstAttributeArray !=
       (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0)) &&
     ((this->TransformAttribute).ConstAttributeArray !=
      (TManagedArray<UE::Math::TTransform<float>_> *)0x0)) {
    GeometryCollectionAlgo::
    GlobalMatrices<UE::Math::TTransform<double>,UE::Math::TTransform<float>_>
              ((this->TransformAttribute).ConstAttributeArray,
               (this->ParentAttribute).ConstAttributeArray,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// ComputeLevelsBounds @ 143fe0640

void __thiscall
GeometryCollection::Facades::FCollectionTransformFacade::ComputeLevelsBounds
          (FCollectionTransformFacade *this,float *param_1,float *param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  TManagedArray<int> *pTVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  
  pTVar6 = FManagedArrayCollection::GetAttribute<int>
                     (this->Collection,FTransformCollection::LevelAttribute,
                      FTransformCollection::TransformGroup);
  iVar8 = 0x7fffffff;
  iVar7 = -0x7fffffff;
  uVar9 = 0;
  iVar4 = (**(code **)(*(longlong *)pTVar6 + 0x60))(pTVar6);
  if (0 < iVar4) {
    lVar10 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar9 < *(int *)&pTVar6->field_0x18) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar4 = *(int *)(lVar10 + *(longlong *)&pTVar6->field_0x10);
      iVar2 = iVar4;
      if ((iVar8 <= iVar4) && (iVar2 = iVar8, iVar7 < iVar4)) {
        iVar7 = iVar4;
      }
      iVar8 = iVar2;
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 4;
      iVar4 = (**(code **)(*(longlong *)pTVar6 + 0x60))(pTVar6);
    } while ((int)uVar9 < iVar4);
  }
  *param_1 = (float)iVar8;
  *param_2 = (float)iVar7;
  return;
}

// EnforceSingleRoot @ 143fe88f0

void __thiscall
GeometryCollection::Facades::FCollectionTransformFacade::EnforceSingleRoot
          (FCollectionTransformFacade *this,FString *param_1)

{
  TManagedArray<int> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  FString *pFVar10;
  TManagedArray<FString> *pTVar11;
  ForAnyElementType *pFVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ForAnyElementType local_78;
  undefined8 local_70;
  FString local_68;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  
  if ((this->Collection == (FManagedArrayCollection *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Collection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionTransformFacade.cpp"
                         ,0x191,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  Chaos::Facades::FCollectionHierarchyFacade::GetRootIndices(&local_58,&this->ParentAttribute);
  if (1 < local_58.ArrayNum) {
    if (((this->TransformAttribute).Collection == (FManagedArrayCollection *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x41,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar7 = FManagedArrayCollection::AddElements
                      ((this->TransformAttribute).Collection,1,(this->TransformAttribute).Group);
    if ((((this->ParentAttribute).AttributeArray == (TManagedArray<int> *)0x0) ||
        ((this->ParentAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("AttributeArray!=nullptr && !IsConst()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                           ,0x74,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    ((this->ParentAttribute).AttributeArray)->field_0x8 = 1;
    pTVar1 = (this->ParentAttribute).AttributeArray;
    uVar8 = 0;
    if ((int)uVar7 < *(int *)&pTVar1->field_0x18) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined4 *)(*(longlong *)&pTVar1->field_0x10 + (longlong)(int)uVar7 * 4) = 0xffffffff;
    pTVar11 = (this->BoneNameAttribute).ConstAttributeArray;
    if (pTVar11 != (TManagedArray<FString> *)0x0) {
      pFVar10 = ::FString::FString(&local_48,param_1);
      local_78.Data = (FScriptContainerElement *)0x0;
      iVar9 = (pFVar10->Data).ArrayNum;
      pFVar2 = (pFVar10->Data).AllocatorInstance.Data;
      local_70 = CONCAT44(local_70._4_4_,iVar9);
      if (iVar9 == 0) {
        local_70 = 0;
        uVar13 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar9,0,&local_78,iVar9,(int *)((longlong)&local_70 + 4));
        memcpy(local_78.Data,pFVar2,(longlong)iVar9 * 2);
        uVar13 = local_70 & 0xffffffff;
      }
LAB_143fe8ae0:
      puVar14 = *(undefined8 **)&pTVar11->field_0x10;
      puVar15 = puVar14 + (longlong)*(int *)&pTVar11->field_0x18 * 2;
      if (puVar14 != puVar15) {
        do {
          iVar9 = *(int *)(puVar14 + 1);
          if (iVar9 == (int)uVar13) {
            if (iVar9 < 2) goto LAB_143fe8c41;
            iVar9 = FGenericPlatformStricmp::Stricmp((wchar_t *)*puVar14,(wchar_t *)local_78.Data);
            uVar13 = local_70 & 0xffffffff;
            bVar6 = iVar9 == 0;
          }
          else {
            bVar6 = iVar9 + (int)uVar13 == 1;
          }
          if (bVar6) goto LAB_143fe8c41;
          puVar14 = puVar14 + 2;
          if (puVar14 == puVar15) break;
        } while( true );
      }
      pFVar2 = (pFVar10->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pTVar11 = TManagedArrayAccessor<FString>::Modify(&this->BoneNameAttribute);
      uVar8 = 0;
      if ((int)uVar7 < *(int *)&pTVar11->field_0x18) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar12 = (ForAnyElementType *)
                (*(longlong *)&pTVar11->field_0x10 + (longlong)(int)uVar7 * 0x10);
      if (pFVar12 != &local_78) {
        if (pFVar12->Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12->Data);
        }
        pFVar12->Data = local_78.Data;
        local_78.Data = (FScriptContainerElement *)0x0;
        *(undefined4 *)&pFVar12[1].Data = (undefined4)local_70;
        *(undefined4 *)((longlong)&pFVar12[1].Data + 4) = local_70._4_4_;
        local_70 = 0;
      }
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data);
      }
    }
    ParentTransforms(this,uVar7,&local_58);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
LAB_143fe8c41:
  ::FString::PrintfImpl(&local_68,L"%s%d");
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  uVar4 = local_68.Data._8_8_;
  local_78.Data = local_68.Data.AllocatorInstance.Data;
  uVar13 = local_68.Data._8_8_ & 0xffffffff;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  uVar5 = local_68.Data._8_8_;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = (int)uVar4;
  local_68.Data.ArrayMax = SUB84(uVar4,4);
  local_70._0_4_ = local_68.Data.ArrayNum;
  local_70._4_4_ = local_68.Data.ArrayMax;
  local_68.Data._8_8_ = uVar5;
  goto LAB_143fe8ae0;
}

// GetRootIndices @ 143fea650

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
GeometryCollection::Facades::FCollectionTransformFacade::GetRootIndices
          (FCollectionTransformFacade *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  Chaos::Facades::FCollectionHierarchyFacade::GetRootIndices
            (__return_storage_ptr__,&this->ParentAttribute);
  return __return_storage_ptr__;
}

// GetRootTransform @ 143fea680

TTransform<double> * __thiscall
GeometryCollection::Facades::FCollectionTransformFacade::GetRootTransform
          (FCollectionTransformFacade *this,TTransform<double> *__return_storage_ptr__)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  TManagedArray<UE::Math::TTransform<float>_> *pTVar4;
  longlong lVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  __m128d _Var23;
  __m128d _Var24;
  bool bVar25;
  uint uVar26;
  TTransform<double> *pTVar27;
  longlong lVar28;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  Chaos::Facades::FCollectionHierarchyFacade::GetRootIndices(&local_18,&this->ParentAttribute);
  _Var23 = UE::Math::TTransform<double>::Identity.Rotation.ZW;
  if (0 < local_18.ArrayNum) {
    pTVar4 = (this->TransformAttribute).ConstAttributeArray;
    uVar3 = *(uint *)local_18.AllocatorInstance.Data;
    lVar28 = (longlong)(int)uVar3;
    if (pTVar4 != (TManagedArray<UE::Math::TTransform<float>_> *)0x0) {
      uVar26 = 0;
      if ((int)uVar3 < *(int *)&pTVar4->field_0x18) {
        uVar26 = ~uVar3 >> 0x1f;
      }
      if (uVar26 == 0) {
        bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar25) {
          pcVar6 = (code *)swi(3);
          pTVar27 = (TTransform<double> *)(*pcVar6)();
          return pTVar27;
        }
      }
      lVar5 = *(longlong *)&pTVar4->field_0x10;
      pfVar1 = (float *)(lVar5 + lVar28 * 0x30);
      fVar13 = pfVar1[2];
      fVar14 = pfVar1[3];
      pfVar2 = (float *)(lVar5 + 0x20 + lVar28 * 0x30);
      fVar15 = *pfVar2;
      fVar16 = pfVar2[1];
      fVar17 = pfVar2[2];
      fVar18 = pfVar2[3];
      pfVar2 = (float *)(lVar5 + 0x10 + lVar28 * 0x30);
      fVar19 = *pfVar2;
      fVar20 = pfVar2[1];
      fVar21 = pfVar2[2];
      fVar22 = pfVar2[3];
      auVar7._8_4_ = SUB84((double)pfVar1[1],0);
      auVar7._0_8_ = (double)*pfVar1;
      auVar7._12_4_ = (int)((ulonglong)(double)pfVar1[1] >> 0x20);
      *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar7;
      auVar8._8_4_ = SUB84((double)fVar14,0);
      auVar8._0_8_ = (double)fVar13;
      auVar8._12_4_ = (int)((ulonglong)(double)fVar14 >> 0x20);
      *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar8;
      auVar11._8_4_ = SUB84((double)fVar20,0);
      auVar11._0_8_ = (double)fVar19;
      auVar11._12_4_ = (int)((ulonglong)(double)fVar20 >> 0x20);
      *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar11;
      auVar9._8_4_ = SUB84((double)fVar22,0);
      auVar9._0_8_ = (double)fVar21;
      auVar9._12_4_ = (int)((ulonglong)(double)fVar22 >> 0x20);
      *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar9;
      auVar12._8_4_ = SUB84((double)fVar16,0);
      auVar12._0_8_ = (double)fVar15;
      auVar12._12_4_ = (int)((ulonglong)(double)fVar16 >> 0x20);
      *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar12;
      auVar10._8_4_ = SUB84((double)fVar18,0);
      auVar10._0_8_ = (double)fVar17;
      auVar10._12_4_ = (int)((ulonglong)(double)fVar18 >> 0x20);
      *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar10;
      goto LAB_143fea79f;
    }
  }
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  _Var24 = UE::Math::TTransform<double>::Identity.Translation.XY;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 = _Var23.m128d_f64;
  _Var23 = UE::Math::TTransform<double>::Identity.Translation.ZW;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 = _Var24.m128d_f64;
  _Var24 = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 = _Var23.m128d_f64;
  _Var23 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 = _Var24.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = _Var23.m128d_f64;
LAB_143fea79f:
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// HasBoneNameAttribute @ 143feb570

bool __thiscall
GeometryCollection::Facades::FCollectionTransformFacade::HasBoneNameAttribute
          (FCollectionTransformFacade *this)

{
  return (this->BoneNameAttribute).ConstAttributeArray != (TManagedArray<FString> *)0x0;
}

// HasCycle @ 143fec2c0

bool __cdecl
GeometryCollection::Facades::FCollectionTransformFacade::HasCycle
          (TManagedArray<int> *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  
  pFVar4 = (param_2->AllocatorInstance).Data;
  iVar2 = param_2->ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar4 == pFVar1) break;
    bVar3 = HasCycle(param_1,*(int *)pFVar4);
    if (bVar3) {
      return true;
    }
    pFVar4 = pFVar4 + 4;
  }
  return false;
}

// HasCycle @ 143fec330

bool __cdecl
GeometryCollection::Facades::FCollectionTransformFacade::HasCycle
          (TManagedArray<int> *param_1,int param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  iVar3 = (**(code **)(*(longlong *)param_1 + 0x60))();
  iVar5 = 0;
  bVar6 = param_2 == -1;
  if (!bVar6) {
    do {
      if (iVar3 <= iVar5) break;
      uVar4 = 0;
      if (param_2 < *(int *)&param_1->field_0x18) {
        uVar4 = (uint)~param_2 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar1 = (code *)swi(3);
          uVar2 = (*pcVar1)();
          return (bool)uVar2;
        }
      }
      iVar5 = iVar5 + 1;
      param_2 = *(uint *)(*(longlong *)&param_1->field_0x10 + (longlong)param_2 * 4);
    } while (param_2 != 0xffffffff);
    bVar6 = param_2 == 0xffffffff;
  }
  return !bVar6;
}

// IsValid @ 143fefcd0

bool __thiscall
GeometryCollection::Facades::FCollectionTransformFacade::IsValid(FCollectionTransformFacade *this)

{
  if ((((this->ParentAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0) &&
      ((this->ChildrenAttribute).ConstAttributeArray !=
       (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0)) &&
     ((this->TransformAttribute).ConstAttributeArray !=
      (TManagedArray<UE::Math::TTransform<float>_> *)0x0)) {
    return true;
  }
  return false;
}

// Num @ 143ff2c10

int __thiscall
GeometryCollection::Facades::FCollectionTransformFacade::Num(FCollectionTransformFacade *this)

{
  TManagedArray<int> *pTVar1;
  int iVar2;
  
  pTVar1 = (this->ParentAttribute).ConstAttributeArray;
  if (pTVar1 != (TManagedArray<int> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ff2c1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    return iVar2;
  }
  iVar2 = FManagedArrayCollection::NumElements
                    ((this->ParentAttribute).ConstCollection,(this->ParentAttribute).Group);
  return iVar2;
}

// ParentTransform @ 143ff2fc0

void __thiscall
GeometryCollection::Facades::FCollectionTransformFacade::ParentTransform
          (FCollectionTransformFacade *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Collection",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionTransformFacade.cpp"
                       ,0x139,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  iVar3 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x404,&local_18.AllocatorInstance,&local_18.ArrayMax);
  local_18.ArrayNum = iVar3 + 1;
  *(int *)(local_18.AllocatorInstance.Data + (longlong)iVar3 * 4) = param_2;
  ParentTransforms(this,param_1,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// ParentTransforms @ 143ff3070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
GeometryCollection::Facades::FCollectionTransformFacade::ParentTransforms
          (FCollectionTransformFacade *this,int param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  ulonglong uVar1;
  ulong64 *puVar2;
  TManagedArray<UE::Math::TTransform<float>_> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined7 extraout_var;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar16;
  TManagedArray<int> *pTVar17;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar32;
  float fVar33;
  undefined1 auVar31 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auStackY_148 [32];
  undefined1 local_118 [4];
  uint local_114;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *local_110;
  TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> local_108;
  uint local_f8 [2];
  TManagedArray<UE::Math::TTransform<float>_> *local_f0;
  undefined4 local_e8;
  int local_e4;
  TManagedArray<int> *local_e0;
  undefined1 local_d8 [8];
  float fStack_d0;
  float fStack_cc;
  __m128 local_c8;
  __m128 local_b8;
  __m128 local_a8;
  __m128 local_98;
  __m128 local_88;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_114 = param_1;
  if ((this->Collection == (FManagedArrayCollection *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Collection",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionTransformFacade.cpp"
                          ,0x142,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((((this->TransformAttribute).AttributeArray ==
        (TManagedArray<UE::Math::TTransform<float>_> *)0x0) ||
      ((this->TransformAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("AttributeArray!=nullptr && !IsConst()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x74,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  ((this->TransformAttribute).AttributeArray)->field_0x8 = 1;
  pTVar3 = (this->TransformAttribute).AttributeArray;
  local_f0 = pTVar3;
  if ((((this->ParentAttribute).AttributeArray == (TManagedArray<int> *)0x0) ||
      ((this->ParentAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("AttributeArray!=nullptr && !IsConst()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x74,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  ((this->ParentAttribute).AttributeArray)->field_0x8 = 1;
  pTVar17 = (this->ParentAttribute).AttributeArray;
  local_e0 = pTVar17;
  if ((((this->ChildrenAttribute).AttributeArray ==
        (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0) ||
      ((this->ChildrenAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("AttributeArray!=nullptr && !IsConst()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                          ,0x74,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  ((this->ChildrenAttribute).AttributeArray)->field_0x8 = 1;
  pTVar18 = (this->ChildrenAttribute).AttributeArray;
  local_110 = pTVar18;
  if ((param_1 < -1) ||
     (iVar13 = (**(code **)(*(longlong *)pTVar3 + 0x60))(pTVar3), iVar13 <= param_1)) {
    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4697388208168632647>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionTransformFacade.cpp"
                        ,0x147,"-1 <= TransformIndex && TransformIndex < Transform.Num()");
    if (bVar12) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.ArrayNum = 0;
    local_108.ArrayMax = 0;
    GeometryCollectionAlgo::GlobalMatrices<UE::Math::TTransform<float>,UE::Math::TTransform<float>_>
              (pTVar3,pTVar17,&local_108);
    iVar13 = param_2->ArrayNum;
    uVar21 = 0;
    if (0 < iVar13) {
      lVar23 = 0;
      do {
        uVar24 = 0;
        if ((int)uVar21 < iVar13) {
          uVar24 = ~uVar21 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar24 = *(uint *)((param_2->AllocatorInstance).Data + lVar23);
        if (((int)uVar24 < 0) ||
           (iVar13 = (**(code **)(*(longlong *)pTVar17 + 0x60))(pTVar17), iVar13 <= (int)uVar24)) {
          bVar12 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4697388208168632657>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionTransformFacade.cpp"
                              ,0x151,"0 <= BoneIndex && BoneIndex < Parents.Num()");
          if (bVar12) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          uVar14 = 0;
          if ((int)uVar24 < *(int *)&pTVar17->field_0x18) {
            uVar14 = ~uVar24 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar14 = *(uint *)(*(longlong *)&pTVar17->field_0x10 + (longlong)(int)uVar24 * 4);
          if (uVar14 != 0xffffffff) {
            if (((int)uVar14 < 0) ||
               (iVar13 = (**(code **)(*(longlong *)pTVar17 + 0x60))(pTVar17), iVar13 <= (int)uVar14)
               ) {
              bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<4697388208168632663>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionTransformFacade.cpp"
                                  ,0x157,"0 <= ParentIndex && ParentIndex < Parents.Num()");
              if (bVar12) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            else {
              uVar15 = 0;
              if ((int)uVar14 < *(int *)&local_110->field_0x18) {
                uVar15 = ~uVar14 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pTVar16 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                        ((longlong)(int)uVar14 * 0x50 + *(longlong *)&local_110->field_0x10);
              local_f8[0] = uVar24;
              if (*(int *)&(pTVar16->Elements).field_0x8 != *(int *)&(pTVar16->Elements).field_0x34)
              {
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                          (pTVar16,uVar24,(int *)local_f8);
              }
            }
          }
          uVar14 = 0;
          if ((int)uVar24 < *(int *)&pTVar17->field_0x18) {
            uVar14 = ~uVar24 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(uint *)(*(longlong *)&pTVar17->field_0x10 + (longlong)(int)uVar24 * 4) = local_114;
        }
        iVar13 = param_2->ArrayNum;
        uVar21 = uVar21 + 1;
        lVar23 = lVar23 + 4;
        pTVar18 = local_110;
        param_1 = local_114;
      } while ((int)uVar21 < iVar13);
    }
    fVar35 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[0];
    fVar36 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[1];
    fVar37 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[2];
    fVar38 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[3];
    fVar26 = UE::Math::TTransform<float>::Identity.Scale3D.m128_f32[0];
    fVar27 = UE::Math::TTransform<float>::Identity.Scale3D.m128_f32[1];
    fVar28 = UE::Math::TTransform<float>::Identity.Scale3D.m128_f32[2];
    fVar29 = UE::Math::TTransform<float>::Identity.Scale3D.m128_f32[3];
    _local_d8 = UE::Math::TTransform<float>::Identity.Rotation;
    local_c8 = UE::Math::TTransform<float>::Identity.Translation;
    local_b8 = UE::Math::TTransform<float>::Identity.Scale3D;
    if (param_1 != 0xffffffff) {
      uVar21 = 0;
      if (param_1 < *(int *)&pTVar18->field_0x18) {
        uVar21 = (uint)~param_1 >> 0x1f;
      }
      if (uVar21 == 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar35 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[0];
        fVar36 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[1];
        fVar37 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[2];
        fVar38 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[3];
        fVar26 = UE::Math::TTransform<float>::Identity.Scale3D.m128_f32[0];
        fVar27 = UE::Math::TTransform<float>::Identity.Scale3D.m128_f32[1];
        fVar28 = UE::Math::TTransform<float>::Identity.Scale3D.m128_f32[2];
        fVar29 = UE::Math::TTransform<float>::Identity.Scale3D.m128_f32[3];
      }
      iVar13 = param_2->ArrayNum;
      local_110 = (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)
                  CONCAT44(local_110._4_4_,iVar13);
      pTVar16 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                ((longlong)param_1 * 0x50 + *(longlong *)&pTVar18->field_0x10);
      pFVar19 = (param_2->AllocatorInstance).Data;
      if (iVar13 < 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L"");
        if (bVar12) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar35 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[0];
        fVar36 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[1];
        fVar37 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[2];
        fVar38 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[3];
        fVar26 = UE::Math::TTransform<float>::Identity.Scale3D.m128_i32[0];
        fVar27 = UE::Math::TTransform<float>::Identity.Scale3D.m128_i32[1];
        fVar28 = UE::Math::TTransform<float>::Identity.Scale3D.m128_i32[2];
        fVar29 = UE::Math::TTransform<float>::Identity.Scale3D.m128_i32[3];
      }
      uVar21 = *(int *)&(pTVar16->Elements).field_0x8 - *(int *)&(pTVar16->Elements).field_0x34;
      uVar24 = iVar13 + uVar21;
      if (uVar21 < uVar24) {
        if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar24);
        }
        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)pTVar16,uVar24);
        if (uVar24 < 4) {
          iVar13 = 1;
        }
        else {
          uVar1 = (ulonglong)((uVar24 >> 1) + 7) * 2 + 1;
          lVar23 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
            }
          }
          local_e8 = (undefined4)lVar23;
          iVar13 = 1 << ((byte)lVar23 & 0x1f);
        }
        if ((pTVar16->HashSize == 0) || (pTVar16->HashSize < iVar13)) {
          pTVar16->HashSize = iVar13;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(pTVar16);
        }
        fVar35 = UE::Math::TTransform<float>::Identity.Rotation.m128_i32[0];
        fVar36 = UE::Math::TTransform<float>::Identity.Rotation.m128_i32[1];
        fVar37 = UE::Math::TTransform<float>::Identity.Rotation.m128_i32[2];
        fVar38 = UE::Math::TTransform<float>::Identity.Rotation.m128_i32[3];
        fVar26 = UE::Math::TTransform<float>::Identity.Scale3D.m128_i32[0];
        fVar27 = UE::Math::TTransform<float>::Identity.Scale3D.m128_i32[1];
        fVar28 = UE::Math::TTransform<float>::Identity.Scale3D.m128_i32[2];
        fVar29 = UE::Math::TTransform<float>::Identity.Scale3D.m128_i32[3];
      }
      pFVar20 = pFVar19 + (longlong)(int)local_110 * 4;
      if (pFVar19 != pFVar20) {
        do {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (pTVar16,&local_e4,(bool *)pFVar19);
          pFVar19 = pFVar19 + 4;
        } while (pFVar19 != pFVar20);
        fVar26 = UE::Math::TTransform<float>::Identity.Scale3D.m128_i32[0];
        fVar27 = UE::Math::TTransform<float>::Identity.Scale3D.m128_i32[1];
        fVar28 = UE::Math::TTransform<float>::Identity.Scale3D.m128_i32[2];
        fVar29 = UE::Math::TTransform<float>::Identity.Scale3D.m128_i32[3];
        fVar35 = UE::Math::TTransform<float>::Identity.Rotation.m128_i32[0];
        fVar36 = UE::Math::TTransform<float>::Identity.Rotation.m128_i32[1];
        fVar37 = UE::Math::TTransform<float>::Identity.Rotation.m128_i32[2];
        fVar38 = UE::Math::TTransform<float>::Identity.Rotation.m128_i32[3];
      }
      uVar21 = 0;
      if (param_1 < local_108.ArrayNum) {
        uVar21 = (uint)~param_1 >> 0x1f;
      }
      if (uVar21 == 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        uVar21 = (uint)CONCAT71(extraout_var,bVar12);
        if (bVar12) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar35 = UE::Math::TTransform<float>::Identity.Rotation.m128_i32[0];
        fVar36 = UE::Math::TTransform<float>::Identity.Rotation.m128_i32[1];
        fVar37 = UE::Math::TTransform<float>::Identity.Rotation.m128_i32[2];
        fVar38 = UE::Math::TTransform<float>::Identity.Rotation.m128_i32[3];
        fVar26 = UE::Math::TTransform<float>::Identity.Scale3D.m128_i32[0];
        fVar27 = UE::Math::TTransform<float>::Identity.Scale3D.m128_i32[1];
        fVar28 = UE::Math::TTransform<float>::Identity.Scale3D.m128_i32[2];
        fVar29 = UE::Math::TTransform<float>::Identity.Scale3D.m128_i32[3];
      }
      pFVar19 = local_108.AllocatorInstance.Data + (longlong)param_1 * 0x30;
      auVar25 = *(undefined1 (*) [16])(pFVar19 + 0x20);
      auVar31._4_4_ =
           -(uint)(GlobalVectorConstants::SmallNumber.m128_f32[1] <
                  (float)(auVar25._4_4_ & _UNK_15061cc74));
      auVar31._0_4_ =
           -(uint)(GlobalVectorConstants::SmallNumber.m128_f32[0] <
                  (float)(auVar25._0_4_ & __xmm_7fffffff7fffffff7fffffff7fffffff));
      auVar31._8_4_ =
           -(uint)(GlobalVectorConstants::SmallNumber.m128_f32[2] <
                  (float)(auVar25._8_4_ & _UNK_15061cc78));
      auVar31._12_4_ =
           -(uint)(GlobalVectorConstants::SmallNumber.m128_f32[3] <
                  (float)(auVar25._12_4_ & _UNK_15061cc7c));
      iVar13 = movmskps(uVar21,auVar31);
      if (iVar13 == 0) {
        local_b8.m128_f32[1] = fVar27;
        local_b8.m128_f32[0] = fVar26;
        local_b8.m128_f32[2] = fVar28;
        local_b8.m128_f32[3] = fVar29;
        local_c8 = UE::Math::TTransform<float>::Identity.Translation;
      }
      else {
        fVar35 = *(float *)pFVar19 * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
        fVar36 = *(float *)(pFVar19 + 4) * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
        fVar37 = *(float *)(pFVar19 + 8) * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
        fVar38 = *(float *)(pFVar19 + 0xc) * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
        auVar31 = blendps(auVar25,(undefined1  [16])GlobalVectorConstants::FloatOne,8);
        auVar25 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar31);
        auVar39._0_4_ =
             ~-(uint)((float)(__xmm_7fffffff7fffffff7fffffff7fffffff & auVar31._0_4_) <=
                     GlobalVectorConstants::SmallNumber.m128_f32[0]) & auVar25._0_4_;
        auVar39._4_4_ =
             ~-(uint)((float)(_UNK_15061cc74 & auVar31._4_4_) <=
                     GlobalVectorConstants::SmallNumber.m128_f32[1]) & auVar25._4_4_;
        auVar39._8_4_ =
             ~-(uint)((float)(_UNK_15061cc78 & auVar31._8_4_) <=
                     GlobalVectorConstants::SmallNumber.m128_f32[2]) & auVar25._8_4_;
        auVar39._12_4_ =
             ~-(uint)((float)(_UNK_15061cc7c & auVar31._12_4_) <=
                     GlobalVectorConstants::SmallNumber.m128_f32[3]) & auVar25._12_4_;
        local_b8 = (__m128)insertps(auVar39,auVar39,8);
        fVar30 = *(float *)(pFVar19 + 0x10) * local_b8.m128_f32[0];
        fVar32 = *(float *)(pFVar19 + 0x14) * local_b8.m128_f32[1];
        fVar33 = *(float *)(pFVar19 + 0x18) * local_b8.m128_f32[2];
        fVar34 = *(float *)(pFVar19 + 0x1c) * local_b8.m128_f32[3];
        fVar26 = fVar32 * fVar35 - fVar36 * fVar30;
        fVar27 = fVar33 * fVar36 - fVar37 * fVar32;
        fVar28 = fVar30 * fVar37 - fVar35 * fVar33;
        fVar29 = fVar34 * fVar38 - fVar38 * fVar34;
        fVar27 = fVar27 + fVar27;
        fVar28 = fVar28 + fVar28;
        fVar26 = fVar26 + fVar26;
        fVar29 = fVar29 + fVar29;
        auVar25._0_4_ = 0.0 - (fVar38 * fVar27 + fVar30 + (fVar26 * fVar36 - fVar28 * fVar37));
        auVar25._4_4_ = 0.0 - (fVar38 * fVar28 + fVar32 + (fVar27 * fVar37 - fVar26 * fVar35));
        auVar25._8_4_ = 0.0 - (fVar38 * fVar26 + fVar33 + (fVar28 * fVar35 - fVar27 * fVar36));
        auVar25._12_4_ = 0.0 - (fVar38 * fVar29 + fVar34 + (fVar29 * fVar38 - fVar29 * fVar38));
        local_c8 = (__m128)insertps(auVar25,auVar25,8);
      }
      local_d8._4_4_ = fVar36;
      local_d8._0_4_ = fVar35;
      fStack_d0 = fVar37;
      fStack_cc = fVar38;
    }
    iVar13 = param_2->ArrayNum;
    uVar21 = 0;
    if (0 < iVar13) {
      lVar23 = 0;
      do {
        uVar24 = 0;
        if ((int)uVar21 < iVar13) {
          uVar24 = ~uVar21 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar24 = *(uint *)((param_2->AllocatorInstance).Data + lVar23);
        uVar14 = 0;
        if ((int)uVar24 < local_108.ArrayNum) {
          uVar14 = ~uVar24 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_a8 = GlobalVectorConstants::Float0001;
        lVar22 = (longlong)(int)uVar24 * 0x30;
        local_98 = GlobalVectorConstants::FloatZero;
        local_88 = GlobalVectorConstants::Float1110;
        UE::Math::TTransform<float>::Multiply
                  ((TTransform<float> *)&local_a8,
                   (TTransform<float> *)(local_108.AllocatorInstance.Data + lVar22),
                   (TTransform<float> *)local_d8);
        uVar6 = local_a8.m128_u64[0];
        uVar7 = local_a8.m128_u64[1];
        uVar8 = local_98.m128_u64[0];
        uVar9 = local_98.m128_u64[1];
        uVar10 = local_88.m128_u64[0];
        uVar11 = local_88.m128_u64[1];
        uVar14 = 0;
        if ((int)uVar24 < *(int *)&local_f0->field_0x18) {
          uVar14 = ~uVar24 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar21 = uVar21 + 1;
        lVar23 = lVar23 + 4;
        lVar4 = *(longlong *)&local_f0->field_0x10;
        *(ulong64 *)(lVar4 + lVar22) = uVar6;
        ((ulong64 *)(lVar4 + lVar22))[1] = uVar7;
        puVar2 = (ulong64 *)(lVar4 + 0x10 + lVar22);
        *puVar2 = uVar8;
        puVar2[1] = uVar9;
        puVar2 = (ulong64 *)(lVar4 + 0x20 + lVar22);
        *puVar2 = uVar10;
        puVar2[1] = uVar11;
        iVar13 = param_2->ArrayNum;
        pTVar17 = local_e0;
        param_1 = local_114;
      } while ((int)uVar21 < iVar13);
    }
    if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.AllocatorInstance.Data);
    }
  }
  bVar12 = HasCycle(pTVar17,param_1);
  if ((bVar12) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4697388208168632691>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionTransformFacade.cpp"
                          ,0x173,"!HasCycle(Parents, TransformIndex)"), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar20 = (param_2->AllocatorInstance).Data;
  iVar13 = param_2->ArrayNum;
  pFVar19 = pFVar20 + (longlong)iVar13 * 4;
  while( true ) {
    if (param_2->ArrayNum != iVar13) {
      local_118[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_118);
    }
    if (pFVar20 == pFVar19) break;
    bVar12 = HasCycle(pTVar17,*(int *)pFVar20);
    if (bVar12) {
      bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4697388208168632692>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionTransformFacade.cpp"
                          ,0x174,"!HasCycle(Parents, SelectedBones)");
      if (!bVar12) {
        return;
      }
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar20 = pFVar20 + 4;
  }
  return;
}

// SetBoneTransformToIdentity @ 144001d70

void __thiscall
GeometryCollection::Facades::FCollectionTransformFacade::SetBoneTransformToIdentity
          (FCollectionTransformFacade *this,int param_1)

{
  float *pfVar1;
  ulong64 *puVar2;
  TManagedArray<UE::Math::TTransform<float>_> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  __m128 _Var10;
  __m128 _Var11;
  bool bVar12;
  uint uVar13;
  longlong lVar14;
  ulong64 local_28;
  ulong64 uStack_20;
  ulong64 local_18;
  ulong64 uStack_10;
  
  lVar14 = (longlong)param_1;
  if ((this->TransformAttribute).ConstAttributeArray !=
      (TManagedArray<UE::Math::TTransform<float>_> *)0x0) {
    if ((((this->TransformAttribute).AttributeArray ==
          (TManagedArray<UE::Math::TTransform<float>_> *)0x0) ||
        ((this->TransformAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("AttributeArray!=nullptr && !IsConst()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                            ,0x74,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    ((this->TransformAttribute).AttributeArray)->field_0x8 = 1;
    _Var11 = UE::Math::TTransform<float>::Identity.Scale3D;
    _Var10 = UE::Math::TTransform<float>::Identity.Translation;
    pTVar3 = (this->TransformAttribute).AttributeArray;
    fVar6 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[0];
    fVar7 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[1];
    fVar8 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[2];
    fVar9 = UE::Math::TTransform<float>::Identity.Rotation.m128_f32[3];
    uVar13 = 0;
    if (param_1 < *(int *)&pTVar3->field_0x18) {
      uVar13 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar4 = *(longlong *)&pTVar3->field_0x10;
    pfVar1 = (float *)(lVar4 + lVar14 * 0x30);
    *pfVar1 = fVar6;
    pfVar1[1] = fVar7;
    pfVar1[2] = fVar8;
    pfVar1[3] = fVar9;
    local_28 = _Var10.m128_u64[0];
    uStack_20 = _Var10.m128_u64[1];
    puVar2 = (ulong64 *)(lVar4 + 0x10 + lVar14 * 0x30);
    *puVar2 = local_28;
    puVar2[1] = uStack_20;
    local_18 = _Var11.m128_u64[0];
    uStack_10 = _Var11.m128_u64[1];
    puVar2 = (ulong64 *)(lVar4 + 0x20 + lVar14 * 0x30);
    *puVar2 = local_18;
    puVar2[1] = uStack_10;
  }
  return;
}

// SetPivot @ 144002460

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
GeometryCollection::Facades::FCollectionTransformFacade::SetPivot
          (FCollectionTransformFacade *this,TTransform<double> *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  TTransform<double> local_68;
  
  auVar6._0_8_ = (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                  *(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 4),
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                  *(uint *)(param_1->Scale3D).XY.m128d_f64);
  auVar6._8_4_ = _UNK_15061cc88 & *(uint *)((param_1->Scale3D).XY.m128d_f64 + 1);
  auVar6._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 0xc);
  lVar5 = -(ulonglong)
           ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
           (double)CONCAT44(_UNK_15061cc8c &
                            *(uint *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 0xc),
                            _UNK_15061cc88 & *(uint *)((param_1->Scale3D).ZW.m128d_f64 + 1)));
  auVar2._8_4_ = (int)lVar5;
  auVar2._0_8_ = -(ulonglong)
                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                  (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                   *(uint *)((longlong)(param_1->Scale3D).ZW.m128d_f64 + 4),
                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                   *(uint *)(param_1->Scale3D).ZW.m128d_f64));
  auVar2._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
  uVar4 = movmskpd((int)this,auVar2);
  lVar5 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar6._8_8_);
  auVar1._8_4_ = (int)lVar5;
  auVar1._0_8_ = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar6._0_8_)
  ;
  auVar1._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
  iVar3 = movmskpd(in_EAX,auVar1);
  if ((uVar4 & 0x3fffffff) == 0 && iVar3 == 0) {
    local_68.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_68.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_68.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_68.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_68.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_68.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    UE::Math::TTransform<double>::InverseFast(param_1,&local_68);
  }
  Transform(this,&local_68);
  return;
}

// Transform @ 1440026e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
GeometryCollection::Facades::FCollectionTransformFacade::Transform
          (FCollectionTransformFacade *this,TTransform<double> *param_1)

{
  FScriptContainerElement *pFVar1;
  ulong64 *puVar2;
  uint uVar3;
  TManagedArray<UE::Math::TTransform<float>_> *pTVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  longlong lVar17;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  undefined1 local_e8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_e0;
  TTransform<double> *local_d0;
  __m128 local_c8;
  __m128 local_b8;
  __m128 local_a8;
  __m128 local_98;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_d0 = param_1;
  Chaos::Facades::FCollectionHierarchyFacade::GetRootIndices(&local_e0,&this->ParentAttribute);
  if ((this->TransformAttribute).ConstAttributeArray !=
      (TManagedArray<UE::Math::TTransform<float>_> *)0x0) {
    if ((((this->TransformAttribute).AttributeArray ==
          (TManagedArray<UE::Math::TTransform<float>_> *)0x0) ||
        ((this->TransformAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("AttributeArray!=nullptr && !IsConst()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                            ,0x74,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    ((this->TransformAttribute).AttributeArray)->field_0x8 = 1;
    pTVar4 = (this->TransformAttribute).AttributeArray;
    iVar14 = local_e0.ArrayNum;
    pFVar1 = local_e0.AllocatorInstance.Data + (longlong)iVar14 * 4;
    FVar16.Data = local_e0.AllocatorInstance.Data;
    while( true ) {
      if (local_e0.ArrayNum != iVar14) {
        local_e8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_e8);
      }
      if (FVar16.Data == pFVar1) break;
      uVar3 = *(uint *)FVar16.Data;
      lVar15 = (longlong)(int)uVar3;
      uVar13 = 0;
      if ((int)uVar3 < *(int *)&pTVar4->field_0x18) {
        uVar13 = ~uVar3 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (local_f8 = lVar15, local_f0 = (longlong)*(int *)&pTVar4->field_0x18,
         bVar12 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_98.m128_f32[0] = (float)(param_1->Rotation).XY.m128d_f64[0];
      local_98.m128_f32[1] = (float)(param_1->Rotation).XY.m128d_f64[1];
      local_98.m128_f32[2] = (float)(param_1->Rotation).ZW.m128d_f64[0];
      local_98.m128_f32[3] = (float)(param_1->Rotation).ZW.m128d_f64[1];
      local_88 = (float)(param_1->Translation).XY.m128d_f64[0];
      fStack_84 = (float)(param_1->Translation).XY.m128d_f64[1];
      fStack_80 = (float)(param_1->Translation).ZW.m128d_f64[0];
      fStack_7c = (float)(param_1->Translation).ZW.m128d_f64[1];
      local_78 = (float)(param_1->Scale3D).XY.m128d_f64[0];
      fStack_74 = (float)(param_1->Scale3D).XY.m128d_f64[1];
      fStack_70 = (float)(param_1->Scale3D).ZW.m128d_f64[0];
      fStack_6c = (float)(param_1->Scale3D).ZW.m128d_f64[1];
      lVar17 = lVar15 * 0x30;
      local_c8 = GlobalVectorConstants::Float0001;
      local_a8 = GlobalVectorConstants::Float1110;
      local_b8 = GlobalVectorConstants::FloatZero;
      UE::Math::TTransform<float>::Multiply
                ((TTransform<float> *)&local_c8,
                 (TTransform<float> *)(*(longlong *)&pTVar4->field_0x10 + lVar17),
                 (TTransform<float> *)&local_98);
      uVar6 = local_c8.m128_u64[0];
      uVar7 = local_c8.m128_u64[1];
      uVar8 = local_b8.m128_u64[0];
      uVar9 = local_b8.m128_u64[1];
      uVar10 = local_a8.m128_u64[0];
      uVar11 = local_a8.m128_u64[1];
      uVar13 = 0;
      if ((int)uVar3 < *(int *)&pTVar4->field_0x18) {
        uVar13 = ~uVar3 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (local_f8 = lVar15, local_f0 = (longlong)*(int *)&pTVar4->field_0x18,
         bVar12 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar15 = *(longlong *)&pTVar4->field_0x10;
      FVar16.Data = FVar16.Data + 4;
      *(ulong64 *)(lVar15 + lVar17) = uVar6;
      ((ulong64 *)(lVar15 + lVar17))[1] = uVar7;
      puVar2 = (ulong64 *)(lVar15 + 0x10 + lVar17);
      *puVar2 = uVar8;
      puVar2[1] = uVar9;
      puVar2 = (ulong64 *)(lVar15 + 0x20 + lVar17);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      param_1 = local_d0;
    }
  }
  if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.AllocatorInstance.Data);
  }
  return;
}

// Transform @ 1440029c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
GeometryCollection::Facades::FCollectionTransformFacade::Transform
          (FCollectionTransformFacade *this,TTransform<double> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  ulong64 *puVar1;
  int iVar2;
  uint uVar3;
  TManagedArray<UE::Math::TTransform<float>_> *pTVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  uint uVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  undefined1 local_e8 [8];
  TTransform<double> *local_e0;
  FScriptContainerElement *local_d8;
  __m128 local_c8;
  __m128 local_b8;
  __m128 local_a8;
  __m128 local_98;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_118;
  if ((this->TransformAttribute).ConstAttributeArray !=
      (TManagedArray<UE::Math::TTransform<float>_> *)0x0) {
    local_e0 = param_1;
    if ((((this->TransformAttribute).AttributeArray ==
          (TManagedArray<UE::Math::TTransform<float>_> *)0x0) ||
        ((this->TransformAttribute).Collection == (FManagedArrayCollection *)0x0)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("AttributeArray!=nullptr && !IsConst()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                            ,0x74,L""), bVar13)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    ((this->TransformAttribute).AttributeArray)->field_0x8 = 1;
    pFVar16 = (param_2->AllocatorInstance).Data;
    iVar2 = param_2->ArrayNum;
    pTVar4 = (this->TransformAttribute).AttributeArray;
    local_d8 = pFVar16 + (longlong)iVar2 * 4;
    while( true ) {
      pFVar6 = local_d8;
      if (param_2->ArrayNum != iVar2) {
        local_e8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_e8);
      }
      if (pFVar16 == pFVar6) break;
      uVar3 = *(uint *)pFVar16;
      lVar15 = (longlong)(int)uVar3;
      if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)&pTVar4->field_0x18)) {
        uVar14 = 0;
        if ((int)uVar3 < *(int *)&pTVar4->field_0x18) {
          uVar14 = ~uVar3 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (local_f8 = lVar15, local_f0 = (longlong)*(int *)&pTVar4->field_0x18,
           bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_98.m128_f32[0] = (float)(param_1->Rotation).XY.m128d_f64[0];
        local_98.m128_f32[1] = (float)(param_1->Rotation).XY.m128d_f64[1];
        local_98.m128_f32[2] = (float)(param_1->Rotation).ZW.m128d_f64[0];
        local_98.m128_f32[3] = (float)(param_1->Rotation).ZW.m128d_f64[1];
        local_88 = (float)(param_1->Translation).XY.m128d_f64[0];
        fStack_84 = (float)(param_1->Translation).XY.m128d_f64[1];
        fStack_80 = (float)(param_1->Translation).ZW.m128d_f64[0];
        fStack_7c = (float)(param_1->Translation).ZW.m128d_f64[1];
        local_78 = (float)(param_1->Scale3D).XY.m128d_f64[0];
        fStack_74 = (float)(param_1->Scale3D).XY.m128d_f64[1];
        fStack_70 = (float)(param_1->Scale3D).ZW.m128d_f64[0];
        fStack_6c = (float)(param_1->Scale3D).ZW.m128d_f64[1];
        lVar17 = lVar15 * 0x30;
        local_c8 = GlobalVectorConstants::Float0001;
        local_a8 = GlobalVectorConstants::Float1110;
        local_b8 = GlobalVectorConstants::FloatZero;
        UE::Math::TTransform<float>::Multiply
                  ((TTransform<float> *)&local_c8,
                   (TTransform<float> *)(*(longlong *)&pTVar4->field_0x10 + lVar17),
                   (TTransform<float> *)&local_98);
        uVar7 = local_c8.m128_u64[0];
        uVar8 = local_c8.m128_u64[1];
        uVar9 = local_b8.m128_u64[0];
        uVar10 = local_b8.m128_u64[1];
        uVar11 = local_a8.m128_u64[0];
        uVar12 = local_a8.m128_u64[1];
        uVar14 = 0;
        if ((int)uVar3 < *(int *)&pTVar4->field_0x18) {
          uVar14 = ~uVar3 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (local_f8 = lVar15, local_f0 = (longlong)*(int *)&pTVar4->field_0x18,
           bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar13)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar15 = *(longlong *)&pTVar4->field_0x10;
        *(ulong64 *)(lVar17 + lVar15) = uVar7;
        ((ulong64 *)(lVar17 + lVar15))[1] = uVar8;
        puVar1 = (ulong64 *)(lVar17 + 0x10 + lVar15);
        *puVar1 = uVar9;
        puVar1[1] = uVar10;
        puVar1 = (ulong64 *)(lVar17 + 0x20 + lVar15);
        *puVar1 = uVar11;
        puVar1[1] = uVar12;
        param_1 = local_e0;
      }
      pFVar16 = pFVar16 + 4;
    }
  }
  return;
}

// UnparentTransform @ 144002e50

void __thiscall
GeometryCollection::Facades::FCollectionTransformFacade::UnparentTransform
          (FCollectionTransformFacade *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  TManagedArray<int> *pTVar5;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar6;
  uint uVar7;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  int local_res8 [2];
  
  if ((this->Collection == (FManagedArrayCollection *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Collection",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionTransformFacade.cpp"
                         ,0x179,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((((this->ParentAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0) &&
       ((this->ChildrenAttribute).ConstAttributeArray !=
        (TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)0x0)) &&
      ((this->TransformAttribute).ConstAttributeArray !=
       (TManagedArray<UE::Math::TTransform<float>_> *)0x0)) &&
     ((iVar3 = FManagedArrayCollection::NumElements
                         (this->Collection,FTransformCollection::TransformGroup), 0 < param_1 &&
      (param_1 < iVar3)))) {
    pTVar5 = TManagedArrayAccessor<int>::Modify(&this->ParentAttribute);
    pTVar6 = TManagedArrayAccessor<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>::Modify
                       (&this->ChildrenAttribute);
    uVar7 = 0;
    if (param_1 < *(int *)&pTVar5->field_0x18) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar7 = *(uint *)(*(longlong *)&pTVar5->field_0x10 + (longlong)param_1 * 4);
    if ((-1 < (int)uVar7) && ((int)uVar7 < iVar3)) {
      uVar4 = 0;
      if ((int)uVar7 < *(int *)&pTVar6->field_0x18) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                ((longlong)(int)uVar7 * 0x50 + *(longlong *)&pTVar6->field_0x10);
      local_res8[0] = param_1;
      if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                  (this_00,param_1,local_res8);
      }
      uVar7 = 0;
      if (param_1 < *(int *)&pTVar5->field_0x18) {
        uVar7 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(undefined4 *)(*(longlong *)&pTVar5->field_0x10 + (longlong)param_1 * 4) = 0xffffffff;
    }
  }
  return;
}

