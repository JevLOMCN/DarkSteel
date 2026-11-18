// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 22

// StaticClass @ 14e11bc20

UClass * __cdecl UOptimusNode_FunctionReference::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode_FunctionReference.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode_FunctionReference",
               &Z_Registration_Info_UClass_UOptimusNode_FunctionReference.InnerSingleton,
               StaticRegisterNativesUOptimusNode_FunctionReference,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusNode_FunctionReference>,
               InternalVTableHelperCtorCaller<UOptimusNode_FunctionReference>,local_res8,
               UOptimusNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode_FunctionReference.InnerSingleton;
}

// UOptimusNode_FunctionReference @ 14e15ba00

UOptimusNode_FunctionReference * __thiscall
UOptimusNode_FunctionReference::UOptimusNode_FunctionReference
          (UOptimusNode_FunctionReference *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UOptimusNode::UOptimusNode((UOptimusNode *)this,param_1);
  this_00 = &(this->FunctionGraph_DEPRECATED).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&_vftable__for__UOptimusNode__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodePinRouter__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodeGraphProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodeSubGraphReferencer__;
  (this->FunctionGraphIdentifier).Asset.field0_0x0.DebugPtr = (UOptimusDeformer *)0x0;
  (this->FunctionGraphIdentifier).Guid.A = 0;
  (this->FunctionGraphIdentifier).Guid.B = 0;
  (this->FunctionGraphIdentifier).Guid.C = 0;
  (this->FunctionGraphIdentifier).Guid.D = 0;
  (this->DefaultComponentPin).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ResolvedFunctionGraph).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->FunctionGraph_DEPRECATED).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->FunctionGraph_DEPRECATED).SoftObjectPtr = 0;
  *(undefined8 *)&(this->FunctionGraph_DEPRECATED).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->FunctionGraph_DEPRECATED).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this->bDelayResolvingGraph = false;
  return this;
}

// UOptimusNode_FunctionReference @ 14e15bab0

UOptimusNode_FunctionReference * __thiscall
UOptimusNode_FunctionReference::UOptimusNode_FunctionReference(UOptimusNode_FunctionReference *this)

{
  undefined1 *this_00;
  
  UOptimusNode::UOptimusNode((UOptimusNode *)this);
  this_00 = &(this->FunctionGraph_DEPRECATED).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&_vftable__for__UOptimusNode__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodePinRouter__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodeGraphProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodeSubGraphReferencer__;
  (this->FunctionGraphIdentifier).Asset.field0_0x0.DebugPtr = (UOptimusDeformer *)0x0;
  (this->FunctionGraphIdentifier).Guid.A = 0;
  (this->FunctionGraphIdentifier).Guid.B = 0;
  (this->FunctionGraphIdentifier).Guid.C = 0;
  (this->FunctionGraphIdentifier).Guid.D = 0;
  (this->DefaultComponentPin).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ResolvedFunctionGraph).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->FunctionGraph_DEPRECATED).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->FunctionGraph_DEPRECATED).SoftObjectPtr = 0;
  *(undefined8 *)&(this->FunctionGraph_DEPRECATED).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->FunctionGraph_DEPRECATED).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this->bDelayResolvingGraph = false;
  return this;
}

// ~UOptimusNode_FunctionReference @ 14e163720

void __thiscall
UOptimusNode_FunctionReference::~UOptimusNode_FunctionReference
          (UOptimusNode_FunctionReference *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UOptimusNode__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodePinRouter__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodeGraphProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusNodeSubGraphReferencer__;
  pvVar1 = *(void **)&(this->FunctionGraph_DEPRECATED).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7IOptimusNodeSubGraphReferencer__6B_;
  this->_padding_ = (longlong)&___7IOptimusNodeGraphProvider__6B_;
  this->_padding_ = (longlong)&___7IOptimusNodePinRouter__6B_;
  UOptimusNode::~UOptimusNode((UOptimusNode *)this);
  return;
}

// ConstructNode @ 14e193540

void __thiscall UOptimusNode_FunctionReference::ConstructNode(UOptimusNode_FunctionReference *this)

{
  int iVar1;
  ForAnyElementType _Src;
  bool bVar2;
  FOptimusDataTypeRegistry *this_00;
  UClass *pUVar3;
  TSharedPtr<FOptimusDataType_const_,1> *pTVar4;
  UObject *pUVar5;
  size_t _Size;
  FName *pFVar6;
  FName *pFVar7;
  UOptimusNodePin *local_res8;
  undefined1 local_e8 [16];
  FSoftObjectPath local_d8;
  undefined1 local_b8 [8];
  FName local_b0;
  FName local_a8;
  FName FStack_a0;
  FUtf8String local_98;
  TSharedPtr<FOptimusDataType_const_,1> local_88;
  FOptimusDataDomain local_78;
  TSharedPtr<FOptimusDataType_const_,1> local_38;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->ResolvedFunctionGraph).WeakPtr);
  if (bVar2) {
    this_00 = FOptimusDataTypeRegistry::Get();
    pUVar3 = UOptimusComponentSourceBinding::StaticClass();
    pTVar4 = FOptimusDataTypeRegistry::FindType(this_00,&local_38,pUVar3);
    local_b8._0_4_ = 0;
    local_b8._4_4_ = 0;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    local_b0.ComparisonIndex.Value = 0;
    local_b0.Number = 0;
    FStack_a0.ComparisonIndex.Value = 0;
    FStack_a0.Number = 0;
    local_a8.ComparisonIndex.Value = 0;
    local_a8.Number = 0;
    FUtf8String::Reset(&local_98,0);
    local_88.SharedReferenceCount.ReferenceController =
         (pTVar4->SharedReferenceCount).ReferenceController;
    local_88.Object = pTVar4->Object;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FOptimusDataTypeRef::Set((FOptimusDataTypeRef *)local_b8,&local_88);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar4->SharedReferenceCount).ReferenceController);
    _Src.Data = local_98.Data.AllocatorInstance.Data;
    _Size = (size_t)local_98.Data.ArrayNum;
    local_e8._0_8_ = local_b8;
    local_e8._8_4_ = local_b0.ComparisonIndex.Value;
    local_e8._12_4_ = local_b0.Number;
    local_d8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.SubPathString.Data.ArrayNum = local_98.Data.ArrayNum;
    local_d8.AssetPath.PackageName = local_a8;
    local_d8.AssetPath.AssetName = FStack_a0;
    if (local_98.Data.ArrayNum == 0) {
      local_d8.SubPathString.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_98.Data.ArrayNum,0,(ForAnyElementType *)&local_d8.SubPathString,
                 local_98.Data.ArrayNum,&local_d8.SubPathString.Data.ArrayMax);
      memcpy(local_d8.SubPathString.Data.AllocatorInstance.Data,_Src.Data,_Size);
    }
    local_78.Type = Dimensional;
    local_78._4_4_ = 0;
    local_78.DimensionNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.DimensionNames.ArrayNum = 0;
    local_78.DimensionNames.ArrayMax = 0;
    local_78.Multiplier = 0;
    local_78._28_4_ = 0;
    local_78.Expression.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Expression.Data.ArrayNum = 0;
    local_78.Expression.Data.ArrayMax = 0;
    local_78.LevelNames_DEPRECATED.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.LevelNames_DEPRECATED.ArrayNum = 0;
    local_78.LevelNames_DEPRECATED.ArrayMax = 0;
    FOptimusDataDomain::FOptimusDataDomain(&local_78);
    local_res8 = UOptimusNode::AddPinDirect
                           ((UOptimusNode *)this,UOptimusNodeSubGraph::GraphDefaultComponentPinName,
                            Input,&local_78,(FOptimusDataTypeRef *)local_e8,(UOptimusNodePin *)0x0,
                            (UOptimusNodePin *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8 != (UOptimusNodePin *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    FWeakObjectPtr::operator=(&(this->DefaultComponentPin).WeakPtr,(FObjectPtr)&local_res8);
    if (local_78.LevelNames_DEPRECATED.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.LevelNames_DEPRECATED.AllocatorInstance.Data);
    }
    if (local_78.Expression.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Expression.Data.AllocatorInstance.Data);
    }
    if (local_78.DimensionNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.DimensionNames.AllocatorInstance.Data);
    }
    pUVar5 = FWeakObjectPtr::Get(&(this->ResolvedFunctionGraph).WeakPtr);
    iVar1 = *(int *)&pUVar5[4].field_0x8;
    pFVar6 = *(FName **)(pUVar5 + 4);
    pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
    while( true ) {
      if (*(int *)&pUVar5[4].field_0x8 != iVar1) {
        `TCheckedPointerIterator<FOptimusParameterBinding,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar6 == pFVar7) break;
      local_e8._0_8_ = pFVar6[1];
      local_e8._8_8_ = pFVar6[2];
      FSoftObjectPath::FSoftObjectPath(&local_d8,(FSoftObjectPath *)(pFVar6 + 3));
      UOptimusNode::AddPinDirect
                ((UOptimusNode *)this,*pFVar6,Input,(FOptimusDataDomain *)(pFVar6 + 7),
                 (FOptimusDataTypeRef *)local_e8,(UOptimusNodePin *)0x0,(UOptimusNodePin *)0x0);
      pFVar6 = pFVar6 + 0x10;
    }
    pUVar5 = FWeakObjectPtr::Get(&(this->ResolvedFunctionGraph).WeakPtr);
    iVar1 = *(int *)&pUVar5[4].field_0x18;
    pFVar6 = *(FName **)&pUVar5[4].field_0x10;
    pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
    while( true ) {
      if (*(int *)&pUVar5[4].field_0x18 != iVar1) {
        `TCheckedPointerIterator<FOptimusParameterBinding,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar6 == pFVar7) break;
      local_e8._0_8_ = pFVar6[1];
      local_e8._8_8_ = pFVar6[2];
      FSoftObjectPath::FSoftObjectPath(&local_d8,(FSoftObjectPath *)(pFVar6 + 3));
      UOptimusNode::AddPinDirect
                ((UOptimusNode *)this,*pFVar6,Output,(FOptimusDataDomain *)(pFVar6 + 7),
                 (FOptimusDataTypeRef *)local_e8,(UOptimusNodePin *)0x0,(UOptimusNodePin *)0x0);
      pFVar6 = pFVar6 + 0x10;
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetDefaultComponentBinding @ 14e1c2b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UOptimusComponentSourceBinding * __thiscall
UOptimusNode_FunctionReference::GetDefaultComponentBinding
          (UOptimusNode_FunctionReference *this,FOptimusPinTraversalContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UOptimusComponentSourceBinding *pUVar4;
  UClass *pUVar5;
  UOptimusNodePin *pUVar6;
  longlong *plVar7;
  UOptimusDeformer *this_00;
  TArray<UOptimusComponentSourceBinding_*,TSizedDefaultAllocator<32>_> *pTVar8;
  UOptimusNodeSubGraph *this_01;
  undefined1 auStackY_a8 [32];
  TArray<UOptimusComponentSourceBinding_*,TSizedDefaultAllocator<32>_> local_78;
  TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
  local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1545918137541591162>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_FunctionReference.cpp"
                       ,0x7a,"DefaultComponentPin.IsValid()");
    if (!bVar3) {
      return (UOptimusComponentSourceBinding *)0x0;
    }
    pcVar2 = (code *)swi(3);
    pUVar4 = (UOptimusComponentSourceBinding *)(*pcVar2)();
    return pUVar4;
  }
  this_01 = (UOptimusNodeSubGraph *)this[-1]._padding_;
  if (this_01 == (UOptimusNodeSubGraph *)0x0) {
LAB_14e1c2c0d:
    this_01 = (UOptimusNodeSubGraph *)0x0;
  }
  else {
    pUVar5 = UOptimusNodeGraph::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(this_01->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar5->_padding_)) goto LAB_14e1c2c0d;
  }
  pUVar6 = (UOptimusNodePin *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UOptimusNodeGraph::GetComponentSourceBindingsForPin
            ((UOptimusNodeGraph *)this_01,&local_68,pUVar6,param_1);
  if (local_68.Elements._8_4_ != local_68.Elements._52_4_) {
    if (local_68.Elements._8_4_ - local_68.Elements._52_4_ == 1) {
      pTVar8 = TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
               ::Array(&local_68,&local_78);
      if ((pTVar8->ArrayNum < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar4 = (UOptimusComponentSourceBinding *)(*pcVar2)();
        return pUVar4;
      }
      pUVar4 = *(UOptimusComponentSourceBinding **)(pTVar8->AllocatorInstance).Data;
      if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.AllocatorInstance.Data);
      }
      goto LAB_14e1c2d70;
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1545918137541591170>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_FunctionReference.cpp"
                       ,0x82,"Bindings.Num() == 1");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UOptimusComponentSourceBinding *)(*pcVar2)();
      return pUVar4;
    }
  }
  plVar7 = (longlong *)(**(code **)(this_01->_padding_ + 0x10))(&this_01->_padding_);
  if ((plVar7 != (longlong *)0x0) &&
     (this_00 = (UOptimusDeformer *)(**(code **)(*plVar7 + 8))(plVar7),
     this_00 != (UOptimusDeformer *)0x0)) {
    pUVar5 = UOptimusDeformer::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      pUVar4 = UOptimusDeformer::GetPrimaryComponentBinding(this_00);
      goto LAB_14e1c2d70;
    }
  }
  pUVar5 = UOptimusNodeSubGraph::StaticClass();
  iVar1 = (int)pUVar5->_padding_;
  if (((*(int *)(this_01->_padding_ + 0x38) < iVar1) ||
      ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
       != &pUVar5->_padding_)) || (this_01 == (UOptimusNodeSubGraph *)0x0)) {
    pUVar4 = (UOptimusComponentSourceBinding *)0x0;
  }
  else {
    pUVar4 = UOptimusNodeSubGraph::GetDefaultComponentBinding(this_01,param_1);
  }
LAB_14e1c2d70:
  local_68.HashSize = 0;
  if (local_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_68.Elements);
  return pUVar4;
}

// GetDefaultComponentBindingPin @ 14e1c31c0

UOptimusNodePin * __thiscall
UOptimusNode_FunctionReference::GetDefaultComponentBindingPin(UOptimusNode_FunctionReference *this)

{
  UOptimusNodePin *pUVar1;
  
  pUVar1 = (UOptimusNodePin *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  return pUVar1;
}

// GetDisplayName @ 14e1c48b0

FText * __thiscall
UOptimusNode_FunctionReference::GetDisplayName
          (UOptimusNode_FunctionReference *this,FText *__return_storage_ptr__)

{
  bool bVar1;
  UObject *pUVar2;
  FName local_res8;
  FString local_18;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->ResolvedFunctionGraph).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->ResolvedFunctionGraph).WeakPtr);
    local_res8.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
    local_res8.Number = *(uint *)&pUVar2->field_0x1c;
    ::FName::ToString(&local_res8,&local_18);
    FText::FromString(__return_storage_ptr__,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  else {
    FText::FromString(__return_storage_ptr__,"<graph missing>");
  }
  return __return_storage_ptr__;
}

// GetNodeCategory @ 14e1cadf0

FName __thiscall
UOptimusNode_FunctionReference::GetNodeCategory(UOptimusNode_FunctionReference *this)

{
  bool bVar1;
  UObject *pUVar2;
  FName in_RDX;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->ResolvedFunctionGraph).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->ResolvedFunctionGraph).WeakPtr);
    *(undefined8 *)in_RDX = *(undefined8 *)&pUVar2[9].field_0x18;
    return in_RDX;
  }
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetNodeGraphToShow @ 14e1caf90

UOptimusNodeGraph * __thiscall
UOptimusNode_FunctionReference::GetNodeGraphToShow(UOptimusNode_FunctionReference *this)

{
  UOptimusNodeGraph *pUVar1;
  
  pUVar1 = (UOptimusNodeGraph *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  return pUVar1;
}

// GetPinCounterpart @ 14e1cc970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

FOptimusRoutedNodePin * __thiscall
UOptimusNode_FunctionReference::GetPinCounterpart
          (UOptimusNode_FunctionReference *this,FOptimusRoutedNodePin *__return_storage_ptr__,
          UOptimusNodePin *param_1,FOptimusPinTraversalContext *param_2)

{
  code *pcVar1;
  bool bVar2;
  UOptimusNode *pUVar3;
  UOptimusNodeSubGraph *this_00;
  UOptimusNode_GraphTerminal *this_01;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  ForElementType<IOptimusNodePinRouter_const_*> FVar5;
  FOptimusRoutedNodePin *pFVar6;
  longlong lVar7;
  EOptimusTerminalType EVar8;
  undefined1 auStackY_f8 [32];
  UOptimusNode_FunctionReference *local_a8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_a0;
  UOptimusNodePin *local_90;
  FOptimusPinTraversalContext local_88;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if ((param_1 == (UOptimusNodePin *)0x0) ||
     (pUVar3 = UOptimusNodePin::GetOwningNode(param_1),
     pUVar3 != (UOptimusNode *)&this[-1]._padding_)) {
    __return_storage_ptr__->NodePin = (UOptimusNodePin *)0x0;
    (__return_storage_ptr__->TraversalContext).ReferenceNesting.AllocatorInstance.SecondaryData =
         (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
    (__return_storage_ptr__->TraversalContext).ReferenceNesting.ArrayNum = 0;
    (__return_storage_ptr__->TraversalContext).ReferenceNesting.ArrayMax = 4;
    return __return_storage_ptr__;
  }
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (!bVar2) {
    __return_storage_ptr__->NodePin = (UOptimusNodePin *)0x0;
    (__return_storage_ptr__->TraversalContext).ReferenceNesting.AllocatorInstance.SecondaryData =
         (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
    (__return_storage_ptr__->TraversalContext).ReferenceNesting.ArrayNum = 0;
    (__return_storage_ptr__->TraversalContext).ReferenceNesting.ArrayMax = 4;
    return __return_storage_ptr__;
  }
  if (param_1->Direction == Input) {
    EVar8 = Entry;
  }
  else {
    if (param_1->Direction != Output) goto LAB_14e1ccb90;
    EVar8 = Return;
  }
  this_00 = (UOptimusNodeSubGraph *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  this_01 = UOptimusNodeSubGraph::GetTerminalNode(this_00,EVar8);
  if (this_01 != (UOptimusNode_GraphTerminal *)0x0) {
    pTVar4 = UOptimusNodePin::GetPinNamePath(param_1,&local_a0);
    local_90 = UOptimusNode::FindPinFromPath((UOptimusNode *)this_01,pTVar4);
    if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.AllocatorInstance.Data);
    }
    FOptimusPinTraversalContext::FOptimusPinTraversalContext(&local_88,param_2);
    local_a8 = this;
    if (this == (UOptimusNode_FunctionReference *)&DAT_00000108) {
      local_a8 = (UOptimusNode_FunctionReference *)0x0;
    }
    FVar5 = (ForElementType<IOptimusNodePinRouter_const_*>)&local_88;
    if (local_88.ReferenceNesting.AllocatorInstance.SecondaryData !=
        (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
      FVar5 = local_88.ReferenceNesting.AllocatorInstance.SecondaryData;
    }
    if ((ulonglong)FVar5 <= &local_a8) {
      FVar5 = (ForElementType<IOptimusNodePinRouter_const_*>)&local_88;
      if (local_88.ReferenceNesting.AllocatorInstance.SecondaryData !=
          (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
        FVar5 = local_88.ReferenceNesting.AllocatorInstance.SecondaryData;
      }
      if ((&local_a8 <
           (UOptimusNode_FunctionReference **)
           ((longlong)FVar5 + (longlong)local_88.ReferenceNesting.ArrayMax * 8)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar6 = (FOptimusRoutedNodePin *)(*pcVar1)();
        return pFVar6;
      }
    }
    if (local_88.ReferenceNesting.ArrayNum == local_88.ReferenceNesting.ArrayMax) {
      local_88.ReferenceNesting.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<IOptimusNodePinRouter_const_*>_>
                     (0x808,(ForElementType<IOptimusNodePinRouter_const_*> *)&local_88,
                      &local_88.ReferenceNesting.ArrayMax);
    }
    lVar7 = (longlong)local_88.ReferenceNesting.ArrayNum;
    FVar5 = (ForElementType<IOptimusNodePinRouter_const_*>)&local_88;
    if (local_88.ReferenceNesting.AllocatorInstance.SecondaryData !=
        (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
      FVar5 = local_88.ReferenceNesting.AllocatorInstance.SecondaryData;
    }
    local_88.ReferenceNesting.ArrayNum = local_88.ReferenceNesting.ArrayNum + 1;
    *(UOptimusNode_FunctionReference **)((longlong)FVar5 + lVar7 * 8) = local_a8;
    __return_storage_ptr__->NodePin = local_90;
    FOptimusPinTraversalContext::FOptimusPinTraversalContext
              (&__return_storage_ptr__->TraversalContext,&local_88);
    if (local_88.ReferenceNesting.AllocatorInstance.SecondaryData ==
        (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free((void *)local_88.ReferenceNesting.AllocatorInstance.SecondaryData);
    return __return_storage_ptr__;
  }
LAB_14e1ccb90:
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1545918137541591136>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Nodes\\OptimusNode_FunctionReference.cpp"
                     ,0x60,"CounterpartNode");
  if (!bVar2) {
    __return_storage_ptr__->NodePin = (UOptimusNodePin *)0x0;
    (__return_storage_ptr__->TraversalContext).ReferenceNesting.AllocatorInstance.SecondaryData =
         (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
    (__return_storage_ptr__->TraversalContext).ReferenceNesting.ArrayNum = 0;
    (__return_storage_ptr__->TraversalContext).ReferenceNesting.ArrayMax = 4;
    return __return_storage_ptr__;
  }
  pcVar1 = (code *)swi(3);
  pFVar6 = (FOptimusRoutedNodePin *)(*pcVar1)();
  return pFVar6;
}

// GetPrivateStaticClass @ 14e1d79a0

UClass * __cdecl UOptimusNode_FunctionReference::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNode_FunctionReference.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNode_FunctionReference",
               &Z_Registration_Info_UClass_UOptimusNode_FunctionReference.InnerSingleton,
               StaticRegisterNativesUOptimusNode_FunctionReference,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusNode_FunctionReference>,
               InternalVTableHelperCtorCaller<UOptimusNode_FunctionReference>,local_res8,
               UOptimusNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNode_FunctionReference.InnerSingleton;
}

// GetReferencedFunctionGraphIdentifier @ 14e1db730

FOptimusFunctionGraphIdentifier * __thiscall
UOptimusNode_FunctionReference::GetReferencedFunctionGraphIdentifier
          (UOptimusNode_FunctionReference *this)

{
  return &this->FunctionGraphIdentifier;
}

// GetReferencedSubGraph @ 14e1db740

UOptimusNodeSubGraph * __thiscall
UOptimusNode_FunctionReference::GetReferencedSubGraph(UOptimusNode_FunctionReference *this)

{
  UOptimusNodeSubGraph *pUVar1;
  
  pUVar1 = (UOptimusNodeSubGraph *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  return pUVar1;
}

// InitializeTransientData @ 14e1ed980

void __thiscall
UOptimusNode_FunctionReference::InitializeTransientData(UOptimusNode_FunctionReference *this)

{
  UOptimusDeformer *this_00;
  bool bVar1;
  FText *pFVar2;
  UOptimusFunctionNodeGraph *local_res8;
  FGuid local_18;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->ResolvedFunctionGraph).WeakPtr);
  if (!bVar1) {
    this_00 = (this->FunctionGraphIdentifier).Asset.field0_0x0.DebugPtr;
    if (this_00 == (UOptimusDeformer *)0x0) {
      local_res8 = (UOptimusFunctionNodeGraph *)0x0;
    }
    else {
      local_18.A = (this->FunctionGraphIdentifier).Guid.A;
      local_18.B = (this->FunctionGraphIdentifier).Guid.B;
      local_18.C = (this->FunctionGraphIdentifier).Guid.C;
      local_18.D = (this->FunctionGraphIdentifier).Guid.D;
      local_res8 = UOptimusDeformer::FindFunctionByGuid(this_00,&local_18);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8 != (UOptimusFunctionNodeGraph *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    FWeakObjectPtr::operator=(&(this->ResolvedFunctionGraph).WeakPtr,(FObjectPtr)&local_res8);
  }
  pFVar2 = (FText *)(**(code **)(this->_padding_ + 0x2d8))(this,&local_18);
  UOptimusNode::SetDisplayName((UOptimusNode *)this,pFVar2);
  return;
}

// PostLoadNodeSpecificData @ 14e1ff030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UOptimusNode_FunctionReference::PostLoadNodeSpecificData(UOptimusNode_FunctionReference *this)

{
  TSoftObjectPtr<UOptimusFunctionNodeGraph> *this_00;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  FName this_01;
  UClass *pUVar5;
  UOptimusDeformer *pUVar6;
  FGuid *pFVar7;
  UPackage *pUVar8;
  FName local_res10;
  FGuid local_58;
  undefined1 local_48 [48];
  
  UOptimusNode::PostLoadNodeSpecificData((UOptimusNode *)this);
  local_58 = FOptimusObjectVersion::GUID;
  iVar4 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_58);
  if ((iVar4 < 0xe) && (*(longlong *)&(this->FunctionGraph_DEPRECATED).SoftObjectPtr.field_0x8 != 0)
     ) {
    this_00 = &this->FunctionGraph_DEPRECATED;
    this_01 = (FName)TPersistentObjectPtr<FSoftObjectPath>::Get
                               ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
    if (this_01 == (FName)0x0) {
      if (*(longlong *)&(this->FunctionGraph_DEPRECATED).SoftObjectPtr.field_0x8 == 0) {
        return;
      }
      FSoftObjectPath::TryLoad
                ((FSoftObjectPath *)&(this->FunctionGraph_DEPRECATED).SoftObjectPtr.field_0x8,
                 (FUObjectSerializeContext *)0x0);
      this_01 = (FName)TPersistentObjectPtr<FSoftObjectPath>::Get
                                 ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
    }
    if (this_01 != (FName)0x0) {
      pUVar5 = UOptimusFunctionNodeGraph::StaticClass();
      iVar4 = (int)pUVar5->_padding_;
      if ((iVar4 <= *(int *)(*(longlong *)((longlong)this_01 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)((longlong)this_01 + 0x10) + 0x30) + (longlong)iVar4 * 8) ==
          &pUVar5->_padding_)) {
        pUVar5 = UOptimusDeformer::StaticClass();
        pUVar6 = (UOptimusDeformer *)
                 UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_01,pUVar5);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar6 != (UOptimusDeformer *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar6);
        }
        (this->FunctionGraphIdentifier).Asset.field0_0x0.DebugPtr = pUVar6;
        local_48._0_8_ = *(undefined8 *)&this_00->SoftObjectPtr;
        FSoftObjectPath::FSoftObjectPath
                  ((FSoftObjectPath *)(local_48 + 8),
                   (FSoftObjectPath *)&(this->FunctionGraph_DEPRECATED).SoftObjectPtr.field_0x8);
        pFVar7 = UOptimusFunctionNodeGraph::GetGuidForGraphWithoutGuid
                           (&local_58,(TSoftObjectPtr<UOptimusFunctionNodeGraph> *)local_48);
        uVar1 = pFVar7->B;
        uVar2 = pFVar7->C;
        uVar3 = pFVar7->D;
        (this->FunctionGraphIdentifier).Guid.A = pFVar7->A;
        (this->FunctionGraphIdentifier).Guid.B = uVar1;
        (this->FunctionGraphIdentifier).Guid.C = uVar2;
        (this->FunctionGraphIdentifier).Guid.D = uVar3;
        local_res10 = this_01;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        FWeakObjectPtr::operator=(&(this->ResolvedFunctionGraph).WeakPtr,(FObjectPtr)&local_res10);
        *(undefined8 *)&this_00->SoftObjectPtr = 0;
        *(undefined8 *)&(this->FunctionGraph_DEPRECATED).SoftObjectPtr.field_0x10 = 0;
        *(undefined8 *)&(this->FunctionGraph_DEPRECATED).SoftObjectPtr.field_0x8 = 0;
        local_res10.ComparisonIndex.Value = 0;
        local_res10.Number = 0;
        FUtf8String::Reset((FUtf8String *)&(this->FunctionGraph_DEPRECATED).SoftObjectPtr.field_0x18
                           ,0);
        if (2 < (byte)LogOptimusCore._0_1_) {
          pUVar8 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
          local_res10 = (FName)pUVar8->_padding_;
          ::FName::ToString(&local_res10,(FString *)&local_58);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOptimusCore);
          if ((void *)local_58._0_8_ != (void *)0x0) {
            FMemory::Free((void *)local_58._0_8_);
          }
        }
      }
    }
  }
  return;
}

// SetReferencedFunctionGraph @ 14e220db0

void __thiscall
UOptimusNode_FunctionReference::SetReferencedFunctionGraph
          (UOptimusNode_FunctionReference *this,FOptimusFunctionGraphIdentifier *param_1)

{
  UOptimusDeformer *pUVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->Asset).field0_0x0.DebugPtr, pUVar1 != (UOptimusDeformer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->FunctionGraphIdentifier).Asset.field0_0x0 = (param_1->Asset).field0_0x0;
  uVar2 = (param_1->Guid).B;
  uVar3 = (param_1->Guid).C;
  uVar4 = (param_1->Guid).D;
  (this->FunctionGraphIdentifier).Guid.A = (param_1->Guid).A;
  (this->FunctionGraphIdentifier).Guid.B = uVar2;
  (this->FunctionGraphIdentifier).Guid.C = uVar3;
  (this->FunctionGraphIdentifier).Guid.D = uVar4;
  return;
}

// StaticRegisterNativesUOptimusNode_FunctionReference @ 14e225cc0

void __cdecl
UOptimusNode_FunctionReference::StaticRegisterNativesUOptimusNode_FunctionReference(void)

{
  return;
}

// UpdateDisplayName @ 14e22c250

void __thiscall
UOptimusNode_FunctionReference::UpdateDisplayName(UOptimusNode_FunctionReference *this)

{
  FText *pFVar1;
  undefined1 local_18 [16];
  
  pFVar1 = (FText *)(**(code **)(this->_padding_ + 0x2d8))(this,local_18);
  UOptimusNode::SetDisplayName((UOptimusNode *)this,pFVar1);
  return;
}

// _getUObject @ 14e238ef0

UObject * __thiscall
UOptimusNode_FunctionReference::_getUObject(UOptimusNode_FunctionReference *this)

{
  return (UObject *)&this[-1]._padding_;
}

// _getUObject`adjustor{8}' @ 14e238f00

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UOptimusNode_FunctionReference::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall
UOptimusNode_FunctionReference::_getUObject_adjustor_8__(UOptimusNode_FunctionReference *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UOptimusNode_FunctionReference *)&this[-1].bDelayResolvingGraph);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{16}' @ 14e238f10

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UOptimusNode_FunctionReference::_getUObject`adjustor{16}' (void)const __ptr64 */

UObject * __thiscall
UOptimusNode_FunctionReference::_getUObject_adjustor_16__(UOptimusNode_FunctionReference *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UOptimusNode_FunctionReference *)
                       &this[-1].FunctionGraph_DEPRECATED.SoftObjectPtr.field_0x20);
  return (UObject *)pUVar1;
}

