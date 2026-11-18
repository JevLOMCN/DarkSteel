// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 13

// StaticStruct @ 14e89c4c0

UScriptStruct * __cdecl FBoxFalloffFieldDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBoxFalloffFieldDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBoxFalloffFieldDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode,(UObject *)pUVar1,
                         L"BoxFalloffFieldDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBoxFalloffFieldDataflowNode.OuterSingleton;
}

// GetType @ 14e89c500

FName __thiscall FBoxFalloffFieldDataflowNode::GetType(FBoxFalloffFieldDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FBoxFalloffFieldDataflowNode");
  return in_RDX;
}

// IsA @ 14e89c530

bool __thiscall FBoxFalloffFieldDataflowNode::IsA(FBoxFalloffFieldDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FBoxFalloffFieldDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e89c598;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e89c598:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e89c5b6;
      }
    }
  }
  bVar5 = true;
LAB_14e89c5b6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e89c5f0

FStructOnScope * __thiscall
FBoxFalloffFieldDataflowNode::NewStructOnScope(FBoxFalloffFieldDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FBoxFalloffFieldDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FBoxFalloffFieldDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode,(UObject *)pUVar2,
                           L"BoxFalloffFieldDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FBoxFalloffFieldDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e89c670

void __thiscall
FBoxFalloffFieldDataflowNode::SerializeInternal
          (FBoxFalloffFieldDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBoxFalloffFieldDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBoxFalloffFieldDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode,(UObject *)pUVar1,
                         L"BoxFalloffFieldDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FBoxFalloffFieldDataflowNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FBoxFalloffFieldDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(*(longlong *)this + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e89c6ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e89cab0

FName __thiscall FBoxFalloffFieldDataflowNode::GetDisplayName(FBoxFalloffFieldDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"BoxFalloffField");
  return in_RDX;
}

// GetCategory @ 14e89cae0

FName __thiscall FBoxFalloffFieldDataflowNode::GetCategory(FBoxFalloffFieldDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Fields");
  return in_RDX;
}

// GetTags @ 14e89cb10

FString * __thiscall
FBoxFalloffFieldDataflowNode::GetTags
          (FBoxFalloffFieldDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e89cb40

UScriptStruct * __thiscall
FBoxFalloffFieldDataflowNode::TypedScriptStruct(FBoxFalloffFieldDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBoxFalloffFieldDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBoxFalloffFieldDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoxFalloffFieldDataflowNode,(UObject *)pUVar1,
                         L"BoxFalloffFieldDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBoxFalloffFieldDataflowNode.OuterSingleton;
}

// Evaluate @ 14e89cea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FBoxFalloffFieldDataflowNode::Evaluate
          (FBoxFalloffFieldDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 *puVar9;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar10;
  FDataflowVertexSelection *pFVar11;
  TBox<double> *pTVar12;
  FDataflowInput *pFVar13;
  float *pfVar14;
  ulonglong uVar15;
  undefined1 auStackY_268 [32];
  undefined4 local_218 [2];
  TArray<float,TSizedDefaultAllocator<32>_> local_210;
  float local_200;
  int local_1fc;
  int local_1f8 [2];
  TArray<float,TSizedDefaultAllocator<32>_> local_1f0;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_1e0;
  TTransform<double> *local_1d0;
  TArray<int,TSizedDefaultAllocator<32>_> local_1c8;
  TArray<int,TSizedDefaultAllocator<32>_> local_1b8;
  TArray<float,TSizedDefaultAllocator<32>_> local_1a8;
  TArray<int,TSizedDefaultAllocator<32>_> local_198;
  FConnectionReference local_188;
  FConnectionReference local_170;
  FConnectionReference local_158;
  FConnectionReference local_140;
  FConnectionReference local_128;
  FConnectionReference local_110;
  FDataflowSelection local_f8;
  FDataflowSelection local_d0;
  FName local_a8;
  void *local_90;
  undefined4 local_88;
  undefined4 local_84;
  ulonglong local_80;
  
  local_80 = __security_cookie.value ^ (ulonglong)auStackY_268;
  pTVar1 = &this->FieldFloatResult;
  puVar9 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((((TArray<float,TSizedDefaultAllocator<32>_> *)puVar9 == pTVar1) ||
       (puVar9 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
       (TArray<int,TSizedDefaultAllocator<32>_> *)puVar9 == &this->FieldRemap)) ||
      (puVar9 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (FDataflowVertexSelection *)puVar9 == &this->FieldSelectionMask)) ||
     (puVar9 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (int *)puVar9 == &this->NumSamplePositions)) {
    pTVar10 = FDataflowNode::GetValue<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                        ((FDataflowNode *)this,param_1,&this->SamplePositions);
    pFVar11 = FDataflowNode::GetValue<FDataflowVertexSelection>
                        ((FDataflowNode *)this,param_1,&this->SampleIndices);
    pTVar12 = FDataflowNode::GetValue<UE::Math::TBox<double>_>
                        ((FDataflowNode *)this,param_1,&this->Box);
    local_188.Reference = &this->Transform;
    local_188.Index = -1;
    local_188.ContainerReference = (void *)0x0;
    pFVar13 = FDataflowNode::FindInput((FDataflowNode *)this,&local_188);
    local_1d0 = FDataflowInput::GetValue<UE::Math::TTransform<double>_>
                          (pFVar13,param_1,local_188.Reference);
    local_170.Reference = &this->Magnitude;
    local_170.Index = -1;
    local_170.ContainerReference = (void *)0x0;
    pFVar13 = FDataflowNode::FindInput((FDataflowNode *)this,&local_170);
    pfVar14 = FDataflowInput::GetValue<float>(pFVar13,param_1,local_170.Reference);
    local_158.Index = -1;
    local_158.ContainerReference = (void *)0x0;
    fVar2 = *pfVar14;
    local_158.Reference = &this->MinRange;
    pFVar13 = FDataflowNode::FindInput((FDataflowNode *)this,&local_158);
    pfVar14 = FDataflowInput::GetValue<float>(pFVar13,param_1,local_158.Reference);
    local_140.Index = -1;
    local_140.ContainerReference = (void *)0x0;
    fVar3 = *pfVar14;
    local_140.Reference = &this->MaxRange;
    pFVar13 = FDataflowNode::FindInput((FDataflowNode *)this,&local_140);
    pfVar14 = FDataflowInput::GetValue<float>(pFVar13,param_1,local_140.Reference);
    local_128.Index = -1;
    local_128.ContainerReference = (void *)0x0;
    fVar4 = *pfVar14;
    local_128.Reference = &this->Default;
    pFVar13 = FDataflowNode::FindInput((FDataflowNode *)this,&local_128);
    pfVar14 = FDataflowInput::GetValue<float>(pFVar13,param_1,local_128.Reference);
    local_110.Index = -1;
    local_110.ContainerReference = (void *)0x0;
    fVar5 = *pfVar14;
    local_110.Reference = &this->SampleIndices;
    pFVar13 = FDataflowNode::FindInput((FDataflowNode *)this,&local_110);
    iVar6 = pTVar10->ArrayNum;
    if (pFVar13->Connection == (FDataflowOutput *)0x0) {
      local_f8.GroupName = FDataflowVertexSelection::VerticesGroupName;
      local_f8.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_f8.SelectionArray.NumBits = 0;
      local_f8.SelectionArray.MaxBits = 0x80;
      FDataflowSelection::Initialize(&local_f8,iVar6,false);
      local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f0.ArrayNum = 0;
      local_1f0.ArrayMax = 0;
      local_200 = 0.0;
      TArray<float,TSizedDefaultAllocator<32>_>::Init(&local_1f0,&local_200,iVar6);
      BoxFalloffFieldProcess
                (pTVar10,pTVar12,local_1d0,fVar2,fVar3,fVar4,fVar5,this->FalloffType,
                 (FDataflowVertexSelection *)&local_f8,&local_1f0);
      FDataflowNode::
      SetValue<TArray<float,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_1f0,pTVar1);
      local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.ArrayNum = 0;
      local_1b8.ArrayMax = 0;
      FDataflowNode::
      SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_1b8,&this->FieldRemap);
      if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.AllocatorInstance.Data);
      }
      FDataflowNode::SetValue<FDataflowVertexSelection,FDataflowVertexSelection>
                ((FDataflowNode *)this,param_1,(FDataflowVertexSelection *)&local_f8,
                 &this->FieldSelectionMask);
      local_1fc = pTVar10->ArrayNum;
      FDataflowNode::SetValue<int,int>
                ((FDataflowNode *)this,param_1,&local_1fc,&this->NumSamplePositions);
      if (local_1f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.AllocatorInstance.Data);
      }
      if (local_f8.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_f8.SelectionArray.AllocatorInstance.SecondaryData);
      }
    }
    else if (iVar6 == *(int *)&pFVar11->field_0x20) {
      local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e0.ArrayNum = 0;
      local_1e0.ArrayMax = 0;
      local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8.ArrayNum = 0;
      local_1c8.ArrayMax = 0;
      FieldComputeRemap(pTVar10,pFVar11,&local_1e0,&local_1c8);
      iVar6 = local_1e0.ArrayNum;
      uVar15 = local_1e0._8_8_ & 0xffffffff;
      local_d0.GroupName = FDataflowVertexSelection::VerticesGroupName;
      local_d0.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_d0.SelectionArray.NumBits = 0;
      local_d0.SelectionArray.MaxBits = 0x80;
      FDataflowSelection::Initialize(&local_d0,local_1e0.ArrayNum,false);
      local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_210.ArrayMax = 0;
      local_218[0] = 0;
      if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar15);
      }
      local_210.ArrayNum = 0;
      if ((iVar6 != 0) &&
         (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar6,&local_210.AllocatorInstance,0,&local_210.ArrayMax), 0 < iVar6)) {
        do {
          if ((local_210.AllocatorInstance.Data <= (FScriptContainerElement *)local_218) &&
             (((FScriptContainerElement *)local_218 <
               local_210.AllocatorInstance.Data + (longlong)local_210.ArrayMax * 4 &&
              (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)))) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (local_210.ArrayNum == local_210.ArrayMax) {
            local_210.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_210.AllocatorInstance,&local_210.ArrayMax);
          }
          iVar6 = local_210.ArrayNum + 1;
          *(undefined4 *)(local_210.AllocatorInstance.Data + (longlong)local_210.ArrayNum * 4) =
               local_218[0];
          uVar15 = uVar15 - 1;
          local_210.ArrayNum = iVar6;
        } while (uVar15 != 0);
      }
      BoxFalloffFieldProcess
                (&local_1e0,pTVar12,local_1d0,fVar2,fVar3,fVar4,fVar5,this->FalloffType,
                 (FDataflowVertexSelection *)&local_d0,&local_210);
      FDataflowNode::
      SetValue<TArray<float,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_210,pTVar1);
      FDataflowNode::
      SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_1c8,&this->FieldRemap);
      FDataflowNode::SetValue<FDataflowVertexSelection,FDataflowVertexSelection>
                ((FDataflowNode *)this,param_1,(FDataflowVertexSelection *)&local_d0,
                 &this->FieldSelectionMask);
      local_1f8[0] = pTVar10->ArrayNum;
      FDataflowNode::SetValue<int,int>
                ((FDataflowNode *)this,param_1,local_1f8,&this->NumSamplePositions);
      if (local_210.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.AllocatorInstance.Data);
      }
      if (local_d0.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_d0.SelectionArray.AllocatorInstance.SecondaryData);
      }
      if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.AllocatorInstance.Data);
      }
      if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.AllocatorInstance.Data);
      }
    }
    else {
      local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.ArrayNum = 0;
      local_1a8.ArrayMax = 0;
      FDataflowNode::
      SetValue<TArray<float,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_1a8,pTVar1);
      if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.AllocatorInstance.Data);
      }
      local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.ArrayNum = 0;
      local_198.ArrayMax = 0;
      FDataflowNode::
      SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_198,&this->FieldRemap);
      if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.AllocatorInstance.Data);
      }
      local_a8 = FDataflowVertexSelection::VerticesGroupName;
      local_90 = (void *)0x0;
      local_88 = 0;
      local_84 = 0x80;
      FDataflowNode::SetValue<FDataflowVertexSelection,FDataflowVertexSelection>
                ((FDataflowNode *)this,param_1,(FDataflowVertexSelection *)&local_a8,
                 &this->FieldSelectionMask);
      if (local_90 != (void *)0x0) {
        FMemory::Free(local_90);
      }
      local_1f8[1] = 0;
      FDataflowNode::SetValue<int,int>
                ((FDataflowNode *)this,param_1,local_1f8 + 1,&this->NumSamplePositions);
    }
  }
  return;
}

// FBoxFalloffFieldDataflowNode @ 14e912630

FBoxFalloffFieldDataflowNode * __thiscall
FBoxFalloffFieldDataflowNode::FBoxFalloffFieldDataflowNode
          (FBoxFalloffFieldDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  uchar *puVar1;
  TBox<double> *pTVar2;
  TTransform<double> *pTVar3;
  FName *pFVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  FName this_00;
  FDataflowOutput *pFVar9;
  FName local_res8;
  FName local_res18 [2];
  FConnectionReference local_78;
  FConnectionReference local_58;
  
  local_78.Reference = *(void **)param_2;
  local_78.Index = param_2->C;
  local_78._12_4_ = param_2->D;
  local_res8 = (FName)this;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_78);
  local_78.Index = -1;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.ContainerReference = (void *)0x0;
  *(undefined ***)local_res8 = &___7FBoxFalloffFieldDataflowNode__6B_;
  pTVar2 = (TBox<double> *)((longlong)local_res8 + 0x280);
  pTVar3 = (TTransform<double> *)((longlong)local_res8 + 0x2c0);
  local_78.Reference = (void *)((longlong)local_res8 + 0x248);
  *(undefined8 *)((longlong)local_res8 + 0x250) = 0;
  pFVar4 = (FName *)((longlong)local_res8 + 600);
  (((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)local_78.Reference)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pfVar5 = (float *)((longlong)local_res8 + 800);
  pfVar6 = (float *)((longlong)local_res8 + 0x324);
  *pFVar4 = FDataflowVertexSelection::VerticesGroupName;
  pfVar7 = (float *)((longlong)local_res8 + 0x328);
  *(undefined8 *)((longlong)local_res8 + 0x270) = 0;
  pfVar8 = (float *)((longlong)local_res8 + 0x32c);
  *(undefined4 *)((longlong)local_res8 + 0x278) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x27c) = 0x80;
  (pTVar2->Min).field0_0x0._s_0.X = 0.0;
  *(undefined8 *)((longlong)local_res8 + 0x288) = 0;
  *(undefined8 *)((longlong)local_res8 + 0x290) = 0;
  (((TVector<double> *)((longlong)local_res8 + 0x298))->field0_0x0)._s_0.X = 0.0;
  *(undefined8 *)((longlong)local_res8 + 0x2a0) = 0;
  *(undefined8 *)((longlong)local_res8 + 0x2a8) = 0;
  *(uchar *)((longlong)local_res8 + 0x2b0) = '\0';
  puVar1 = (uchar *)((longlong)local_res8 + 0x2b1);
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  ((uchar *)((longlong)local_res8 + 0x2b5))[0] = '\0';
  ((uchar *)((longlong)local_res8 + 0x2b5))[1] = '\0';
  *(uchar *)((longlong)local_res8 + 0x2b7) = '\0';
  *&(pTVar3->Rotation).XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&((__m128d *)((longlong)local_res8 + 0x2d0))->m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(((VectorRegister4Double *)((longlong)local_res8 + 0x2e0))->XY).m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&((__m128d *)((longlong)local_res8 + 0x2f0))->m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(((VectorRegister4Double *)((longlong)local_res8 + 0x300))->XY).m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&((__m128d *)((longlong)local_res8 + 0x310))->m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (((TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)local_res8 + 0x338))->AllocatorInstance)
  .Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)local_res8 + 0x340) = 0;
  (((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)local_res8 + 0x348))->AllocatorInstance).
  Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)local_res8 + 0x350) = 0;
  *pfVar5 = 1.0;
  *pfVar6 = 0.0;
  *pfVar7 = 1.0;
  *pfVar8 = 0.0;
  *(EDataflowFieldFalloffType *)((longlong)local_res8 + 0x330) = Dataflow_FieldFalloffType_Linear;
  *(FName *)((longlong)local_res8 + 0x358) = FDataflowVertexSelection::VerticesGroupName;
  *(undefined8 *)((longlong)local_res8 + 0x370) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x378) = 0;
  *(undefined8 *)((longlong)local_res8 + 0x37c) = 0x80;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  this_00 = local_res8;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pFVar4;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pTVar2;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pTVar3;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar5;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar6;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar7;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar8;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_58.Reference = (void *)((longlong)this_00 + 0x338);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Reference = (void *)0x0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pFVar9 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar9,&local_78);
  }
  local_58.Reference = (void *)((longlong)this_00 + 0x348);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Reference = (void *)0x0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pFVar9 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar9,&local_78);
  }
  local_58.Reference = (void *)((longlong)this_00 + 0x358);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Reference = (void *)0x0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pFVar9 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar9,&local_78);
  }
  local_58.Reference = (void *)((longlong)this_00 + 0x380);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Reference = (void *)0x0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pFVar9 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar9,&local_78);
  }
  return (FBoxFalloffFieldDataflowNode *)this_00;
}

// FBoxFalloffFieldDataflowNode @ 14e912a00

FBoxFalloffFieldDataflowNode * __thiscall
FBoxFalloffFieldDataflowNode::FBoxFalloffFieldDataflowNode(FBoxFalloffFieldDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  *(undefined ***)this = &___7FBoxFalloffFieldDataflowNode__6B_;
  (this->SamplePositions).ArrayNum = 0;
  (this->SamplePositions).ArrayMax = 0;
  (this->SamplePositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar1 = FDataflowVertexSelection::VerticesGroupName.Number;
  *(uint *)&(this->SampleIndices).field_0x0 =
       FDataflowVertexSelection::VerticesGroupName.ComparisonIndex.Value;
  *(uint *)&(this->SampleIndices).field_0x4 = uVar1;
  *(undefined8 *)&(this->SampleIndices).field_0x18 = 0;
  *(undefined4 *)&(this->SampleIndices).field_0x20 = 0;
  *(undefined4 *)&(this->SampleIndices).field_0x24 = 0x80;
  (this->Box).Min.field0_0x0._s_0.X = 0.0;
  (this->Box).Min.field0_0x0._s_0.Y = 0.0;
  (this->Box).Min.field0_0x0._s_0.Z = 0.0;
  (this->Box).Max.field0_0x0._s_0.X = 0.0;
  (this->Box).Max.field0_0x0._s_0.Y = 0.0;
  (this->Box).Max.field0_0x0._s_0.Z = 0.0;
  (this->Box).IsValid = '\0';
  (this->Box).Pad[0] = '\0';
  (this->Box).Pad[1] = '\0';
  (this->Box).Pad[2] = '\0';
  (this->Box).Pad[3] = '\0';
  (this->Box).Pad[4] = '\0';
  (this->Box).Pad[5] = '\0';
  (this->Box).Pad[6] = '\0';
  *&(this->Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->FieldFloatResult).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldFloatResult).ArrayNum = 0;
  (this->FieldFloatResult).ArrayMax = 0;
  (this->FieldRemap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldRemap).ArrayNum = 0;
  (this->FieldRemap).ArrayMax = 0;
  this->Magnitude = 1.0;
  this->MinRange = 0.0;
  this->MaxRange = 1.0;
  this->Default = 0.0;
  this->FalloffType = Dataflow_FieldFalloffType_Linear;
  uVar1 = FDataflowVertexSelection::VerticesGroupName.Number;
  *(uint *)&(this->FieldSelectionMask).field_0x0 =
       FDataflowVertexSelection::VerticesGroupName.ComparisonIndex.Value;
  *(uint *)&(this->FieldSelectionMask).field_0x4 = uVar1;
  *(undefined8 *)&(this->FieldSelectionMask).field_0x18 = 0;
  *(undefined4 *)&(this->FieldSelectionMask).field_0x20 = 0;
  *(undefined8 *)&(this->FieldSelectionMask).field_0x24 = 0x80;
  return this;
}

// ~FBoxFalloffFieldDataflowNode @ 14e933070

void __thiscall
FBoxFalloffFieldDataflowNode::~FBoxFalloffFieldDataflowNode(FBoxFalloffFieldDataflowNode *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  pvVar1 = *(void **)&(this->FieldSelectionMask).field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->FieldRemap).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FieldFloatResult).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar1 = *(void **)&(this->SampleIndices).field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->SamplePositions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  return;
}

