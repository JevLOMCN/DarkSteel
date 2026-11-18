// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 13

// StaticStruct @ 14e89f8e0

UScriptStruct * __cdecl FPlaneFalloffFieldDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPlaneFalloffFieldDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FPlaneFalloffFieldDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode,(UObject *)pUVar1,
                         L"PlaneFalloffFieldDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FPlaneFalloffFieldDataflowNode.OuterSingleton;
}

// GetType @ 14e89fb70

FName __thiscall FPlaneFalloffFieldDataflowNode::GetType(FPlaneFalloffFieldDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FPlaneFalloffFieldDataflowNode");
  return in_RDX;
}

// IsA @ 14e89fbd0

bool __thiscall
FPlaneFalloffFieldDataflowNode::IsA(FPlaneFalloffFieldDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FPlaneFalloffFieldDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e89fc38;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e89fc38:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e89fc56;
      }
    }
  }
  bVar5 = true;
LAB_14e89fc56:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e89fc90

FStructOnScope * __thiscall
FPlaneFalloffFieldDataflowNode::NewStructOnScope(FPlaneFalloffFieldDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FPlaneFalloffFieldDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FPlaneFalloffFieldDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode,
                           (UObject *)pUVar2,L"PlaneFalloffFieldDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FPlaneFalloffFieldDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e89fd20

void __thiscall
FPlaneFalloffFieldDataflowNode::SerializeInternal
          (FPlaneFalloffFieldDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPlaneFalloffFieldDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FPlaneFalloffFieldDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode,(UObject *)pUVar1,
                         L"PlaneFalloffFieldDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FPlaneFalloffFieldDataflowNode.OuterSingleton,param_1
             ,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FPlaneFalloffFieldDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e89fd9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e89fdb0

FName __thiscall
FPlaneFalloffFieldDataflowNode::GetDisplayName(FPlaneFalloffFieldDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"PlaneFalloffField");
  return in_RDX;
}

// GetCategory @ 14e89fde0

FName __thiscall FPlaneFalloffFieldDataflowNode::GetCategory(FPlaneFalloffFieldDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Fields");
  return in_RDX;
}

// GetTags @ 14e89ff30

FString * __thiscall
FPlaneFalloffFieldDataflowNode::GetTags
          (FPlaneFalloffFieldDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e89ff60

UScriptStruct * __thiscall
FPlaneFalloffFieldDataflowNode::TypedScriptStruct(FPlaneFalloffFieldDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPlaneFalloffFieldDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FPlaneFalloffFieldDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPlaneFalloffFieldDataflowNode,(UObject *)pUVar1,
                         L"PlaneFalloffFieldDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FPlaneFalloffFieldDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8a0620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FPlaneFalloffFieldDataflowNode::Evaluate
          (FPlaneFalloffFieldDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 *puVar10;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar11;
  FDataflowVertexSelection *pFVar12;
  FDataflowInput *pFVar13;
  TVector<double> *pTVar14;
  float *pfVar15;
  ulonglong uVar16;
  undefined1 auStackY_2d8 [32];
  undefined4 local_278 [2];
  TArray<float,TSizedDefaultAllocator<32>_> local_270;
  float local_260;
  int local_25c;
  int local_258 [2];
  TArray<float,TSizedDefaultAllocator<32>_> local_250;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_240;
  TVector<double> *local_230;
  TVector<double> *local_228;
  TArray<int,TSizedDefaultAllocator<32>_> local_220;
  TArray<int,TSizedDefaultAllocator<32>_> local_210;
  TArray<float,TSizedDefaultAllocator<32>_> local_200;
  TArray<int,TSizedDefaultAllocator<32>_> local_1f0;
  FConnectionReference local_1e0;
  FConnectionReference local_1c8;
  FConnectionReference local_1b0;
  FConnectionReference local_198;
  FConnectionReference local_180;
  FConnectionReference local_168;
  FConnectionReference local_150;
  FConnectionReference local_138;
  FConnectionReference local_120;
  FDataflowSelection local_108;
  FDataflowSelection local_e0;
  FName local_b8;
  void *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  ulonglong local_90;
  
  local_90 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  pTVar1 = &this->FieldFloatResult;
  puVar10 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((((TArray<float,TSizedDefaultAllocator<32>_> *)puVar10 == pTVar1) ||
       (puVar10 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
       (TArray<int,TSizedDefaultAllocator<32>_> *)puVar10 == &this->FieldRemap)) ||
      (puVar10 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (FDataflowVertexSelection *)puVar10 == &this->FieldSelectionMask)) ||
     (puVar10 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (int *)puVar10 == &this->NumSamplePositions)) {
    pTVar11 = FDataflowNode::GetValue<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                        ((FDataflowNode *)this,param_1,&this->SamplePositions);
    pFVar12 = FDataflowNode::GetValue<FDataflowVertexSelection>
                        ((FDataflowNode *)this,param_1,&this->SampleIndices);
    local_1e0.Reference = &this->Position;
    local_1e0.Index = -1;
    local_1e0.ContainerReference = (void *)0x0;
    pFVar13 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1e0);
    pTVar14 = FDataflowInput::GetValue<UE::Math::TVector<double>_>
                        (pFVar13,param_1,local_1e0.Reference);
    local_1c8.Reference = &this->Normal;
    local_1c8.Index = -1;
    local_1c8.ContainerReference = (void *)0x0;
    pFVar13 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1c8);
    local_230 = FDataflowInput::GetValue<UE::Math::TVector<double>_>
                          (pFVar13,param_1,local_1c8.Reference);
    local_1b0.Reference = &this->Distance;
    local_1b0.Index = -1;
    local_1b0.ContainerReference = (void *)0x0;
    pFVar13 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1b0);
    pfVar15 = FDataflowInput::GetValue<float>(pFVar13,param_1,local_1b0.Reference);
    local_198.Index = -1;
    local_198.ContainerReference = (void *)0x0;
    fVar2 = *pfVar15;
    local_198.Reference = &this->Translation;
    pFVar13 = FDataflowNode::FindInput((FDataflowNode *)this,&local_198);
    local_228 = FDataflowInput::GetValue<UE::Math::TVector<double>_>
                          (pFVar13,param_1,local_198.Reference);
    local_180.Reference = &this->Magnitude;
    local_180.Index = -1;
    local_180.ContainerReference = (void *)0x0;
    pFVar13 = FDataflowNode::FindInput((FDataflowNode *)this,&local_180);
    pfVar15 = FDataflowInput::GetValue<float>(pFVar13,param_1,local_180.Reference);
    fVar3 = *pfVar15;
    local_168.Reference = &this->MinRange;
    local_168.Index = -1;
    local_168.ContainerReference = (void *)0x0;
    pFVar13 = FDataflowNode::FindInput((FDataflowNode *)this,&local_168);
    pfVar15 = FDataflowInput::GetValue<float>(pFVar13,param_1,local_168.Reference);
    local_150.Index = -1;
    local_150.ContainerReference = (void *)0x0;
    fVar4 = *pfVar15;
    local_150.Reference = &this->MaxRange;
    pFVar13 = FDataflowNode::FindInput((FDataflowNode *)this,&local_150);
    pfVar15 = FDataflowInput::GetValue<float>(pFVar13,param_1,local_150.Reference);
    local_138.Index = -1;
    local_138.ContainerReference = (void *)0x0;
    fVar5 = *pfVar15;
    local_138.Reference = &this->Default;
    pFVar13 = FDataflowNode::FindInput((FDataflowNode *)this,&local_138);
    pfVar15 = FDataflowInput::GetValue<float>(pFVar13,param_1,local_138.Reference);
    local_120.Index = -1;
    local_120.ContainerReference = (void *)0x0;
    fVar6 = *pfVar15;
    local_120.Reference = &this->SampleIndices;
    pFVar13 = FDataflowNode::FindInput((FDataflowNode *)this,&local_120);
    iVar7 = pTVar11->ArrayNum;
    if (pFVar13->Connection == (FDataflowOutput *)0x0) {
      local_108.GroupName = FDataflowVertexSelection::VerticesGroupName;
      local_108.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_108.SelectionArray.NumBits = 0;
      local_108.SelectionArray.MaxBits = 0x80;
      FDataflowSelection::Initialize(&local_108,iVar7,false);
      local_250.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_250.ArrayNum = 0;
      local_250.ArrayMax = 0;
      local_260 = 0.0;
      TArray<float,TSizedDefaultAllocator<32>_>::Init(&local_250,&local_260,iVar7);
      PlaneFalloffFieldProcess
                (pTVar11,fVar3,fVar4,fVar5,fVar6,fVar2,pTVar14,local_228,local_230,this->FalloffType
                 ,(FDataflowVertexSelection *)&local_108,&local_250);
      FDataflowNode::
      SetValue<TArray<float,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_250,pTVar1);
      local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_210.ArrayNum = 0;
      local_210.ArrayMax = 0;
      FDataflowNode::
      SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_210,&this->FieldRemap);
      if (local_210.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.AllocatorInstance.Data);
      }
      FDataflowNode::SetValue<FDataflowVertexSelection,FDataflowVertexSelection>
                ((FDataflowNode *)this,param_1,(FDataflowVertexSelection *)&local_108,
                 &this->FieldSelectionMask);
      local_25c = pTVar11->ArrayNum;
      FDataflowNode::SetValue<int,int>
                ((FDataflowNode *)this,param_1,&local_25c,&this->NumSamplePositions);
      if (local_250.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_250.AllocatorInstance.Data);
      }
      if (local_108.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_108.SelectionArray.AllocatorInstance.SecondaryData);
      }
    }
    else if (iVar7 == *(int *)&pFVar12->field_0x20) {
      local_240.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_240.ArrayNum = 0;
      local_240.ArrayMax = 0;
      local_220.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_220.ArrayNum = 0;
      local_220.ArrayMax = 0;
      FieldComputeRemap(pTVar11,pFVar12,&local_240,&local_220);
      iVar7 = local_240.ArrayNum;
      uVar16 = local_240._8_8_ & 0xffffffff;
      local_e0.GroupName = FDataflowVertexSelection::VerticesGroupName;
      local_e0.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_e0.SelectionArray.NumBits = 0;
      local_e0.SelectionArray.MaxBits = 0x80;
      FDataflowSelection::Initialize(&local_e0,local_240.ArrayNum,false);
      local_270.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_270.ArrayMax = 0;
      local_278[0] = 0;
      if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar16);
      }
      local_270.ArrayNum = 0;
      if ((iVar7 != 0) &&
         (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar7,&local_270.AllocatorInstance,0,&local_270.ArrayMax), 0 < iVar7)) {
        do {
          if ((local_270.AllocatorInstance.Data <= (FScriptContainerElement *)local_278) &&
             (((FScriptContainerElement *)local_278 <
               local_270.AllocatorInstance.Data + (longlong)local_270.ArrayMax * 4 &&
              (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar9)))) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (local_270.ArrayNum == local_270.ArrayMax) {
            local_270.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_270.AllocatorInstance,&local_270.ArrayMax);
          }
          iVar7 = local_270.ArrayNum + 1;
          *(undefined4 *)(local_270.AllocatorInstance.Data + (longlong)local_270.ArrayNum * 4) =
               local_278[0];
          uVar16 = uVar16 - 1;
          local_270.ArrayNum = iVar7;
        } while (uVar16 != 0);
      }
      PlaneFalloffFieldProcess
                (&local_240,fVar3,fVar4,fVar5,fVar6,fVar2,pTVar14,local_228,local_230,
                 this->FalloffType,(FDataflowVertexSelection *)&local_e0,&local_270);
      FDataflowNode::
      SetValue<TArray<float,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_270,pTVar1);
      FDataflowNode::
      SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_220,&this->FieldRemap);
      FDataflowNode::SetValue<FDataflowVertexSelection,FDataflowVertexSelection>
                ((FDataflowNode *)this,param_1,(FDataflowVertexSelection *)&local_e0,
                 &this->FieldSelectionMask);
      local_258[0] = pTVar11->ArrayNum;
      FDataflowNode::SetValue<int,int>
                ((FDataflowNode *)this,param_1,local_258,&this->NumSamplePositions);
      if (local_270.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_270.AllocatorInstance.Data);
      }
      if (local_e0.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_e0.SelectionArray.AllocatorInstance.SecondaryData);
      }
      if (local_220.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_220.AllocatorInstance.Data);
      }
      if (local_240.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.AllocatorInstance.Data);
      }
    }
    else {
      local_200.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_200.ArrayNum = 0;
      local_200.ArrayMax = 0;
      FDataflowNode::
      SetValue<TArray<float,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_200,pTVar1);
      if (local_200.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.AllocatorInstance.Data);
      }
      local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f0.ArrayNum = 0;
      local_1f0.ArrayMax = 0;
      FDataflowNode::
      SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_1f0,&this->FieldRemap);
      if (local_1f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.AllocatorInstance.Data);
      }
      local_b8 = FDataflowVertexSelection::VerticesGroupName;
      local_a0 = (void *)0x0;
      local_98 = 0;
      local_94 = 0x80;
      FDataflowNode::SetValue<FDataflowVertexSelection,FDataflowVertexSelection>
                ((FDataflowNode *)this,param_1,(FDataflowVertexSelection *)&local_b8,
                 &this->FieldSelectionMask);
      if (local_a0 != (void *)0x0) {
        FMemory::Free(local_a0);
      }
      local_258[1] = 0;
      FDataflowNode::SetValue<int,int>
                ((FDataflowNode *)this,param_1,local_258 + 1,&this->NumSamplePositions);
    }
  }
  return;
}

// FPlaneFalloffFieldDataflowNode @ 14e927b70

FPlaneFalloffFieldDataflowNode * __thiscall
FPlaneFalloffFieldDataflowNode::FPlaneFalloffFieldDataflowNode
          (FPlaneFalloffFieldDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FName *pFVar1;
  TVector<double> *pTVar2;
  TVector<double> *pTVar3;
  TVector<double> *pTVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  FName this_00;
  FDataflowOutput *pFVar8;
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
  *(undefined ***)local_res8 = &___7FPlaneFalloffFieldDataflowNode__6B_;
  local_78.Reference = (void *)((longlong)local_res8 + 0x248);
  *(undefined8 *)((longlong)local_res8 + 0x250) = 0;
  pFVar1 = (FName *)((longlong)local_res8 + 600);
  (((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)local_78.Reference)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pTVar2 = (TVector<double> *)((longlong)local_res8 + 0x280);
  pTVar3 = (TVector<double> *)((longlong)local_res8 + 0x298);
  *pFVar1 = FDataflowVertexSelection::VerticesGroupName;
  pTVar4 = (TVector<double> *)((longlong)local_res8 + 0x2b8);
  *(undefined8 *)((longlong)local_res8 + 0x270) = 0;
  pfVar5 = (float *)((longlong)local_res8 + 0x2b0);
  *(undefined4 *)((longlong)local_res8 + 0x278) = 0;
  pfVar6 = (float *)((longlong)local_res8 + 0x2d0);
  *(undefined4 *)((longlong)local_res8 + 0x27c) = 0x80;
  pfVar7 = (float *)((longlong)local_res8 + 0x2d4);
  *pfVar5 = 0.0;
  *pfVar6 = 1.0;
  *pfVar7 = 0.0;
  *(undefined8 *)((longlong)local_res8 + 0x2d8) = 0x3f800000;
  *(EDataflowFieldFalloffType *)((longlong)local_res8 + 0x2e0) = Dataflow_FieldFalloffType_Linear;
  (((TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)local_res8 + 0x2e8))->AllocatorInstance)
  .Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)local_res8 + 0x2f0) = 0;
  (((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)local_res8 + 0x2f8))->AllocatorInstance).
  Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)local_res8 + 0x300) = 0;
  (pTVar2->field0_0x0)._s_0.X = 0.0;
  *(undefined8 *)((longlong)local_res8 + 0x288) = 0;
  *(undefined8 *)((longlong)local_res8 + 0x290) = 0;
  (pTVar3->field0_0x0)._s_0.X = 0.0;
  *(undefined8 *)((longlong)local_res8 + 0x2a0) = 0;
  *(undefined8 *)((longlong)local_res8 + 0x2a8) = 0x3ff0000000000000;
  (pTVar4->field0_0x0)._s_0.X = 0.0;
  *(undefined8 *)((longlong)local_res8 + 0x2c0) = 0;
  *(undefined8 *)((longlong)local_res8 + 0x2c8) = 0;
  *(FName *)((longlong)local_res8 + 0x308) = FDataflowVertexSelection::VerticesGroupName;
  *(undefined8 *)((longlong)local_res8 + 800) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x328) = 0;
  *(undefined8 *)((longlong)local_res8 + 0x32c) = 0x80;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  this_00 = local_res8;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pFVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  local_78.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
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
  local_78.Reference = pTVar4;
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
  local_78.Reference = (void *)((longlong)this_00 + 0x2d8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_78.Reference = (void *)((longlong)this_00 + 0x2dc);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_58.Reference = (void *)((longlong)this_00 + 0x2e8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Reference = (void *)0x0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pFVar8 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar8,&local_78);
  }
  local_58.Reference = (void *)((longlong)this_00 + 0x2f8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Reference = (void *)0x0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pFVar8 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar8,&local_78);
  }
  local_58.Reference = (void *)((longlong)this_00 + 0x308);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Reference = (void *)0x0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pFVar8 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar8,&local_78);
  }
  local_58.Reference = (void *)((longlong)this_00 + 0x330);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Reference = (void *)0x0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pFVar8 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar8,&local_78);
  }
  return (FPlaneFalloffFieldDataflowNode *)this_00;
}

// FPlaneFalloffFieldDataflowNode @ 14e927f60

FPlaneFalloffFieldDataflowNode * __thiscall
FPlaneFalloffFieldDataflowNode::FPlaneFalloffFieldDataflowNode(FPlaneFalloffFieldDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FPlaneFalloffFieldDataflowNode__6B_;
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
  (this->Normal).field0_0x0._s_0.Z = 1.0;
  this->Distance = 0.0;
  this->Magnitude = 1.0;
  this->MinRange = 0.0;
  this->MaxRange = 1.0;
  this->Default = 0.0;
  this->FalloffType = Dataflow_FieldFalloffType_Linear;
  (this->FieldFloatResult).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldFloatResult).ArrayNum = 0;
  (this->FieldFloatResult).ArrayMax = 0;
  (this->FieldRemap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FieldRemap).ArrayNum = 0;
  (this->FieldRemap).ArrayMax = 0;
  (this->Position).field0_0x0._s_0.X = 0.0;
  (this->Position).field0_0x0._s_0.Y = 0.0;
  (this->Position).field0_0x0._s_0.Z = 0.0;
  (this->Normal).field0_0x0._s_0.X = 0.0;
  (this->Normal).field0_0x0._s_0.Y = 0.0;
  (this->Translation).field0_0x0._s_0.X = 0.0;
  (this->Translation).field0_0x0._s_0.Y = 0.0;
  (this->Translation).field0_0x0._s_0.Z = 0.0;
  uVar1 = FDataflowVertexSelection::VerticesGroupName.Number;
  *(uint *)&(this->FieldSelectionMask).field_0x0 =
       FDataflowVertexSelection::VerticesGroupName.ComparisonIndex.Value;
  *(uint *)&(this->FieldSelectionMask).field_0x4 = uVar1;
  *(undefined8 *)&(this->FieldSelectionMask).field_0x18 = 0;
  *(undefined4 *)&(this->FieldSelectionMask).field_0x20 = 0;
  *(undefined8 *)&(this->FieldSelectionMask).field_0x24 = 0x80;
  return this;
}

// ~FPlaneFalloffFieldDataflowNode @ 14e9339a0

void __thiscall
FPlaneFalloffFieldDataflowNode::~FPlaneFalloffFieldDataflowNode
          (FPlaneFalloffFieldDataflowNode *this)

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

