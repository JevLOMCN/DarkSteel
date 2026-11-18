// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 15

// StaticStruct @ 14e8c55d0

UScriptStruct * __cdecl FGetConvexHullVolumeDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetConvexHullVolumeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetConvexHullVolumeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode,
                         (UObject *)pUVar1,L"GetConvexHullVolumeDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetConvexHullVolumeDataflowNode.OuterSingleton;
}

// GetType @ 14e8c5770

FName __thiscall FGetConvexHullVolumeDataflowNode::GetType(FGetConvexHullVolumeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGetConvexHullVolumeDataflowNode");
  return in_RDX;
}

// IsA @ 14e8c57a0

bool __thiscall
FGetConvexHullVolumeDataflowNode::IsA(FGetConvexHullVolumeDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGetConvexHullVolumeDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8c5808;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8c5808:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8c5826;
      }
    }
  }
  bVar5 = true;
LAB_14e8c5826:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8c5860

FStructOnScope * __thiscall
FGetConvexHullVolumeDataflowNode::NewStructOnScope(FGetConvexHullVolumeDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGetConvexHullVolumeDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FGetConvexHullVolumeDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode,
                           (UObject *)pUVar2,L"GetConvexHullVolumeDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGetConvexHullVolumeDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8c5910

void __thiscall
FGetConvexHullVolumeDataflowNode::SerializeInternal
          (FGetConvexHullVolumeDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetConvexHullVolumeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetConvexHullVolumeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode,
                         (UObject *)pUVar1,L"GetConvexHullVolumeDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGetConvexHullVolumeDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGetConvexHullVolumeDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8c598d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8c5ad0

FName __thiscall
FGetConvexHullVolumeDataflowNode::GetDisplayName(FGetConvexHullVolumeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GetConvexHullVolume");
  return in_RDX;
}

// GetCategory @ 14e8c5ca0

FName __thiscall
FGetConvexHullVolumeDataflowNode::GetCategory(FGetConvexHullVolumeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Utilities");
  return in_RDX;
}

// GetTags @ 14e8c5fe0

FString * __thiscall
FGetConvexHullVolumeDataflowNode::GetTags
          (FGetConvexHullVolumeDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8c60e0

UScriptStruct * __thiscall
FGetConvexHullVolumeDataflowNode::TypedScriptStruct(FGetConvexHullVolumeDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetConvexHullVolumeDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetConvexHullVolumeDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetConvexHullVolumeDataflowNode,
                         (UObject *)pUVar1,L"GetConvexHullVolumeDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetConvexHullVolumeDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8c63f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FGetConvexHullVolumeDataflowNode::Evaluate
          (FGetConvexHullVolumeDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  float *pfVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  FName FVar5;
  FName FVar6;
  bool bVar7;
  int iVar8;
  undefined1 *puVar9;
  FDataflowInput *pFVar10;
  FManagedArrayCollection *this_00;
  FDataflowSelection *this_01;
  FName *pFVar11;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar12;
  TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *pTVar13;
  double dVar14;
  undefined1 auStackY_788 [32];
  float local_758 [2];
  ForAnyElementType local_750;
  undefined8 local_748;
  TArray<int,TSizedDefaultAllocator<32>_> local_740;
  ForAnyElementType *local_730;
  FGetConvexHullVolumeDataflowNode *local_728;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *local_720;
  FCollectionHierarchyFacade *local_718;
  FName local_710;
  FName local_708;
  code *local_700;
  float **local_6f8;
  code *local_6f0;
  ForAnyElementType **local_6e8;
  FScriptContainerElement *local_6d8;
  int iStack_6d0;
  undefined4 uStack_6cc;
  FConnectionReference local_6c8;
  FConnectionReference local_6b0;
  float *local_698;
  longlong local_690;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *local_688;
  FName local_680;
  TArrayView<int_const_,int> local_678;
  FCollectionHierarchyFacade local_668;
  FDynamicMesh3 local_5b8;
  FCollectionTransformSelectionFacade local_388;
  undefined1 local_118 [128];
  ForAnyElementType local_98;
  undefined8 local_90;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_788;
  pfVar1 = &this->Volume;
  puVar9 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((float *)puVar9 == pfVar1) {
    local_6c8.ContainerReference = (void *)0x0;
    local_758[0] = 0.0;
    local_6c8.Index = -1;
    local_6c8.Reference = &this->Collection;
    pFVar10 = FDataflowNode::FindInput((FDataflowNode *)this,&local_6c8);
    if (pFVar10->Connection != (FDataflowOutput *)0x0) {
      local_6b0.Index = -1;
      local_6b0.ContainerReference = (void *)0x0;
      local_6b0.Reference = &this->TransformSelection;
      pFVar10 = FDataflowNode::FindInput((FDataflowNode *)this,&local_6b0);
      if (pFVar10->Connection != (FDataflowOutput *)0x0) {
        this_00 = FDataflowNode::GetValue<FManagedArrayCollection>
                            ((FDataflowNode *)this,param_1,&this->Collection);
        this_01 = (FDataflowSelection *)
                  FDataflowNode::GetValue<FDataflowTransformSelection>
                            ((FDataflowNode *)this,param_1,&this->TransformSelection);
        bVar7 = FGeometryCollectionConvexUtility::HasConvexHullData(this_00);
        if (bVar7) {
          iVar8 = FManagedArrayCollection::NumElements(this_00,FTransformCollection::TransformGroup)
          ;
          FDataflowSelection::AsArray(this_01,&local_740);
          GeometryCollection::Facades::FCollectionTransformSelectionFacade::
          FCollectionTransformSelectionFacade(&local_388,this_00);
          GeometryCollection::Facades::FCollectionTransformSelectionFacade::Sanitize
                    (&local_388,&local_740,true);
          FVar5 = FTransformCollection::TransformGroup;
          if ((iVar8 == 0) || (local_740.ArrayNum == 0)) {
            FDataflowNode::SetValue<float_&,float>((FDataflowNode *)this,param_1,local_758,pfVar1);
            if (local_740.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return;
            }
            FMemory::Free(local_740.AllocatorInstance.Data);
            return;
          }
          pFVar11 = ::FName::FName(&local_680,"TransformToConvexIndices");
          pTVar12 = FManagedArrayCollection::
                    GetAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                              (this_00,*pFVar11,FVar5);
          FVar6 = FTransformCollection::ConvexHullAttribute;
          FVar5 = FTransformCollection::ConvexGroup;
          bVar7 = FManagedArrayCollection::HasAttribute
                            (this_00,FTransformCollection::ConvexHullAttribute,
                             FTransformCollection::ConvexGroup);
          if ((!bVar7) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("HasAttribute(Name, Group)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                 ,0x185,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_710 = FVar6;
          local_708 = FVar5;
          pTVar13 = TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FManagedArrayCollection::FValueType,0>,FDefaultSetAllocator>
                            *)&this_00->Map,(TTuple<FName,FName> *)&local_710);
          if ((pTVar13 == (TTuple<TTuple<FName,FName>,FManagedArrayCollection::FValueType> *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x27b,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((pTVar13->field_0x10 != '+') &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSameType<T>()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                 ,0x303,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar2 = *(longlong *)&pTVar13->field_0x30;
          if ((lVar2 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypedManagedArray != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayCollection.h"
                                 ,0x306,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          Chaos::Facades::FCollectionHierarchyFacade::FCollectionHierarchyFacade(&local_668,this_00)
          ;
          local_718 = &local_668;
          local_728 = this;
          local_720 = pTVar12;
          if (this->bVolumeOfUnion == false) {
            local_698 = local_758;
            local_6f8 = &local_698;
            local_700 = UE::Core::Private::Function::
                        TFunctionRefCaller<`FGetConvexHullVolumeDataflowNode::Evaluate'::__l17::<lambda_2>,void,int>
                        ::Call;
            local_690 = lVar2;
            local_688 = pTVar12;
            `FGetConvexHullVolumeDataflowNode::Evaluate'::__l5::<lambda_1>::operator()
                      (&local_728,&local_740,(TFunctionRef<void___cdecl(int)> *)&local_700);
          }
          else {
            local_750.Data = (FScriptContainerElement *)0x0;
            local_748 = 0;
            if (local_740.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_740.ArrayNum);
            }
            if (0 < local_740.ArrayNum) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,local_740.ArrayNum,&local_750,0,(int *)((longlong)&local_748 + 4));
            }
            local_730 = &local_750;
            local_6e8 = &local_730;
            local_6f0 = UE::Core::Private::Function::
                        TFunctionRefCaller<`FGetConvexHullVolumeDataflowNode::Evaluate'::__l19::<lambda_3>,void,int>
                        ::Call;
            `FGetConvexHullVolumeDataflowNode::Evaluate'::__l5::<lambda_1>::operator()
                      (&local_728,&local_740,(TFunctionRef<void___cdecl(int)> *)&local_6f0);
            UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_5b8);
            iStack_6d0 = (int)local_748;
            local_6d8 = local_750.Data;
            if (((int)local_748 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_678._12_4_ = uStack_6cc;
            local_678.ArrayNum = iStack_6d0;
            local_678.DataPtr = (int *)local_6d8;
            UE::FractureEngine::Convex::GetConvexHullsAsDynamicMesh
                      (this_00,&local_5b8,true,&local_678,false);
            local_118._104_8_ = &local_5b8;
            local_118._16_8_ = ___xmm_3eb0c6f7a00000003ff8000000000000;
            local_118._24_8_ = _UNK_150b37c88;
            local_118._72_8_ = ___xmm_bff00000000000003fb999999999999a;
            local_118._80_8_ = _UNK_152fc4bb8;
            local_118._0_8_ = &___7FMeshSelfUnion_Geometry_UE__6B_;
            local_118[8] = true;
            local_118._32_8_ = ___xmm_3fe00000000000003eb0c6f7a0000000;
            local_118._40_8_ = _UNK_150b37ca8;
            local_118[0x30] = false;
            local_118[0x31] = false;
            local_118[0x32] = false;
            local_118._56_8_ = (FProgressCancel *)0x0;
            local_118[0x40] = false;
            local_118[0x58] = true;
            local_118[0x59] = true;
            local_118[0x5a] = true;
            local_118._92_4_ = 1e-06;
            local_118[0x60] = true;
            local_118._100_4_ = 0.01;
            local_118._112_8_ = (FScriptContainerElement *)0x0;
            local_118._120_4_ = 0;
            local_118._124_4_ = 0;
            local_98.Data = (FScriptContainerElement *)0x0;
            local_90 = 0;
            local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
            local_88.NumBits = 0;
            local_88.MaxBits = 0x80;
            local_68 = 0xffffffff;
            local_64 = 0;
            local_58 = (ForElementType<FSetElementId>)0x0;
            local_50 = 0;
            UE::Geometry::FMeshSelfUnion::Compute((FMeshSelfUnion *)local_118);
            dVar14 = UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::GetVolumeNonWatertight
                               (&local_5b8,__real_3ff0000000000000);
            local_118._0_8_ = &___7FMeshSelfUnion_Geometry_UE__6B_;
            local_50 = 0;
            local_758[0] = (float)dVar14;
            if (local_58 != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_58);
            }
            uVar4 = local_90 >> 0x20;
            local_90 = local_90 & 0xffffffff00000000;
            if ((int)uVar4 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,0,&local_98,0,(int *)((longlong)&local_90 + 4));
            }
            local_68 = 0xffffffff;
            local_64 = 0;
            local_88.NumBits = 0;
            if (0x80 < (uint)local_88.MaxBits) {
              local_88.MaxBits = 0x80;
              TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88,0);
            }
            if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
            }
            if (local_98.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data);
            }
            if ((FScriptContainerElement *)local_118._112_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_118._112_8_);
            }
            UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_5b8);
            if (local_750.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_750.Data);
            }
          }
          FDataflowNode::SetValue<float_&,float>((FDataflowNode *)this,param_1,local_758,pfVar1);
          if (local_740.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free(local_740.AllocatorInstance.Data);
          return;
        }
      }
    }
    FDataflowNode::SetValue<float_&,float>((FDataflowNode *)this,param_1,local_758,pfVar1);
  }
  return;
}

// FGetConvexHullVolumeDataflowNode @ 14e9203d0

FGetConvexHullVolumeDataflowNode * __thiscall
FGetConvexHullVolumeDataflowNode::FGetConvexHullVolumeDataflowNode
          (FGetConvexHullVolumeDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowTransformSelection *pFVar1;
  FLinearColor FVar2;
  uint uVar3;
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this->_padding_ = (longlong)&___7FGetConvexHullVolumeDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  pFVar1 = &this->TransformSelection;
  uVar3 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar1->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar3;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  this->Volume = 0.0;
  this->bSumChildrenForClustersWithoutHulls = true;
  this->bVolumeOfUnion = false;
  (this->DebugDrawRenderSettings).RenderType = Wireframe;
  FVar2 = FLinearColor::Gray;
  (this->DebugDrawRenderSettings).bTranslucent = true;
  (this->DebugDrawRenderSettings).LineWidthMultiplier = 1.0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (this->DebugDrawRenderSettings).Color.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  this->bRandomizeColor = true;
  this->ColorRandomSeed = 0;
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
  local_38.Reference = &this->Volume;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  (this->DebugDrawRenderSettings).RenderType = Wireframe;
  (this->DebugDrawRenderSettings).Color.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Green.field0_0x0;
  (this->DebugDrawRenderSettings).LineWidthMultiplier = 2.0;
  return this;
}

// FGetConvexHullVolumeDataflowNode @ 14e920550

FGetConvexHullVolumeDataflowNode * __thiscall
FGetConvexHullVolumeDataflowNode::FGetConvexHullVolumeDataflowNode
          (FGetConvexHullVolumeDataflowNode *this)

{
  FLinearColor FVar1;
  uint uVar2;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FGetConvexHullVolumeDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  uVar2 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->TransformSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->TransformSelection).field_0x4 = uVar2;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined8 *)&(this->TransformSelection).field_0x24 = 0x80;
  this->bSumChildrenForClustersWithoutHulls = true;
  this->bVolumeOfUnion = false;
  (this->DebugDrawRenderSettings).RenderType = Wireframe;
  FVar1 = FLinearColor::Gray;
  (this->DebugDrawRenderSettings).bTranslucent = true;
  (this->DebugDrawRenderSettings).LineWidthMultiplier = 1.0;
  (this->DebugDrawRenderSettings).Color.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  this->ColorRandomSeed = 0;
  this->bRandomizeColor = true;
  return this;
}

// operator() @ 14e935ed0

void __thiscall
`FGetConvexHullVolumeDataflowNode::Evaluate'::__l5::<lambda_1>::operator()
          (void *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TFunctionRef<void___cdecl(int)> *param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  bool bVar9;
  uint local_res10 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  
  iVar4 = param_1->ArrayNum;
  piVar1 = &param_1->ArrayNum;
  if (iVar4 != 0) {
    bVar9 = iVar4 == 0;
    do {
      if ((bVar9 || iVar4 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar2 = *(uint *)((param_1->AllocatorInstance).Data + (longlong)*piVar1 * 4 + -4);
      *piVar1 = *piVar1 + -1;
      if (*(char *)(*(longlong *)this + 0x324) == '\0') {
LAB_14e936066:
        local_res10[0] = uVar2;
        (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_res10);
      }
      else {
        lVar8 = *(longlong *)((longlong)this + 8);
        uVar5 = 0;
        if ((int)uVar2 < *(int *)(lVar8 + 0x18)) {
          uVar5 = ~uVar2 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar8 = (longlong)(int)uVar2 * 0x50 + *(longlong *)(lVar8 + 0x10);
        if (*(int *)(lVar8 + 8) != *(int *)(lVar8 + 0x34)) goto LAB_14e936066;
        this_00 = Chaos::Facades::FCollectionHierarchyFacade::FindChildren
                            (*(FCollectionHierarchyFacade **)((longlong)this + 0x10),uVar2);
        if (this_00 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
          pTVar7 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(this_00,&local_38);
          if ((param_1 == pTVar7) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(void*)this != (void*)&Source",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x986,L""), bVar9)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar4 = pTVar7->ArrayNum;
          if (iVar4 != 0) {
            iVar6 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (4,4,iVar4,&param_1->AllocatorInstance,piVar1,&param_1->ArrayMax);
            memmove((param_1->AllocatorInstance).Data + (longlong)iVar6 * 4,
                    (pTVar7->AllocatorInstance).Data,(longlong)iVar4 << 2);
            pTVar7->ArrayNum = 0;
          }
          if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.AllocatorInstance.Data);
          }
        }
      }
      iVar4 = *piVar1;
      bVar9 = iVar4 == 0;
    } while (!bVar9);
  }
  return;
}

// operator() @ 14e936ab0

void __thiscall
`FGetConvexHullVolumeDataflowNode::Evaluate'::__l17::<lambda_2>::operator()(void *this,int param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  longlong *plVar14;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar8 = *(longlong *)((longlong)this + 0x10);
  uVar6 = 0;
  if (param_1 < *(int *)(lVar8 + 0x18)) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar11 = 0;
  plVar14 = (longlong *)((longlong)param_1 * 0x50 + *(longlong *)(lVar8 + 0x10));
  iVar13 = 0;
  iVar3 = (int)plVar14[5];
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar14 + 2);
  uVar6 = 1;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar12 = (TBitArray<FDefaultBitArrayAllocator> *)plVar14[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar14[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14e936bad;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = iVar13 + -1 + (int)lVar8;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14e936bad:
  uVar10 = *(uint *)(plVar14 + 5);
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,(int)plVar14[1] - *(int *)((longlong)plVar14 + 0x34));
  TStack_60.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)(plVar14 + 5);
  if (uVar10 != uVar6) {
    pTVar12 = (TBitArray<FDefaultBitArrayAllocator> *)plVar14[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar14[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14e936cb0;
      uVar10 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    uVar10 = local_res18 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14e936cb0:
  while( true ) {
    if ((int)plVar14[1] - *(int *)((longlong)plVar14 + 0x34) != (int)uStack_40) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) && (TStack_60.Array == pTVar1)) break;
    lVar8 = *(longlong *)((longlong)this + 8);
    uVar6 = *(uint *)(*plVar14 + (longlong)TStack_60.CurrentBitIndex * 0xc);
    uVar9 = 0;
    if ((int)uVar6 < *(int *)(lVar8 + 0x18)) {
      uVar9 = ~uVar6 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    **(float **)this =
         *(float *)(*(longlong *)(*(longlong *)(lVar8 + 0x10) + (longlong)(int)uVar6 * 8) + 0x68) +
         **(float **)this;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// operator() @ 14e936eb0

void __thiscall
`FGetConvexHullVolumeDataflowNode::Evaluate'::__l19::<lambda_3>::operator()(void *this,int param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int local_res10 [6];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(int *)(pFVar2->Data + (longlong)iVar5 * 4) = local_res10[0];
  return;
}

