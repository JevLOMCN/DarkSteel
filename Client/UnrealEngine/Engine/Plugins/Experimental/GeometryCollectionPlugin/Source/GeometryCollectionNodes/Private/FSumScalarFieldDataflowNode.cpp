// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 13

// StaticStruct @ 14e8b95d0

UScriptStruct * __cdecl FSumScalarFieldDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSumScalarFieldDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSumScalarFieldDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode,(UObject *)pUVar1,
                         L"SumScalarFieldDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSumScalarFieldDataflowNode.OuterSingleton;
}

// GetType @ 14e8b97d0

FName __thiscall FSumScalarFieldDataflowNode::GetType(FSumScalarFieldDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FSumScalarFieldDataflowNode");
  return in_RDX;
}

// IsA @ 14e8b9e80

bool __thiscall FSumScalarFieldDataflowNode::IsA(FSumScalarFieldDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FSumScalarFieldDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8b9ee8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8b9ee8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8b9f06;
      }
    }
  }
  bVar5 = true;
LAB_14e8b9f06:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8b9f50

FStructOnScope * __thiscall
FSumScalarFieldDataflowNode::NewStructOnScope(FSumScalarFieldDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FSumScalarFieldDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FSumScalarFieldDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode,(UObject *)pUVar2,
                           L"SumScalarFieldDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FSumScalarFieldDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8ba050

void __thiscall
FSumScalarFieldDataflowNode::SerializeInternal(FSumScalarFieldDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSumScalarFieldDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSumScalarFieldDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode,(UObject *)pUVar1,
                         L"SumScalarFieldDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FSumScalarFieldDataflowNode.OuterSingleton
             ,param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FSumScalarFieldDataflowNode.OuterSingleton
             ,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8ba0cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8ba0e0

FName __thiscall FSumScalarFieldDataflowNode::GetDisplayName(FSumScalarFieldDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SumScalarField");
  return in_RDX;
}

// GetCategory @ 14e8ba110

FName __thiscall FSumScalarFieldDataflowNode::GetCategory(FSumScalarFieldDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Fields");
  return in_RDX;
}

// GetTags @ 14e8ba140

FString * __thiscall
FSumScalarFieldDataflowNode::GetTags
          (FSumScalarFieldDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8ba1c0

UScriptStruct * __thiscall
FSumScalarFieldDataflowNode::TypedScriptStruct(FSumScalarFieldDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSumScalarFieldDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSumScalarFieldDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSumScalarFieldDataflowNode,(UObject *)pUVar1,
                         L"SumScalarFieldDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSumScalarFieldDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8ba960

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FSumScalarFieldDataflowNode::Evaluate
          (FSumScalarFieldDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FDataflowOutput *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  longlong lVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar14;
  FDataflowInput *pFVar15;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  FScriptContainerElement *pFVar19;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar20;
  uint uVar21;
  int iVar22;
  uint uVar24;
  ulonglong uVar25;
  uint uVar26;
  ulonglong uVar27;
  float local_res18 [2];
  int local_res20 [2];
  TArray<float,TSizedDefaultAllocator<32>_> local_168;
  TArray<float,TSizedDefaultAllocator<32>_> local_158;
  TArray<float,TSizedDefaultAllocator<32>_> local_148;
  TArray<int,TSizedDefaultAllocator<32>_> local_138;
  float local_128;
  float local_124;
  float local_120 [2];
  longlong local_118;
  TArray<int,TSizedDefaultAllocator<32>_> *local_110;
  TArray<float,TSizedDefaultAllocator<32>_> *local_108;
  TArray<float,TSizedDefaultAllocator<32>_> *local_100;
  TArray<int,TSizedDefaultAllocator<32>_> local_f8;
  TArray<float,TSizedDefaultAllocator<32>_> local_e8;
  TArray<int,TSizedDefaultAllocator<32>_> local_d8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_c8;
  longlong local_c0;
  FConnectionReference local_b8;
  FConnectionReference local_a0;
  FConnectionReference local_88;
  FConnectionReference local_70 [2];
  ulonglong uVar23;
  
  puVar13 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((TArray<float,TSizedDefaultAllocator<32>_> *)puVar13 != &this->FieldFloatResult) &&
     (puVar13 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (TArray<int,TSizedDefaultAllocator<32>_> *)puVar13 != &this->FieldRemap)) {
    return;
  }
  pTVar14 = FDataflowNode::GetValue<TArray<float,TSizedDefaultAllocator<32>_>_>
                      ((FDataflowNode *)this,param_1,&this->FieldFloatLeft);
  local_b8.ContainerReference = (void *)0x0;
  local_b8.Index = -1;
  local_100 = pTVar14;
  local_b8.Reference = &this->FieldRemapLeft;
  pFVar15 = FDataflowNode::FindInput((FDataflowNode *)this,&local_b8);
  local_110 = FDataflowInput::GetValue<TArray<int,TSizedDefaultAllocator<32>_>_>
                        (pFVar15,param_1,local_b8.Reference);
  pTVar16 = FDataflowNode::GetValue<TArray<float,TSizedDefaultAllocator<32>_>_>
                      ((FDataflowNode *)this,param_1,&this->FieldFloatRight);
  local_a0.Index = -1;
  local_a0.ContainerReference = (void *)0x0;
  local_108 = pTVar16;
  local_a0.Reference = &this->FieldRemapRight;
  pFVar15 = FDataflowNode::FindInput((FDataflowNode *)this,&local_a0);
  local_c8 = FDataflowInput::GetValue<TArray<int,TSizedDefaultAllocator<32>_>_>
                       (pFVar15,param_1,local_a0.Reference);
  iVar2 = pTVar14->ArrayNum;
  iVar3 = pTVar16->ArrayNum;
  iVar4 = local_c8->ArrayNum;
  iVar5 = local_110->ArrayNum;
  local_88.Index = -1;
  local_88.ContainerReference = (void *)0x0;
  local_88.Reference = &this->FieldRemapLeft;
  pFVar15 = FDataflowNode::FindInput((FDataflowNode *)this,&local_88);
  uVar23 = 0;
  iVar22 = 0;
  local_70[0].Index = -1;
  local_70[0].ContainerReference = (void *)0x0;
  pFVar6 = pFVar15->Connection;
  local_70[0].Reference = &this->FieldRemapRight;
  pFVar15 = FDataflowNode::FindInput((FDataflowNode *)this,local_70);
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  if ((pFVar6 == (FDataflowOutput *)0x0) || (pFVar15->Connection == (FDataflowOutput *)0x0)) {
    if (iVar2 == iVar3) {
      local_120[0] = 0.0;
      TArray<float,TSizedDefaultAllocator<32>_>::Init(&local_168,local_120,iVar2);
      SumScalarEvaluate(local_100,local_108,&local_168,iVar2,this->Operation,this->Magnitude,
                        this->bSwapInputs);
      FDataflowNode::
      SetValue<TArray<float,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_168,&this->FieldFloatResult);
      local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.ArrayNum = 0;
      local_f8.ArrayMax = 0;
      FDataflowNode::
      SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_f8,&this->FieldRemap);
      FVar18.Data = local_f8.AllocatorInstance.Data;
      goto LAB_14e8baff0;
    }
  }
  else if ((iVar2 == iVar5) && (iVar3 == iVar4)) {
    local_res18[0] = 0.0;
    if (iVar3 < iVar2) {
      iVar3 = iVar2;
    }
    TArray<float,TSizedDefaultAllocator<32>_>::Init(&local_168,local_res18,iVar3);
    local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.ArrayNum = 0;
    local_138.ArrayMax = 0;
    local_res20[0] = 0;
    TArray<int,TSizedDefaultAllocator<32>_>::Init(&local_138,local_res20,iVar3);
    local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.ArrayNum = 0;
    local_148.ArrayMax = 0;
    local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.ArrayNum = 0;
    local_158.ArrayMax = 0;
    local_128 = 0.0;
    TArray<float,TSizedDefaultAllocator<32>_>::Init(&local_148,&local_128,iVar3);
    local_124 = 0.0;
    TArray<float,TSizedDefaultAllocator<32>_>::Init(&local_158,&local_124,iVar3);
    local_c0 = (longlong)iVar2;
    if (0 < iVar2) {
      local_118 = 0;
      pTVar20 = local_110;
      uVar25 = uVar23;
      uVar27 = uVar23;
LAB_14e8baba0:
      uVar24 = (uint)uVar23;
      uVar11 = 0;
      if ((int)uVar24 < pTVar20->ArrayNum) {
        uVar11 = ~uVar24 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar2 = *(int *)((pTVar20->AllocatorInstance).Data + uVar25 * 4);
      pFVar7 = (local_c8->AllocatorInstance).Data;
      for (pFVar17 = pFVar7; pFVar17 != pFVar7 + (longlong)local_c8->ArrayNum * 4;
          pFVar17 = pFVar17 + 4) {
        pFVar19 = pFVar7;
        if (*(int *)pFVar17 == iVar2) goto LAB_14e8bac28;
      }
      goto LAB_14e8badff;
    }
LAB_14e8bae23:
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_138,iVar22,Default);
    TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&local_148,iVar22,Default);
    TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&local_158,iVar22,Default);
    TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&local_168,iVar22,Default);
    SumScalarEvaluate(&local_148,&local_158,&local_168,iVar22,this->Operation,this->Magnitude,
                      this->bSwapInputs);
    FDataflowNode::
    SetValue<TArray<float,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,&local_168,&this->FieldFloatResult);
    FDataflowNode::
    SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,&local_138,&this->FieldRemap);
    if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.AllocatorInstance.Data);
    }
    FVar18.Data = local_138.AllocatorInstance.Data;
    if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.AllocatorInstance.Data);
      FVar18.Data = local_138.AllocatorInstance.Data;
    }
    goto LAB_14e8baff0;
  }
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  FDataflowNode::
  SetValue<TArray<float,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,&local_e8,&this->FieldFloatResult);
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  FDataflowNode::
  SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,&local_d8,&this->FieldRemap);
  FVar18.Data = local_d8.AllocatorInstance.Data;
LAB_14e8baff0:
  if (FVar18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar18.Data);
  }
  if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  return;
  while (pFVar19 = pFVar19 + 4, pFVar19 != pFVar7 + (longlong)local_c8->ArrayNum * 4) {
LAB_14e8bac28:
    if (*(int *)pFVar19 == iVar2) {
      uVar11 = (uint)((longlong)pFVar19 - (longlong)pFVar7 >> 2);
      goto LAB_14e8bac43;
    }
  }
  uVar11 = 0xffffffff;
LAB_14e8bac43:
  uVar26 = (uint)uVar27;
  uVar21 = ~uVar26 >> 0x1f;
  uVar12 = 0;
  if ((int)uVar26 < local_138.ArrayNum) {
    uVar12 = uVar21;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar14 = local_100;
  *(int *)(local_138.AllocatorInstance.Data + local_118) = iVar2;
  uVar12 = 0;
  if ((int)uVar24 < local_100->ArrayNum) {
    uVar12 = ~uVar24 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar1 = *(undefined4 *)((pTVar14->AllocatorInstance).Data + uVar25 * 4);
  uVar12 = 0;
  if ((int)uVar26 < local_148.ArrayNum) {
    uVar12 = uVar21;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar14 = local_108;
  lVar9 = local_118;
  *(undefined4 *)(local_148.AllocatorInstance.Data + local_118) = uVar1;
  uVar12 = 0;
  if ((int)uVar11 < local_108->ArrayNum) {
    uVar12 = ~uVar11 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar1 = *(undefined4 *)((pTVar14->AllocatorInstance).Data + (longlong)(int)uVar11 * 4);
  uVar11 = 0;
  if ((int)uVar26 < local_158.ArrayNum) {
    uVar11 = uVar21;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar27 = (ulonglong)(uVar26 + 1);
  *(undefined4 *)(local_158.AllocatorInstance.Data + lVar9) = uVar1;
  local_118 = lVar9 + 4;
  pTVar20 = local_110;
LAB_14e8badff:
  iVar22 = (int)uVar27;
  uVar23 = (ulonglong)(uVar24 + 1);
  uVar25 = uVar25 + 1;
  if (local_c0 <= (longlong)uVar25) goto LAB_14e8bae23;
  goto LAB_14e8baba0;
}

// FSumScalarFieldDataflowNode @ 14e92dea0

FSumScalarFieldDataflowNode * __thiscall
FSumScalarFieldDataflowNode::FSumScalarFieldDataflowNode
          (FSumScalarFieldDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *pFVar1;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this->Magnitude = 1.0;
  this->Operation = Dataflow_FloatFieldFalloffType_Add;
  this->bSwapInputs = false;
  this->_padding_ = (longlong)&___7FSumScalarFieldDataflowNode__6B_;
  local_68.Reference = &this->FieldFloatLeft;
  (this->FieldRemapLeft).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (((TArray<float,TSizedDefaultAllocator<32>_> *)local_68.Reference)->AllocatorInstance).Data =
       (FScriptContainerElement *)0x0;
  (this->FieldFloatLeft).ArrayNum = 0;
  (this->FieldFloatLeft).ArrayMax = 0;
  (this->FieldRemapLeft).ArrayNum = 0;
  (this->FieldRemapLeft).ArrayMax = 0;
  (this->FieldFloatRight).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldFloatRight).ArrayNum = 0;
  (this->FieldFloatRight).ArrayMax = 0;
  (this->FieldRemapRight).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldRemapRight).ArrayNum = 0;
  (this->FieldRemapRight).ArrayMax = 0;
  (this->FieldFloatResult).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldFloatResult).ArrayNum = 0;
  (this->FieldFloatResult).ArrayMax = 0;
  (this->FieldRemap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldRemap).ArrayNum = 0;
  (this->FieldRemap).ArrayMax = 0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->FieldRemapLeft;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->FieldFloatRight;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->FieldRemapRight;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->FieldFloatResult;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->FieldRemap;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  return this;
}

// FSumScalarFieldDataflowNode @ 14e92e090

FSumScalarFieldDataflowNode * __thiscall
FSumScalarFieldDataflowNode::FSumScalarFieldDataflowNode(FSumScalarFieldDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->Magnitude = 1.0;
  this->_padding_ = (longlong)&___7FSumScalarFieldDataflowNode__6B_;
  (this->FieldFloatLeft).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldFloatLeft).ArrayNum = 0;
  (this->FieldFloatLeft).ArrayMax = 0;
  (this->FieldRemapLeft).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldRemapLeft).ArrayNum = 0;
  (this->FieldRemapLeft).ArrayMax = 0;
  (this->FieldFloatRight).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldFloatRight).ArrayNum = 0;
  (this->FieldFloatRight).ArrayMax = 0;
  (this->FieldRemapRight).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldRemapRight).ArrayNum = 0;
  (this->FieldRemapRight).ArrayMax = 0;
  (this->FieldFloatResult).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldFloatResult).ArrayNum = 0;
  (this->FieldFloatResult).ArrayMax = 0;
  (this->FieldRemap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldRemap).ArrayNum = 0;
  (this->FieldRemap).ArrayMax = 0;
  this->Operation = Dataflow_FloatFieldFalloffType_Add;
  this->bSwapInputs = false;
  return this;
}

// ~FSumScalarFieldDataflowNode @ 14e933ca0

void __thiscall
FSumScalarFieldDataflowNode::~FSumScalarFieldDataflowNode(FSumScalarFieldDataflowNode *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->FieldRemap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FieldFloatResult).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FieldRemapRight).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FieldFloatRight).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FieldRemapLeft).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FieldFloatLeft).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  return;
}

