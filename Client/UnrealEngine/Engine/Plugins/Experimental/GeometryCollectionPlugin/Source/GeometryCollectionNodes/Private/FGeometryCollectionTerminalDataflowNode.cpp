// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 13

// StaticStruct @ 14e833fe0

UScriptStruct * __cdecl FGeometryCollectionTerminalDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionTerminalDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionTerminalDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode,
                         (UObject *)pUVar1,L"GeometryCollectionTerminalDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryCollectionTerminalDataflowNode.OuterSingleton;
}

// GetType @ 14e8340a0

FName __thiscall
FGeometryCollectionTerminalDataflowNode::GetType(FGeometryCollectionTerminalDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGeometryCollectionTerminalDataflowNode");
  return in_RDX;
}

// IsA @ 14e834520

bool __thiscall
FGeometryCollectionTerminalDataflowNode::IsA
          (FGeometryCollectionTerminalDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGeometryCollectionTerminalDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e834588;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e834588:
    if (!bVar5) {
      bVar5 = FDataflowTerminalNode::IsA((FDataflowTerminalNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8345a6;
      }
    }
  }
  bVar5 = true;
LAB_14e8345a6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e834610

FStructOnScope * __thiscall
FGeometryCollectionTerminalDataflowNode::NewStructOnScope
          (FGeometryCollectionTerminalDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGeometryCollectionTerminalDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FGeometryCollectionTerminalDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode,
                           (UObject *)pUVar2,L"GeometryCollectionTerminalDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGeometryCollectionTerminalDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e834780

void __thiscall
FGeometryCollectionTerminalDataflowNode::SerializeInternal
          (FGeometryCollectionTerminalDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionTerminalDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionTerminalDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode,
                         (UObject *)pUVar1,L"GeometryCollectionTerminalDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGeometryCollectionTerminalDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGeometryCollectionTerminalDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8347fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e834890

FName __thiscall
FGeometryCollectionTerminalDataflowNode::GetDisplayName
          (FGeometryCollectionTerminalDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollectionTerminal");
  return in_RDX;
}

// GetCategory @ 14e834980

FName __thiscall
FGeometryCollectionTerminalDataflowNode::GetCategory(FGeometryCollectionTerminalDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Terminal");
  return in_RDX;
}

// GetTags @ 14e834ad0

FString * __thiscall
FGeometryCollectionTerminalDataflowNode::GetTags
          (FGeometryCollectionTerminalDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e834b30

UScriptStruct * __thiscall
FGeometryCollectionTerminalDataflowNode::TypedScriptStruct
          (FGeometryCollectionTerminalDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionTerminalDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionTerminalDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionTerminalDataflowNode,
                         (UObject *)pUVar1,L"GeometryCollectionTerminalDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryCollectionTerminalDataflowNode.OuterSingleton;
}

// Evaluate @ 14e847db0

void __thiscall
FGeometryCollectionTerminalDataflowNode::Evaluate
          (FGeometryCollectionTerminalDataflowNode *this,FContext *param_1)

{
  FManagedArrayCollection *pFVar1;
  TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar3;
  FDataflowInput *pFVar4;
  FConnectionReference local_38;
  FConnectionReference local_20;
  
  local_38.Index = -1;
  pFVar1 = &this->Collection;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = pFVar1;
  pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,&local_38);
  if (pFVar4->Connection == (FDataflowOutput *)0x0) {
    FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,local_38.Reference,pFVar1);
  }
  else {
    local_20.Index = -1;
    local_20.ContainerReference = (void *)0x0;
    local_20.Reference = pFVar1;
    FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_38,&local_20);
  }
  pTVar2 = &this->Materials;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = pTVar2;
  pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,&local_38);
  if (pFVar4->Connection == (FDataflowOutput *)0x0) {
    FDataflowNode::
    SetValue<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_const_&,TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,local_38.Reference,pTVar2);
  }
  else {
    local_20.Index = -1;
    local_20.ContainerReference = (void *)0x0;
    local_20.Reference = pTVar2;
    FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_38,&local_20);
  }
  pTVar3 = &this->MaterialInstances;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = pTVar3;
  pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,&local_38);
  if (pFVar4->Connection == (FDataflowOutput *)0x0) {
    FDataflowNode::
    SetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_const_&,TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,param_1,local_38.Reference,pTVar3);
  }
  else {
    local_20.Index = -1;
    local_20.ContainerReference = (void *)0x0;
    local_20.Reference = pTVar3;
    FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_38,&local_20);
  }
  local_20.Reference = &this->InstancedMeshes;
  local_20.Index = -1;
  local_20.ContainerReference = (void *)0x0;
  FDataflowNode::
  SafeForwardInput<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,&local_20,local_20.Reference);
  return;
}

// SetAssetValue @ 14e848170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FGeometryCollectionTerminalDataflowNode::SetAssetValue
          (FGeometryCollectionTerminalDataflowNode *this,TObjectPtr<UObject> param_1,
          FContext *param_2)

{
  int iVar1;
  UGeometryCollection *this_00;
  FGeometryCollection *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  UClass *pUVar4;
  FManagedArrayCollection *pFVar5;
  TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined1 auStack_118 [32];
  FGeometryCollectionConvexPropertiesInterface local_f8;
  FManagedArrayCollection local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  this_00 = *(UGeometryCollection **)param_1.field0_0x0;
  if (this_00 != (UGeometryCollection *)0x0) {
    pUVar4 = Z_Construct_UClass_UGeometryCollection_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      pFVar2 = (this_00->GeometryCollection).Object;
      pTVar3 = (this_00->GeometryCollection).SharedReferenceCount.ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar2 != (FGeometryCollection *)0x0) {
        pFVar5 = FDataflowNode::GetValue<FManagedArrayCollection>
                           ((FDataflowNode *)this,param_2,&this->Collection);
        FManagedArrayCollection::FManagedArrayCollection(&local_e8,pFVar5);
        FGeometryCollectionConvexPropertiesInterface::FGeometryCollectionConvexPropertiesInterface
                  (&local_f8,&local_e8);
        FGeometryCollectionConvexPropertiesInterface::InitializeInterface(&local_f8);
        pTVar6 = FDataflowNode::GetValue<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_>
                           ((FDataflowNode *)this,param_2,&this->Materials);
        pTVar7 = FDataflowNode::
                 GetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
                           ((FDataflowNode *)this,param_2,&this->MaterialInstances);
        pTVar8 = FDataflowNode::
                 GetValue<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>
                           ((FDataflowNode *)this,param_2,&this->InstancedMeshes);
        if (pTVar7->ArrayNum < 1) {
          UGeometryCollection::ResetFrom
                    (this_00,&local_e8,(TArray<UMaterial_*,TSizedDefaultAllocator<32>_> *)pTVar6,
                     false);
        }
        else {
          UGeometryCollection::ResetFrom
                    (this_00,&local_e8,
                     (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)pTVar7,false);
        }
        UGeometryCollection::SetAutoInstanceMeshes(this_00,pTVar8);
        FManagedArrayCollection::~FManagedArrayCollection(&local_e8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
  }
  return;
}

// FGeometryCollectionTerminalDataflowNode @ 14e91e5c0

FGeometryCollectionTerminalDataflowNode * __thiscall
FGeometryCollectionTerminalDataflowNode::FGeometryCollectionTerminalDataflowNode
          (FGeometryCollectionTerminalDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *pTVar3;
  FDataflowOutput *pFVar4;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FGeometryCollectionTerminalDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pTVar1 = &this->Materials;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pTVar2 = &this->MaterialInstances;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pTVar3 = &this->InstancedMeshes;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->MaterialInstances).ArrayNum = 0;
  (this->MaterialInstances).ArrayMax = 0;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->InstancedMeshes).ArrayNum = 0;
  (this->InstancedMeshes).ArrayMax = 0;
  local_68.ContainerReference = (void *)0x0;
  local_68.Index = -1;
  local_68.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_68.Reference = this_00;
  local_48.Reference = this_00;
  pFVar4 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar4,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = pTVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = pTVar2;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_68.Reference = pTVar1;
  local_48.Reference = pTVar1;
  pFVar4 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar4,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_68.Reference = pTVar2;
  local_48.Reference = pTVar2;
  pFVar4 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference !=
      (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar4,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = pTVar3;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_68.Reference = pTVar3;
  local_48.Reference = pTVar3;
  pFVar4 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference !=
      (TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar4,&local_68);
  }
  return this;
}

// ~FGeometryCollectionTerminalDataflowNode @ 14e933400

void __thiscall
FGeometryCollectionTerminalDataflowNode::~FGeometryCollectionTerminalDataflowNode
          (FGeometryCollectionTerminalDataflowNode *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FGeometryCollectionAutoInstanceMesh,int>
            ((FGeometryCollectionAutoInstanceMesh *)(this->InstancedMeshes).AllocatorInstance.Data,
             (this->InstancedMeshes).ArrayNum);
  pFVar1 = (this->InstancedMeshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialInstances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Materials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FManagedArrayCollection::~FManagedArrayCollection(&this->Collection);
  this->_padding_ = (longlong)&___7FDataflowTerminalNode__6B_;
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  return;
}

