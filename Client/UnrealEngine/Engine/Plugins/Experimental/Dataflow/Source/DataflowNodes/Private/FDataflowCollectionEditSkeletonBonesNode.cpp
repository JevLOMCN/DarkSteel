// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 17

// StaticStruct @ 14dabf800

UScriptStruct * __cdecl FDataflowCollectionEditSkeletonBonesNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowCollectionEditSkeletonBonesNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FDataflowCollectionEditSkeletonBonesNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowCollectionEditSkeletonBonesNode,
                         (UObject *)pUVar1,L"DataflowCollectionEditSkeletonBonesNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowCollectionEditSkeletonBonesNode.OuterSingleton;
}

// GetType @ 14dabf840

FName __thiscall
FDataflowCollectionEditSkeletonBonesNode::GetType(FDataflowCollectionEditSkeletonBonesNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowCollectionEditSkeletonBonesNode");
  return in_RDX;
}

// IsA @ 14dabf870

bool __thiscall
FDataflowCollectionEditSkeletonBonesNode::IsA
          (FDataflowCollectionEditSkeletonBonesNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowCollectionEditSkeletonBonesNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14dabf8d8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14dabf8d8:
    if (!bVar5) {
      bVar5 = FDataflowPrimitiveNode::IsA((FDataflowPrimitiveNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14dabf8f6;
      }
    }
  }
  bVar5 = true;
LAB_14dabf8f6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14dabf930

FStructOnScope * __thiscall
FDataflowCollectionEditSkeletonBonesNode::NewStructOnScope
          (FDataflowCollectionEditSkeletonBonesNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowCollectionEditSkeletonBonesNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowNodes();
      Z_Registration_Info_UScriptStruct_FDataflowCollectionEditSkeletonBonesNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowCollectionEditSkeletonBonesNode,
                           (UObject *)pUVar2,L"DataflowCollectionEditSkeletonBonesNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowCollectionEditSkeletonBonesNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14dabf9b0

void __thiscall
FDataflowCollectionEditSkeletonBonesNode::SerializeInternal
          (FDataflowCollectionEditSkeletonBonesNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowCollectionEditSkeletonBonesNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FDataflowCollectionEditSkeletonBonesNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowCollectionEditSkeletonBonesNode,
                         (UObject *)pUVar1,L"DataflowCollectionEditSkeletonBonesNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FDataflowCollectionEditSkeletonBonesNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FDataflowCollectionEditSkeletonBonesNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014dabfa2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14dabfa40

FName __thiscall
FDataflowCollectionEditSkeletonBonesNode::GetDisplayName
          (FDataflowCollectionEditSkeletonBonesNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"EditSkeletonBones");
  return in_RDX;
}

// GetCategory @ 14dabfa70

FName __thiscall
FDataflowCollectionEditSkeletonBonesNode::GetCategory
          (FDataflowCollectionEditSkeletonBonesNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Collection");
  return in_RDX;
}

// GetTags @ 14dabfaa0

FString * __thiscall
FDataflowCollectionEditSkeletonBonesNode::GetTags
          (FDataflowCollectionEditSkeletonBonesNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Edit skeleton bones");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14dabfad0

UScriptStruct * __thiscall
FDataflowCollectionEditSkeletonBonesNode::TypedScriptStruct
          (FDataflowCollectionEditSkeletonBonesNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowCollectionEditSkeletonBonesNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FDataflowCollectionEditSkeletonBonesNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowCollectionEditSkeletonBonesNode,
                         (UObject *)pUVar1,L"DataflowCollectionEditSkeletonBonesNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowCollectionEditSkeletonBonesNode.OuterSingleton;
}

// GetRenderParametersImpl @ 14dabfb10

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
FDataflowCollectionEditSkeletonBonesNode::GetRenderParametersImpl
          (FDataflowCollectionEditSkeletonBonesNode *this,
          TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FDataflowAddScalarVertexPropertyCallbackRegistry *this_00;
  
  this_00 = FDataflowAddScalarVertexPropertyCallbackRegistry::Get();
  FDataflowAddScalarVertexPropertyCallbackRegistry::GetRenderingParameters
            (this_00,__return_storage_ptr__,&(this->VertexGroup).Name);
  return __return_storage_ptr__;
}

// Evaluate @ 14dabfb50

void __thiscall
FDataflowCollectionEditSkeletonBonesNode::Evaluate
          (FDataflowCollectionEditSkeletonBonesNode *this,FContext *param_1,FDataflowOutput *param_2
          )

{
  FManagedArrayCollection *pFVar1;
  TObjectPtr<USkeleton> *pTVar2;
  FProperty *pFVar3;
  void *pvVar4;
  uint uVar5;
  undefined1 *puVar6;
  FDataflowInput *pFVar7;
  FDataflowOutput *this_00;
  FTimestamp FVar8;
  FGuid *pFVar9;
  ulong64 uVar10;
  undefined1 local_res8 [8];
  FConnectionReference local_78;
  FConnectionReference local_60;
  FConnectionReference local_48;
  
  pFVar1 = &this->Collection;
  puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar6 == pFVar1) {
    local_60.ContainerReference = (void *)0x0;
    local_60.Index = -1;
    local_60.Reference = pFVar1;
    pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_60);
    pvVar4 = local_60.Reference;
    if (pFVar7->Connection != (FDataflowOutput *)0x0) {
      local_78.Index = -1;
      local_78.ContainerReference = (void *)0x0;
      local_78.Reference = pFVar1;
      FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_60,&local_78);
      return;
    }
    local_48.Index = -1;
    local_48.ContainerReference = (void *)0x0;
    local_48.Reference = pFVar1;
    this_00 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_48);
    if (this_00 == (FDataflowOutput *)0x0) {
      `FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>'::__l7::
      <lambda_1>::operator()(local_res8);
    }
    else if (this_00->_padding_ != 0) {
      FVar8 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
      uVar5 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
      pFVar9 = FDataflowConnection::GetOwningNodeGuid
                         ((FDataflowConnection *)this_00,(FGuid *)&local_78);
      pFVar3 = (FProperty *)this_00->_padding_;
      uVar10 = CityHash64((char *)&this_00->_padding_,0x10);
      UE::Dataflow::FContext::SetData<FManagedArrayCollection_const_&>
                (param_1,(uint)uVar10,pFVar3,pvVar4,pFVar9,uVar5,(FTimestamp *)FVar8.Value);
    }
  }
  else {
    pTVar2 = &this->Skeleton;
    puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((TObjectPtr<USkeleton> *)puVar6 == pTVar2) {
      if ((this->ToolSkeleton).field0_0x0.DebugPtr != (USkeleton *)0x0) {
        FDataflowNode::SetValue<TObjectPtr<USkeleton>_const_&,TObjectPtr<USkeleton>_>
                  ((FDataflowNode *)this,param_1,&this->ToolSkeleton,pTVar2);
        return;
      }
      local_60.ContainerReference = (void *)0x0;
      local_60.Index = -1;
      local_60.Reference = pTVar2;
      pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_60);
      if (pFVar7->Connection == (FDataflowOutput *)0x0) {
        FDataflowNode::SetValue<TObjectPtr<USkeleton>_const_&,TObjectPtr<USkeleton>_>
                  ((FDataflowNode *)this,param_1,local_60.Reference,pTVar2);
        return;
      }
      local_48.Index = -1;
      local_48.ContainerReference = (void *)0x0;
      local_48.Reference = pTVar2;
      FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_60,&local_48);
      return;
    }
  }
  return;
}

// AddPrimitiveComponents @ 14dabfd60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FDataflowCollectionEditSkeletonBonesNode::AddPrimitiveComponents
          (FDataflowCollectionEditSkeletonBonesNode *this,FContext *param_1,
          TSharedPtr<FManagedArrayCollection_const_,1> *param_2,TObjectPtr<UObject> param_3,
          TObjectPtr<AActor> param_4,
          TArray<TObjectPtr<UPrimitiveComponent>,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  TArray<TObjectPtr<USkeletalMesh>,TSizedDefaultAllocator<32>_> *pTVar2;
  TObjectPtr<USkeleton> TVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FDataflowInput *this_00;
  TObjectPtr<USkeleton>_u_0 *pTVar10;
  UClass *pUVar11;
  USkeleton *pUVar12;
  FString *pFVar13;
  FName *pFVar14;
  FName FVar15;
  FName FVar16;
  USkeletalMeshComponent *pUVar17;
  uint uVar18;
  ForAnyElementType FVar19;
  int iVar20;
  ulonglong uVar21;
  uint uVar22;
  USkeletalMesh *local_628;
  USkeletalMeshComponent *local_620;
  FString local_618;
  USkeleton *local_608;
  undefined8 local_600;
  FString local_5f8;
  FString local_5e8;
  longlong local_5d8;
  FString local_5d0;
  FConnectionReference local_5c0;
  FName local_5a8;
  undefined1 local_5a0 [16];
  FName local_590;
  FString local_588;
  FString local_578;
  FString local_568;
  FRenderingFacade local_558;
  ulonglong uVar23;
  
  if (*(longlong *)param_4.field0_0x0 == 0) goto LAB_14dac046f;
  pUVar12 = (this->ToolSkeleton).field0_0x0.DebugPtr;
  local_608 = pUVar12;
  if (pUVar12 == (USkeleton *)0x0) {
    local_5c0.Index = -1;
    local_5c0.ContainerReference = (void *)0x0;
    local_5c0.Reference = &this->Skeleton;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_5c0);
    pTVar10 = &FDataflowInput::GetValue<TObjectPtr<USkeleton>_>(this_00,param_1,&this->Skeleton)->
               field0_0x0;
    TVar3.field0_0x0 = (TObjectPtr<USkeleton>_u_0)pTVar10->DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar3.field0_0x0 != (USkeleton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar3.field0_0x0);
    }
    local_600 = 0;
    pUVar11 = Z_Construct_UClass_USkeleton_NoRegister();
    pUVar12 = (USkeleton *)
              DuplicateObject_Internal
                        (pUVar11,(UObject *)TVar3.field0_0x0,(UObject *)0x0,(FName)0x0);
    local_608 = pUVar12;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (USkeleton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    (this->ToolSkeleton).field0_0x0.DebugPtr = pUVar12;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar12 == (USkeleton *)0x0) goto LAB_14dac046f;
    UE::GC::MarkAsReachable((UObject *)pUVar12);
  }
  if (pUVar12 == (USkeleton *)0x0) goto LAB_14dac046f;
  if ((param_2->Object == (FManagedArrayCollection *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  GeometryCollection::Facades::FRenderingFacade::FRenderingFacade(&local_558,param_2->Object);
  bVar7 = GeometryCollection::Facades::FRenderingFacade::IsValid(&local_558);
  if (bVar7) {
    if (local_558.GeometryNameAttribute.ConstAttributeArray == (TManagedArray<FString> *)0x0) {
      iVar8 = FManagedArrayCollection::NumElements
                        (local_558.GeometryNameAttribute.ConstCollection,
                         local_558.GeometryNameAttribute.Group);
    }
    else {
      iVar8 = (**(code **)(*(longlong *)local_558.GeometryNameAttribute.ConstAttributeArray + 0x60))
                        ();
    }
  }
  else {
    iVar8 = 0;
  }
  pTVar2 = &this->SkeletalMeshes;
  iVar20 = (this->SkeletalMeshes).ArrayNum;
  if (iVar20 == iVar8) {
    if (this->bValidSkeletalMeshes == false) {
      if (iVar20 != iVar8) goto LAB_14dabff0c;
      goto LAB_14dac0169;
    }
  }
  else {
LAB_14dabff0c:
    piVar1 = &(this->SkeletalMeshes).ArrayMax;
    iVar20 = 0;
    (this->SkeletalMeshes).ArrayNum = 0;
    if ((this->SkeletalMeshes).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
    if (0 < iVar8) {
      do {
        local_5f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_5f8.Data.ArrayNum = 0;
        local_5f8.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_5f8,iVar20);
        pFVar13 = ::FString::FString(&local_588,"SK_DataflowSkeletalMesh_");
        ::FString::ConcatFF(&local_618,pFVar13,&local_5f8);
        if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_588.Data.AllocatorInstance.Data);
        }
        if (local_5f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5f8.Data.AllocatorInstance.Data);
        }
        FVar19.Data = (FScriptContainerElement *)L"";
        if (local_618.Data.ArrayNum != 0) {
          FVar19.Data = local_618.Data.AllocatorInstance.Data;
        }
        pFVar14 = ::FName::FName(&local_5a8,(wchar_t *)FVar19.Data);
        FVar16 = *pFVar14;
        FVar15 = (FName)Z_Construct_UClass_USkeletalMesh_NoRegister();
        FVar16 = MakeUniqueObjectName
                           ((UObject *)local_5a0,*(UClass **)param_3.field0_0x0,FVar15,
                            FVar16.ComparisonIndex.Value.Value);
        pFVar13 = ::FName::ToString((FName *)FVar16,&local_578);
        if (&local_618 != pFVar13) {
          if (local_618.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_618.Data.AllocatorInstance.Data);
          }
          local_618.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
          (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_618.Data.ArrayNum = (pFVar13->Data).ArrayNum;
          local_618.Data.ArrayMax = (pFVar13->Data).ArrayMax;
          (pFVar13->Data).ArrayNum = 0;
          (pFVar13->Data).ArrayMax = 0;
        }
        if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_578.Data.AllocatorInstance.Data);
        }
        FVar19.Data = (FScriptContainerElement *)L"";
        if (local_618.Data.ArrayNum != 0) {
          FVar19.Data = local_618.Data.AllocatorInstance.Data;
        }
        pFVar14 = ::FName::FName((FName *)(local_5a0 + 8),(wchar_t *)FVar19.Data);
        local_628 = NewObject<USkeletalMesh>
                              (*(UObject **)param_3.field0_0x0,*pFVar14,RF_Transient,(UObject *)0x0,
                               false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_628 != (USkeletalMesh *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_628);
        }
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_628) &&
            ((FScriptContainerElement *)&local_628 < pFVar4 + (longlong)*piVar1 * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = (this->SkeletalMeshes).ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->SkeletalMeshes).ArrayNum = iVar9 + 1;
        *(USkeletalMesh **)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_628;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_628 != (USkeletalMesh *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_628);
        }
        if (local_618.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_618.Data.AllocatorInstance.Data);
        }
        iVar20 = iVar20 + 1;
      } while (iVar20 < iVar8);
    }
LAB_14dac0169:
    bVar7 = UE::Dataflow::Private::BuildSkeletalMeshes(pTVar2,param_2,&local_608->ReferenceSkeleton)
    ;
    this->bValidSkeletalMeshes = bVar7;
    if (!bVar7) {
      (this->SkeletalMeshes).ArrayNum = 0;
      if ((this->SkeletalMeshes).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->SkeletalMeshes).AllocatorInstance,0,
                   &(this->SkeletalMeshes).ArrayMax);
      }
    }
  }
  uVar21 = 0;
  if (((this->SkeletalMeshes).ArrayNum != 0) &&
     (local_5d8 = (longlong)iVar8, uVar23 = uVar21, 0 < iVar8)) {
    do {
      uVar22 = (uint)uVar23;
      local_5e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_5e8.Data.ArrayNum = 0;
      local_5e8.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_5e8,uVar22);
      pFVar13 = ::FString::FString(&local_568,"Dataflow_SkeletalMesh");
      ::FString::ConcatFF(&local_5d0,pFVar13,&local_5e8);
      iVar8 = local_5d0.Data.ArrayNum + -1;
      if (local_5d0.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      pFVar14 = ::FName::FName(&local_590,iVar8,(wchar_t *)local_5d0.Data.AllocatorInstance.Data,
                               FNAME_Add);
      FVar16 = *pFVar14;
      if (local_5d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5d0.Data.AllocatorInstance.Data);
      }
      if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_568.Data.AllocatorInstance.Data);
      }
      if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
      }
      pUVar17 = NewObject<USkeletalMeshComponent>
                          (*(UObject **)param_4.field0_0x0,FVar16,RF_NoFlags,(UObject *)0x0,false,
                           (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      uVar18 = 0;
      if ((int)uVar22 < (this->SkeletalMeshes).ArrayNum) {
        uVar18 = ~uVar22 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      plVar5 = *(longlong **)((this->SkeletalMeshes).AllocatorInstance.Data + uVar21 * 8);
      (**(code **)(*plVar5 + 0x410))(plVar5,local_608);
      pcVar6 = *(code **)(pUVar17->_padding_ + 0xb48);
      uVar18 = 0;
      if ((int)uVar22 < (this->SkeletalMeshes).ArrayNum) {
        uVar18 = ~uVar22 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (*pcVar6)(pUVar17,*(undefined8 *)((this->SkeletalMeshes).AllocatorInstance.Data + uVar21 * 8),
                1);
      local_620 = pUVar17;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar17);
      }
      pFVar4 = (param_5->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_620) &&
          ((FScriptContainerElement *)&local_620 < pFVar4 + (longlong)param_5->ArrayMax * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar8 = param_5->ArrayNum;
      if (iVar8 == param_5->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_5->AllocatorInstance,&param_5->ArrayMax);
      }
      param_5->ArrayNum = iVar8 + 1;
      *(USkeletalMeshComponent **)((param_5->AllocatorInstance).Data + (longlong)iVar8 * 8) =
           local_620;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_620 != (USkeletalMeshComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_620);
      }
      uVar21 = uVar21 + 1;
      uVar23 = (ulonglong)(uVar22 + 1);
    } while ((longlong)uVar21 < local_5d8);
  }
LAB_14dac046f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// OnInvalidate @ 14dac0490

void __thiscall
FDataflowCollectionEditSkeletonBonesNode::OnInvalidate
          (FDataflowCollectionEditSkeletonBonesNode *this)

{
  this->bValidSkeletalMeshes = false;
  return;
}

// FDataflowCollectionEditSkeletonBonesNode @ 14daccc70

FDataflowCollectionEditSkeletonBonesNode * __thiscall
FDataflowCollectionEditSkeletonBonesNode::FDataflowCollectionEditSkeletonBonesNode
          (FDataflowCollectionEditSkeletonBonesNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  TObjectPtr<USkeleton> *pTVar1;
  FDataflowOutput *pFVar2;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FDataflowCollectionEditSkeletonBonesNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pTVar1 = &this->Skeleton;
  (this->VertexGroup).Name = FGeometryCollection::VerticesGroup;
  (pTVar1->field0_0x0).DebugPtr = (USkeleton *)0x0;
  (this->ToolSkeleton).field0_0x0.DebugPtr = (USkeleton *)0x0;
  *(undefined8 *)&this->OnBoneSelectionChanged = 0;
  *(undefined8 *)&(this->OnBoneSelectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnBoneSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnBoneSelectionChanged).field_0x18 = 2;
  (this->SkeletalMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletalMeshes).ArrayNum = 0;
  (this->SkeletalMeshes).ArrayMax = 0;
  this->bValidSkeletalMeshes = false;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
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
  local_58.Reference = this_00;
  local_38.Reference = this_00;
  pFVar2 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar2,&local_58);
  }
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
  if (local_58.Reference != (TObjectPtr<USkeleton> *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar2,&local_58);
  }
  return this;
}

// FDataflowCollectionEditSkeletonBonesNode @ 14dacce00

FDataflowCollectionEditSkeletonBonesNode * __thiscall
FDataflowCollectionEditSkeletonBonesNode::FDataflowCollectionEditSkeletonBonesNode
          (FDataflowCollectionEditSkeletonBonesNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FDataflowCollectionEditSkeletonBonesNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  (this->VertexGroup).Name = FGeometryCollection::VerticesGroup;
  (this->Skeleton).field0_0x0.DebugPtr = (USkeleton *)0x0;
  (this->ToolSkeleton).field0_0x0.DebugPtr = (USkeleton *)0x0;
  *(undefined8 *)&this->OnBoneSelectionChanged = 0;
  *(undefined8 *)&(this->OnBoneSelectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnBoneSelectionChanged).field_0x10 = 0;
  (this->SkeletalMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletalMeshes).ArrayNum = 0;
  (this->SkeletalMeshes).ArrayMax = 0;
  this->bValidSkeletalMeshes = false;
  *(undefined8 *)&(this->OnBoneSelectionChanged).field_0x18 = 2;
  return this;
}

// ~FDataflowCollectionEditSkeletonBonesNode @ 14dace1e0

void __thiscall
FDataflowCollectionEditSkeletonBonesNode::~FDataflowCollectionEditSkeletonBonesNode
          (FDataflowCollectionEditSkeletonBonesNode *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->SkeletalMeshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnBoneSelectionChanged).field_0x8,
             *(int *)&(this->OnBoneSelectionChanged).field_0x10);
  pvVar2 = *(void **)&(this->OnBoneSelectionChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBoneSelectionChanged);
  FManagedArrayCollection::~FManagedArrayCollection(&this->Collection);
  this->_padding_ = (longlong)&___7FDataflowPrimitiveNode__6B_;
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  return;
}

// UpdateToolSkeleton @ 14dad92f0

TObjectPtr<USkeleton> __thiscall
FDataflowCollectionEditSkeletonBonesNode::UpdateToolSkeleton
          (FDataflowCollectionEditSkeletonBonesNode *this,FContext *param_1)

{
  TObjectPtr<USkeleton> TVar1;
  FDataflowInput *this_00;
  TObjectPtr<USkeleton>_u_0 *pTVar2;
  UClass *pUVar3;
  USkeleton *pUVar4;
  FContext *in_R8;
  FConnectionReference local_28;
  
  pUVar4 = (this->ToolSkeleton).field0_0x0.DebugPtr;
  if (pUVar4 == (USkeleton *)0x0) {
    local_28.Index = -1;
    local_28.ContainerReference = (void *)0x0;
    local_28.Reference = &this->Skeleton;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
    pTVar2 = &FDataflowInput::GetValue<TObjectPtr<USkeleton>_>(this_00,in_R8,&this->Skeleton)->
              field0_0x0;
    TVar1.field0_0x0 = (TObjectPtr<USkeleton>_u_0)pTVar2->DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar1.field0_0x0 != (USkeleton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
    }
    pUVar3 = Z_Construct_UClass_USkeleton_NoRegister();
    pUVar4 = (USkeleton *)
             DuplicateObject_Internal(pUVar3,(UObject *)TVar1.field0_0x0,(UObject *)0x0,(FName)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (USkeleton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->ToolSkeleton).field0_0x0.DebugPtr = pUVar4;
  }
  param_1->_padding_ = (longlong)pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (USkeleton *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  return (TObjectPtr<USkeleton>)(TObjectPtr<USkeleton>_u_0)param_1;
}

