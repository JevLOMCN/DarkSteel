// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// FKinematicBindingFacade @ 143f89b80

FKinematicBindingFacade * __thiscall
GeometryCollection::Facades::FKinematicBindingFacade::FKinematicBindingFacade
          (FKinematicBindingFacade *this,FManagedArrayCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  TManagedArray<int> *pTVar3;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar4;
  FKinematicBindingFacade *pFVar5;
  FValueType *this_00;
  FValueType *pFVar6;
  FName local_18;
  FName local_10;
  
  this->ConstCollection = param_1;
  this->Collection = param_1;
  pFVar6 = (FValueType *)0x0;
  (this->KinemaitcBoneBindingAttribute).ConstCollection = param_1;
  (this->KinemaitcBoneBindingAttribute).Collection = param_1;
  (this->KinemaitcBoneBindingAttribute).Name = KinematicBoneBindingIndex;
  (this->KinemaitcBoneBindingAttribute).Group = KinematicGroup;
  (this->KinemaitcBoneBindingAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->KinemaitcBoneBindingAttribute).DefaultGroupDependency.Number = 0;
  pTVar3 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,KinematicBoneBindingIndex,KinematicGroup);
  (this->KinemaitcBoneBindingAttribute).AttributeArray = pTVar3;
  (this->KinemaitcBoneBindingAttribute).ConstAttributeArray = pTVar3;
  (this->KinemaitcBoneBindingToGroupAttribute).ConstCollection = param_1;
  (this->KinemaitcBoneBindingToGroupAttribute).Collection = param_1;
  (this->KinemaitcBoneBindingToGroupAttribute).Name = KinematicBoneBindingToGroup;
  (this->KinemaitcBoneBindingToGroupAttribute).Group = KinematicGroup;
  (this->KinemaitcBoneBindingToGroupAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->KinemaitcBoneBindingToGroupAttribute).DefaultGroupDependency.Number = 0;
  local_18 = KinematicBoneBindingToGroup;
  local_10 = KinematicGroup;
  pTVar4 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   *)&param_1->Map,(TTuple<FName,FName> *)&local_18);
  this_00 = (FValueType *)&pTVar4->field_0x10;
  if (pTVar4 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
    this_00 = pFVar6;
  }
  if ((this_00 != (FValueType *)0x0) && (this_00->ArrayType == FStringType)) {
    FManagedArrayCollection::FValueType::MakeUniqueForWrite(this_00);
    pFVar6 = (FValueType *)this_00->ManagedArray;
    if (pFVar6 == (FValueType *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedManagedArray != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                         ,0x319,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FKinematicBindingFacade *)(*pcVar1)();
        return pFVar5;
      }
    }
    *(undefined1 *)&(pFVar6->GroupIndexDependency).Number = 1;
  }
  (this->KinemaitcBoneBindingToGroupAttribute).AttributeArray = (TManagedArray<FString> *)pFVar6;
  (this->KinemaitcBoneBindingToGroupAttribute).ConstAttributeArray =
       (TManagedArray<FString> *)pFVar6;
  return this;
}

// FKinematicBindingFacade @ 143f89cb0

FKinematicBindingFacade * __thiscall
GeometryCollection::Facades::FKinematicBindingFacade::FKinematicBindingFacade
          (FKinematicBindingFacade *this,FManagedArrayCollection *param_1)

{
  TManagedArray<int> *pTVar1;
  TManagedArray<FString> *pTVar2;
  
  this->ConstCollection = param_1;
  this->Collection = (FManagedArrayCollection *)0x0;
  (this->KinemaitcBoneBindingAttribute).ConstCollection = param_1;
  (this->KinemaitcBoneBindingAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->KinemaitcBoneBindingAttribute).Name = KinematicBoneBindingIndex;
  (this->KinemaitcBoneBindingAttribute).Group = KinematicGroup;
  (this->KinemaitcBoneBindingAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->KinemaitcBoneBindingAttribute).DefaultGroupDependency.Number = 0;
  (this->KinemaitcBoneBindingAttribute).AttributeArray = (TManagedArray<int> *)0x0;
  pTVar1 = FManagedArrayCollection::FindAttributeTyped<int>
                     (param_1,KinematicBoneBindingIndex,KinematicGroup);
  (this->KinemaitcBoneBindingAttribute).ConstAttributeArray = pTVar1;
  (this->KinemaitcBoneBindingToGroupAttribute).ConstCollection = param_1;
  (this->KinemaitcBoneBindingToGroupAttribute).Collection = (FManagedArrayCollection *)0x0;
  (this->KinemaitcBoneBindingToGroupAttribute).Name = KinematicBoneBindingToGroup;
  (this->KinemaitcBoneBindingToGroupAttribute).Group = KinematicGroup;
  (this->KinemaitcBoneBindingToGroupAttribute).DefaultGroupDependency.ComparisonIndex = 0;
  (this->KinemaitcBoneBindingToGroupAttribute).DefaultGroupDependency.Number = 0;
  (this->KinemaitcBoneBindingToGroupAttribute).AttributeArray = (TManagedArray<FString> *)0x0;
  pTVar2 = FManagedArrayCollection::FindAttributeTyped<FString>
                     (param_1,KinematicBoneBindingToGroup,KinematicGroup);
  (this->KinemaitcBoneBindingToGroupAttribute).ConstAttributeArray = pTVar2;
  return this;
}

// AddKinematicBinding @ 143f96ad0

int __thiscall
GeometryCollection::Facades::FKinematicBindingFacade::AddKinematicBinding
          (FKinematicBindingFacade *this,FSelectionKey *param_1)

{
  TManagedArray<int> *pTVar1;
  TManagedArray<FString> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FString *pFVar9;
  FString *pFVar10;
  FString local_28;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionKinematicBindingFacade.cpp"
                       ,0x3b,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  if (((this->KinemaitcBoneBindingAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0) &&
     ((this->KinemaitcBoneBindingToGroupAttribute).ConstAttributeArray !=
      (TManagedArray<FString> *)0x0)) {
    if ((this->KinemaitcBoneBindingAttribute).Collection == (FManagedArrayCollection *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x41,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
    }
    uVar7 = FManagedArrayCollection::AddElements
                      ((this->KinemaitcBoneBindingAttribute).Collection,1,
                       (this->KinemaitcBoneBindingAttribute).Group);
    if (((this->KinemaitcBoneBindingAttribute).AttributeArray == (TManagedArray<int> *)0x0) ||
       ((this->KinemaitcBoneBindingAttribute).Collection == (FManagedArrayCollection *)0x0)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
    }
    ((this->KinemaitcBoneBindingAttribute).AttributeArray)->field_0x8 = 1;
    pTVar1 = (this->KinemaitcBoneBindingAttribute).AttributeArray;
    if (((this->KinemaitcBoneBindingToGroupAttribute).AttributeArray ==
         (TManagedArray<FString> *)0x0) ||
       ((this->KinemaitcBoneBindingToGroupAttribute).Collection == (FManagedArrayCollection *)0x0))
    {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("AttributeArray!=nullptr && !IsConst()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                         ,0x74,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
    }
    ((this->KinemaitcBoneBindingToGroupAttribute).AttributeArray)->field_0x8 = 1;
    pTVar2 = (this->KinemaitcBoneBindingToGroupAttribute).AttributeArray;
    iVar6 = param_1->Index;
    uVar8 = 0;
    if ((int)uVar7 < *(int *)&pTVar1->field_0x18) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
    }
    *(int *)(*(longlong *)&pTVar1->field_0x10 + (longlong)(int)uVar7 * 4) = iVar6;
    pFVar9 = ::FName::ToString(&param_1->GroupName,&local_28);
    uVar8 = 0;
    if ((int)uVar7 < *(int *)&pTVar2->field_0x18) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
    }
    pFVar10 = (FString *)((longlong)(int)uVar7 * 0x10 + *(longlong *)&pTVar2->field_0x10);
    if (pFVar10 != pFVar9) {
      pFVar3 = (pFVar10->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar10->Data).AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
      (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar10->Data).ArrayNum = (pFVar9->Data).ArrayNum;
      (pFVar10->Data).ArrayMax = (pFVar9->Data).ArrayMax;
      (pFVar9->Data).ArrayNum = 0;
      (pFVar9->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    return uVar7;
  }
  return -1;
}

// DefineSchema @ 143fa9790

void __thiscall
GeometryCollection::Facades::FKinematicBindingFacade::DefineSchema(FKinematicBindingFacade *this)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  FString *pFVar5;
  FName *pFVar6;
  int iVar7;
  FName local_res10;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionKinematicBindingFacade.cpp"
                       ,0x26,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar4 = ::FName::ToString(&FGeometryCollection::VerticesGroup,&local_18);
  ::FString::FString(&local_38,"_");
  pFVar5 = ::FName::ToString(&FSelectionFacade::BoundGroup,&local_28);
  ::FString::ConcatFF(&local_48,pFVar5,&local_38);
  ::FString::ConcatFF(&local_58,&local_48,pFVar4);
  iVar7 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  pFVar6 = ::FName::FName(&local_res10,iVar7,(wchar_t *)local_58.Data.AllocatorInstance.Data,
                          FNAME_Add);
  FVar1 = *pFVar6;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  TManagedArrayAccessor<int>::Add(&this->KinemaitcBoneBindingAttribute,MakePersistent,FVar1);
  TManagedArrayAccessor<FString>::Add
            (&this->KinemaitcBoneBindingToGroupAttribute,MakePersistent,(FName)0x0);
  return;
}

// GetBoneBindings @ 143fae850

void __thiscall
GeometryCollection::Facades::FKinematicBindingFacade::GetBoneBindings
          (FKinematicBindingFacade *this,FSelectionKey *param_1,int *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<float,TSizedDefaultAllocator<32>_> *param_4)

{
  FSelectionFacade local_18;
  
  local_18.ConstCollection = this->ConstCollection;
  local_18.Collection = (FManagedArrayCollection *)0x0;
  FSelectionFacade::GetSelection(&local_18,param_1,param_2,param_3,param_4);
  return;
}

// GetKinematicBindingKey @ 143fb0fa0

FSelectionKey * __thiscall
GeometryCollection::Facades::FKinematicBindingFacade::GetKinematicBindingKey
          (FKinematicBindingFacade *this,FSelectionKey *__return_storage_ptr__,int param_1)

{
  int iVar1;
  TManagedArray<int> *pTVar2;
  TManagedArray<FString> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FName *pFVar9;
  FSelectionKey *pFVar10;
  longlong lVar11;
  FName local_res8;
  FName local_res10;
  
  lVar11 = (longlong)param_1;
  pFVar9 = ::FName::FName(&local_res8,"");
  pTVar2 = (this->KinemaitcBoneBindingAttribute).ConstAttributeArray;
  __return_storage_ptr__->Index = -1;
  __return_storage_ptr__->GroupName = *pFVar9;
  if ((pTVar2 != (TManagedArray<int> *)0x0) &&
     ((this->KinemaitcBoneBindingToGroupAttribute).ConstAttributeArray !=
      (TManagedArray<FString> *)0x0)) {
    pTVar3 = (this->KinemaitcBoneBindingToGroupAttribute).ConstAttributeArray;
    if (-1 < param_1) {
      iVar7 = FManagedArrayCollection::NumElements(this->ConstCollection,KinematicGroup);
      if (param_1 < iVar7) {
        uVar8 = 0;
        if (param_1 < *(int *)&pTVar3->field_0x18) {
          uVar8 = (uint)~param_1 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            pFVar10 = (FSelectionKey *)(*pcVar5)();
            return pFVar10;
          }
        }
        lVar4 = *(longlong *)&pTVar3->field_0x10;
        iVar1 = *(int *)(lVar4 + 8 + lVar11 * 0x10);
        iVar7 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar7 = 0;
        }
        pFVar9 = ::FName::FName(&local_res10,iVar7,*(wchar_t **)(lVar4 + lVar11 * 0x10),FNAME_Add);
        iVar7 = *(int *)&pTVar2->field_0x18;
        __return_storage_ptr__->GroupName = *pFVar9;
        uVar8 = 0;
        if (param_1 < iVar7) {
          uVar8 = (uint)~param_1 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            pFVar10 = (FSelectionKey *)(*pcVar5)();
            return pFVar10;
          }
        }
        __return_storage_ptr__->Index = *(int *)(*(longlong *)&pTVar2->field_0x10 + lVar11 * 4);
        return __return_storage_ptr__;
      }
    }
    return __return_storage_ptr__;
  }
  return __return_storage_ptr__;
}

// IsValid @ 143fb7d50

bool __thiscall
GeometryCollection::Facades::FKinematicBindingFacade::IsValid(FKinematicBindingFacade *this)

{
  if (((this->KinemaitcBoneBindingAttribute).ConstAttributeArray != (TManagedArray<int> *)0x0) &&
     ((this->KinemaitcBoneBindingToGroupAttribute).ConstAttributeArray !=
      (TManagedArray<FString> *)0x0)) {
    return true;
  }
  return false;
}

// SetBoneBindings @ 143fc7dc0

FSelectionKey * __thiscall
GeometryCollection::Facades::FKinematicBindingFacade::SetBoneBindings
          (FKinematicBindingFacade *this,FSelectionKey *__return_storage_ptr__,int param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FSelectionKey *pFVar3;
  FSelectionFacade local_18;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionKinematicBindingFacade.cpp"
                       ,0x2f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSelectionKey *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_18.ConstCollection = this->Collection;
  local_18.Collection = local_18.ConstCollection;
  FSelectionFacade::AddSelection
            (&local_18,__return_storage_ptr__,param_1,param_2,param_3,
             FGeometryCollection::VerticesGroup,FTransformCollection::TransformGroup);
  return __return_storage_ptr__;
}

