// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e872770

UScriptStruct * __cdecl FGeometrySelectionToVertexSelectionDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometrySelectionToVertexSelectionDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGeometrySelectionToVertexSelectionDataflowNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FGeometrySelectionToVertexSelectionDataflowNode
                           ,(UObject *)pUVar1,L"GeometrySelectionToVertexSelectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGeometrySelectionToVertexSelectionDataflowNode.
         OuterSingleton;
}

// GetType @ 14e8727d0

FName __thiscall
FGeometrySelectionToVertexSelectionDataflowNode::GetType
          (FGeometrySelectionToVertexSelectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGeometrySelectionToVertexSelectionDataflowNode");
  return in_RDX;
}

// IsA @ 14e872840

bool __thiscall
FGeometrySelectionToVertexSelectionDataflowNode::IsA
          (FGeometrySelectionToVertexSelectionDataflowNode *this,FName param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  pFVar3 = ::FName::ToString(&local_res10,&local_18);
  ::FName::FName(local_res18,"FGeometrySelectionToVertexSelectionDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8728a8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8728a8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8728c6;
      }
    }
  }
  bVar5 = true;
LAB_14e8728c6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e872900

FStructOnScope * __thiscall
FGeometrySelectionToVertexSelectionDataflowNode::NewStructOnScope
          (FGeometrySelectionToVertexSelectionDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGeometrySelectionToVertexSelectionDataflowNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FGeometrySelectionToVertexSelectionDataflowNode.
      OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGeometrySelectionToVertexSelectionDataflowNode
                           ,(UObject *)pUVar2,L"GeometrySelectionToVertexSelectionDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGeometrySelectionToVertexSelectionDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e872980

void __thiscall
FGeometrySelectionToVertexSelectionDataflowNode::SerializeInternal
          (FGeometrySelectionToVertexSelectionDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometrySelectionToVertexSelectionDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGeometrySelectionToVertexSelectionDataflowNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FGeometrySelectionToVertexSelectionDataflowNode
                           ,(UObject *)pUVar1,L"GeometrySelectionToVertexSelectionDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGeometrySelectionToVertexSelectionDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGeometrySelectionToVertexSelectionDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  return;
}

// GetDisplayName @ 14e8729f0

FName __thiscall
FGeometrySelectionToVertexSelectionDataflowNode::GetDisplayName
          (FGeometrySelectionToVertexSelectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometrySelectionToVertexSelection");
  return in_RDX;
}

// GetCategory @ 14e872ab0

FName __thiscall
FGeometrySelectionToVertexSelectionDataflowNode::GetCategory
          (FGeometrySelectionToVertexSelectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Selection|All");
  return in_RDX;
}

// GetTags @ 14e872ae0

FString * __thiscall
FGeometrySelectionToVertexSelectionDataflowNode::GetTags
          (FGeometrySelectionToVertexSelectionDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e872b50

UScriptStruct * __thiscall
FGeometrySelectionToVertexSelectionDataflowNode::TypedScriptStruct
          (FGeometrySelectionToVertexSelectionDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometrySelectionToVertexSelectionDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGeometrySelectionToVertexSelectionDataflowNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FGeometrySelectionToVertexSelectionDataflowNode
                           ,(UObject *)pUVar1,L"GeometrySelectionToVertexSelectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGeometrySelectionToVertexSelectionDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14e872ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGeometrySelectionToVertexSelectionDataflowNode::Evaluate
          (FGeometrySelectionToVertexSelectionDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  FManagedArrayCollection *this_00;
  FName *pFVar11;
  TManagedArray<int> *pTVar12;
  TManagedArray<int> *pTVar13;
  FDataflowInput *pFVar14;
  FDataflowSelection *this_01;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar15;
  ForAnyElementType _Str;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  undefined1 auStackY_188 [32];
  undefined1 local_138;
  undefined1 local_137 [3];
  int local_134;
  TArray<int,TSizedDefaultAllocator<32>_> local_130;
  int local_120 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_118;
  TManagedArray<int> *local_108;
  TManagedArray<int> *local_100;
  FGeometrySelectionToVertexSelectionDataflowNode *local_f8;
  FString local_f0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_e0;
  FContext *local_d0;
  FString local_c8;
  FConnectionReference local_b8;
  FConnectionReference local_a0;
  FName local_88;
  FName local_80;
  TArray<int,TSizedDefaultAllocator<32>_> local_78;
  FDataflowSelection local_68;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_f8 = this;
  local_d0 = param_1;
  puVar10 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowVertexSelection *)puVar10 == &this->VertexSelection) {
    this_00 = FDataflowNode::GetValue<FManagedArrayCollection>
                        ((FDataflowNode *)this,param_1,&this->Collection);
    iVar6 = FManagedArrayCollection::NumElements(this_00,FGeometryCollection::GeometryGroup);
    local_68.GroupName = FDataflowVertexSelection::VerticesGroupName;
    local_68.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_68.SelectionArray.NumBits = 0;
    local_68.SelectionArray.MaxBits = 0x80;
    FDataflowSelection::InitializeFromCollection(&local_68,this_00,false);
    FVar4 = FGeometryCollection::GeometryGroup;
    pFVar11 = ::FName::FName(&local_88,"VertexStart");
    pTVar12 = FManagedArrayCollection::FindAttributeTyped<int>(this_00,*pFVar11,FVar4);
    FVar4 = FGeometryCollection::GeometryGroup;
    local_100 = pTVar12;
    pFVar11 = ::FName::FName(&local_80,"VertexCount");
    pTVar13 = FManagedArrayCollection::FindAttributeTyped<int>(this_00,*pFVar11,FVar4);
    local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_130.ArrayNum = 0;
    local_130.ArrayMax = 0;
    local_a0.Index = -1;
    local_a0.ContainerReference = (void *)0x0;
    local_108 = pTVar13;
    local_a0.Reference = &this->GeometrySelection;
    pFVar14 = FDataflowNode::FindInput((FDataflowNode *)this,&local_a0);
    if (pFVar14->Connection == (FDataflowOutput *)0x0) {
      local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e0.ArrayNum = 0;
      local_e0.ArrayMax = 0;
      ::FString::ParseIntoArray(&this->GeometryIndices,&local_e0,L" ",true);
      iVar2 = local_e0.ArrayNum;
      pFVar17 = local_e0.AllocatorInstance.Data + (longlong)local_e0.ArrayNum * 0x10;
      FVar18.Data = local_e0.AllocatorInstance.Data;
      while( true ) {
        if (local_e0.ArrayNum != iVar2) {
          local_138 = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_138);
        }
        if (FVar18.Data == pFVar17) break;
        local_f0.Data.ArrayNum = *(int *)(FVar18.Data + 8);
        lVar16 = (longlong)local_f0.Data.ArrayNum;
        _Src = *(void **)FVar18.Data;
        local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_f0.Data.ArrayNum == 0) {
          local_f0.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_f0.Data.ArrayNum,0,(ForAnyElementType *)&local_f0,
                     local_f0.Data.ArrayNum,&local_f0.Data.ArrayMax);
          memcpy(local_f0.Data.AllocatorInstance.Data,_Src,lVar16 * 2);
        }
        bVar5 = ::FString::IsNumeric(&local_f0);
        if (bVar5) {
          _Str.Data = (FScriptContainerElement *)L"";
          if (local_f0.Data.ArrayNum != 0) {
            _Str.Data = local_f0.Data.AllocatorInstance.Data;
          }
          local_120[0] = _wtoi((wchar_t *)_Str.Data);
          if ((local_120[0] < 0) || (iVar6 <= local_120[0])) {
            ::FString::FString(&local_c8,"Invalid geometry index found.");
            if (1 < (byte)LogTemp._0_1_) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
            }
            if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.Data.AllocatorInstance.Data);
            }
          }
          else {
            if (((local_130.AllocatorInstance.Data <= (FScriptContainerElement *)local_120) &&
                ((FScriptContainerElement *)local_120 <
                 local_130.AllocatorInstance.Data + (longlong)local_130.ArrayMax * 4)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar7 = local_130.ArrayNum;
            if (local_130.ArrayNum == local_130.ArrayMax) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_130.AllocatorInstance,&local_130.ArrayMax);
            }
            local_130.ArrayNum = iVar7 + 1;
            *(int *)(local_130.AllocatorInstance.Data + (longlong)iVar7 * 4) = local_120[0];
          }
        }
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
        FVar18.Data = FVar18.Data + 0x10;
      }
      DestructItems<FString,int>((FString *)local_e0.AllocatorInstance.Data,local_e0.ArrayNum);
      pTVar12 = local_100;
      pTVar13 = local_108;
      this = local_f8;
      if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.AllocatorInstance.Data);
        pTVar12 = local_100;
        pTVar13 = local_108;
        this = local_f8;
      }
    }
    else {
      local_b8.Index = -1;
      local_b8.ContainerReference = (void *)0x0;
      local_b8.Reference = &this->GeometrySelection;
      pFVar14 = FDataflowNode::FindInput((FDataflowNode *)this,&local_b8);
      this_01 = (FDataflowSelection *)
                FDataflowInput::GetValue<FDataflowGeometrySelection>
                          (pFVar14,param_1,local_b8.Reference);
      pTVar15 = FDataflowSelection::AsArray(this_01,&local_78);
      if (&local_130 != pTVar15) {
        if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.AllocatorInstance.Data);
        }
        local_130.AllocatorInstance.Data = (pTVar15->AllocatorInstance).Data;
        (pTVar15->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        local_130.ArrayNum = pTVar15->ArrayNum;
        local_130.ArrayMax = pTVar15->ArrayMax;
        pTVar15->ArrayNum = 0;
        pTVar15->ArrayMax = 0;
      }
      if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
    }
    if ((pTVar12 != (TManagedArray<int> *)0x0) && (pTVar13 != (TManagedArray<int> *)0x0)) {
      iVar6 = local_130.ArrayNum;
      local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_118.ArrayNum = 0;
      local_118.ArrayMax = 0;
      pFVar17 = local_130.AllocatorInstance.Data + (longlong)local_130.ArrayNum * 4;
      FVar18.Data = local_130.AllocatorInstance.Data;
      while( true ) {
        if (local_130.ArrayNum != iVar6) {
          local_137[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_137);
        }
        if (FVar18.Data == pFVar17) break;
        uVar1 = *(uint *)FVar18.Data;
        if (((int)uVar1 < 0) || (*(int *)&pTVar12->field_0x18 <= (int)uVar1)) {
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3808587718884063597>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionNodes\\Private\\Dataflow\\GeometryCollectionSelectionNodes.cpp"
                             ,0x693,"VertexStart->IsValidIndex(GeometryIdx)");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          uVar8 = 0;
          if ((int)uVar1 < *(int *)&pTVar12->field_0x18) {
            uVar8 = ~uVar1 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar2 = *(int *)((longlong)(int)uVar1 * 4 + *(longlong *)&pTVar12->field_0x10);
          uVar8 = 0;
          if ((int)uVar1 < *(int *)&local_108->field_0x18) {
            uVar8 = ~uVar1 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar7 = *(int *)((longlong)(int)uVar1 * 4 + *(longlong *)&local_108->field_0x10);
          pTVar12 = local_100;
          for (local_134 = iVar2; local_100 = pTVar12, local_134 < iVar7 + iVar2;
              local_134 = local_134 + 1) {
            if (((local_118.AllocatorInstance.Data <= (FScriptContainerElement *)&local_134) &&
                ((FScriptContainerElement *)&local_134 <
                 local_118.AllocatorInstance.Data + (longlong)local_118.ArrayMax * 4)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (local_118.ArrayNum == local_118.ArrayMax) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_118.AllocatorInstance,&local_118.ArrayMax);
              local_118.ArrayNum = iVar9;
            }
            lVar16 = (longlong)local_118.ArrayNum;
            local_118.ArrayNum = local_118.ArrayNum + 1;
            *(int *)(local_118.AllocatorInstance.Data + lVar16 * 4) = local_134;
            pTVar12 = local_100;
          }
        }
        FVar18.Data = FVar18.Data + 4;
      }
      FDataflowSelection::SetFromArray(&local_68,&local_118);
      this = local_f8;
      if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.AllocatorInstance.Data);
        this = local_f8;
      }
    }
    FDataflowNode::SetValue<FDataflowVertexSelection,FDataflowVertexSelection>
              ((FDataflowNode *)this,local_d0,(FDataflowVertexSelection *)&local_68,
               &this->VertexSelection);
    if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.AllocatorInstance.Data);
    }
    if (local_68.SelectionArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
       ) {
      FMemory::Free((void *)local_68.SelectionArray.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// FGeometrySelectionToVertexSelectionDataflowNode @ 14e91f540

FGeometrySelectionToVertexSelectionDataflowNode * __thiscall
FGeometrySelectionToVertexSelectionDataflowNode::FGeometrySelectionToVertexSelectionDataflowNode
          (FGeometrySelectionToVertexSelectionDataflowNode *this,FNodeParameters *param_1,
          FGuid *param_2)

{
  FDataflowGeometrySelection *pFVar1;
  FDataflowVertexSelection *pFVar2;
  uint uVar3;
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this->_padding_ = (longlong)&___7FGeometrySelectionToVertexSelectionDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  (this->GeometryIndices).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar1 = &this->GeometrySelection;
  (this->GeometryIndices).Data.ArrayNum = 0;
  (this->GeometryIndices).Data.ArrayMax = 0;
  pFVar2 = &this->VertexSelection;
  uVar3 = FDataflowGeometrySelection::GeometryGroupName.Number;
  *(uint *)&pFVar1->field_0x0 = FDataflowGeometrySelection::GeometryGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar3;
  *(undefined8 *)&(this->GeometrySelection).field_0x18 = 0;
  *(undefined4 *)&(this->GeometrySelection).field_0x20 = 0;
  *(undefined4 *)&(this->GeometrySelection).field_0x24 = 0x80;
  uVar3 = FDataflowVertexSelection::VerticesGroupName.Number;
  *(uint *)&pFVar2->field_0x0 = FDataflowVertexSelection::VerticesGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar2->field_0x4 = uVar3;
  *(undefined8 *)&(this->VertexSelection).field_0x18 = 0;
  *(undefined4 *)&(this->VertexSelection).field_0x20 = 0;
  *(undefined4 *)&(this->VertexSelection).field_0x24 = 0x80;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->Collection;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = pFVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = pFVar2;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

// FGeometrySelectionToVertexSelectionDataflowNode @ 14e91f690

FGeometrySelectionToVertexSelectionDataflowNode * __thiscall
FGeometrySelectionToVertexSelectionDataflowNode::FGeometrySelectionToVertexSelectionDataflowNode
          (FGeometrySelectionToVertexSelectionDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FGeometrySelectionToVertexSelectionDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  (this->GeometryIndices).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeometryIndices).Data.ArrayNum = 0;
  (this->GeometryIndices).Data.ArrayMax = 0;
  uVar1 = FDataflowGeometrySelection::GeometryGroupName.Number;
  *(uint *)&(this->GeometrySelection).field_0x0 =
       FDataflowGeometrySelection::GeometryGroupName.ComparisonIndex.Value;
  *(uint *)&(this->GeometrySelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->GeometrySelection).field_0x18 = 0;
  *(undefined4 *)&(this->GeometrySelection).field_0x20 = 0;
  *(undefined4 *)&(this->GeometrySelection).field_0x24 = 0x80;
  uVar1 = FDataflowVertexSelection::VerticesGroupName.Number;
  *(uint *)&(this->VertexSelection).field_0x0 =
       FDataflowVertexSelection::VerticesGroupName.ComparisonIndex.Value;
  *(uint *)&(this->VertexSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->VertexSelection).field_0x18 = 0;
  *(undefined4 *)&(this->VertexSelection).field_0x20 = 0;
  *(undefined4 *)&(this->VertexSelection).field_0x24 = 0x80;
  return this;
}

