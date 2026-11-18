// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e83ee60

UScriptStruct * __cdecl FSelectFloatArrayIndicesInRangeDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSelectFloatArrayIndicesInRangeDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSelectFloatArrayIndicesInRangeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSelectFloatArrayIndicesInRangeDataflowNode,
                         (UObject *)pUVar1,L"SelectFloatArrayIndicesInRangeDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSelectFloatArrayIndicesInRangeDataflowNode.
         OuterSingleton;
}

// GetType @ 14e83f0b0

FName __thiscall
FSelectFloatArrayIndicesInRangeDataflowNode::GetType
          (FSelectFloatArrayIndicesInRangeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FSelectFloatArrayIndicesInRangeDataflowNode");
  return in_RDX;
}

// IsA @ 14e83f0e0

bool __thiscall
FSelectFloatArrayIndicesInRangeDataflowNode::IsA
          (FSelectFloatArrayIndicesInRangeDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FSelectFloatArrayIndicesInRangeDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e83f148;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e83f148:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e83f166;
      }
    }
  }
  bVar5 = true;
LAB_14e83f166:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e83f1a0

FStructOnScope * __thiscall
FSelectFloatArrayIndicesInRangeDataflowNode::NewStructOnScope
          (FSelectFloatArrayIndicesInRangeDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FSelectFloatArrayIndicesInRangeDataflowNode.OuterSingleton
        == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FSelectFloatArrayIndicesInRangeDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FSelectFloatArrayIndicesInRangeDataflowNode,
                           (UObject *)pUVar2,L"SelectFloatArrayIndicesInRangeDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FSelectFloatArrayIndicesInRangeDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e83f260

void __thiscall
FSelectFloatArrayIndicesInRangeDataflowNode::SerializeInternal
          (FSelectFloatArrayIndicesInRangeDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSelectFloatArrayIndicesInRangeDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSelectFloatArrayIndicesInRangeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSelectFloatArrayIndicesInRangeDataflowNode,
                         (UObject *)pUVar1,L"SelectFloatArrayIndicesInRangeDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FSelectFloatArrayIndicesInRangeDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FSelectFloatArrayIndicesInRangeDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e83f2dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e83f2f0

FName __thiscall
FSelectFloatArrayIndicesInRangeDataflowNode::GetDisplayName
          (FSelectFloatArrayIndicesInRangeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SelectFloatArrayIndicesInRange");
  return in_RDX;
}

// GetCategory @ 14e83f320

FName __thiscall
FSelectFloatArrayIndicesInRangeDataflowNode::GetCategory
          (FSelectFloatArrayIndicesInRangeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Selection|Array");
  return in_RDX;
}

// GetTags @ 14e8407b0

FString * __thiscall
FSelectFloatArrayIndicesInRangeDataflowNode::GetTags
          (FSelectFloatArrayIndicesInRangeDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e840810

UScriptStruct * __thiscall
FSelectFloatArrayIndicesInRangeDataflowNode::TypedScriptStruct
          (FSelectFloatArrayIndicesInRangeDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSelectFloatArrayIndicesInRangeDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSelectFloatArrayIndicesInRangeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSelectFloatArrayIndicesInRangeDataflowNode,
                         (UObject *)pUVar1,L"SelectFloatArrayIndicesInRangeDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSelectFloatArrayIndicesInRangeDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14e840d50

void __thiscall
FSelectFloatArrayIndicesInRangeDataflowNode::Evaluate
          (FSelectFloatArrayIndicesInRangeDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  ERangeSettingEnum EVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar11;
  FDataflowInput *pFVar12;
  int iVar13;
  uint local_78 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_70;
  FConnectionReference local_60;
  FConnectionReference local_48;
  
  puVar10 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)puVar10 == &this->Indices) {
    pTVar11 = FDataflowNode::GetValue<TArray<float,TSizedDefaultAllocator<32>_>_>
                        ((FDataflowNode *)this,param_1,&this->Values);
    pfVar1 = &this->Min;
    local_60.Index = -1;
    local_60.ContainerReference = (void *)0x0;
    local_60.Reference = pfVar1;
    pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_60);
    FDataflowInput::GetValue<float>(pFVar12,param_1,local_60.Reference);
    pfVar2 = &this->Max;
    local_48.Index = -1;
    local_48.ContainerReference = (void *)0x0;
    local_48.Reference = pfVar2;
    pFVar12 = FDataflowNode::FindInput((FDataflowNode *)this,&local_48);
    FDataflowInput::GetValue<float>(pFVar12,param_1,local_48.Reference);
    EVar4 = this->RangeSetting;
    iVar9 = 0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar13 = pTVar11->ArrayNum;
    local_78[0] = 0;
    if (0 < iVar13) {
      do {
        uVar6 = local_78[0];
        uVar8 = 0;
        if ((int)local_78[0] < iVar13) {
          uVar8 = ~local_78[0] >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar9 = local_70.ArrayNum;
        }
        fVar3 = *(float *)((pTVar11->AllocatorInstance).Data + (longlong)(int)uVar6 * 4);
        if (EVar4 == Dataflow_RangeSetting_InsideRange) {
          if ((*pfVar1 <= fVar3 && fVar3 != *pfVar1) && (fVar3 < *pfVar2)) {
            if ((local_70.AllocatorInstance.Data <= (FScriptContainerElement *)local_78) &&
               ((FScriptContainerElement *)local_78 <
                local_70.AllocatorInstance.Data + (longlong)local_70.ArrayMax * 4)) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar7) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar9 = local_70.ArrayNum;
            }
            if (iVar9 == local_70.ArrayMax) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_70.AllocatorInstance,&local_70.ArrayMax);
            }
            local_70.ArrayNum = iVar9 + 1;
            goto LAB_14e840ff5;
          }
LAB_14e840f4f:
          if ((this->bInclusive != false) && ((fVar3 == *pfVar1 || (fVar3 == *pfVar2))))
          goto LAB_14e840f6b;
        }
        else {
          if ((*pfVar1 <= fVar3) && (fVar3 < *pfVar2 || fVar3 == *pfVar2)) goto LAB_14e840f4f;
LAB_14e840f6b:
          if ((local_70.AllocatorInstance.Data <= (FScriptContainerElement *)local_78) &&
             ((FScriptContainerElement *)local_78 <
              local_70.AllocatorInstance.Data + (longlong)local_70.ArrayMax * 4)) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar9 = local_70.ArrayNum;
          }
          if (iVar9 == local_70.ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_70.AllocatorInstance,&local_70.ArrayMax);
          }
          local_70.ArrayNum = iVar9 + 1;
LAB_14e840ff5:
          *(uint *)(local_70.AllocatorInstance.Data + (longlong)iVar9 * 4) = local_78[0];
          iVar9 = local_70.ArrayNum;
        }
        iVar13 = pTVar11->ArrayNum;
        local_78[0] = local_78[0] + 1;
      } while ((int)local_78[0] < iVar13);
    }
    FDataflowNode::
    SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,&local_70,&this->Indices);
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
  }
  return;
}

// FSelectFloatArrayIndicesInRangeDataflowNode @ 14e92ae80

FSelectFloatArrayIndicesInRangeDataflowNode * __thiscall
FSelectFloatArrayIndicesInRangeDataflowNode::FSelectFloatArrayIndicesInRangeDataflowNode
          (FSelectFloatArrayIndicesInRangeDataflowNode *this,FNodeParameters *param_1,FGuid *param_2
          )

{
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this->RangeSetting = Dataflow_RangeSetting_InsideRange;
  this->bInclusive = true;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FSelectFloatArrayIndicesInRangeDataflowNode__6B_;
  local_58.Reference = &this->Values;
  (this->Indices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (((TArray<float,TSizedDefaultAllocator<32>_> *)local_58.Reference)->AllocatorInstance).Data =
       (FScriptContainerElement *)0x0;
  (this->Values).ArrayNum = 0;
  (this->Values).ArrayMax = 0;
  this->Min = 0.0;
  this->Max = 1000.0;
  (this->Indices).ArrayNum = 0;
  (this->Indices).ArrayMax = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->Min;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->Max;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->Indices;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

