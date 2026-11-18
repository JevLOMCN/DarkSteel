// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8ad810

UScriptStruct * __cdecl FCreateLeafConvexHullsDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCreateLeafConvexHullsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCreateLeafConvexHullsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode,
                         (UObject *)pUVar1,L"CreateLeafConvexHullsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCreateLeafConvexHullsDataflowNode.OuterSingleton;
}

// GetType @ 14e8adce0

FName __thiscall
FCreateLeafConvexHullsDataflowNode::GetType(FCreateLeafConvexHullsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCreateLeafConvexHullsDataflowNode");
  return in_RDX;
}

// IsA @ 14e8add80

bool __thiscall
FCreateLeafConvexHullsDataflowNode::IsA(FCreateLeafConvexHullsDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FCreateLeafConvexHullsDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8adde8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8adde8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8ade06;
      }
    }
  }
  bVar5 = true;
LAB_14e8ade06:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8ade40

FStructOnScope * __thiscall
FCreateLeafConvexHullsDataflowNode::NewStructOnScope(FCreateLeafConvexHullsDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCreateLeafConvexHullsDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCreateLeafConvexHullsDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode,
                           (UObject *)pUVar2,L"CreateLeafConvexHullsDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCreateLeafConvexHullsDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8ae000

void __thiscall
FCreateLeafConvexHullsDataflowNode::SerializeInternal
          (FCreateLeafConvexHullsDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCreateLeafConvexHullsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCreateLeafConvexHullsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode,
                         (UObject *)pUVar1,L"CreateLeafConvexHullsDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FCreateLeafConvexHullsDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FCreateLeafConvexHullsDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8ae07d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8ae090

FName __thiscall
FCreateLeafConvexHullsDataflowNode::GetDisplayName(FCreateLeafConvexHullsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CreateLeafConvexHulls");
  return in_RDX;
}

// GetCategory @ 14e8ae150

FName __thiscall
FCreateLeafConvexHullsDataflowNode::GetCategory(FCreateLeafConvexHullsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Utilities");
  return in_RDX;
}

// GetTags @ 14e8ae240

FString * __thiscall
FCreateLeafConvexHullsDataflowNode::GetTags
          (FCreateLeafConvexHullsDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8ae2a0

UScriptStruct * __thiscall
FCreateLeafConvexHullsDataflowNode::TypedScriptStruct(FCreateLeafConvexHullsDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCreateLeafConvexHullsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCreateLeafConvexHullsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCreateLeafConvexHullsDataflowNode,
                         (UObject *)pUVar1,L"CreateLeafConvexHullsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCreateLeafConvexHullsDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8aea00

void __thiscall
FCreateLeafConvexHullsDataflowNode::Evaluate
          (FCreateLeafConvexHullsDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FDataflowSphereCovering *pFVar1;
  FManagedArrayCollection *pFVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  FManagedArrayCollection *this_00;
  FGeometryCollection *pFVar13;
  FDataflowInput *pFVar14;
  FDataflowSelection *this_01;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar15;
  float *pfVar16;
  FDataflowConvexDecompositionSettings *pFVar17;
  ulonglong uVar18;
  TTransform<double> *pTVar19;
  FScriptContainerElement *pFVar20;
  undefined1 local_res18 [8];
  FDataflowSphereCovering *local_res20;
  undefined1 local_3d8 [16];
  ForAnyElementType local_3c8;
  int local_3c0 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_3b8;
  TArray<FGeometryCollectionConvexUtility::FSphereCoveringInfo,TSizedDefaultAllocator<32>_>
  local_3a8;
  FGeometryCollection *local_398;
  FConnectionReference local_390;
  FConnectionReference local_378;
  FLeafConvexHullSettings local_358;
  FScriptContainerElement *local_308;
  int iStack_300;
  undefined4 uStack_2fc;
  FConnectionReference local_2f8;
  TArray<int,TSizedDefaultAllocator<32>_> local_2e0;
  TArrayView<int_const_,int> local_2c8;
  FCollectionTransformSelectionFacade local_2b8;
  
  pFVar1 = &this->SphereCovering;
  pFVar2 = &this->Collection;
  local_res20 = pFVar1;
  puVar12 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((FManagedArrayCollection *)puVar12 == pFVar2) ||
     (puVar12 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (FDataflowSphereCovering *)puVar12 == pFVar1)) {
    this_00 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar2)
    ;
    bVar9 = false;
    local_3d8._0_8_ = (FScriptContainerElement *)0x0;
    local_3d8._8_4_ = 0;
    local_3d8._12_4_ = 0;
    local_3c8.Data = (FScriptContainerElement *)0x0;
    local_3c0[0] = 0;
    local_3c0[1] = 0;
    iVar10 = FManagedArrayCollection::NumElements(this_00,FTransformCollection::TransformGroup);
    if (iVar10 == 0) {
      FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,this_00,pFVar2);
      FDataflowNode::SetValue<FDataflowSphereCovering,FDataflowSphereCovering>
                ((FDataflowNode *)this,param_1,(FDataflowSphereCovering *)local_3d8,pFVar1);
    }
    else {
      pFVar13 = FManagedArrayCollection::NewCopy<FGeometryCollection>(this_00);
      local_398 = pFVar13;
      if (pFVar13 != (FGeometryCollection *)0x0) {
        local_3b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3b8.ArrayNum = 0;
        local_3b8.ArrayMax = 0;
        local_2f8.Index = -1;
        local_2f8.ContainerReference = (void *)0x0;
        local_2f8.Reference = &this->OptionalSelectionFilter;
        pFVar14 = FDataflowNode::FindInput((FDataflowNode *)this,&local_2f8);
        if (pFVar14->Connection != (FDataflowOutput *)0x0) {
          this_01 = (FDataflowSelection *)
                    FDataflowNode::GetValue<FDataflowTransformSelection>
                              ((FDataflowNode *)this,param_1,&this->OptionalSelectionFilter);
          bVar9 = true;
          pTVar15 = FDataflowSelection::AsArray(this_01,&local_2e0);
          if (&local_3b8 != pTVar15) {
            if (local_3b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3b8.AllocatorInstance.Data);
            }
            local_3b8.AllocatorInstance.Data = (pTVar15->AllocatorInstance).Data;
            (pTVar15->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            local_3b8.ArrayNum = pTVar15->ArrayNum;
            local_3b8.ArrayMax = pTVar15->ArrayMax;
            pTVar15->ArrayNum = 0;
            pTVar15->ArrayMax = 0;
          }
          if (local_2e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2e0.AllocatorInstance.Data);
          }
          GeometryCollection::Facades::FCollectionTransformSelectionFacade::
          FCollectionTransformSelectionFacade(&local_2b8,this_00);
          GeometryCollection::Facades::FCollectionTransformSelectionFacade::Sanitize
                    (&local_2b8,&local_3b8,false);
        }
        local_390.Reference = &this->SimplificationDistanceThreshold;
        local_390.Index = -1;
        local_390.ContainerReference = (void *)0x0;
        pFVar14 = FDataflowNode::FindInput((FDataflowNode *)this,&local_390);
        pfVar16 = FDataflowInput::GetValue<float>(pFVar14,param_1,local_390.Reference);
        local_378.Index = -1;
        local_378.ContainerReference = (void *)0x0;
        local_358.GenerateMethod = this->GenerateMethod;
        local_358.SimplificationDistanceThreshold = (double)*pfVar16;
        local_378.Reference = &this->ConvexDecompositionSettings;
        local_358.DecompositionSettings.ThickenHullOnFailure = 0.0001;
        uVar3 = this->IntersectIfComputedIsSmallerByFactor;
        uVar4 = this->MinExternalVolumeToIntersect;
        local_358.IntersectFilters.OnlyIntersectIfComputedIsSmallerFactor = (double)(float)uVar3;
        local_358.IntersectFilters.MinExternalVolumeToIntersect = (double)(float)uVar4;
        pFVar14 = FDataflowNode::FindInput((FDataflowNode *)this,&local_378);
        pFVar17 = FDataflowInput::GetValue<FDataflowConvexDecompositionSettings>
                            (pFVar14,param_1,local_378.Reference);
        local_358.DecompositionSettings.MinGeoVolumeToDecompose = pFVar17->MinSizeToDecompose;
        local_358.DecompositionSettings.MaxGeoToHullVolumeRatioToDecompose =
             pFVar17->MaxGeoToHullVolumeRatioToDecompose;
        local_358.DecompositionSettings.ErrorTolerance = pFVar17->ErrorTolerance;
        local_358.DecompositionSettings.MaxHullsPerGeometry = pFVar17->MaxHullsPerGeometry;
        local_358.DecompositionSettings.NegativeSpaceMinRadius = pFVar17->NegativeSpaceMinRadius;
        local_358.DecompositionSettings.MinThicknessTolerance._0_1_ =
             *(undefined1 *)&pFVar17->MinThicknessTolerance;
        local_358.DecompositionSettings.MinThicknessTolerance._1_1_ =
             *(undefined1 *)((longlong)&pFVar17->MinThicknessTolerance + 1);
        local_358.DecompositionSettings.MinThicknessTolerance._2_1_ =
             *(undefined1 *)((longlong)&pFVar17->MinThicknessTolerance + 2);
        local_358.DecompositionSettings.MinThicknessTolerance._3_1_ =
             *(undefined1 *)((longlong)&pFVar17->MinThicknessTolerance + 3);
        local_358.DecompositionSettings.NumAdditionalSplits._0_1_ =
             (undefined1)pFVar17->NumAdditionalSplits;
        local_358.DecompositionSettings.NumAdditionalSplits._1_1_ =
             *(undefined1 *)((longlong)&pFVar17->NumAdditionalSplits + 1);
        local_358.DecompositionSettings.NumAdditionalSplits._2_1_ =
             *(undefined1 *)((longlong)&pFVar17->NumAdditionalSplits + 2);
        local_358.DecompositionSettings.NumAdditionalSplits._3_1_ =
             *(undefined1 *)((longlong)&pFVar17->NumAdditionalSplits + 3);
        local_358.DecompositionSettings.bProtectNegativeSpace = pFVar17->bProtectNegativeSpace;
        local_358.DecompositionSettings.bOnlyConnectedToHull = pFVar17->bOnlyConnectedToHull;
        local_358.DecompositionSettings.NegativeSpaceTolerance._0_1_ =
             *(undefined1 *)&pFVar17->NegativeSpaceTolerance;
        local_358.DecompositionSettings.NegativeSpaceTolerance._1_1_ =
             *(undefined1 *)((longlong)&pFVar17->NegativeSpaceTolerance + 1);
        local_358.DecompositionSettings.NegativeSpaceTolerance._2_1_ =
             *(undefined1 *)((longlong)&pFVar17->NegativeSpaceTolerance + 2);
        local_358.DecompositionSettings.NegativeSpaceTolerance._3_1_ =
             *(undefined1 *)((longlong)&pFVar17->NegativeSpaceTolerance + 3);
        local_3a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3a8.ArrayNum = 0;
        local_3a8.ArrayMax = 0;
        iStack_300 = local_3b8.ArrayNum;
        local_358.DecompositionSettings.MinGeoVolumeToDecompose =
             local_358.DecompositionSettings.MinGeoVolumeToDecompose *
             local_358.DecompositionSettings.MinGeoVolumeToDecompose *
             local_358.DecompositionSettings.MinGeoVolumeToDecompose;
        local_358.bComputeIntersectionsBeforeHull = this->bComputeIntersectionsBeforeHull;
        local_308 = local_3b8.AllocatorInstance.Data;
        if ((local_3b8.ArrayNum < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_2c8._12_4_ = uStack_2fc;
        local_2c8.ArrayNum = iStack_300;
        local_2c8.DataPtr = (int *)local_308;
        FGeometryCollectionConvexUtility::GenerateLeafConvexHulls
                  (pFVar13,bVar9,&local_2c8,&local_358,&local_3a8);
        FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,(FManagedArrayCollection *)pFVar13,pFVar2);
        iVar10 = local_3a8.ArrayNum;
        uVar18 = (ulonglong)local_3a8.ArrayNum;
        pFVar20 = local_3a8.AllocatorInstance.Data + 0x78;
        pTVar19 = (TTransform<double> *)(local_3a8.AllocatorInstance.Data + uVar18 * 0x90);
        while( true ) {
          if ((int)uVar18 != iVar10) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<FGeometryCollectionConvexUtility::FSphereCoveringInfo,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_res18);
          }
          if ((TTransform<double> *)(pFVar20 + -0x78) == pTVar19) break;
          uVar7 = local_3d8._8_4_;
          if (((FSphereCovering *)local_3d8 == (FSphereCovering *)(pFVar20 + -0x10)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(void*)this != (void*)&Source",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x96e,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar5 = *(int *)(pFVar20 + -8);
          if (iVar5 != 0) {
            iVar11 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x18,8,iVar5,(ForAnyElementType *)local_3d8,(int *)(local_3d8 + 8),
                                (int *)(local_3d8 + 0xc));
            memcpy((FScriptContainerElement *)(local_3d8._0_8_ + (longlong)iVar11 * 0x18),
                   (((FSphereCovering *)(pFVar20 + -0x10))->Position).AllocatorInstance.Data,
                   (longlong)iVar5 * 0x18);
          }
          if (((FScriptContainerElement *)&local_3c8 == pFVar20) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(void*)this != (void*)&Source",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x96e,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar5 = *(int *)(pFVar20 + 8);
          if (iVar5 != 0) {
            iVar11 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (8,8,iVar5,&local_3c8,local_3c0,local_3c0 + 1);
                    /* WARNING: Load size is inaccurate */
            memcpy(local_3c8.Data + (longlong)iVar11 * 8,*pFVar20,(longlong)iVar5 << 3);
          }
          UE::Geometry::FSphereCovering::TransformRange
                    ((FSphereCovering *)local_3d8,uVar7,local_3d8._8_4_,
                     (TTransform<double> *)(pFVar20 + -0x78));
          uVar18 = local_3a8._8_8_ & 0xffffffff;
          pFVar20 = pFVar20 + 0x90;
        }
        FDataflowNode::SetValue<FDataflowSphereCovering,FDataflowSphereCovering>
                  ((FDataflowNode *)this,param_1,(FDataflowSphereCovering *)local_3d8,local_res20);
        DestructItems<FGeometryCollectionConvexUtility::FSphereCoveringInfo,int>
                  ((FSphereCoveringInfo *)local_3a8.AllocatorInstance.Data,local_3a8.ArrayNum);
        pFVar13 = local_398;
        if ((FSphereCoveringInfo *)local_3a8.AllocatorInstance.Data != (FSphereCoveringInfo *)0x0) {
          FMemory::Free(local_3a8.AllocatorInstance.Data);
        }
        if (local_3b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3b8.AllocatorInstance.Data);
        }
        (**(code **)pFVar13->_padding_)(pFVar13,1);
      }
    }
    if (local_3c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c8.Data);
    }
    if ((FScriptContainerElement *)local_3d8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_3d8._0_8_);
    }
  }
  return;
}

// FCreateLeafConvexHullsDataflowNode @ 14e91a8e0

FCreateLeafConvexHullsDataflowNode * __thiscall
FCreateLeafConvexHullsDataflowNode::FCreateLeafConvexHullsDataflowNode
          (FCreateLeafConvexHullsDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  byte *pbVar1;
  FManagedArrayCollection *this_00;
  FDataflowTransformSelection *pFVar2;
  FLinearColor FVar3;
  uint uVar4;
  FDataflowInput *pFVar5;
  FDataflowOutput *pFVar6;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FCreateLeafConvexHullsDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  (this->SphereCovering).Spheres.Position.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar2 = &this->OptionalSelectionFilter;
  (this->SphereCovering).Spheres.Position.ArrayNum = 0;
  (this->SphereCovering).Spheres.Position.ArrayMax = 0;
  (this->SphereCovering).Spheres.Radius.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SphereCovering).Spheres.Radius.ArrayNum = 0;
  (this->SphereCovering).Spheres.Radius.ArrayMax = 0;
  uVar4 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar2->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar2->field_0x4 = uVar4;
  *(undefined8 *)&(this->OptionalSelectionFilter).field_0x18 = 0;
  *(undefined4 *)&(this->OptionalSelectionFilter).field_0x20 = 0;
  *(undefined4 *)&(this->OptionalSelectionFilter).field_0x24 = 0x80;
  (this->ConvexDecompositionSettings).MinSizeToDecompose = 0.0;
  (this->ConvexDecompositionSettings).MaxGeoToHullVolumeRatioToDecompose = 1.0;
  (this->ConvexDecompositionSettings).ErrorTolerance = 0.0;
  (this->ConvexDecompositionSettings).MaxHullsPerGeometry = -1;
  (this->ConvexDecompositionSettings).MinThicknessTolerance = 0.0;
  (this->ConvexDecompositionSettings).NumAdditionalSplits = 4;
  (this->ConvexDecompositionSettings).bProtectNegativeSpace = false;
  (this->ConvexDecompositionSettings).bOnlyConnectedToHull = true;
  (this->ConvexDecompositionSettings).NegativeSpaceTolerance = 2.0;
  (this->ConvexDecompositionSettings).NegativeSpaceMinRadius = 10.0;
  this->GenerateMethod = ComputedFromGeometry;
  this->IntersectIfComputedIsSmallerByFactor = 1.0;
  this->MinExternalVolumeToIntersect = 0.0;
  this->bComputeIntersectionsBeforeHull = true;
  this->SimplificationDistanceThreshold = 10.0;
  (this->DebugDrawRenderSettings).RenderType = Wireframe;
  FVar3 = FLinearColor::Gray;
  (this->DebugDrawRenderSettings).bTranslucent = true;
  (this->DebugDrawRenderSettings).LineWidthMultiplier = 1.0;
  local_68.ContainerReference = (void *)0x0;
  (this->DebugDrawRenderSettings).Color.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar3.field0_0x0;
  this->bRandomizeColor = true;
  this->ColorRandomSeed = 0;
  (this->SphereCoveringDebugDrawRenderSettings).bDisplaySphereCovering = false;
  (this->SphereCoveringDebugDrawRenderSettings).RenderType = Wireframe;
  (this->SphereCoveringDebugDrawRenderSettings).bTranslucent = true;
  (this->SphereCoveringDebugDrawRenderSettings).LineWidthMultiplier = 0.25;
  (this->SphereCoveringDebugDrawRenderSettings).ColorMethod = Single;
  FVar3 = FLinearColor::Red;
  (this->SphereCoveringDebugDrawRenderSettings).ColorRandomSeed = 0;
  (this->SphereCoveringDebugDrawRenderSettings).Color.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar3.field0_0x0;
  (this->SphereCoveringDebugDrawRenderSettings).ColorA.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Red.field0_0x0;
  (this->SphereCoveringDebugDrawRenderSettings).ColorB.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Blue.field0_0x0;
  local_68.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = pFVar2;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->SimplificationDistanceThreshold;
  pFVar5 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  pbVar1 = (byte *)((longlong)&pFVar5->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->ConvexDecompositionSettings;
  pFVar5 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  pbVar1 = (byte *)((longlong)&pFVar5->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Reference = this_00;
  pFVar6 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar6,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->SphereCovering;
  pFVar6 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar6,&local_68);
  }
  (this->DebugDrawRenderSettings).RenderType = Wireframe;
  (this->DebugDrawRenderSettings).Color.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Green.field0_0x0;
  (this->DebugDrawRenderSettings).LineWidthMultiplier = 2.0;
  return this;
}

// FCreateLeafConvexHullsDataflowNode @ 14e91abc0

FCreateLeafConvexHullsDataflowNode * __thiscall
FCreateLeafConvexHullsDataflowNode::FCreateLeafConvexHullsDataflowNode
          (FCreateLeafConvexHullsDataflowNode *this)

{
  FLinearColor FVar1;
  uint uVar2;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FCreateLeafConvexHullsDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  (this->SphereCovering).Spheres.Position.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SphereCovering).Spheres.Position.ArrayNum = 0;
  (this->SphereCovering).Spheres.Position.ArrayMax = 0;
  (this->SphereCovering).Spheres.Radius.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SphereCovering).Spheres.Radius.ArrayNum = 0;
  (this->SphereCovering).Spheres.Radius.ArrayMax = 0;
  uVar2 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->OptionalSelectionFilter).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->OptionalSelectionFilter).field_0x4 = uVar2;
  *(undefined8 *)&(this->OptionalSelectionFilter).field_0x18 = 0;
  *(undefined4 *)&(this->OptionalSelectionFilter).field_0x20 = 0;
  *(undefined4 *)&(this->OptionalSelectionFilter).field_0x24 = 0x80;
  (this->ConvexDecompositionSettings).MaxGeoToHullVolumeRatioToDecompose = 1.0;
  (this->ConvexDecompositionSettings).ErrorTolerance = 0.0;
  (this->ConvexDecompositionSettings).MaxHullsPerGeometry = -1;
  (this->ConvexDecompositionSettings).MinThicknessTolerance = 0.0;
  (this->ConvexDecompositionSettings).NumAdditionalSplits = 4;
  (this->ConvexDecompositionSettings).bProtectNegativeSpace = false;
  (this->ConvexDecompositionSettings).bOnlyConnectedToHull = true;
  (this->ConvexDecompositionSettings).NegativeSpaceTolerance = 2.0;
  (this->ConvexDecompositionSettings).NegativeSpaceMinRadius = 10.0;
  this->GenerateMethod = ComputedFromGeometry;
  this->IntersectIfComputedIsSmallerByFactor = 1.0;
  this->MinExternalVolumeToIntersect = 0.0;
  this->bComputeIntersectionsBeforeHull = true;
  this->SimplificationDistanceThreshold = 10.0;
  (this->ConvexDecompositionSettings).MinSizeToDecompose = 0.0;
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

