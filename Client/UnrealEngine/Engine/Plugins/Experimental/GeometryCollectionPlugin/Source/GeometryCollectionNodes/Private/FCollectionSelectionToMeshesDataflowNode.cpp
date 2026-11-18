// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e856a40

UScriptStruct * __cdecl FCollectionSelectionToMeshesDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionSelectionToMeshesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionSelectionToMeshesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionSelectionToMeshesDataflowNode,
                         (UObject *)pUVar1,L"CollectionSelectionToMeshesDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionSelectionToMeshesDataflowNode.OuterSingleton;
}

// GetType @ 14e856b50

FName __thiscall
FCollectionSelectionToMeshesDataflowNode::GetType(FCollectionSelectionToMeshesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCollectionSelectionToMeshesDataflowNode");
  return in_RDX;
}

// IsA @ 14e856c60

bool __thiscall
FCollectionSelectionToMeshesDataflowNode::IsA
          (FCollectionSelectionToMeshesDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FCollectionSelectionToMeshesDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e856cc8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e856cc8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e856ce6;
      }
    }
  }
  bVar5 = true;
LAB_14e856ce6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e856d20

FStructOnScope * __thiscall
FCollectionSelectionToMeshesDataflowNode::NewStructOnScope
          (FCollectionSelectionToMeshesDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCollectionSelectionToMeshesDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCollectionSelectionToMeshesDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCollectionSelectionToMeshesDataflowNode,
                           (UObject *)pUVar2,L"CollectionSelectionToMeshesDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCollectionSelectionToMeshesDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e856e10

void __thiscall
FCollectionSelectionToMeshesDataflowNode::SerializeInternal
          (FCollectionSelectionToMeshesDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionSelectionToMeshesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionSelectionToMeshesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionSelectionToMeshesDataflowNode,
                         (UObject *)pUVar1,L"CollectionSelectionToMeshesDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionSelectionToMeshesDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionSelectionToMeshesDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e856e8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e856ea0

FName __thiscall
FCollectionSelectionToMeshesDataflowNode::GetDisplayName
          (FCollectionSelectionToMeshesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CollectionSelectionToMeshes");
  return in_RDX;
}

// GetCategory @ 14e856f90

FName __thiscall
FCollectionSelectionToMeshesDataflowNode::GetCategory
          (FCollectionSelectionToMeshesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Mesh|Utilities");
  return in_RDX;
}

// GetTags @ 14e8570f0

FString * __thiscall
FCollectionSelectionToMeshesDataflowNode::GetTags
          (FCollectionSelectionToMeshesDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e857120

UScriptStruct * __thiscall
FCollectionSelectionToMeshesDataflowNode::TypedScriptStruct
          (FCollectionSelectionToMeshesDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionSelectionToMeshesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionSelectionToMeshesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionSelectionToMeshesDataflowNode,
                         (UObject *)pUVar1,L"CollectionSelectionToMeshesDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionSelectionToMeshesDataflowNode.OuterSingleton;
}

// Evaluate @ 14e857980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FCollectionSelectionToMeshesDataflowNode::Evaluate
          (FCollectionSelectionToMeshesDataflowNode *this,FContext *param_1,FDataflowOutput *param_2
          )

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FDynamicMesh3 *this_00;
  UDynamicMesh *this_01;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  FDataflowSelection *pFVar12;
  FDataflowInput *pFVar13;
  FManagedArrayCollection *pFVar14;
  TArrayView<int_const_,int> *pTVar15;
  UObject *pUVar16;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_02;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar17;
  FMeshInfo **ppFVar18;
  ForElementType<FSetElementId> FVar19;
  longlong lVar20;
  FDynamicMesh3 *pFVar21;
  FMeshInfo *pFVar22;
  uint uVar23;
  ForAnyElementType FVar24;
  undefined1 auStackY_958 [32];
  TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> local_908;
  undefined1 local_8f8;
  undefined1 local_8f7;
  undefined1 local_8f6 [2];
  uint local_8f4;
  TArray<int,TSizedDefaultAllocator<32>_> local_8f0;
  FGeometryCollectionToDynamicMeshes local_8e0;
  UDynamicMesh *local_8d0;
  UDynamicMesh *local_8c8;
  UDynamicMesh *local_8c0;
  TArray<int,TSizedDefaultAllocator<32>_> local_8b8;
  uint local_8a8 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_8a0;
  FContext *local_890;
  undefined1 local_888 [8];
  TPairInitializer<int_const_&,UE::Geometry::FDynamicMesh3_const_*_&&> local_880;
  undefined8 local_870;
  FDynamicMeshEditor local_868;
  FDynamicMesh3 *local_860;
  FMeshInfo *local_858;
  FDynamicMesh3 ***local_850;
  uint *local_848;
  undefined8 *local_840;
  uint *local_838;
  FDynamicMesh3 **local_830;
  FConnectionReference local_828;
  TArrayView<int_const_,int> local_808;
  TArray<int,TSizedDefaultAllocator<32>_> local_7f8;
  TArrayView<int_const_,int> local_7e8;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_7d8;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_7a8;
  FCollectionHierarchyFacade local_778;
  FCollectionTransformSelectionFacade local_6c8;
  TSet<TTuple<int,UE::Geometry::FGeometryCollectionToDynamicMeshes::FMeshInfo_*>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FGeometryCollectionToDynamicMeshes::FMeshInfo_*,0>,FDefaultSetAllocator>
  local_458;
  TSet<TTuple<int,UE::Geometry::FDynamicMesh3_const_*>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FDynamicMesh3_const_*,0>,FDefaultSetAllocator>
  local_408;
  undefined1 local_3b8 [64];
  void *local_378;
  undefined4 local_370;
  undefined1 local_368 [64];
  void *local_328;
  undefined4 local_320;
  undefined2 local_318;
  undefined1 local_310 [64];
  void *local_2d0;
  undefined4 local_2c8;
  undefined1 local_2c0 [64];
  void *local_280;
  undefined4 local_278;
  undefined2 local_270;
  undefined1 local_268 [64];
  void *local_228;
  undefined4 local_220;
  undefined1 local_218 [64];
  void *local_1d8;
  undefined4 local_1d0;
  undefined2 local_1c8;
  undefined1 local_1c0 [64];
  void *local_180;
  undefined4 local_178;
  undefined1 local_170 [64];
  void *local_130;
  undefined4 local_128;
  undefined2 local_120;
  ForAnyElementType local_118;
  undefined8 local_110;
  ForAnyElementType local_108;
  undefined8 local_100;
  FDataflowSelection local_f8;
  FToMeshOptions local_c8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_958;
  local_890 = param_1;
  puVar11 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> *)puVar11 == &this->Meshes) {
    local_908.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_908.ArrayNum = 0;
    local_908.ArrayMax = 0;
    pFVar12 = (FDataflowSelection *)
              FDataflowNode::GetValue<FDataflowTransformSelection>
                        ((FDataflowNode *)this,param_1,&this->TransformSelection);
    FDataflowSelection::FDataflowSelection(&local_f8,pFVar12);
    local_828.Index = -1;
    local_828.ContainerReference = (void *)0x0;
    local_828.Reference = &this->TransformSelection;
    pFVar13 = FDataflowNode::FindInput((FDataflowNode *)this,&local_828);
    if (pFVar13->Connection == (FDataflowOutput *)0x0) {
      pFVar14 = FDataflowNode::GetValue<FManagedArrayCollection>
                          ((FDataflowNode *)this,param_1,&this->Collection);
      FDataflowSelection::InitializeFromCollection(&local_f8,pFVar14,true);
    }
    bVar6 = FDataflowSelection::AnySelected(&local_f8);
    if (bVar6) {
      pFVar14 = FDataflowNode::GetValue<FManagedArrayCollection>
                          ((FDataflowNode *)this,param_1,&this->Collection);
      FDataflowSelection::AsArray(&local_f8,&local_8a0);
      GeometryCollection::Facades::FCollectionTransformSelectionFacade::
      FCollectionTransformSelectionFacade(&local_6c8,pFVar14);
      Chaos::Facades::FCollectionHierarchyFacade::FCollectionHierarchyFacade(&local_778,pFVar14);
      iVar8 = local_8a0.ArrayNum;
      FVar24.Data = local_8a0.AllocatorInstance.Data;
      local_8b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_8a0.ArrayNum == 0) {
        local_8b8.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_8a0.ArrayNum,0,&local_8b8.AllocatorInstance,local_8a0.ArrayNum,
                   &local_8b8.ArrayMax);
        memcpy(local_8b8.AllocatorInstance.Data,FVar24.Data,(longlong)iVar8 << 2);
      }
      GeometryCollection::Facades::FCollectionTransformSelectionFacade::ConvertSelectionToRigidNodes
                (&local_6c8,&local_8b8);
      local_c8.bWeldVertices = this->bWeldVertices;
      local_c8.Transform.Rotation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      local_c8.Transform.Rotation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      local_c8.Transform.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_c8.Transform.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_c8.bSaveIsolatedVertices = this->bPreserveIsolatedVertices;
      local_c8.Transform.Scale3D.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_c8.Transform.Scale3D.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      local_8e0.Meshes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_8e0.Meshes.ArrayNum = 0;
      local_8e0.Meshes.ArrayMax = 0;
      local_c8.bInternalFaceTagsAsPolygroups = true;
      local_c8.InvisibleFaces = Skip;
      pTVar15 = TArrayView<int_const_,int>::
                TArrayView<int_const_,int><TArray<int,TSizedDefaultAllocator<32>_>_&,TArray<int,TSizedDefaultAllocator<32>_>_>
                          (&local_7e8,&local_8b8);
      local_808.DataPtr = pTVar15->DataPtr;
      local_808.ArrayNum = pTVar15->ArrayNum;
      local_808._12_4_ = *(undefined4 *)&pTVar15->field_0xc;
      bVar6 = UE::Geometry::FGeometryCollectionToDynamicMeshes::InitFromTransformSelection
                        (&local_8e0,pFVar14,&local_808,&local_c8);
      if ((bVar6) && (local_8e0.Meshes.ArrayNum != 0)) {
        uVar23 = local_8a0.ArrayNum;
        if (this->bConvertSelectionToLeaves != false) {
          uVar23 = local_8e0.Meshes.ArrayNum;
        }
        if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
        }
        if (local_908.ArrayMax < (int)uVar23) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar23,&local_908.AllocatorInstance,local_908.ArrayNum,&local_908.ArrayMax)
          ;
        }
        iVar8 = local_8e0.Meshes.ArrayNum;
        if (this->bConvertSelectionToLeaves == false) {
          local_458.Elements._0_8_ = 0;
          pFVar22 = (FMeshInfo *)
                    (local_8e0.Meshes.AllocatorInstance.Data +
                    (longlong)local_8e0.Meshes.ArrayNum * 0x70);
          local_458.Elements._8_8_ = 0;
          local_458.Elements._32_8_ = 0;
          local_458.Elements._40_4_ = 0;
          local_458.Elements._44_4_ = 0x80;
          local_458.Elements._48_4_ = 0xffffffff;
          local_458.Elements._52_4_ = 0;
          local_458.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          local_458.HashSize = 0;
          local_408.Elements._0_8_ = 0;
          local_408.Elements._8_8_ = 0;
          local_408.Elements._32_8_ = 0;
          local_408.Elements._40_4_ = 0;
          local_408.Elements._44_4_ = 0x80;
          local_408.Elements._48_4_ = 0xffffffff;
          local_408.Elements._52_4_ = 0;
          local_408.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          local_408.HashSize = 0;
          FVar24.Data = local_8e0.Meshes.AllocatorInstance.Data;
          while( true ) {
            if (local_8e0.Meshes.ArrayNum != iVar8) {
              local_8f7 = 0;
              `TCheckedPointerIterator<UE::Geometry::FGeometryCollectionToDynamicMeshes::FMeshInfo,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(&local_8f7);
            }
            iVar7 = local_8a0.ArrayNum;
            uVar5 = _UNK_150631d98;
            uVar4 = ___xmm_00000000ffffffff0000008000000000;
            if ((FMeshInfo *)FVar24.Data == pFVar22) break;
            local_850 = &local_880.Value;
            local_880.Value = (FDynamicMesh3 **)FVar24.Data;
            local_858 = (FMeshInfo *)FVar24.Data;
            TSet<TTuple<int,UE::Geometry::FGeometryCollectionToDynamicMeshes::FMeshInfo_*>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FGeometryCollectionToDynamicMeshes::FMeshInfo_*,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<int_const_&,UE::Geometry::FGeometryCollectionToDynamicMeshes::FMeshInfo_*_&&>_>
                      (&local_458,
                       (TPairInitializer<int_const_&,UE::Geometry::FGeometryCollectionToDynamicMeshes::FMeshInfo_*_&&>
                        *)local_888,(bool *)&local_858);
            FVar24.Data = FVar24.Data + 0x70;
          }
          pFVar1 = local_8a0.AllocatorInstance.Data + (longlong)local_8a0.ArrayNum * 4;
          FVar24.Data = local_8a0.AllocatorInstance.Data;
LAB_14e857e53:
          do {
            if (local_8a0.ArrayNum != iVar7) {
              local_8f6[0] = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_8f6);
            }
            if (FVar24.Data == pFVar1) {
              local_408.HashSize = 0;
              if (local_408.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_408.Hash.SecondaryData);
              }
              TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FDynamicMesh3_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FDynamicMesh3_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (&local_408.Elements);
              local_458.HashSize = 0;
              if (local_458.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_458.Hash.SecondaryData);
              }
              TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FGeometryCollectionToDynamicMeshes::FMeshInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FGeometryCollectionToDynamicMeshes::FMeshInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (&local_458.Elements);
              param_1 = local_890;
              goto LAB_14e8588c4;
            }
            local_8f4 = *(uint *)FVar24.Data;
            if (local_458.Elements._8_4_ != local_458.Elements._52_4_) {
              FVar19 = (ForElementType<FSetElementId>)&local_458.Hash;
              if (local_458.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar19 = local_458.Hash.SecondaryData;
              }
              for (iVar8 = *(int *)((longlong)FVar19 +
                                   (ulonglong)(local_458.HashSize - 1U & local_8f4) * 4);
                  iVar8 != -1;
                  iVar8 = *(int *)(local_458.Elements._0_8_ + 0x10 + (longlong)iVar8 * 0x18)) {
                if (*(uint *)(local_458.Elements._0_8_ + (longlong)iVar8 * 0x18) == local_8f4) {
                  pUVar16 = GetTransientPackageAsObject();
                  local_8c8 = NewObject<UDynamicMesh>(pUVar16);
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (local_8c8 != (UDynamicMesh *)0x0)) {
                    UE::GC::MarkAsReachable((UObject *)local_8c8);
                  }
                  if (((local_908.AllocatorInstance.Data <= (FScriptContainerElement *)&local_8c8)
                      && ((FScriptContainerElement *)&local_8c8 <
                          local_908.AllocatorInstance.Data + (longlong)local_908.ArrayMax * 8)) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar6)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  iVar8 = local_908.ArrayNum;
                  if (local_908.ArrayNum == local_908.ArrayMax) {
                    iVar8 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x808,&local_908.AllocatorInstance,&local_908.ArrayMax);
                  }
                  pFVar2 = local_908.AllocatorInstance.Data + (longlong)iVar8 * 8;
                  local_908.ArrayNum = iVar8 + 1;
                  *(UDynamicMesh **)pFVar2 = local_8c8;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (local_8c8 != (UDynamicMesh *)0x0)) {
                    UE::GC::MarkAsReachable((UObject *)local_8c8);
                  }
                  this_01 = *(UDynamicMesh **)pFVar2;
                  ppFVar18 = TMapBase<int,UE::Geometry::FGeometryCollectionToDynamicMeshes::FMeshInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FGeometryCollectionToDynamicMeshes::FMeshInfo_*,0>_>
                             ::FindChecked((TMapBase<int,UE::Geometry::FGeometryCollectionToDynamicMeshes::FMeshInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FGeometryCollectionToDynamicMeshes::FMeshInfo_*,0>_>
                                            *)&local_458,local_8f4);
                  UDynamicMesh::SetMesh(this_01,((*ppFVar18)->Mesh).Ptr);
                  local_8a8[0] = local_8f4;
                  if (local_458.Elements._8_4_ != local_458.Elements._52_4_) {
                    TSet<TTuple<int,UE::Geometry::FGeometryCollectionToDynamicMeshes::FMeshInfo_*>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FGeometryCollectionToDynamicMeshes::FMeshInfo_*,0>,FDefaultSetAllocator>
                    ::RemoveImpl<int>(&local_458,local_8f4,(int *)local_8a8);
                  }
                  local_870 = *(undefined8 *)(*(longlong *)pFVar2 + 0xb8);
                  local_848 = &local_8f4;
                  local_840 = &local_870;
                  TSet<TTuple<int,UE::Geometry::FDynamicMesh3_const_*>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FDynamicMesh3_const_*,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FDynamicMesh3_const_*_&&>_>
                            (&local_408,
                             (TPairInitializer<int_const_&,UE::Geometry::FDynamicMesh3_const_*_&&> *
                             )(local_888 + 4),(bool *)&local_848);
                  FVar24.Data = FVar24.Data + 4;
                  goto LAB_14e857e53;
                }
              }
            }
            pUVar16 = GetTransientPackageAsObject();
            local_8c0 = NewObject<UDynamicMesh>(pUVar16);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_8c0 != (UDynamicMesh *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_8c0);
            }
            if (((local_908.AllocatorInstance.Data <= (FScriptContainerElement *)&local_8c0) &&
                ((FScriptContainerElement *)&local_8c0 <
                 local_908.AllocatorInstance.Data + (longlong)local_908.ArrayMax * 8)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar8 = local_908.ArrayNum;
            if (local_908.ArrayNum == local_908.ArrayMax) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&local_908.AllocatorInstance,&local_908.ArrayMax);
            }
            pFVar2 = local_908.AllocatorInstance.Data + (longlong)iVar8 * 8;
            local_908.ArrayNum = iVar8 + 1;
            *(UDynamicMesh **)pFVar2 = local_8c0;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_8c0 != (UDynamicMesh *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_8c0);
            }
            this_00 = *(FDynamicMesh3 **)(*(longlong *)pFVar2 + 0xb8);
            local_8f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_8f0.ArrayNum = 0;
            local_8f0.ArrayMax = 0;
            local_868.Mesh = this_00;
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_8f0.AllocatorInstance,&local_8f0.ArrayMax);
            iVar8 = iVar9 + 1;
            local_8f0.ArrayNum = iVar8;
            *(uint *)(local_8f0.AllocatorInstance.Data + (longlong)iVar9 * 4) = local_8f4;
            bVar6 = iVar8 == 0;
            if (!bVar6) {
LAB_14e858011:
              if (bVar6 || iVar8 < 0) {
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar6) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                iVar8 = local_8f0.ArrayNum;
              }
              iVar9 = iVar8 + -1;
              uVar23 = *(uint *)(local_8f0.AllocatorInstance.Data + (longlong)iVar9 * 4);
              iVar10 = (iVar8 - iVar9) + -1;
              if (iVar10 != 0) {
                memmove(local_8f0.AllocatorInstance.Data + (longlong)iVar9 * 4,
                        local_8f0.AllocatorInstance.Data + (longlong)iVar9 * 4 + 4,
                        (longlong)iVar10 << 2);
                iVar8 = local_8f0.ArrayNum;
              }
              local_8f0.ArrayNum = iVar8 + -1;
              if (local_458.Elements._8_4_ != local_458.Elements._52_4_) {
                FVar19 = (ForElementType<FSetElementId>)&local_458.Hash;
                if (local_458.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FVar19 = local_458.Hash.SecondaryData;
                }
                lVar20 = (ulonglong)(local_458.HashSize - 1U & uVar23) * 4;
                for (iVar8 = *(int *)((longlong)FVar19 + lVar20); iVar8 != -1;
                    iVar8 = *(int *)(local_458.Elements._0_8_ + 0x10 + (longlong)iVar8 * 0x18)) {
                  if (*(uint *)(local_458.Elements._0_8_ + (longlong)iVar8 * 0x18) == uVar23) {
                    FVar19 = (ForElementType<FSetElementId>)&local_458.Hash;
                    if (local_458.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                      FVar19 = local_458.Hash.SecondaryData;
                    }
                    iVar8 = *(int *)(lVar20 + (longlong)FVar19);
                    goto joined_r0x00014e85837c;
                  }
                }
              }
              if (local_408.Elements._8_4_ != local_408.Elements._52_4_) {
                FVar19 = (ForElementType<FSetElementId>)&local_408.Hash;
                if (local_408.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FVar19 = local_408.Hash.SecondaryData;
                }
                lVar20 = (ulonglong)(local_408.HashSize - 1U & uVar23) * 4;
                for (iVar8 = *(int *)(lVar20 + (longlong)FVar19); iVar8 != -1;
                    iVar8 = *(int *)(local_408.Elements._0_8_ + 0x10 + (longlong)iVar8 * 0x18)) {
                  if (*(uint *)(local_408.Elements._0_8_ + (longlong)iVar8 * 0x18) == uVar23) {
                    FVar19 = (ForElementType<FSetElementId>)&local_408.Hash;
                    if (local_408.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                      FVar19 = local_408.Hash.SecondaryData;
                    }
                    iVar8 = *(int *)(lVar20 + (longlong)FVar19);
                    if (iVar8 == -1) goto LAB_14e85840c;
                    goto LAB_14e8583f0;
                  }
                }
              }
              goto LAB_14e858148;
            }
LAB_14e85881b:
            local_838 = &local_8f4;
            local_830 = &local_860;
            local_860 = this_00;
            TSet<TTuple<int,UE::Geometry::FDynamicMesh3_const_*>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FDynamicMesh3_const_*,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<int_const_&,UE::Geometry::FDynamicMesh3_const_*_&&>_>
                      (&local_408,&local_880,(bool *)&local_838);
            if (local_8f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_8f0.AllocatorInstance.Data);
            }
            FVar24.Data = FVar24.Data + 4;
          } while( true );
        }
        pFVar22 = (FMeshInfo *)
                  (local_8e0.Meshes.AllocatorInstance.Data +
                  (longlong)local_8e0.Meshes.ArrayNum * 0x70);
        FVar24.Data = local_8e0.Meshes.AllocatorInstance.Data;
        while( true ) {
          if (local_8e0.Meshes.ArrayNum != iVar8) {
            local_8f8 = 0;
            `TCheckedPointerIterator<UE::Geometry::FGeometryCollectionToDynamicMeshes::FMeshInfo,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(&local_8f8);
          }
          param_1 = local_890;
          if ((FMeshInfo *)FVar24.Data == pFVar22) break;
          pUVar16 = GetTransientPackageAsObject();
          local_8d0 = NewObject<UDynamicMesh>(pUVar16);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_8d0 != (UDynamicMesh *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_8d0);
          }
          if (((local_908.AllocatorInstance.Data <= (FScriptContainerElement *)&local_8d0) &&
              ((FScriptContainerElement *)&local_8d0 <
               local_908.AllocatorInstance.Data + (longlong)local_908.ArrayMax * 8)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar7 = local_908.ArrayNum;
          if (local_908.ArrayNum == local_908.ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_908.AllocatorInstance,&local_908.ArrayMax);
          }
          pFVar1 = local_908.AllocatorInstance.Data + (longlong)iVar7 * 8;
          local_908.ArrayNum = iVar7 + 1;
          *(UDynamicMesh **)pFVar1 = local_8d0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_8d0 != (UDynamicMesh *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_8d0);
          }
          UDynamicMesh::SetMesh(*(UDynamicMesh **)pFVar1,(((FMeshInfo *)FVar24.Data)->Mesh).Ptr);
          FVar24.Data = FVar24.Data + 0x70;
        }
      }
LAB_14e8588c4:
      DestructItems<UE::Geometry::FGeometryCollectionToDynamicMeshes::FMeshInfo,int>
                ((FMeshInfo *)local_8e0.Meshes.AllocatorInstance.Data,local_8e0.Meshes.ArrayNum);
      if ((FMeshInfo *)local_8e0.Meshes.AllocatorInstance.Data != (FMeshInfo *)0x0) {
        FMemory::Free(local_8e0.Meshes.AllocatorInstance.Data);
      }
      if (local_8b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8b8.AllocatorInstance.Data);
      }
      if (local_8a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8a0.AllocatorInstance.Data);
      }
    }
    FDataflowNode::
    SetValue<TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_&,TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,&local_908,&this->Meshes);
    if (local_f8.SelectionArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
       ) {
      FMemory::Free((void *)local_f8.SelectionArray.AllocatorInstance.SecondaryData);
    }
    if (local_908.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_908.AllocatorInstance.Data);
    }
  }
  return;
joined_r0x00014e85837c:
  if (iVar8 == -1) goto LAB_14e858398;
  lVar20 = local_458.Elements._0_8_ + (longlong)iVar8 * 0x18;
  if (*(uint *)(local_458.Elements._0_8_ + (longlong)iVar8 * 0x18) == uVar23) {
    if (lVar20 != 0) goto LAB_14e8583c0;
    goto LAB_14e85839a;
  }
  iVar8 = *(int *)(lVar20 + 0x10);
  goto joined_r0x00014e85837c;
LAB_14e858398:
  lVar20 = 0;
LAB_14e85839a:
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar6) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14e8583c0:
  pFVar21 = *(FDynamicMesh3 **)(*(longlong *)(lVar20 + 8) + 8);
  goto LAB_14e858438;
  while (iVar8 = *(int *)(lVar20 + 0x10), iVar8 != -1) {
LAB_14e8583f0:
    lVar20 = local_408.Elements._0_8_ + (longlong)iVar8 * 0x18;
    if (*(uint *)(local_408.Elements._0_8_ + (longlong)iVar8 * 0x18) == uVar23) {
      if (lVar20 != 0) goto LAB_14e858434;
      goto LAB_14e85840e;
    }
  }
LAB_14e85840c:
  lVar20 = 0;
LAB_14e85840e:
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar6) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14e858434:
  pFVar21 = *(FDynamicMesh3 **)(lVar20 + 8);
LAB_14e858438:
  if (pFVar21 == (FDynamicMesh3 *)0x0) {
LAB_14e858148:
    this_02 = Chaos::Facades::FCollectionHierarchyFacade::FindChildren(&local_778,uVar23);
    if (this_02 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
      pTVar17 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(this_02,&local_7f8);
      if ((&local_8f0 == pTVar17) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x986,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar8 = pTVar17->ArrayNum;
      if (iVar8 != 0) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar8,&local_8f0.AllocatorInstance,&local_8f0.ArrayNum,
                           &local_8f0.ArrayMax);
        memmove(local_8f0.AllocatorInstance.Data + (longlong)iVar9 * 4,
                (pTVar17->AllocatorInstance).Data,(longlong)iVar8 << 2);
        pTVar17->ArrayNum = 0;
      }
      if (local_7f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7f8.AllocatorInstance.Data);
      }
    }
  }
  else {
    UE::Geometry::FDynamicMesh3::EnableMatchingAttributes(this_00,pFVar21,true,false);
    local_3b8._44_4_ = 0x80;
    local_3b8._0_8_ = 0;
    local_3b8._8_8_ = 0;
    local_3b8._32_8_ = 0;
    local_3b8._40_4_ = 0;
    local_3b8._48_4_ = 0xffffffff;
    local_3b8._52_4_ = 0;
    local_378 = (void *)0x0;
    local_370 = 0;
    local_368._0_8_ = 0;
    local_368._8_8_ = 0;
    local_368._32_8_ = 0;
    local_368._40_4_ = 0;
    local_368._44_4_ = 0x80;
    local_368._48_4_ = 0xffffffff;
    local_368._52_4_ = 0;
    local_328 = (void *)0x0;
    local_320 = 0;
    local_318._0_1_ = true;
    local_318._1_1_ = true;
    local_310._0_8_ = 0;
    local_310._8_8_ = 0;
    local_310._32_8_ = 0;
    local_310._40_8_ = uVar4;
    local_310._48_8_ = uVar5;
    local_2d0 = (void *)0x0;
    local_2c8 = 0;
    local_2c0._0_8_ = 0;
    local_2c0._8_8_ = 0;
    local_2c0._32_8_ = 0;
    local_2c0._40_8_ = uVar4;
    local_2c0._48_8_ = uVar5;
    local_280 = (void *)0x0;
    local_278 = 0;
    local_270._0_1_ = true;
    local_270._1_1_ = true;
    local_268._0_8_ = 0;
    local_268._8_8_ = 0;
    local_268._32_8_ = 0;
    local_268._40_4_ = 0;
    local_268._44_4_ = 0x80;
    local_268._48_4_ = 0xffffffff;
    local_268._52_4_ = 0;
    local_228 = (void *)0x0;
    local_220 = 0;
    local_218._0_8_ = 0;
    local_218._8_8_ = 0;
    local_218._32_8_ = 0;
    local_218._40_4_ = 0;
    local_218._44_4_ = 0x80;
    local_218._48_4_ = 0xffffffff;
    local_218._52_4_ = 0;
    local_1d8 = (void *)0x0;
    local_1d0 = 0;
    local_1c8._0_1_ = true;
    local_1c8._1_1_ = true;
    local_1c0._0_8_ = 0;
    local_1c0._8_8_ = 0;
    local_1c0._32_8_ = 0;
    local_1c0._40_8_ = uVar4;
    local_1c0._48_8_ = uVar5;
    local_180 = (void *)0x0;
    local_178 = 0;
    local_170._0_8_ = 0;
    local_170._8_8_ = 0;
    local_170._32_8_ = 0;
    local_170._40_8_ = uVar4;
    local_170._48_8_ = uVar5;
    local_130 = (void *)0x0;
    local_128 = 0;
    local_120._0_1_ = true;
    local_120._1_1_ = true;
    local_118.Data = (FScriptContainerElement *)0x0;
    local_110._0_4_ = 0;
    local_110._4_4_ = 0;
    local_108.Data = (FScriptContainerElement *)0x0;
    local_100._0_4_ = 0;
    local_100._4_4_ = 0;
    local_7d8._0_8_ = 0;
    local_7d8._40_8_ = 0;
    local_7a8._0_8_ = 0;
    local_7a8._40_8_ = 0;
    UE::Geometry::FDynamicMeshEditor::AppendMesh
              (&local_868,pFVar21,(FMeshIndexMappings *)local_3b8,&local_7a8,&local_7d8,false);
    DestructItems<UE::Geometry::TIndexMap<int>,int>((TIndexMap<int> *)local_108.Data,(int)local_100)
    ;
    if ((TIndexMap<int> *)local_108.Data != (TIndexMap<int> *)0x0) {
      FMemory::Free(local_108.Data);
    }
    DestructItems<UE::Geometry::TIndexMap<int>,int>((TIndexMap<int> *)local_118.Data,(int)local_110)
    ;
    if ((TIndexMap<int> *)local_118.Data != (TIndexMap<int> *)0x0) {
      FMemory::Free(local_118.Data);
    }
    local_128 = 0;
    if (local_130 != (void *)0x0) {
      FMemory::Free(local_130);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_170);
    local_178 = 0;
    if (local_180 != (void *)0x0) {
      FMemory::Free(local_180);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_1c0);
    local_1d0 = 0;
    if (local_1d8 != (void *)0x0) {
      FMemory::Free(local_1d8);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_218);
    local_220 = 0;
    if (local_228 != (void *)0x0) {
      FMemory::Free(local_228);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_268);
    local_278 = 0;
    if (local_280 != (void *)0x0) {
      FMemory::Free(local_280);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_2c0);
    local_2c8 = 0;
    if (local_2d0 != (void *)0x0) {
      FMemory::Free(local_2d0);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_310);
    local_320 = 0;
    if (local_328 != (void *)0x0) {
      FMemory::Free(local_328);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_368);
    local_370 = 0;
    if (local_378 != (void *)0x0) {
      FMemory::Free(local_378);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_3b8);
  }
  bVar6 = false;
  iVar8 = local_8f0.ArrayNum;
  if (local_8f0.ArrayNum == 0) goto LAB_14e85881b;
  goto LAB_14e858011;
}

// FCollectionSelectionToMeshesDataflowNode @ 14e9160d0

FCollectionSelectionToMeshesDataflowNode * __thiscall
FCollectionSelectionToMeshesDataflowNode::FCollectionSelectionToMeshesDataflowNode
          (FCollectionSelectionToMeshesDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowTransformSelection *pFVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this->_padding_ = (longlong)&___7FCollectionSelectionToMeshesDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  pFVar1 = &this->TransformSelection;
  uVar2 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar1->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar2;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  this->bConvertSelectionToLeaves = true;
  this->bWeldVertices = true;
  this->bPreserveIsolatedVertices = true;
  (this->Meshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Meshes).ArrayNum = 0;
  (this->Meshes).ArrayMax = 0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->Collection;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = pFVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->Meshes;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

// FCollectionSelectionToMeshesDataflowNode @ 14e916210

FCollectionSelectionToMeshesDataflowNode * __thiscall
FCollectionSelectionToMeshesDataflowNode::FCollectionSelectionToMeshesDataflowNode
          (FCollectionSelectionToMeshesDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FCollectionSelectionToMeshesDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  uVar1 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->TransformSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->TransformSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  (this->Meshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Meshes).ArrayNum = 0;
  (this->Meshes).ArrayMax = 0;
  this->bConvertSelectionToLeaves = true;
  this->bWeldVertices = true;
  this->bPreserveIsolatedVertices = true;
  return this;
}

