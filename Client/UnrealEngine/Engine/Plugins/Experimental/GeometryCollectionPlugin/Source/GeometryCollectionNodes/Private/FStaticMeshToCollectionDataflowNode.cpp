// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 13

// StaticStruct @ 14e894990

UScriptStruct * __cdecl FStaticMeshToCollectionDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStaticMeshToCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FStaticMeshToCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode,
                         (UObject *)pUVar1,L"StaticMeshToCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FStaticMeshToCollectionDataflowNode.OuterSingleton;
}

// GetType @ 14e8949e0

FName __thiscall
FStaticMeshToCollectionDataflowNode::GetType(FStaticMeshToCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FStaticMeshToCollectionDataflowNode");
  return in_RDX;
}

// IsA @ 14e894a20

bool __thiscall
FStaticMeshToCollectionDataflowNode::IsA(FStaticMeshToCollectionDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FStaticMeshToCollectionDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e894a88;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e894a88:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e894aa6;
      }
    }
  }
  bVar5 = true;
LAB_14e894aa6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e894ae0

FStructOnScope * __thiscall
FStaticMeshToCollectionDataflowNode::NewStructOnScope(FStaticMeshToCollectionDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FStaticMeshToCollectionDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FStaticMeshToCollectionDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode,
                           (UObject *)pUVar2,L"StaticMeshToCollectionDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FStaticMeshToCollectionDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e894b60

void __thiscall
FStaticMeshToCollectionDataflowNode::SerializeInternal
          (FStaticMeshToCollectionDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStaticMeshToCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FStaticMeshToCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode,
                         (UObject *)pUVar1,L"StaticMeshToCollectionDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FStaticMeshToCollectionDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FStaticMeshToCollectionDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(*(longlong *)this + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e894bdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e894bf0

FName __thiscall
FStaticMeshToCollectionDataflowNode::GetDisplayName(FStaticMeshToCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"StaticMeshToCollection");
  return in_RDX;
}

// GetCategory @ 14e894c80

FName __thiscall
FStaticMeshToCollectionDataflowNode::GetCategory(FStaticMeshToCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Asset");
  return in_RDX;
}

// GetTags @ 14e894cb0

FString * __thiscall
FStaticMeshToCollectionDataflowNode::GetTags
          (FStaticMeshToCollectionDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e894ce0

UScriptStruct * __thiscall
FStaticMeshToCollectionDataflowNode::TypedScriptStruct(FStaticMeshToCollectionDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStaticMeshToCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FStaticMeshToCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshToCollectionDataflowNode,
                         (UObject *)pUVar1,L"StaticMeshToCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FStaticMeshToCollectionDataflowNode.OuterSingleton;
}

// Evaluate @ 14e894d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FStaticMeshToCollectionDataflowNode::Evaluate
          (FStaticMeshToCollectionDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  bool bVar1;
  UStaticMesh *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 *puVar5;
  FDataflowInput *pFVar6;
  TObjectPtr<UStaticMesh> *pTVar7;
  TTransform<double> *pTVar8;
  undefined1 auStackY_1a8 [32];
  TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> local_168;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> local_158;
  TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> local_148;
  UStaticMesh *local_138;
  FConnectionReference local_130;
  FConnectionReference local_118;
  FManagedArrayCollection local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  puVar5 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar5 != &this->Collection) {
    puVar5 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *)puVar5 != &this->Materials) {
      puVar5 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
      if ((TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)puVar5 !=
          &this->MaterialInstances) {
        puVar5 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
        if ((TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *)puVar5 !=
            &this->InstancedMeshes) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2424983404844941225>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionNodes\\Private\\Dataflow\\GeometryCollectionStaticMeshToCollectionNode.cpp"
                             ,0x57,
                             "Out->IsA(&Collection) || Out->IsA(&Materials) || Out->IsA(&MaterialInstances) || Out->IsA(&InstancedMeshes)"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
    }
  }
  FManagedArrayCollection::FManagedArrayCollection(&local_f8);
  local_130.Index = -1;
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 0;
  local_158.ArrayMax = 0;
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  local_130.ContainerReference = (void *)0x0;
  local_130.Reference = &this->StaticMesh;
  pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_130);
  pTVar7 = FDataflowInput::GetValue<TObjectPtr<UStaticMesh>_>(pFVar6,param_1,&this->StaticMesh);
  pUVar2 = (pTVar7->field0_0x0).DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UStaticMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  local_118.Index = -1;
  local_118.ContainerReference = (void *)0x0;
  local_118.Reference = &this->MeshTransform;
  pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_118);
  pTVar8 = FDataflowInput::GetValue<UE::Math::TTransform<double>_>
                     (pFVar6,param_1,&this->MeshTransform);
  if (pUVar2 != (UStaticMesh *)0x0) {
    bVar4 = this->bSplitComponents;
    bVar1 = this->bSetInternalFromMaterialIndex;
    local_138 = pUVar2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    FGeometryCollectionEngineConversion::ConvertStaticMeshToGeometryCollection
              ((TObjectPtr<UStaticMesh>)&local_138,pTVar8,&local_f8,&local_158,&local_168,bVar1,
               bVar4);
  }
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  FGeometryCollectionEngineConversion::GetMaterialsFromInstances(&local_158,&local_148);
  FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
            ((FDataflowNode *)this,param_1,&local_f8,&this->Collection);
  FDataflowNode::
  SetValue<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>,TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,&local_148,&this->Materials);
  FDataflowNode::
  SetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>,TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,&local_158,&this->MaterialInstances);
  FDataflowNode::
  SetValue<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>,TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,&local_168,&this->InstancedMeshes);
  if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.AllocatorInstance.Data);
  }
  DestructItems<FGeometryCollectionAutoInstanceMesh,int>
            ((FGeometryCollectionAutoInstanceMesh *)local_168.AllocatorInstance.Data,
             local_168.ArrayNum);
  if ((FGeometryCollectionAutoInstanceMesh *)local_168.AllocatorInstance.Data !=
      (FGeometryCollectionAutoInstanceMesh *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.AllocatorInstance.Data);
  }
  FManagedArrayCollection::~FManagedArrayCollection(&local_f8);
  return;
}

// FStaticMeshToCollectionDataflowNode @ 14e92d1a0

FStaticMeshToCollectionDataflowNode * __thiscall
FStaticMeshToCollectionDataflowNode::FStaticMeshToCollectionDataflowNode
          (FStaticMeshToCollectionDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *pFVar1;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  *(undefined ***)this = &___7FStaticMeshToCollectionDataflowNode__6B_;
  (this->StaticMesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  *&(this->MeshTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->MeshTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->MeshTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->MeshTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->MeshTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->MeshTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  this->bSetInternalFromMaterialIndex = true;
  this->bSplitComponents = false;
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
  local_68.ContainerReference = (void *)0x0;
  local_68.Index = -1;
  local_68.Reference = &this->StaticMesh;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->MeshTransform;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
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

// FStaticMeshToCollectionDataflowNode @ 14e92d400

FStaticMeshToCollectionDataflowNode * __thiscall
FStaticMeshToCollectionDataflowNode::FStaticMeshToCollectionDataflowNode
          (FStaticMeshToCollectionDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  *(undefined ***)this = &___7FStaticMeshToCollectionDataflowNode__6B_;
  (this->StaticMesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  *&(this->MeshTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->MeshTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->MeshTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->MeshTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->MeshTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->MeshTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  this->bSetInternalFromMaterialIndex = true;
  this->bSplitComponents = false;
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

// ~FStaticMeshToCollectionDataflowNode @ 14e933bb0

void __thiscall
FStaticMeshToCollectionDataflowNode::~FStaticMeshToCollectionDataflowNode
          (FStaticMeshToCollectionDataflowNode *this)

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

