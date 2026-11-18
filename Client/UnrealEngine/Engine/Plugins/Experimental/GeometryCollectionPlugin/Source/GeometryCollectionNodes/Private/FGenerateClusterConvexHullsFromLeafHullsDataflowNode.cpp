// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8b5a90

UScriptStruct * __cdecl FGenerateClusterConvexHullsFromLeafHullsDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode
                         ,(UObject *)pUVar1,L"GenerateClusterConvexHullsFromLeafHullsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode.
         OuterSingleton;
}

// GetType @ 14e8b5c00

FName __thiscall
FGenerateClusterConvexHullsFromLeafHullsDataflowNode::GetType
          (FGenerateClusterConvexHullsFromLeafHullsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGenerateClusterConvexHullsFromLeafHullsDataflowNode");
  return in_RDX;
}

// IsA @ 14e8b5c70

bool __thiscall
FGenerateClusterConvexHullsFromLeafHullsDataflowNode::IsA
          (FGenerateClusterConvexHullsFromLeafHullsDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGenerateClusterConvexHullsFromLeafHullsDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8b5cd8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8b5cd8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8b5cf6;
      }
    }
  }
  bVar5 = true;
LAB_14e8b5cf6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8b5d30

FStructOnScope * __thiscall
FGenerateClusterConvexHullsFromLeafHullsDataflowNode::NewStructOnScope
          (FGenerateClusterConvexHullsFromLeafHullsDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode.
      OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode
                           ,(UObject *)pUVar2,L"GenerateClusterConvexHullsFromLeafHullsDataflowNode"
                          );
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8b5db0

void __thiscall
FGenerateClusterConvexHullsFromLeafHullsDataflowNode::SerializeInternal
          (FGenerateClusterConvexHullsFromLeafHullsDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode
                         ,(UObject *)pUVar1,L"GenerateClusterConvexHullsFromLeafHullsDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8b5e2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8b5e50

FName __thiscall
FGenerateClusterConvexHullsFromLeafHullsDataflowNode::GetDisplayName
          (FGenerateClusterConvexHullsFromLeafHullsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GenerateClusterConvexHullsFromLeafHulls");
  return in_RDX;
}

// GetCategory @ 14e8b5e80

FName __thiscall
FGenerateClusterConvexHullsFromLeafHullsDataflowNode::GetCategory
          (FGenerateClusterConvexHullsFromLeafHullsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Utilities");
  return in_RDX;
}

// GetTags @ 14e8b5eb0

FString * __thiscall
FGenerateClusterConvexHullsFromLeafHullsDataflowNode::GetTags
          (FGenerateClusterConvexHullsFromLeafHullsDataflowNode *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8b5f10

UScriptStruct * __thiscall
FGenerateClusterConvexHullsFromLeafHullsDataflowNode::TypedScriptStruct
          (FGenerateClusterConvexHullsFromLeafHullsDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode
                         ,(UObject *)pUVar1,L"GenerateClusterConvexHullsFromLeafHullsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGenerateClusterConvexHullsFromLeafHullsDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14e8b63a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e8b6a32) */
/* WARNING: Removing unreachable block (ram,0x00014e8b6a67) */
/* WARNING: Removing unreachable block (ram,0x00014e8b6a9e) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGenerateClusterConvexHullsFromLeafHullsDataflowNode::Evaluate
          (FGenerateClusterConvexHullsFromLeafHullsDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  ENegativeSpaceSampleMethodDataflowEnum EVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 *puVar6;
  FManagedArrayCollection *this_00;
  FGeometryCollection *pFVar7;
  FDataflowInput *pFVar8;
  FDataflowSelection *this_01;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  bool *pbVar10;
  int *piVar11;
  double *pdVar12;
  FDataflowOutput *this_02;
  FTimestamp FVar13;
  ulong64 uVar14;
  FContextCacheElementUStruct *pFVar15;
  FContextCacheElementUStruct *pFVar16;
  int iVar17;
  longlong *plVar18;
  bool bVar19;
  undefined1 auStackY_658 [32];
  undefined1 local_627 [7];
  TArray<int,TSizedDefaultAllocator<32>_> local_620;
  uint local_610;
  FContextCacheElementUStruct *local_608;
  FSphereCovering local_600;
  FDataflowOutput *local_5e0;
  FDataflowSphereCovering local_5d8;
  FManagedArrayCollection *local_5b8;
  int iStack_5b0;
  undefined4 uStack_5ac;
  FManagedArrayCollection *local_5a8;
  int iStack_5a0;
  undefined4 uStack_59c;
  FClusterConvexHullSettings local_598;
  FConnectionReference local_578;
  FConnectionReference local_560;
  FConnectionReference local_548;
  FConnectionReference local_530;
  FConnectionReference local_518;
  FConnectionReference local_500;
  TArray<int,TSizedDefaultAllocator<32>_> local_4e0;
  TArrayView<int_const_,int> local_4c8;
  TArrayView<int_const_,int> local_4b8;
  FGuid local_4a8;
  FGuid local_498;
  FCollectionTransformSelectionFacade local_488;
  undefined1 local_218 [32];
  double dStack_1f8;
  bool local_1f0;
  bool local_1ef;
  int local_1ec;
  longlong local_1c8;
  longlong local_1b8 [3];
  longlong *local_1a0;
  longlong local_198;
  longlong local_188 [3];
  longlong *local_170;
  double local_168;
  FManagedArrayCollection local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_658;
  pFVar1 = &this->Collection;
  puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((FManagedArrayCollection *)puVar6 != pFVar1) &&
     (puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (FDataflowSphereCovering *)puVar6 != &this->SphereCovering)) {
    return;
  }
  this_00 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar1);
  local_5d8.Spheres.Position.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5d8.Spheres.Position.ArrayNum = 0;
  local_5d8.Spheres.Position.ArrayMax = 0;
  local_5d8.Spheres.Radius.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5d8.Spheres.Radius.ArrayNum = 0;
  local_5d8.Spheres.Radius.ArrayMax = 0;
  pFVar7 = FManagedArrayCollection::NewCopy<FGeometryCollection>(this_00);
  if (pFVar7 == (FGeometryCollection *)0x0) {
    if (1 < (byte)LogChaos._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
    }
    FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,this_00,pFVar1);
    goto LAB_14e8b6afd;
  }
  local_518.Index = -1;
  local_620.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_620.ArrayNum = 0;
  local_620.ArrayMax = 0;
  local_518.ContainerReference = (void *)0x0;
  local_518.Reference = &this->OptionalSelectionFilter;
  pFVar8 = FDataflowNode::FindInput((FDataflowNode *)this,&local_518);
  local_5e0 = pFVar8->Connection;
  bVar19 = local_5e0 != (FDataflowOutput *)0x0;
  if (local_5e0 != (FDataflowOutput *)0x0) {
    this_01 = (FDataflowSelection *)
              FDataflowNode::GetValue<FDataflowTransformSelection>
                        ((FDataflowNode *)this,param_1,&this->OptionalSelectionFilter);
    pTVar9 = FDataflowSelection::AsArray(this_01,&local_4e0);
    if (&local_620 != pTVar9) {
      if ((FManagedArrayCollection *)local_620.AllocatorInstance.Data !=
          (FManagedArrayCollection *)0x0) {
        FMemory::Free(local_620.AllocatorInstance.Data);
      }
      local_620.AllocatorInstance.Data = (pTVar9->AllocatorInstance).Data;
      (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_620.ArrayNum = pTVar9->ArrayNum;
      local_620.ArrayMax = pTVar9->ArrayMax;
      pTVar9->ArrayNum = 0;
      pTVar9->ArrayMax = 0;
    }
    if (local_4e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4e0.AllocatorInstance.Data);
    }
    GeometryCollection::Facades::FCollectionTransformSelectionFacade::
    FCollectionTransformSelectionFacade(&local_488,this_00);
    GeometryCollection::Facades::FCollectionTransformSelectionFacade::Sanitize
              (&local_488,&local_620,false);
  }
  local_578.Index = -1;
  local_600.Position.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_578.Reference = &this->bProtectNegativeSpace;
  local_600.Position.ArrayNum = 0;
  local_600.Position.ArrayMax = 0;
  local_600.Radius.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  bVar5 = false;
  local_600.Radius.ArrayNum = 0;
  local_600.Radius.ArrayMax = 0;
  local_578.ContainerReference = (void *)0x0;
  pFVar8 = FDataflowNode::FindInput((FDataflowNode *)this,&local_578);
  pbVar10 = FDataflowInput::GetValue<bool>(pFVar8,param_1,local_578.Reference);
  if (*pbVar10 != false) {
    UE::Geometry::FNegativeSpaceSampleSettings::FNegativeSpaceSampleSettings
              ((FNegativeSpaceSampleSettings *)local_218);
    local_560.Reference = &this->TargetNumSamples;
    local_560.Index = -1;
    local_560.ContainerReference = (void *)0x0;
    pFVar8 = FDataflowNode::FindInput((FDataflowNode *)this,&local_560);
    piVar11 = FDataflowInput::GetValue<int>(pFVar8,param_1,local_560.Reference);
    local_218._4_4_ = *piVar11;
    pdVar12 = FDataflowNode::GetValue<double>((FDataflowNode *)this,param_1,&this->MinRadius);
    dStack_1f8 = *pdVar12;
    pdVar12 = FDataflowNode::GetValue<double>
                        ((FDataflowNode *)this,param_1,&this->NegativeSpaceTolerance);
    local_218._24_8_ = *pdVar12;
    pdVar12 = FDataflowNode::GetValue<double>((FDataflowNode *)this,param_1,&this->MinSampleSpacing)
    ;
    EVar2 = this->SampleMethod;
    local_218._8_8_ = *pdVar12;
    if (EVar2 == Uniform) {
LAB_14e8b662d:
      local_218[0] = Uniform;
    }
    else if (EVar2 == VoxelSearch) {
      local_218[0] = VoxelSearch;
    }
    else {
      if (EVar2 != NavigableVoxelSearch) goto LAB_14e8b662d;
      local_218[0] = NavigableVoxelSearch;
    }
    local_1f0 = this->bRequireSearchSampleCoverage;
    if ((double)local_218._8_8_ <= 0.0) {
      local_218._8_8_ = 0.0;
    }
    local_1ef = this->bOnlyConnectedToHull;
    if ((int)local_218._4_4_ < 1) {
      local_218._4_4_ = 1;
    }
    iVar3 = local_620.ArrayNum;
    iVar17 = 0x50a;
    if (local_1ec < 0x50a) {
      iVar17 = local_1ec;
    }
    register0x00001200 = maxpd(stack0xfffffffffffffe00,ZEXT816(0));
    local_1ec = 4;
    if (4 < iVar17) {
      local_1ec = iVar17;
    }
    local_5a8 = (FManagedArrayCollection *)local_620.AllocatorInstance.Data;
    if (__real_3ff0000000000000 <= local_168) {
      local_168 = __real_3ff0000000000000;
    }
    if (local_168 <= __real_3fb999999999999a) {
      local_168 = __real_3fb999999999999a;
    }
    if ((local_620.ArrayNum < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iStack_5a0 = iVar3;
    local_4c8._12_4_ = uStack_59c;
    local_4c8.ArrayNum = iVar3;
    local_4c8.DataPtr = (int *)local_5a8;
    bVar5 = UE::FractureEngine::Convex::ComputeConvexHullsNegativeSpace
                      ((FManagedArrayCollection *)pFVar7,&local_600,
                       (FNegativeSpaceSampleSettings *)local_218,bVar19,&local_4c8,true);
    if (local_198 != 0) {
      plVar18 = local_188;
      if (local_170 != (longlong *)0x0) {
        plVar18 = local_170;
      }
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
    if (local_1c8 != 0) {
      plVar18 = local_1b8;
      if (local_1a0 != (longlong *)0x0) {
        plVar18 = local_1a0;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
  }
  local_548.Reference = &this->ConvexCount;
  local_548.Index = -1;
  local_548.ContainerReference = (void *)0x0;
  pFVar8 = FDataflowNode::FindInput((FDataflowNode *)this,&local_548);
  piVar11 = FDataflowInput::GetValue<int>(pFVar8,param_1,local_548.Reference);
  iVar3 = *piVar11;
  pdVar12 = FDataflowNode::GetValue<double>((FDataflowNode *)this,param_1,&this->ErrorTolerance);
  local_530.Index = -1;
  local_530.ContainerReference = (void *)0x0;
  local_598.ErrorToleranceInCm = *pdVar12;
  local_598.bUseExternalCollisionIfAvailable = this->bPreferExternalCollisionShapes;
  local_598.AllowMergesMethod = this->AllowMerges;
  local_530.Reference = &this->bAllowMergingLeafHulls;
  local_598.ConvexCount = iVar3;
  pFVar8 = FDataflowNode::FindInput((FDataflowNode *)this,&local_530);
  pbVar10 = FDataflowInput::GetValue<bool>(pFVar8,param_1,local_530.Reference);
  local_598.ProximityDistanceThreshold = this->MergeProximityDistanceThreshold;
  local_598.bAllowMergingLeafHulls = *pbVar10;
  local_598.EmptySpace = &local_600;
  if (bVar5 == false) {
    local_598.EmptySpace = (FSphereCovering *)0x0;
  }
  local_598.ProximityFilter = this->MergeProximityFilter;
  if (local_5e0 == (FDataflowOutput *)0x0) {
    FGeometryCollectionConvexUtility::GenerateClusterConvexHullsFromLeafHulls(pFVar7,&local_598);
  }
  else {
    iVar3 = local_620.ArrayNum;
    local_5b8 = (FManagedArrayCollection *)local_620.AllocatorInstance.Data;
    if ((local_620.ArrayNum < 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar19)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iStack_5b0 = iVar3;
    local_4b8._12_4_ = uStack_5ac;
    local_4b8.ArrayNum = iVar3;
    local_4b8.DataPtr = (int *)local_5b8;
    FGeometryCollectionConvexUtility::GenerateClusterConvexHullsFromLeafHulls
              (pFVar7,&local_598,&local_4b8);
  }
  local_5a8 = FManagedArrayCollection::FManagedArrayCollection
                        (&local_f8,(FManagedArrayCollection *)pFVar7);
  local_500.Reference = &this->Collection;
  local_500.Index = -1;
  local_500.ContainerReference = (void *)0x0;
  this_02 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_500);
  if (this_02 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<FManagedArrayCollection_const_,FManagedArrayCollection>'::__l7::
    <lambda_1>::operator()(local_627);
  }
  else if (this_02->_padding_ != 0) {
    FVar13 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_02);
    local_610 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_02);
    local_5b8 = (FManagedArrayCollection *)
                FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_02,&local_498);
    local_5e0 = (FDataflowOutput *)this_02->_padding_;
    uVar14 = CityHash64((char *)&this_02->_padding_,0x10);
    local_608 = (FContextCacheElementUStruct *)0x0;
    pFVar15 = ::operator_new(0x58);
    pFVar16 = (FContextCacheElementUStruct *)0x0;
    if (pFVar15 != (FContextCacheElementUStruct *)0x0) {
                    /* WARNING: Load size is inaccurate */
      local_4a8._0_8_ = local_5b8->_padding_;
      local_4a8.C = *(uint *)&(local_5b8->Map).field_0x0;
      local_4a8.D = *(uint *)&(local_5b8->Map).field_0x4;
      pFVar16 = UE::Dataflow::FContextCacheElementUStruct::
                FContextCacheElementUStruct<FManagedArrayCollection_const_>
                          (pFVar15,&local_4a8,(FProperty *)local_5e0,local_5a8,local_610,
                           (FTimestamp)*FVar13.Value);
    }
    pFVar15 = local_608;
    if (local_608 != (FContextCacheElementUStruct *)0x0) {
      plVar18 = &local_608->_padding_;
      local_608 = pFVar16;
      (**(code **)*plVar18)(pFVar15,1);
      pFVar16 = local_608;
    }
    local_608 = pFVar16;
    if (local_608 == (FContextCacheElementUStruct *)0x0) {
      UE::Dataflow::FContext::SetNullData
                (param_1,(uint)uVar14,(FProperty *)local_5e0,(FGuid *)local_5b8,local_610,
                 (FTimestamp *)FVar13.Value);
    }
    else {
      (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar14 & 0xffffffff,&local_608);
    }
    if (local_608 != (FContextCacheElementUStruct *)0x0) {
      (**(code **)local_608->_padding_)(local_608,1);
    }
  }
  FManagedArrayCollection::~FManagedArrayCollection(&local_f8);
  local_5d8.Spheres.Radius.ArrayNum = local_600.Radius.ArrayNum;
  local_5d8.Spheres.Radius.ArrayMax = local_600.Radius.ArrayMax;
  local_5d8.Spheres.Radius.AllocatorInstance.Data = local_600.Radius.AllocatorInstance.Data;
  local_5d8.Spheres.Position.ArrayNum = local_600.Position.ArrayNum;
  local_5d8.Spheres.Position.ArrayMax = local_600.Position.ArrayMax;
  local_5d8.Spheres.Position.AllocatorInstance.Data = local_600.Position.AllocatorInstance.Data;
  local_600.Radius.ArrayNum = 0;
  local_600.Radius.ArrayMax = 0;
  local_600.Radius.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_600.Position.ArrayNum = 0;
  local_600.Position.ArrayMax = 0;
  local_600.Position.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if ((FManagedArrayCollection *)local_620.AllocatorInstance.Data != (FManagedArrayCollection *)0x0)
  {
    FMemory::Free(local_620.AllocatorInstance.Data);
  }
  (**(code **)pFVar7->_padding_)(pFVar7,1);
LAB_14e8b6afd:
  FDataflowNode::SetValue<FDataflowSphereCovering,FDataflowSphereCovering>
            ((FDataflowNode *)this,param_1,&local_5d8,&this->SphereCovering);
  if (local_5d8.Spheres.Radius.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5d8.Spheres.Radius.AllocatorInstance.Data);
  }
  if (local_5d8.Spheres.Position.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5d8.Spheres.Position.AllocatorInstance.Data);
  }
  return;
}

// FGenerateClusterConvexHullsFromLeafHullsDataflowNode @ 14e91dd80

FGenerateClusterConvexHullsFromLeafHullsDataflowNode * __thiscall
FGenerateClusterConvexHullsFromLeafHullsDataflowNode::
FGenerateClusterConvexHullsFromLeafHullsDataflowNode
          (FGenerateClusterConvexHullsFromLeafHullsDataflowNode *this,FNodeParameters *param_1,
          FGuid *param_2)

{
  byte *pbVar1;
  FName *pFVar2;
  int *piVar3;
  double *pdVar4;
  bool *pbVar5;
  bool *pbVar6;
  int *piVar7;
  double *pdVar8;
  FLinearColor FVar9;
  FName this_00;
  FDataflowInput *pFVar10;
  FDataflowOutput *pFVar11;
  FName local_res8;
  FName local_res18 [2];
  FConnectionReference local_78;
  FConnectionReference local_58;
  
  local_78.Reference = *(void **)param_2;
  local_78.Index = param_2->C;
  local_78._12_4_ = param_2->D;
  local_res8 = (FName)this;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_78);
  this->_padding_ = (longlong)&___7FGenerateClusterConvexHullsFromLeafHullsDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.ContainerReference = (void *)0x0;
  local_78.Index = -1;
  (((FDataflowSphereCovering *)((longlong)local_res8 + 0x2f8))->Spheres).Position.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  pFVar2 = (FName *)((longlong)local_res8 + 0x330);
  *(undefined8 *)((longlong)local_res8 + 0x300) = 0;
  piVar3 = (int *)((longlong)local_res8 + 0x318);
  (((TArray<double,TSizedDefaultAllocator<32>_> *)((longlong)local_res8 + 0x308))->AllocatorInstance
  ).Data = (FScriptContainerElement *)0x0;
  pdVar4 = (double *)((longlong)local_res8 + 800);
  *(undefined8 *)((longlong)local_res8 + 0x310) = 0;
  pbVar5 = (bool *)((longlong)local_res8 + 0x358);
  *pdVar4 = 0.0;
  pbVar6 = (bool *)((longlong)local_res8 + 0x359);
  *(EConvexHullProximityFilter *)((longlong)local_res8 + 0x32a) = None;
  piVar7 = (int *)((longlong)local_res8 + 0x360);
  *piVar3 = 2;
  pdVar8 = (double *)((longlong)local_res8 + 0x368);
  *(undefined2 *)((longlong)local_res8 + 0x328) = 1;
  *(float *)((longlong)local_res8 + 0x32c) = 0.1;
  *pFVar2 = FDataflowTransformSelection::TransformGroupName;
  *(undefined8 *)((longlong)local_res8 + 0x348) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x350) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x354) = 0x80;
  *(double *)((longlong)local_res8 + 0x370) = 2.0;
  *(double *)((longlong)local_res8 + 0x378) = 10.0;
  *pbVar5 = false;
  *pbVar6 = false;
  *(undefined2 *)((longlong)local_res8 + 0x35a) = 0;
  *(bool *)((longlong)local_res8 + 0x35c) = false;
  *pdVar8 = 1.0;
  local_78.Reference = (void *)((longlong)local_res8 + 0x248);
  *piVar7 = 0x32;
  ((FDataflowNodeDebugDrawSettings *)((longlong)local_res8 + 0x380))->RenderType = Wireframe;
  FVar9 = FLinearColor::Gray;
  ((FDataflowNodeDebugDrawSettings *)((longlong)local_res8 + 0x380))->bTranslucent = true;
  *(float *)((longlong)local_res8 + 0x394) = 1.0;
  ((FLinearColor_u_0 *)((longlong)local_res8 + 900))->_s_0 = (FLinearColor_u_0_s_0)FVar9.field0_0x0;
  *(int *)((longlong)local_res8 + 0x39c) = 0;
  *(bool *)((longlong)local_res8 + 0x398) = true;
  ((FDataflowNodeSphereCoveringDebugDrawSettings *)((longlong)local_res8 + 0x3a0))->
  bDisplaySphereCovering = false;
  ((FDataflowNodeSphereCoveringDebugDrawSettings *)((longlong)local_res8 + 0x3a0))->RenderType =
       Wireframe;
  *(EDataflowSphereCoveringColorMethod *)((longlong)local_res8 + 0x3a8) = Single;
  *(bool *)((longlong)local_res8 + 0x3a2) = true;
  *(float *)((longlong)local_res8 + 0x3a4) = 0.25;
  FVar9 = FLinearColor::Red;
  *(int *)((longlong)local_res8 + 0x3bc) = 0;
  ((FLinearColor_u_0 *)((longlong)local_res8 + 0x3ac))->_s_0 =
       (FLinearColor_u_0_s_0)FVar9.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)local_res8 + 0x3c0))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Red.field0_0x0;
  ((FLinearColor_u_0 *)((longlong)local_res8 + 0x3d0))->_s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Blue.field0_0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)local_res8,&local_78,local_res18);
  this_00 = local_res8;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = piVar3;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)local_res8,&local_78,local_res18);
  pbVar1 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pdVar4;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pFVar2;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this_00,&local_78,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pbVar5;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pbVar6;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = piVar7;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = pdVar8;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x370);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_78.Reference = (void *)((longlong)this_00 + 0x378);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar10 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this_00,&local_78,&local_res8);
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pbVar1 = (byte *)((longlong)&pFVar10->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_58.Reference = (void *)((longlong)this_00 + 0x248);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Reference = (void *)0x0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  pFVar11 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar11,&local_78);
  }
  local_58.Reference = (void *)((longlong)this_00 + 0x2f8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_78.Reference = (void *)0x0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pFVar11 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this_00,&local_58,&local_res8);
  if (local_78.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar11,&local_78);
  }
  ((FDataflowNodeDebugDrawSettings *)((longlong)this_00 + 0x380))->RenderType = Wireframe;
  FVar9 = FLinearColor::Green;
  *(float *)((longlong)this_00 + 0x394) = 2.0;
  ((FLinearColor_u_0 *)((longlong)this_00 + 900))->_s_0 = (FLinearColor_u_0_s_0)FVar9.field0_0x0;
  return (FGenerateClusterConvexHullsFromLeafHullsDataflowNode *)this_00;
}

// FGenerateClusterConvexHullsFromLeafHullsDataflowNode @ 14e91e1a0

FGenerateClusterConvexHullsFromLeafHullsDataflowNode * __thiscall
FGenerateClusterConvexHullsFromLeafHullsDataflowNode::
FGenerateClusterConvexHullsFromLeafHullsDataflowNode
          (FGenerateClusterConvexHullsFromLeafHullsDataflowNode *this)

{
  FLinearColor FVar1;
  uint uVar2;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FGenerateClusterConvexHullsFromLeafHullsDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  this->ConvexCount = 2;
  (this->SphereCovering).Spheres.Position.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SphereCovering).Spheres.Position.ArrayNum = 0;
  (this->SphereCovering).Spheres.Position.ArrayMax = 0;
  (this->SphereCovering).Spheres.Radius.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SphereCovering).Spheres.Radius.ArrayNum = 0;
  (this->SphereCovering).Spheres.Radius.ArrayMax = 0;
  this->ErrorTolerance = 0.0;
  this->MergeProximityFilter = None;
  this->bPreferExternalCollisionShapes = true;
  this->AllowMerges = ByProximity;
  this->MergeProximityDistanceThreshold = 0.1;
  uVar2 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->OptionalSelectionFilter).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->OptionalSelectionFilter).field_0x4 = uVar2;
  *(undefined8 *)&(this->OptionalSelectionFilter).field_0x18 = 0;
  *(undefined4 *)&(this->OptionalSelectionFilter).field_0x20 = 0;
  *(undefined8 *)&(this->OptionalSelectionFilter).field_0x24 = 0x80;
  this->MinSampleSpacing = 1.0;
  this->NegativeSpaceTolerance = 2.0;
  this->MinRadius = 10.0;
  this->bOnlyConnectedToHull = false;
  this->TargetNumSamples = 0x32;
  (this->DebugDrawRenderSettings).RenderType = Wireframe;
  FVar1 = FLinearColor::Gray;
  (this->DebugDrawRenderSettings).bTranslucent = true;
  (this->DebugDrawRenderSettings).LineWidthMultiplier = 1.0;
  (this->DebugDrawRenderSettings).Color.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  this->bRandomizeColor = true;
  this->ColorRandomSeed = 0;
  (this->SphereCoveringDebugDrawRenderSettings).bDisplaySphereCovering = false;
  (this->SphereCoveringDebugDrawRenderSettings).RenderType = Wireframe;
  (this->SphereCoveringDebugDrawRenderSettings).bTranslucent = true;
  (this->SphereCoveringDebugDrawRenderSettings).LineWidthMultiplier = 0.25;
  (this->SphereCoveringDebugDrawRenderSettings).ColorMethod = Single;
  FVar1 = FLinearColor::Red;
  (this->SphereCoveringDebugDrawRenderSettings).ColorRandomSeed = 0;
  (this->SphereCoveringDebugDrawRenderSettings).Color.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->SphereCoveringDebugDrawRenderSettings).ColorA.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Red.field0_0x0;
  (this->SphereCoveringDebugDrawRenderSettings).ColorB.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Blue.field0_0x0;
  return this;
}

