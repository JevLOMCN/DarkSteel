// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e8c1a70

UScriptStruct * __cdecl FFieldMakeDenseFloatArrayDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode,
                         (UObject *)pUVar1,L"FieldMakeDenseFloatArrayDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode.OuterSingleton;
}

// GetType @ 14e8c1b90

FName __thiscall
FFieldMakeDenseFloatArrayDataflowNode::GetType(FFieldMakeDenseFloatArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FFieldMakeDenseFloatArrayDataflowNode");
  return in_RDX;
}

// IsA @ 14e8c1bc0

bool __thiscall
FFieldMakeDenseFloatArrayDataflowNode::IsA
          (FFieldMakeDenseFloatArrayDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FFieldMakeDenseFloatArrayDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8c1c28;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8c1c28:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8c1c46;
      }
    }
  }
  bVar5 = true;
LAB_14e8c1c46:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8c1cc0

FStructOnScope * __thiscall
FFieldMakeDenseFloatArrayDataflowNode::NewStructOnScope(FFieldMakeDenseFloatArrayDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode,
                           (UObject *)pUVar2,L"FieldMakeDenseFloatArrayDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8c1ed0

void __thiscall
FFieldMakeDenseFloatArrayDataflowNode::SerializeInternal
          (FFieldMakeDenseFloatArrayDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode,
                         (UObject *)pUVar1,L"FieldMakeDenseFloatArrayDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8c1f4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8c1f60

FName __thiscall
FFieldMakeDenseFloatArrayDataflowNode::GetDisplayName(FFieldMakeDenseFloatArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FieldMakeDenseFloatArray");
  return in_RDX;
}

// GetCategory @ 14e8c1f90

FName __thiscall
FFieldMakeDenseFloatArrayDataflowNode::GetCategory(FFieldMakeDenseFloatArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Fields");
  return in_RDX;
}

// GetTags @ 14e8c1fc0

FString * __thiscall
FFieldMakeDenseFloatArrayDataflowNode::GetTags
          (FFieldMakeDenseFloatArrayDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8c1ff0

UScriptStruct * __thiscall
FFieldMakeDenseFloatArrayDataflowNode::TypedScriptStruct
          (FFieldMakeDenseFloatArrayDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode,
                         (UObject *)pUVar1,L"FieldMakeDenseFloatArrayDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FFieldMakeDenseFloatArrayDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8c2240

void __thiscall
FFieldMakeDenseFloatArrayDataflowNode::Evaluate
          (FFieldMakeDenseFloatArrayDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined1 *puVar7;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar8;
  FDataflowInput *pFVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  int *piVar11;
  int iVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  TArray<float,TSizedDefaultAllocator<32>_> local_88;
  TArray<float,TSizedDefaultAllocator<32>_> local_78;
  FConnectionReference local_68;
  FConnectionReference local_50;
  
  pTVar1 = &this->FieldFloatResult;
  puVar7 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TArray<float,TSizedDefaultAllocator<32>_> *)puVar7 == pTVar1) {
    pTVar8 = FDataflowNode::GetValue<TArray<float,TSizedDefaultAllocator<32>_>_>
                       ((FDataflowNode *)this,param_1,&this->FieldFloatInput);
    local_68.Reference = &this->FieldRemap;
    local_68.Index = -1;
    uVar15 = 0;
    local_68.ContainerReference = (void *)0x0;
    pFVar9 = FDataflowNode::FindInput((FDataflowNode *)this,&local_68);
    pTVar10 = FDataflowInput::GetValue<TArray<int,TSizedDefaultAllocator<32>_>_>
                        (pFVar9,param_1,local_68.Reference);
    local_50.Reference = &this->NumSamplePositions;
    local_50.Index = -1;
    local_50.ContainerReference = (void *)0x0;
    pFVar9 = FDataflowNode::FindInput((FDataflowNode *)this,&local_50);
    piVar11 = FDataflowInput::GetValue<int>(pFVar9,param_1,local_50.Reference);
    if ((pTVar8->ArrayNum == pTVar10->ArrayNum) && (iVar3 = *piVar11, 0 < iVar3)) {
      local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.ArrayNum = 0;
      local_88.ArrayMax = 0;
      TArray<float,TSizedDefaultAllocator<32>_>::Init(&local_88,&this->Default,iVar3);
      iVar12 = pTVar10->ArrayNum;
      uVar16 = uVar15;
      if (0 < iVar12) {
        do {
          uVar14 = (uint)uVar15;
          uVar17 = ~uVar14 >> 0x1f;
          uVar6 = 0;
          if ((int)uVar14 < iVar12) {
            uVar6 = uVar17;
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
          if (*(int *)((pTVar10->AllocatorInstance).Data + uVar16) < iVar3) {
            uVar6 = 0;
            if ((int)uVar14 < pTVar8->ArrayNum) {
              uVar6 = uVar17;
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
            uVar2 = *(undefined4 *)((pTVar8->AllocatorInstance).Data + uVar16);
            uVar6 = 0;
            if ((int)uVar14 < pTVar10->ArrayNum) {
              uVar6 = uVar17;
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
            uVar6 = *(uint *)((pTVar10->AllocatorInstance).Data + uVar16);
            uVar17 = 0;
            if ((int)uVar6 < local_88.ArrayNum) {
              uVar17 = ~uVar6 >> 0x1f;
            }
            if ((uVar17 == 0) &&
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
            *(undefined4 *)(local_88.AllocatorInstance.Data + (longlong)(int)uVar6 * 4) = uVar2;
          }
          iVar12 = pTVar10->ArrayNum;
          uVar15 = (ulonglong)(uVar14 + 1);
          uVar16 = uVar16 + 4;
        } while ((int)(uVar14 + 1) < iVar12);
      }
      FDataflowNode::
      SetValue<TArray<float,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_88,pTVar1);
      FVar13.Data = local_88.AllocatorInstance.Data;
    }
    else {
      local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.ArrayNum = 0;
      local_78.ArrayMax = 0;
      FDataflowNode::
      SetValue<TArray<float,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_78,pTVar1);
      FVar13.Data = local_78.AllocatorInstance.Data;
    }
    if (FVar13.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar13.Data);
    }
  }
  return;
}

// FFieldMakeDenseFloatArrayDataflowNode @ 14e91c9d0

FFieldMakeDenseFloatArrayDataflowNode * __thiscall
FFieldMakeDenseFloatArrayDataflowNode::FFieldMakeDenseFloatArrayDataflowNode
          (FFieldMakeDenseFloatArrayDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  local_58.Index = -1;
  this->Default = 0.0;
  this->_padding_ = (longlong)&___7FFieldMakeDenseFloatArrayDataflowNode__6B_;
  local_58.Reference = &this->FieldFloatInput;
  (this->FieldRemap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (((TArray<float,TSizedDefaultAllocator<32>_> *)local_58.Reference)->AllocatorInstance).Data =
       (FScriptContainerElement *)0x0;
  (this->FieldFloatInput).ArrayNum = 0;
  (this->FieldFloatInput).ArrayMax = 0;
  (this->FieldRemap).ArrayNum = 0;
  (this->FieldRemap).ArrayMax = 0;
  this->NumSamplePositions = 0;
  (this->FieldFloatResult).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldFloatResult).ArrayNum = 0;
  (this->FieldFloatResult).ArrayMax = 0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->FieldRemap;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->NumSamplePositions;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->FieldFloatResult;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

