// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 13

// StaticStruct @ 14e86b630

UScriptStruct * __cdecl FGeometryCollectionToCollectionDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionToCollectionDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionToCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionToCollectionDataflowNode,
                         (UObject *)pUVar1,L"GeometryCollectionToCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryCollectionToCollectionDataflowNode.
         OuterSingleton;
}

// GetType @ 14e86b8a0

FName __thiscall
FGeometryCollectionToCollectionDataflowNode::GetType
          (FGeometryCollectionToCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGeometryCollectionToCollectionDataflowNode");
  return in_RDX;
}

// IsA @ 14e86bb80

bool __thiscall
FGeometryCollectionToCollectionDataflowNode::IsA
          (FGeometryCollectionToCollectionDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGeometryCollectionToCollectionDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e86bbe8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e86bbe8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e86bc06;
      }
    }
  }
  bVar5 = true;
LAB_14e86bc06:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e86bc70

FStructOnScope * __thiscall
FGeometryCollectionToCollectionDataflowNode::NewStructOnScope
          (FGeometryCollectionToCollectionDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGeometryCollectionToCollectionDataflowNode.OuterSingleton
        == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FGeometryCollectionToCollectionDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionToCollectionDataflowNode,
                           (UObject *)pUVar2,L"GeometryCollectionToCollectionDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGeometryCollectionToCollectionDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e86bd60

void __thiscall
FGeometryCollectionToCollectionDataflowNode::SerializeInternal
          (FGeometryCollectionToCollectionDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionToCollectionDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionToCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionToCollectionDataflowNode,
                         (UObject *)pUVar1,L"GeometryCollectionToCollectionDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGeometryCollectionToCollectionDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGeometryCollectionToCollectionDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e86bddd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e86bdf0

FName __thiscall
FGeometryCollectionToCollectionDataflowNode::GetDisplayName
          (FGeometryCollectionToCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollectionToCollection");
  return in_RDX;
}

// GetCategory @ 14e86c080

FName __thiscall
FGeometryCollectionToCollectionDataflowNode::GetCategory
          (FGeometryCollectionToCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Asset");
  return in_RDX;
}

// GetTags @ 14e86c0b0

FString * __thiscall
FGeometryCollectionToCollectionDataflowNode::GetTags
          (FGeometryCollectionToCollectionDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e86c0e0

UScriptStruct * __thiscall
FGeometryCollectionToCollectionDataflowNode::TypedScriptStruct
          (FGeometryCollectionToCollectionDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionToCollectionDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionToCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionToCollectionDataflowNode,
                         (UObject *)pUVar1,L"GeometryCollectionToCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryCollectionToCollectionDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14e86c430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FGeometryCollectionToCollectionDataflowNode::Evaluate
          (FGeometryCollectionToCollectionDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  UGeometryCollection *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 *puVar4;
  undefined1 auStackY_158 [32];
  TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> local_128;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> local_118;
  TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> local_108;
  UGeometryCollection *local_f8 [2];
  FManagedArrayCollection local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar4 != &this->Collection) {
    puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *)puVar4 != &this->Materials) {
      puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
      if ((TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)puVar4 !=
          &this->MaterialInstances) {
        puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
        if ((TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *)puVar4 !=
            &this->InstancedMeshes) {
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<5163137966440186374>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionNodes\\Private\\Dataflow\\GeometryCollectionAssetNodes.cpp"
                             ,0x206,
                             "Out->IsA(&Collection) || Out->IsA(&Materials) || Out->IsA(&MaterialInstances) || Out->IsA(&InstancedMeshes)"
                            );
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      }
    }
  }
  FManagedArrayCollection::FManagedArrayCollection(&local_e8);
  pUVar1 = (this->GeometryCollection).field0_0x0.DebugPtr;
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 0;
  local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ArrayNum = 0;
  local_128.ArrayMax = 0;
  if (pUVar1 != (UGeometryCollection *)0x0) {
    local_f8[0] = pUVar1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    FGeometryCollectionEngineConversion::ConvertGeometryCollectionToGeometryCollection
              ((TObjectPtr<UGeometryCollection>)local_f8,&local_e8,&local_118,&local_128);
  }
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 0;
  local_108.ArrayMax = 0;
  FGeometryCollectionEngineConversion::GetMaterialsFromInstances(&local_118,&local_108);
  FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
            ((FDataflowNode *)this,param_1,&local_e8,&this->Collection);
  FDataflowNode::
  SetValue<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>,TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,&local_108,&this->Materials);
  FDataflowNode::
  SetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>,TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,&local_118,&this->MaterialInstances);
  FDataflowNode::
  SetValue<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>,TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,&local_128,&this->InstancedMeshes);
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  DestructItems<FGeometryCollectionAutoInstanceMesh,int>
            ((FGeometryCollectionAutoInstanceMesh *)local_128.AllocatorInstance.Data,
             local_128.ArrayNum);
  if ((FGeometryCollectionAutoInstanceMesh *)local_128.AllocatorInstance.Data !=
      (FGeometryCollectionAutoInstanceMesh *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  FManagedArrayCollection::~FManagedArrayCollection(&local_e8);
  return;
}

// FGeometryCollectionToCollectionDataflowNode @ 14e91e9f0

FGeometryCollectionToCollectionDataflowNode * __thiscall
FGeometryCollectionToCollectionDataflowNode::FGeometryCollectionToCollectionDataflowNode
          (FGeometryCollectionToCollectionDataflowNode *this,FNodeParameters *param_1,FGuid *param_2
          )

{
  FDataflowOutput *pFVar1;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this->_padding_ = (longlong)&___7FGeometryCollectionToCollectionDataflowNode__6B_;
  (this->GeometryCollection).field0_0x0.DebugPtr = (UGeometryCollection *)0x0;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  (this->MaterialInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialInstances).ArrayNum = 0;
  (this->MaterialInstances).ArrayMax = 0;
  (this->InstancedMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstancedMeshes).ArrayNum = 0;
  (this->InstancedMeshes).ArrayMax = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Collection;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Materials;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->MaterialInstances;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->InstancedMeshes;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  return this;
}

// FGeometryCollectionToCollectionDataflowNode @ 14e91eba0

FGeometryCollectionToCollectionDataflowNode * __thiscall
FGeometryCollectionToCollectionDataflowNode::FGeometryCollectionToCollectionDataflowNode
          (FGeometryCollectionToCollectionDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FGeometryCollectionToCollectionDataflowNode__6B_;
  (this->GeometryCollection).field0_0x0.DebugPtr = (UGeometryCollection *)0x0;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  (this->MaterialInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialInstances).ArrayNum = 0;
  (this->MaterialInstances).ArrayMax = 0;
  (this->InstancedMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstancedMeshes).ArrayNum = 0;
  (this->InstancedMeshes).ArrayMax = 0;
  return this;
}

// ~FGeometryCollectionToCollectionDataflowNode @ 14e933510

void __thiscall
FGeometryCollectionToCollectionDataflowNode::~FGeometryCollectionToCollectionDataflowNode
          (FGeometryCollectionToCollectionDataflowNode *this)

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
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  return;
}

