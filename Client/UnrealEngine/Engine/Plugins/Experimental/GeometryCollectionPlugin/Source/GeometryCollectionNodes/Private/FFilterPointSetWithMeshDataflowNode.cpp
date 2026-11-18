// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 13

// StaticStruct @ 14e8822c0

UScriptStruct * __cdecl FFilterPointSetWithMeshDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFilterPointSetWithMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FFilterPointSetWithMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFilterPointSetWithMeshDataflowNode,
                         (UObject *)pUVar1,L"FilterPointSetWithMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FFilterPointSetWithMeshDataflowNode.OuterSingleton;
}

// GetType @ 14e882380

FName __thiscall
FFilterPointSetWithMeshDataflowNode::GetType(FFilterPointSetWithMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FFilterPointSetWithMeshDataflowNode");
  return in_RDX;
}

// IsA @ 14e8823b0

bool __thiscall
FFilterPointSetWithMeshDataflowNode::IsA(FFilterPointSetWithMeshDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FFilterPointSetWithMeshDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e882418;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e882418:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e882436;
      }
    }
  }
  bVar5 = true;
LAB_14e882436:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e882470

FStructOnScope * __thiscall
FFilterPointSetWithMeshDataflowNode::NewStructOnScope(FFilterPointSetWithMeshDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FFilterPointSetWithMeshDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FFilterPointSetWithMeshDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FFilterPointSetWithMeshDataflowNode,
                           (UObject *)pUVar2,L"FilterPointSetWithMeshDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FFilterPointSetWithMeshDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e882540

void __thiscall
FFilterPointSetWithMeshDataflowNode::SerializeInternal
          (FFilterPointSetWithMeshDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFilterPointSetWithMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FFilterPointSetWithMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFilterPointSetWithMeshDataflowNode,
                         (UObject *)pUVar1,L"FilterPointSetWithMeshDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FFilterPointSetWithMeshDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FFilterPointSetWithMeshDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8825bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8825d0

FName __thiscall
FFilterPointSetWithMeshDataflowNode::GetDisplayName(FFilterPointSetWithMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FilterPointsWithMesh");
  return in_RDX;
}

// GetCategory @ 14e882600

FName __thiscall
FFilterPointSetWithMeshDataflowNode::GetCategory(FFilterPointSetWithMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"PointSampling");
  return in_RDX;
}

// GetTags @ 14e882670

FString * __thiscall
FFilterPointSetWithMeshDataflowNode::GetTags
          (FFilterPointSetWithMeshDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e883070

UScriptStruct * __thiscall
FFilterPointSetWithMeshDataflowNode::TypedScriptStruct(FFilterPointSetWithMeshDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFilterPointSetWithMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FFilterPointSetWithMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFilterPointSetWithMeshDataflowNode,
                         (UObject *)pUVar1,L"FilterPointSetWithMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FFilterPointSetWithMeshDataflowNode.OuterSingleton;
}

// GetRenderParametersImpl @ 14e8830f0

/* WARNING: Removing unreachable block (ram,0x00014e883317) */
/* WARNING: Removing unreachable block (ram,0x00014e883325) */

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
FFilterPointSetWithMeshDataflowNode::GetRenderParametersImpl
          (FFilterPointSetWithMeshDataflowNode *this,
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

// Evaluate @ 14e8834c0

void __thiscall
FFilterPointSetWithMeshDataflowNode::Evaluate
          (FFilterPointSetWithMeshDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  FScriptContainerElement *_Src;
  TObjectPtr<UDynamicMesh> this_00;
  undefined1 *puVar7;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar8;
  FDataflowInput *pFVar9;
  float *pfVar10;
  bool *pbVar11;
  TObjectPtr<UDynamicMesh>_u_0 *pTVar12;
  longlong lVar13;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_a8;
  undefined1 local_98 [16];
  void *local_88;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_80;
  double local_78;
  undefined1 local_70;
  double local_68;
  double local_60;
  undefined1 local_58;
  FFilterPointSetWithMeshDataflowNode *local_50;
  
  pTVar1 = &this->SamplePoints;
  puVar7 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)puVar7 != pTVar1) {
    return;
  }
  pTVar8 = FDataflowNode::GetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                     ((FDataflowNode *)this,param_1,pTVar1);
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = pTVar8->ArrayNum;
  lVar13 = (longlong)local_a8.ArrayNum;
  _Src = (pTVar8->AllocatorInstance).Data;
  if (local_a8.ArrayNum == 0) {
    local_a8.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,local_a8.ArrayNum,0,&local_a8.AllocatorInstance,local_a8.ArrayNum,
               &local_a8.ArrayMax);
    memcpy(local_a8.AllocatorInstance.Data,_Src,lVar13 * 0x18);
  }
  local_98._0_8_ = &this->WindingThreshold;
  local_98._8_4_ = -1;
  local_88 = (void *)0x0;
  pFVar9 = FDataflowNode::FindInput((FDataflowNode *)this,(FConnectionReference *)local_98);
  pfVar10 = FDataflowInput::GetValue<float>(pFVar9,param_1,(float *)local_98._0_8_);
  fVar2 = *pfVar10;
  local_98._0_8_ = &this->bKeepInside;
  local_98._8_4_ = -1;
  local_88 = (void *)0x0;
  pFVar9 = FDataflowNode::FindInput((FDataflowNode *)this,(FConnectionReference *)local_98);
  pbVar11 = FDataflowInput::GetValue<bool>(pFVar9,param_1,(bool *)local_98._0_8_);
  bVar5 = *pbVar11;
  local_98._0_8_ = &this->MinDistance;
  local_98._8_4_ = -1;
  local_88 = (void *)0x0;
  pFVar9 = FDataflowNode::FindInput((FDataflowNode *)this,(FConnectionReference *)local_98);
  pfVar10 = FDataflowInput::GetValue<float>(pFVar9,param_1,(float *)local_98._0_8_);
  fVar3 = *pfVar10;
  local_98._0_8_ = &this->MaxDistance;
  local_98._8_4_ = -1;
  local_88 = (void *)0x0;
  pFVar9 = FDataflowNode::FindInput((FDataflowNode *)this,(FConnectionReference *)local_98);
  pfVar10 = FDataflowInput::GetValue<float>(pFVar9,param_1,(float *)local_98._0_8_);
  fVar4 = *pfVar10;
  local_98._0_8_ = &this->bUseSignedDistance;
  local_98._8_4_ = 0xffffffff;
  local_88 = (void *)0x0;
  pFVar9 = FDataflowNode::FindInput((FDataflowNode *)this,(FConnectionReference *)local_98);
  pbVar11 = FDataflowInput::GetValue<bool>(pFVar9,param_1,(bool *)local_98._0_8_);
  bVar6 = *pbVar11;
  pTVar12 = &FDataflowNode::GetValue<TObjectPtr<UDynamicMesh>_>
                       ((FDataflowNode *)this,param_1,&this->TargetMesh)->field0_0x0;
  this_00.field0_0x0 = (TObjectPtr<UDynamicMesh>_u_0)pTVar12->DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (this_00.field0_0x0 == (UDynamicMesh *)0x0) goto LAB_14e883714;
    UE::GC::MarkAsReachable((UObject *)this_00.field0_0x0);
  }
  if (this_00.field0_0x0 != (UDynamicMesh *)0x0) {
    local_80 = &local_a8;
    local_98._8_8_ = &local_80;
    local_98._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FFilterPointSetWithMeshDataflowNode::Evaluate'::__l8::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_78 = (double)fVar2;
    local_70 = bVar5;
    local_68 = (double)fVar3;
    local_60 = (double)fVar4;
    local_58 = bVar6;
    local_50 = this;
    UDynamicMesh::ProcessMesh
              ((UDynamicMesh *)this_00.field0_0x0,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_98);
  }
LAB_14e883714:
  FDataflowNode::
  SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,&local_a8,pTVar1);
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return;
}

// FFilterPointSetWithMeshDataflowNode @ 14e91cb20

FFilterPointSetWithMeshDataflowNode * __thiscall
FFilterPointSetWithMeshDataflowNode::FFilterPointSetWithMeshDataflowNode
          (FFilterPointSetWithMeshDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  byte *pbVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  FDataflowInput *pFVar3;
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this->FilterMethod = '\x01';
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FFilterPointSetWithMeshDataflowNode__6B_;
  pTVar2 = &this->SamplePoints;
  local_68.Reference = &this->TargetMesh;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (((TObjectPtr<UDynamicMesh> *)local_68.Reference)->field0_0x0).DebugPtr = (UDynamicMesh *)0x0;
  this->MinDistance = 0.0;
  this->bUseSignedDistance = false;
  (this->SamplePoints).ArrayNum = 0;
  (this->SamplePoints).ArrayMax = 0;
  local_68.ContainerReference = (void *)0x0;
  this->bKeepInside = true;
  this->WindingThreshold = 0.5;
  this->MaxDistance = 1000.0;
  local_68.Index = -1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.ContainerReference = (void *)0x0;
  local_68.Index = -1;
  local_68.Reference = pTVar2;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_68.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->bKeepInside;
  pFVar3 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar3->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->WindingThreshold;
  pFVar3 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar3->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->MinDistance;
  pFVar3 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar3->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->MaxDistance;
  pFVar3 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar3->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->bUseSignedDistance;
  pFVar3 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  pbVar1 = (byte *)((longlong)&pFVar3->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Reference = pTVar2;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_68);
  }
  return this;
}

// operator() @ 14e9360b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FFilterPointSetWithMeshDataflowNode::Evaluate'::__l8::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  double dVar4;
  ForAnyElementType *pFVar5;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  longlong lVar8;
  code *pcVar9;
  undefined8 uVar10;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar11;
  bool bVar12;
  ulong64 uVar13;
  byte bVar14;
  uint uVar15;
  byte bVar17;
  ulonglong uVar18;
  byte bVar19;
  char cVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  double dVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined1 auStackY_238 [32];
  <lambda_1> local_1f8;
  TArray<bool,TSizedDefaultAllocator<32>_> local_1f0;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> local_1e0;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_1a8;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *local_1a0;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> *local_198;
  undefined8 local_190;
  byte local_188;
  byte local_187;
  byte local_186;
  undefined1 local_185;
  undefined1 local_184;
  char local_183;
  undefined8 local_180;
  <lambda_1> local_178;
  undefined8 local_170;
  undefined8 local_168;
  double local_160;
  TArrayView<std::nullptr_t,int> local_158;
  code *local_148;
  TArray<bool,TSizedDefaultAllocator<32>_> **local_140;
  undefined1 local_138 [48];
  undefined **local_108;
  code *local_100;
  undefined8 local_f0;
  double local_e8;
  TDynamicVector<int,512> local_e0;
  TDynamicVector<UE::Math::TVector<double>,512> local_c8;
  TDynamicVector<UE::Math::TVector<double>,512> local_b0;
  TDynamicVector<int,512> local_98;
  longlong local_80;
  ulonglong local_78;
  ulonglong uVar16;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_238;
  bVar19 = *(byte *)(*(longlong *)((longlong)this + 0x30) + 0x250);
  bVar17 = bVar19 >> 1 & 1;
  bVar14 = bVar19 >> 2 & 1;
  bVar19 = bVar19 & 1;
  if (((bVar19 == 0) && (bVar17 == 0)) && (bVar14 == 0)) {
    return;
  }
  dVar23 = *(double *)((longlong)this + 0x18);
  uVar15 = SUB84(dVar23,0);
  uVar26 = (uint)((ulonglong)dVar23 >> 0x20);
  dVar4 = *(double *)((longlong)this + 0x20);
  uVar27 = SUB84(dVar4,0);
  uVar28 = (uint)((ulonglong)dVar4 >> 0x20);
  uVar29 = 0;
  uVar30 = 0;
  if (*(char *)((longlong)this + 0x28) == '\0') {
    if (dVar23 <= 0.0) {
      uVar15 = 0;
      uVar26 = 0;
    }
    if (dVar4 <= 0.0) {
      uVar27 = 0;
      uVar28 = 0;
    }
  }
  if (((bVar17 != 0) && (bVar14 != 0)) &&
     ((double)CONCAT44(uVar28,uVar27) <= (double)CONCAT44(uVar26,uVar15) &&
      (double)CONCAT44(uVar26,uVar15) != (double)CONCAT44(uVar28,uVar27))) {
    pFVar5 = *(ForAnyElementType **)this;
    piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
    *(undefined4 *)&pFVar5[1].Data = 0;
    if (*piVar1 == 0) {
      return;
    }
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,pFVar5,0,piVar1);
    return;
  }
  if ((bVar19 == 0) && (*(char *)((longlong)this + 0x28) == '\0')) {
    cVar20 = '\0';
  }
  else {
    cVar20 = '\x01';
  }
  if ((bVar17 == 0) && (bVar14 == 0)) {
    local_1f8 = (<lambda_1>)0x0;
  }
  else {
    local_1f8 = (<lambda_1>)0x1;
    if (bVar14 != 0) {
      dVar23 = (double)CONCAT44(uVar28 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                uVar27 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
      goto LAB_14e9361de;
    }
  }
  dVar23 = 0.0;
LAB_14e9361de:
  if (bVar17 != 0) {
    uVar29 = uVar15 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar30 = uVar26 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  }
  uVar16 = 0;
  local_138._24_4_ = 3;
  local_138._16_8_ = 0;
  local_138._0_8_ = &___7__TMeshAABBTree3_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  if ((double)CONCAT44(uVar30,uVar29) <= dVar23) {
    uVar29 = SUB84(dVar23,0);
    uVar30 = (uint)((ulonglong)dVar23 >> 0x20);
  }
  local_108 = &
              ___7__TFunction_OwnedObject_P6AHHAEBU__TAxisAlignedBox3_N_Geometry_UE___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  local_e8 = __real_3e45798ee2308c3a;
  local_100 = `UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::MakeDefaultSplitAxisFunc'
              ::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_138._32_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),int,int,UE::Geometry::TAxisAlignedBox3<double>_const_&>
       ::Call;
  local_f0 = 0;
  local_e0.CurBlock = 0;
  local_e0.CurBlockUsed = 0;
  local_e0.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.Blocks.ArrayNum = 0;
  local_e0.Blocks.ArrayMax = 0;
  UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&local_e0);
  local_c8.CurBlock = 0;
  local_c8.CurBlockUsed = 0;
  local_c8.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Blocks.ArrayNum = 0;
  local_c8.Blocks.ArrayMax = 0;
  UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_c8);
  local_b0.CurBlock = 0;
  local_b0.CurBlockUsed = 0;
  local_b0.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.Blocks.ArrayNum = 0;
  local_b0.Blocks.ArrayMax = 0;
  UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_b0);
  local_98.CurBlock = 0;
  local_98.CurBlockUsed = 0;
  local_98.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Blocks.ArrayNum = 0;
  local_98.Blocks.ArrayMax = 0;
  UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&local_98);
  local_80 = -1;
  local_138._16_8_ = 0;
  local_138._8_8_ = param_1;
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
            ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_138,false);
  local_138._16_8_ = UE::Geometry::FDynamicMesh3::GetChangeStamp((FDynamicMesh3 *)local_138._8_8_);
  local_1e0.FWNBeta = __real_4000000000000000;
  local_1e0.FastWindingCache.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e0.FastWindingCache.ArrayNum = 0;
  local_1e0.FastWindingCache.ArrayMax = 0;
  local_1e0.FastWindingCacheOffset = 0;
  local_1e0.FastWindingCacheMeshChangeStamp = 0;
  local_1e0.FWNApproxOrder = 2;
  local_1e0.Tree = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_138;
  if (cVar20 != '\0') {
    if ((local_80 < 0) ||
       (uVar13 = UE::Geometry::FDynamicMesh3::GetChangeStamp((FDynamicMesh3 *)local_138._8_8_),
       local_138._16_8_ != uVar13)) {
      pTVar11 = local_1e0.Tree;
      UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown(local_1e0.Tree,false);
      uVar13 = UE::Geometry::FDynamicMesh3::GetChangeStamp(pTVar11->Mesh);
      pTVar11->MeshChangeStamp = uVar13;
    }
    UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::build_fast_winding_cache
              (&local_1e0);
    local_1e0.FastWindingCacheMeshChangeStamp = (local_1e0.Tree)->MeshChangeStamp;
  }
  uVar24 = copysign((double)CONCAT44(uVar26,uVar15) * (double)CONCAT44(uVar26,uVar15));
  uVar25 = copysign((double)CONCAT44(uVar28,uVar27) * (double)CONCAT44(uVar28,uVar27));
  local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f0.ArrayNum = 0;
  local_1f0.ArrayMax = 0;
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_1f0,*(int *)(*(longlong *)this + 8),Default);
  local_160 = (double)CONCAT44(uVar30,uVar29) + __real_3f1a36e2eb1c432d;
  local_180 = *(undefined8 *)((longlong)this + 8);
  local_1a8 = &local_1f0;
  local_198 = &local_1e0;
  local_190 = *(undefined8 *)this;
  local_185 = *(undefined1 *)((longlong)this + 0x28);
  local_184 = *(undefined1 *)((longlong)this + 0x10);
  local_178 = local_1f8;
  local_148 = UE::Core::Private::Function::
              TFunctionRefCaller<``FFilterPointSetWithMeshDataflowNode::Evaluate'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>,void,int>
              ::Call;
  local_140 = &local_1a8;
  local_158.DataPtr = (void **)0x0;
  local_158.ArrayNum = 0;
  local_1a0 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_138;
  local_188 = bVar19;
  local_187 = bVar17;
  local_186 = bVar14;
  local_183 = cVar20;
  local_170 = uVar24;
  local_168 = uVar25;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",local_1f0.ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_148,
             local_1f8,None,&local_158);
  uVar18 = uVar16;
  uVar21 = uVar16;
  uVar22 = uVar16;
  do {
    uVar15 = (uint)uVar16;
    if ((int)uVar15 < *(int *)(*(longlong *)this + 8)) {
      do {
        uVar15 = (uint)uVar16;
        uVar26 = 0;
        if ((int)uVar15 < local_1f0.ArrayNum) {
          uVar26 = ~uVar15 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (local_1f0.AllocatorInstance.Data[uVar18] != (FScriptContainerElement)0x0) break;
        uVar15 = uVar15 + 1;
        uVar16 = (ulonglong)uVar15;
        uVar18 = uVar18 + 1;
      } while ((int)uVar15 < *(int *)(*(longlong *)this + 8));
    }
    this_00 = *(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **)this;
    uVar26 = (uint)uVar22;
    if (this_00->ArrayNum <= (int)uVar15) {
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(this_00,uVar26,Default);
      if (local_1f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.AllocatorInstance.Data);
      }
      if (local_1e0.FastWindingCache.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.FastWindingCache.AllocatorInstance.Data);
      }
      UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
      ~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
                ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_138);
      return;
    }
    if (uVar15 != uVar26) {
      if (((int)uVar15 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar6 = (this_00->AllocatorInstance).Data;
      plVar7 = *(longlong **)this;
      pFVar2 = pFVar6 + uVar18 * 0x18;
      uVar25 = *(undefined8 *)pFVar2;
      uVar10 = *(undefined8 *)(pFVar2 + 8);
      uVar24 = *(undefined8 *)(pFVar6 + uVar18 * 0x18 + 0x10);
      uVar27 = 0;
      if ((int)uVar26 < (int)plVar7[1]) {
        uVar27 = ~uVar26 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar8 = *plVar7;
      puVar3 = (undefined8 *)(lVar8 + uVar21);
      *puVar3 = uVar25;
      puVar3[1] = uVar10;
      *(undefined8 *)(lVar8 + 0x10 + uVar21) = uVar24;
    }
    uVar22 = (ulonglong)(uVar26 + 1);
    uVar21 = uVar21 + 0x18;
    uVar16 = (ulonglong)(uVar15 + 1);
    uVar18 = uVar18 + 1;
  } while( true );
}

