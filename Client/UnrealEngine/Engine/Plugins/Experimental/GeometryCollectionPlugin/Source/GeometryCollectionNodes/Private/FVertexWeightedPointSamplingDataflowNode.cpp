// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 14

// StaticStruct @ 14e887ed0

UScriptStruct * __cdecl FVertexWeightedPointSamplingDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVertexWeightedPointSamplingDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FVertexWeightedPointSamplingDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode,
                         (UObject *)pUVar1,L"VertexWeightedPointSamplingDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FVertexWeightedPointSamplingDataflowNode.OuterSingleton;
}

// GetType @ 14e888070

FName __thiscall
FVertexWeightedPointSamplingDataflowNode::GetType(FVertexWeightedPointSamplingDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FVertexWeightedPointSamplingDataflowNode");
  return in_RDX;
}

// IsA @ 14e8880a0

bool __thiscall
FVertexWeightedPointSamplingDataflowNode::IsA
          (FVertexWeightedPointSamplingDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FVertexWeightedPointSamplingDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e888108;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e888108:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e888126;
      }
    }
  }
  bVar5 = true;
LAB_14e888126:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e888160

FStructOnScope * __thiscall
FVertexWeightedPointSamplingDataflowNode::NewStructOnScope
          (FVertexWeightedPointSamplingDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FVertexWeightedPointSamplingDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FVertexWeightedPointSamplingDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode,
                           (UObject *)pUVar2,L"VertexWeightedPointSamplingDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FVertexWeightedPointSamplingDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e888240

void __thiscall
FVertexWeightedPointSamplingDataflowNode::SerializeInternal
          (FVertexWeightedPointSamplingDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVertexWeightedPointSamplingDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FVertexWeightedPointSamplingDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode,
                         (UObject *)pUVar1,L"VertexWeightedPointSamplingDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FVertexWeightedPointSamplingDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FVertexWeightedPointSamplingDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8882bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8882d0

FName __thiscall
FVertexWeightedPointSamplingDataflowNode::GetDisplayName
          (FVertexWeightedPointSamplingDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"VertexWeightedPointSampling");
  return in_RDX;
}

// GetCategory @ 14e888410

FName __thiscall
FVertexWeightedPointSamplingDataflowNode::GetCategory
          (FVertexWeightedPointSamplingDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"PointSampling");
  return in_RDX;
}

// GetTags @ 14e888480

FString * __thiscall
FVertexWeightedPointSamplingDataflowNode::GetTags
          (FVertexWeightedPointSamplingDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8884b0

UScriptStruct * __thiscall
FVertexWeightedPointSamplingDataflowNode::TypedScriptStruct
          (FVertexWeightedPointSamplingDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVertexWeightedPointSamplingDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FVertexWeightedPointSamplingDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVertexWeightedPointSamplingDataflowNode,
                         (UObject *)pUVar1,L"VertexWeightedPointSamplingDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FVertexWeightedPointSamplingDataflowNode.OuterSingleton;
}

// GetRenderParametersImpl @ 14e888550

/* WARNING: Removing unreachable block (ram,0x00014e888777) */
/* WARNING: Removing unreachable block (ram,0x00014e888785) */

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
FVertexWeightedPointSamplingDataflowNode::GetRenderParametersImpl
          (FVertexWeightedPointSamplingDataflowNode *this,
          TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FName FVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  int iVar4;
  FName *pFVar5;
  FName *pFVar6;
  FString *pFVar7;
  TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  FString local_78;
  FString local_68;
  FName local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  FName local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar5 = ::FName::FName(&local_res18,"3DView");
  ::FName::FName(&local_res10,"SamplePoints");
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_88,1,&local_7c);
  *(FName *)local_88.Data = local_res10;
  pFVar6 = ::FName::FName(&local_res20,"TArray<FVector>");
  FVar1 = *pFVar6;
  pFVar7 = ::FString::FString(&local_78,"PointsRender");
  ::FString::FString(&local_68,pFVar7);
  _Src.Data = local_88.Data;
  lVar10 = (longlong)local_80;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = CONCAT44(local_48._4_4_,local_80);
  local_58 = FVar1;
  if (local_80 == 0) {
    local_48 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_80,0,&local_50,local_80,(int *)((longlong)&local_48 + 4));
    memcpy(local_50.Data,_Src.Data,lVar10 << 3);
  }
  local_40 = *pFVar5;
  pFVar9 = (pFVar7->Data).AllocatorInstance.Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar9 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 <
       pFVar9 + (longlong)__return_storage_ptr__->ArrayMax * 0x30)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar8;
  }
  iVar4 = __return_storage_ptr__->ArrayNum;
  if (iVar4 == __return_storage_ptr__->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar4 + 1;
  pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x30;
  *(undefined8 *)pFVar9 = 0;
  *(FScriptContainerElement **)pFVar9 = local_68.Data.AllocatorInstance.Data;
  *(int *)(pFVar9 + 8) = local_68.Data.ArrayNum;
  *(int *)(pFVar9 + 0xc) = local_68.Data.ArrayMax;
  *(FName *)(pFVar9 + 0x10) = local_58;
  *(undefined8 *)(pFVar9 + 0x18) = 0;
  *(FScriptContainerElement **)(pFVar9 + 0x18) = local_50.Data;
  *(undefined4 *)(pFVar9 + 0x20) = (undefined4)local_48;
  *(undefined4 *)(pFVar9 + 0x24) = local_48._4_4_;
  *(FName *)(pFVar9 + 0x28) = local_40;
  local_48 = 0;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if ((FName *)local_88.Data != (FName *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return __return_storage_ptr__;
}

// Evaluate @ 14e888940

void __thiscall
FVertexWeightedPointSamplingDataflowNode::Evaluate
          (FVertexWeightedPointSamplingDataflowNode *this,FContext *param_1,FDataflowOutput *param_2
          )

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  ENonUniformSamplingWeightMode EVar6;
  ENonUniformSamplingDistributionMode EVar7;
  int iVar8;
  int iVar9;
  TObjectPtr<UDynamicMesh> TVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  uint uVar15;
  undefined1 *puVar16;
  TObjectPtr<UDynamicMesh>_u_0 *pTVar17;
  FDataflowInput *pFVar18;
  float *pfVar19;
  int *piVar20;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  longlong lVar25;
  FDynamicMesh3 *local_res8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_178;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_168;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_158;
  TArray<int,TSizedDefaultAllocator<32>_> local_148;
  TArray<float,TSizedDefaultAllocator<32>_> local_138;
  FConnectionReference local_128;
  FConnectionReference local_110;
  FConnectionReference local_f8;
  FConnectionReference local_e0;
  FConnectionReference local_c8;
  FConnectionReference local_b0;
  FConnectionReference local_98;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar16 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)puVar16 ==
         &this->SamplePoints) ||
       (puVar16 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
       (TArray<float,TSizedDefaultAllocator<32>_> *)puVar16 == &this->SampleRadii)) ||
      (puVar16 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (TArray<int,TSizedDefaultAllocator<32>_> *)puVar16 == &this->SampleTriangleIDs)) ||
     ((puVar16 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)puVar16 ==
      &this->SampleBarycentricCoords ||
      (puVar16 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (int *)puVar16 == &this->NumSamplePoints)))) {
    local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.ArrayNum = 0;
    local_178.ArrayMax = 0;
    local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.ArrayNum = 0;
    local_168.ArrayMax = 0;
    local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.ArrayNum = 0;
    local_138.ArrayMax = 0;
    local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.ArrayNum = 0;
    local_148.ArrayMax = 0;
    local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.ArrayNum = 0;
    local_158.ArrayMax = 0;
    pTVar17 = &FDataflowNode::GetValue<TObjectPtr<UDynamicMesh>_>
                         ((FDataflowNode *)this,param_1,&this->TargetMesh)->field0_0x0;
    TVar10.field0_0x0 = (TObjectPtr<UDynamicMesh>_u_0)pTVar17->DebugPtr;
    if (TVar10.field0_0x0 != (UDynamicMesh *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar10.field0_0x0);
      }
      local_res8 = *(FDynamicMesh3 **)((longlong)TVar10.field0_0x0 + 0xb8);
      if (0 < (local_res8->VertexRefCounts).UsedCount) {
        local_98.Reference = &this->VertexWeights;
        local_98.Index = -1;
        local_98.ContainerReference = (void *)0x0;
        pFVar18 = FDataflowNode::FindInput((FDataflowNode *)this,&local_98);
        if (pFVar18->Connection != (FDataflowOutput *)0x0) {
          local_128.Reference = &this->SizeDistributionPower;
          bVar14 = this->bInvertWeights;
          EVar6 = this->WeightMode;
          local_128.Index = -1;
          local_128.ContainerReference = (void *)0x0;
          pFVar18 = FDataflowNode::FindInput((FDataflowNode *)this,&local_128);
          pfVar19 = FDataflowInput::GetValue<float>(pFVar18,param_1,local_128.Reference);
          EVar7 = this->SizeDistribution;
          local_110.Index = -1;
          local_110.ContainerReference = (void *)0x0;
          fVar1 = *pfVar19;
          local_110.Reference = &this->MaxSamplingRadius;
          pFVar18 = FDataflowNode::FindInput((FDataflowNode *)this,&local_110);
          pfVar19 = FDataflowInput::GetValue<float>(pFVar18,param_1,local_110.Reference);
          local_f8.Index = -1;
          local_f8.ContainerReference = (void *)0x0;
          fVar2 = *pfVar19;
          local_f8.Reference = &this->RandomSeed;
          pFVar18 = FDataflowNode::FindInput((FDataflowNode *)this,&local_f8);
          piVar20 = FDataflowInput::GetValue<int>(pFVar18,param_1,local_f8.Reference);
          local_e0.Index = -1;
          local_e0.ContainerReference = (void *)0x0;
          iVar8 = *piVar20;
          local_e0.Reference = &this->SubSampleDensity;
          pFVar18 = FDataflowNode::FindInput((FDataflowNode *)this,&local_e0);
          pfVar19 = FDataflowInput::GetValue<float>(pFVar18,param_1,local_e0.Reference);
          local_c8.Index = -1;
          local_c8.ContainerReference = (void *)0x0;
          fVar3 = *pfVar19;
          local_c8.Reference = &this->MaxNumSamples;
          pFVar18 = FDataflowNode::FindInput((FDataflowNode *)this,&local_c8);
          piVar20 = FDataflowInput::GetValue<int>(pFVar18,param_1,local_c8.Reference);
          local_b0.Index = -1;
          local_b0.ContainerReference = (void *)0x0;
          iVar9 = *piVar20;
          local_b0.Reference = &this->SamplingRadius;
          pFVar18 = FDataflowNode::FindInput((FDataflowNode *)this,&local_b0);
          pfVar19 = FDataflowInput::GetValue<float>(pFVar18,param_1,local_b0.Reference);
          fVar4 = *pfVar19;
          pTVar21 = FDataflowNode::GetValue<TArray<float,TSizedDefaultAllocator<32>_>_>
                              ((FDataflowNode *)this,param_1,&this->VertexWeights);
          FFractureEngineSampling::ComputeVertexWeightedPointSampling
                    (local_res8,pTVar21,fVar4,iVar9,fVar3,iVar8,fVar2,EVar7,fVar1,EVar6,bVar14,
                     &local_168,&local_138,&local_148,&local_158);
          iVar8 = local_168.ArrayNum;
          lVar22 = (longlong)local_168.ArrayNum;
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,local_168.ArrayNum,&local_178.AllocatorInstance,&local_178.ArrayNum,
                     &local_178.ArrayMax);
          uVar24 = 0;
          if (0 < iVar8) {
            lVar23 = 0;
            lVar25 = 0;
            do {
              uVar15 = 0;
              if ((int)uVar24 < local_168.ArrayNum) {
                uVar15 = ~uVar24 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              uVar5 = *(undefined8 *)(local_168.AllocatorInstance.Data + lVar25 + 0x30);
              uVar12 = *(undefined8 *)(local_168.AllocatorInstance.Data + lVar25 + 0x20);
              uVar13 = *(undefined8 *)(local_168.AllocatorInstance.Data + lVar25 + 0x20 + 8);
              uVar15 = 0;
              if ((int)uVar24 < local_178.ArrayNum) {
                uVar15 = ~uVar24 >> 0x1f;
              }
              local_80 = uVar12;
              uStack_78 = uVar13;
              local_70 = uVar5;
              if ((uVar15 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              uVar24 = uVar24 + 1;
              lVar25 = lVar25 + 0x60;
              *(undefined8 *)(local_178.AllocatorInstance.Data + lVar23) = uVar12;
              *(undefined8 *)(local_178.AllocatorInstance.Data + lVar23 + 8) = uVar13;
              *(undefined8 *)(local_178.AllocatorInstance.Data + lVar23 + 0x10) = uVar5;
              lVar23 = lVar23 + 0x18;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
          }
        }
      }
    }
    FDataflowNode::
    SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,&local_178,&this->SamplePoints);
    FDataflowNode::
    SetValue<TArray<float,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,&local_138,&this->SampleRadii);
    FDataflowNode::
    SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,&local_148,&this->SampleTriangleIDs);
    FDataflowNode::
    SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,&local_158,&this->SampleBarycentricCoords);
    local_res8 = (FDynamicMesh3 *)CONCAT44(local_res8._4_4_,local_178.ArrayNum);
    FDataflowNode::SetValue<int,int>
              ((FDataflowNode *)this,param_1,(int *)&local_res8,&this->NumSamplePoints);
    if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.AllocatorInstance.Data);
    }
    if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.AllocatorInstance.Data);
    }
    if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.AllocatorInstance.Data);
    }
    if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.AllocatorInstance.Data);
    }
    if (local_178.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.AllocatorInstance.Data);
    }
  }
  return;
}

// FVertexWeightedPointSamplingDataflowNode @ 14e9315b0

FVertexWeightedPointSamplingDataflowNode * __thiscall
FVertexWeightedPointSamplingDataflowNode::FVertexWeightedPointSamplingDataflowNode
          (FVertexWeightedPointSamplingDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  byte *pbVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  int *piVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  FName this_00;
  FDataflowInput *pFVar9;
  FDataflowOutput *pFVar10;
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
  *(undefined ***)local_res8 = &___7FVertexWeightedPointSamplingDataflowNode__6B_;
  pTVar2 = (TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)local_res8 + 0x250);
  local_78.Reference = (void *)((longlong)local_res8 + 0x248);
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar3 = (int *)((longlong)local_res8 + 0x264);
  *(TObjectPtr<UDynamicMesh>_u_0 *)local_78.Reference = (TObjectPtr<UDynamicMesh>_u_0)0x0;
  piVar4 = (int *)((longlong)local_res8 + 0x26c);
  *(undefined8 *)((longlong)local_res8 + 600) = 0;
  pfVar5 = (float *)((longlong)local_res8 + 0x260);
  *piVar3 = 0;
  pfVar6 = (float *)((longlong)local_res8 + 0x268);
  *piVar4 = 0;
  pfVar7 = (float *)((longlong)local_res8 + 0x270);
  *(ENonUniformSamplingDistributionMode *)((longlong)local_res8 + 0x274) =
       ENonUniformSamplingDistributionMode_Uniform;
  pfVar8 = (float *)((longlong)local_res8 + 0x278);
  (((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)((longlong)local_res8 + 0x280))
  ->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)local_res8 + 0x288) = 0;
  (((TArray<float,TSizedDefaultAllocator<32>_> *)((longlong)local_res8 + 0x290))->AllocatorInstance)
  .Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)local_res8 + 0x298) = 0;
  (((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)local_res8 + 0x2a0))->AllocatorInstance).
  Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)local_res8 + 0x2a8) = 0;
  (((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)((longlong)local_res8 + 0x2b0))
  ->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)local_res8 + 0x2b8) = 0;
  *(int *)((longlong)local_res8 + 0x2c0) = 0;
  *pfVar5 = 10.0;
  *pfVar6 = 10.0;
  *pfVar7 = 10.0;
  *pfVar8 = 2.0;
  *(undefined2 *)((longlong)local_res8 + 0x27c) = 2;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  this_00 = local_res8;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pTVar2;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  local_78.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar5;
  pFVar9 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar9->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = piVar3;
  pFVar9 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar9->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar6;
  pFVar9 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar9->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = piVar4;
  pFVar9 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar9->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar7;
  pFVar9 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar9->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pfVar8;
  pFVar9 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this_00,&local_78,&local_res8);
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pbVar1 = (byte *)((longlong)&pFVar9->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_58.Reference = (void *)((longlong)this_00 + 0x280);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Reference = (void *)0x0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar10,&local_78);
  }
  local_58.Reference = (void *)((longlong)this_00 + 0x290);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Reference = (void *)0x0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar10,&local_78);
  }
  local_58.Reference = (void *)((longlong)this_00 + 0x2a0);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Reference = (void *)0x0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar10,&local_78);
  }
  local_58.Reference = (void *)((longlong)this_00 + 0x2b0);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Reference = (void *)0x0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar10,&local_78);
  }
  local_58.Reference = (void *)((longlong)this_00 + 0x2c0);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Reference = (void *)0x0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar10,&local_78);
  }
  return (FVertexWeightedPointSamplingDataflowNode *)this_00;
}

// FVertexWeightedPointSamplingDataflowNode @ 14e931980

FVertexWeightedPointSamplingDataflowNode * __thiscall
FVertexWeightedPointSamplingDataflowNode::FVertexWeightedPointSamplingDataflowNode
          (FVertexWeightedPointSamplingDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->SamplingRadius = 10.0;
  this->MaxNumSamples = 0;
  this->_padding_ = (longlong)&___7FVertexWeightedPointSamplingDataflowNode__6B_;
  (this->TargetMesh).field0_0x0.DebugPtr = (UDynamicMesh *)0x0;
  (this->VertexWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexWeights).ArrayNum = 0;
  (this->VertexWeights).ArrayMax = 0;
  this->SizeDistribution = ENonUniformSamplingDistributionMode_Uniform;
  (this->SamplePoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SamplePoints).ArrayNum = 0;
  (this->SamplePoints).ArrayMax = 0;
  (this->SampleRadii).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SampleRadii).ArrayNum = 0;
  (this->SampleRadii).ArrayMax = 0;
  (this->SampleTriangleIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SampleTriangleIDs).ArrayNum = 0;
  (this->SampleTriangleIDs).ArrayMax = 0;
  (this->SampleBarycentricCoords).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SampleBarycentricCoords).ArrayNum = 0;
  (this->SampleBarycentricCoords).ArrayMax = 0;
  this->NumSamplePoints = 0;
  this->SubSampleDensity = 10.0;
  this->RandomSeed = 0;
  this->MaxSamplingRadius = 10.0;
  this->SizeDistributionPower = 2.0;
  this->WeightMode = ENonUniformSamplingWeightMode_WeightedRandom;
  this->bInvertWeights = false;
  return this;
}

// ~FVertexWeightedPointSamplingDataflowNode @ 14e933de0

void __thiscall
FVertexWeightedPointSamplingDataflowNode::~FVertexWeightedPointSamplingDataflowNode
          (FVertexWeightedPointSamplingDataflowNode *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->SampleBarycentricCoords).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SampleTriangleIDs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SampleRadii).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SamplePoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VertexWeights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  return;
}

