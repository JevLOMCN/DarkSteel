// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 13

// StaticStruct @ 14e884530

UScriptStruct * __cdecl FUniformPointSamplingDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUniformPointSamplingDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FUniformPointSamplingDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode,
                         (UObject *)pUVar1,L"UniformPointSamplingDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FUniformPointSamplingDataflowNode.OuterSingleton;
}

// GetType @ 14e884790

FName __thiscall FUniformPointSamplingDataflowNode::GetType(FUniformPointSamplingDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FUniformPointSamplingDataflowNode");
  return in_RDX;
}

// IsA @ 14e8847e0

bool __thiscall
FUniformPointSamplingDataflowNode::IsA(FUniformPointSamplingDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FUniformPointSamplingDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e884848;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e884848:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e884866;
      }
    }
  }
  bVar5 = true;
LAB_14e884866:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8848a0

FStructOnScope * __thiscall
FUniformPointSamplingDataflowNode::NewStructOnScope(FUniformPointSamplingDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FUniformPointSamplingDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FUniformPointSamplingDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode,
                           (UObject *)pUVar2,L"UniformPointSamplingDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FUniformPointSamplingDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e884920

void __thiscall
FUniformPointSamplingDataflowNode::SerializeInternal
          (FUniformPointSamplingDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUniformPointSamplingDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FUniformPointSamplingDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode,
                         (UObject *)pUVar1,L"UniformPointSamplingDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FUniformPointSamplingDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FUniformPointSamplingDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e88499d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8849c0

FName __thiscall
FUniformPointSamplingDataflowNode::GetDisplayName(FUniformPointSamplingDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"UniformPointSampling");
  return in_RDX;
}

// GetCategory @ 14e884a00

FName __thiscall
FUniformPointSamplingDataflowNode::GetCategory(FUniformPointSamplingDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"PointSampling");
  return in_RDX;
}

// GetTags @ 14e884a30

FString * __thiscall
FUniformPointSamplingDataflowNode::GetTags
          (FUniformPointSamplingDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e884aa0

UScriptStruct * __thiscall
FUniformPointSamplingDataflowNode::TypedScriptStruct(FUniformPointSamplingDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUniformPointSamplingDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FUniformPointSamplingDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUniformPointSamplingDataflowNode,
                         (UObject *)pUVar1,L"UniformPointSamplingDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FUniformPointSamplingDataflowNode.OuterSingleton;
}

// GetRenderParametersImpl @ 14e884c00

/* WARNING: Removing unreachable block (ram,0x00014e884e27) */
/* WARNING: Removing unreachable block (ram,0x00014e884e35) */

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
FUniformPointSamplingDataflowNode::GetRenderParametersImpl
          (FUniformPointSamplingDataflowNode *this,
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

// Evaluate @ 14e885330

void __thiscall
FUniformPointSamplingDataflowNode::Evaluate
          (FUniformPointSamplingDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  TObjectPtr<UDynamicMesh> TVar5;
  FDynamicMesh3 *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  undefined1 *puVar12;
  TObjectPtr<UDynamicMesh>_u_0 *pTVar13;
  FDataflowInput *pFVar14;
  int *piVar15;
  float *pfVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  int local_res8 [2];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_108;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_f8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_e8;
  TArray<int,TSizedDefaultAllocator<32>_> local_d8;
  FConnectionReference local_c8;
  FConnectionReference local_b0;
  FConnectionReference local_98;
  FConnectionReference local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  puVar12 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)puVar12 ==
         &this->SamplePoints) ||
       (puVar12 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
       (TArray<int,TSizedDefaultAllocator<32>_> *)puVar12 == &this->SampleTriangleIDs)) ||
      (puVar12 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)puVar12 ==
      &this->SampleBarycentricCoords)) ||
     (puVar12 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (int *)puVar12 == &this->NumSamplePoints)) {
    uVar19 = 0;
    local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.ArrayNum = 0;
    local_108.ArrayMax = 0;
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.ArrayNum = 0;
    local_f8.ArrayMax = 0;
    local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.ArrayNum = 0;
    local_d8.ArrayMax = 0;
    local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.ArrayNum = 0;
    local_e8.ArrayMax = 0;
    pTVar13 = &FDataflowNode::GetValue<TObjectPtr<UDynamicMesh>_>
                         ((FDataflowNode *)this,param_1,&this->TargetMesh)->field0_0x0;
    TVar5.field0_0x0 = (TObjectPtr<UDynamicMesh>_u_0)pTVar13->DebugPtr;
    if (TVar5.field0_0x0 != (UDynamicMesh *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar5.field0_0x0);
      }
      pFVar6 = *(FDynamicMesh3 **)((longlong)TVar5.field0_0x0 + 0xb8);
      if (0 < (pFVar6->VertexRefCounts).UsedCount) {
        local_c8.Reference = &this->RandomSeed;
        local_c8.Index = -1;
        local_c8.ContainerReference = (void *)0x0;
        pFVar14 = FDataflowNode::FindInput((FDataflowNode *)this,&local_c8);
        piVar15 = FDataflowInput::GetValue<int>(pFVar14,param_1,local_c8.Reference);
        local_b0.Index = -1;
        local_b0.ContainerReference = (void *)0x0;
        iVar3 = *piVar15;
        local_b0.Reference = &this->SubSampleDensity;
        pFVar14 = FDataflowNode::FindInput((FDataflowNode *)this,&local_b0);
        pfVar16 = FDataflowInput::GetValue<float>(pFVar14,param_1,local_b0.Reference);
        local_98.Index = -1;
        local_98.ContainerReference = (void *)0x0;
        fVar1 = *pfVar16;
        local_98.Reference = &this->MaxNumSamples;
        pFVar14 = FDataflowNode::FindInput((FDataflowNode *)this,&local_98);
        piVar15 = FDataflowInput::GetValue<int>(pFVar14,param_1,local_98.Reference);
        local_80.Index = -1;
        local_80.ContainerReference = (void *)0x0;
        iVar4 = *piVar15;
        local_80.Reference = &this->SamplingRadius;
        pFVar14 = FDataflowNode::FindInput((FDataflowNode *)this,&local_80);
        pfVar16 = FDataflowInput::GetValue<float>(pFVar14,param_1,local_80.Reference);
        FFractureEngineSampling::ComputeUniformPointSampling
                  (pFVar6,*pfVar16,iVar4,fVar1,iVar3,&local_f8,&local_d8,&local_e8);
        iVar3 = local_f8.ArrayNum;
        lVar17 = (longlong)local_f8.ArrayNum;
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,local_f8.ArrayNum,&local_108.AllocatorInstance,&local_108.ArrayNum,
                   &local_108.ArrayMax);
        if (0 < iVar3) {
          lVar18 = 0;
          lVar20 = 0;
          do {
            uVar11 = 0;
            if ((int)uVar19 < local_f8.ArrayNum) {
              uVar11 = ~uVar19 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar2 = *(undefined8 *)(local_f8.AllocatorInstance.Data + lVar20 + 0x30);
            uVar8 = *(undefined8 *)(local_f8.AllocatorInstance.Data + lVar20 + 0x20);
            uVar9 = *(undefined8 *)(local_f8.AllocatorInstance.Data + lVar20 + 0x20 + 8);
            uVar11 = 0;
            if ((int)uVar19 < local_108.ArrayNum) {
              uVar11 = ~uVar19 >> 0x1f;
            }
            local_68 = uVar8;
            uStack_60 = uVar9;
            local_58 = uVar2;
            if ((uVar11 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar19 = uVar19 + 1;
            lVar20 = lVar20 + 0x60;
            *(undefined8 *)(local_108.AllocatorInstance.Data + lVar18) = uVar8;
            *(undefined8 *)(local_108.AllocatorInstance.Data + lVar18 + 8) = uVar9;
            *(undefined8 *)(local_108.AllocatorInstance.Data + lVar18 + 0x10) = uVar2;
            lVar18 = lVar18 + 0x18;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
      }
    }
    FDataflowNode::
    SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,&local_108,&this->SamplePoints);
    FDataflowNode::
    SetValue<TArray<int,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,&local_d8,&this->SampleTriangleIDs);
    FDataflowNode::
    SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,&local_e8,&this->SampleBarycentricCoords);
    local_res8[0] = local_108.ArrayNum;
    FDataflowNode::SetValue<int,int>
              ((FDataflowNode *)this,param_1,local_res8,&this->NumSamplePoints);
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
    if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.AllocatorInstance.Data);
    }
    if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
    if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.AllocatorInstance.Data);
    }
  }
  return;
}

// FUniformPointSamplingDataflowNode @ 14e930390

FUniformPointSamplingDataflowNode * __thiscall
FUniformPointSamplingDataflowNode::FUniformPointSamplingDataflowNode
          (FUniformPointSamplingDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  byte *pbVar1;
  FDataflowInput *pFVar2;
  FDataflowOutput *pFVar3;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  local_68.Index = -1;
  this->NumSamplePoints = 0;
  this->_padding_ = (longlong)&___7FUniformPointSamplingDataflowNode__6B_;
  local_68.Reference = &this->TargetMesh;
  (this->SamplePoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (((TObjectPtr<UDynamicMesh> *)local_68.Reference)->field0_0x0).DebugPtr = (UDynamicMesh *)0x0;
  (this->SamplePoints).ArrayNum = 0;
  (this->SamplePoints).ArrayMax = 0;
  this->MaxNumSamples = 0;
  this->RandomSeed = 0;
  (this->SampleTriangleIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SampleTriangleIDs).ArrayNum = 0;
  (this->SampleTriangleIDs).ArrayMax = 0;
  (this->SampleBarycentricCoords).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SampleBarycentricCoords).ArrayNum = 0;
  (this->SampleBarycentricCoords).ArrayMax = 0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.ContainerReference = (void *)0x0;
  this->SamplingRadius = 10.0;
  this->SubSampleDensity = 10.0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_68.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->SamplingRadius;
  pFVar2 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar2->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->MaxNumSamples;
  pFVar2 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar2->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->SubSampleDensity;
  pFVar2 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar2->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->RandomSeed;
  pFVar2 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  pbVar1 = (byte *)((longlong)&pFVar2->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Reference = &this->SamplePoints;
  pFVar3 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar3,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->SampleTriangleIDs;
  pFVar3 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar3,&local_68);
  }
  local_48.Reference = &this->SampleBarycentricCoords;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  pFVar3 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar3,&local_68);
  }
  local_48.Reference = &this->NumSamplePoints;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  pFVar3 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar3,&local_68);
  }
  return this;
}

// FUniformPointSamplingDataflowNode @ 14e930650

FUniformPointSamplingDataflowNode * __thiscall
FUniformPointSamplingDataflowNode::FUniformPointSamplingDataflowNode
          (FUniformPointSamplingDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->SamplingRadius = 10.0;
  this->MaxNumSamples = 0;
  this->_padding_ = (longlong)&___7FUniformPointSamplingDataflowNode__6B_;
  (this->TargetMesh).field0_0x0.DebugPtr = (UDynamicMesh *)0x0;
  (this->SamplePoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SamplePoints).ArrayNum = 0;
  (this->SamplePoints).ArrayMax = 0;
  (this->SampleTriangleIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SampleTriangleIDs).ArrayNum = 0;
  (this->SampleTriangleIDs).ArrayMax = 0;
  (this->SampleBarycentricCoords).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SampleBarycentricCoords).ArrayNum = 0;
  (this->SampleBarycentricCoords).ArrayMax = 0;
  this->NumSamplePoints = 0;
  this->SubSampleDensity = 10.0;
  this->RandomSeed = 0;
  return this;
}

