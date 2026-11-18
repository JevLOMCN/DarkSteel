// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 14

// FSelectionFacade @ 143f8d220

FSelectionFacade * __thiscall
GeometryCollection::Facades::FSelectionFacade::FSelectionFacade
          (FSelectionFacade *this,FManagedArrayCollection *param_1)

{
  this->ConstCollection = param_1;
  this->Collection = param_1;
  return this;
}

// FSelectionFacade @ 143f8d240

FSelectionFacade * __thiscall
GeometryCollection::Facades::FSelectionFacade::FSelectionFacade
          (FSelectionFacade *this,FManagedArrayCollection *param_1)

{
  this->ConstCollection = param_1;
  this->Collection = (FManagedArrayCollection *)0x0;
  return this;
}

// AddSelection @ 143f98000

FSelectionKey * __thiscall
GeometryCollection::Facades::FSelectionFacade::AddSelection
          (FSelectionFacade *this,FSelectionKey *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,FName param_3)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FSelectionKey *pFVar5;
  FString *pFVar6;
  FString *pFVar7;
  FName *pFVar8;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar9;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar10;
  uint uVar11;
  int iVar12;
  FName local_res10;
  TArray<int,TSizedDefaultAllocator<32>_> *local_res18;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_res18 = param_1;
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionSelectionFacade.cpp"
                       ,0x6c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FSelectionKey *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar6 = ::FName::ToString(&param_3,&local_48);
  ::FString::FString(&local_68,"_");
  pFVar7 = ::FName::ToString(&WeightedUnboundGroup,&local_58);
  ::FString::ConcatFF(&local_78,pFVar7,&local_68);
  ::FString::ConcatFF(&local_88,&local_78,pFVar6);
  iVar12 = local_88.Data.ArrayNum + -1;
  if (local_88.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  pFVar8 = ::FName::FName(&local_res10,iVar12,(wchar_t *)local_88.Data.AllocatorInstance.Data,
                          FNAME_Add);
  FVar1 = *pFVar8;
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  InitWeightedUnboundedGroup(this,FVar1,param_3);
  uVar4 = FManagedArrayCollection::AddElements(this->Collection,1,FVar1);
  pTVar9 = FManagedArrayCollection::ModifyAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
                     (this->Collection,IndexAttribute,FVar1);
  uVar11 = 0;
  if ((int)uVar4 < *(int *)&pTVar9->field_0x18) {
    uVar11 = ~uVar4 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FSelectionKey *)(*pcVar2)();
      return pFVar5;
    }
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)&pTVar9->field_0x10 + (longlong)(int)uVar4 * 0x10),local_res18);
  pTVar10 = FManagedArrayCollection::ModifyAttribute<TArray<float,TSizedDefaultAllocator<32>_>_>
                      (this->Collection,WeightAttribute,FVar1);
  uVar11 = 0;
  if ((int)uVar4 < *(int *)&pTVar10->field_0x18) {
    uVar11 = ~uVar4 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FSelectionKey *)(*pcVar2)();
      return pFVar5;
    }
  }
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<float,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)&pTVar10->field_0x10 + (longlong)(int)uVar4 * 0x10),param_2);
  __return_storage_ptr__->GroupName = FVar1;
  __return_storage_ptr__->Index = uVar4;
  return __return_storage_ptr__;
}

// AddSelection @ 143f98270

FSelectionKey * __thiscall
GeometryCollection::Facades::FSelectionFacade::AddSelection
          (FSelectionFacade *this,FSelectionKey *__return_storage_ptr__,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,FName param_2)

{
  FName FVar1;
  FManagedArrayCollection *pFVar2;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FSelectionKey *pFVar10;
  FString *pFVar11;
  FString *pFVar12;
  FName *pFVar13;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar14;
  undefined1 *puVar15;
  FName local_res8;
  FName local_res20;
  undefined2 local_a0;
  undefined2 uStack_9e;
  FConstructionParameters local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_res20 = param_2;
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionSelectionFacade.cpp"
                       ,0x60,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FSelectionKey *)(*pcVar3)();
      return pFVar10;
    }
  }
  pFVar11 = ::FName::ToString(&local_res20,&local_48);
  ::FString::FString(&local_68,"_");
  pFVar12 = ::FName::ToString(&UnboundGroup,&local_58);
  ::FString::ConcatFF(&local_78,pFVar12,&local_68);
  ::FString::ConcatFF(&local_88,&local_78,pFVar11);
  uVar7 = local_88.Data.ArrayNum - 1;
  if (local_88.Data.ArrayNum == 0) {
    uVar7 = 0;
  }
  pFVar13 = ::FName::FName(&local_res8,uVar7,(wchar_t *)local_88.Data.AllocatorInstance.Data,
                           FNAME_Add);
  FVar1 = *pFVar13;
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  FVar5 = local_res20;
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionSelectionFacade.cpp"
                       ,0x27,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FSelectionKey *)(*pcVar3)();
      return pFVar10;
    }
  }
  pFVar2 = this->Collection;
  uVar7 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  FVar4 = IndexAttribute;
  if (*(int *)&(pFVar2->GroupInfo).field_0x8 != *(int *)&(pFVar2->GroupInfo).field_0x34) {
    puVar15 = *(undefined1 **)&(pFVar2->GroupInfo).field_0x40;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(pFVar2->GroupInfo).field_0x38;
    }
    iVar8 = *(int *)(puVar15 +
                    (ulonglong)(*(int *)&(pFVar2->GroupInfo).field_0x48 - 1U & FVar1.Number + uVar7)
                    * 4);
    if (iVar8 != -1) {
      do {
        if (*(FName *)(*(longlong *)&pFVar2->GroupInfo + (longlong)iVar8 * 0x14) == FVar1)
        goto LAB_143f98480;
        iVar8 = *(int *)(*(longlong *)&pFVar2->GroupInfo + 0xc + (longlong)iVar8 * 0x14);
      } while (iVar8 != -1);
    }
  }
  pFVar2 = this->Collection;
  local_98.GroupIndexDependency = FVar5;
  local_98.Saved = true;
  local_98.bAllowCircularDependency = false;
  local_98._10_2_ = uStack_9e;
  bVar6 = FManagedArrayCollection::HasAttribute(pFVar2,IndexAttribute,FVar1);
  if (!bVar6) {
    FManagedArrayCollection::AddNewAttributeImpl<TArray<int,TSizedDefaultAllocator<32>_>_>
              (pFVar2,FVar4,FVar1,&local_98);
  }
  FManagedArrayCollection::ModifyAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
            (pFVar2,FVar4,FVar1);
LAB_143f98480:
  pTVar14 = FManagedArrayCollection::FindAttributeTyped<TArray<int,TSizedDefaultAllocator<32>_>_>
                      (this->Collection,IndexAttribute,FVar1);
  if (pTVar14 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8793673795979182125>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionSelectionFacade.cpp"
                       ,0x2d,
                       "Collection->FindAttributeTyped<TArray<int32>>(FSelectionFacade::IndexAttribute, GroupName) != nullptr"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FSelectionKey *)(*pcVar3)();
      return pFVar10;
    }
  }
  uVar9 = FManagedArrayCollection::AddElements(this->Collection,1,FVar1);
  pTVar14 = FManagedArrayCollection::ModifyAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
                      (this->Collection,IndexAttribute,FVar1);
  uVar7 = 0;
  if ((int)uVar9 < *(int *)&pTVar14->field_0x18) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FSelectionKey *)(*pcVar3)();
      return pFVar10;
    }
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             ((longlong)(int)uVar9 * 0x10 + *(longlong *)&pTVar14->field_0x10),param_1);
  __return_storage_ptr__->GroupName = UnboundGroup;
  __return_storage_ptr__->Index = uVar9;
  return __return_storage_ptr__;
}

// AddSelection @ 143f98580

FSelectionKey * __thiscall
GeometryCollection::Facades::FSelectionFacade::AddSelection
          (FSelectionFacade *this,FSelectionKey *__return_storage_ptr__,int param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3,FName param_4,FName param_5)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FSelectionKey *pFVar5;
  FString *pFVar6;
  FString *pFVar7;
  FName *pFVar8;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar9;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar10;
  TManagedArray<int> *pTVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  FName local_res10;
  int local_res18;
  TArray<int,TSizedDefaultAllocator<32>_> *local_res20;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  local_res18 = param_1;
  local_res20 = param_2;
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionSelectionFacade.cpp"
                       ,0x86,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FSelectionKey *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar6 = ::FName::ToString(&param_4,&local_58);
  ::FString::FString(&local_78,"_");
  pFVar7 = ::FName::ToString(&WeightedBoundGroup,&local_68);
  ::FString::ConcatFF(&local_88,pFVar7,&local_78);
  ::FString::ConcatFF(&local_98,&local_88,pFVar6);
  iVar13 = local_98.Data.ArrayNum + -1;
  if (local_98.Data.ArrayNum == 0) {
    iVar13 = 0;
  }
  pFVar8 = ::FName::FName(&local_res10,iVar13,(wchar_t *)local_98.Data.AllocatorInstance.Data,
                          FNAME_Add);
  FVar1 = *pFVar8;
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  InitWeightedBoundedGroup(this,FVar1,param_4,param_5);
  uVar4 = FManagedArrayCollection::AddElements(this->Collection,1,FVar1);
  pTVar9 = FManagedArrayCollection::ModifyAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
                     (this->Collection,IndexAttribute,FVar1);
  uVar15 = ~uVar4 >> 0x1f;
  uVar12 = 0;
  if ((int)uVar4 < *(int *)&pTVar9->field_0x18) {
    uVar12 = uVar15;
  }
  if (uVar12 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FSelectionKey *)(*pcVar2)();
      return pFVar5;
    }
  }
  lVar14 = (longlong)(int)uVar4 * 0x10;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(*(longlong *)&pTVar9->field_0x10 + lVar14),
             local_res20);
  pTVar10 = FManagedArrayCollection::ModifyAttribute<TArray<float,TSizedDefaultAllocator<32>_>_>
                      (this->Collection,WeightAttribute,FVar1);
  uVar12 = 0;
  if ((int)uVar4 < *(int *)&pTVar10->field_0x18) {
    uVar12 = uVar15;
  }
  if (uVar12 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FSelectionKey *)(*pcVar2)();
      return pFVar5;
    }
  }
  TArray<float,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<float,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)&pTVar10->field_0x10 + lVar14),param_3);
  pTVar11 = FManagedArrayCollection::ModifyAttribute<int>(this->Collection,BoneIndexAttribute,FVar1)
  ;
  uVar12 = 0;
  if ((int)uVar4 < *(int *)&pTVar11->field_0x18) {
    uVar12 = uVar15;
  }
  if (uVar12 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FSelectionKey *)(*pcVar2)();
      return pFVar5;
    }
  }
  lVar14 = *(longlong *)&pTVar11->field_0x10;
  __return_storage_ptr__->Index = uVar4;
  __return_storage_ptr__->GroupName = FVar1;
  *(int *)(lVar14 + (longlong)(int)uVar4 * 4) = local_res18;
  return __return_storage_ptr__;
}

// AddSelection @ 143f98860

FSelectionKey * __thiscall
GeometryCollection::Facades::FSelectionFacade::AddSelection
          (FSelectionFacade *this,FSelectionKey *__return_storage_ptr__,int param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,FName param_3,FName param_4)

{
  FName FVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FSelectionKey *pFVar6;
  FString *pFVar7;
  FString *pFVar8;
  FName *pFVar9;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar10;
  TManagedArray<int> *pTVar11;
  uint uVar12;
  int iVar13;
  FName local_res10;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionSelectionFacade.cpp"
                       ,0x79,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FSelectionKey *)(*pcVar3)();
      return pFVar6;
    }
  }
  pFVar7 = ::FName::ToString(&param_3,&local_48);
  ::FString::FString(&local_68,"_");
  pFVar8 = ::FName::ToString(&BoundGroup,&local_58);
  ::FString::ConcatFF(&local_78,pFVar8,&local_68);
  ::FString::ConcatFF(&local_88,&local_78,pFVar7);
  iVar13 = local_88.Data.ArrayNum + -1;
  if (local_88.Data.ArrayNum == 0) {
    iVar13 = 0;
  }
  pFVar9 = ::FName::FName(&local_res10,iVar13,(wchar_t *)local_88.Data.AllocatorInstance.Data,
                          FNAME_Add);
  FVar1 = *pFVar9;
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  InitBoundedGroup(this,FVar1,param_3,param_4);
  uVar5 = FManagedArrayCollection::AddElements(this->Collection,1,FVar1);
  pTVar10 = FManagedArrayCollection::ModifyAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
                      (this->Collection,IndexAttribute,FVar1);
  uVar12 = 0;
  if ((int)uVar5 < *(int *)&pTVar10->field_0x18) {
    uVar12 = ~uVar5 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FSelectionKey *)(*pcVar3)();
      return pFVar6;
    }
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             ((longlong)(int)uVar5 * 0x10 + *(longlong *)&pTVar10->field_0x10),param_2);
  pTVar11 = FManagedArrayCollection::ModifyAttribute<int>(this->Collection,BoneIndexAttribute,FVar1)
  ;
  uVar12 = 0;
  if ((int)uVar5 < *(int *)&pTVar11->field_0x18) {
    uVar12 = ~uVar5 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FSelectionKey *)(*pcVar3)();
      return pFVar6;
    }
  }
  lVar2 = *(longlong *)&pTVar11->field_0x10;
  __return_storage_ptr__->GroupName = FVar1;
  __return_storage_ptr__->Index = uVar5;
  *(int *)(lVar2 + (longlong)(int)uVar5 * 4) = param_1;
  return __return_storage_ptr__;
}

// GetSelection @ 143fb2920

void __thiscall
GeometryCollection::Facades::FSelectionFacade::GetSelection
          (FSelectionFacade *this,FSelectionKey *param_1,int *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  FName FVar1;
  FManagedArrayCollection *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar8;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar9;
  TManagedArray<int> *pTVar10;
  uint uVar11;
  FValueType *pFVar12;
  undefined1 *puVar13;
  FName local_38;
  FName local_30;
  FName local_28;
  FName local_20;
  
  FVar1 = param_1->GroupName;
  pFVar2 = this->ConstCollection;
  uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(pFVar2->GroupInfo).field_0x8 != *(int *)&(pFVar2->GroupInfo).field_0x34) {
    puVar13 = *(undefined1 **)&(pFVar2->GroupInfo).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(pFVar2->GroupInfo).field_0x38;
    }
    iVar6 = *(int *)(puVar13 +
                    (ulonglong)(*(int *)&(pFVar2->GroupInfo).field_0x48 - 1U & FVar1.Number + uVar5)
                    * 4);
    if (iVar6 != -1) {
      do {
        if (*(FName *)(*(longlong *)&pFVar2->GroupInfo + (longlong)iVar6 * 0x14) == FVar1) {
          if (param_1->Index < 0) {
            return;
          }
          iVar6 = param_1->Index;
          iVar7 = FManagedArrayCollection::NumElements(this->ConstCollection,param_1->GroupName);
          if (iVar7 <= iVar6) {
            return;
          }
          local_38 = IndexAttribute;
          local_30 = param_1->GroupName;
          pTVar8 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                           *)&this->ConstCollection->Map,(TTuple<FName,FName> *)&local_38);
          pFVar12 = (FValueType *)&pTVar8->field_0x10;
          if (pTVar8 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
            pFVar12 = (FValueType *)0x0;
          }
          if ((pFVar12 != (FValueType *)0x0) &&
             (pTVar9 = FManagedArrayCollection::FValueType::
                       GetTypedPtr<TArray<int,TSizedDefaultAllocator<32>_>_>(pFVar12),
             pTVar9 != (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) {
            pTVar9 = FManagedArrayCollection::GetAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
                               (this->ConstCollection,IndexAttribute,param_1->GroupName);
            uVar5 = param_1->Index;
            uVar11 = 0;
            if ((int)uVar5 < *(int *)&pTVar9->field_0x18) {
              uVar11 = ~uVar5 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            TArray<int,TSizedDefaultAllocator<32>_>::operator=
                      (param_3,(TArray<int,TSizedDefaultAllocator<32>_> *)
                               ((longlong)(int)uVar5 * 0x10 + *(longlong *)&pTVar9->field_0x10));
          }
          local_28 = BoneIndexAttribute;
          local_20 = param_1->GroupName;
          pTVar8 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                           *)&this->ConstCollection->Map,(TTuple<FName,FName> *)&local_28);
          pFVar12 = (FValueType *)&pTVar8->field_0x10;
          if (pTVar8 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
            pFVar12 = (FValueType *)0x0;
          }
          if (pFVar12 == (FValueType *)0x0) {
            return;
          }
          pTVar10 = FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar12);
          if (pTVar10 == (TManagedArray<int> *)0x0) {
            return;
          }
          pTVar10 = FManagedArrayCollection::GetAttribute<int>
                              (this->ConstCollection,BoneIndexAttribute,param_1->GroupName);
          uVar5 = param_1->Index;
          uVar11 = 0;
          if ((int)uVar5 < *(int *)&pTVar10->field_0x18) {
            uVar11 = ~uVar5 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *param_2 = *(int *)(*(longlong *)&pTVar10->field_0x10 + (longlong)(int)uVar5 * 4);
          return;
        }
        iVar6 = *(int *)(*(longlong *)&pFVar2->GroupInfo + 0xc + (longlong)iVar6 * 0x14);
      } while (iVar6 != -1);
    }
  }
  return;
}

// GetSelection @ 143fb2b70

void __thiscall
GeometryCollection::Facades::FSelectionFacade::GetSelection
          (FSelectionFacade *this,FSelectionKey *param_1,int *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<float,TSizedDefaultAllocator<32>_> *param_4)

{
  uint uVar1;
  FName FVar2;
  FManagedArrayCollection *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar9;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar10;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar11;
  TManagedArray<int> *pTVar12;
  uint uVar13;
  FValueType *pFVar14;
  undefined1 *puVar15;
  FValueType *pFVar16;
  FName local_48;
  FName local_40;
  FName local_38;
  FName local_30;
  FName local_28;
  FName local_20;
  
  FVar2 = param_1->GroupName;
  pFVar3 = this->ConstCollection;
  uVar6 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (*(int *)&(pFVar3->GroupInfo).field_0x8 != *(int *)&(pFVar3->GroupInfo).field_0x34) {
    puVar15 = *(undefined1 **)&(pFVar3->GroupInfo).field_0x40;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(pFVar3->GroupInfo).field_0x38;
    }
    iVar7 = *(int *)(puVar15 +
                    (ulonglong)(*(int *)&(pFVar3->GroupInfo).field_0x48 - 1U & FVar2.Number + uVar6)
                    * 4);
    if (iVar7 != -1) {
      do {
        if (*(FName *)(*(longlong *)&pFVar3->GroupInfo + (longlong)iVar7 * 0x14) == FVar2) {
          if (param_1->Index < 0) {
            return;
          }
          iVar7 = param_1->Index;
          iVar8 = FManagedArrayCollection::NumElements(this->ConstCollection,param_1->GroupName);
          if (iVar8 <= iVar7) {
            return;
          }
          local_48 = IndexAttribute;
          local_40 = param_1->GroupName;
          pTVar9 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                           *)&this->ConstCollection->Map,(TTuple<FName,FName> *)&local_48);
          pFVar16 = (FValueType *)0x0;
          pFVar14 = (FValueType *)&pTVar9->field_0x10;
          if (pTVar9 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
            pFVar14 = pFVar16;
          }
          uVar6 = 0;
          if ((pFVar14 != (FValueType *)0x0) &&
             (pTVar10 = FManagedArrayCollection::FValueType::
                        GetTypedPtr<TArray<int,TSizedDefaultAllocator<32>_>_>(pFVar14),
             pTVar10 != (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) {
            pTVar10 = FManagedArrayCollection::
                      GetAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
                                (this->ConstCollection,IndexAttribute,param_1->GroupName);
            uVar1 = param_1->Index;
            uVar13 = uVar6;
            if ((int)uVar1 < *(int *)&pTVar10->field_0x18) {
              uVar13 = ~uVar1 >> 0x1f;
            }
            if ((uVar13 == 0) &&
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
            TArray<int,TSizedDefaultAllocator<32>_>::operator=
                      (param_3,(TArray<int,TSizedDefaultAllocator<32>_> *)
                               ((longlong)(int)uVar1 * 0x10 + *(longlong *)&pTVar10->field_0x10));
          }
          local_38 = WeightAttribute;
          local_30 = param_1->GroupName;
          pTVar9 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                           *)&this->ConstCollection->Map,(TTuple<FName,FName> *)&local_38);
          pFVar14 = (FValueType *)&pTVar9->field_0x10;
          if (pTVar9 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
            pFVar14 = pFVar16;
          }
          if ((pFVar14 != (FValueType *)0x0) &&
             (pTVar11 = FManagedArrayCollection::FValueType::
                        GetTypedPtr<TArray<float,TSizedDefaultAllocator<32>_>_>(pFVar14),
             pTVar11 != (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0)) {
            pTVar11 = FManagedArrayCollection::
                      GetAttribute<TArray<float,TSizedDefaultAllocator<32>_>_>
                                (this->ConstCollection,WeightAttribute,param_1->GroupName);
            uVar1 = param_1->Index;
            uVar13 = uVar6;
            if ((int)uVar1 < *(int *)&pTVar11->field_0x18) {
              uVar13 = ~uVar1 >> 0x1f;
            }
            if ((uVar13 == 0) &&
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
            TArray<float,TSizedDefaultAllocator<32>_>::operator=
                      (param_4,(TArray<float,TSizedDefaultAllocator<32>_> *)
                               ((longlong)(int)uVar1 * 0x10 + *(longlong *)&pTVar11->field_0x10));
          }
          local_28 = BoneIndexAttribute;
          local_20 = param_1->GroupName;
          pTVar9 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                           *)&this->ConstCollection->Map,(TTuple<FName,FName> *)&local_28);
          pFVar14 = (FValueType *)&pTVar9->field_0x10;
          if (pTVar9 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
            pFVar14 = pFVar16;
          }
          if (pFVar14 == (FValueType *)0x0) {
            return;
          }
          pTVar12 = FManagedArrayCollection::FValueType::GetTypedPtr<int>(pFVar14);
          if (pTVar12 == (TManagedArray<int> *)0x0) {
            return;
          }
          pTVar12 = FManagedArrayCollection::GetAttribute<int>
                              (this->ConstCollection,BoneIndexAttribute,param_1->GroupName);
          uVar1 = param_1->Index;
          if ((int)uVar1 < *(int *)&pTVar12->field_0x18) {
            uVar6 = ~uVar1 >> 0x1f;
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
          *param_2 = *(int *)(*(longlong *)&pTVar12->field_0x10 + (longlong)(int)uVar1 * 4);
          return;
        }
        iVar7 = *(int *)(*(longlong *)&pFVar3->GroupInfo + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  return;
}

// GetSelection @ 143fb2e80

void __thiscall
GeometryCollection::Facades::FSelectionFacade::GetSelection
          (FSelectionFacade *this,FSelectionKey *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FName FVar1;
  FManagedArrayCollection *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar8;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar9;
  FValueType *this_00;
  undefined1 *puVar10;
  uint uVar11;
  FName local_28;
  FName local_20;
  
  FVar1 = param_1->GroupName;
  pFVar2 = this->ConstCollection;
  uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(pFVar2->GroupInfo).field_0x8 != *(int *)&(pFVar2->GroupInfo).field_0x34) {
    puVar10 = *(undefined1 **)&(pFVar2->GroupInfo).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(pFVar2->GroupInfo).field_0x38;
    }
    iVar6 = *(int *)(puVar10 +
                    (ulonglong)(*(int *)&(pFVar2->GroupInfo).field_0x48 - 1U & FVar1.Number + uVar5)
                    * 4);
    if (iVar6 != -1) {
      do {
        if (*(FName *)(*(longlong *)&pFVar2->GroupInfo + (longlong)iVar6 * 0x14) == FVar1) {
          if (param_1->Index < 0) {
            return;
          }
          iVar6 = param_1->Index;
          iVar7 = FManagedArrayCollection::NumElements(this->ConstCollection,param_1->GroupName);
          if (iVar7 <= iVar6) {
            return;
          }
          local_28 = IndexAttribute;
          local_20 = param_1->GroupName;
          pTVar8 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                           *)&this->ConstCollection->Map,(TTuple<FName,FName> *)&local_28);
          this_00 = (FValueType *)&pTVar8->field_0x10;
          if (pTVar8 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
            this_00 = (FValueType *)0x0;
          }
          if (this_00 == (FValueType *)0x0) {
            return;
          }
          pTVar9 = FManagedArrayCollection::FValueType::
                   GetTypedPtr<TArray<int,TSizedDefaultAllocator<32>_>_>(this_00);
          if (pTVar9 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
            return;
          }
          pTVar9 = FManagedArrayCollection::GetAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
                             (this->ConstCollection,IndexAttribute,param_1->GroupName);
          uVar5 = param_1->Index;
          uVar11 = 0;
          if ((int)uVar5 < *(int *)&pTVar9->field_0x18) {
            uVar11 = ~uVar5 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          TArray<int,TSizedDefaultAllocator<32>_>::operator=
                    (param_2,(TArray<int,TSizedDefaultAllocator<32>_> *)
                             ((longlong)(int)uVar5 * 0x10 + *(longlong *)&pTVar9->field_0x10));
          return;
        }
        iVar6 = *(int *)(*(longlong *)&pFVar2->GroupInfo + 0xc + (longlong)iVar6 * 0x14);
      } while (iVar6 != -1);
    }
  }
  return;
}

// GetSelection @ 143fb3020

void __thiscall
GeometryCollection::Facades::FSelectionFacade::GetSelection
          (FSelectionFacade *this,FSelectionKey *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  FName FVar1;
  FManagedArrayCollection *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar8;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar9;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar10;
  uint uVar11;
  FValueType *pFVar12;
  undefined1 *puVar13;
  FName local_38;
  FName local_30;
  FName local_28;
  FName local_20;
  
  FVar1 = param_1->GroupName;
  pFVar2 = this->ConstCollection;
  uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(pFVar2->GroupInfo).field_0x8 != *(int *)&(pFVar2->GroupInfo).field_0x34) {
    puVar13 = *(undefined1 **)&(pFVar2->GroupInfo).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(pFVar2->GroupInfo).field_0x38;
    }
    iVar6 = *(int *)(puVar13 +
                    (ulonglong)(*(int *)&(pFVar2->GroupInfo).field_0x48 - 1U & FVar1.Number + uVar5)
                    * 4);
    if (iVar6 != -1) {
      do {
        if (*(FName *)(*(longlong *)&pFVar2->GroupInfo + (longlong)iVar6 * 0x14) == FVar1) {
          if (param_1->Index < 0) {
            return;
          }
          iVar6 = param_1->Index;
          iVar7 = FManagedArrayCollection::NumElements(this->ConstCollection,param_1->GroupName);
          if (iVar7 <= iVar6) {
            return;
          }
          local_38 = IndexAttribute;
          local_30 = param_1->GroupName;
          pTVar8 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                           *)&this->ConstCollection->Map,(TTuple<FName,FName> *)&local_38);
          pFVar12 = (FValueType *)&pTVar8->field_0x10;
          if (pTVar8 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
            pFVar12 = (FValueType *)0x0;
          }
          if ((pFVar12 != (FValueType *)0x0) &&
             (pTVar9 = FManagedArrayCollection::FValueType::
                       GetTypedPtr<TArray<int,TSizedDefaultAllocator<32>_>_>(pFVar12),
             pTVar9 != (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) {
            pTVar9 = FManagedArrayCollection::GetAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
                               (this->ConstCollection,IndexAttribute,param_1->GroupName);
            uVar5 = param_1->Index;
            uVar11 = 0;
            if ((int)uVar5 < *(int *)&pTVar9->field_0x18) {
              uVar11 = ~uVar5 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            TArray<int,TSizedDefaultAllocator<32>_>::operator=
                      (param_2,(TArray<int,TSizedDefaultAllocator<32>_> *)
                               ((longlong)(int)uVar5 * 0x10 + *(longlong *)&pTVar9->field_0x10));
          }
          local_28 = WeightAttribute;
          local_20 = param_1->GroupName;
          pTVar8 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                           *)&this->ConstCollection->Map,(TTuple<FName,FName> *)&local_28);
          pFVar12 = (FValueType *)&pTVar8->field_0x10;
          if (pTVar8 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) {
            pFVar12 = (FValueType *)0x0;
          }
          if (pFVar12 == (FValueType *)0x0) {
            return;
          }
          pTVar10 = FManagedArrayCollection::FValueType::
                    GetTypedPtr<TArray<float,TSizedDefaultAllocator<32>_>_>(pFVar12);
          if (pTVar10 == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
            return;
          }
          pTVar10 = FManagedArrayCollection::
                    GetAttribute<TArray<float,TSizedDefaultAllocator<32>_>_>
                              (this->ConstCollection,WeightAttribute,param_1->GroupName);
          uVar5 = param_1->Index;
          uVar11 = 0;
          if ((int)uVar5 < *(int *)&pTVar10->field_0x18) {
            uVar11 = ~uVar5 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          TArray<float,TSizedDefaultAllocator<32>_>::operator=
                    (param_3,(TArray<float,TSizedDefaultAllocator<32>_> *)
                             ((longlong)(int)uVar5 * 0x10 + *(longlong *)&pTVar10->field_0x10));
          return;
        }
        iVar6 = *(int *)(*(longlong *)&pFVar2->GroupInfo + 0xc + (longlong)iVar6 * 0x14);
      } while (iVar6 != -1);
    }
  }
  return;
}

// InitBoundedGroup @ 143fb6380

void __thiscall
GeometryCollection::Facades::FSelectionFacade::InitBoundedGroup
          (FSelectionFacade *this,FName param_1,FName param_2,FName param_3)

{
  FManagedArrayCollection *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar7;
  TManagedArray<int> *pTVar8;
  undefined1 *puVar9;
  undefined2 local_40;
  undefined2 uStack_3e;
  undefined2 local_30;
  undefined2 uStack_2e;
  FConstructionParameters local_28;
  FConstructionParameters local_18;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionSelectionFacade.cpp"
                       ,0x3f,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = this->Collection;
  uVar5 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  FVar3 = IndexAttribute;
  if (*(int *)&(pFVar1->GroupInfo).field_0x8 != *(int *)&(pFVar1->GroupInfo).field_0x34) {
    puVar9 = *(undefined1 **)&(pFVar1->GroupInfo).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(pFVar1->GroupInfo).field_0x38;
    }
    iVar6 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(pFVar1->GroupInfo).field_0x48 - 1U & param_1.Number + uVar5
                              ) * 4);
    if (iVar6 != -1) {
      do {
        if (*(FName *)(*(longlong *)&pFVar1->GroupInfo + (longlong)iVar6 * 0x14) == param_1)
        goto LAB_143fb6505;
        iVar6 = *(int *)(*(longlong *)&pFVar1->GroupInfo + 0xc + (longlong)iVar6 * 0x14);
      } while (iVar6 != -1);
    }
  }
  pFVar1 = this->Collection;
  local_28.Saved = true;
  local_28.bAllowCircularDependency = false;
  local_28._10_2_ = uStack_3e;
  local_28.GroupIndexDependency = param_2;
  bVar4 = FManagedArrayCollection::HasAttribute(pFVar1,IndexAttribute,param_1);
  if (!bVar4) {
    FManagedArrayCollection::AddNewAttributeImpl<TArray<int,TSizedDefaultAllocator<32>_>_>
              (pFVar1,FVar3,param_1,&local_28);
  }
  FManagedArrayCollection::ModifyAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
            (pFVar1,FVar3,param_1);
  FVar3 = BoneIndexAttribute;
  pFVar1 = this->Collection;
  local_18.Saved = true;
  local_18.bAllowCircularDependency = false;
  local_18._10_2_ = uStack_2e;
  local_18.GroupIndexDependency = param_3;
  bVar4 = FManagedArrayCollection::HasAttribute(pFVar1,BoneIndexAttribute,param_1);
  if (!bVar4) {
    FManagedArrayCollection::AddNewAttributeImpl<int>(pFVar1,FVar3,param_1,&local_18);
  }
  FManagedArrayCollection::ModifyAttribute<int>(pFVar1,FVar3,param_1);
LAB_143fb6505:
  pTVar7 = FManagedArrayCollection::FindAttributeTyped<TArray<int,TSizedDefaultAllocator<32>_>_>
                     (this->Collection,IndexAttribute,param_1);
  if (pTVar7 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8793673795979182150>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionSelectionFacade.cpp"
                       ,0x46,
                       "Collection->FindAttributeTyped<TArray<int32>>(FSelectionFacade::IndexAttribute, GroupName) != nullptr"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar8 = FManagedArrayCollection::FindAttributeTyped<int>
                     (this->Collection,BoneIndexAttribute,param_1);
  if (pTVar8 == (TManagedArray<int> *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8793673795979182151>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionSelectionFacade.cpp"
                       ,0x47,
                       "Collection->FindAttributeTyped<int32>(FSelectionFacade::BoneIndexAttribute, GroupName) != nullptr"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// InitUnboundedGroup @ 143fb6d90

void __thiscall
GeometryCollection::Facades::FSelectionFacade::InitUnboundedGroup
          (FSelectionFacade *this,FName param_1,FName param_2)

{
  FManagedArrayCollection *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar7;
  undefined1 *puVar8;
  undefined2 local_20;
  undefined2 uStack_1e;
  FConstructionParameters local_18;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionSelectionFacade.cpp"
                       ,0x27,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = this->Collection;
  uVar5 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  FVar3 = IndexAttribute;
  if (*(int *)&(pFVar1->GroupInfo).field_0x8 != *(int *)&(pFVar1->GroupInfo).field_0x34) {
    puVar8 = *(undefined1 **)&(pFVar1->GroupInfo).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(pFVar1->GroupInfo).field_0x38;
    }
    iVar6 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(pFVar1->GroupInfo).field_0x48 - 1U & param_1.Number + uVar5
                              ) * 4);
    if (iVar6 != -1) {
      do {
        if (*(FName *)(*(longlong *)&pFVar1->GroupInfo + (longlong)iVar6 * 0x14) == param_1)
        goto LAB_143fb6ea3;
        iVar6 = *(int *)(*(longlong *)&pFVar1->GroupInfo + 0xc + (longlong)iVar6 * 0x14);
      } while (iVar6 != -1);
    }
  }
  pFVar1 = this->Collection;
  local_18.Saved = true;
  local_18.bAllowCircularDependency = false;
  local_18._10_2_ = uStack_1e;
  local_18.GroupIndexDependency = param_2;
  bVar4 = FManagedArrayCollection::HasAttribute(pFVar1,IndexAttribute,param_1);
  if (!bVar4) {
    FManagedArrayCollection::AddNewAttributeImpl<TArray<int,TSizedDefaultAllocator<32>_>_>
              (pFVar1,FVar3,param_1,&local_18);
  }
  FManagedArrayCollection::ModifyAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
            (pFVar1,FVar3,param_1);
LAB_143fb6ea3:
  pTVar7 = FManagedArrayCollection::FindAttributeTyped<TArray<int,TSizedDefaultAllocator<32>_>_>
                     (this->Collection,IndexAttribute,param_1);
  if (pTVar7 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8793673795979182125>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionSelectionFacade.cpp"
                       ,0x2d,
                       "Collection->FindAttributeTyped<TArray<int32>>(FSelectionFacade::IndexAttribute, GroupName) != nullptr"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// InitWeightedBoundedGroup @ 143fb6f10

void __thiscall
GeometryCollection::Facades::FSelectionFacade::InitWeightedBoundedGroup
          (FSelectionFacade *this,FName param_1,FName param_2,FName param_3)

{
  FManagedArrayCollection *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar7;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar8;
  TManagedArray<int> *pTVar9;
  undefined1 *puVar10;
  undefined2 local_70;
  undefined2 uStack_6e;
  undefined2 local_60;
  undefined2 uStack_5e;
  undefined2 local_50;
  undefined2 uStack_4e;
  FConstructionParameters local_48;
  FConstructionParameters local_38;
  FConstructionParameters local_28;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionSelectionFacade.cpp"
                       ,0x4c,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = this->Collection;
  uVar5 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  FVar3 = IndexAttribute;
  if (*(int *)&(pFVar1->GroupInfo).field_0x8 != *(int *)&(pFVar1->GroupInfo).field_0x34) {
    puVar10 = *(undefined1 **)&(pFVar1->GroupInfo).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(pFVar1->GroupInfo).field_0x38;
    }
    iVar6 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(pFVar1->GroupInfo).field_0x48 - 1U & param_1.Number + uVar5) * 4);
    if (iVar6 != -1) {
      do {
        if (*(FName *)(*(longlong *)&pFVar1->GroupInfo + (longlong)iVar6 * 0x14) == param_1)
        goto LAB_143fb70e4;
        iVar6 = *(int *)(*(longlong *)&pFVar1->GroupInfo + 0xc + (longlong)iVar6 * 0x14);
      } while (iVar6 != -1);
    }
  }
  pFVar1 = this->Collection;
  local_48.Saved = true;
  local_48.bAllowCircularDependency = false;
  local_48._10_2_ = uStack_6e;
  local_48.GroupIndexDependency = param_2;
  bVar4 = FManagedArrayCollection::HasAttribute(pFVar1,IndexAttribute,param_1);
  if (!bVar4) {
    FManagedArrayCollection::AddNewAttributeImpl<TArray<int,TSizedDefaultAllocator<32>_>_>
              (pFVar1,FVar3,param_1,&local_48);
  }
  FManagedArrayCollection::ModifyAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
            (pFVar1,FVar3,param_1);
  FVar3 = WeightAttribute;
  pFVar1 = this->Collection;
  local_38.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_38.GroupIndexDependency.Number = 0;
  local_38.Saved = true;
  local_38.bAllowCircularDependency = false;
  local_38._10_2_ = uStack_5e;
  bVar4 = FManagedArrayCollection::HasAttribute(pFVar1,WeightAttribute,param_1);
  if (!bVar4) {
    FManagedArrayCollection::AddNewAttributeImpl<TArray<float,TSizedDefaultAllocator<32>_>_>
              (pFVar1,FVar3,param_1,&local_38);
  }
  FManagedArrayCollection::ModifyAttribute<TArray<float,TSizedDefaultAllocator<32>_>_>
            (pFVar1,FVar3,param_1);
  FVar3 = BoneIndexAttribute;
  pFVar1 = this->Collection;
  local_28.Saved = true;
  local_28.bAllowCircularDependency = false;
  local_28._10_2_ = uStack_4e;
  local_28.GroupIndexDependency = param_3;
  bVar4 = FManagedArrayCollection::HasAttribute(pFVar1,BoneIndexAttribute,param_1);
  if (!bVar4) {
    FManagedArrayCollection::AddNewAttributeImpl<int>(pFVar1,FVar3,param_1,&local_28);
  }
  FManagedArrayCollection::ModifyAttribute<int>(pFVar1,FVar3,param_1);
LAB_143fb70e4:
  pTVar7 = FManagedArrayCollection::FindAttributeTyped<TArray<int,TSizedDefaultAllocator<32>_>_>
                     (this->Collection,IndexAttribute,param_1);
  if (pTVar7 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8793673795979182164>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionSelectionFacade.cpp"
                       ,0x54,
                       "Collection->FindAttributeTyped<TArray<int32>>(FSelectionFacade::IndexAttribute, GroupName) != nullptr"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar8 = FManagedArrayCollection::FindAttributeTyped<TArray<float,TSizedDefaultAllocator<32>_>_>
                     (this->Collection,WeightAttribute,param_1);
  if (pTVar8 == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8793673795979182165>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionSelectionFacade.cpp"
                       ,0x55,
                       "Collection->FindAttributeTyped<TArray<float>>(FSelectionFacade::WeightAttribute, GroupName) != nullptr"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar9 = FManagedArrayCollection::FindAttributeTyped<int>
                     (this->Collection,BoneIndexAttribute,param_1);
  if (pTVar9 == (TManagedArray<int> *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8793673795979182166>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionSelectionFacade.cpp"
                       ,0x56,
                       "Collection->FindAttributeTyped<int32>(FSelectionFacade::BoneIndexAttribute, GroupName) != nullptr"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// InitWeightedUnboundedGroup @ 143fb71e0

void __thiscall
GeometryCollection::Facades::FSelectionFacade::InitWeightedUnboundedGroup
          (FSelectionFacade *this,FName param_1,FName param_2)

{
  FManagedArrayCollection *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar7;
  TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar8;
  undefined1 *puVar9;
  undefined2 local_40;
  undefined2 uStack_3e;
  undefined2 local_30;
  undefined2 uStack_2e;
  FConstructionParameters local_28;
  FConstructionParameters local_18;
  
  if (this->Collection == (FManagedArrayCollection *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsConst()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionSelectionFacade.cpp"
                       ,0x32,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = this->Collection;
  uVar5 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  FVar3 = IndexAttribute;
  if (*(int *)&(pFVar1->GroupInfo).field_0x8 != *(int *)&(pFVar1->GroupInfo).field_0x34) {
    puVar9 = *(undefined1 **)&(pFVar1->GroupInfo).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(pFVar1->GroupInfo).field_0x38;
    }
    iVar6 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(pFVar1->GroupInfo).field_0x48 - 1U & param_1.Number + uVar5
                              ) * 4);
    if (iVar6 != -1) {
      do {
        if (*(FName *)(*(longlong *)&pFVar1->GroupInfo + (longlong)iVar6 * 0x14) == param_1)
        goto LAB_143fb735f;
        iVar6 = *(int *)(*(longlong *)&pFVar1->GroupInfo + 0xc + (longlong)iVar6 * 0x14);
      } while (iVar6 != -1);
    }
  }
  pFVar1 = this->Collection;
  local_28.Saved = true;
  local_28.bAllowCircularDependency = false;
  local_28._10_2_ = uStack_3e;
  local_28.GroupIndexDependency = param_2;
  bVar4 = FManagedArrayCollection::HasAttribute(pFVar1,IndexAttribute,param_1);
  if (!bVar4) {
    FManagedArrayCollection::AddNewAttributeImpl<TArray<int,TSizedDefaultAllocator<32>_>_>
              (pFVar1,FVar3,param_1,&local_28);
  }
  FManagedArrayCollection::ModifyAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
            (pFVar1,FVar3,param_1);
  FVar3 = WeightAttribute;
  pFVar1 = this->Collection;
  local_18.GroupIndexDependency.ComparisonIndex.Value = 0;
  local_18.GroupIndexDependency.Number = 0;
  local_18.Saved = true;
  local_18.bAllowCircularDependency = false;
  local_18._10_2_ = uStack_2e;
  bVar4 = FManagedArrayCollection::HasAttribute(pFVar1,WeightAttribute,param_1);
  if (!bVar4) {
    FManagedArrayCollection::AddNewAttributeImpl<TArray<float,TSizedDefaultAllocator<32>_>_>
              (pFVar1,FVar3,param_1,&local_18);
  }
  FManagedArrayCollection::ModifyAttribute<TArray<float,TSizedDefaultAllocator<32>_>_>
            (pFVar1,FVar3,param_1);
LAB_143fb735f:
  pTVar7 = FManagedArrayCollection::FindAttributeTyped<TArray<int,TSizedDefaultAllocator<32>_>_>
                     (this->Collection,IndexAttribute,param_1);
  if (pTVar7 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8793673795979182137>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionSelectionFacade.cpp"
                       ,0x39,
                       "Collection->FindAttributeTyped<TArray<int32>>(FSelectionFacade::IndexAttribute, GroupName) != nullptr"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar8 = FManagedArrayCollection::FindAttributeTyped<TArray<float,TSizedDefaultAllocator<32>_>_>
                     (this->Collection,WeightAttribute,param_1);
  if (pTVar8 == (TManagedArray<TArray<float,TSizedDefaultAllocator<32>_>_> *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8793673795979182138>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\GeometryCollection\\Facades\\CollectionSelectionFacade.cpp"
                       ,0x3a,
                       "Collection->FindAttributeTyped<TArray<float>>(FSelectionFacade::WeightAttribute, GroupName) != nullptr"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

