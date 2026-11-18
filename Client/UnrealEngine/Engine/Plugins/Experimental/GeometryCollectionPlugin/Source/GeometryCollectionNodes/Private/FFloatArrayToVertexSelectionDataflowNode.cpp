// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e849f20

UScriptStruct * __cdecl FFloatArrayToVertexSelectionDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode,
                         (UObject *)pUVar1,L"FloatArrayToVertexSelectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode.OuterSingleton;
}

// GetType @ 14e84a000

FName __thiscall
FFloatArrayToVertexSelectionDataflowNode::GetType(FFloatArrayToVertexSelectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FFloatArrayToVertexSelectionDataflowNode");
  return in_RDX;
}

// IsA @ 14e84b120

bool __thiscall
FFloatArrayToVertexSelectionDataflowNode::IsA
          (FFloatArrayToVertexSelectionDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FFloatArrayToVertexSelectionDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e84b188;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e84b188:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e84b1a6;
      }
    }
  }
  bVar5 = true;
LAB_14e84b1a6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e84b2a0

FStructOnScope * __thiscall
FFloatArrayToVertexSelectionDataflowNode::NewStructOnScope
          (FFloatArrayToVertexSelectionDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode,
                           (UObject *)pUVar2,L"FloatArrayToVertexSelectionDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e84b3e0

void __thiscall
FFloatArrayToVertexSelectionDataflowNode::SerializeInternal
          (FFloatArrayToVertexSelectionDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode,
                         (UObject *)pUVar1,L"FloatArrayToVertexSelectionDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e84b45d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e84b500

FName __thiscall
FFloatArrayToVertexSelectionDataflowNode::GetDisplayName
          (FFloatArrayToVertexSelectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FloatArrayToVertexSelection");
  return in_RDX;
}

// GetCategory @ 14e84b560

FName __thiscall
FFloatArrayToVertexSelectionDataflowNode::GetCategory
          (FFloatArrayToVertexSelectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Utilities|Array");
  return in_RDX;
}

// GetTags @ 14e84b5f0

FString * __thiscall
FFloatArrayToVertexSelectionDataflowNode::GetTags
          (FFloatArrayToVertexSelectionDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e84b650

UScriptStruct * __thiscall
FFloatArrayToVertexSelectionDataflowNode::TypedScriptStruct
          (FFloatArrayToVertexSelectionDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode,
                         (UObject *)pUVar1,L"FloatArrayToVertexSelectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FFloatArrayToVertexSelectionDataflowNode.OuterSingleton;
}

// Evaluate @ 14e84bbc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FFloatArrayToVertexSelectionDataflowNode::Evaluate
          (FFloatArrayToVertexSelectionDataflowNode *this,FContext *param_1,FDataflowOutput *param_2
          )

{
  FScriptContainerElement *pFVar1;
  uint *puVar2;
  ECompareOperation1Enum EVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined1 *puVar7;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar8;
  ForElementType<unsigned_int> FVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  FDataflowSelection local_68;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_98;
  puVar7 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowVertexSelection *)puVar7 == &this->VertexSelection) {
    pTVar8 = FDataflowNode::GetValue<TArray<float,TSizedDefaultAllocator<32>_>_>
                       ((FDataflowNode *)this,param_1,&this->FloatArray);
    local_68.GroupName = FDataflowVertexSelection::VerticesGroupName;
    local_68.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_68.SelectionArray.NumBits = 0;
    local_68.SelectionArray.MaxBits = 0x80;
    FDataflowSelection::Initialize(&local_68,pTVar8->ArrayNum,false);
    iVar10 = pTVar8->ArrayNum;
    uVar11 = 0;
    if (0 < iVar10) {
      lVar12 = 0;
      uVar13 = 1;
      do {
        EVar3 = this->Operation;
        if (EVar3 == Dataflow_Compare_Equal) {
          uVar6 = 0;
          if ((int)uVar11 < iVar10) {
            uVar6 = ~uVar11 >> 0x1f;
          }
          if (uVar6 == 0) {
            local_70 = (longlong)iVar10;
            local_78 = (longlong)(int)uVar11;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          if (this->Threshold == *(float *)((pTVar8->AllocatorInstance).Data + lVar12)) {
LAB_14e84be6d:
            if ((((int)uVar11 < 0) || (local_68.SelectionArray.NumBits <= (int)uVar11)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FVar9 = (ForElementType<unsigned_int>)&local_68.SelectionArray;
            if (local_68.SelectionArray.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FVar9 = local_68.SelectionArray.AllocatorInstance.SecondaryData;
            }
            uVar6 = uVar11;
            if ((int)uVar11 < 0) {
              uVar6 = uVar11 + 0x1f;
            }
            puVar2 = (uint *)((longlong)FVar9 + (longlong)((int)uVar6 >> 5) * 4);
            *puVar2 = *puVar2 | uVar13;
          }
        }
        else if (EVar3 == Dataflow_Compare_Smaller) {
          uVar6 = 0;
          if ((int)uVar11 < iVar10) {
            uVar6 = ~uVar11 >> 0x1f;
          }
          if (uVar6 == 0) {
            local_70 = (longlong)iVar10;
            local_78 = (longlong)(int)uVar11;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          pFVar1 = (pTVar8->AllocatorInstance).Data + lVar12;
          if (*(float *)pFVar1 <= this->Threshold && this->Threshold != *(float *)pFVar1)
          goto LAB_14e84be6d;
        }
        else if (EVar3 == Dataflow_Compare_SmallerOrEqual) {
          uVar6 = 0;
          if ((int)uVar11 < iVar10) {
            uVar6 = ~uVar11 >> 0x1f;
          }
          if (uVar6 == 0) {
            local_70 = (longlong)iVar10;
            local_78 = (longlong)(int)uVar11;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          if (*(float *)((pTVar8->AllocatorInstance).Data + lVar12) <= this->Threshold)
          goto LAB_14e84be6d;
        }
        else if (EVar3 == Dataflow_Compare_Greater) {
          uVar6 = 0;
          if ((int)uVar11 < iVar10) {
            uVar6 = ~uVar11 >> 0x1f;
          }
          if (uVar6 == 0) {
            local_70 = (longlong)iVar10;
            local_78 = (longlong)(int)uVar11;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          if (this->Threshold < *(float *)((pTVar8->AllocatorInstance).Data + lVar12))
          goto LAB_14e84be6d;
        }
        else if (EVar3 == Dataflow_Compare_GreaterOrEqual) {
          uVar6 = 0;
          if ((int)uVar11 < iVar10) {
            uVar6 = ~uVar11 >> 0x1f;
          }
          if (uVar6 == 0) {
            local_70 = (longlong)iVar10;
            local_78 = (longlong)(int)uVar11;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          pFVar1 = (pTVar8->AllocatorInstance).Data + lVar12;
          if (this->Threshold < *(float *)pFVar1 || this->Threshold == *(float *)pFVar1)
          goto LAB_14e84be6d;
        }
        iVar10 = pTVar8->ArrayNum;
        uVar11 = uVar11 + 1;
        uVar13 = uVar13 << 1 | (uint)((int)uVar13 < 0);
        lVar12 = lVar12 + 4;
      } while ((int)uVar11 < iVar10);
    }
    FDataflowNode::SetValue<FDataflowVertexSelection,FDataflowVertexSelection>
              ((FDataflowNode *)this,param_1,(FDataflowVertexSelection *)&local_68,
               &this->VertexSelection);
    if (local_68.SelectionArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
       ) {
      FMemory::Free((void *)local_68.SelectionArray.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// FFloatArrayToVertexSelectionDataflowNode @ 14e91d520

FFloatArrayToVertexSelectionDataflowNode * __thiscall
FFloatArrayToVertexSelectionDataflowNode::FFloatArrayToVertexSelectionDataflowNode
          (FFloatArrayToVertexSelectionDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowVertexSelection *pFVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_48.Reference = *(void **)param_2;
  local_48.Index = param_2->C;
  local_48._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_48);
  this->Operation = Dataflow_Compare_Greater;
  this->Threshold = 0.0;
  local_48.Reference = &this->FloatArray;
  pFVar1 = &this->VertexSelection;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FFloatArrayToVertexSelectionDataflowNode__6B_;
  (((TArray<float,TSizedDefaultAllocator<32>_> *)local_48.Reference)->AllocatorInstance).Data =
       (FScriptContainerElement *)0x0;
  (this->FloatArray).ArrayNum = 0;
  (this->FloatArray).ArrayMax = 0;
  uVar2 = FDataflowVertexSelection::VerticesGroupName.Number;
  *(uint *)&pFVar1->field_0x0 = FDataflowVertexSelection::VerticesGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar2;
  *(undefined8 *)&(this->VertexSelection).field_0x18 = 0;
  *(undefined4 *)&(this->VertexSelection).field_0x20 = 0;
  *(undefined4 *)&(this->VertexSelection).field_0x24 = 0x80;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Reference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = pFVar1;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_28,&local_res8);
  if (local_48.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_48);
  }
  return this;
}

// FFloatArrayToVertexSelectionDataflowNode @ 14e91d620

FFloatArrayToVertexSelectionDataflowNode * __thiscall
FFloatArrayToVertexSelectionDataflowNode::FFloatArrayToVertexSelectionDataflowNode
          (FFloatArrayToVertexSelectionDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->Operation = Dataflow_Compare_Greater;
  this->Threshold = 0.0;
  this->_padding_ = (longlong)&___7FFloatArrayToVertexSelectionDataflowNode__6B_;
  (this->FloatArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FloatArray).ArrayNum = 0;
  (this->FloatArray).ArrayMax = 0;
  uVar1 = FDataflowVertexSelection::VerticesGroupName.Number;
  *(uint *)&(this->VertexSelection).field_0x0 =
       FDataflowVertexSelection::VerticesGroupName.ComparisonIndex.Value;
  *(uint *)&(this->VertexSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->VertexSelection).field_0x18 = 0;
  *(undefined4 *)&(this->VertexSelection).field_0x20 = 0;
  *(undefined4 *)&(this->VertexSelection).field_0x24 = 0x80;
  return this;
}

