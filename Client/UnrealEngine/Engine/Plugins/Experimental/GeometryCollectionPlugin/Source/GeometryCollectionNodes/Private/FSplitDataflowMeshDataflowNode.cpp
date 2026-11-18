// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e880c90

UScriptStruct * __cdecl FSplitDataflowMeshDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSplitDataflowMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSplitDataflowMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSplitDataflowMeshDataflowNode,(UObject *)pUVar1,
                         L"SplitDataflowMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSplitDataflowMeshDataflowNode.OuterSingleton;
}

// GetType @ 14e880e90

FName __thiscall FSplitDataflowMeshDataflowNode::GetType(FSplitDataflowMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FSplitDataflowMeshDataflowNode");
  return in_RDX;
}

// IsA @ 14e880f30

bool __thiscall
FSplitDataflowMeshDataflowNode::IsA(FSplitDataflowMeshDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FSplitDataflowMeshDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e880f98;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e880f98:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e880fb6;
      }
    }
  }
  bVar5 = true;
LAB_14e880fb6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e881030

FStructOnScope * __thiscall
FSplitDataflowMeshDataflowNode::NewStructOnScope(FSplitDataflowMeshDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FSplitDataflowMeshDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FSplitDataflowMeshDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FSplitDataflowMeshDataflowNode,
                           (UObject *)pUVar2,L"SplitDataflowMeshDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FSplitDataflowMeshDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8810b0

void __thiscall
FSplitDataflowMeshDataflowNode::SerializeInternal
          (FSplitDataflowMeshDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSplitDataflowMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSplitDataflowMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSplitDataflowMeshDataflowNode,(UObject *)pUVar1,
                         L"SplitDataflowMeshDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FSplitDataflowMeshDataflowNode.OuterSingleton,param_1
             ,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FSplitDataflowMeshDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e88112d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e881140

FName __thiscall
FSplitDataflowMeshDataflowNode::GetDisplayName(FSplitDataflowMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SplitDataflowMesh");
  return in_RDX;
}

// GetCategory @ 14e881170

FName __thiscall FSplitDataflowMeshDataflowNode::GetCategory(FSplitDataflowMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Mesh|Utilities");
  return in_RDX;
}

// GetTags @ 14e8811a0

FString * __thiscall
FSplitDataflowMeshDataflowNode::GetTags
          (FSplitDataflowMeshDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8811d0

UScriptStruct * __thiscall
FSplitDataflowMeshDataflowNode::TypedScriptStruct(FSplitDataflowMeshDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSplitDataflowMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSplitDataflowMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSplitDataflowMeshDataflowNode,(UObject *)pUVar1,
                         L"SplitDataflowMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSplitDataflowMeshDataflowNode.OuterSingleton;
}

// GetRenderParametersImpl @ 14e881250

/* WARNING: Removing unreachable block (ram,0x00014e881487) */
/* WARNING: Removing unreachable block (ram,0x00014e881495) */

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
FSplitDataflowMeshDataflowNode::GetRenderParametersImpl
          (FSplitDataflowMeshDataflowNode *this,
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
  ::FName::FName(&FStack_80,"MaterialArray");
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,2,0,&local_98,2,&local_8c);
  *(FName *)local_98.Data = local_88;
  *(FName *)(local_98.Data + 8) = FStack_80;
  pFVar6 = ::FName::FName(local_res18,"FDynamicMesh3");
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

// Evaluate @ 14e8814d0

void __thiscall
FSplitDataflowMeshDataflowNode::Evaluate
          (FSplitDataflowMeshDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  UObject *pUVar1;
  TObjectPtr<UDynamicMesh>_u_0 this_00;
  undefined1 *puVar2;
  TObjectPtr<UDataflowMesh>_u_0 *pTVar3;
  FDynamicMesh3 *pFVar4;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar5;
  TObjectPtr<UDynamicMesh>_u_0 local_res8;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> local_28;
  
  pUVar1 = GetTransientPackageAsObject();
  this_00.DebugPtr = NewObject<UDynamicMesh>(pUVar1);
  local_res8.DebugPtr = this_00.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_00.DebugPtr != (UDynamicMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  puVar2 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TObjectPtr<UDynamicMesh> *)puVar2 == &this->Mesh) {
    pTVar3 = &FDataflowNode::GetValue<TObjectPtr<UDataflowMesh>_>
                        ((FDataflowNode *)this,param_1,&this->InMesh)->field0_0x0;
    if (pTVar3->DebugPtr != (UDataflowMesh *)0x0) {
      pFVar4 = UDataflowMesh::GetDynamicMeshRef(pTVar3->DebugPtr);
      UDynamicMesh::SetMesh(this_00.DebugPtr,pFVar4);
    }
    FDataflowNode::SetValue<TObjectPtr<UDynamicMesh>_&,TObjectPtr<UDynamicMesh>_>
              ((FDataflowNode *)this,param_1,(TObjectPtr<UDynamicMesh> *)&local_res8.ObjectPtr,
               &this->Mesh);
  }
  else {
    puVar2 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)puVar2 ==
        &this->MaterialArray) {
      pTVar3 = &FDataflowNode::GetValue<TObjectPtr<UDataflowMesh>_>
                          ((FDataflowNode *)this,param_1,&this->InMesh)->field0_0x0;
      if (pTVar3->DebugPtr != (UDataflowMesh *)0x0) {
        pTVar5 = UDataflowMesh::GetMaterials(pTVar3->DebugPtr);
        TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::operator=
                  (&local_28,pTVar5);
      }
      FDataflowNode::
      SetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&,TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_28,&this->MaterialArray);
    }
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// FSplitDataflowMeshDataflowNode @ 14e92cf80

FSplitDataflowMeshDataflowNode * __thiscall
FSplitDataflowMeshDataflowNode::FSplitDataflowMeshDataflowNode
          (FSplitDataflowMeshDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *pFVar1;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  local_58.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FSplitDataflowMeshDataflowNode__6B_;
  local_58.Reference = &this->InMesh;
  (this->MaterialArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (((TObjectPtr<UDataflowMesh> *)local_58.Reference)->field0_0x0).DebugPtr = (UDataflowMesh *)0x0;
  (this->Mesh).field0_0x0.DebugPtr = (UDynamicMesh *)0x0;
  (this->MaterialArray).ArrayNum = 0;
  (this->MaterialArray).ArrayMax = 0;
  local_58.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->Mesh;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_58);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->MaterialArray;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_58);
  }
  return this;
}

