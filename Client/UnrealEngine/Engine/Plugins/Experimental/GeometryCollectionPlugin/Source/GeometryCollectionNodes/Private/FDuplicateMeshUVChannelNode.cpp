// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e87e3e0

UScriptStruct * __cdecl FDuplicateMeshUVChannelNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDuplicateMeshUVChannelNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDuplicateMeshUVChannelNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDuplicateMeshUVChannelNode,(UObject *)pUVar1,
                         L"DuplicateMeshUVChannelNode");
  }
  return Z_Registration_Info_UScriptStruct_FDuplicateMeshUVChannelNode.OuterSingleton;
}

// GetType @ 14e87e510

FName __thiscall FDuplicateMeshUVChannelNode::GetType(FDuplicateMeshUVChannelNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDuplicateMeshUVChannelNode");
  return in_RDX;
}

// IsA @ 14e87e580

bool __thiscall FDuplicateMeshUVChannelNode::IsA(FDuplicateMeshUVChannelNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDuplicateMeshUVChannelNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e87e5e8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e87e5e8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e87e606;
      }
    }
  }
  bVar5 = true;
LAB_14e87e606:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e87e640

FStructOnScope * __thiscall
FDuplicateMeshUVChannelNode::NewStructOnScope(FDuplicateMeshUVChannelNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDuplicateMeshUVChannelNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FDuplicateMeshUVChannelNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDuplicateMeshUVChannelNode,(UObject *)pUVar2,
                           L"DuplicateMeshUVChannelNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDuplicateMeshUVChannelNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e87e6c0

void __thiscall
FDuplicateMeshUVChannelNode::SerializeInternal(FDuplicateMeshUVChannelNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDuplicateMeshUVChannelNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDuplicateMeshUVChannelNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDuplicateMeshUVChannelNode,(UObject *)pUVar1,
                         L"DuplicateMeshUVChannelNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDuplicateMeshUVChannelNode.OuterSingleton
             ,param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDuplicateMeshUVChannelNode.OuterSingleton
             ,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e87e73d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e87e750

FName __thiscall FDuplicateMeshUVChannelNode::GetDisplayName(FDuplicateMeshUVChannelNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"DuplicateMeshUVChannelNode");
  return in_RDX;
}

// GetCategory @ 14e87e780

FName __thiscall FDuplicateMeshUVChannelNode::GetCategory(FDuplicateMeshUVChannelNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Mesh|Utilities");
  return in_RDX;
}

// GetTags @ 14e87e860

FString * __thiscall
FDuplicateMeshUVChannelNode::GetTags
          (FDuplicateMeshUVChannelNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Mesh UV DataflowMesh");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e87ea20

UScriptStruct * __thiscall
FDuplicateMeshUVChannelNode::TypedScriptStruct(FDuplicateMeshUVChannelNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDuplicateMeshUVChannelNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDuplicateMeshUVChannelNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDuplicateMeshUVChannelNode,(UObject *)pUVar1,
                         L"DuplicateMeshUVChannelNode");
  }
  return Z_Registration_Info_UScriptStruct_FDuplicateMeshUVChannelNode.OuterSingleton;
}

// GetRenderParametersImpl @ 14e87ea70

/* WARNING: Removing unreachable block (ram,0x00014e87eca7) */
/* WARNING: Removing unreachable block (ram,0x00014e87ecb5) */

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
FDuplicateMeshUVChannelNode::GetRenderParametersImpl
          (FDuplicateMeshUVChannelNode *this,
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
  FName local_res18 [2];
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  FName local_88;
  FName FStack_80;
  FString local_78;
  FString local_68;
  FName local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  FName local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar5 = ::FName::FName(&local_res10,"3DView");
  ::FName::FName(&local_88,"Mesh");
  ::FName::FName(&FStack_80,"UVChannel");
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,2,0,&local_98,2,&local_8c);
  *(FName *)local_98.Data = local_88;
  *(FName *)(local_98.Data + 8) = FStack_80;
  pFVar6 = ::FName::FName(local_res18,"UDataflowMesh");
  FVar1 = *pFVar6;
  pFVar7 = ::FString::FString(&local_78,"SurfaceRender");
  ::FString::FString(&local_68,pFVar7);
  _Src.Data = local_98.Data;
  lVar10 = (longlong)local_90;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = CONCAT44(local_48._4_4_,local_90);
  local_58 = FVar1;
  if (local_90 == 0) {
    local_48 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_90,0,&local_50,local_90,(int *)((longlong)&local_48 + 4));
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
  if ((FName *)local_98.Data != (FName *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return __return_storage_ptr__;
}

// Evaluate @ 14e87eeb0

void __thiscall
FDuplicateMeshUVChannelNode::Evaluate
          (FDuplicateMeshUVChannelNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  TObjectPtr<UDataflowMesh> *pTVar2;
  TObjectPtr<UDataflowMesh> this_00;
  FDynamicMeshAttributeSet *pFVar3;
  FProperty *pFVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  TObjectPtr<UDataflowMesh>_u_0 *pTVar9;
  FDynamicMesh3 *pFVar10;
  TObjectPtr<UDataflowMesh>_u_0 TVar11;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar12;
  UObject *pUVar13;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar14;
  FDataflowInput *pFVar15;
  FDataflowOutput *this_01;
  FTimestamp FVar16;
  FGuid *pFVar17;
  ulong64 uVar18;
  wchar_t *pwVar19;
  TObjectPtr<UDataflowMesh>_u_0 local_res8;
  int local_res18 [2];
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_res20;
  TDynamicVector<unsigned_short,512> local_2e8;
  TDynamicVector<int,512> local_2d0;
  int local_2b8;
  FConnectionReference local_2b0;
  FConnectionReference local_298;
  FConnectionReference local_280;
  FDynamicMesh3 local_268;
  
  pTVar2 = &this->Mesh;
  local_res18[0] = -1;
  puVar8 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((TObjectPtr<UDataflowMesh> *)puVar8 == pTVar2) ||
     (puVar8 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (int *)puVar8 == &this->NewUVChannel)) {
    pTVar9 = &FDataflowNode::GetValue<TObjectPtr<UDataflowMesh>_>
                        ((FDataflowNode *)this,param_1,pTVar2)->field0_0x0;
    this_00.field0_0x0 = (TObjectPtr<UDataflowMesh>_u_0)pTVar9->DebugPtr;
    if (this_00.field0_0x0 != (UDataflowMesh *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00.field0_0x0);
      }
      pFVar10 = UDataflowMesh::GetDynamicMesh((UDataflowMesh *)this_00.field0_0x0);
      if (pFVar10 == (FDynamicMesh3 *)0x0) {
        pwVar19 = L"Mesh is missing DynamicMesh object";
      }
      else {
        pFVar3 = (pFVar10->AttributeSet).Ptr;
        if (((pFVar3 != (FDynamicMeshAttributeSet *)0x0) && (-1 < this->SourceUVChannel)) &&
           (iVar6 = this->SourceUVChannel, iVar5 = (**(code **)(pFVar3->_padding_ + 0xa8))(),
           iVar6 < iVar5)) {
          UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_268);
          UE::Geometry::FDynamicMesh3::Copy(&local_268,pFVar10,true,true,true,true);
          UE::Geometry::FDynamicMesh3::EnableAttributes(&local_268);
          iVar6 = (**(code **)((local_268.AttributeSet.Ptr)->_padding_ + 0xa8))();
          local_res18[0] = iVar6;
          (**(code **)((local_268.AttributeSet.Ptr)->_padding_ + 0xb0))
                    (local_268.AttributeSet.Ptr,iVar6 + 1);
          TVar11.DebugPtr =
               (UDataflowMesh *)
               UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer
                         (local_268.AttributeSet.Ptr,this->SourceUVChannel);
          local_res8.DebugPtr = TVar11.DebugPtr;
          pTVar12 = UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer
                              (local_268.AttributeSet.Ptr,iVar6);
          local_res20 = pTVar12;
          UE::Geometry::TDynamicVector<unsigned_short,512>::TDynamicVector<unsigned_short,512>
                    (&local_2e8,(TDynamicVector<unsigned_short,512> *)&(TVar11.DebugPtr)->_padding_)
          ;
          UE::Geometry::TDynamicVector<int,512>::TDynamicVector<int,512>
                    (&local_2d0,(TDynamicVector<int,512> *)&(TVar11.DebugPtr)->_padding_);
          local_2b8 = ((TVar11.DebugPtr)->Materials).ArrayNum;
          puVar8 = &pTVar12->field_0x8;
          if ((TDynamicVector<unsigned_short,512> *)puVar8 != &local_2e8) {
            UE::Geometry::TDynamicVector<unsigned_short,512>::Empty
                      ((TDynamicVector<unsigned_short,512> *)puVar8,0);
            puVar1 = &pTVar12->field_0x10;
            *(uint *)puVar8 = local_2e8.CurBlock;
            *(uint *)&pTVar12->field_0xc = local_2e8.CurBlockUsed;
            if ((TArray<UE::Geometry::TDynamicVector<unsigned_short,512>::TBlock_*,TSizedDefaultAllocator<32>_>
                 *)puVar1 != &local_2e8.Blocks) {
              if (*(void **)puVar1 != (void *)0x0) {
                FMemory::Free(*(void **)puVar1);
              }
              *(FScriptContainerElement **)puVar1 = local_2e8.Blocks.AllocatorInstance.Data;
              *(int *)&pTVar12->field_0x18 = local_2e8.Blocks.ArrayNum;
              *(int *)&pTVar12->field_0x1c = local_2e8.Blocks.ArrayMax;
              local_2e8.Blocks.ArrayNum = 0;
              local_2e8.Blocks.ArrayMax = 0;
              local_2e8.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            }
            local_2e8.CurBlock = 0;
            local_2e8.CurBlockUsed = 0;
            UE::Geometry::TDynamicVector<unsigned_short,512>::AddAllocatedBlock(&local_2e8);
          }
          puVar8 = &pTVar12->field_0x20;
          if ((TDynamicVector<int,512> *)puVar8 != &local_2d0) {
            UE::Geometry::TDynamicVector<int,512>::Empty((TDynamicVector<int,512> *)puVar8,0);
            *(uint *)puVar8 = local_2d0.CurBlock;
            *(uint *)&pTVar12->field_0x24 = local_2d0.CurBlockUsed;
            puVar8 = &pTVar12->field_0x28;
            if ((TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_>
                 *)puVar8 != &local_2d0.Blocks) {
              if (*(void **)puVar8 != (void *)0x0) {
                FMemory::Free(*(void **)puVar8);
              }
              *(FScriptContainerElement **)puVar8 = local_2d0.Blocks.AllocatorInstance.Data;
              *(int *)&pTVar12->field_0x30 = local_2d0.Blocks.ArrayNum;
              *(int *)&pTVar12->field_0x34 = local_2d0.Blocks.ArrayMax;
              local_2d0.Blocks.ArrayNum = 0;
              local_2d0.Blocks.ArrayMax = 0;
              local_2d0.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            }
            local_2d0.CurBlock = 0;
            local_2d0.CurBlockUsed = 0;
            UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&local_2d0);
          }
          *(int *)&pTVar12->field_0x38 = local_2b8;
          local_2b8 = 0;
          UE::Geometry::TDynamicVector<int,512>::Empty(&local_2d0,0);
          if (local_2d0.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2d0.Blocks.AllocatorInstance.Data);
          }
          UE::Geometry::TDynamicVector<unsigned_short,512>::Empty(&local_2e8,0);
          if (local_2e8.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2e8.Blocks.AllocatorInstance.Data);
          }
          pTVar12 = local_res20;
          TVar11 = local_res8;
          UE::Geometry::TDynamicVector<float,512>::operator=
                    ((TDynamicVector<float,512> *)&local_res20->field_0x40,
                     (TDynamicVector<float,512> *)(local_res8.DebugPtr + 1));
          UE::Geometry::TDynamicVector<int,512>::operator=
                    ((TDynamicVector<int,512> *)&pTVar12->field_0x58,
                     (TDynamicVector<int,512> *)&TVar11.DebugPtr[1]._padding_);
          UE::Geometry::TDynamicVector<int,512>::operator=
                    ((TDynamicVector<int,512> *)&pTVar12->field_0x70,
                     (TDynamicVector<int,512> *)&TVar11.DebugPtr[1].Materials);
          pUVar13 = GetTransientPackageAsObject();
          TVar11.DebugPtr = NewObject<UDataflowMesh>(pUVar13);
          local_res8.DebugPtr = TVar11.DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (TVar11.DebugPtr != (UDataflowMesh *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)TVar11.DebugPtr);
          }
          UDataflowMesh::SetDynamicMesh<UE::Geometry::FDynamicMesh3>(TVar11.DebugPtr,&local_268);
          pTVar14 = UDataflowMesh::GetMaterials((UDataflowMesh *)this_00.field0_0x0);
          TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::operator=
                    (&(TVar11.DebugPtr)->Materials,pTVar14);
          FDataflowNode::SetValue<TObjectPtr<UDataflowMesh>_&,TObjectPtr<UDataflowMesh>_>
                    ((FDataflowNode *)this,param_1,
                     (TObjectPtr<UDataflowMesh> *)&local_res8.ObjectPtr,pTVar2);
          FDataflowNode::SetValue<int_&,int>
                    ((FDataflowNode *)this,param_1,local_res18,&this->NewUVChannel);
          UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_268);
          return;
        }
        pwVar19 = L"Invalid Source UV Channel or the Mesh does not have an AttributeSet";
      }
      ::FString::FString((FString *)&local_2b0,pwVar19);
      UE::Dataflow::FContext::Warning(param_1,(FString *)&local_2b0,(FDataflowNode *)this,param_2);
      if (local_2b0.Reference != (TObjectPtr<UDataflowMesh> *)0x0) {
        FMemory::Free(local_2b0.Reference);
      }
    }
  }
  local_298.ContainerReference = (void *)0x0;
  local_298.Index = -1;
  local_298.Reference = pTVar2;
  pFVar15 = FDataflowNode::FindInput((FDataflowNode *)this,&local_298);
  if (pFVar15->Connection == (FDataflowOutput *)0x0) {
    local_res8.DebugPtr = local_298.Reference;
    local_280.Index = -1;
    local_280.ContainerReference = (void *)0x0;
    local_280.Reference = pTVar2;
    this_01 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_280);
    if (this_01 == (FDataflowOutput *)0x0) {
      `FDataflowNode::SetValue<TObjectPtr<UDataflowMesh>_const_&,TObjectPtr<UDataflowMesh>_>'::__l7
      ::<lambda_1>::operator()(&local_res8);
    }
    else if (this_01->_padding_ != 0) {
      FVar16 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_01);
      uVar7 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_01);
      pFVar17 = FDataflowConnection::GetOwningNodeGuid
                          ((FDataflowConnection *)this_01,(FGuid *)&local_2b0);
      pFVar4 = (FProperty *)this_01->_padding_;
      uVar18 = CityHash64((char *)&this_01->_padding_,0x10);
      UE::Dataflow::FContext::SetData<TObjectPtr<UDataflowMesh>_const_&>
                (param_1,(uint)uVar18,pFVar4,(TObjectPtr<UDataflowMesh> *)local_res8.DebugPtr,
                 pFVar17,uVar7,(FTimestamp *)FVar16.Value);
    }
  }
  else {
    local_2b0.Index = -1;
    local_2b0.ContainerReference = (void *)0x0;
    local_2b0.Reference = pTVar2;
    FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_298,&local_2b0);
  }
  FDataflowNode::SetValue<int_&,int>((FDataflowNode *)this,param_1,local_res18,&this->NewUVChannel);
  return;
}

// FDuplicateMeshUVChannelNode @ 14e91beb0

FDuplicateMeshUVChannelNode * __thiscall
FDuplicateMeshUVChannelNode::FDuplicateMeshUVChannelNode
          (FDuplicateMeshUVChannelNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  TObjectPtr<UDataflowMesh> *pTVar1;
  FDataflowOutput *pFVar2;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this->SourceUVChannel = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pTVar1 = &this->Mesh;
  this->_padding_ = (longlong)&___7FDuplicateMeshUVChannelNode__6B_;
  (pTVar1->field0_0x0).DebugPtr = (UDataflowMesh *)0x0;
  this->NewUVChannel = -1;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = pTVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_58.Reference = pTVar1;
  local_38.Reference = pTVar1;
  pFVar2 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (TObjectPtr<UDataflowMesh> *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar2,&local_58);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->NewUVChannel;
  pFVar2 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar2,&local_58);
  }
  return this;
}

