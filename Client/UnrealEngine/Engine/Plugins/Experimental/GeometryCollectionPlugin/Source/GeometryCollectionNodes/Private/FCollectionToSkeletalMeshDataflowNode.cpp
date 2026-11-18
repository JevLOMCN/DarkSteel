// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e88e270

UScriptStruct * __cdecl FCollectionToSkeletalMeshDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionToSkeletalMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionToSkeletalMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionToSkeletalMeshDataflowNode,
                         (UObject *)pUVar1,L"CollectionToSkeletalMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionToSkeletalMeshDataflowNode.OuterSingleton;
}

// GetType @ 14e88e380

FName __thiscall
FCollectionToSkeletalMeshDataflowNode::GetType(FCollectionToSkeletalMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCollectionToSkeletalMeshDataflowNode");
  return in_RDX;
}

// IsA @ 14e88e3b0

bool __thiscall
FCollectionToSkeletalMeshDataflowNode::IsA
          (FCollectionToSkeletalMeshDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FCollectionToSkeletalMeshDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e88e418;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e88e418:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e88e436;
      }
    }
  }
  bVar5 = true;
LAB_14e88e436:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e88e4c0

FStructOnScope * __thiscall
FCollectionToSkeletalMeshDataflowNode::NewStructOnScope(FCollectionToSkeletalMeshDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCollectionToSkeletalMeshDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCollectionToSkeletalMeshDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCollectionToSkeletalMeshDataflowNode,
                           (UObject *)pUVar2,L"CollectionToSkeletalMeshDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCollectionToSkeletalMeshDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e88e540

void __thiscall
FCollectionToSkeletalMeshDataflowNode::SerializeInternal
          (FCollectionToSkeletalMeshDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionToSkeletalMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionToSkeletalMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionToSkeletalMeshDataflowNode,
                         (UObject *)pUVar1,L"CollectionToSkeletalMeshDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionToSkeletalMeshDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionToSkeletalMeshDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e88e5bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e88e5d0

FName __thiscall
FCollectionToSkeletalMeshDataflowNode::GetDisplayName(FCollectionToSkeletalMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CollectionToSkeletalMesh");
  return in_RDX;
}

// GetCategory @ 14e88e6b0

FName __thiscall
FCollectionToSkeletalMeshDataflowNode::GetCategory(FCollectionToSkeletalMeshDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection");
  return in_RDX;
}

// GetTags @ 14e88e6e0

FString * __thiscall
FCollectionToSkeletalMeshDataflowNode::GetTags
          (FCollectionToSkeletalMeshDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e88e750

UScriptStruct * __thiscall
FCollectionToSkeletalMeshDataflowNode::TypedScriptStruct
          (FCollectionToSkeletalMeshDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionToSkeletalMeshDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionToSkeletalMeshDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionToSkeletalMeshDataflowNode,
                         (UObject *)pUVar1,L"CollectionToSkeletalMeshDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionToSkeletalMeshDataflowNode.OuterSingleton;
}

// Evaluate @ 14e890110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FCollectionToSkeletalMeshDataflowNode::Evaluate
          (FCollectionToSkeletalMeshDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  bool bVar8;
  uint uVar9;
  undefined1 *puVar10;
  UObject *pUVar11;
  UClass *pUVar12;
  USkeletalMesh *pUVar13;
  USkeleton *pUVar14;
  FManagedArrayCollection *pFVar15;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar16;
  FDataflowOutput *pFVar17;
  FTimestamp FVar18;
  ulong64 uVar19;
  undefined8 *puVar20;
  FGuid *pFVar21;
  longlong *plVar22;
  undefined1 auStackY_358 [32];
  undefined1 local_318 [8];
  undefined8 *local_310;
  uint local_308;
  FProperty *local_300;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> local_2f8;
  FGuid *local_2e0;
  FConnectionReference local_2d8;
  FGuid local_2c0;
  FCollectionHierarchyFacade local_2a8;
  undefined1 local_1f8 [128];
  undefined1 local_178 [128];
  FManagedArrayCollection local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_358;
  puVar10 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((TObjectPtr<USkeletalMesh_const_> *)puVar10 == &this->SkeletalMesh) ||
     (puVar10 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (TObjectPtr<USkeleton_const_> *)puVar10 == &this->Skeleton)) {
    pUVar11 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar11,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar12 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1f8,pUVar12);
    local_1f8._8_8_ = pUVar11;
    pUVar13 = (USkeletalMesh *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1f8);
    if (local_1f8._64_8_ != 0) {
      plVar22 = (longlong *)(local_1f8 + 0x50);
      if ((longlong *)local_1f8._104_8_ != (longlong *)0x0) {
        plVar22 = (longlong *)local_1f8._104_8_;
      }
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
    pUVar11 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar11,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar12 = Z_Construct_UClass_USkeleton_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_178,pUVar12);
    local_178._8_8_ = pUVar11;
    pUVar14 = (USkeleton *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_178);
    if (local_178._64_8_ != 0) {
      plVar22 = (longlong *)(local_178 + 0x50);
      if ((longlong *)local_178._104_8_ != (longlong *)0x0) {
        plVar22 = (longlong *)local_178._104_8_;
      }
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
    if ((pUVar13 != (USkeletalMesh *)0x0) && (pUVar14 != (USkeleton *)0x0)) {
      pFVar15 = FDataflowNode::GetValue<FManagedArrayCollection>
                          ((FDataflowNode *)this,param_1,&this->Collection);
      FManagedArrayCollection::FManagedArrayCollection(&local_f8,pFVar15);
      pTVar16 = FDataflowNode::
                GetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
                          ((FDataflowNode *)this,param_1,&this->Materials);
      Chaos::Facades::FCollectionHierarchyFacade::FCollectionHierarchyFacade(&local_2a8,&local_f8);
      bVar8 = Chaos::Facades::FCollectionHierarchyFacade::IsValid(&local_2a8);
      if (bVar8) {
        Chaos::Facades::FCollectionHierarchyFacade::GenerateLevelAttribute(&local_2a8);
      }
      iVar1 = pTVar16->ArrayNum;
      pFVar2 = (pTVar16->AllocatorInstance).Data;
      local_2f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_2f8.ArrayNum = iVar1;
      if (iVar1 == 0) {
        local_2f8.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar1,0,&local_2f8.AllocatorInstance,iVar1,&local_2f8.ArrayMax);
        ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
                  (local_2f8.AllocatorInstance.Data,(TObjectPtr<UMaterialInterface> *)pFVar2,iVar1);
      }
      FGeometryCollectionEngineConversion::ConvertCollectionToSkeletalMesh
                (&local_f8,&local_2f8,pUVar13,pUVar14);
      FManagedArrayCollection::~FManagedArrayCollection(&local_f8);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (USkeletalMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar13);
    }
    local_2d8.Index = -1;
    local_2d8.ContainerReference = (void *)0x0;
    local_2d8.Reference = &this->SkeletalMesh;
    pFVar17 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_2d8);
    if (pFVar17 == (FDataflowOutput *)0x0) {
      `FDataflowNode::SetValue<TObjectPtr<USkeletalMesh_const_>,TObjectPtr<USkeletalMesh_const_>_>'
      ::__l7::<lambda_1>::operator()(local_318);
    }
    else if (pFVar17->_padding_ != 0) {
      FVar18 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)pFVar17);
      local_308 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)pFVar17);
      local_2e0 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)pFVar17,&local_2c0);
      local_300 = (FProperty *)pFVar17->_padding_;
      uVar19 = CityHash64((char *)&pFVar17->_padding_,0x10);
      local_310 = (undefined8 *)0x0;
      puVar20 = ::operator_new(0x50);
      if (puVar20 == (undefined8 *)0x0) {
        puVar20 = (undefined8 *)0x0;
      }
      else {
        uVar4 = *(undefined8 *)local_2e0;
        uVar5 = *(undefined8 *)&local_2e0->C;
        puVar20[6] = *(undefined8 *)FVar18.Value;
        *puVar20 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
        puVar20[4] = local_300;
        *(uint *)(puVar20 + 5) = local_308;
        *(undefined4 *)(puVar20 + 1) = 3;
        *(undefined8 *)((longlong)puVar20 + 0xc) = uVar4;
        *(undefined8 *)((longlong)puVar20 + 0x14) = uVar5;
        puVar20[7] = &___7FGCObject__6B_;
        *(undefined2 *)(puVar20 + 8) = 0;
        FGCObject::RegisterGCObject((FGCObject *)(puVar20 + 7));
        *puVar20 = &UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_>::
                    _vftable__for__UE__Dataflow__FContextCacheElementBase__;
        puVar20[7] = &UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeletalMesh_const_>_>::
                      _vftable__for__FGCObject__;
        puVar20[9] = pUVar13;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar13 != (USkeletalMesh *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar13);
        }
      }
      puVar7 = local_310;
      if (local_310 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)*local_310;
        local_310 = puVar20;
        (*(code *)*puVar3)(puVar7,1);
        puVar20 = local_310;
      }
      local_310 = puVar20;
      if (local_310 == (undefined8 *)0x0) {
        UE::Dataflow::FContext::SetNullData
                  (param_1,(uint)uVar19,local_300,local_2e0,local_308,(FTimestamp *)FVar18.Value);
      }
      else {
        (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar19 & 0xffffffff,&local_310);
      }
      if (local_310 != (undefined8 *)0x0) {
        (**(code **)*local_310)(local_310,1);
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (USkeleton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar14);
    }
    local_2d8.Reference = &this->Skeleton;
    local_2d8.Index = -1;
    local_2d8.ContainerReference = (void *)0x0;
    pFVar17 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_2d8);
    if (pFVar17 == (FDataflowOutput *)0x0) {
      `FDataflowNode::SetValue<TObjectPtr<USkeleton_const_>,TObjectPtr<USkeleton_const_>_>'::__l7::
      <lambda_1>::operator()(local_318);
    }
    else if (pFVar17->_padding_ != 0) {
      FVar18 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)pFVar17);
      uVar9 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)pFVar17);
      pFVar21 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)pFVar17,&local_2c0);
      local_300 = (FProperty *)pFVar17->_padding_;
      uVar19 = CityHash64((char *)&pFVar17->_padding_,0x10);
      local_310 = (undefined8 *)0x0;
      puVar20 = ::operator_new(0x50);
      if (puVar20 == (undefined8 *)0x0) {
        puVar20 = (undefined8 *)0x0;
      }
      else {
        uVar4 = *(undefined8 *)FVar18.Value;
        uVar5 = *(undefined8 *)pFVar21;
        uVar6 = *(undefined8 *)&pFVar21->C;
        *puVar20 = &___7FContextCacheElementBase_Dataflow_UE__6B_;
        puVar20[4] = local_300;
        puVar20[6] = uVar4;
        *(undefined4 *)(puVar20 + 1) = 3;
        *(undefined8 *)((longlong)puVar20 + 0xc) = uVar5;
        *(undefined8 *)((longlong)puVar20 + 0x14) = uVar6;
        *(uint *)(puVar20 + 5) = uVar9;
        puVar20[7] = &___7FGCObject__6B_;
        *(undefined2 *)(puVar20 + 8) = 0;
        FGCObject::RegisterGCObject((FGCObject *)(puVar20 + 7));
        *puVar20 = &UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_>::
                    _vftable__for__UE__Dataflow__FContextCacheElementBase__;
        puVar20[7] = &UE::Dataflow::TContextCacheElementUObject<TObjectPtr<USkeleton_const_>_>::
                      _vftable__for__FGCObject__;
        puVar20[9] = pUVar14;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (USkeleton *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar14);
        }
      }
      puVar7 = local_310;
      if (local_310 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)*local_310;
        local_310 = puVar20;
        (*(code *)*puVar3)(puVar7,1);
        puVar20 = local_310;
      }
      local_310 = puVar20;
      if (local_310 == (undefined8 *)0x0) {
        UE::Dataflow::FContext::SetNullData
                  (param_1,(uint)uVar19,local_300,pFVar21,uVar9,(FTimestamp *)FVar18.Value);
      }
      else {
        (**(code **)(param_1->_padding_ + 0x28))(param_1,uVar19 & 0xffffffff,&local_310);
      }
      if (local_310 != (undefined8 *)0x0) {
        (**(code **)*local_310)(local_310,1);
      }
    }
  }
  return;
}

// FCollectionToSkeletalMeshDataflowNode @ 14e9168d0

FCollectionToSkeletalMeshDataflowNode * __thiscall
FCollectionToSkeletalMeshDataflowNode::FCollectionToSkeletalMeshDataflowNode
          (FCollectionToSkeletalMeshDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *pFVar1;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this->_padding_ = (longlong)&___7FCollectionToSkeletalMeshDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  (this->SkeletalMesh).field0_0x0.DebugPtr = (USkeletalMesh *)0x0;
  (this->Skeleton).field0_0x0.DebugPtr = (USkeleton *)0x0;
  local_68.ContainerReference = (void *)0x0;
  local_68.Index = -1;
  local_68.Reference = &this->Collection;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->Materials;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->SkeletalMesh;
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
  local_48.Reference = &this->Skeleton;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  return this;
}

