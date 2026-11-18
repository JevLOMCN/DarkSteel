// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 14

// StaticStruct @ 14e847be0

UScriptStruct * __cdecl FMeshProcessorDataflowNodeBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMeshProcessorDataflowNodeBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMeshProcessorDataflowNodeBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMeshProcessorDataflowNodeBase,(UObject *)pUVar1,
                         L"MeshProcessorDataflowNodeBase");
  }
  return Z_Registration_Info_UScriptStruct_FMeshProcessorDataflowNodeBase.OuterSingleton;
}

// PostSerialize @ 14e84d6d0

void __thiscall
FMeshProcessorDataflowNodeBase::PostSerialize
          (FMeshProcessorDataflowNodeBase *this,FArchive *param_1)

{
  return;
}

// GetOwner @ 14e84d760

FDataflowNode * __thiscall
FMeshProcessorDataflowNodeBase::GetOwner
          (FMeshProcessorDataflowNodeBase *this,FDataflowDynamicConnections *param_1)

{
  return (FDataflowNode *)&this[-1]._padding_;
}

// GetPropertyBag @ 14e84d840

FInstancedPropertyBag * __thiscall
FMeshProcessorDataflowNodeBase::GetPropertyBag
          (FMeshProcessorDataflowNodeBase *this,FDataflowDynamicConnections *param_1)

{
  return (FInstancedPropertyBag *)&this->_padding_;
}

// OnPropertyChanged @ 14e84d9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FMeshProcessorDataflowNodeBase::OnPropertyChanged
          (FMeshProcessorDataflowNodeBase *this,FContext *param_1,FPropertyChangedEvent *param_2)

{
  int iVar1;
  FProperty *pFVar2;
  FName FVar3;
  UObject *pUVar4;
  bool bVar5;
  FName *pFVar6;
  FName FVar7;
  UClass *pUVar8;
  UDynamicMeshProcessorBlueprint *pUVar9;
  longlong *plVar10;
  UClass *pUVar11;
  undefined1 auStack_d8 [32];
  FName local_b8 [2];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2->ChangeType != 0x10) {
    return;
  }
  pFVar6 = ::FName::FName(local_b8,0xd,L"MeshProcessor",FNAME_Add);
  pFVar2 = param_2->Property;
  FVar3 = *pFVar6;
  if ((pFVar2 == (FProperty *)0x0) || (bVar5 = IsThisNotNull(pFVar2,"FField::GetFName"), !bVar5)) {
    FVar7.ComparisonIndex.Value = 0;
    FVar7.Number = 0;
    local_b8[0].ComparisonIndex.Value = 0;
    local_b8[0].Number = 0;
  }
  else {
    FVar7 = (FName)pFVar2->_padding_;
  }
  if (FVar7 != FVar3) {
    return;
  }
  pUVar11 = (this->MeshProcessor).Class.field0_0x0.DebugPtr;
  if ((pUVar11 == (UClass *)0x0) ||
     (pUVar8 = Z_Construct_UClass_UDynamicMeshProcessorBlueprint_NoRegister(),
     pUVar8 == (UClass *)0x0)) {
LAB_14e84dba9:
    (this->MeshProcessorInstance).field0_0x0.DebugPtr = (UDynamicMeshProcessorBlueprint *)0x0;
    return;
  }
  iVar1 = (int)pUVar8->_padding_;
  if (((int)pUVar11->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar1 * 8) != &pUVar8->_padding_))
  {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((!bVar5) ||
     (pUVar11 = (this->MeshProcessor).Class.field0_0x0.DebugPtr, pUVar11 == (UClass *)0x0))
  goto LAB_14e84dba9;
  local_b8[0].ComparisonIndex.Value = 0;
  local_b8[0].Number = 0;
  pUVar8 = Z_Construct_UClass_UDynamicMeshProcessorBlueprint_NoRegister();
  FVar3 = local_b8[0];
  if (pUVar8 != (UClass *)0x0) {
    iVar1 = (int)pUVar8->_padding_;
    if (((int)pUVar11->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar1 * 8) != &pUVar8->_padding_
       )) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pUVar11 = (this->MeshProcessor).Class.field0_0x0.DebugPtr;
      goto LAB_14e84daee;
    }
  }
  pUVar11 = (UClass *)0x0;
LAB_14e84daee:
  pUVar4 = (this->OwningObject).field0_0x0.DebugPtr;
  if (local_b8[0] == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar8 = Z_Construct_UClass_UDynamicMeshProcessorBlueprint_NoRegister();
  CheckIsClassChildOf_Internal(pUVar8,pUVar11);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar11);
  FVar7 = local_b8[0];
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_b8[0].ComparisonIndex = FVar3.ComparisonIndex.Value;
  local_b8[0].Number = FVar3.Number;
  local_a8._16_4_ = local_b8[0].ComparisonIndex.Value;
  local_a8._20_4_ = local_b8[0].Number;
  local_a8._24_4_ = RF_Transactional;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_b8[0] = FVar7;
  local_a8._8_8_ = pUVar4;
  pUVar9 = (UDynamicMeshProcessorBlueprint *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar10 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 != (UDynamicMeshProcessorBlueprint *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  (this->MeshProcessorInstance).field0_0x0.DebugPtr = pUVar9;
  return;
}

// EvaluateOnGameThreadOnly @ 14e84dc10

bool __thiscall
FMeshProcessorDataflowNodeBase::EvaluateOnGameThreadOnly(FMeshProcessorDataflowNodeBase *this)

{
  UDynamicMeshProcessorBlueprint *pUVar1;
  
  pUVar1 = (this->MeshProcessorInstance).field0_0x0.DebugPtr;
  if ((pUVar1 != (UDynamicMeshProcessorBlueprint *)0x0) && (pUVar1->bRequiresGameThread != false)) {
    return true;
  }
  return false;
}

// FMeshProcessorDataflowNodeBase @ 14e925bb0

FMeshProcessorDataflowNodeBase * __thiscall
FMeshProcessorDataflowNodeBase::FMeshProcessorDataflowNodeBase
          (FMeshProcessorDataflowNodeBase *this,FNodeParameters *param_1,FGuid *param_2)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UDataflow *pUVar4;
  FGuid local_18;
  
  local_18.A = param_2->A;
  local_18.B = param_2->B;
  local_18.C = param_2->C;
  local_18.D = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,&local_18);
  (this->MeshProcessor).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FDataflowNode__;
  this->_padding_ = (longlong)&_vftable__for__FDataflowDynamicConnections__IOwnerInterface__;
  (this->MeshProcessorInstance).field0_0x0.DebugPtr = (UDynamicMeshProcessorBlueprint *)0x0;
  (this->BlueprintChangeDelegateHandle).ID = 0;
  pUVar2 = param_1->OwningObject;
  (this->OwningObject).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  pUVar4 = (UDataflow *)param_1->OwningObject;
  if (pUVar4 != (UDataflow *)0x0) {
    pUVar3 = Z_Construct_UClass_UDataflow_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_14e925c63;
  }
  pUVar4 = (UDataflow *)0x0;
LAB_14e925c63:
  FDataflowDynamicConnections::FDataflowDynamicConnections
            (&this->DynamicConnections,INPUT,(IOwnerInterface *)&this->_padding_,pUVar4);
  FInstancedStruct::FInstancedStruct(&(this->PropertyBag).Value);
  return this;
}

// FMeshProcessorDataflowNodeBase @ 14e925cb0

FMeshProcessorDataflowNodeBase * __thiscall
FMeshProcessorDataflowNodeBase::FMeshProcessorDataflowNodeBase(FMeshProcessorDataflowNodeBase *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&_vftable__for__FDataflowNode__;
  this->_padding_ = (longlong)&_vftable__for__FDataflowDynamicConnections__IOwnerInterface__;
  (this->MeshProcessor).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->MeshProcessorInstance).field0_0x0.DebugPtr = (UDynamicMeshProcessorBlueprint *)0x0;
  (this->BlueprintChangeDelegateHandle).ID = 0;
  (this->OwningObject).field0_0x0.DebugPtr = (UObject *)0x0;
  FDataflowDynamicConnections::FDataflowDynamicConnections(&this->DynamicConnections);
  FInstancedStruct::FInstancedStruct(&(this->PropertyBag).Value);
  return this;
}

// ~FMeshProcessorDataflowNodeBase @ 14e933910

void __thiscall
FMeshProcessorDataflowNodeBase::~FMeshProcessorDataflowNodeBase
          (FMeshProcessorDataflowNodeBase *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__FDataflowNode__;
  this->_padding_ = (longlong)&_vftable__for__FDataflowDynamicConnections__IOwnerInterface__;
  FInstancedStruct::Reset(&(this->PropertyBag).Value);
  *(undefined4 *)&(this->DynamicConnections).ConnectionNameToPropertyId.field_0x48 = 0;
  pvVar1 = *(void **)&(this->DynamicConnections).ConnectionNameToPropertyId.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->DynamicConnections).ConnectionNameToPropertyId);
  pFVar2 = (this->DynamicConnections).DynamicProperties.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  return;
}

// operator= @ 14e934260

FMeshProcessorDataflowNodeBase * __thiscall
FMeshProcessorDataflowNodeBase::operator=
          (FMeshProcessorDataflowNodeBase *this,FMeshProcessorDataflowNodeBase *param_1)

{
  int *piVar1;
  TMap<FName,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGuid,0>_> *pTVar2;
  TMap<FName,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGuid,0>_> *this_00;
  undefined1 *puVar3;
  undefined1 *this_01;
  FDataflowDynamicConnections *pFVar4;
  int iVar5;
  int iVar6;
  UClass *pUVar7;
  UDynamicMeshProcessorBlueprint *pUVar8;
  UObject *pUVar9;
  FScriptContainerElement *_Src;
  code *pcVar10;
  bool bVar11;
  FMeshProcessorDataflowNodeBase *pFVar12;
  
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("!\"Enclosing block should never be called\"",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowNode.h"
                      ,0x51,L"");
  if (!bVar11) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 = (param_1->MeshProcessor).Class.field0_0x0.DebugPtr, pUVar7 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->MeshProcessor).Class.field0_0x0 = (param_1->MeshProcessor).Class.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 = (param_1->MeshProcessorInstance).field0_0x0.DebugPtr,
       pUVar8 != (UDynamicMeshProcessorBlueprint *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->MeshProcessorInstance).field0_0x0 = (param_1->MeshProcessorInstance).field0_0x0;
    (this->BlueprintChangeDelegateHandle).ID = (param_1->BlueprintChangeDelegateHandle).ID;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 = (param_1->OwningObject).field0_0x0.DebugPtr, pUVar9 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar9);
    }
    pFVar4 = &this->DynamicConnections;
    (this->OwningObject).field0_0x0 = (param_1->OwningObject).field0_0x0;
    if (pFVar4 != &param_1->DynamicConnections) {
      iVar5 = (param_1->DynamicConnections).DynamicProperties.ArrayNum;
      piVar1 = &(this->DynamicConnections).DynamicProperties.ArrayMax;
      _Src = (param_1->DynamicConnections).DynamicProperties.AllocatorInstance.Data;
      iVar6 = *piVar1;
      (this->DynamicConnections).DynamicProperties.ArrayNum = iVar5;
      if ((iVar5 == 0) && (iVar6 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar5,iVar6,(ForAnyElementType *)pFVar4,iVar5,piVar1);
        if (iVar5 != 0) {
          memcpy((pFVar4->DynamicProperties).AllocatorInstance.Data,_Src,(longlong)iVar5);
        }
      }
    }
    pTVar2 = &(param_1->DynamicConnections).ConnectionNameToPropertyId;
    this_00 = &(this->DynamicConnections).ConnectionNameToPropertyId;
    if (this_00 != pTVar2) {
      UE::Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)
                 &(this->DynamicConnections).ConnectionNameToPropertyId.field_0x38,
                 (int *)&(this->DynamicConnections).ConnectionNameToPropertyId.field_0x48,
                 (ForElementType<FSetElementId> *)
                 &(param_1->DynamicConnections).ConnectionNameToPropertyId.field_0x38,
                 *(int *)&(param_1->DynamicConnections).ConnectionNameToPropertyId.field_0x48);
      iVar5 = *(int *)&(param_1->DynamicConnections).ConnectionNameToPropertyId.field_0x8;
      TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this_00,iVar5);
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,4,iVar5,(ForAnyElementType *)this_00,
                 (int *)&(this->DynamicConnections).ConnectionNameToPropertyId.field_0x8,
                 (int *)&(this->DynamicConnections).ConnectionNameToPropertyId.field_0xc);
      puVar3 = &(param_1->DynamicConnections).ConnectionNameToPropertyId.field_0x10;
      this_01 = &(this->DynamicConnections).ConnectionNameToPropertyId.field_0x10;
      *(undefined4 *)&(this->DynamicConnections).ConnectionNameToPropertyId.field_0x30 =
           *(undefined4 *)&(param_1->DynamicConnections).ConnectionNameToPropertyId.field_0x30;
      *(undefined4 *)&(this->DynamicConnections).ConnectionNameToPropertyId.field_0x34 =
           *(undefined4 *)&(param_1->DynamicConnections).ConnectionNameToPropertyId.field_0x34;
      if (this_01 != puVar3) {
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  ((TBitArray<FDefaultBitArrayAllocator> *)this_01,
                   (TBitArray<FDefaultBitArrayAllocator> *)puVar3);
      }
      if (iVar5 != 0) {
        memcpy(*(void **)this_00,*(void **)pTVar2,(longlong)iVar5 << 5);
      }
    }
    (this->DynamicConnections).PinDirection = (param_1->DynamicConnections).PinDirection;
    (this->DynamicConnections).OwnerInterface = (param_1->DynamicConnections).OwnerInterface;
    (this->DynamicConnections).DataflowAssetWeakPtr.WeakPtr =
         (param_1->DynamicConnections).DataflowAssetWeakPtr.WeakPtr;
    if (&this->PropertyBag != &param_1->PropertyBag) {
      FInstancedStruct::InitializeAs
                (&(this->PropertyBag).Value,
                 (param_1->PropertyBag).Value.ScriptStruct.field0_0x0.DebugPtr,
                 (param_1->PropertyBag).Value.StructMemory);
    }
    return this;
  }
  pcVar10 = (code *)swi(3);
  pFVar12 = (FMeshProcessorDataflowNodeBase *)(*pcVar10)();
  return pFVar12;
}

// ApplyParametersToBlueprintInstance @ 14e9399c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMeshProcessorDataflowNodeBase::ApplyParametersToBlueprintInstance
          (FMeshProcessorDataflowNodeBase *this,FContext *param_1)

{
  if (1 < (byte)LogGeometryCollectionMeshNodes._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&::LOG_Static,(FLogCategoryBase *)&LogGeometryCollectionMeshNodes);
    return;
  }
  return;
}

// RefreshConnectionsFromBlueprint @ 14e959720

void __thiscall
FMeshProcessorDataflowNodeBase::RefreshConnectionsFromBlueprint
          (FMeshProcessorDataflowNodeBase *this)

{
  return;
}

// SetupBlueprintEvent @ 14e95af60

void __thiscall
FMeshProcessorDataflowNodeBase::SetupBlueprintEvent(FMeshProcessorDataflowNodeBase *this)

{
  return;
}

// TeardownBlueprintEvent @ 14e95cc30

void __thiscall
FMeshProcessorDataflowNodeBase::TeardownBlueprintEvent(FMeshProcessorDataflowNodeBase *this)

{
  return;
}

